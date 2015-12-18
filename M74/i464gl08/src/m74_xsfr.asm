; ===========================================================================

; Segment type:	Pure data
X_SFR		section	X_SFR word public
procX_SFR proc
ADC0_RSIR0:	ds 2			; DATA XREF: INIT_ADC0+C4w
ADC0_RSIR1:	ds 2			; DATA XREF: INIT_ADC0+C8w
ADC0_RSIR2:	ds 2			; DATA XREF: INIT_ADC0+CCw
		ds 2
ADC0_ID:	ds 1
		ds 1
		ds 1
		ds 1
ADC0_KSCFG:	ds 2			; DATA XREF: INIT_ADC1+2w ...
		ds 2
ADC0_GLOBCTR:	ds 2			; DATA XREF: INIT_ADC0+Cw ...
ADC0_GLOBSTR:	ds 2			; DATA XREF: READ_ADC:adc0_ch3r ...
ADC0_RSPR0:	ds 2			; DATA XREF: INIT_ADC0+16w
		ds 2
ADC0_ASENR:	ds 2			; DATA XREF: INIT_ADC0+12w
ADC0_SYNCTR:	ds 2			; DATA XREF: INIT_ADC0+E2w
ADC0_ALR0:	ds 2			; DATA XREF: sub_C0EF4A+Aw ...
		ds 2
ADC0_CHCTR0:	ds 2			; DATA XREF: INIT_ADC0+1Aw
ADC0_CHCTR1:	ds 1
		ds 1
ADC0_CHCTR2:	ds 2			; DATA XREF: INIT_ADC0+22w
ADC0_CHCTR3:	ds 2			; DATA XREF: INIT_ADC0+2Aw
ADC0_CHCTR4:	ds 1
		ds 1
ADC0_CHCTR5:	ds 2			; DATA XREF: INIT_ADC0+32w
ADC0_CHCTR6:	ds 1
		ds 1
ADC0_CHCTR7:	ds 1
		ds 1
ADC0_CHCTR8:	ds 2			; DATA XREF: INIT_ADC0+3Aw
ADC0_CHCTR9:	ds 2			; DATA XREF: INIT_ADC0+42w
ADC0_CHCTR10:	ds 2			; DATA XREF: INIT_ADC0+4Aw
ADC0_CHCTR11:	ds 2			; DATA XREF: INIT_ADC0+4Ew
ADC0_CHCTR12:	ds 1
		ds 1
ADC0_CHCTR13:	ds 2			; DATA XREF: INIT_ADC0+56w
ADC0_CHCTR14:	ds 1
		ds 1
ADC0_CHCTR15:	ds 2			; DATA XREF: INIT_ADC0+5Aw
ADC0_RESR0:	ds 2			; DATA XREF: READ_ADC+1E4r
ADC0_RESR1:	ds 2			; DATA XREF: READ_ADC+142r
ADC0_RESR2:	ds 2			; DATA XREF: READ_ADC+1AEr
ADC0_RESR3:	ds 2			; DATA XREF: READ_ADC:loc_C0ED36r
ADC0_RESR4:	ds 2			; DATA XREF: READ_ADC+178r
ADC0_RESR5:	ds 2			; DATA XREF: READ_ADC+322r
ADC0_RESR6:	ds 2			; DATA XREF: READ_ADC:loc_C0ED6Cr
ADC0_RESR7:	ds 2			; DATA XREF: READ_ADC+27Cr
ADC0_RESRA0:	ds 1
		ds 1
ADC0_RESRA1:	ds 1
		ds 1
ADC0_RESRA2:	ds 1
		ds 1
ADC0_RESRA3:	ds 1
		ds 1
ADC0_RESRA4:	ds 1
		ds 1
ADC0_RESRA5:	ds 1
		ds 1
ADC0_RESRA6:	ds 1
		ds 1
ADC0_RESRA7:	ds 1
		ds 1
ADC0_RESRV0:	ds 1
		ds 1
ADC0_RESRV1:	ds 1
		ds 1
ADC0_RESRV2:	ds 1
		ds 1
ADC0_RESRV3:	ds 1
		ds 1
ADC0_RESRV4:	ds 1
		ds 1
ADC0_RESRV5:	ds 1
		ds 1
ADC0_RESRV6:	ds 1
		ds 1
ADC0_RESRV7:	ds 1
		ds 1
ADC0_RESRAV0:	ds 1
		ds 1
ADC0_RESRAV1:	ds 1
		ds 1
ADC0_RESRAV2:	ds 1
		ds 1
ADC0_RESRAV3:	ds 1
		ds 1
ADC0_RESRAV4:	ds 1
		ds 1
ADC0_RESRAV5:	ds 1
		ds 1
ADC0_RESRAV6:	ds 1
		ds 1
ADC0_RESRAV7:	ds 1
		ds 1
ADC0_VFR:	ds 1
		ds 1
ADC0_RSSR:	ds 1
		ds 1
ADC0_LCBR0:	ds 2			; DATA XREF: INIT_ADC0+A8w
ADC0_LCBR1:	ds 2			; DATA XREF: INIT_ADC0+B0w
ADC0_LCBR2:	ds 2			; DATA XREF: INIT_ADC0+B8w
ADC0_LCBR3:	ds 2			; DATA XREF: INIT_ADC0+C0w
		ds 4
ADC0_CHINFR:	ds 1
		ds 1
ADC0_CHINCR:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
ADC0_CHINPR0:	ds 2			; DATA XREF: INIT_ADC0+86w
ADC0_CHINPR4:	ds 2			; DATA XREF: INIT_ADC0+8Aw
ADC0_CHINPR8:	ds 2			; DATA XREF: INIT_ADC0+8Ew
ADC0_CHINPR12:	ds 2			; DATA XREF: INIT_ADC0+94w
ADC0_EVINFR:	ds 1
		ds 1
ADC0_EVINCR:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
ADC0_EVINPR0:	ds 2			; DATA XREF: INIT_ADC0+98w
		ds 2
ADC0_EVINPR8:	ds 2			; DATA XREF: INIT_ADC0+9Cw
ADC0_EVINPR12:	ds 2			; DATA XREF: INIT_ADC0+A0w
ADC0_RCR0:	ds 2			; DATA XREF: READ_ADC+1DCr ...
ADC0_RCR1:	ds 2			; DATA XREF: READ_ADC+13Ar ...
ADC0_RCR2:	ds 2			; DATA XREF: READ_ADC+1A6r ...
ADC0_RCR3:	ds 2			; DATA XREF: READ_ADC+72r ...
ADC0_RCR4:	ds 2			; DATA XREF: READ_ADC+170r ...
ADC0_RCR5:	ds 2			; DATA XREF: READ_ADC+31Ar ...
ADC0_RCR6:	ds 2			; DATA XREF: READ_ADC+248r ...
ADC0_RCR7:	ds 2			; DATA XREF: READ_ADC+274r ...
ADC0_INPCR0:	ds 2			; DATA XREF: INIT_ADC0+5Ew
ADC0_INPCR1:	ds 2			; DATA XREF: INIT_ADC0+62w
		ds 4
ADC0_BWDENR:	ds 1
		ds 1
ADC0_BWDCFGR:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
ADC0_EMCTR:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
ADC0_EMENR:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
ADC0_QMR0:	ds 2			; DATA XREF: INIT_ADC0+D2w ...
ADC0_QSR0:	ds 2			; DATA XREF: sub_C0EF6A:loc_C0EF7Ar
ADC0_Q0R0:	ds 1
		ds 1
ADC0_QINR0:	ds 2			; DATA XREF: SET_ADC0_INPUT_CH+26w
ADC0_CRCR1:	ds 2			; DATA XREF: sub_C0EF1Cw
ADC0_CRPR1:	ds 1
		ds 1
ADC0_CRMR1:	ds 2			; DATA XREF: INIT_ADC0+DAw ...
		ds 2
ADC0_QMR2:	ds 2			; DATA XREF: INIT_ADC0+D6w ...
ADC0_QSR2:	ds 2			; DATA XREF: sub_C0EF6A:loc_C0EF92r
ADC0_Q0R2:	ds 1
		ds 1
ADC0_QINR2:	ds 2			; DATA XREF: sub_C0EEF0+26w
		ds 8
ADC1_RSIR0:	ds 2			; DATA XREF: INIT_ADC1+9Cw
ADC1_RSIR1:	ds 2			; DATA XREF: INIT_ADC1+A0w
ADC1_RSIR2:	ds 2			; DATA XREF: INIT_ADC1+A4w
		ds 2
ADC1_ID:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
ADC1_GLOBCTR:	ds 2			; DATA XREF: INIT_ADC1+Cw ...
ADC1_GLOBSTR:	ds 2			; DATA XREF: READ_ADC:adc1_ch6r ...
ADC1_RSPR0:	ds 2			; DATA XREF: INIT_ADC1+16w
		ds 2
ADC1_ASENR:	ds 2			; DATA XREF: INIT_ADC1+12w
ADC1_SYNCTR:	ds 2			; DATA XREF: INIT_ADC1+BAw
ADC1_ALR0:	ds 2			; DATA XREF: sub_C0EA32+Aw ...
		ds 2
ADC1_CHCTR0:	ds 2			; DATA XREF: INIT_ADC1+1Aw
ADC1_CHCTR1:	ds 1
		ds 1
ADC1_CHCTR2:	ds 2			; DATA XREF: INIT_ADC1+22w
ADC1_CHCTR3:	ds 1
		ds 1
ADC1_CHCTR4:	ds 2			; DATA XREF: INIT_ADC1+2Aw
ADC1_CHCTR5:	ds 2			; DATA XREF: INIT_ADC1+32w
ADC1_CHCTR6:	ds 2			; DATA XREF: INIT_ADC1+3Aw
ADC1_CHCTR7:	ds 1
		ds 1
ADC1_CHCTR8:	ds 1
		ds 1
ADC1_CHCTR9:	ds 1
		ds 1
ADC1_CHCTR10:	ds 1
		ds 1
ADC1_CHCTR11:	ds 1
		ds 1
ADC1_CHCTR12:	ds 1
		ds 1
ADC1_CHCTR13:	ds 1
		ds 1
ADC1_CHCTR14:	ds 1
		ds 1
ADC1_CHCTR15:	ds 1
		ds 1
ADC1_RESR0:	ds 2			; DATA XREF: READ_ADC+A8r
ADC1_RESR1:	ds 1
		ds 1
ADC1_RESR2:	ds 2			; DATA XREF: READ_ADC+DEr
ADC1_RESR3:	ds 1
		ds 1
ADC1_RESR4:	ds 2			; DATA XREF: READ_ADC+21Ar
ADC1_RESR5:	ds 1
		ds 1
ADC1_RESR6:	ds 2			; DATA XREF: READ_ADC+44r
ADC1_RESR7:	ds 1
		ds 1
ADC1_RESRA0:	ds 1
		ds 1
ADC1_RESRA1:	ds 1
		ds 1
ADC1_RESRA2:	ds 1
		ds 1
ADC1_RESRA3:	ds 1
		ds 1
ADC1_RESRA4:	ds 1
		ds 1
ADC1_RESRA5:	ds 1
		ds 1
ADC1_RESRA6:	ds 1
		ds 1
ADC1_RESRA7:	ds 1
		ds 1
ADC1_RESRV0:	ds 1
		ds 1
ADC1_RESRV1:	ds 1
		ds 1
ADC1_RESRV2:	ds 1
		ds 1
ADC1_RESRV3:	ds 1
		ds 1
ADC1_RESRV4:	ds 1
		ds 1
ADC1_RESRV5:	ds 1
		ds 1
ADC1_RESRV6:	ds 1
		ds 1
ADC1_RESRV7:	ds 1
		ds 1
ADC1_RESRAV0:	ds 1
		ds 1
ADC1_RESRAV1:	ds 1
		ds 1
ADC1_RESRAV2:	ds 1
		ds 1
ADC1_RESRAV3:	ds 1
		ds 1
ADC1_RESRAV4:	ds 1
		ds 1
ADC1_RESRAV5:	ds 1
		ds 1
ADC1_RESRAV6:	ds 1
		ds 1
ADC1_RESRAV7:	ds 1
		ds 1
ADC1_VFR:	ds 1
		ds 1
ADC1_RSSR:	ds 1
		ds 1
ADC1_LCBR0:	ds 2			; DATA XREF: INIT_ADC1+7Ew
ADC1_LCBR1:	ds 2			; DATA XREF: INIT_ADC1+86w
ADC1_LCBR2:	ds 2			; DATA XREF: INIT_ADC1+8Ew
ADC1_LCBR3:	ds 2			; DATA XREF: INIT_ADC1+96w
		ds 4
ADC1_CHINFR:	ds 1
		ds 1
ADC1_CHINCR:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
ADC1_CHINPR0:	ds 2			; DATA XREF: INIT_ADC1+66w
ADC1_CHINPR4:	ds 2			; DATA XREF: INIT_ADC1+6Aw
ADC1_CHINPR8:	ds 1
		ds 1
ADC1_CHINPR12:	ds 1
		ds 1
ADC1_EVINFR:	ds 1
		ds 1
ADC1_EVINCR:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
ADC1_EVINPR0:	ds 2			; DATA XREF: INIT_ADC1+6Ew
		ds 2
ADC1_EVINPR8:	ds 2			; DATA XREF: INIT_ADC1+72w
ADC1_EVINPR12:	ds 2			; DATA XREF: INIT_ADC1+76w
ADC1_RCR0:	ds 2			; DATA XREF: INIT_ADC1+46w ...
ADC1_RCR1:	ds 2			; DATA XREF: INIT_ADC1+4Aw
ADC1_RCR2:	ds 2			; DATA XREF: INIT_ADC1+4Ew ...
ADC1_RCR3:	ds 2			; DATA XREF: INIT_ADC1+52w
ADC1_RCR4:	ds 2			; DATA XREF: INIT_ADC1+56w ...
ADC1_RCR5:	ds 2			; DATA XREF: INIT_ADC1+5Aw
ADC1_RCR6:	ds 2			; DATA XREF: INIT_ADC1+5Ew ...
ADC1_RCR7:	ds 2			; DATA XREF: INIT_ADC1+62w
ADC1_INPCR0:	ds 2			; DATA XREF: INIT_ADC1+3Ew
ADC1_INPCR1:	ds 2			; DATA XREF: INIT_ADC1+42w
		ds 4
ADC1_BWDENR:	ds 1
		ds 1
ADC1_BWDCFGR:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
ADC1_EMCTR:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
ADC1_EMENR:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
ADC1_QMR0:	ds 2			; DATA XREF: INIT_ADC1+AAw ...
ADC1_QSR0:	ds 2			; DATA XREF: sub_C0EA52:loc_C0EA62r
ADC1_Q0R0:	ds 1
		ds 1
ADC1_QINR0:	ds 2			; DATA XREF: SET_ADC1_INPUT_CH+26w
ADC1_CRCR1:	ds 2			; DATA XREF: sub_C0EA04w
ADC1_CRPR1:	ds 1
		ds 1
ADC1_CRMR1:	ds 2			; DATA XREF: INIT_ADC1+B2w ...
		ds 2
ADC1_QMR2:	ds 2			; DATA XREF: INIT_ADC1+AEw ...
ADC1_QSR2:	ds 2			; DATA XREF: sub_C0EA52:loc_C0EA7Ar
ADC1_Q0R2:	ds 1
		ds 1
ADC1_QINR2:	ds 2			; DATA XREF: sub_C0E9D8+26w
		ds 608h
P0_IOCR00:	ds 2			; DATA XREF: INIT_PORT_OUTPUT+8w
P0_IOCR01:	ds 2			; DATA XREF: INIT_PORT_OUTPUT+Cw
P0_IOCR02:	ds 2			; DATA XREF: INIT_PORT_OUTPUT+10w
P0_IOCR03:	ds 2			; DATA XREF: INIT_PORT_OUTPUT+14w
P0_IOCR04:	ds 2
P0_IOCR05:	ds 2			; DATA XREF: INIT_CCU61+7Cw
P0_IOCR06:	ds 2			; DATA XREF: INIT_CCU61+80w
P0_IOCR07:	ds 2			; DATA XREF: INIT_PORT_OUTPUT+18w
		ds 10h
P1_IOCR00:	ds 2
P1_IOCR01:	ds 2
P1_IOCR02:	ds 2			; DATA XREF: INIT_PORT_OUTPUT+20w
P1_IOCR03:	ds 2			; DATA XREF: INIT_PORT_OUTPUT+24w
P1_IOCR04:	ds 2			; DATA XREF: INIT_PORT_OUTPUT+28w
P1_IOCR05:	ds 2			; DATA XREF: INIT_PORT_OUTPUT+2Cw
P1_IOCR06:	ds 2			; DATA XREF: INIT_PORT_OUTPUT+30w
P1_IOCR07:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
P2_IOCR00:	ds 2			; DATA XREF: P2_IOCR0_CLEARw ...
P2_IOCR01:	ds 2			; DATA XREF: INIT_CCU63+5Ew
P2_IOCR02:	ds 2			; DATA XREF: INIT_CAN+3Ew ...
P2_IOCR03:	ds 2			; DATA XREF: INIT_PORT_OUTPUT+3Cw
P2_IOCR04:	ds 2			; DATA XREF: INIT_PORT_OUTPUT+40w
P2_IOCR05:	ds 2			; DATA XREF: INIT_PERIPHERAL_UNIT+90w
P2_IOCR06:	ds 2
P2_IOCR07:	ds 2
P2_IOCR08:	ds 2
P2_IOCR09:	ds 2			; DATA XREF: INIT_PORT_OUTPUT+44w
P2_IOCR10:	ds 2
P2_IOCR11:	ds 2
P2_IOCR12:	ds 2			; DATA XREF: INIT_PORT_OUTPUT+48w
P2_IOCR13:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
P3_IOCR00:	ds 1
		ds 1
P3_IOCR01:	ds 1
		ds 1
P3_IOCR02:	ds 1
		ds 1
P3_IOCR03:	ds 1
		ds 1
P3_IOCR04:	ds 1
		ds 1
P3_IOCR05:	ds 1
		ds 1
P3_IOCR06:	ds 1
		ds 1
P3_IOCR07:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
P4_IOCR00:	ds 1
		ds 1
P4_IOCR01:	ds 1
		ds 1
P4_IOCR02:	ds 1
		ds 1
P4_IOCR03:	ds 1
		ds 1
P4_IOCR04:	ds 1
		ds 1
P4_IOCR05:	ds 1
		ds 1
P4_IOCR06:	ds 1
		ds 1
P4_IOCR07:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
P0_POCON:	ds 1
		ds 1
P1_POCON:	ds 1
		ds 1
P2_POCON:	ds 1
		ds 1
P3_POCON:	ds 1
		ds 1
P4_POCON:	ds 1
		ds 1
		ds 1
		ds 1
P6_POCON:	ds 1
		ds 1
P7_POCON:	ds 1
		ds 1
P8_POCON:	ds 1
		ds 1
P9_POCON:	ds 1
		ds 1
P10_POCON:	ds 1
		ds 1
P11_POCON:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
P6_IOCR00:	ds 1
		ds 1
P6_IOCR01:	ds 1
		ds 1
P6_IOCR02:	ds 2			; DATA XREF: INIT_T5_T6+24w
P6_IOCR03:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
P7_IOCR00:	ds 1
		ds 1
P7_IOCR01:	ds 2			; DATA XREF: INIT_PLL_CAN+12w ...
P7_IOCR02:	ds 2			; DATA XREF: ROM:0000A758w ...
P7_IOCR03:	ds 2			; DATA XREF: SET_U0C0_PAR+9Ew ...
P7_IOCR04:	ds 2			; DATA XREF: SET_U0C0_PAR+9Aw
		ds 16h
P8_IOCR00:	ds 1
		ds 1
P8_IOCR01:	ds 1
		ds 1
P8_IOCR02:	ds 1
		ds 1
P8_IOCR03:	ds 1
		ds 1
P8_IOCR04:	ds 1
		ds 1
P8_IOCR05:	ds 1
		ds 1
P8_IOCR06:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
P9_IOCR00:	ds 1
		ds 1
P9_IOCR01:	ds 1
		ds 1
P9_IOCR02:	ds 1
		ds 1
P9_IOCR03:	ds 1
		ds 1
P9_IOCR04:	ds 1
		ds 1
P9_IOCR05:	ds 1
		ds 1
P9_IOCR06:	ds 1
		ds 1
P9_IOCR07:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
P10_IOCR00:	ds 1
		ds 1
P10_IOCR01:	ds 1
		ds 1
P10_IOCR02:	ds 2			; DATA XREF: INIT_PORT_OUTPUT+58w
P10_IOCR03:	ds 2			; DATA XREF: INIT_PORT_OUTPUT+5Cw
P10_IOCR04:	ds 2			; DATA XREF: INIT_PORT_OUTPUT+60w
P10_IOCR05:	ds 2			; DATA XREF: INIT_PORT_OUTPUT+64w
P10_IOCR06:	ds 2			; DATA XREF: INIT_PORT_OUTPUT+68w
P10_IOCR07:	ds 2
P10_IOCR08:	ds 2			; DATA XREF: INIT_PORT_OUTPUT+6Cw
P10_IOCR09:	ds 2			; DATA XREF: INIT_PORT_OUTPUT+70w
P10_IOCR10:	ds 2			; DATA XREF: INIT_PORT_OUTPUT+74w
P10_IOCR11:	ds 2			; DATA XREF: SET_U1C0_PAR+90w
P10_IOCR12:	ds 2			; DATA XREF: SET_U1C0_PAR+8Cw
P10_IOCR13:	ds 2			; DATA XREF: SET_U1C0_PAR+84w
P10_IOCR14:	ds 2			; DATA XREF: P10_IOCR14_CLEARw	...
P10_IOCR15:	ds 1
		ds 1
P11_IOCR00:	ds 1
		ds 1
P11_IOCR01:	ds 1
		ds 1
P11_IOCR02:	ds 1
		ds 1
P11_IOCR03:	ds 1
		ds 1
P11_IOCR04:	ds 1
		ds 1
P11_IOCR05:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
P0_OMRL:	ds 1
		ds 1
		ds 1
		ds 1
P1_OMRL:	ds 1
		ds 1
		ds 1
		ds 1
P2_OMRL:	ds 1
		ds 1
P2_OMRH:	ds 1
		ds 1
P3_OMRL:	ds 1
		ds 1
		ds 1
		ds 1
P4_OMRL:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
P6_OMRL:	ds 1
		ds 1
		ds 1
		ds 1
P7_OMRL:	ds 1
		ds 1
		ds 1
		ds 1
P8_OMRL:	ds 1
		ds 1
		ds 1
		ds 1
P9_OMRL:	ds 1
		ds 1
		ds 1
		ds 1
P10_OMRL:	ds 1
		ds 1
P10_OMRH:	ds 1
		ds 1
P11_OMRL:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
CCU60_KSCFG:	ds 2			; DATA XREF: INIT_PLLCON+72w ...
		ds 2
CCU60_PISELL:	ds 1
		ds 1
CCU60_PISELH:	ds 2			; DATA XREF: INIT_PLLCON+60w ...
CCU60_ID:	ds 1
		ds 1
		ds 1
		ds 1
word_EA0C:	ds 2			; DATA XREF: INIT_CCU60+Ew
CCU60_KSCSR:	ds 1
		ds 1
CCU60_T12:	ds 1
		ds 1
CCU60_T12PR:	ds 1
		ds 1
CCU60_T12DTC:	ds 1
		ds 1
		ds 1
		ds 1
CCU60_CC60R:	ds 1
		ds 1
CCU60_CC61R:	ds 1
		ds 1
CCU60_CC62R:	ds 1
		ds 1
		ds 1
		ds 1
CCU60_CC60SR:	ds 1
		ds 1
CCU60_CC61SR:	ds 1
		ds 1
CCU60_CC62SR:	ds 1
		ds 1
CCU60_TCTR4:	ds 2			; DATA XREF: INIT_PLLCON+64w ...
CCU60_CMPSTAT:	ds 1
		ds 1
CCU60_CMPMODIF:	ds 1
		ds 1
CCU60_TCTR0:	ds 2			; DATA XREF: INIT_PLLCON:loc_C00B1Er ...
CCU60_TCTR2:	ds 2			; DATA XREF: INIT_PLLCON+68w ...
CCU60_T13:	ds 2			; DATA XREF: sub_C02890+Ew ...
CCU60_T13PR:	ds 2			; DATA XREF: INIT_PLLCON+6Cw ...
CCU60_CC63R:	ds 1
		ds 1
CCU60_CC63SR:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
CCU60_MODCTR:	ds 1
		ds 1
CCU60_TRPCTR:	ds 1
		ds 1
CCU60_PSLR:	ds 1
		ds 1
CCU60_T12MSEL:	ds 1
		ds 1
		ds 1
		ds 1
CCU60_MCMOUTS:	ds 1
		ds 1
CCU60_MCMOUT:	ds 1
		ds 1
CCU60_MCMCTR:	ds 1
		ds 1
CCU60_IS:	ds 1
		ds 1
CCU60_ISS:	ds 1
		ds 1
CCU60_ISR:	ds 1
		ds 1
CCU60_INP:	ds 1
		ds 1
CCU60_IEN:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
CCU61_KSCFG:	ds 2			; DATA XREF: INIT_CCU61+2w
		ds 2
CCU61_PISELL:	ds 2			; DATA XREF: INIT_CCU61+88w
CCU61_PISELH:	ds 2			; DATA XREF: INIT_CCU61+18w
CCU61_ID:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
CCU61_KSCSR:	ds 1
		ds 1
CCU61_T12:	ds 1
		ds 1
CCU61_T12PR:	ds 2			; DATA XREF: INIT_CCU61+12w ...
CCU61_T12DTC:	ds 2			; DATA XREF: INIT_CCU61+4Cw
		ds 2
CCU61_CC60R:	ds 1
		ds 1
CCU61_CC61R:	ds 1
		ds 1
CCU61_CC62R:	ds 1
		ds 1
		ds 1
		ds 1
CCU61_CC60SR:	ds 2			; DATA XREF: INIT_CCU61+32w
CCU61_CC61SR:	ds 2			; DATA XREF: INIT_CCU61+36w
CCU61_CC62SR:	ds 2			; DATA XREF: INIT_CCU61+3Ew ...
CCU61_TCTR4:	ds 2			; DATA XREF: INIT_CCU61+74w ...
CCU61_CMPSTAT:	ds 2			; DATA XREF: INIT_CCU61+5Cw
CCU61_CMPMODIF:	ds 1
		ds 1
CCU61_TCTR0:	ds 2			; DATA XREF: INIT_CCU61+26w
CCU61_TCTR2:	ds 2			; DATA XREF: INIT_CCU61+2Ew
CCU61_T13:	ds 1
		ds 1
CCU61_T13PR:	ds 2			; DATA XREF: INIT_CCU61+20w ...
CCU61_CC63R:	ds 1
		ds 1
CCU61_CC63SR:	ds 2			; DATA XREF: INIT_CCU61+46w ...
		ds 8
CCU61_MODCTR:	ds 2			; DATA XREF: INIT_CCU61+6Cw
CCU61_TRPCTR:	ds 1
		ds 1
CCU61_PSLR:	ds 2			; DATA XREF: INIT_CCU61+64w ...
CCU61_T12MSEL:	ds 2			; DATA XREF: INIT_CCU61+54w
		ds 1
		ds 1
CCU61_MCMOUTS:	ds 1
		ds 1
CCU61_MCMOUT:	ds 1
		ds 1
CCU61_MCMCTR:	ds 1
		ds 1
CCU61_IS:	ds 1
		ds 1
CCU61_ISS:	ds 1
		ds 1
CCU61_ISR:	ds 1
		ds 1
CCU61_INP:	ds 1
		ds 1
CCU61_IEN:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
CCU62_KSCFG:	ds 2			; DATA XREF: INIT_CCU62+2w
		ds 2
CCU62_PISELL:	ds 2			; DATA XREF: INIT_CCU62+58w
CCU62_PISELH:	ds 1
		ds 1
CCU62_ID:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
CCU62_KSCSR:	ds 1
		ds 1
CCU62_T12:	ds 1
		ds 1
CCU62_T12PR:	ds 2			; DATA XREF: INIT_CCU62+Ew
CCU62_T12DTC:	ds 2			; DATA XREF: INIT_CCU62+34w
		ds 2
CCU62_CC60R:	ds 1
		ds 1
CCU62_CC61R:	ds 1
		ds 1
CCU62_CC62R:	ds 1
		ds 1
		ds 1
		ds 1
CCU62_CC60SR:	ds 2			; DATA XREF: INIT_CCU62+24w ...
CCU62_CC61SR:	ds 2			; DATA XREF: INIT_CCU62+28w
CCU62_CC62SR:	ds 2			; DATA XREF: INIT_CCU62+2Cw
CCU62_TCTR4:	ds 2			; DATA XREF: INIT_CCU62+50w
CCU62_CMPSTAT:	ds 1
		ds 1
CCU62_CMPMODIF:	ds 1
		ds 1
CCU62_TCTR0:	ds 2			; DATA XREF: INIT_CCU62+18w
CCU62_TCTR2:	ds 2			; DATA XREF: INIT_CCU62+20w
CCU62_T13:	ds 1
		ds 1
CCU62_T13PR:	ds 2			; DATA XREF: INIT_CCU62+14w
CCU62_CC63R:	ds 1
		ds 1
CCU62_CC63SR:	ds 2			; DATA XREF: INIT_CCU62+30w
		ds 8
CCU62_MODCTR:	ds 1
		ds 1
CCU62_TRPCTR:	ds 1
		ds 1
CCU62_PSLR:	ds 1
		ds 1
CCU62_T12MSEL:	ds 2			; DATA XREF: INIT_CCU62+3Aw
		ds 1
		ds 1
CCU62_MCMOUTS:	ds 1
		ds 1
CCU62_MCMOUT:	ds 1
		ds 1
CCU62_MCMCTR:	ds 1
		ds 1
CCU62_IS:	ds 2			; DATA XREF: DMRV_FREQ_FUNC+14r
CCU62_ISS:	ds 1
		ds 1
CCU62_ISR:	ds 2			; DATA XREF: DMRV_FREQ_FUNC+56w
CCU62_INP:	ds 2			; DATA XREF: INIT_CCU62+3Ew
CCU62_IEN:	ds 2			; DATA XREF: INIT_CCU62+42w
		ds 26h
CCU63_KSCFG:	ds 2			; DATA XREF: INIT_CCU63_1+2w ...
		ds 2
CCU63_PISELL:	ds 2			; DATA XREF: INIT_CCU63_1+66w ...
CCU63_PISELH:	ds 1
		ds 1
CCU63_ID:	ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
CCU63_KSCSR:	ds 1
		ds 1
CCU63_T12:	ds 1
		ds 1
CCU63_T12PR:	ds 2			; DATA XREF: INIT_CCU63_1+12w ...
CCU63_T12DTC:	ds 2			; DATA XREF: INIT_CCU63_1+3Cw ...
		ds 2
CCU63_CC60R:	ds 1
		ds 1
CCU63_CC61R:	ds 2			; DATA XREF: CCU63_R0_INT_FUNC+3Er ...
CCU63_CC62R:	ds 1
		ds 1
		ds 1
		ds 1
CCU63_CC60SR:	ds 2			; DATA XREF: INIT_CCU63_1+2Cw ...
CCU63_CC61SR:	ds 2			; DATA XREF: INIT_CCU63_1+30w ...
CCU63_CC62SR:	ds 2			; DATA XREF: INIT_CCU63_1+34w ...
CCU63_TCTR4:	ds 2			; DATA XREF: INIT_CCU63_1+5Ew ...
CCU63_CMPSTAT:	ds 1
		ds 1
CCU63_CMPMODIF:	ds 1
		ds 1
CCU63_TCTR0:	ds 2			; DATA XREF: INIT_CCU63_1+1Ew ...
CCU63_TCTR2:	ds 2			; DATA XREF: INIT_CCU63_1+26w ...
CCU63_T13:	ds 1
		ds 1
CCU63_T13PR:	ds 2			; DATA XREF: INIT_CCU63_1+18w ...
CCU63_CC63R:	ds 1
		ds 1
CCU63_CC63SR:	ds 2			; DATA XREF: INIT_CCU63_1+38w ...
		ds 8
CCU63_MODCTR:	ds 2			; DATA XREF: INIT_CCU63+4Ew
CCU63_TRPCTR:	ds 1
		ds 1
CCU63_PSLR:	ds 1
		ds 1
CCU63_T12MSEL:	ds 2			; DATA XREF: INIT_CCU63_1+44w ...
		ds 1
		ds 1
CCU63_MCMOUTS:	ds 1
		ds 1
CCU63_MCMOUT:	ds 1
		ds 1
CCU63_MCMCTR:	ds 1
		ds 1
CCU63_IS:	ds 2			; DATA XREF: CCU63_R0_INT_FUNC+2Er ...
CCU63_ISS:	ds 1
		ds 1
CCU63_ISR:	ds 1
		ds 1
CCU63_INP:	ds 2			; DATA XREF: INIT_CCU63_1+48w
CCU63_IEN:	ds 2			; DATA XREF: INIT_CCU63_1+4Ew
		ds 26h
FINT0CSP:	ds 2
FINT0ADDR:	ds 2
FINT1CSP:	ds 2
FINT1ADDR:	ds 2
		ds 18h
BNKSEL0:	ds 2
BNKSEL1:	ds 2
BNKSEL2:	ds 2
BNKSEL3:	ds 2
		ds 18h
SRCP0:		ds 2
DSTP0:		ds 2
SRCP1:		ds 2
DSTP1:		ds 2
SRCP2:		ds 2
DSTP2:		ds 2
SRCP3:		ds 2
DSTP3:		ds 2
SRCP4:		ds 2
DSTP4:		ds 2
SRCP5:		ds 2
DSTP5:		ds 2
SRCP6:		ds 2
DSTP6:		ds 2
SRCP7:		ds 2
DSTP7:		ds 2
		ds 20h
PECSEG0:	ds 2
PECSEG1:	ds 2
PECSEG2:	ds 2
PECSEG3:	ds 2
PECSEG4:	ds 2
PECSEG5:	ds 2
PECSEG6:	ds 2
PECSEG7:	ds 2
		ds 170h
EBCMOD0:	ds 2
EBCMOD1:	ds 2
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
		ds 1
TCONCSMM:	ds 2
TCONCSSM:	ds 2
TCONCS0:	ds 2
FCONCS0:	ds 2
		ds 4
TCONCS1:	ds 2
FCONCS1:	ds 2
		ds 1
		ds 1
ADDRSEL1:	ds 2
TCONCS2:	ds 2
FCONCS2:	ds 2
		ds 1
		ds 1
ADDRSEL2:	ds 2
TCONCS3:	ds 2
FCONCS3:	ds 2
		ds 1
		ds 1
ADDRSEL3:	ds 2
TCONCS4:	ds 2
FCONCS4:	ds 2
		ds 1
		ds 1
ADDRSEL4:	ds 2
TCONCS5:	ds 2
FCONCS5:	ds 2
		ds 1
		ds 1
ADDRSEL5:	ds 2
TCONCS6:	ds 2
FCONCS6:	ds 2
		ds 1
		ds 1
ADDRSEL6:	ds 2
TCONCS7:	ds 2
FCONCS7:	ds 2
		ds 1
		ds 1
ADDRSEL7:	ds 2
		ds 1B0h
procX_SFR endp
X_SFR		ends

