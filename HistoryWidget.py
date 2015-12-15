from PyQt4.QtGui import *
from PyQt4.QtCore import *
import historyUI

class HistoryWidget(QWidget,historyUI.Ui_History):
    def __init__(self,parent=None):
        QWidget.__init__(self,parent);
        self.setupUi(self);
        self.diary.itemSelectionChanged.connect(self.recall);
        self.setWindowTitle('History');
    def memorize(self,pts):
        row = self.diary.rowCount();
        self.diary.setRowCount(row+1);
        for i,pt in enumerate(pts):
            item = QTableWidgetItem('({0},{1})'.format(pt[0],pt[1]));
            item.setData(Qt.UserRole,pt);
            self.diary.setItem(row,i,item);

    def recall(self):
        i = self.diary.selectedItems();
        p = i[0].data(Qt.UserRole);
        self.screen.setLoc((p[0],p[1]));
        self.screen.update();

