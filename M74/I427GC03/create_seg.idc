#include <idc.idc>

static main()
{
	AutoShow(0); // Stop IDA trying to analyse just yet
	DeleteAll(); // Clear everything out
	
	create_segments();
	
	create_SFR_REG();
	
	AutoShow(1);
	Wait();
	
	MakeCode(0xC00000);
}

static create_segments()
{
	SegCreate(0,0x7fff,0x0000,0x0,saRelByte,scPriv); 
	SegClass(0,"DATA");
	SegRename(0,"EXT_MEM");
	
	SegCreate(0xa000,0xdfff,0x000,0x0,saRelByte,scPriv); 
	SegClass(0xa000,"BSS");
	SegRename(0xa000,"DSRAM");
	
	SegCreate(0xe000,0xefff,0x000,0x0,saRelByte,scPriv); 
	SegClass(0xe000,"BSS");
	SegRename(0xe000,"XSFR");
	
	SegCreate(0xf000,0xf1ff,0x000,0x0,saRelByte,scPriv); 
	SegClass(0xf000,"BSS");
	SegRename(0xf000,"ESFR");
	
	SegCreate(0xf600,0xfdff,0x000,0x0,saRelByte,scPriv); 
	SegClass(0xf600,"BSS");
	SegRename(0xf600,"DPRAM");
	
	SegCreate(0xfe00,0xffff,0x000,0x0,saRelByte,scPriv); 
	SegClass(0xfe00,"DATA");
	SegRename(0xfe00,"SFR");
	
	//SegCreate(0x10000,0x1fffff,0x0000,0x0,saRelByte,scPriv); 
	//SegClass(0x10000,"DATA");
	//SegRename(0x10000,"EXT_MEM");
	
	SegCreate(0x200000,0x203fff,0x0000,0x0,saRelByte,scPriv); 
	SegClass(0x200000,"DATA");
	SegRename(0x200000,"MULTI_CAN");
	
	SegCreate(0x204000,0x205fff,0x0000,0x0,saRelByte,scPriv); 
	SegClass(0x204000,"DATA");
	SegRename(0x204000,"USIC0_3");
	
	//SegCreate(0x210000,0x3fffff,0x0000,0x0,saRelByte,scPriv); 
	//SegClass(0x210000,"DATA");
	//SegRename(0x210000,"EXT_IO");
	
	SegCreate(0xc00000,0xc3ffff,0x000,0x0,saRelByte,scPriv); 
	SegClass(0xc000000,"CODE");
	SegRename(0xc00000,"ROM");
}

static create_SFR_REG()
{
	//SFR area 0xfe00 - 0xffff
	//bit-addressable 0xff00 - 0xffff, 0xf100 - 0xf1ff
	auto id;
	
	DB_Reg("SFR", 0xFE18, "CPUCON1", "CPU Control Register 1");
	DB_Reg("SFR", 0xFE1A, "CPUCON2", "CPU Control Register 2");
	DB_Reg("SFR", 0xFE10, "CP", "Context Pointer");
	
	
	DB_Reg("ESFR", 0xF0B2, "RSTSTAT0", "Reset Status 0 Register");
	
/* 	id = AddEnum(-1,"eCPUCON1",0x1100000);
 * 	
 * 	Enums(id,6,"VECSC1","Scaling Factor of Vector Table");
 * 	Enums(id,5,"VECSC0","Scaling Factor of Vector Table");
 * 	Enums(id,4,"WDTCTL","Configuration of Watchdog Timer");
 * 	Enums(id,3,"SGTDIS","Segmentation Disable/Enable Control");
 * 	Enums(id,2,"INTSCXT","Enable Interruptibility of Switch Context");
 * 	Enums(id,1,"BP","Enable Branch Prediction Unit");
 * 	Enums(id,0,"ZCJ","Enable Zero-Cycle Jump Function");
 */
}

static DB_Reg(seg_name, off, name, comment) 
{
	auto x;
	auto addr;
	//x=[SegByName(seg_name), off];
	
	//Message("Start at %08lX\n", SegByName("SFR"));

	// Only create a name if one doesn't already exist
	addr = LocByName(name);
	if (addr==BADADDR)
	{
		MakeWord(off);
		MakeName(off, name);
		MakeRptCmt(off,comment);
	}
	else
	{
		Message("name %s.%s already exist by addres %08lX\n", seg_name, name, addr);
	}
}