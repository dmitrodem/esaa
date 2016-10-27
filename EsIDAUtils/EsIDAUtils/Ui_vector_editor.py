# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'vector_editor.ui'
#
# Created: Fri Oct 14 11:16:32 2016
#      by: pyside-uic 0.2.15 running on PySide 1.2.4
#
# WARNING! All changes made in this file will be lost!

from PySide import QtCore, QtGui

class Ui_vector_editor(object):
    def setupUi(self, vector_editor):
        vector_editor.setObjectName("vector_editor")
        vector_editor.resize(784, 351)
        self.gridLayout = QtGui.QGridLayout(vector_editor)
        self.gridLayout.setObjectName("gridLayout")
        self.categoryTree = QtGui.QTreeWidget(vector_editor)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Preferred, QtGui.QSizePolicy.Expanding)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.categoryTree.sizePolicy().hasHeightForWidth())
        self.categoryTree.setSizePolicy(sizePolicy)
        self.categoryTree.setObjectName("categoryTree")
        self.categoryTree.headerItem().setText(0, "1")
        self.categoryTree.header().setVisible(False)
        self.gridLayout.addWidget(self.categoryTree, 0, 0, 2, 1)
        self.formLayout = QtGui.QFormLayout()
        self.formLayout.setFieldGrowthPolicy(QtGui.QFormLayout.AllNonFixedFieldsGrow)
        self.formLayout.setLabelAlignment(QtCore.Qt.AlignRight|QtCore.Qt.AlignTrailing|QtCore.Qt.AlignVCenter)
        self.formLayout.setObjectName("formLayout")
        self.label = QtGui.QLabel(vector_editor)
        self.label.setObjectName("label")
        self.formLayout.setWidget(0, QtGui.QFormLayout.LabelRole, self.label)
        self.nameEdit = QtGui.QLineEdit(vector_editor)
        self.nameEdit.setObjectName("nameEdit")
        self.formLayout.setWidget(0, QtGui.QFormLayout.FieldRole, self.nameEdit)
        self.label_6 = QtGui.QLabel(vector_editor)
        self.label_6.setObjectName("label_6")
        self.formLayout.setWidget(1, QtGui.QFormLayout.LabelRole, self.label_6)
        self.sizeComboBox = QtGui.QComboBox(vector_editor)
        self.sizeComboBox.setObjectName("sizeComboBox")
        self.formLayout.setWidget(1, QtGui.QFormLayout.FieldRole, self.sizeComboBox)
        self.label_3 = QtGui.QLabel(vector_editor)
        self.label_3.setObjectName("label_3")
        self.formLayout.setWidget(2, QtGui.QFormLayout.LabelRole, self.label_3)
        self.addrEdit = QtGui.QLineEdit(vector_editor)
        self.addrEdit.setObjectName("addrEdit")
        self.formLayout.setWidget(2, QtGui.QFormLayout.FieldRole, self.addrEdit)
        self.label_2 = QtGui.QLabel(vector_editor)
        self.label_2.setObjectName("label_2")
        self.formLayout.setWidget(3, QtGui.QFormLayout.LabelRole, self.label_2)
        self.axisComboBox = QtGui.QComboBox(vector_editor)
        self.axisComboBox.setObjectName("axisComboBox")
        self.formLayout.setWidget(3, QtGui.QFormLayout.FieldRole, self.axisComboBox)         
        self.label_7 = QtGui.QLabel(vector_editor)
        self.label_7.setObjectName("label_7")
        self.formLayout.setWidget(4, QtGui.QFormLayout.LabelRole, self.label_7)
        self.axisAddrEdit = QtGui.QLineEdit(vector_editor)
        self.axisAddrEdit.setObjectName("axisAddrEdit")
        self.formLayout.setWidget(4, QtGui.QFormLayout.FieldRole, self.axisAddrEdit)               
        self.label_4 = QtGui.QLabel(vector_editor)
        self.label_4.setObjectName("label_4")
        self.formLayout.setWidget(5, QtGui.QFormLayout.LabelRole, self.label_4)
        self.countEdit = QtGui.QLineEdit(vector_editor)
        self.countEdit.setObjectName("countEdit")
        self.formLayout.setWidget(5, QtGui.QFormLayout.FieldRole, self.countEdit)
        self.label_5 = QtGui.QLabel(vector_editor)
        self.label_5.setObjectName("label_5")
        self.formLayout.setWidget(6, QtGui.QFormLayout.LabelRole, self.label_5)
        self.commentEdit = QtGui.QTextEdit(vector_editor)
        self.commentEdit.setObjectName("commentEdit")
        self.formLayout.setWidget(6, QtGui.QFormLayout.FieldRole, self.commentEdit)               

        self.gridLayout.addLayout(self.formLayout, 0, 1, 1, 1)
        self.horizontalLayout = QtGui.QHBoxLayout()
        self.horizontalLayout.setObjectName("horizontalLayout")
        self.okButton = QtGui.QPushButton(vector_editor)
        self.okButton.setObjectName("okButton")
        self.horizontalLayout.addWidget(self.okButton)
        self.cancelButton = QtGui.QPushButton(vector_editor)
        self.cancelButton.setObjectName("cancelButton")
        self.horizontalLayout.addWidget(self.cancelButton)
        self.gridLayout.addLayout(self.horizontalLayout, 1, 1, 1, 1)

        self.retranslateUi(vector_editor)
        QtCore.QMetaObject.connectSlotsByName(vector_editor)

    def retranslateUi(self, vector_editor):
        vector_editor.setWindowTitle(QtGui.QApplication.translate("vector_editor", "vector editor", None, QtGui.QApplication.UnicodeUTF8))
        self.label.setText(QtGui.QApplication.translate("vector_editor", "Наименование таблицы:", None, QtGui.QApplication.UnicodeUTF8))
        self.label_2.setText(QtGui.QApplication.translate("vector_editor", "Тип оси:", None, QtGui.QApplication.UnicodeUTF8))
        self.label_7.setText(QtGui.QApplication.translate("vector_editor", "Адрес оси:", None, QtGui.QApplication.UnicodeUTF8))
        self.label_3.setText(QtGui.QApplication.translate("vector_editor", "Адрес калибровки:", None, QtGui.QApplication.UnicodeUTF8))
        self.label_4.setText(QtGui.QApplication.translate("vector_editor", "Количество элементов:", None, QtGui.QApplication.UnicodeUTF8))
        self.label_5.setText(QtGui.QApplication.translate("vector_editor", "Комментарий:", None, QtGui.QApplication.UnicodeUTF8))
        self.label_6.setText(QtGui.QApplication.translate("vector_editor", "Размерность элемента:", None, QtGui.QApplication.UnicodeUTF8))
        self.okButton.setText(QtGui.QApplication.translate("vector_editor", "OK", None, QtGui.QApplication.UnicodeUTF8))
        self.cancelButton.setText(QtGui.QApplication.translate("vector_editor", "Cancel", None, QtGui.QApplication.UnicodeUTF8))

