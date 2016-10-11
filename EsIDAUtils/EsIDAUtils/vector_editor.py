
from tkinter import *
from tkinter.ttk import *
from firmware_helper import *

class vector_editor(object):
    """firmware 2d table desc editor"""
    def __init__(self, vector=None):        
        top = self.top = Tk()        
        top.geometry("500x100")
        top.title("vector description editor")
        top.columnconfigure(1, weight=1)
        self.initcontrols(vector)
        self.result = None

    def ctrl2vector(self):
        vector = vector_descr(self.nameEntry.get(), firmware_helper().axis[self.axisCombobox.get()])
        return vector
    
    def ok_click(self):
        vector = self.ctrl2vector()
        self.result = firmware_helper.toJSON(vector)
        self.top.destroy()

    def cancel_click(self):
        self.top.destroy()
                            
    def initcontrols(self, vector):
        # Name controls
        nameLabel = self.nameLabel = Label(self.top, text="Наименование таблицы:")
        nameLabel.grid(row=0, sticky="e")         
        nameEntry = self.nameEntry = Entry(self.top)        
        nameEntry.grid(row=0, column=1, columnspan=9, sticky="we")                        

        # Axis controls
        axisLabel = self.axisLabel = Label(self.top, text="Тип оси:")
        axisLabel.grid(row=1, sticky="e")
        axisCombobox = self.axisCombobox = Combobox(self.top, values = list(firmware_helper().axis.keys()))  
        axisCombobox.grid(row=1, column=1, columnspan=9, sticky="we")

        # Button controls
        ok = self.ok = Button(self.top, text="OK", command=self.ok_click)
        ok.grid(row=2, column=8)        
        cancel = self.cancel = Button(self.top, text="Cancel", command=self.cancel_click)
        cancel.grid(row=2, column=9)        

        if vector != None: 
            nameEntry.insert(0, vector.name)
            axisCombobox.current(list(firmware_helper().axis.keys()).index(vector.axis.id))

    def show(self):
        self.top.mainloop()                  
    


