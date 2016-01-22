from idc import *
from idaapi import *
from idautils import *

filename = os.path.dirname(idc.GetInputFilePath()) + "\\XC2xxx.INC"
f = open(filename, "r+")

for line in f:
	print line
	words = line.split()
	print words
	if len(words) == 3:
		addr = int(words[2], 0)
		print addr
		name = GetTrueName(addr)
		print name
		if name.find("unk_") != -1:
			MakeName(addr, words[0])
					
f.close()