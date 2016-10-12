from tkinter import *
from tkinter.ttk import *
from firmware_helper import *

class vector_editor(object):
    """firmware 2d table desc editor"""
    def __init__(self, vector=None):        
        top = self.top = Tk()        
        top.geometry("800x220")
        top.title("vector description editor")        
        self.initcontrols(vector)
        self.result = None

    def ctrl2vector(self):
        vector = vector_descr(self.nameEntry.get(), 
                              self.axisCombobox.get(), 
                              self.addrEntry.get(), 
                              self.countEntry.get(),
                              self.commentText.get(1.0, END))
        return vector
    
    def ok_click(self):
        vector = self.ctrl2vector()
        self.result = firmware_helper.toJSON(vector)
        self.top.destroy()

    def cancel_click(self):
        self.top.destroy()    
                            
    def initcontrols(self, vector):
        row_index = 0;
        col_index = 1;
        self.top.columnconfigure(col_index+1, weight=1)

        # Name controls
        Label(self.top, text="Наименование таблицы:").grid(row=row_index, column=col_index, sticky="e")         
        nameEntry = self.nameEntry = Entry(self.top)        
        nameEntry.grid(row=row_index, column=col_index+1, columnspan=2, sticky="we")  
        row_index += 1

        # Category controls                     
        categoryTreeview = self.categoryTreeview = Treeview(self.top)
        categoryTreeview.grid(row=0, column=0, rowspan="6", sticky="wens")
        firmware_helper().fillTreeWidget(categoryTreeview, calibr_categories)

        # Axis controls
        Label(self.top, text="Тип оси:").grid(row=row_index, column=col_index, sticky="e")
        axisCombobox = self.axisCombobox = Combobox(self.top, values = list(firmware_helper().axis.keys()))  
        axisCombobox.grid(row=row_index, column=col_index+1, columnspan=2, sticky="we")
        row_index += 1

        # Addr & count controls
        Label(self.top, text="Адрес калибровки:").grid(row=row_index, column=col_index, sticky="e")
        addrEntry = self.addrEntry = Entry(self.top)
        addrEntry.grid(row=row_index, column=col_index+1, columnspan=2, sticky="we")
        row_index += 1
        Label(self.top, text="Количество элементов:").grid(row=row_index, column=col_index, sticky="e")
        countEntry = self.countEntry = Entry(self.top)
        countEntry.grid(row=row_index, column=col_index+1, columnspan=2, sticky="we")
        row_index += 1

        # Comment controls        
        Label(self.top, text="Комментарий:").grid(row=row_index, column=col_index, sticky="en")
        commentText = self.commentText = Text(self.top, height=5)
        commentText.grid(row=row_index, column=col_index+1, columnspan=2, sticky="we")
        row_index += 1

        # Button controls
        Button(self.top, text="OK", command=self.ok_click).grid(row=row_index, column=col_index+1, sticky="e")        
        Button(self.top, text="Cancel", command=self.cancel_click).grid(row=row_index, column=col_index+2)        

        if vector != None: 
            nameEntry.insert(0, vector.name)            
            axisCombobox.current(list(firmware_helper().axis.keys()).index(vector.axis.id))
            addrEntry.insert(0, "0x%x" % vector.addr)
            countEntry.insert(0, vector.count)
            if vector.comment != None:
                commentText.insert(INSERT, vector.comment)                

    def show(self):
        self.top.mainloop()                  
    


