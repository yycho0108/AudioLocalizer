from PyQt4.QtCore import *
from PyQt4.QtGui import *

class ScreenWidget(QFrame):
    def __init__(self,parent=None):
        QFrame.__init__(self,parent);
        self.data = [(0,0),(0,0)];
    def setLoc(self,data):
        """setLoc(self,data)
        data = ((float,float) , (float,float))
        """
        self.data = data;
    def paintEvent(self,event):
        #when sensor location changes, update here
        S1 = QPointF(-0.5588,-.1524);
        S2 = QPointF(0.0508,0.4064);
        S3 = QPointF(0.6858,-0.1016);
        
        w = self.width();
        h = self.height();
        d = self.data;
        p = QPainter(self);


        p.translate(self.width()/2,self.height()/2);
        p.scale(1,-1);

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
        
        aPen.setWidth(2);

        sCol = QColor.fromRgbF(0.2,0.1,0.8,0.6);
        sPen = QPen(sCol);
        sPen.setWidthF(.1);
        p.setPen(sPen);
        p.drawPoints(S1,S2,S3);

        oCol = QColor.fromRgbF(0.9,0.1,0.1,1);
        oPen = QPen(oCol);
        oPen.setWidthF(.3);

        p.setPen(oPen);
        if len(d) == 2:
            P1 = QPointF(d[0][0],d[0][1]);
            P2 = QPointF(d[1][0],d[1][1]);
            p.drawPoints(P1,P2);
        elif len(d) == 1:
            #d = list of QVariant
            P1 = QPointF(d[0][0],d[0][1]);
            p.drawPoint(P1);

        QFrame.paintEvent(self,event);
