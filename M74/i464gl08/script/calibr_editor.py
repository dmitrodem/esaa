# -*- coding: utf-8 -*-
from firmware_helper import *
from Ui_calibr_editor import *

class calibr_editor(object):
    """firmware calibr desc editor"""
    def __init__(self):        
        try:
            widget = self.widget = Ui_calibr_editor()                
            self.window = QtGui.QWidget()        
            self.widget.setupUi(self.window)

            for value in calibr_types:
                widget.typeComboBox.addItem(value)

            widget.categoryTree.setColumnCount(2)
            widget.categoryTree.hideColumn(1)
            firmware_helper().fillTreeWidget(widget.categoryTree, calibr_categories)
            widget.categoryTree.expandAll()
            widget.okButton.clicked.connect(self.ok_click)
            widget.cancelButton.clicked.connect(self.cancel_click)
        except Exception as e:
            print e

    def ctrl2calibr(self):
        widget = self.widget
        calibr = calibr_descr(widget.nameEdit.text(),
                              widget.typeComboBox.currentText(),
                              widget.addrEdit.text(),                                                                                      
                              widget.categoryTree.currentItem().text(1),
                              widget.commentEdit.toPlainText(),
                              widget.funcEdit.text())

        return calibr
    
    def ok_click(self):        
        self.calibr = self.ctrl2calibr()
        if self.ok_cb != None:
            self.ok_cb(self.calibr)
        self.window.close()

    def cancel_click(self):
        self.calibr = None
        self.window.close()
                            
    def calibr2ctrl(self):  
        try:         
            calibr = self.calibr
            if self.calibr == None: return

            widget = self.widget

            widget.nameEdit.setText(calibr.name)
            widget.addrEdit.setText(calibr.addr)            
            widget.typeComboBox.setCurrentIndex(widget.typeComboBox.findText(calibr.type))
            widget.commentEdit.setText(calibr.comment)
            widget.funcEdit.setText(calibr.func)
            firmware_helper().selectTreeWidgetNode(widget.categoryTree, calibr.category)
        except Exception as e:
            print e

    def show(self, calibr, ok_cb=None):
        self.calibr = calibr
        self.ok_cb = ok_cb
        self.calibr2ctrl()
        self.window.show()        
                  
    


