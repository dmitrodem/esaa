# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'D:\git\esaa\EsIDAUtils\EsIDAUtils\ui\calibr_editor.ui'
#
# Created: Tue Nov 15 12:55:37 2016
#      by: pyside-uic 0.2.15 running on PySide 1.2.4
#
# WARNING! All changes made in this file will be lost!

from PySide import QtCore, QtGui

class Ui_calibr_editor(object):
    def setupUi(self, calibr_editor):
        calibr_editor.setObjectName("calibr_editor")
        calibr_editor.resize(945, 382)
        self.horizontalLayout = QtGui.QHBoxLayout(calibr_editor)
        self.horizontalLayout.setObjectName("horizontalLayout")
        self.categoryTree = QtGui.QTreeWidget(calibr_editor)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Preferred, QtGui.QSizePolicy.Expanding)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.categoryTree.sizePolicy().hasHeightForWidth())
        self.categoryTree.setSizePolicy(sizePolicy)
        self.categoryTree.setMinimumSize(QtCore.QSize(300, 0))
        self.categoryTree.setObjectName("categoryTree")
        self.categoryTree.headerItem().setText(0, "1")
        self.categoryTree.header().setVisible(False)
        self.horizontalLayout.addWidget(self.categoryTree)
        self.formLayout = QtGui.QFormLayout()
        self.formLayout.setFieldGrowthPolicy(QtGui.QFormLayout.AllNonFixedFieldsGrow)
        self.formLayout.setLabelAlignment(QtCore.Qt.AlignRight|QtCore.Qt.AlignTrailing|QtCore.Qt.AlignVCenter)
        self.formLayout.setObjectName("formLayout")
        self.label = QtGui.QLabel(calibr_editor)
        self.label.setObjectName("label")
        self.formLayout.setWidget(0, QtGui.QFormLayout.LabelRole, self.label)
        self.nameEdit = QtGui.QLineEdit(calibr_editor)
        self.nameEdit.setObjectName("nameEdit")
        self.formLayout.setWidget(0, QtGui.QFormLayout.FieldRole, self.nameEdit)
        self.label_8 = QtGui.QLabel(calibr_editor)
        self.label_8.setObjectName("label_8")
        self.formLayout.setWidget(1, QtGui.QFormLayout.LabelRole, self.label_8)
        self.typeComboBox = QtGui.QComboBox(calibr_editor)
        self.typeComboBox.setObjectName("typeComboBox")
        self.formLayout.setWidget(1, QtGui.QFormLayout.FieldRole, self.typeComboBox)
        self.label_4 = QtGui.QLabel(calibr_editor)
        self.label_4.setObjectName("label_4")
        self.formLayout.setWidget(2, QtGui.QFormLayout.LabelRole, self.label_4)
        self.addrEdit = QtGui.QLineEdit(calibr_editor)
        self.addrEdit.setObjectName("addrEdit")
        self.formLayout.setWidget(2, QtGui.QFormLayout.FieldRole, self.addrEdit)
        self.label_13 = QtGui.QLabel(calibr_editor)
        self.label_13.setObjectName("label_13")
        self.formLayout.setWidget(3, QtGui.QFormLayout.LabelRole, self.label_13)
        self.funcEdit = QtGui.QLineEdit(calibr_editor)
        self.funcEdit.setObjectName("funcEdit")
        self.formLayout.setWidget(3, QtGui.QFormLayout.FieldRole, self.funcEdit)
        self.label_7 = QtGui.QLabel(calibr_editor)
        self.label_7.setObjectName("label_7")
        self.formLayout.setWidget(4, QtGui.QFormLayout.LabelRole, self.label_7)
        self.commentEdit = QtGui.QTextEdit(calibr_editor)
        self.commentEdit.setObjectName("commentEdit")
        self.formLayout.setWidget(4, QtGui.QFormLayout.FieldRole, self.commentEdit)
        self.okButton = QtGui.QPushButton(calibr_editor)
        self.okButton.setObjectName("okButton")
        self.formLayout.setWidget(5, QtGui.QFormLayout.FieldRole, self.okButton)
        self.cancelButton = QtGui.QPushButton(calibr_editor)
        self.cancelButton.setObjectName("cancelButton")
        self.formLayout.setWidget(6, QtGui.QFormLayout.FieldRole, self.cancelButton)
        self.horizontalLayout.addLayout(self.formLayout)

        self.retranslateUi(calibr_editor)
        QtCore.QMetaObject.connectSlotsByName(calibr_editor)

    def retranslateUi(self, calibr_editor):
        calibr_editor.setWindowTitle(QtGui.QApplication.translate("calibr_editor", "calibr editor", None, QtGui.QApplication.UnicodeUTF8))
        self.label.setText(QtGui.QApplication.translate("calibr_editor", "Наименование:", None, QtGui.QApplication.UnicodeUTF8))
        self.label_8.setText(QtGui.QApplication.translate("calibr_editor", "Тип калибровки:", None, QtGui.QApplication.UnicodeUTF8))
        self.label_4.setText(QtGui.QApplication.translate("calibr_editor", "Адрес калибровки:", None, QtGui.QApplication.UnicodeUTF8))
        self.label_13.setText(QtGui.QApplication.translate("calibr_editor", "Функция преобразования:", None, QtGui.QApplication.UnicodeUTF8))
        self.label_7.setText(QtGui.QApplication.translate("calibr_editor", "Комментарий:", None, QtGui.QApplication.UnicodeUTF8))
        self.okButton.setText(QtGui.QApplication.translate("calibr_editor", "OK", None, QtGui.QApplication.UnicodeUTF8))
        self.cancelButton.setText(QtGui.QApplication.translate("calibr_editor", "Cancel", None, QtGui.QApplication.UnicodeUTF8))

