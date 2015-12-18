MEM_COPY_STRUCT .MACRO op_type, dest_addr, dest_page, src_addr, src_page, count
      .dw op_type
     .dw dest_addr
     .dw dest_page
     .dw src_addr
     .dw src_page
     .dw count
.ENDM

 MEM_CLEAR_STRUCT .MACRO op_type, addr, count
     .dw op_type
     .dw addr
     .dw count
.ENDM

MEM_CLEAR_PAGE_STRUCT .MACRO op_type, addr, page, count
     .dw op_type
     .dw addr
     .dw page
     .dw count
.ENDM

MEM_CLEAR_FRAME_STRUCT .MACRO op_type, addrh, addrl, count1, count2
     .dw op_type
     .dw addrh
     .dw addrl
     .dw count1
     .dw count2
.ENDM

TABLE_2D .MACRO count, axis, values
         .dw count
         .dw axis
        .dw values
.ENDM

TABLE_3D .MACRO row_count, rows, col_count, cols, values
         .dw row_count
         .dw rows
         .dw col_count
         .dw cols
        .dw values
.ENDM