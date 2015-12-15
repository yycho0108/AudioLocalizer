from PyQt4.QtGui import *
from PyQt4.QtCore import *
import historyUI

class HistoryWidget(QWidget,historyUI.Ui_Form):
    def __init__(self,parent=None):
        QWidget.__init__(self,parent);
        self.setupUi(self);
        self.diary.itemSelectionChanged.connect(self.recall);
        self.setWindowTitle('History');
    def memorize(self,x1,y1,x2,y2):
        row = self.diary.rowCount();
        self.diary.setRowCount(row+1);
        p1 = QTableWidgetItem('({0},{1})'.format(x1,y1));
        p1.setData(Qt.UserRole,[x1,y1]);
        p2 = QTableWidgetItem('({0},{1})'.format(x2,y2));
        p2.setData(Qt.UserRole,[x2,y2]);
        self.diary.setItem(row,0,p1);
        self.diary.setItem(row,1,p2);
    def recall(self):
        i = self.diary.selectedItems();
        p = i[0].data(Qt.UserRole);
        p = p.toList(); #list-of-QVariants
        self.screen.setLoc( ((p[0].toFloat()[0],p[1].toFloat()[0]),) );
        self.screen.update();

