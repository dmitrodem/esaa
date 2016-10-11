from tkinter import *
from tkinter.ttk import *
from FirmwareHelper import *

class table2deditor(object):
    """firmware 2d table desc editor"""
    def __init__(self):
        top = self.top = Tk()        
        top.geometry("500x200")
        top.columnconfigure(1, weight=1)

        self.initcontrols()
        
    def initcontrols(self):
        # Name controls
        nameLabel = Label(self.top, text="Наименование таблицы:")
        nameLabel.grid(row=0, sticky="e") 
        nameEntry = Entry(self.top)
        nameEntry.grid(row=0, column=1, columnspan=10, sticky="we")                        

        # Axis controls
        axisLabel = Label(self.top, text="Тип оси:")
        axisLabel.grid(row=1, sticky="e")
        axisCombobox = Combobox(self.top, values = list(FirmwareHelper().axis.keys()))  
        axisCombobox.grid(row=1, column=1, columnspan=10, sticky="we")

    def show(self):
        self.top.mainloop()
    


