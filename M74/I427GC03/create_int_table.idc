#include <idc.idc>

//////////////////////////////////////////////////////////////////////////
static main()
{
	auto	baseAddr;
	auto	File;
	auto	Handle;
	auto	Line;
	auto	Adr;
	auto	Text;
	auto	ea;
   
   File = AskFile(0, "*.adr", "Input interrupt table info");
   Handle = fopen(File, "rt");

   if (Handle == 0)
   {
      Warning("Error open input file %s", File);
      return;
   }

   Message("Proceed Input File: %s\n", File);

   baseAddr = 0xC00000;
   
   while (1)
   {
      Line = readstr(Handle);
      //Message("Read line: %s\n", Line); 

      if (Line == -1)
         break;

      // Parse String
      Adr  = baseAddr + xtol(substr(Line, 0, 4));
      Text = substr(Line, 5, -2);
	  
      Message("Adr: %x Text: %s\n", Adr, Text);
	  
	  ea = MakeCode(Adr);
	  if (ea == 0)
	  {
		continue;
	  }
	  
	  ea = MakeFunction(Adr, Adr + 4);
	  MakeName(Adr, Text);
  }
}

