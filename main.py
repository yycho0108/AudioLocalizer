#!/usr/bin/python

#built-in modules
import serial, sys
import pickle
import threading
import time
import re
import math

#QT modules
from PyQt4 import uic
from PyQt4.QtGui import *
from PyQt4.QtCore import *

#custom modules
import mainUI
from HistoryWidget import HistoryWidget
import Locator

def dist(p1,p2):
    return math.sqrt((p1[0] - p2[0])**2 + (p1[1] - p2[1])**2)
    #tot = 0;
    #for d in zip(p1,p2):
    #    tot += (d[0] - d[1])**2;
    #return math.sqrt(tot);

def getPair(pts):
    #[].sort(key=lambda pt:pt[0]); #sort by x
    minDist = float('Inf');
    pair = None;

    for pt1 in pts:
        for pt2 in pts:
            if pt1 is pt2:
                continue;
            d = dist(pt1,pt2);
            if minDist > d:
                minDist = d;
                pair = (pt1,pt2);
    print(minDist);
    return pair;

def getAvg(pair):
    return (pair[0][0]+pair[1][0])/2, (pair[0][1] + pair[1][1])/2;

def inToM(l):
    return l * 2.54 / 100; # in -> cm -> m

class AudioLocator(QMainWindow,mainUI.Ui_AudioLocator):
    reception = pyqtSignal();
    calcComplete = pyqtSignal(tuple);
    def __init__(self):
        QMainWindow.__init__(self);
        self.setupUi(self);
        self.data = '';  #string-type
        self.actionHistory.triggered.connect(self.showHistory);
        self.history = HistoryWidget();
        self.thread = threading.Thread(target = self.fetchData);
        self.thread.setDaemon(True);
        self.thread.start();
        self.reception.connect(self.parseData);
        self.calcComplete.connect(self.writeServo);
        self.setWindowTitle('AudioLocator');
        self.ser = None;
        #set sensor value here. Will propagate to other widgets
        self.sensors = [
                (inToM(48),inToM(0)),
                (inToM(0),inToM(-41)),
                (inToM(0),inToM(42)),
                (inToM(-48),inToM(0)),
                ];
        self.locator = Locator.Locator(self.sensors);
        self.screen.setSensors(self.sensors);
        self.history.screen.setSensors(self.sensors);

    def showHistory(self):
        self.history.show();
    
    def fetchData(self):
        with serial.Serial(port='/dev/ttyACM0',baudrate=9600) as ser:
            self.ser = ser;
            while True:#self.ser._isOpen:
                self.data = str(self.ser.readline());
                self.reception.emit();

    def writeServo(self,pt):
        x,y = pt[0],pt[1];
        print(pt);
        theta = math.atan2(y,x);
        theta = int(-math.degrees(theta)/2) % 360;
        theta = str(theta);
        print(theta);
        self.ser.write(theta.encode());

    def parseData(self):
        reg = r"\[(.*)\s(.*)\s(.*)\s(.*)(?:\s*)?\](?:\s*)?"; #4 time vals
        ptrn = re.compile(reg);
        m = ptrn.search(self.data);
        pts = [];
        try:
            l = [m.group(1),m.group(2),m.group(3),m.group(4)];
            for i in range(4):
                x,y  = self.locator.locate(l,i);
                pts.append((x,y));
                xEdit = getattr(self,('x'+str(i+1)+'Edit'));
                yEdit = getattr(self,('y'+str(i+1)+'Edit'));
                xEdit.setText(repr(x));
                yEdit.setText(repr(y));
            self.update();
            self.history.memorize(pts);
            vPts = list(filter(lambda p: not (math.isnan(p[0]) or math.isnan(p[0])), pts));
            self.screen.setCandidate(vPts);
            p = getAvg(getPair(vPts));
            self.calcComplete.emit(p);
            self.screen.setLoc(p);
        except AttributeError:
            pass;
                
    def update(self):
        QMainWindow.update(self);
        self.screen.update();

    def paintEvent(self,event):
        QMainWindow.paintEvent(self,event);
    
    def closeEvent(self,event):
        QMainWindow.closeEvent(self,event);
        self.history.close();
        event.accept();

if __name__ == "__main__":
    global app;
    app = QApplication(sys.argv);
    w = AudioLocator();
    w.show();
    #w.data = '[' + sys.argv[1] + ' ' + sys.argv[2] + ' '+ sys.argv[3] + ' ' + sys.argv[4] + ']';
    #w.reception.emit();
    sys.exit(app.exec_());
