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
import locate

class AudioLocator(QMainWindow,mainUI.Ui_AudioLocator):
    reception = pyqtSignal();
    def __init__(self):
        QMainWindow.__init__(self);
        self.setupUi(self);
        self.data = '';  #string-type
        self.actionHistory.triggered.connect(self.showHistory);
        self.history = HistoryWidget();
        #self.thread = threading.Thread(target = self.fetchData);
        #self.thread.setDaemon(True);
        #self.thread.start();
        self.reception.connect(self.parseData);
        self.setWindowTitle('AudioLocator');
    def showHistory(self):
        self.history.show();
    
    def fetchData(self):
        with serial.Serial(port='/dev/ttyACM0',baudrate=9600) as ser:
            while ser._isOpen:
                self.data = ser.readline();
                self.reception.emit();
    def parseData(self):
        reg = r"(.*) (.*) (.*) (.*)"; #4 time vals
        ptrn = re.compile(reg);
        m = ptrn.search(self.data);
        
        pt = [];
        try:
            l = [m.group(1),m.group(2),m.group(3),m.group(4)];
            for i in range(4):
                x,y  = locate.locate(l,i);
                pt.append((x,y));
                self.screen.setLoc((x,y));
                xEdit = getattr(self,('x'+str(i+1)+'Edit'));
                yEdit = getattr(self,('y'+str(i+1)+'Edit'));
                xEdit.setText(repr(x));
                yEdit.setText(repr(y));

                self.update();
            self.history.memorize(pt);
        except AttributeError:
            raise;
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
    w.data = '100.0 100.0 100.0 100.0';
    w.reception.emit();

    sys.exit(app.exec_());
