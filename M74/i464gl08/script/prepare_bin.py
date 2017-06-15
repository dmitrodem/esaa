# -*- coding: utf-8 -*-
import idautils
import idaapi
import idc

def load_keil_sfr_descr():
	filename = os.path.dirname(idc.GetInputFilePath()) + "\\XC2xxx.INC"
	f = open(filename, "r+")

	pr_line = ""
	for line in f:
		words = line.split()
		if len(words) == 3 and (words[1] == "EQU" or words[1] == "DEFR"):
			addr = int(words[2], 0)			
			name = GetTrueName(addr)
			print addr, name
			MakeName(addr, words[0])
			MakeRptCmt(addr, pr_line.strip())		
		pr_line = line
						
	f.close()

#------------------------------------------------------------------------
# General information

def GenInfo():
	DeleteAll();    # purge database
	SetPrcsr("c166V2");
	StringStp(0xA);
	Tabs(1);
	Voids(0);
	XrefShow(1);
	AutoShow(1);
	Indent(16);
	CmtIndent(40);
	TailDepth(0x10);

#------------------------------------------------------------------------
# Information about segmentation

def Segments():
	SetSelector(0X1,0);
	SetSelector(0X2,0);
	SetSelector(0X3,0);
	SetSelector(0X4,0);
	SetSelector(0X5,0);
	SetSelector(0X6,0);
	SegCreate(0X8000,0XE000,0X1,1,4,3);
	SegRename(0X8000,"SRAM");
	SegClass (0X8000,"DATA");
	SetSegmentType(0X8000,3);
	SegCreate(0XE000,0XF000,0X2,1,2,2);
	SegRename(0XE000,"X_SFR");
	SegClass (0XE000,"X_SFR");
	SetSegmentType(0XE000,3);
	SegCreate(0XF000,0XF600,0X3,1,2,2);
	SegRename(0XF000,"E_SFR");
	SegClass (0XF000,"E_SFR");
	SetSegmentType(0XF000,3);
	SegCreate(0XF600,0XFD00,0X4,1,4,3);
	SegRename(0XF600,"DRAM");
	SegClass (0XF600,"DATA");
	SetSegmentType(0XF600,3);
	SegCreate(0XFD00,0XFE00,0X5,0,4,3);
	SegRename(0XFD00,"DRAM_BIT");
	SegClass (0XFD00,"DATA");
	SetSegmentType(0XFD00,3);
	SegCreate(0XFE00,0X10000,0X6,1,2,2);
	SegRename(0XFE00,"SFR");
	SegClass (0XFE00,"SFR");
	SetSegmentType(0XFE00,3);
	SegCreate(0X200000,0X204000,0X20000,0,2,2);
	SegRename(0X200000,"MultiCAN");
	SegClass (0X200000,"MultiCAN");
	SetSegmentType(0X200000,3);
	SegCreate(0X204000,0X206000,0X20400,0,2,2);
	SegRename(0X204000,"USIC");
	SegClass (0X204000,"USIC");
	SetSegmentType(0X204000,3);
	SegCreate(0XC00000,0XC0F000,0XC0000,1,2,2);
	SegRename(0XC00000,"ROM");
	SegClass (0XC00000,"CODE");
	SegDefReg(0xC00000,"dpp0",0x321);
	SegDefReg(0xC00000,"dpp1",0x320);
	SegDefReg(0xC00000,"dpp2",0x322);
	SegDefReg(0xC00000,"dpp3",0x3);
	SetSegmentType(0XC00000,2);
	SegCreate(0XC10000,0XC20000,0XC1000,0,2,2);
	SegRename(0XC10000,"seg009");
	SegClass (0XC10000,"CODE");
	SegDefReg(0xC10000,"dpp0",0x321);
	SegDefReg(0xC10000,"dpp1",0x320);
	SegDefReg(0xC10000,"dpp2",0x322);
	SegDefReg(0xC10000,"dpp3",0x3);
	SetSegmentType(0XC10000,2);
	SegCreate(0XC20000,0XC30000,0XC2000,0,2,2);
	SegRename(0XC20000,"seg010");
	SegClass (0XC20000,"CODE");
	SegDefReg(0xC20000,"dpp0",0x321);
	SegDefReg(0xC20000,"dpp1",0x320);
	SegDefReg(0xC20000,"dpp2",0x322);
	SegDefReg(0xC20000,"dpp3",0x3);
	SetSegmentType(0XC20000,2);
	SegCreate(0XC30000,0XC40000,0XC3000,0,2,2);
	SegRename(0XC30000,"seg011");
	SegClass (0XC30000,"CODE");
	SegDefReg(0xC30000,"dpp0",0x321);
	SegDefReg(0xC30000,"dpp1",0x320);
	SegDefReg(0xC30000,"dpp2",0x322);
	SegDefReg(0xC30000,"dpp3",0x3);
	SetSegmentType(0XC30000,2);
	SegCreate(0XC40000,0XC50000,0XC4000,0,2,2);
	SegRename(0XC40000,"seg012");
	SegClass (0XC40000,"CODE");
	SegDefReg(0xC40000,"dpp0",0x321);
	SegDefReg(0xC40000,"dpp1",0x320);
	SegDefReg(0xC40000,"dpp2",0x322);
	SegDefReg(0xC40000,"dpp3",0x3);
	SetSegmentType(0XC40000,2);
	SegCreate(0XC50000,0XC60000,0XC5000,0,2,2);
	SegRename(0XC50000,"seg013");
	SegClass (0XC50000,"CODE");
	SegDefReg(0xC50000,"dpp0",0x321);
	SegDefReg(0xC50000,"dpp1",0x320);
	SegDefReg(0xC50000,"dpp2",0x322);
	SegDefReg(0xC50000,"dpp3",0x3);
	SetSegmentType(0XC50000,2);
	SegCreate(0XC60000,0XC70000,0XC6000,0,2,2);
	SegRename(0XC60000,"seg014");
	SegClass (0XC60000,"CODE");
	SegDefReg(0xC60000,"dpp0",0x321);
	SegDefReg(0xC60000,"dpp1",0x320);
	SegDefReg(0xC60000,"dpp2",0x322);
	SegDefReg(0xC60000,"dpp3",0x3);
	SetSegmentType(0XC60000,2);
	SegCreate(0XC70000,0XC80000,0XC7000,0,4,2);
	SegRename(0XC70000,"seg015");
	SegClass (0XC70000,"DATA");
	SetSegmentType(0XC70000,3);
	SegCreate(0XC80000,0XC84000,0XC8000,0,4,2);
	SegRename(0XC80000,"CALIBR0");
	SegClass (0XC80000,"DATA");
	SegDefReg(0xC80000,"dpp0",0x0);
	SegDefReg(0xC80000,"dpp1",0x1);
	SegDefReg(0xC80000,"dpp2",0x2);
	SegDefReg(0xC80000,"dpp3",0x3);
	SetSegmentType(0XC80000,3);
	SegCreate(0XC84000,0XC88000,0XC8000,0,4,2);
	SegRename(0XC84000,"CALIBR1");
	SegClass (0XC84000,"DATA");
	SegDefReg(0xC84000,"dpp0",0x0);
	SegDefReg(0xC84000,"dpp1",0x1);
	SegDefReg(0xC84000,"dpp2",0x2);
	SegDefReg(0xC84000,"dpp3",0x3);
	SetSegmentType(0XC84000,3);
	SegCreate(0XC88000,0XC8C000,0XC8000,0,4,2);
	SegRename(0XC88000,"CALIBR2");
	SegClass (0XC88000,"DATA");
	SegDefReg(0xC88000,"dpp0",0x0);
	SegDefReg(0xC88000,"dpp1",0x1);
	SegDefReg(0xC88000,"dpp2",0x2);
	SegDefReg(0xC88000,"dpp3",0x3);
	SetSegmentType(0XC88000,3);
	SegCreate(0XE00000,0XE08000,0XE0000,0,4,3);
	SegRename(0XE00000,"PRAM");
	SegClass (0XE00000,"DATA");
	SegDefReg(0xE00000,"dpp0",0x0);
	SegDefReg(0xE00000,"dpp1",0x1);
	SegDefReg(0xE00000,"dpp2",0x2);
	SegDefReg(0xE00000,"dpp3",0x3);
	SetSegmentType(0XE00000,3);
	SegCreate(0XFFFF00,0X1000000,0XFFFF0,0,2,2);
	SegRename(0XFFFF00,"IBM");
	SegClass (0XFFFF00,"IBM");
	SegDefReg(0xFFFF00,"dpp0",0x0);
	SegDefReg(0xFFFF00,"dpp1",0x1);
	SegDefReg(0xFFFF00,"dpp2",0x2);
	SegDefReg(0xFFFF00,"dpp3",0x3);
	SetSegmentType(0XFFFF00,3);
	LowVoids(0x0);
	HighVoids(0xC8C000);
	
def main():	
  # set 'loading idc file' mode
  SetCharPrm(INF_GENFLAGS, INFFL_LOADIDC|GetCharPrm(INF_GENFLAGS));
  GenInfo();
  Segments();           # segmentation  
  load_keil_sfr_descr();
  # clear 'loading idc file' mode
  SetCharPrm(INF_GENFLAGS, ~INFFL_LOADIDC&GetCharPrm(INF_GENFLAGS));
  
  
# -------------------------------------------------------------------------
if __name__ == '__main__':
	main()