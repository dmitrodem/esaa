from idc import *
from idaapi import *
from idautils import *

for i in range(110):
	MakeCode(0xC00000 + i * 4)