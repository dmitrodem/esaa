# -*- coding: utf-8 -*-
from firmware_helper import *
from Ui_matrix_editor import *

class matrix_editor(object):
    """firmware vector calibr desc editor"""
    def __init__(self):        
        try:
            widget = self.widget = Ui_matrix_editor()                
            self.window = QtGui.QWidget()        
            self.widget.setupUi(self.window)

            for key, value in calibr_axis.iteritems():
                widget.axisXComboBox.addItem(key, value)
                widget.axisYComboBox.addItem(key, value)

            for value in element_sizes:
                widget.sizeComboBox.addItem(value)

            widget.categoryTree.setColumnCount(2)
            widget.categoryTree.hideColumn(1)
            firmware_helper().fillTreeWidget(widget.categoryTree, calibr_categories)
            widget.categoryTree.expandAll()
            widget.okButton.clicked.connect(self.ok_click)
            widget.cancelButton.clicked.connect(self.window.close)
        except Exception as e:
            print e

    def ctrl2matrix(self):
        widget = self.widget
        matrix = matrix_descr(widget.nameEdit.text(),
                              widget.sizeComboBox.currentText(),
                              int(widget.addrEdit.text(), 16),
                              axis(widget.axisXComboBox.currentText(), int(widget.axisXAddrEdit.text(), 16), int(widget.countXEdit.text())),
                              axis(widget.axisYComboBox.currentText(), int(widget.axisYAddrEdit.text(), 16), int(widget.countYEdit.text())),
                              widget.categoryTree.currentItem().text(1),
                              widget.commentEdit.toPlainText())

        return matrix
    
    def ok_click(self):
        self.matrix = self.ctrl2matrix()
        self.window.close()
                            
    def matrix2ctrl(self):  
        try:         
            matrix = self.matrix
            if self.matrix == None: return

            widget = self.widget

            widget.nameEdit.setText(matrix.name)
            widget.addrEdit.setText("0x%x" % matrix.addr)
            widget.countXEdit.setText("%i" % matrix.axisX.count)
            widget.countYEdit.setText("%i" % matrix.axisY.count)
            widget.sizeComboBox.setCurrentIndex(widget.sizeComboBox.findText(matrix.el_size))
            widget.axisXComboBox.setCurrentIndex(widget.axisXComboBox.findText(matrix.axisX.id))
            widget.axisYComboBox.setCurrentIndex(widget.axisYComboBox.findText(matrix.axisY.id))
            widget.axisXAddrEdit.setText("0x%x" % matrix.axisX.addr)
            widget.axisYAddrEdit.setText("0x%x" % matrix.axisY.addr)
            widget.commentEdit.setText(matrix.comment)  
            firmware_helper().selectTreeWidgetNode(widget.categoryTree, matrix.category)
        except Exception as e:
            print e

    def show(self, matrix):
        self.matrix = matrix
        self.matrix2ctrl()
        self.window.show()        
                  
    


