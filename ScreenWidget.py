from PyQt4.QtCore import *
from PyQt4.QtGui import *

class ScreenWidget(QFrame):
    def __init__(self,parent=None):
        QFrame.__init__(self,parent);
        self.data = (0,0);
        self.cList = [];
        self.S1 = QPointF(-0.5588,-.1524);
        self.S2 = QPointF(0.0508,0.4064);
        self.S3 = QPointF(0.6858,-0.1016);
        self.S4 = QPointF(0,0);
    def setSensors(self,sList):
        self.S1 = QPointF(sList[0][0],sList[0][1]);
        self.S2 = QPointF(sList[1][0],sList[1][1]);
        self.S3 = QPointF(sList[2][0],sList[2][1]);
        self.S4 = QPointF(sList[3][0],sList[3][1]);
    def setLoc(self,data):
        """setLoc(self,data)
        data = ((float,float) , (float,float))
        """
        self.data = data;
    def setCandidate(self,candidates):
        self.cList = [];
        for c in candidates:
            self.cList.append(QPointF(c[0],c[1]));
    def drawBk(self,p):
        aCol = QColor.fromRgbF(0,0,0,0.3);
        aPen = p.pen();
        aPen.setStyle(Qt.DashLine);
        aPen.setColor(aCol);
        p.setPen(aPen);
        p.drawLine(-self.width(),0,self.width(),0);
        p.drawLine(0,-self.height(),0,self.height());
        
        aPen.setStyle(Qt.SolidLine);
        p.setPen(aPen);
        
        p.scale(self.width()/8,self.height()/8);

        for i in range(10):
            p.drawEllipse(-1*i,-1*i,2*i,2*i);
    def paintEvent(self,event):
        #when sensor location changes, update here
        
        w = self.width();
        h = self.height();
        d = self.data;
        p = QPainter(self);

        p.translate(self.width()/2,self.height()/2);
        p.scale(1,-1);
        self.drawBk(p);

        sCol = QColor.fromRgbF(0.2,0.1,0.8,0.6);
        sPen = QPen(sCol);
        sPen.setWidthF(.1);
        p.setPen(sPen);
        p.drawPoints(self.S1,self.S2,self.S3,self.S4);

        oCol = QColor.fromRgbF(0.9,0.1,0.1,1);
        oPen = QPen(oCol);
        oPen.setWidthF(.3);

        p.setPen(oPen);
        pt = QPointF(d[0],d[1]);
        p.drawPoint(pt);

        cCol = QColor.fromRgbF(0.2,0.7,0.1,0.5);
        cPen = QPen(cCol);
        cPen.setWidthF(.2);
        p.setPen(cPen);
        
        for c in self.cList:
            p.drawPoint(c);

        QFrame.paintEvent(self,event);
