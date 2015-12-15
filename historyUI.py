# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'history.ui'
#
# Created by: PyQt4 UI code generator 4.11.4
#
# WARNING! All changes made in this file will be lost!

from PyQt4 import QtCore, QtGui

try:
    _fromUtf8 = QtCore.QString.fromUtf8
except AttributeError:
    def _fromUtf8(s):
        return s

try:
    _encoding = QtGui.QApplication.UnicodeUTF8
    def _translate(context, text, disambig):
        return QtGui.QApplication.translate(context, text, disambig, _encoding)
except AttributeError:
    def _translate(context, text, disambig):
        return QtGui.QApplication.translate(context, text, disambig)

class Ui_History(object):
    def setupUi(self, History):
        History.setObjectName(_fromUtf8("History"))
        History.resize(752, 400)
        self.gridLayout = QtGui.QGridLayout(History)
        self.gridLayout.setObjectName(_fromUtf8("gridLayout"))
        self.splitter = QtGui.QSplitter(History)
        self.splitter.setOrientation(QtCore.Qt.Horizontal)
        self.splitter.setObjectName(_fromUtf8("splitter"))
        self.diary = QtGui.QTableWidget(self.splitter)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Expanding)
        sizePolicy.setHorizontalStretch(1)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.diary.sizePolicy().hasHeightForWidth())
        self.diary.setSizePolicy(sizePolicy)
        self.diary.setColumnCount(4)
        self.diary.setObjectName(_fromUtf8("diary"))
        self.diary.setRowCount(0)
        self.screen = ScreenWidget(self.splitter)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Preferred, QtGui.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(5)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.screen.sizePolicy().hasHeightForWidth())
        self.screen.setSizePolicy(sizePolicy)
        self.screen.setFrameShape(QtGui.QFrame.StyledPanel)
        self.screen.setFrameShadow(QtGui.QFrame.Raised)
        self.screen.setObjectName(_fromUtf8("screen"))
        self.gridLayout.addWidget(self.splitter, 0, 0, 1, 1)

        self.retranslateUi(History)
        QtCore.QMetaObject.connectSlotsByName(History)

    def retranslateUi(self, History):
        History.setWindowTitle(_translate("History", "Form", None))

from ScreenWidget import ScreenWidget
