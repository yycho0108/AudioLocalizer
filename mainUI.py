# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'main.ui'
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

class Ui_AudioLocator(object):
    def setupUi(self, AudioLocator):
        AudioLocator.setObjectName(_fromUtf8("AudioLocator"))
        AudioLocator.resize(899, 822)
        self.centralwidget = QtGui.QWidget(AudioLocator)
        self.centralwidget.setObjectName(_fromUtf8("centralwidget"))
        self.gridLayout_2 = QtGui.QGridLayout(self.centralwidget)
        self.gridLayout_2.setObjectName(_fromUtf8("gridLayout_2"))
        self.splitter_4 = QtGui.QSplitter(self.centralwidget)
        self.splitter_4.setOrientation(QtCore.Qt.Vertical)
        self.splitter_4.setObjectName(_fromUtf8("splitter_4"))
        self.screen = ScreenWidget(self.splitter_4)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Preferred, QtGui.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(10)
        sizePolicy.setHeightForWidth(self.screen.sizePolicy().hasHeightForWidth())
        self.screen.setSizePolicy(sizePolicy)
        self.screen.setFrameShape(QtGui.QFrame.Box)
        self.screen.setFrameShadow(QtGui.QFrame.Raised)
        self.screen.setLineWidth(3)
        self.screen.setObjectName(_fromUtf8("screen"))
        self.splitter_3 = QtGui.QSplitter(self.splitter_4)
        self.splitter_3.setOrientation(QtCore.Qt.Vertical)
        self.splitter_3.setObjectName(_fromUtf8("splitter_3"))
        self.splitter = QtGui.QSplitter(self.splitter_3)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(1)
        sizePolicy.setHeightForWidth(self.splitter.sizePolicy().hasHeightForWidth())
        self.splitter.setSizePolicy(sizePolicy)
        self.splitter.setOrientation(QtCore.Qt.Horizontal)
        self.splitter.setObjectName(_fromUtf8("splitter"))
        self.label_2 = QtGui.QLabel(self.splitter)
        self.label_2.setObjectName(_fromUtf8("label_2"))
        self.x1Edit = QtGui.QLineEdit(self.splitter)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.x1Edit.sizePolicy().hasHeightForWidth())
        self.x1Edit.setSizePolicy(sizePolicy)
        self.x1Edit.setReadOnly(False)
        self.x1Edit.setObjectName(_fromUtf8("x1Edit"))
        self.y1Edit = QtGui.QLineEdit(self.splitter)
        self.y1Edit.setReadOnly(False)
        self.y1Edit.setObjectName(_fromUtf8("y1Edit"))
        self.splitter_2 = QtGui.QSplitter(self.splitter_3)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(1)
        sizePolicy.setHeightForWidth(self.splitter_2.sizePolicy().hasHeightForWidth())
        self.splitter_2.setSizePolicy(sizePolicy)
        self.splitter_2.setOrientation(QtCore.Qt.Horizontal)
        self.splitter_2.setObjectName(_fromUtf8("splitter_2"))
        self.label = QtGui.QLabel(self.splitter_2)
        self.label.setObjectName(_fromUtf8("label"))
        self.x2Edit = QtGui.QLineEdit(self.splitter_2)
        self.x2Edit.setReadOnly(False)
        self.x2Edit.setObjectName(_fromUtf8("x2Edit"))
        self.y2Edit = QtGui.QLineEdit(self.splitter_2)
        self.y2Edit.setReadOnly(False)
        self.y2Edit.setObjectName(_fromUtf8("y2Edit"))
        self.gridLayout_2.addWidget(self.splitter_4, 0, 0, 1, 1)
        AudioLocator.setCentralWidget(self.centralwidget)
        self.menubar = QtGui.QMenuBar(AudioLocator)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 899, 25))
        self.menubar.setDefaultUp(True)
        self.menubar.setNativeMenuBar(False)
        self.menubar.setObjectName(_fromUtf8("menubar"))
        self.menuView = QtGui.QMenu(self.menubar)
        self.menuView.setObjectName(_fromUtf8("menuView"))
        AudioLocator.setMenuBar(self.menubar)
        self.statusbar = QtGui.QStatusBar(AudioLocator)
        self.statusbar.setObjectName(_fromUtf8("statusbar"))
        AudioLocator.setStatusBar(self.statusbar)
        self.actionHistory = QtGui.QAction(AudioLocator)
        self.actionHistory.setObjectName(_fromUtf8("actionHistory"))
        self.menuView.addAction(self.actionHistory)
        self.menubar.addAction(self.menuView.menuAction())

        self.retranslateUi(AudioLocator)
        QtCore.QMetaObject.connectSlotsByName(AudioLocator)

    def retranslateUi(self, AudioLocator):
        AudioLocator.setWindowTitle(_translate("AudioLocator", "MainWindow", None))
        self.label_2.setText(_translate("AudioLocator", "Candidate 1:", None))
        self.x1Edit.setPlaceholderText(_translate("AudioLocator", "x", None))
        self.y1Edit.setPlaceholderText(_translate("AudioLocator", "y", None))
        self.label.setText(_translate("AudioLocator", "Candidate 2:", None))
        self.x2Edit.setPlaceholderText(_translate("AudioLocator", "x", None))
        self.y2Edit.setPlaceholderText(_translate("AudioLocator", "y", None))
        self.menuView.setTitle(_translate("AudioLocator", "View", None))
        self.actionHistory.setText(_translate("AudioLocator", "History", None))

from ScreenWidget import ScreenWidget
