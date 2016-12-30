
MEM_COPY_STRUCT	struc ;	(sizeof=0xC)	; XREF:	ROM:00004000r ...
op_type:	dw ?
dest_addr:	dw ?
dest_page:	dw ?
src_addr:	dw ?
src_page:	dw ?
count:		dw ?
MEM_COPY_STRUCT	ends


MEM_CLEAR_STRUCT struc ; (sizeof=0x6)	; XREF:	ROM:00002C56r ...
op_type:	dw ?
addr:		dw ?
count:		dw ?
MEM_CLEAR_STRUCT ends


MEM_CLEAR_PAGE_STRUCT struc ; (sizeof=0x8) ; XREF: ROM:00002C5Cr ...
op_type:	dw ?
addr:		dw ?
page:		dw ?
count:		dw ?
MEM_CLEAR_PAGE_STRUCT ends


MEM_CLEAR_FRAME_STRUCT struc ; (sizeof=0xA) ; XREF: ROM:00002C96r
ot_type:	dw ?
addrh:		dw ?
addrl:		dw ?
count1:		dw ?
count2:		dw ?
MEM_CLEAR_FRAME_STRUCT ends


TABLE_2D	struc ;	(sizeof=0x6)	; XREF:	CALIBR0:1CC2r ...
count:		dw ?
axis:		dw ?
values:		dw ?
TABLE_2D	ends


TABLE_3D	struc ;	(sizeof=0xA)	; XREF:	CALIBR0:1CC8r ...
row_count:	dw ?
rows:		dw ?
col_count:	dw ?
cols:		dw ?
values:		dw ?
TABLE_3D	ends


CALIBR_B	struc ;	(sizeof=0x1)	; XREF:	CALIBR0:RELAY_TIMEOUTr	...
value:		db ?			; XREF:	FIRST_INIT_ENVIRONMENT+1FAr ... ; base	10
CALIBR_B	ends


CALIBR_W	struc ;	(sizeof=0x2)	; XREF:	CALIBR0:TINJ_MINr ...
value:		dw ?			; XREF:	FIRST_INIT_ENVIRONMENT+92Ar ... ; base	10
CALIBR_W	ends


CALIBR_F	struc ;	(sizeof=0x1)	; XREF:	CALIBR0:EURO3_MODEr ...
flags:		db ?			; XREF:	MAIN_LOOP_FUNC+13Ar ...
CALIBR_F	ends


