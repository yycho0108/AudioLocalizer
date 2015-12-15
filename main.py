#!/usr/bin/python3

#built-in modules
import serial, sys
import pickle
import threading
import re

#QT modules
from PyQt4 import uic
from PyQt4.QtGui import *
from PyQt4.QtCore import *

#custom modules
import mainUI
from HistoryWidget import HistoryWidget

class AudioLocator(QMainWindow,mainUI.Ui_AudioLocator):
    reception = pyqtSignal();
    def __init__(self):
        QMainWindow.__init__(self);
        self.setupUi(self);
        self.data = ['', '(0,0) or (0,0)']; #string-type
        self.actionHistory.triggered.connect(self.showHistory);
        self.history = HistoryWidget();
        #self.thread = threading.Thread(target = self.fetchData);
        #self.thread.setDaemon(True);
        #self.thread.start();
        self.reception.connect(self.update);
        self.setWindowTitle('AudioLocator');

    def showHistory(self):
        self.history.show();
    
    def fetchData(self):
        with serial.Serial(port='/dev/ttyACM0',baudrate=9600) as ser:
            while ser._isOpen:
                self.data[0] = ser.readline();
                self.data[1] = ser.readline();
                self.reception.emit();
    
    def update(self):
        QMainWindow.update(self);
        reg = r"\((.*),(.*)\) or \((.*),(.*)\)";
        ptrn = re.compile(reg);
        m = ptrn.search(self.data[1]);
        x1,y1,x2,y2 = float(m.group(1)), float(m.group(2)), float(m.group(3)), float(m.group(4));

        self.history.memorize(x1,y1,x2,y2);
        P1 = (x1,y1);
        P2 = (x2,y2);
        self.screen.setLoc((P1,P2));
        self.screen.update();
        
        x1 = repr(x1);
        y1 = repr(y1);
        x2 = repr(x2);
        y2 = repr(y2);
        
        self.x1Edit.setText(x1);
        self.y1Edit.setText(y1);
        self.x2Edit.setText(x2);
        self.y2Edit.setText(y2);


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
    sys.exit(app.exec_());
