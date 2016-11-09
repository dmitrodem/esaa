from Ui_vector_editor import *
from PySide import QtCore, QtGui
import sys
 
app = QtGui.QApplication(sys.argv)
window = QtGui.QWidget()
ui = Ui_vector_editor()
ui.setupUi(window)
window.show()
app.exec_()


