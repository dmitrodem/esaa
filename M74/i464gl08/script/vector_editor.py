# -*- coding: utf-8 -*-
from firmware_helper import *
from Ui_vector_editor import *

class vector_editor(object):
    """firmware vector calibr desc editor"""
    def __init__(self):        
        try:
            widget = self.widget = Ui_vector_editor()                
            self.window = QtGui.QWidget()        
            self.widget.setupUi(self.window)

            for key, value in calibr_axis.iteritems():
                widget.axisComboBox.addItem(key, value)

            for value in element_sizes:
                widget.sizeComboBox.addItem(value)

            widget.categoryTree.setColumnCount(2)
            widget.categoryTree.hideColumn(1)
            firmware_helper().fillTreeWidget(widget.categoryTree, calibr_categories)
            widget.categoryTree.expandAll()
            widget.okButton.clicked.connect(self.ok_click)
            widget.cancelButton.clicked.connect(self.cancel_click)
        except Exception as e:
            print e

    def ctrl2vector(self):
        widget = self.widget
        vector = vector_descr(widget.nameEdit.text(),
                              widget.sizeComboBox.currentText(),
                              widget.addrEdit.text(),
                              self.vector.descr_addr,
                              axis(widget.axisComboBox.currentText(), widget.axisAddrEdit.text(), widget.countEdit.text()),                                                            
                              widget.categoryTree.currentItem().text(1),
                              widget.commentEdit.toPlainText())

        return vector
    
    def ok_click(self):        
        self.vector = self.ctrl2vector()
        if self.ok_cb != None:
            self.ok_cb(self.vector)
        self.window.close()

    def cancel_click(self):
        self.vector = None
        self.window.close()
                            
    def vector2ctrl(self):  
        try:         
            vector = self.vector
            if self.vector == None: return

            widget = self.widget

            widget.nameEdit.setText(vector.name)
            widget.addrEdit.setText(vector.addr)
            widget.countEdit.setText(vector.axis.count)
            widget.sizeComboBox.setCurrentIndex(widget.sizeComboBox.findText(vector.el_size))
            widget.axisComboBox.setCurrentIndex(widget.axisComboBox.findText(vector.axis.id))
            widget.axisAddrEdit.setText(vector.axis.addr)
            widget.commentEdit.setText(vector.comment)
            firmware_helper().selectTreeWidgetNode(widget.categoryTree, vector.category)
        except Exception as e:
            print e

    def show(self, vector, ok_cb=None):
        self.vector = vector
        self.ok_cb = ok_cb
        self.vector2ctrl()
        self.window.show()        
                  
    


