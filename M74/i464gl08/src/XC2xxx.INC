;****************************************************************************
; Description
;       Register Definition File for Infineon XE16x devices
; ------------------------------------------------------------------------
; History:
;
;       Rev.             Date        Description
;       ---------------------------------------------------------------------
;       1.0              13.04.07    Initial version
;
;
;****************************************************************************



;****************************************************************************
; @Declaration of SFRs
;****************************************************************************


ADC0_RSIR0	EQU				0xE000
ADC0_RSIR1	EQU				0xE002
ADC0_RSIR2	EQU				0xE004

; Alias Register 0
ADC0_ALR0   EQU              0xE01C

; Arbitration Slot Enable Register
ADC0_ASENR  EQU              0xE018

; Ch. 0 Control Register
ADC0_CHCTR0  EQU             0xE020

; Ch. 1 Control Register
ADC0_CHCTR1  EQU             0xE022

; Ch. 10 Control Register
ADC0_CHCTR10  EQU            0xE034

; Ch. 11 Control Register
ADC0_CHCTR11  EQU            0xE036

; Ch. 12 Control Register
ADC0_CHCTR12  EQU            0xE038

; Ch. 13 Control Register
ADC0_CHCTR13  EQU            0xE03A

; Ch. 14 Control Register
ADC0_CHCTR14  EQU            0xE03C

; Ch. 15 Control Register
ADC0_CHCTR15  EQU            0xE03E

; Ch. 2 Control Register
ADC0_CHCTR2  EQU             0xE024

; Ch. 3 Control Register
ADC0_CHCTR3  EQU             0xE026

; Ch. 4 Control Register
ADC0_CHCTR4  EQU             0xE028

; Ch. 5 Control Register
ADC0_CHCTR5  EQU             0xE02A

; Ch. 6 Control Register
ADC0_CHCTR6  EQU             0xE02C

; Ch. 7 Control Register
ADC0_CHCTR7  EQU             0xE02E

; Ch. 8 Control Register
ADC0_CHCTR8  EQU             0xE030

; Ch. 9 Control Register
ADC0_CHCTR9  EQU             0xE032

; Channel Interrupt Clear Register
ADC0_CHINCR  EQU             0xE092

; Channel Interrupt Flag Register
ADC0_CHINFR  EQU             0xE090

; Channel Interrupt Node Pointer Register 0
ADC0_CHINPR0  EQU            0xE098

; Channel Interrupt Node Pointer Register 12
ADC0_CHINPR12  EQU           0xE09E

; Channel Interrupt Node Pointer Register 4
ADC0_CHINPR4  EQU            0xE09A

; Channel Interrupt Node Pointer Register 8
ADC0_CHINPR8  EQU            0xE09C

; Conversion Request Control Register 1
ADC0_CRCR1  EQU              0xE0E8

; Conversion Request Mode Register 1
ADC0_CRMR1  EQU              0xE0EC

; Conversion Request Pending Register 1
ADC0_CRPR1  EQU              0xE0EA

; External Multiplexer Control Register
ADC0_EMCTR  EQU              0xE0D0

; External Multiplexer Enable Register
ADC0_EMENR  EQU              0xE0D6

; Event Interrupt Clear Register
ADC0_EVINCR  EQU             0xE0A2

; Event Interrupt Flag Register
ADC0_EVINFR  EQU             0xE0A0

; Event Interrupt Node Pointer Register 0
ADC0_EVINPR0  EQU            0xE0A8

; Event Interrupt Node Pointer Register 12
ADC0_EVINPR12  EQU           0xE0AE

; Event Interrupt Node Pointer Register 4
ADC0_EVINPR4  EQU            0xE0AA

; Event Interrupt Node Pointer Register 8
ADC0_EVINPR8  EQU            0xE0AC

; Global Control Register
ADC0_GLOBCTR  EQU            0xE010

; Global Status Register
ADC0_GLOBSTR  EQU            0xE012

; Input Class Register 0
ADC0_INPCR0  EQU             0xE0C0

; Input Class Register 1
ADC0_INPCR1  EQU             0xE0C2

; Kernel State Configuration Register
ADC0_KSCFG  EQU              0xE00C

; Limit Check Boundary Register 0
ADC0_LCBR0  EQU              0xE084

; Limit Check Boundary Register 1
ADC0_LCBR1  EQU              0xE086

; Limit Check Boundary Register 2
ADC0_LCBR2  EQU              0xE088

; Limit Check Boundary Register 3
ADC0_LCBR3  EQU              0xE08A

; Port Input Select Register
ADC0_PISEL  EQU              0xE004

; Queue 0 Register 0
ADC0_Q0R0  EQU               0xE0E4

; Queue 0 Register 2
ADC0_Q0R2  EQU               0xE0F4

; Queue Backup Register 0
ADC0_QBUR0  EQU              0xE0E6

; Queue Backup Register 2
ADC0_QBUR2  EQU              0xE0F6

; Queue Input Register 0
ADC0_QINR0  EQU              0xE0E6

; Queue Input Register 2
ADC0_QINR2  EQU              0xE0F6

; Queue Mode Register 0
ADC0_QMR0  EQU               0xE0E0

; Queue Mode Register 2
ADC0_QMR2  EQU               0xE0F0

; Queue Status Register 0
ADC0_QSR0  EQU               0xE0E2

; Queue Status Register 2
ADC0_QSR2  EQU               0xE0F2

; Result Control Register 0
ADC0_RCR0  EQU               0xE0B0

; Result Control Register 1
ADC0_RCR1  EQU               0xE0B2

; Result Control Register 2
ADC0_RCR2  EQU               0xE0B4

; Result Control Register 3
ADC0_RCR3  EQU               0xE0B6

; Result Control Register 4
ADC0_RCR4  EQU               0xE0B8

; Result Control Register 5
ADC0_RCR5  EQU               0xE0BA

; Result Control Register 6
ADC0_RCR6  EQU               0xE0BC

; Result Control Register 7
ADC0_RCR7  EQU               0xE0BE

; Result Register 0
ADC0_RESR0  EQU              0xE040

; Result Register 1
ADC0_RESR1  EQU              0xE042

; Result Register 2
ADC0_RESR2  EQU              0xE044

; Result Register 3
ADC0_RESR3  EQU              0xE046

; Result Register 4
ADC0_RESR4  EQU              0xE048

; Result Register 5
ADC0_RESR5  EQU              0xE04A

; Result Register 6
ADC0_RESR6  EQU              0xE04C

; Result Register 7
ADC0_RESR7  EQU              0xE04E

; Result Register 0, View A
ADC0_RESRA0  EQU             0xE050

; Result Register 1, View A
ADC0_RESRA1  EQU             0xE052

; Result Register 2, View A
ADC0_RESRA2  EQU             0xE054

; Result Register 3, View A
ADC0_RESRA3  EQU             0xE056

; Result Register 4, View A
ADC0_RESRA4  EQU             0xE058

; Result Register 5, View A
ADC0_RESRA5  EQU             0xE05A

; Result Register 6, View A
ADC0_RESRA6  EQU             0xE05C

; Result Register 7, View A
ADC0_RESRA7  EQU             0xE05E

; Result Register 0, View AV
ADC0_RESRAV0  EQU            0xE070

; Result Register 1, View AV
ADC0_RESRAV1  EQU            0xE072

; Result Register 2, View AV
ADC0_RESRAV2  EQU            0xE074

; Result Register 3, View AV
ADC0_RESRAV3  EQU            0xE076

; Result Register 4, View AV
ADC0_RESRAV4  EQU            0xE078

; Result Register 5, View AV
ADC0_RESRAV5  EQU            0xE07A

; Result Register 6, View AV
ADC0_RESRAV6  EQU            0xE07C

; Result Register 7, View AV
ADC0_RESRAV7  EQU            0xE07E

; Result Register 0, View V
ADC0_RESRV0  EQU             0xE060

; Result Register 1, View V
ADC0_RESRV1  EQU             0xE062

; Result Register 2, View V
ADC0_RESRV2  EQU             0xE064

; Result Register 3, View V
ADC0_RESRV3  EQU             0xE066

; Result Register 4, View V
ADC0_RESRV4  EQU             0xE068

; Result Register 5, View V
ADC0_RESRV5  EQU             0xE06A

; Result Register 6, View V
ADC0_RESRV6  EQU             0xE06C

; Result Register 7, View V
ADC0_RESRV7  EQU             0xE06E

; Request Source Priority Register 0
ADC0_RSPR0  EQU              0xE014

; Result Status Shadow Register
ADC0_RSSR  EQU               0xE082

; Synchronization Control Register
ADC0_SYNCTR  EQU             0xE01A

; Valid Flag Register
ADC0_VFR  EQU                0xE080


ADC1_RSIR0	EQU				0xE100
ADC1_RSIR1	EQU				0xE102
ADC1_RSIR2	EQU				0xE104


; Alias Register 0
ADC1_ALR0  EQU               0xE11C

; Arbitration Slot Enable Register
ADC1_ASENR  EQU              0xE118

; Ch. 0 Control Register
ADC1_CHCTR0  EQU             0xE120

; Ch. 1 Control Register
ADC1_CHCTR1  EQU             0xE122

; Ch. 10 Control Register
ADC1_CHCTR10  EQU            0xE134

; Ch. 11 Control Register
ADC1_CHCTR11  EQU            0xE136

; Ch. 12 Control Register
ADC1_CHCTR12  EQU            0xE138

; Ch. 13 Control Register
ADC1_CHCTR13  EQU            0xE13A

; Ch. 14 Control Register
ADC1_CHCTR14  EQU            0xE13C

; Ch. 15 Control Register
ADC1_CHCTR15  EQU            0xE13E

; Ch. 2 Control Register
ADC1_CHCTR2  EQU             0xE124

; Ch. 3 Control Register
ADC1_CHCTR3  EQU             0xE126

; Ch. 4 Control Register
ADC1_CHCTR4  EQU             0xE128

; Ch. 5 Control Register
ADC1_CHCTR5  EQU             0xE12A

; Ch. 6 Control Register
ADC1_CHCTR6  EQU             0xE12C

; Ch. 7 Control Register
ADC1_CHCTR7  EQU             0xE12E

; Ch. 8 Control Register
ADC1_CHCTR8  EQU             0xE130

; Ch. 9 Control Register
ADC1_CHCTR9  EQU             0xE132

; Channel Interrupt Clear Register
ADC1_CHINCR  EQU             0xE192

; Channel Interrupt Flag Register
ADC1_CHINFR  EQU             0xE190

; Channel Interrupt Node Pointer Register 0
ADC1_CHINPR0  EQU            0xE198

; Channel Interrupt Node Pointer Register 12
ADC1_CHINPR12  EQU           0xE19E

; Channel Interrupt Node Pointer Register 4
ADC1_CHINPR4  EQU            0xE19A

; Channel Interrupt Node Pointer Register 8
ADC1_CHINPR8  EQU            0xE19C

; Conversion Request Control Register 1
ADC1_CRCR1  EQU              0xE1E8

; Conversion Request Mode Register 1
ADC1_CRMR1  EQU              0xE1EC

; Conversion Request Pending Register 1
ADC1_CRPR1  EQU              0xE1EA

; External Multiplexer Control Register
ADC1_EMCTR  EQU              0xE1D0

; External Multiplexer Enable Register
ADC1_EMENR  EQU              0xE1D6

; Event Interrupt Clear Register
ADC1_EVINCR  EQU             0xE1A2

; Event Interrupt Flag Register
ADC1_EVINFR  EQU             0xE1A0

; Event Interrupt Node Pointer Register 0
ADC1_EVINPR0  EQU            0xE1A8

; Event Interrupt Node Pointer Register 12
ADC1_EVINPR12  EQU           0xE1AE

; Event Interrupt Node Pointer Register 4
ADC1_EVINPR4  EQU            0xE1AA

; Event Interrupt Node Pointer Register 8
ADC1_EVINPR8  EQU            0xE1AC

; Global Control Register
ADC1_GLOBCTR  EQU            0xE110

; Global Status Register
ADC1_GLOBSTR  EQU            0xE112

; Input Class Register 0
ADC1_INPCR0  EQU             0xE1C0

; Input Class Register 1
ADC1_INPCR1  EQU             0xE1C2

; Limit Check Boundary Register 0
ADC1_LCBR0  EQU              0xE184

; Limit Check Boundary Register 1
ADC1_LCBR1  EQU              0xE186

; Limit Check Boundary Register 2
ADC1_LCBR2  EQU              0xE188

; Limit Check Boundary Register 3
ADC1_LCBR3  EQU              0xE18A

; Port Input Select Register
ADC1_PISEL  EQU              0xE104

; Queue 0 Register 0
ADC1_Q0R0  EQU               0xE1E4

; Queue 0 Register 2
ADC1_Q0R2  EQU               0xE1F4

; Queue Backup Register 0
ADC1_QBUR0  EQU              0xE1E6

; Queue Backup Register 2
ADC1_QBUR2  EQU              0xE1F6

; Queue Input Register 0
ADC1_QINR0  EQU              0xE1E6

; Queue Input Register 2
ADC1_QINR2  EQU              0xE1F6

; Queue Mode Register 0
ADC1_QMR0  EQU               0xE1E0

; Queue Mode Register 2
ADC1_QMR2  EQU               0xE1F0

; Queue Status Register 0
ADC1_QSR0  EQU               0xE1E2

; Queue Status Register 2
ADC1_QSR2  EQU               0xE1F2

; Result Control Register 0
ADC1_RCR0  EQU               0xE1B0

; Result Control Register 1
ADC1_RCR1  EQU               0xE1B2

; Result Control Register 2
ADC1_RCR2  EQU               0xE1B4

; Result Control Register 3
ADC1_RCR3  EQU               0xE1B6

; Result Control Register 4
ADC1_RCR4  EQU               0xE1B8

; Result Control Register 5
ADC1_RCR5  EQU               0xE1BA

; Result Control Register 6
ADC1_RCR6  EQU               0xE1BC

; Result Control Register 7
ADC1_RCR7  EQU               0xE1BE

; Result Register 0
ADC1_RESR0  EQU              0xE140

; Result Register 1
ADC1_RESR1  EQU              0xE142

; Result Register 2
ADC1_RESR2  EQU              0xE144

; Result Register 3
ADC1_RESR3  EQU              0xE146

; Result Register 4
ADC1_RESR4  EQU              0xE148

; Result Register 5
ADC1_RESR5  EQU              0xE14A

; Result Register 6
ADC1_RESR6  EQU              0xE14C

; Result Register 7
ADC1_RESR7  EQU              0xE14E

; Result Register 0, View A
ADC1_RESRA0  EQU             0xE150

; Result Register 1, View A
ADC1_RESRA1  EQU             0xE152

; Result Register 2, View A
ADC1_RESRA2  EQU             0xE154

; Result Register 3, View A
ADC1_RESRA3  EQU             0xE156

; Result Register 4, View A
ADC1_RESRA4  EQU             0xE158

; Result Register 5, View A
ADC1_RESRA5  EQU             0xE15A

; Result Register 6, View A
ADC1_RESRA6  EQU             0xE15C

; Result Register 7, View A
ADC1_RESRA7  EQU             0xE15E

; Result Register 0, View AV
ADC1_RESRAV0  EQU            0xE170

; Result Register 1, View AV
ADC1_RESRAV1  EQU            0xE172

; Result Register 2, View AV
ADC1_RESRAV2  EQU            0xE174

; Result Register 3, View AV
ADC1_RESRAV3  EQU            0xE176

; Result Register 4, View AV
ADC1_RESRAV4  EQU            0xE178

; Result Register 5, View AV
ADC1_RESRAV5  EQU            0xE17A

; Result Register 6, View AV
ADC1_RESRAV6  EQU            0xE17C

; Result Register 7, View AV
ADC1_RESRAV7  EQU            0xE17E

; Result Register 0, View V
ADC1_RESRV0  EQU             0xE160

; Result Register 1, View V
ADC1_RESRV1  EQU             0xE162

; Result Register 2, View V
ADC1_RESRV2  EQU             0xE164

; Result Register 3, View V
ADC1_RESRV3  EQU             0xE166

; Result Register 4, View V
ADC1_RESRV4  EQU             0xE168

; Result Register 5, View V
ADC1_RESRV5  EQU             0xE16A

; Result Register 6, View V
ADC1_RESRV6  EQU             0xE16C

; Result Register 7, View V
ADC1_RESRV7  EQU             0xE16E

; Request Source Priority Register 0
ADC1_RSPR0  EQU              0xE114

; Result Status Shadow Register
ADC1_RSSR  EQU               0xE182

; Synchronization Control Register
ADC1_SYNCTR  EQU             0xE11A

; Valid Flag Register
ADC1_VFR  EQU                0xE180

; ADC Interrupt Control Reg. 0
ADC_0IC  DEFR                            0xFF70
ADC_0IC_GPX                      BIT ADC_0IC.8
ADC_0IC_IE                       BIT ADC_0IC.6
ADC_0IC_IR                       BIT ADC_0IC.7

; ADC Interrupt Control Reg. 1
ADC_1IC  DEFR                            0xFF72
ADC_1IC_GPX                      BIT ADC_1IC.8
ADC_1IC_IE                       BIT ADC_1IC.6
ADC_1IC_IR                       BIT ADC_1IC.7

; ADC Interrupt Control Reg. 2
ADC_2IC  DEFR                            0xFF74
ADC_2IC_GPX                      BIT ADC_2IC.8
ADC_2IC_IE                       BIT ADC_2IC.6
ADC_2IC_IR                       BIT ADC_2IC.7

; ADC Interrupt Control Reg. 3
ADC_3IC  DEFR                            0xFF76
ADC_3IC_GPX                      BIT ADC_3IC.8
ADC_3IC_IE                       BIT ADC_3IC.6
ADC_3IC_IR                       BIT ADC_3IC.7

; ADC Interrupt Control Reg. 4
ADC_4IC  DEFR                            0xFF78
ADC_4IC_GPX                      BIT ADC_4IC.8
ADC_4IC_IE                       BIT ADC_4IC.6
ADC_4IC_IR                       BIT ADC_4IC.7

; ADC Interrupt Control Reg. 5
ADC_5IC  DEFR                            0xFF7A
ADC_5IC_GPX                      BIT ADC_5IC.8
ADC_5IC_IE                       BIT ADC_5IC.6
ADC_5IC_IR                       BIT ADC_5IC.7

; ADC Interrupt Control Reg. 6
ADC_6IC  DEFR                            0xFF7C
ADC_6IC_GPX                      BIT ADC_6IC.8
ADC_6IC_IE                       BIT ADC_6IC.6
ADC_6IC_IR                       BIT ADC_6IC.7

; ADC Interrupt Control Reg. 7
ADC_7IC  DEFR                            0xFF7E
ADC_7IC_GPX                      BIT ADC_7IC.8
ADC_7IC_IE                       BIT ADC_7IC.6
ADC_7IC_IR                       BIT ADC_7IC.7

; Register Bank Selection Reg. 0
BNKSEL0  EQU                 0xEC20

; Register Bank Selection Reg. 1
BNKSEL1  EQU                 0xEC22

; Register Bank Selection Reg. 2
BNKSEL2  EQU                 0xEC24

; Register Bank Selection Reg. 3
BNKSEL3  EQU                 0xEC26

; CAN Interrupt Control Reg. 0
CAN_0IC  DEFR                            0xF140
CAN_0IC_GPX                      BIT CAN_0IC.8
CAN_0IC_IE                       BIT CAN_0IC.6
CAN_0IC_IR                       BIT CAN_0IC.7

; CAN Interrupt Control Reg. 10
CAN_10IC  DEFR                           0xF154
CAN_10IC_GPX                      BIT CAN_10IC.8
CAN_10IC_IE                       BIT CAN_10IC.6
CAN_10IC_IR                       BIT CAN_10IC.7

; CAN Interrupt Control Reg. 11
CAN_11IC  DEFR                           0xF156
CAN_11IC_GPX                      BIT CAN_11IC.8
CAN_11IC_IE                       BIT CAN_11IC.6
CAN_11IC_IR                       BIT CAN_11IC.7

; CAN Interrupt Control Reg. 12
CAN_12IC  DEFR                           0xF158
CAN_12IC_GPX                      BIT CAN_12IC.8
CAN_12IC_IE                       BIT CAN_12IC.6
CAN_12IC_IR                       BIT CAN_12IC.7

; CAN Interrupt Control Reg. 13
CAN_13IC  DEFR                           0xF15A
CAN_13IC_GPX                      BIT CAN_13IC.8
CAN_13IC_IE                       BIT CAN_13IC.6
CAN_13IC_IR                       BIT CAN_13IC.7

; CAN Interrupt Control Reg. 14
CAN_14IC  DEFR                           0xF15C
CAN_14IC_GPX                      BIT CAN_14IC.8
CAN_14IC_IE                       BIT CAN_14IC.6
CAN_14IC_IR                       BIT CAN_14IC.7

; CAN Interrupt Control Reg. 15
CAN_15IC  DEFR                           0xF15E
CAN_15IC_GPX                      BIT CAN_15IC.8
CAN_15IC_IE                       BIT CAN_15IC.6
CAN_15IC_IR                       BIT CAN_15IC.7

; CAN Interrupt Control Reg. 1
CAN_1IC  DEFR                            0xF142
CAN_1IC_GPX                      BIT CAN_1IC.8
CAN_1IC_IE                       BIT CAN_1IC.6
CAN_1IC_IR                       BIT CAN_1IC.7

; CAN Interrupt Control Reg. 2
CAN_2IC  DEFR                            0xF144
CAN_2IC_GPX                      BIT CAN_2IC.8
CAN_2IC_IE                       BIT CAN_2IC.6
CAN_2IC_IR                       BIT CAN_2IC.7

; CAN Interrupt Control Reg. 3
CAN_3IC  DEFR                            0xF146
CAN_3IC_GPX                      BIT CAN_3IC.8
CAN_3IC_IE                       BIT CAN_3IC.6
CAN_3IC_IR                       BIT CAN_3IC.7

; CAN Interrupt Control Reg. 4
CAN_4IC  DEFR                            0xF148
CAN_4IC_GPX                      BIT CAN_4IC.8
CAN_4IC_IE                       BIT CAN_4IC.6
CAN_4IC_IR                       BIT CAN_4IC.7

; CAN Interrupt Control Reg. 5
CAN_5IC  DEFR                            0xF14A
CAN_5IC_GPX                      BIT CAN_5IC.8
CAN_5IC_IE                       BIT CAN_5IC.6
CAN_5IC_IR                       BIT CAN_5IC.7

; CAN Interrupt Control Reg. 6
CAN_6IC  DEFR                            0xF14C
CAN_6IC_GPX                      BIT CAN_6IC.8
CAN_6IC_IE                       BIT CAN_6IC.6
CAN_6IC_IR                       BIT CAN_6IC.7

; CAN Interrupt Control Reg. 7
CAN_7IC  DEFR                            0xF14E
CAN_7IC_GPX                      BIT CAN_7IC.8
CAN_7IC_IE                       BIT CAN_7IC.6
CAN_7IC_IR                       BIT CAN_7IC.7

; CAN Interrupt Control Reg. 8
CAN_8IC  DEFR                            0xF150
CAN_8IC_GPX                      BIT CAN_8IC.8
CAN_8IC_IE                       BIT CAN_8IC.6
CAN_8IC_IR                       BIT CAN_8IC.7

; CAN Interrupt Control Reg. 9
CAN_9IC  DEFR                            0xF152
CAN_9IC_GPX                      BIT CAN_9IC.8
CAN_9IC_IE                       BIT CAN_9IC.6
CAN_9IC_IR                       BIT CAN_9IC.7

; Fractional Divider Register H
CAN_FDRH  EQU                0x20000E

; Fractional Divider Register L
CAN_FDRL  EQU                0x20000C

; List Register 0 High
CAN_LIST0H  EQU              0x200102

; List Register 0 Low
CAN_LIST0L  EQU              0x200100

; List Register 1 High
CAN_LIST1H  EQU              0x200106

; List Register 1 Low
CAN_LIST1L  EQU              0x200104

; List Register 2 High
CAN_LIST2H  EQU              0x20010A

; List Register 2 Low
CAN_LIST2L  EQU              0x200108

; List Register 3 High
CAN_LIST3H  EQU              0x20010E

; List Register 3 Low
CAN_LIST3L  EQU              0x20010C

; List Register 4 High
CAN_LIST4H  EQU              0x200112

; List Register 4 Low
CAN_LIST4L  EQU              0x200110

; List Register 5 High
CAN_LIST5H  EQU              0x200116

; List Register 5 Low
CAN_LIST5L  EQU              0x200114

; List Register 6 High
CAN_LIST6H  EQU              0x20011A

; List Register 6 Low
CAN_LIST6L  EQU              0x200118

; List Register 7 High
CAN_LIST7H  EQU              0x20011E

; List Register 7 Low
CAN_LIST7L  EQU              0x20011C

; Module Control Register
CAN_MCR  EQU                 0x2001C8

; Module Interrupt Trigger Register
CAN_MITR  EQU                0x2001CC

; Message Object 0 Acceptance Mask Register High
CAN_MOAMR0H  EQU             0x20100E

; Message Object 0 Acceptance Mask Register Low
CAN_MOAMR0L  EQU             0x20100C

; Message Object 100 Acceptance Mask Register High
CAN_MOAMR100H  EQU           0x201C8E

; Message Object 100 Acceptance Mask Register Low
CAN_MOAMR100L  EQU           0x201C8C

; Message Object 101 Acceptance Mask Register High
CAN_MOAMR101H  EQU           0x201CAE

; Message Object 101 Acceptance Mask Register Low
CAN_MOAMR101L  EQU           0x201CAC

; Message Object 102 Acceptance Mask Register High
CAN_MOAMR102H  EQU           0x201CCE

; Message Object 102 Acceptance Mask Register Low
CAN_MOAMR102L  EQU           0x201CCC

; Message Object 103 Acceptance Mask Register High
CAN_MOAMR103H  EQU           0x201CEE

; Message Object 103 Acceptance Mask Register Low
CAN_MOAMR103L  EQU           0x201CEC

; Message Object 104 Acceptance Mask Register High
CAN_MOAMR104H  EQU           0x201D0E

; Message Object 104 Acceptance Mask Register Low
CAN_MOAMR104L  EQU           0x201D0C

; Message Object 105 Acceptance Mask Register High
CAN_MOAMR105H  EQU           0x201D2E

; Message Object 105 Acceptance Mask Register Low
CAN_MOAMR105L  EQU           0x201D2C

; Message Object 106 Acceptance Mask Register High
CAN_MOAMR106H  EQU           0x201D4E

; Message Object 106 Acceptance Mask Register Low
CAN_MOAMR106L  EQU           0x201D4C

; Message Object 107 Acceptance Mask Register High
CAN_MOAMR107H  EQU           0x201D6E

; Message Object 107 Acceptance Mask Register Low
CAN_MOAMR107L  EQU           0x201D6C

; Message Object 108 Acceptance Mask Register High
CAN_MOAMR108H  EQU           0x201D8E

; Message Object 108 Acceptance Mask Register Low
CAN_MOAMR108L  EQU           0x201D8C

; Message Object 109 Acceptance Mask Register High
CAN_MOAMR109H  EQU           0x201DAE

; Message Object 109 Acceptance Mask Register Low
CAN_MOAMR109L  EQU           0x201DAC

; Message Object 10 Acceptance Mask Register High
CAN_MOAMR10H  EQU            0x20114E

; Message Object 10 Acceptance Mask Register Low
CAN_MOAMR10L  EQU            0x20114C

; Message Object 110 Acceptance Mask Register High
CAN_MOAMR110H  EQU           0x201DCE

; Message Object 110 Acceptance Mask Register Low
CAN_MOAMR110L  EQU           0x201DCC

; Message Object 111 Acceptance Mask Register High
CAN_MOAMR111H  EQU           0x201DEE

; Message Object 111 Acceptance Mask Register Low
CAN_MOAMR111L  EQU           0x201DEC

; Message Object 112 Acceptance Mask Register High
CAN_MOAMR112H  EQU           0x201E0E

; Message Object 112 Acceptance Mask Register Low
CAN_MOAMR112L  EQU           0x201E0C

; Message Object 113 Acceptance Mask Register High
CAN_MOAMR113H  EQU           0x201E2E

; Message Object 113 Acceptance Mask Register Low
CAN_MOAMR113L  EQU           0x201E2C

; Message Object 114 Acceptance Mask Register High
CAN_MOAMR114H  EQU           0x201E4E

; Message Object 114 Acceptance Mask Register Low
CAN_MOAMR114L  EQU           0x201E4C

; Message Object 115 Acceptance Mask Register High
CAN_MOAMR115H  EQU           0x201E6E

; Message Object 115 Acceptance Mask Register Low
CAN_MOAMR115L  EQU           0x201E6C

; Message Object 116 Acceptance Mask Register High
CAN_MOAMR116H  EQU           0x201E8E

; Message Object 116 Acceptance Mask Register Low
CAN_MOAMR116L  EQU           0x201E8C

; Message Object 117 Acceptance Mask Register High
CAN_MOAMR117H  EQU           0x201EAE

; Message Object 117 Acceptance Mask Register Low
CAN_MOAMR117L  EQU           0x201EAC

; Message Object 118 Acceptance Mask Register High
CAN_MOAMR118H  EQU           0x201ECE

; Message Object 118 Acceptance Mask Register Low
CAN_MOAMR118L  EQU           0x201ECC

; Message Object 119 Acceptance Mask Register High
CAN_MOAMR119H  EQU           0x201EEE

; Message Object 119 Acceptance Mask Register Low
CAN_MOAMR119L  EQU           0x201EEC

; Message Object 11 Acceptance Mask Register High
CAN_MOAMR11H  EQU            0x20116E

; Message Object 11 Acceptance Mask Register Low
CAN_MOAMR11L  EQU            0x20116C

; Message Object 120 Acceptance Mask Register High
CAN_MOAMR120H  EQU           0x201F0E

; Message Object 120 Acceptance Mask Register Low
CAN_MOAMR120L  EQU           0x201F0C

; Message Object 121 Acceptance Mask Register High
CAN_MOAMR121H  EQU           0x201F2E

; Message Object 121 Acceptance Mask Register Low
CAN_MOAMR121L  EQU           0x201F2C

; Message Object 122 Acceptance Mask Register High
CAN_MOAMR122H  EQU           0x201F4E

; Message Object 122 Acceptance Mask Register Low
CAN_MOAMR122L  EQU           0x201F4C

; Message Object 123 Acceptance Mask Register High
CAN_MOAMR123H  EQU           0x201F6E

; Message Object 123 Acceptance Mask Register Low
CAN_MOAMR123L  EQU           0x201F6C

; Message Object 124 Acceptance Mask Register High
CAN_MOAMR124H  EQU           0x201F8E

; Message Object 124 Acceptance Mask Register Low
CAN_MOAMR124L  EQU           0x201F8C

; Message Object 125 Acceptance Mask Register High
CAN_MOAMR125H  EQU           0x201FAE

; Message Object 125 Acceptance Mask Register Low
CAN_MOAMR125L  EQU           0x201FAC

; Message Object 126 Acceptance Mask Register High
CAN_MOAMR126H  EQU           0x201FCE

; Message Object 126 Acceptance Mask Register Low
CAN_MOAMR126L  EQU           0x201FCC

; Message Object 127 Acceptance Mask Register High
CAN_MOAMR127H  EQU           0x201FEE

; Message Object 127 Acceptance Mask Register Low
CAN_MOAMR127L  EQU           0x201FEC

; Message Object 12 Acceptance Mask Register High
CAN_MOAMR12H  EQU            0x20118E

; Message Object 12 Acceptance Mask Register Low
CAN_MOAMR12L  EQU            0x20118C

; Message Object 13 Acceptance Mask Register High
CAN_MOAMR13H  EQU            0x2011AE

; Message Object 13 Acceptance Mask Register Low
CAN_MOAMR13L  EQU            0x2011AC

; Message Object 14 Acceptance Mask Register High
CAN_MOAMR14H  EQU            0x2011CE

; Message Object 14 Acceptance Mask Register Low
CAN_MOAMR14L  EQU            0x2011CC

; Message Object 15 Acceptance Mask Register High
CAN_MOAMR15H  EQU            0x2011EE

; Message Object 15 Acceptance Mask Register Low
CAN_MOAMR15L  EQU            0x2011EC

; Message Object 16 Acceptance Mask Register High
CAN_MOAMR16H  EQU            0x20120E

; Message Object 16 Acceptance Mask Register Low
CAN_MOAMR16L  EQU            0x20120C

; Message Object 17 Acceptance Mask Register High
CAN_MOAMR17H  EQU            0x20122E

; Message Object 17 Acceptance Mask Register Low
CAN_MOAMR17L  EQU            0x20122C

; Message Object 18 Acceptance Mask Register High
CAN_MOAMR18H  EQU            0x20124E

; Message Object 18 Acceptance Mask Register Low
CAN_MOAMR18L  EQU            0x20124C

; Message Object 19 Acceptance Mask Register High
CAN_MOAMR19H  EQU            0x20126E

; Message Object 19 Acceptance Mask Register Low
CAN_MOAMR19L  EQU            0x20126C

; Message Object 1 Acceptance Mask Register High
CAN_MOAMR1H  EQU             0x20102E

; Message Object 1 Acceptance Mask Register Low
CAN_MOAMR1L  EQU             0x20102C

; Message Object 20 Acceptance Mask Register High
CAN_MOAMR20H  EQU            0x20128E

; Message Object 20 Acceptance Mask Register Low
CAN_MOAMR20L  EQU            0x20128C

; Message Object 21 Acceptance Mask Register High
CAN_MOAMR21H  EQU            0x2012AE

; Message Object 21 Acceptance Mask Register Low
CAN_MOAMR21L  EQU            0x2012AC

; Message Object 22 Acceptance Mask Register High
CAN_MOAMR22H  EQU            0x2012CE

; Message Object 22 Acceptance Mask Register Low
CAN_MOAMR22L  EQU            0x2012CC

; Message Object 23 Acceptance Mask Register High
CAN_MOAMR23H  EQU            0x2012EE

; Message Object 23 Acceptance Mask Register Low
CAN_MOAMR23L  EQU            0x2012EC

; Message Object 24 Acceptance Mask Register High
CAN_MOAMR24H  EQU            0x20130E

; Message Object 24 Acceptance Mask Register Low
CAN_MOAMR24L  EQU            0x20130C

; Message Object 25 Acceptance Mask Register High
CAN_MOAMR25H  EQU            0x20132E

; Message Object 25 Acceptance Mask Register Low
CAN_MOAMR25L  EQU            0x20132C

; Message Object 26 Acceptance Mask Register High
CAN_MOAMR26H  EQU            0x20134E

; Message Object 26 Acceptance Mask Register Low
CAN_MOAMR26L  EQU            0x20134C

; Message Object 27 Acceptance Mask Register High
CAN_MOAMR27H  EQU            0x20136E

; Message Object 27 Acceptance Mask Register Low
CAN_MOAMR27L  EQU            0x20136C

; Message Object 28 Acceptance Mask Register High
CAN_MOAMR28H  EQU            0x20138E

; Message Object 28 Acceptance Mask Register Low
CAN_MOAMR28L  EQU            0x20138C

; Message Object 29 Acceptance Mask Register High
CAN_MOAMR29H  EQU            0x2013AE

; Message Object 29 Acceptance Mask Register Low
CAN_MOAMR29L  EQU            0x2013AC

; Message Object 2 Acceptance Mask Register High
CAN_MOAMR2H  EQU             0x20104E

; Message Object 2 Acceptance Mask Register Low
CAN_MOAMR2L  EQU             0x20104C

; Message Object 30 Acceptance Mask Register High
CAN_MOAMR30H  EQU            0x2013CE

; Message Object 30 Acceptance Mask Register Low
CAN_MOAMR30L  EQU            0x2013CC

; Message Object 31 Acceptance Mask Register High
CAN_MOAMR31H  EQU            0x2013EE

; Message Object 31 Acceptance Mask Register Low
CAN_MOAMR31L  EQU            0x2013EC

; Message Object 32 Acceptance Mask Register High
CAN_MOAMR32H  EQU            0x20140E

; Message Object 32 Acceptance Mask Register Low
CAN_MOAMR32L  EQU            0x20140C

; Message Object 33 Acceptance Mask Register High
CAN_MOAMR33H  EQU            0x20142E

; Message Object 33 Acceptance Mask Register Low
CAN_MOAMR33L  EQU            0x20142C

; Message Object 34 Acceptance Mask Register High
CAN_MOAMR34H  EQU            0x20144E

; Message Object 34 Acceptance Mask Register Low
CAN_MOAMR34L  EQU            0x20144C

; Message Object 35 Acceptance Mask Register High
CAN_MOAMR35H  EQU            0x20146E

; Message Object 35 Acceptance Mask Register Low
CAN_MOAMR35L  EQU            0x20146C

; Message Object 36 Acceptance Mask Register High
CAN_MOAMR36H  EQU            0x20148E

; Message Object 36 Acceptance Mask Register Low
CAN_MOAMR36L  EQU            0x20148C

; Message Object 37 Acceptance Mask Register High
CAN_MOAMR37H  EQU            0x2014AE

; Message Object 37 Acceptance Mask Register Low
CAN_MOAMR37L  EQU            0x2014AC

; Message Object 38 Acceptance Mask Register High
CAN_MOAMR38H  EQU            0x2014CE

; Message Object 38 Acceptance Mask Register Low
CAN_MOAMR38L  EQU            0x2014CC

; Message Object 39 Acceptance Mask Register High
CAN_MOAMR39H  EQU            0x2014EE

; Message Object 39 Acceptance Mask Register Low
CAN_MOAMR39L  EQU            0x2014EC

; Message Object 3 Acceptance Mask Register High
CAN_MOAMR3H  EQU             0x20106E

; Message Object 3 Acceptance Mask Register Low
CAN_MOAMR3L  EQU             0x20106C

; Message Object 40 Acceptance Mask Register High
CAN_MOAMR40H  EQU            0x20150E

; Message Object 40 Acceptance Mask Register Low
CAN_MOAMR40L  EQU            0x20150C

; Message Object 41 Acceptance Mask Register High
CAN_MOAMR41H  EQU            0x20152E

; Message Object 41 Acceptance Mask Register Low
CAN_MOAMR41L  EQU            0x20152C

; Message Object 42 Acceptance Mask Register High
CAN_MOAMR42H  EQU            0x20154E

; Message Object 42 Acceptance Mask Register Low
CAN_MOAMR42L  EQU            0x20154C

; Message Object 43 Acceptance Mask Register High
CAN_MOAMR43H  EQU            0x20156E

; Message Object 43 Acceptance Mask Register Low
CAN_MOAMR43L  EQU            0x20156C

; Message Object 44 Acceptance Mask Register High
CAN_MOAMR44H  EQU            0x20158E

; Message Object 44 Acceptance Mask Register Low
CAN_MOAMR44L  EQU            0x20158C

; Message Object 45 Acceptance Mask Register High
CAN_MOAMR45H  EQU            0x2015AE

; Message Object 45 Acceptance Mask Register Low
CAN_MOAMR45L  EQU            0x2015AC

; Message Object 46 Acceptance Mask Register High
CAN_MOAMR46H  EQU            0x2015CE

; Message Object 46 Acceptance Mask Register Low
CAN_MOAMR46L  EQU            0x2015CC

; Message Object 47 Acceptance Mask Register High
CAN_MOAMR47H  EQU            0x2015EE

; Message Object 47 Acceptance Mask Register Low
CAN_MOAMR47L  EQU            0x2015EC

; Message Object 48 Acceptance Mask Register High
CAN_MOAMR48H  EQU            0x20160E

; Message Object 48 Acceptance Mask Register Low
CAN_MOAMR48L  EQU            0x20160C

; Message Object 49 Acceptance Mask Register High
CAN_MOAMR49H  EQU            0x20162E

; Message Object 49 Acceptance Mask Register Low
CAN_MOAMR49L  EQU            0x20162C

; Message Object 4 Acceptance Mask Register High
CAN_MOAMR4H  EQU             0x20108E

; Message Object 4 Acceptance Mask Register Low
CAN_MOAMR4L  EQU             0x20108C

; Message Object 50 Acceptance Mask Register High
CAN_MOAMR50H  EQU            0x20164E

; Message Object 50 Acceptance Mask Register Low
CAN_MOAMR50L  EQU            0x20164C

; Message Object 51 Acceptance Mask Register High
CAN_MOAMR51H  EQU            0x20166E

; Message Object 51 Acceptance Mask Register Low
CAN_MOAMR51L  EQU            0x20166C

; Message Object 52 Acceptance Mask Register High
CAN_MOAMR52H  EQU            0x20168E

; Message Object 52 Acceptance Mask Register Low
CAN_MOAMR52L  EQU            0x20168C

; Message Object 53 Acceptance Mask Register High
CAN_MOAMR53H  EQU            0x2016AE

; Message Object 53 Acceptance Mask Register Low
CAN_MOAMR53L  EQU            0x2016AC

; Message Object 54 Acceptance Mask Register High
CAN_MOAMR54H  EQU            0x2016CE

; Message Object 54 Acceptance Mask Register Low
CAN_MOAMR54L  EQU            0x2016CC

; Message Object 55 Acceptance Mask Register High
CAN_MOAMR55H  EQU            0x2016EE

; Message Object 55 Acceptance Mask Register Low
CAN_MOAMR55L  EQU            0x2016EC

; Message Object 56 Acceptance Mask Register High
CAN_MOAMR56H  EQU            0x20170E

; Message Object 56 Acceptance Mask Register Low
CAN_MOAMR56L  EQU            0x20170C

; Message Object 57 Acceptance Mask Register High
CAN_MOAMR57H  EQU            0x20172E

; Message Object 57 Acceptance Mask Register Low
CAN_MOAMR57L  EQU            0x20172C

; Message Object 58 Acceptance Mask Register High
CAN_MOAMR58H  EQU            0x20174E

; Message Object 58 Acceptance Mask Register Low
CAN_MOAMR58L  EQU            0x20174C

; Message Object 59 Acceptance Mask Register High
CAN_MOAMR59H  EQU            0x20176E

; Message Object 59 Acceptance Mask Register Low
CAN_MOAMR59L  EQU            0x20176C

; Message Object 5 Acceptance Mask Register High
CAN_MOAMR5H  EQU             0x2010AE

; Message Object 5 Acceptance Mask Register Low
CAN_MOAMR5L  EQU             0x2010AC

; Message Object 60 Acceptance Mask Register High
CAN_MOAMR60H  EQU            0x20178E

; Message Object 60 Acceptance Mask Register Low
CAN_MOAMR60L  EQU            0x20178C

; Message Object 61 Acceptance Mask Register High
CAN_MOAMR61H  EQU            0x2017AE

; Message Object 61 Acceptance Mask Register Low
CAN_MOAMR61L  EQU            0x2017AC

; Message Object 62 Acceptance Mask Register High
CAN_MOAMR62H  EQU            0x2017CE

; Message Object 62 Acceptance Mask Register Low
CAN_MOAMR62L  EQU            0x2017CC

; Message Object 63 Acceptance Mask Register High
CAN_MOAMR63H  EQU            0x2017EE

; Message Object 63 Acceptance Mask Register Low
CAN_MOAMR63L  EQU            0x2017EC

; Message Object 64 Acceptance Mask Register High
CAN_MOAMR64H  EQU            0x20180E

; Message Object 64 Acceptance Mask Register Low
CAN_MOAMR64L  EQU            0x20180C

; Message Object 65 Acceptance Mask Register High
CAN_MOAMR65H  EQU            0x20182E

; Message Object 65 Acceptance Mask Register Low
CAN_MOAMR65L  EQU            0x20182C

; Message Object 66 Acceptance Mask Register High
CAN_MOAMR66H  EQU            0x20184E

; Message Object 66 Acceptance Mask Register Low
CAN_MOAMR66L  EQU            0x20184C

; Message Object 67 Acceptance Mask Register High
CAN_MOAMR67H  EQU            0x20186E

; Message Object 67 Acceptance Mask Register Low
CAN_MOAMR67L  EQU            0x20186C

; Message Object 68 Acceptance Mask Register High
CAN_MOAMR68H  EQU            0x20188E

; Message Object 68 Acceptance Mask Register Low
CAN_MOAMR68L  EQU            0x20188C

; Message Object 69 Acceptance Mask Register High
CAN_MOAMR69H  EQU            0x2018AE

; Message Object 69 Acceptance Mask Register Low
CAN_MOAMR69L  EQU            0x2018AC

; Message Object 6 Acceptance Mask Register High
CAN_MOAMR6H  EQU             0x2010CE

; Message Object 6 Acceptance Mask Register Low
CAN_MOAMR6L  EQU             0x2010CC

; Message Object 70 Acceptance Mask Register High
CAN_MOAMR70H  EQU            0x2018CE

; Message Object 70 Acceptance Mask Register Low
CAN_MOAMR70L  EQU            0x2018CC

; Message Object 71 Acceptance Mask Register High
CAN_MOAMR71H  EQU            0x2018EE

; Message Object 71 Acceptance Mask Register Low
CAN_MOAMR71L  EQU            0x2018EC

; Message Object 72 Acceptance Mask Register High
CAN_MOAMR72H  EQU            0x20190E

; Message Object 72 Acceptance Mask Register Low
CAN_MOAMR72L  EQU            0x20190C

; Message Object 73 Acceptance Mask Register High
CAN_MOAMR73H  EQU            0x20192E

; Message Object 73 Acceptance Mask Register Low
CAN_MOAMR73L  EQU            0x20192C

; Message Object 74 Acceptance Mask Register High
CAN_MOAMR74H  EQU            0x20194E

; Message Object 74 Acceptance Mask Register Low
CAN_MOAMR74L  EQU            0x20194C

; Message Object 75 Acceptance Mask Register High
CAN_MOAMR75H  EQU            0x20196E

; Message Object 75 Acceptance Mask Register Low
CAN_MOAMR75L  EQU            0x20196C

; Message Object 76 Acceptance Mask Register High
CAN_MOAMR76H  EQU            0x20198E

; Message Object 76 Acceptance Mask Register Low
CAN_MOAMR76L  EQU            0x20198C

; Message Object 77 Acceptance Mask Register High
CAN_MOAMR77H  EQU            0x2019AE

; Message Object 77 Acceptance Mask Register Low
CAN_MOAMR77L  EQU            0x2019AC

; Message Object 78 Acceptance Mask Register High
CAN_MOAMR78H  EQU            0x2019CE

; Message Object 78 Acceptance Mask Register Low
CAN_MOAMR78L  EQU            0x2019CC

; Message Object 79 Acceptance Mask Register High
CAN_MOAMR79H  EQU            0x2019EE

; Message Object 79 Acceptance Mask Register Low
CAN_MOAMR79L  EQU            0x2019EC

; Message Object 7 Acceptance Mask Register High
CAN_MOAMR7H  EQU             0x2010EE

; Message Object 7 Acceptance Mask Register Low
CAN_MOAMR7L  EQU             0x2010EC

; Message Object 80 Acceptance Mask Register High
CAN_MOAMR80H  EQU            0x201A0E

; Message Object 80 Acceptance Mask Register Low
CAN_MOAMR80L  EQU            0x201A0C

; Message Object 81 Acceptance Mask Register High
CAN_MOAMR81H  EQU            0x201A2E

; Message Object 81 Acceptance Mask Register Low
CAN_MOAMR81L  EQU            0x201A2C

; Message Object 82 Acceptance Mask Register High
CAN_MOAMR82H  EQU            0x201A4E

; Message Object 82 Acceptance Mask Register Low
CAN_MOAMR82L  EQU            0x201A4C

; Message Object 83 Acceptance Mask Register High
CAN_MOAMR83H  EQU            0x201A6E

; Message Object 83 Acceptance Mask Register Low
CAN_MOAMR83L  EQU            0x201A6C

; Message Object 84 Acceptance Mask Register High
CAN_MOAMR84H  EQU            0x201A8E

; Message Object 84 Acceptance Mask Register Low
CAN_MOAMR84L  EQU            0x201A8C

; Message Object 85 Acceptance Mask Register High
CAN_MOAMR85H  EQU            0x201AAE

; Message Object 85 Acceptance Mask Register Low
CAN_MOAMR85L  EQU            0x201AAC

; Message Object 86 Acceptance Mask Register High
CAN_MOAMR86H  EQU            0x201ACE

; Message Object 86 Acceptance Mask Register Low
CAN_MOAMR86L  EQU            0x201ACC

; Message Object 87 Acceptance Mask Register High
CAN_MOAMR87H  EQU            0x201AEE

; Message Object 87 Acceptance Mask Register Low
CAN_MOAMR87L  EQU            0x201AEC

; Message Object 88 Acceptance Mask Register High
CAN_MOAMR88H  EQU            0x201B0E

; Message Object 88 Acceptance Mask Register Low
CAN_MOAMR88L  EQU            0x201B0C

; Message Object 89 Acceptance Mask Register High
CAN_MOAMR89H  EQU            0x201B2E

; Message Object 89 Acceptance Mask Register Low
CAN_MOAMR89L  EQU            0x201B2C

; Message Object 8 Acceptance Mask Register High
CAN_MOAMR8H  EQU             0x20110E

; Message Object 8 Acceptance Mask Register Low
CAN_MOAMR8L  EQU             0x20110C

; Message Object 90 Acceptance Mask Register High
CAN_MOAMR90H  EQU            0x201B4E

; Message Object 90 Acceptance Mask Register Low
CAN_MOAMR90L  EQU            0x201B4C

; Message Object 91 Acceptance Mask Register High
CAN_MOAMR91H  EQU            0x201B6E

; Message Object 91 Acceptance Mask Register Low
CAN_MOAMR91L  EQU            0x201B6C

; Message Object 92 Acceptance Mask Register High
CAN_MOAMR92H  EQU            0x201B8E

; Message Object 92 Acceptance Mask Register Low
CAN_MOAMR92L  EQU            0x201B8C

; Message Object 93 Acceptance Mask Register High
CAN_MOAMR93H  EQU            0x201BAE

; Message Object 93 Acceptance Mask Register Low
CAN_MOAMR93L  EQU            0x201BAC

; Message Object 94 Acceptance Mask Register High
CAN_MOAMR94H  EQU            0x201BCE

; Message Object 94 Acceptance Mask Register Low
CAN_MOAMR94L  EQU            0x201BCC

; Message Object 95 Acceptance Mask Register High
CAN_MOAMR95H  EQU            0x201BEE

; Message Object 95 Acceptance Mask Register Low
CAN_MOAMR95L  EQU            0x201BEC

; Message Object 96 Acceptance Mask Register High
CAN_MOAMR96H  EQU            0x201C0E

; Message Object 96 Acceptance Mask Register Low
CAN_MOAMR96L  EQU            0x201C0C

; Message Object 97 Acceptance Mask Register High
CAN_MOAMR97H  EQU            0x201C2E

; Message Object 97 Acceptance Mask Register Low
CAN_MOAMR97L  EQU            0x201C2C

; Message Object 98 Acceptance Mask Register High
CAN_MOAMR98H  EQU            0x201C4E

; Message Object 98 Acceptance Mask Register Low
CAN_MOAMR98L  EQU            0x201C4C

; Message Object 99 Acceptance Mask Register High
CAN_MOAMR99H  EQU            0x201C6E

; Message Object 99 Acceptance Mask Register Low
CAN_MOAMR99L  EQU            0x201C6C

; Message Object 9 Acceptance Mask Register High
CAN_MOAMR9H  EQU             0x20112E

; Message Object 9 Acceptance Mask Register Low
CAN_MOAMR9L  EQU             0x20112C

; Message Object 0 Arbitration Register High
CAN_MOAR0H  EQU              0x20101A

; Message Object 0 Arbitration Register Low
CAN_MOAR0L  EQU              0x201018

; Message Object 100 Arbitration Register High
CAN_MOAR100H  EQU            0x201C9A

; Message Object 100 Arbitration Register Low
CAN_MOAR100L  EQU            0x201C98

; Message Object 101 Arbitration Register High
CAN_MOAR101H  EQU            0x201CBA

; Message Object 101 Arbitration Register Low
CAN_MOAR101L  EQU            0x201CB8

; Message Object 102 Arbitration Register High
CAN_MOAR102H  EQU            0x201CDA

; Message Object 102 Arbitration Register Low
CAN_MOAR102L  EQU            0x201CD8

; Message Object 103 Arbitration Register High
CAN_MOAR103H  EQU            0x201CFA

; Message Object 103 Arbitration Register Low
CAN_MOAR103L  EQU            0x201CF8

; Message Object 104 Arbitration Register High
CAN_MOAR104H  EQU            0x201D1A

; Message Object 104 Arbitration Register Low
CAN_MOAR104L  EQU            0x201D18

; Message Object 105 Arbitration Register High
CAN_MOAR105H  EQU            0x201D3A

; Message Object 105 Arbitration Register Low
CAN_MOAR105L  EQU            0x201D38

; Message Object 106 Arbitration Register High
CAN_MOAR106H  EQU            0x201D5A

; Message Object 106 Arbitration Register Low
CAN_MOAR106L  EQU            0x201D58

; Message Object 107 Arbitration Register High
CAN_MOAR107H  EQU            0x201D7A

; Message Object 107 Arbitration Register Low
CAN_MOAR107L  EQU            0x201D78

; Message Object 108 Arbitration Register High
CAN_MOAR108H  EQU            0x201D9A

; Message Object 108 Arbitration Register Low
CAN_MOAR108L  EQU            0x201D98

; Message Object 109 Arbitration Register High
CAN_MOAR109H  EQU            0x201DBA

; Message Object 109 Arbitration Register Low
CAN_MOAR109L  EQU            0x201DB8

; Message Object 10 Arbitration Register High
CAN_MOAR10H  EQU             0x20115A

; Message Object 10 Arbitration Register Low
CAN_MOAR10L  EQU             0x201158

; Message Object 110 Arbitration Register High
CAN_MOAR110H  EQU            0x201DDA

; Message Object 110 Arbitration Register Low
CAN_MOAR110L  EQU            0x201DD8

; Message Object 111 Arbitration Register High
CAN_MOAR111H  EQU            0x201DFA

; Message Object 111 Arbitration Register Low
CAN_MOAR111L  EQU            0x201DF8

; Message Object 112 Arbitration Register High
CAN_MOAR112H  EQU            0x201E1A

; Message Object 112 Arbitration Register Low
CAN_MOAR112L  EQU            0x201E18

; Message Object 113 Arbitration Register High
CAN_MOAR113H  EQU            0x201E3A

; Message Object 113 Arbitration Register Low
CAN_MOAR113L  EQU            0x201E38

; Message Object 114 Arbitration Register High
CAN_MOAR114H  EQU            0x201E5A

; Message Object 114 Arbitration Register Low
CAN_MOAR114L  EQU            0x201E58

; Message Object 115 Arbitration Register High
CAN_MOAR115H  EQU            0x201E7A

; Message Object 115 Arbitration Register Low
CAN_MOAR115L  EQU            0x201E78

; Message Object 116 Arbitration Register High
CAN_MOAR116H  EQU            0x201E9A

; Message Object 116 Arbitration Register Low
CAN_MOAR116L  EQU            0x201E98

; Message Object 117 Arbitration Register High
CAN_MOAR117H  EQU            0x201EBA

; Message Object 117 Arbitration Register Low
CAN_MOAR117L  EQU            0x201EB8

; Message Object 118 Arbitration Register High
CAN_MOAR118H  EQU            0x201EDA

; Message Object 118 Arbitration Register Low
CAN_MOAR118L  EQU            0x201ED8

; Message Object 119 Arbitration Register High
CAN_MOAR119H  EQU            0x201EFA

; Message Object 119 Arbitration Register Low
CAN_MOAR119L  EQU            0x201EF8

; Message Object 11 Arbitration Register High
CAN_MOAR11H  EQU             0x20117A

; Message Object 11 Arbitration Register Low
CAN_MOAR11L  EQU             0x201178

; Message Object 120 Arbitration Register High
CAN_MOAR120H  EQU            0x201F1A

; Message Object 120 Arbitration Register Low
CAN_MOAR120L  EQU            0x201F18

; Message Object 121 Arbitration Register High
CAN_MOAR121H  EQU            0x201F3A

; Message Object 121 Arbitration Register Low
CAN_MOAR121L  EQU            0x201F38

; Message Object 122 Arbitration Register High
CAN_MOAR122H  EQU            0x201F5A

; Message Object 122 Arbitration Register Low
CAN_MOAR122L  EQU            0x201F58

; Message Object 123 Arbitration Register High
CAN_MOAR123H  EQU            0x201F7A

; Message Object 123 Arbitration Register Low
CAN_MOAR123L  EQU            0x201F78

; Message Object 124 Arbitration Register High
CAN_MOAR124H  EQU            0x201F9A

; Message Object 124 Arbitration Register Low
CAN_MOAR124L  EQU            0x201F98

; Message Object 125 Arbitration Register High
CAN_MOAR125H  EQU            0x201FBA

; Message Object 125 Arbitration Register Low
CAN_MOAR125L  EQU            0x201FB8

; Message Object 126 Arbitration Register High
CAN_MOAR126H  EQU            0x201FDA

; Message Object 126 Arbitration Register Low
CAN_MOAR126L  EQU            0x201FD8

; Message Object 127 Arbitration Register High
CAN_MOAR127H  EQU            0x201FFA

; Message Object 127 Arbitration Register Low
CAN_MOAR127L  EQU            0x201FF8

; Message Object 12 Arbitration Register High
CAN_MOAR12H  EQU             0x20119A

; Message Object 12 Arbitration Register Low
CAN_MOAR12L  EQU             0x201198

; Message Object 13 Arbitration Register High
CAN_MOAR13H  EQU             0x2011BA

; Message Object 13 Arbitration Register Low
CAN_MOAR13L  EQU             0x2011B8

; Message Object 14 Arbitration Register High
CAN_MOAR14H  EQU             0x2011DA

; Message Object 14 Arbitration Register Low
CAN_MOAR14L  EQU             0x2011D8

; Message Object 15 Arbitration Register High
CAN_MOAR15H  EQU             0x2011FA

; Message Object 15 Arbitration Register Low
CAN_MOAR15L  EQU             0x2011F8

; Message Object 16 Arbitration Register High
CAN_MOAR16H  EQU             0x20121A

; Message Object 16 Arbitration Register Low
CAN_MOAR16L  EQU             0x201218

; Message Object 17 Arbitration Register High
CAN_MOAR17H  EQU             0x20123A

; Message Object 17 Arbitration Register Low
CAN_MOAR17L  EQU             0x201238

; Message Object 18 Arbitration Register High
CAN_MOAR18H  EQU             0x20125A

; Message Object 18 Arbitration Register Low
CAN_MOAR18L  EQU             0x201258

; Message Object 19 Arbitration Register High
CAN_MOAR19H  EQU             0x20127A

; Message Object 19 Arbitration Register Low
CAN_MOAR19L  EQU             0x201278

; Message Object 1 Arbitration Register High
CAN_MOAR1H  EQU              0x20103A

; Message Object 1 Arbitration Register Low
CAN_MOAR1L  EQU              0x201038

; Message Object 20 Arbitration Register High
CAN_MOAR20H  EQU             0x20129A

; Message Object 20 Arbitration Register Low
CAN_MOAR20L  EQU             0x201298

; Message Object 21 Arbitration Register High
CAN_MOAR21H  EQU             0x2012BA

; Message Object 21 Arbitration Register Low
CAN_MOAR21L  EQU             0x2012B8

; Message Object 22 Arbitration Register High
CAN_MOAR22H  EQU             0x2012DA

; Message Object 22 Arbitration Register Low
CAN_MOAR22L  EQU             0x2012D8

; Message Object 23 Arbitration Register High
CAN_MOAR23H  EQU             0x2012FA

; Message Object 23 Arbitration Register Low
CAN_MOAR23L  EQU             0x2012F8

; Message Object 24 Arbitration Register High
CAN_MOAR24H  EQU             0x20131A

; Message Object 24 Arbitration Register Low
CAN_MOAR24L  EQU             0x201318

; Message Object 25 Arbitration Register High
CAN_MOAR25H  EQU             0x20133A

; Message Object 25 Arbitration Register Low
CAN_MOAR25L  EQU             0x201338

; Message Object 26 Arbitration Register High
CAN_MOAR26H  EQU             0x20135A

; Message Object 26 Arbitration Register Low
CAN_MOAR26L  EQU             0x201358

; Message Object 27 Arbitration Register High
CAN_MOAR27H  EQU             0x20137A

; Message Object 27 Arbitration Register Low
CAN_MOAR27L  EQU             0x201378

; Message Object 28 Arbitration Register High
CAN_MOAR28H  EQU             0x20139A

; Message Object 28 Arbitration Register Low
CAN_MOAR28L  EQU             0x201398

; Message Object 29 Arbitration Register High
CAN_MOAR29H  EQU             0x2013BA

; Message Object 29 Arbitration Register Low
CAN_MOAR29L  EQU             0x2013B8

; Message Object 2 Arbitration Register High
CAN_MOAR2H  EQU              0x20105A

; Message Object 2 Arbitration Register Low
CAN_MOAR2L  EQU              0x201058

; Message Object 30 Arbitration Register High
CAN_MOAR30H  EQU             0x2013DA

; Message Object 30 Arbitration Register Low
CAN_MOAR30L  EQU             0x2013D8

; Message Object 31 Arbitration Register High
CAN_MOAR31H  EQU             0x2013FA

; Message Object 31 Arbitration Register Low
CAN_MOAR31L  EQU             0x2013F8

; Message Object 32 Arbitration Register High
CAN_MOAR32H  EQU             0x20141A

; Message Object 32 Arbitration Register Low
CAN_MOAR32L  EQU             0x201418

; Message Object 33 Arbitration Register High
CAN_MOAR33H  EQU             0x20143A

; Message Object 33 Arbitration Register Low
CAN_MOAR33L  EQU             0x201438

; Message Object 34 Arbitration Register High
CAN_MOAR34H  EQU             0x20145A

; Message Object 34 Arbitration Register Low
CAN_MOAR34L  EQU             0x201458

; Message Object 35 Arbitration Register High
CAN_MOAR35H  EQU             0x20147A

; Message Object 35 Arbitration Register Low
CAN_MOAR35L  EQU             0x201478

; Message Object 36 Arbitration Register High
CAN_MOAR36H  EQU             0x20149A

; Message Object 36 Arbitration Register Low
CAN_MOAR36L  EQU             0x201498

; Message Object 37 Arbitration Register High
CAN_MOAR37H  EQU             0x2014BA

; Message Object 37 Arbitration Register Low
CAN_MOAR37L  EQU             0x2014B8

; Message Object 38 Arbitration Register High
CAN_MOAR38H  EQU             0x2014DA

; Message Object 38 Arbitration Register Low
CAN_MOAR38L  EQU             0x2014D8

; Message Object 39 Arbitration Register High
CAN_MOAR39H  EQU             0x2014FA

; Message Object 39 Arbitration Register Low
CAN_MOAR39L  EQU             0x2014F8

; Message Object 3 Arbitration Register High
CAN_MOAR3H  EQU              0x20107A

; Message Object 3 Arbitration Register Low
CAN_MOAR3L  EQU              0x201078

; Message Object 40 Arbitration Register High
CAN_MOAR40H  EQU             0x20151A

; Message Object 40 Arbitration Register Low
CAN_MOAR40L  EQU             0x201518

; Message Object 41 Arbitration Register High
CAN_MOAR41H  EQU             0x20153A

; Message Object 41 Arbitration Register Low
CAN_MOAR41L  EQU             0x201538

; Message Object 42 Arbitration Register High
CAN_MOAR42H  EQU             0x20155A

; Message Object 42 Arbitration Register Low
CAN_MOAR42L  EQU             0x201558

; Message Object 43 Arbitration Register High
CAN_MOAR43H  EQU             0x20157A

; Message Object 43 Arbitration Register Low
CAN_MOAR43L  EQU             0x201578

; Message Object 44 Arbitration Register High
CAN_MOAR44H  EQU             0x20159A

; Message Object 44 Arbitration Register Low
CAN_MOAR44L  EQU             0x201598

; Message Object 45 Arbitration Register High
CAN_MOAR45H  EQU             0x2015BA

; Message Object 45 Arbitration Register Low
CAN_MOAR45L  EQU             0x2015B8

; Message Object 46 Arbitration Register High
CAN_MOAR46H  EQU             0x2015DA

; Message Object 46 Arbitration Register Low
CAN_MOAR46L  EQU             0x2015D8

; Message Object 47 Arbitration Register High
CAN_MOAR47H  EQU             0x2015FA

; Message Object 47 Arbitration Register Low
CAN_MOAR47L  EQU             0x2015F8

; Message Object 48 Arbitration Register High
CAN_MOAR48H  EQU             0x20161A

; Message Object 48 Arbitration Register Low
CAN_MOAR48L  EQU             0x201618

; Message Object 49 Arbitration Register High
CAN_MOAR49H  EQU             0x20163A

; Message Object 49 Arbitration Register Low
CAN_MOAR49L  EQU             0x201638

; Message Object 4 Arbitration Register High
CAN_MOAR4H  EQU              0x20109A

; Message Object 4 Arbitration Register Low
CAN_MOAR4L  EQU              0x201098

; Message Object 50 Arbitration Register High
CAN_MOAR50H  EQU             0x20165A

; Message Object 50 Arbitration Register Low
CAN_MOAR50L  EQU             0x201658

; Message Object 51 Arbitration Register High
CAN_MOAR51H  EQU             0x20167A

; Message Object 51 Arbitration Register Low
CAN_MOAR51L  EQU             0x201678

; Message Object 52 Arbitration Register High
CAN_MOAR52H  EQU             0x20169A

; Message Object 52 Arbitration Register Low
CAN_MOAR52L  EQU             0x201698

; Message Object 53 Arbitration Register High
CAN_MOAR53H  EQU             0x2016BA

; Message Object 53 Arbitration Register Low
CAN_MOAR53L  EQU             0x2016B8

; Message Object 54 Arbitration Register High
CAN_MOAR54H  EQU             0x2016DA

; Message Object 54 Arbitration Register Low
CAN_MOAR54L  EQU             0x2016D8

; Message Object 55 Arbitration Register High
CAN_MOAR55H  EQU             0x2016FA

; Message Object 55 Arbitration Register Low
CAN_MOAR55L  EQU             0x2016F8

; Message Object 56 Arbitration Register High
CAN_MOAR56H  EQU             0x20171A

; Message Object 56 Arbitration Register Low
CAN_MOAR56L  EQU             0x201718

; Message Object 57 Arbitration Register High
CAN_MOAR57H  EQU             0x20173A

; Message Object 57 Arbitration Register Low
CAN_MOAR57L  EQU             0x201738

; Message Object 58 Arbitration Register High
CAN_MOAR58H  EQU             0x20175A

; Message Object 58 Arbitration Register Low
CAN_MOAR58L  EQU             0x201758

; Message Object 59 Arbitration Register High
CAN_MOAR59H  EQU             0x20177A

; Message Object 59 Arbitration Register Low
CAN_MOAR59L  EQU             0x201778

; Message Object 5 Arbitration Register High
CAN_MOAR5H  EQU              0x2010BA

; Message Object 5 Arbitration Register Low
CAN_MOAR5L  EQU              0x2010B8

; Message Object 60 Arbitration Register High
CAN_MOAR60H  EQU             0x20179A

; Message Object 60 Arbitration Register Low
CAN_MOAR60L  EQU             0x201798

; Message Object 61 Arbitration Register High
CAN_MOAR61H  EQU             0x2017BA

; Message Object 61 Arbitration Register Low
CAN_MOAR61L  EQU             0x2017B8

; Message Object 62 Arbitration Register High
CAN_MOAR62H  EQU             0x2017DA

; Message Object 62 Arbitration Register Low
CAN_MOAR62L  EQU             0x2017D8

; Message Object 63 Arbitration Register High
CAN_MOAR63H  EQU             0x2017FA

; Message Object 63 Arbitration Register Low
CAN_MOAR63L  EQU             0x2017F8

; Message Object 64 Arbitration Register High
CAN_MOAR64H  EQU             0x20181A

; Message Object 64 Arbitration Register Low
CAN_MOAR64L  EQU             0x201818

; Message Object 65 Arbitration Register High
CAN_MOAR65H  EQU             0x20183A

; Message Object 65 Arbitration Register Low
CAN_MOAR65L  EQU             0x201838

; Message Object 66 Arbitration Register High
CAN_MOAR66H  EQU             0x20185A

; Message Object 66 Arbitration Register Low
CAN_MOAR66L  EQU             0x201858

; Message Object 67 Arbitration Register High
CAN_MOAR67H  EQU             0x20187A

; Message Object 67 Arbitration Register Low
CAN_MOAR67L  EQU             0x201878

; Message Object 68 Arbitration Register High
CAN_MOAR68H  EQU             0x20189A

; Message Object 68 Arbitration Register Low
CAN_MOAR68L  EQU             0x201898

; Message Object 69 Arbitration Register High
CAN_MOAR69H  EQU             0x2018BA

; Message Object 69 Arbitration Register Low
CAN_MOAR69L  EQU             0x2018B8

; Message Object 6 Arbitration Register High
CAN_MOAR6H  EQU              0x2010DA

; Message Object 6 Arbitration Register Low
CAN_MOAR6L  EQU              0x2010D8

; Message Object 70 Arbitration Register High
CAN_MOAR70H  EQU             0x2018DA

; Message Object 70 Arbitration Register Low
CAN_MOAR70L  EQU             0x2018D8

; Message Object 71 Arbitration Register High
CAN_MOAR71H  EQU             0x2018FA

; Message Object 71 Arbitration Register Low
CAN_MOAR71L  EQU             0x2018F8

; Message Object 72 Arbitration Register High
CAN_MOAR72H  EQU             0x20191A

; Message Object 72 Arbitration Register Low
CAN_MOAR72L  EQU             0x201918

; Message Object 73 Arbitration Register High
CAN_MOAR73H  EQU             0x20193A

; Message Object 73 Arbitration Register Low
CAN_MOAR73L  EQU             0x201938

; Message Object 74 Arbitration Register High
CAN_MOAR74H  EQU             0x20195A

; Message Object 74 Arbitration Register Low
CAN_MOAR74L  EQU             0x201958

; Message Object 75 Arbitration Register High
CAN_MOAR75H  EQU             0x20197A

; Message Object 75 Arbitration Register Low
CAN_MOAR75L  EQU             0x201978

; Message Object 76 Arbitration Register High
CAN_MOAR76H  EQU             0x20199A

; Message Object 76 Arbitration Register Low
CAN_MOAR76L  EQU             0x201998

; Message Object 77 Arbitration Register High
CAN_MOAR77H  EQU             0x2019BA

; Message Object 77 Arbitration Register Low
CAN_MOAR77L  EQU             0x2019B8

; Message Object 78 Arbitration Register High
CAN_MOAR78H  EQU             0x2019DA

; Message Object 78 Arbitration Register Low
CAN_MOAR78L  EQU             0x2019D8

; Message Object 79 Arbitration Register High
CAN_MOAR79H  EQU             0x2019FA

; Message Object 79 Arbitration Register Low
CAN_MOAR79L  EQU             0x2019F8

; Message Object 7 Arbitration Register High
CAN_MOAR7H  EQU              0x2010FA

; Message Object 7 Arbitration Register Low
CAN_MOAR7L  EQU              0x2010F8

; Message Object 80 Arbitration Register High
CAN_MOAR80H  EQU             0x201A1A

; Message Object 80 Arbitration Register Low
CAN_MOAR80L  EQU             0x201A18

; Message Object 81 Arbitration Register High
CAN_MOAR81H  EQU             0x201A3A

; Message Object 81 Arbitration Register Low
CAN_MOAR81L  EQU             0x201A38

; Message Object 82 Arbitration Register High
CAN_MOAR82H  EQU             0x201A5A

; Message Object 82 Arbitration Register Low
CAN_MOAR82L  EQU             0x201A58

; Message Object 83 Arbitration Register High
CAN_MOAR83H  EQU             0x201A7A

; Message Object 83 Arbitration Register Low
CAN_MOAR83L  EQU             0x201A78

; Message Object 84 Arbitration Register High
CAN_MOAR84H  EQU             0x201A9A

; Message Object 84 Arbitration Register Low
CAN_MOAR84L  EQU             0x201A98

; Message Object 85 Arbitration Register High
CAN_MOAR85H  EQU             0x201ABA

; Message Object 85 Arbitration Register Low
CAN_MOAR85L  EQU             0x201AB8

; Message Object 86 Arbitration Register High
CAN_MOAR86H  EQU             0x201ADA

; Message Object 86 Arbitration Register Low
CAN_MOAR86L  EQU             0x201AD8

; Message Object 87 Arbitration Register High
CAN_MOAR87H  EQU             0x201AFA

; Message Object 87 Arbitration Register Low
CAN_MOAR87L  EQU             0x201AF8

; Message Object 88 Arbitration Register High
CAN_MOAR88H  EQU             0x201B1A

; Message Object 88 Arbitration Register Low
CAN_MOAR88L  EQU             0x201B18

; Message Object 89 Arbitration Register High
CAN_MOAR89H  EQU             0x201B3A

; Message Object 89 Arbitration Register Low
CAN_MOAR89L  EQU             0x201B38

; Message Object 8 Arbitration Register High
CAN_MOAR8H  EQU              0x20111A

; Message Object 8 Arbitration Register Low
CAN_MOAR8L  EQU              0x201118

; Message Object 90 Arbitration Register High
CAN_MOAR90H  EQU             0x201B5A

; Message Object 90 Arbitration Register Low
CAN_MOAR90L  EQU             0x201B58

; Message Object 91 Arbitration Register High
CAN_MOAR91H  EQU             0x201B7A

; Message Object 91 Arbitration Register Low
CAN_MOAR91L  EQU             0x201B78

; Message Object 92 Arbitration Register High
CAN_MOAR92H  EQU             0x201B9A

; Message Object 92 Arbitration Register Low
CAN_MOAR92L  EQU             0x201B98

; Message Object 93 Arbitration Register High
CAN_MOAR93H  EQU             0x201BBA

; Message Object 93 Arbitration Register Low
CAN_MOAR93L  EQU             0x201BB8

; Message Object 94 Arbitration Register High
CAN_MOAR94H  EQU             0x201BDA

; Message Object 94 Arbitration Register Low
CAN_MOAR94L  EQU             0x201BD8

; Message Object 95 Arbitration Register High
CAN_MOAR95H  EQU             0x201BFA

; Message Object 95 Arbitration Register Low
CAN_MOAR95L  EQU             0x201BF8

; Message Object 96 Arbitration Register High
CAN_MOAR96H  EQU             0x201C1A

; Message Object 96 Arbitration Register Low
CAN_MOAR96L  EQU             0x201C18

; Message Object 97 Arbitration Register High
CAN_MOAR97H  EQU             0x201C3A

; Message Object 97 Arbitration Register Low
CAN_MOAR97L  EQU             0x201C38

; Message Object 98 Arbitration Register High
CAN_MOAR98H  EQU             0x201C5A

; Message Object 98 Arbitration Register Low
CAN_MOAR98L  EQU             0x201C58

; Message Object 99 Arbitration Register High
CAN_MOAR99H  EQU             0x201C7A

; Message Object 99 Arbitration Register Low
CAN_MOAR99L  EQU             0x201C78

; Message Object 9 Arbitration Register High
CAN_MOAR9H  EQU              0x20113A

; Message Object 9 Arbitration Register Low
CAN_MOAR9L  EQU              0x201138

; Message Object 0 Control Register High
CAN_MOCTR0H  EQU             0x20101E

; Message Object 0 Control Register Low
CAN_MOCTR0L  EQU             0x20101C

; Message Object 100 Control Register High
CAN_MOCTR100H  EQU           0x201C9E

; Message Object 100 Control Register Low
CAN_MOCTR100L  EQU           0x201C9C

; Message Object 101 Control Register High
CAN_MOCTR101H  EQU           0x201CBE

; Message Object 101 Control Register Low
CAN_MOCTR101L  EQU           0x201CBC

; Message Object 102 Control Register High
CAN_MOCTR102H  EQU           0x201CDE

; Message Object 102 Control Register Low
CAN_MOCTR102L  EQU           0x201CDC

; Message Object 103 Control Register High
CAN_MOCTR103H  EQU           0x201CFE

; Message Object 103 Control Register Low
CAN_MOCTR103L  EQU           0x201CFC

; Message Object 104 Control Register High
CAN_MOCTR104H  EQU           0x201D1E

; Message Object 104 Control Register Low
CAN_MOCTR104L  EQU           0x201D1C

; Message Object 105 Control Register High
CAN_MOCTR105H  EQU           0x201D3E

; Message Object 105 Control Register Low
CAN_MOCTR105L  EQU           0x201D3C

; Message Object 106 Control Register High
CAN_MOCTR106H  EQU           0x201D5E

; Message Object 106 Control Register Low
CAN_MOCTR106L  EQU           0x201D5C

; Message Object 107 Control Register High
CAN_MOCTR107H  EQU           0x201D7E

; Message Object 107 Control Register Low
CAN_MOCTR107L  EQU           0x201D7C

; Message Object 108 Control Register High
CAN_MOCTR108H  EQU           0x201D9E

; Message Object 108 Control Register Low
CAN_MOCTR108L  EQU           0x201D9C

; Message Object 109 Control Register High
CAN_MOCTR109H  EQU           0x201DBE

; Message Object 109 Control Register Low
CAN_MOCTR109L  EQU           0x201DBC

; Message Object 10 Control Register High
CAN_MOCTR10H  EQU            0x20115E

; Message Object 10 Control Register Low
CAN_MOCTR10L  EQU            0x20115C

; Message Object 110 Control Register High
CAN_MOCTR110H  EQU           0x201DDE

; Message Object 110 Control Register Low
CAN_MOCTR110L  EQU           0x201DDC

; Message Object 111 Control Register High
CAN_MOCTR111H  EQU           0x201DFE

; Message Object 111 Control Register Low
CAN_MOCTR111L  EQU           0x201DFC

; Message Object 112 Control Register High
CAN_MOCTR112H  EQU           0x201E1E

; Message Object 112 Control Register Low
CAN_MOCTR112L  EQU           0x201E1C

; Message Object 113 Control Register High
CAN_MOCTR113H  EQU           0x201E3E

; Message Object 113 Control Register Low
CAN_MOCTR113L  EQU           0x201E3C

; Message Object 114 Control Register High
CAN_MOCTR114H  EQU           0x201E5E

; Message Object 114 Control Register Low
CAN_MOCTR114L  EQU           0x201E5C

; Message Object 115 Control Register High
CAN_MOCTR115H  EQU           0x201E7E

; Message Object 115 Control Register Low
CAN_MOCTR115L  EQU           0x201E7C

; Message Object 116 Control Register High
CAN_MOCTR116H  EQU           0x201E9E

; Message Object 116 Control Register Low
CAN_MOCTR116L  EQU           0x201E9C

; Message Object 117 Control Register High
CAN_MOCTR117H  EQU           0x201EBE

; Message Object 117 Control Register Low
CAN_MOCTR117L  EQU           0x201EBC

; Message Object 118 Control Register High
CAN_MOCTR118H  EQU           0x201EDE

; Message Object 118 Control Register Low
CAN_MOCTR118L  EQU           0x201EDC

; Message Object 119 Control Register High
CAN_MOCTR119H  EQU           0x201EFE

; Message Object 119 Control Register Low
CAN_MOCTR119L  EQU           0x201EFC

; Message Object 11 Control Register High
CAN_MOCTR11H  EQU            0x20117E

; Message Object 11 Control Register Low
CAN_MOCTR11L  EQU            0x20117C

; Message Object 120 Control Register High
CAN_MOCTR120H  EQU           0x201F1E

; Message Object 120 Control Register Low
CAN_MOCTR120L  EQU           0x201F1C

; Message Object 121 Control Register High
CAN_MOCTR121H  EQU           0x201F3E

; Message Object 121 Control Register Low
CAN_MOCTR121L  EQU           0x201F3C

; Message Object 122 Control Register High
CAN_MOCTR122H  EQU           0x201F5E

; Message Object 122 Control Register Low
CAN_MOCTR122L  EQU           0x201F5C

; Message Object 123 Control Register High
CAN_MOCTR123H  EQU           0x201F7E

; Message Object 123 Control Register Low
CAN_MOCTR123L  EQU           0x201F7C

; Message Object 124 Control Register High
CAN_MOCTR124H  EQU           0x201F9E

; Message Object 124 Control Register Low
CAN_MOCTR124L  EQU           0x201F9C

; Message Object 125 Control Register High
CAN_MOCTR125H  EQU           0x201FBE

; Message Object 125 Control Register Low
CAN_MOCTR125L  EQU           0x201FBC

; Message Object 126 Control Register High
CAN_MOCTR126H  EQU           0x201FDE

; Message Object 126 Control Register Low
CAN_MOCTR126L  EQU           0x201FDC

; Message Object 127 Control Register High
CAN_MOCTR127H  EQU           0x201FFE

; Message Object 127 Control Register Low
CAN_MOCTR127L  EQU           0x201FFC

; Message Object 12 Control Register High
CAN_MOCTR12H  EQU            0x20119E

; Message Object 12 Control Register Low
CAN_MOCTR12L  EQU            0x20119C

; Message Object 13 Control Register High
CAN_MOCTR13H  EQU            0x2011BE

; Message Object 13 Control Register Low
CAN_MOCTR13L  EQU            0x2011BC

; Message Object 14 Control Register High
CAN_MOCTR14H  EQU            0x2011DE

; Message Object 14 Control Register Low
CAN_MOCTR14L  EQU            0x2011DC

; Message Object 15 Control Register High
CAN_MOCTR15H  EQU            0x2011FE

; Message Object 15 Control Register Low
CAN_MOCTR15L  EQU            0x2011FC

; Message Object 16 Control Register High
CAN_MOCTR16H  EQU            0x20121E

; Message Object 16 Control Register Low
CAN_MOCTR16L  EQU            0x20121C

; Message Object 17 Control Register High
CAN_MOCTR17H  EQU            0x20123E

; Message Object 17 Control Register Low
CAN_MOCTR17L  EQU            0x20123C

; Message Object 18 Control Register High
CAN_MOCTR18H  EQU            0x20125E

; Message Object 18 Control Register Low
CAN_MOCTR18L  EQU            0x20125C

; Message Object 19 Control Register High
CAN_MOCTR19H  EQU            0x20127E

; Message Object 19 Control Register Low
CAN_MOCTR19L  EQU            0x20127C

; Message Object 1 Control Register High
CAN_MOCTR1H  EQU             0x20103E

; Message Object 1 Control Register Low
CAN_MOCTR1L  EQU             0x20103C

; Message Object 20 Control Register High
CAN_MOCTR20H  EQU            0x20129E

; Message Object 20 Control Register Low
CAN_MOCTR20L  EQU            0x20129C

; Message Object 21 Control Register High
CAN_MOCTR21H  EQU            0x2012BE

; Message Object 21 Control Register Low
CAN_MOCTR21L  EQU            0x2012BC

; Message Object 22 Control Register High
CAN_MOCTR22H  EQU            0x2012DE

; Message Object 22 Control Register Low
CAN_MOCTR22L  EQU            0x2012DC

; Message Object 23 Control Register High
CAN_MOCTR23H  EQU            0x2012FE

; Message Object 23 Control Register Low
CAN_MOCTR23L  EQU            0x2012FC

; Message Object 24 Control Register High
CAN_MOCTR24H  EQU            0x20131E

; Message Object 24 Control Register Low
CAN_MOCTR24L  EQU            0x20131C

; Message Object 25 Control Register High
CAN_MOCTR25H  EQU            0x20133E

; Message Object 25 Control Register Low
CAN_MOCTR25L  EQU            0x20133C

; Message Object 26 Control Register High
CAN_MOCTR26H  EQU            0x20135E

; Message Object 26 Control Register Low
CAN_MOCTR26L  EQU            0x20135C

; Message Object 27 Control Register High
CAN_MOCTR27H  EQU            0x20137E

; Message Object 27 Control Register Low
CAN_MOCTR27L  EQU            0x20137C

; Message Object 28 Control Register High
CAN_MOCTR28H  EQU            0x20139E

; Message Object 28 Control Register Low
CAN_MOCTR28L  EQU            0x20139C

; Message Object 29 Control Register High
CAN_MOCTR29H  EQU            0x2013BE

; Message Object 29 Control Register Low
CAN_MOCTR29L  EQU            0x2013BC

; Message Object 2 Control Register High
CAN_MOCTR2H  EQU             0x20105E

; Message Object 2 Control Register Low
CAN_MOCTR2L  EQU             0x20105C

; Message Object 30 Control Register High
CAN_MOCTR30H  EQU            0x2013DE

; Message Object 30 Control Register Low
CAN_MOCTR30L  EQU            0x2013DC

; Message Object 31 Control Register High
CAN_MOCTR31H  EQU            0x2013FE

; Message Object 31 Control Register Low
CAN_MOCTR31L  EQU            0x2013FC

; Message Object 32 Control Register High
CAN_MOCTR32H  EQU            0x20141E

; Message Object 32 Control Register Low
CAN_MOCTR32L  EQU            0x20141C

; Message Object 33 Control Register High
CAN_MOCTR33H  EQU            0x20143E

; Message Object 33 Control Register Low
CAN_MOCTR33L  EQU            0x20143C

; Message Object 34 Control Register High
CAN_MOCTR34H  EQU            0x20145E

; Message Object 34 Control Register Low
CAN_MOCTR34L  EQU            0x20145C

; Message Object 35 Control Register High
CAN_MOCTR35H  EQU            0x20147E

; Message Object 35 Control Register Low
CAN_MOCTR35L  EQU            0x20147C

; Message Object 36 Control Register High
CAN_MOCTR36H  EQU            0x20149E

; Message Object 36 Control Register Low
CAN_MOCTR36L  EQU            0x20149C

; Message Object 37 Control Register High
CAN_MOCTR37H  EQU            0x2014BE

; Message Object 37 Control Register Low
CAN_MOCTR37L  EQU            0x2014BC

; Message Object 38 Control Register High
CAN_MOCTR38H  EQU            0x2014DE

; Message Object 38 Control Register Low
CAN_MOCTR38L  EQU            0x2014DC

; Message Object 39 Control Register High
CAN_MOCTR39H  EQU            0x2014FE

; Message Object 39 Control Register Low
CAN_MOCTR39L  EQU            0x2014FC

; Message Object 3 Control Register High
CAN_MOCTR3H  EQU             0x20107E

; Message Object 3 Control Register Low
CAN_MOCTR3L  EQU             0x20107C

; Message Object 40 Control Register High
CAN_MOCTR40H  EQU            0x20151E

; Message Object 40 Control Register Low
CAN_MOCTR40L  EQU            0x20151C

; Message Object 41 Control Register High
CAN_MOCTR41H  EQU            0x20153E

; Message Object 41 Control Register Low
CAN_MOCTR41L  EQU            0x20153C

; Message Object 42 Control Register High
CAN_MOCTR42H  EQU            0x20155E

; Message Object 42 Control Register Low
CAN_MOCTR42L  EQU            0x20155C

; Message Object 43 Control Register High
CAN_MOCTR43H  EQU            0x20157E

; Message Object 43 Control Register Low
CAN_MOCTR43L  EQU            0x20157C

; Message Object 44 Control Register High
CAN_MOCTR44H  EQU            0x20159E

; Message Object 44 Control Register Low
CAN_MOCTR44L  EQU            0x20159C

; Message Object 45 Control Register High
CAN_MOCTR45H  EQU            0x2015BE

; Message Object 45 Control Register Low
CAN_MOCTR45L  EQU            0x2015BC

; Message Object 46 Control Register High
CAN_MOCTR46H  EQU            0x2015DE

; Message Object 46 Control Register Low
CAN_MOCTR46L  EQU            0x2015DC

; Message Object 47 Control Register High
CAN_MOCTR47H  EQU            0x2015FE

; Message Object 47 Control Register Low
CAN_MOCTR47L  EQU            0x2015FC

; Message Object 48 Control Register High
CAN_MOCTR48H  EQU            0x20161E

; Message Object 48 Control Register Low
CAN_MOCTR48L  EQU            0x20161C

; Message Object 49 Control Register High
CAN_MOCTR49H  EQU            0x20163E

; Message Object 49 Control Register Low
CAN_MOCTR49L  EQU            0x20163C

; Message Object 4 Control Register High
CAN_MOCTR4H  EQU             0x20109E

; Message Object 4 Control Register Low
CAN_MOCTR4L  EQU             0x20109C

; Message Object 50 Control Register High
CAN_MOCTR50H  EQU            0x20165E

; Message Object 50 Control Register Low
CAN_MOCTR50L  EQU            0x20165C

; Message Object 51 Control Register High
CAN_MOCTR51H  EQU            0x20167E

; Message Object 51 Control Register Low
CAN_MOCTR51L  EQU            0x20167C

; Message Object 52 Control Register High
CAN_MOCTR52H  EQU            0x20169E

; Message Object 52 Control Register Low
CAN_MOCTR52L  EQU            0x20169C

; Message Object 53 Control Register High
CAN_MOCTR53H  EQU            0x2016BE

; Message Object 53 Control Register Low
CAN_MOCTR53L  EQU            0x2016BC

; Message Object 54 Control Register High
CAN_MOCTR54H  EQU            0x2016DE

; Message Object 54 Control Register Low
CAN_MOCTR54L  EQU            0x2016DC

; Message Object 55 Control Register High
CAN_MOCTR55H  EQU            0x2016FE

; Message Object 55 Control Register Low
CAN_MOCTR55L  EQU            0x2016FC

; Message Object 56 Control Register High
CAN_MOCTR56H  EQU            0x20171E

; Message Object 56 Control Register Low
CAN_MOCTR56L  EQU            0x20171C

; Message Object 57 Control Register High
CAN_MOCTR57H  EQU            0x20173E

; Message Object 57 Control Register Low
CAN_MOCTR57L  EQU            0x20173C

; Message Object 58 Control Register High
CAN_MOCTR58H  EQU            0x20175E

; Message Object 58 Control Register Low
CAN_MOCTR58L  EQU            0x20175C

; Message Object 59 Control Register High
CAN_MOCTR59H  EQU            0x20177E

; Message Object 59 Control Register Low
CAN_MOCTR59L  EQU            0x20177C

; Message Object 5 Control Register High
CAN_MOCTR5H  EQU             0x2010BE

; Message Object 5 Control Register Low
CAN_MOCTR5L  EQU             0x2010BC

; Message Object 60 Control Register High
CAN_MOCTR60H  EQU            0x20179E

; Message Object 60 Control Register Low
CAN_MOCTR60L  EQU            0x20179C

; Message Object 61 Control Register High
CAN_MOCTR61H  EQU            0x2017BE

; Message Object 61 Control Register Low
CAN_MOCTR61L  EQU            0x2017BC

; Message Object 62 Control Register High
CAN_MOCTR62H  EQU            0x2017DE

; Message Object 62 Control Register Low
CAN_MOCTR62L  EQU            0x2017DC

; Message Object 63 Control Register High
CAN_MOCTR63H  EQU            0x2017FE

; Message Object 63 Control Register Low
CAN_MOCTR63L  EQU            0x2017FC

; Message Object 64 Control Register High
CAN_MOCTR64H  EQU            0x20181E

; Message Object 64 Control Register Low
CAN_MOCTR64L  EQU            0x20181C

; Message Object 65 Control Register High
CAN_MOCTR65H  EQU            0x20183E

; Message Object 65 Control Register Low
CAN_MOCTR65L  EQU            0x20183C

; Message Object 66 Control Register High
CAN_MOCTR66H  EQU            0x20185E

; Message Object 66 Control Register Low
CAN_MOCTR66L  EQU            0x20185C

; Message Object 67 Control Register High
CAN_MOCTR67H  EQU            0x20187E

; Message Object 67 Control Register Low
CAN_MOCTR67L  EQU            0x20187C

; Message Object 68 Control Register High
CAN_MOCTR68H  EQU            0x20189E

; Message Object 68 Control Register Low
CAN_MOCTR68L  EQU            0x20189C

; Message Object 69 Control Register High
CAN_MOCTR69H  EQU            0x2018BE

; Message Object 69 Control Register Low
CAN_MOCTR69L  EQU            0x2018BC

; Message Object 6 Control Register High
CAN_MOCTR6H  EQU             0x2010DE

; Message Object 6 Control Register Low
CAN_MOCTR6L  EQU             0x2010DC

; Message Object 70 Control Register High
CAN_MOCTR70H  EQU            0x2018DE

; Message Object 70 Control Register Low
CAN_MOCTR70L  EQU            0x2018DC

; Message Object 71 Control Register High
CAN_MOCTR71H  EQU            0x2018FE

; Message Object 71 Control Register Low
CAN_MOCTR71L  EQU            0x2018FC

; Message Object 72 Control Register High
CAN_MOCTR72H  EQU            0x20191E

; Message Object 72 Control Register Low
CAN_MOCTR72L  EQU            0x20191C

; Message Object 73 Control Register High
CAN_MOCTR73H  EQU            0x20193E

; Message Object 73 Control Register Low
CAN_MOCTR73L  EQU            0x20193C

; Message Object 74 Control Register High
CAN_MOCTR74H  EQU            0x20195E

; Message Object 74 Control Register Low
CAN_MOCTR74L  EQU            0x20195C

; Message Object 75 Control Register High
CAN_MOCTR75H  EQU            0x20197E

; Message Object 75 Control Register Low
CAN_MOCTR75L  EQU            0x20197C

; Message Object 76 Control Register High
CAN_MOCTR76H  EQU            0x20199E

; Message Object 76 Control Register Low
CAN_MOCTR76L  EQU            0x20199C

; Message Object 77 Control Register High
CAN_MOCTR77H  EQU            0x2019BE

; Message Object 77 Control Register Low
CAN_MOCTR77L  EQU            0x2019BC

; Message Object 78 Control Register High
CAN_MOCTR78H  EQU            0x2019DE

; Message Object 78 Control Register Low
CAN_MOCTR78L  EQU            0x2019DC

; Message Object 79 Control Register High
CAN_MOCTR79H  EQU            0x2019FE

; Message Object 79 Control Register Low
CAN_MOCTR79L  EQU            0x2019FC

; Message Object 7 Control Register High
CAN_MOCTR7H  EQU             0x2010FE

; Message Object 7 Control Register Low
CAN_MOCTR7L  EQU             0x2010FC

; Message Object 80 Control Register High
CAN_MOCTR80H  EQU            0x201A1E

; Message Object 80 Control Register Low
CAN_MOCTR80L  EQU            0x201A1C

; Message Object 81 Control Register High
CAN_MOCTR81H  EQU            0x201A3E

; Message Object 81 Control Register Low
CAN_MOCTR81L  EQU            0x201A3C

; Message Object 82 Control Register High
CAN_MOCTR82H  EQU            0x201A5E

; Message Object 82 Control Register Low
CAN_MOCTR82L  EQU            0x201A5C

; Message Object 83 Control Register High
CAN_MOCTR83H  EQU            0x201A7E

; Message Object 83 Control Register Low
CAN_MOCTR83L  EQU            0x201A7C

; Message Object 84 Control Register High
CAN_MOCTR84H  EQU            0x201A9E

; Message Object 84 Control Register Low
CAN_MOCTR84L  EQU            0x201A9C

; Message Object 85 Control Register High
CAN_MOCTR85H  EQU            0x201ABE

; Message Object 85 Control Register Low
CAN_MOCTR85L  EQU            0x201ABC

; Message Object 86 Control Register High
CAN_MOCTR86H  EQU            0x201ADE

; Message Object 86 Control Register Low
CAN_MOCTR86L  EQU            0x201ADC

; Message Object 87 Control Register High
CAN_MOCTR87H  EQU            0x201AFE

; Message Object 87 Control Register Low
CAN_MOCTR87L  EQU            0x201AFC

; Message Object 88 Control Register High
CAN_MOCTR88H  EQU            0x201B1E

; Message Object 88 Control Register Low
CAN_MOCTR88L  EQU            0x201B1C

; Message Object 89 Control Register High
CAN_MOCTR89H  EQU            0x201B3E

; Message Object 89 Control Register Low
CAN_MOCTR89L  EQU            0x201B3C

; Message Object 8 Control Register High
CAN_MOCTR8H  EQU             0x20111E

; Message Object 8 Control Register Low
CAN_MOCTR8L  EQU             0x20111C

; Message Object 90 Control Register High
CAN_MOCTR90H  EQU            0x201B5E

; Message Object 90 Control Register Low
CAN_MOCTR90L  EQU            0x201B5C

; Message Object 91 Control Register High
CAN_MOCTR91H  EQU            0x201B7E

; Message Object 91 Control Register Low
CAN_MOCTR91L  EQU            0x201B7C

; Message Object 92 Control Register High
CAN_MOCTR92H  EQU            0x201B9E

; Message Object 92 Control Register Low
CAN_MOCTR92L  EQU            0x201B9C

; Message Object 93 Control Register High
CAN_MOCTR93H  EQU            0x201BBE

; Message Object 93 Control Register Low
CAN_MOCTR93L  EQU            0x201BBC

; Message Object 94 Control Register High
CAN_MOCTR94H  EQU            0x201BDE

; Message Object 94 Control Register Low
CAN_MOCTR94L  EQU            0x201BDC

; Message Object 95 Control Register High
CAN_MOCTR95H  EQU            0x201BFE

; Message Object 95 Control Register Low
CAN_MOCTR95L  EQU            0x201BFC

; Message Object 96 Control Register High
CAN_MOCTR96H  EQU            0x201C1E

; Message Object 96 Control Register Low
CAN_MOCTR96L  EQU            0x201C1C

; Message Object 97 Control Register High
CAN_MOCTR97H  EQU            0x201C3E

; Message Object 97 Control Register Low
CAN_MOCTR97L  EQU            0x201C3C

; Message Object 98 Control Register High
CAN_MOCTR98H  EQU            0x201C5E

; Message Object 98 Control Register Low
CAN_MOCTR98L  EQU            0x201C5C

; Message Object 99 Control Register High
CAN_MOCTR99H  EQU            0x201C7E

; Message Object 99 Control Register Low
CAN_MOCTR99L  EQU            0x201C7C

; Message Object 9 Control Register High
CAN_MOCTR9H  EQU             0x20113E

; Message Object 9 Control Register Low
CAN_MOCTR9L  EQU             0x20113C

; Message Object 0 Data Register High High
CAN_MODATA0HH  EQU           0x201016

; Message Object 0 Data Register High Low
CAN_MODATA0HL  EQU           0x201014

; Message Object 0 Data Register Low High
CAN_MODATA0LH  EQU           0x201012

; Message Object 0 Data Register Low Low
CAN_MODATA0LL  EQU           0x201010

; Message Object 100 Data Register High High
CAN_MODATA100HH  EQU         0x201C96

; Message Object 100 Data Register High Low
CAN_MODATA100HL  EQU         0x201C94

; Message Object 100 Data Register Low High
CAN_MODATA100LH  EQU         0x201C92

; Message Object 100 Data Register Low Low
CAN_MODATA100LL  EQU         0x201C90

; Message Object 101 Data Register High High
CAN_MODATA101HH  EQU         0x201CB6

; Message Object 101 Data Register High Low
CAN_MODATA101HL  EQU         0x201CB4

; Message Object 101 Data Register Low High
CAN_MODATA101LH  EQU         0x201CB2

; Message Object 101 Data Register Low Low
CAN_MODATA101LL  EQU         0x201CB0

; Message Object 102 Data Register High High
CAN_MODATA102HH  EQU         0x201CD6

; Message Object 102 Data Register High Low
CAN_MODATA102HL  EQU         0x201CD4

; Message Object 102 Data Register Low High
CAN_MODATA102LH  EQU         0x201CD2

; Message Object 102 Data Register Low Low
CAN_MODATA102LL  EQU         0x201CD0

; Message Object 103 Data Register High High
CAN_MODATA103HH  EQU         0x201CF6

; Message Object 103 Data Register High Low
CAN_MODATA103HL  EQU         0x201CF4

; Message Object 103 Data Register Low High
CAN_MODATA103LH  EQU         0x201CF2

; Message Object 103 Data Register Low Low
CAN_MODATA103LL  EQU         0x201CF0

; Message Object 104 Data Register High High
CAN_MODATA104HH  EQU         0x201D16

; Message Object 104 Data Register High Low
CAN_MODATA104HL  EQU         0x201D14

; Message Object 104 Data Register Low High
CAN_MODATA104LH  EQU         0x201D12

; Message Object 104 Data Register Low Low
CAN_MODATA104LL  EQU         0x201D10

; Message Object 105 Data Register High High
CAN_MODATA105HH  EQU         0x201D36

; Message Object 105 Data Register High Low
CAN_MODATA105HL  EQU         0x201D34

; Message Object 105 Data Register Low High
CAN_MODATA105LH  EQU         0x201D32

; Message Object 105 Data Register Low Low
CAN_MODATA105LL  EQU         0x201D30

; Message Object 106 Data Register High High
CAN_MODATA106HH  EQU         0x201D56

; Message Object 106 Data Register High Low
CAN_MODATA106HL  EQU         0x201D54

; Message Object 106 Data Register Low High
CAN_MODATA106LH  EQU         0x201D52

; Message Object 106 Data Register Low Low
CAN_MODATA106LL  EQU         0x201D50

; Message Object 107 Data Register High High
CAN_MODATA107HH  EQU         0x201D76

; Message Object 107 Data Register High Low
CAN_MODATA107HL  EQU         0x201D74

; Message Object 107 Data Register Low High
CAN_MODATA107LH  EQU         0x201D72

; Message Object 107 Data Register Low Low
CAN_MODATA107LL  EQU         0x201D70

; Message Object 108 Data Register High High
CAN_MODATA108HH  EQU         0x201D96

; Message Object 108 Data Register High Low
CAN_MODATA108HL  EQU         0x201D94

; Message Object 108 Data Register Low High
CAN_MODATA108LH  EQU         0x201D92

; Message Object 108 Data Register Low Low
CAN_MODATA108LL  EQU         0x201D90

; Message Object 109 Data Register High High
CAN_MODATA109HH  EQU         0x201DB6

; Message Object 109 Data Register High Low
CAN_MODATA109HL  EQU         0x201DB4

; Message Object 109 Data Register Low High
CAN_MODATA109LH  EQU         0x201DB2

; Message Object 109 Data Register Low Low
CAN_MODATA109LL  EQU         0x201DB0

; Message Object 10 Data Register High High
CAN_MODATA10HH  EQU          0x201156

; Message Object 10 Data Register High Low
CAN_MODATA10HL  EQU          0x201154

; Message Object 10 Data Register Low High
CAN_MODATA10LH  EQU          0x201152

; Message Object 10 Data Register Low Low
CAN_MODATA10LL  EQU          0x201150

; Message Object 110 Data Register High High
CAN_MODATA110HH  EQU         0x201DD6

; Message Object 110 Data Register High Low
CAN_MODATA110HL  EQU         0x201DD4

; Message Object 110 Data Register Low High
CAN_MODATA110LH  EQU         0x201DD2

; Message Object 110 Data Register Low Low
CAN_MODATA110LL  EQU         0x201DD0

; Message Object 111 Data Register High High
CAN_MODATA111HH  EQU         0x201DF6

; Message Object 111 Data Register High Low
CAN_MODATA111HL  EQU         0x201DF4

; Message Object 111 Data Register Low High
CAN_MODATA111LH  EQU         0x201DF2

; Message Object 111 Data Register Low Low
CAN_MODATA111LL  EQU         0x201DF0

; Message Object 112 Data Register High High
CAN_MODATA112HH  EQU         0x201E16

; Message Object 112 Data Register High Low
CAN_MODATA112HL  EQU         0x201E14

; Message Object 112 Data Register Low High
CAN_MODATA112LH  EQU         0x201E12

; Message Object 112 Data Register Low Low
CAN_MODATA112LL  EQU         0x201E10

; Message Object 113 Data Register High High
CAN_MODATA113HH  EQU         0x201E36

; Message Object 113 Data Register High Low
CAN_MODATA113HL  EQU         0x201E34

; Message Object 113 Data Register Low High
CAN_MODATA113LH  EQU         0x201E32

; Message Object 113 Data Register Low Low
CAN_MODATA113LL  EQU         0x201E30

; Message Object 114 Data Register High High
CAN_MODATA114HH  EQU         0x201E56

; Message Object 114 Data Register High Low
CAN_MODATA114HL  EQU         0x201E54

; Message Object 114 Data Register Low High
CAN_MODATA114LH  EQU         0x201E52

; Message Object 114 Data Register Low Low
CAN_MODATA114LL  EQU         0x201E50

; Message Object 115 Data Register High High
CAN_MODATA115HH  EQU         0x201E76

; Message Object 115 Data Register High Low
CAN_MODATA115HL  EQU         0x201E74

; Message Object 115 Data Register Low High
CAN_MODATA115LH  EQU         0x201E72

; Message Object 115 Data Register Low Low
CAN_MODATA115LL  EQU         0x201E70

; Message Object 116 Data Register High High
CAN_MODATA116HH  EQU         0x201E96

; Message Object 116 Data Register High Low
CAN_MODATA116HL  EQU         0x201E94

; Message Object 116 Data Register Low High
CAN_MODATA116LH  EQU         0x201E92

; Message Object 116 Data Register Low Low
CAN_MODATA116LL  EQU         0x201E90

; Message Object 117 Data Register High High
CAN_MODATA117HH  EQU         0x201EB6

; Message Object 117 Data Register High Low
CAN_MODATA117HL  EQU         0x201EB4

; Message Object 117 Data Register Low High
CAN_MODATA117LH  EQU         0x201EB2

; Message Object 117 Data Register Low Low
CAN_MODATA117LL  EQU         0x201EB0

; Message Object 118 Data Register High High
CAN_MODATA118HH  EQU         0x201ED6

; Message Object 118 Data Register High Low
CAN_MODATA118HL  EQU         0x201ED4

; Message Object 118 Data Register Low High
CAN_MODATA118LH  EQU         0x201ED2

; Message Object 118 Data Register Low Low
CAN_MODATA118LL  EQU         0x201ED0

; Message Object 119 Data Register High High
CAN_MODATA119HH  EQU         0x201EF6

; Message Object 119 Data Register High Low
CAN_MODATA119HL  EQU         0x201EF4

; Message Object 119 Data Register Low High
CAN_MODATA119LH  EQU         0x201EF2

; Message Object 119 Data Register Low Low
CAN_MODATA119LL  EQU         0x201EF0

; Message Object 11 Data Register High High
CAN_MODATA11HH  EQU          0x201176

; Message Object 11 Data Register High Low
CAN_MODATA11HL  EQU          0x201174

; Message Object 11 Data Register Low High
CAN_MODATA11LH  EQU          0x201172

; Message Object 11 Data Register Low Low
CAN_MODATA11LL  EQU          0x201170

; Message Object 120 Data Register High High
CAN_MODATA120HH  EQU         0x201F16

; Message Object 120 Data Register High Low
CAN_MODATA120HL  EQU         0x201F14

; Message Object 120 Data Register Low High
CAN_MODATA120LH  EQU         0x201F12

; Message Object 120 Data Register Low Low
CAN_MODATA120LL  EQU         0x201F10

; Message Object 121 Data Register High High
CAN_MODATA121HH  EQU         0x201F36

; Message Object 121 Data Register High Low
CAN_MODATA121HL  EQU         0x201F34

; Message Object 121 Data Register Low High
CAN_MODATA121LH  EQU         0x201F32

; Message Object 121 Data Register Low Low
CAN_MODATA121LL  EQU         0x201F30

; Message Object 122 Data Register High High
CAN_MODATA122HH  EQU         0x201F56

; Message Object 122 Data Register High Low
CAN_MODATA122HL  EQU         0x201F54

; Message Object 122 Data Register Low High
CAN_MODATA122LH  EQU         0x201F52

; Message Object 122 Data Register Low Low
CAN_MODATA122LL  EQU         0x201F50

; Message Object 123 Data Register High High
CAN_MODATA123HH  EQU         0x201F76

; Message Object 123 Data Register High Low
CAN_MODATA123HL  EQU         0x201F74

; Message Object 123 Data Register Low High
CAN_MODATA123LH  EQU         0x201F72

; Message Object 123 Data Register Low Low
CAN_MODATA123LL  EQU         0x201F70

; Message Object 124 Data Register High High
CAN_MODATA124HH  EQU         0x201F96

; Message Object 124 Data Register High Low
CAN_MODATA124HL  EQU         0x201F94

; Message Object 124 Data Register Low High
CAN_MODATA124LH  EQU         0x201F92

; Message Object 124 Data Register Low Low
CAN_MODATA124LL  EQU         0x201F90

; Message Object 125 Data Register High High
CAN_MODATA125HH  EQU         0x201FB6

; Message Object 125 Data Register High Low
CAN_MODATA125HL  EQU         0x201FB4

; Message Object 125 Data Register Low High
CAN_MODATA125LH  EQU         0x201FB2

; Message Object 125 Data Register Low Low
CAN_MODATA125LL  EQU         0x201FB0

; Message Object 126 Data Register High High
CAN_MODATA126HH  EQU         0x201FD6

; Message Object 126 Data Register High Low
CAN_MODATA126HL  EQU         0x201FD4

; Message Object 126 Data Register Low High
CAN_MODATA126LH  EQU         0x201FD2

; Message Object 126 Data Register Low Low
CAN_MODATA126LL  EQU         0x201FD0

; Message Object 127 Data Register High High
CAN_MODATA127HH  EQU         0x201FF6

; Message Object 127 Data Register High Low
CAN_MODATA127HL  EQU         0x201FF4

; Message Object 127 Data Register Low High
CAN_MODATA127LH  EQU         0x201FF2

; Message Object 127 Data Register Low Low
CAN_MODATA127LL  EQU         0x201FF0

; Message Object 12 Data Register High High
CAN_MODATA12HH  EQU          0x201196

; Message Object 12 Data Register High Low
CAN_MODATA12HL  EQU          0x201194

; Message Object 12 Data Register Low High
CAN_MODATA12LH  EQU          0x201192

; Message Object 12 Data Register Low Low
CAN_MODATA12LL  EQU          0x201190

; Message Object 13 Data Register High High
CAN_MODATA13HH  EQU          0x2011B6

; Message Object 13 Data Register High Low
CAN_MODATA13HL  EQU          0x2011B4

; Message Object 13 Data Register Low High
CAN_MODATA13LH  EQU          0x2011B2

; Message Object 13 Data Register Low Low
CAN_MODATA13LL  EQU          0x2011B0

; Message Object 14 Data Register High High
CAN_MODATA14HH  EQU          0x2011D6

; Message Object 14 Data Register High Low
CAN_MODATA14HL  EQU          0x2011D4

; Message Object 14 Data Register Low High
CAN_MODATA14LH  EQU          0x2011D2

; Message Object 14 Data Register Low Low
CAN_MODATA14LL  EQU          0x2011D0

; Message Object 15 Data Register High High
CAN_MODATA15HH  EQU          0x2011F6

; Message Object 15 Data Register High Low
CAN_MODATA15HL  EQU          0x2011F4

; Message Object 15 Data Register Low High
CAN_MODATA15LH  EQU          0x2011F2

; Message Object 15 Data Register Low Low
CAN_MODATA15LL  EQU          0x2011F0

; Message Object 16 Data Register High High
CAN_MODATA16HH  EQU          0x201216

; Message Object 16 Data Register High Low
CAN_MODATA16HL  EQU          0x201214

; Message Object 16 Data Register Low High
CAN_MODATA16LH  EQU          0x201212

; Message Object 16 Data Register Low Low
CAN_MODATA16LL  EQU          0x201210

; Message Object 17 Data Register High High
CAN_MODATA17HH  EQU          0x201236

; Message Object 17 Data Register High Low
CAN_MODATA17HL  EQU          0x201234

; Message Object 17 Data Register Low High
CAN_MODATA17LH  EQU          0x201232

; Message Object 17 Data Register Low Low
CAN_MODATA17LL  EQU          0x201230

; Message Object 18 Data Register High High
CAN_MODATA18HH  EQU          0x201256

; Message Object 18 Data Register High Low
CAN_MODATA18HL  EQU          0x201254

; Message Object 18 Data Register Low High
CAN_MODATA18LH  EQU          0x201252

; Message Object 18 Data Register Low Low
CAN_MODATA18LL  EQU          0x201250

; Message Object 19 Data Register High High
CAN_MODATA19HH  EQU          0x201276

; Message Object 19 Data Register High Low
CAN_MODATA19HL  EQU          0x201274

; Message Object 19 Data Register Low High
CAN_MODATA19LH  EQU          0x201272

; Message Object 19 Data Register Low Low
CAN_MODATA19LL  EQU          0x201270

; Message Object 1 Data Register High High
CAN_MODATA1HH  EQU           0x201036

; Message Object 1 Data Register High Low
CAN_MODATA1HL  EQU           0x201034

; Message Object 1 Data Register Low High
CAN_MODATA1LH  EQU           0x201032

; Message Object 1 Data Register Low Low
CAN_MODATA1LL  EQU           0x201030

; Message Object 20 Data Register High High
CAN_MODATA20HH  EQU          0x201296

; Message Object 20 Data Register High Low
CAN_MODATA20HL  EQU          0x201294

; Message Object 20 Data Register Low High
CAN_MODATA20LH  EQU          0x201292

; Message Object 20 Data Register Low Low
CAN_MODATA20LL  EQU          0x201290

; Message Object 21 Data Register High High
CAN_MODATA21HH  EQU          0x2012B6

; Message Object 21 Data Register High Low
CAN_MODATA21HL  EQU          0x2012B4

; Message Object 21 Data Register Low High
CAN_MODATA21LH  EQU          0x2012B2

; Message Object 21 Data Register Low Low
CAN_MODATA21LL  EQU          0x2012B0

; Message Object 22 Data Register High High
CAN_MODATA22HH  EQU          0x2012D6

; Message Object 22 Data Register High Low
CAN_MODATA22HL  EQU          0x2012D4

; Message Object 22 Data Register Low High
CAN_MODATA22LH  EQU          0x2012D2

; Message Object 22 Data Register Low Low
CAN_MODATA22LL  EQU          0x2012D0

; Message Object 23 Data Register High High
CAN_MODATA23HH  EQU          0x2012F6

; Message Object 23 Data Register High Low
CAN_MODATA23HL  EQU          0x2012F4

; Message Object 23 Data Register Low High
CAN_MODATA23LH  EQU          0x2012F2

; Message Object 23 Data Register Low Low
CAN_MODATA23LL  EQU          0x2012F0

; Message Object 24 Data Register High High
CAN_MODATA24HH  EQU          0x201316

; Message Object 24 Data Register High Low
CAN_MODATA24HL  EQU          0x201314

; Message Object 24 Data Register Low High
CAN_MODATA24LH  EQU          0x201312

; Message Object 24 Data Register Low Low
CAN_MODATA24LL  EQU          0x201310

; Message Object 25 Data Register High High
CAN_MODATA25HH  EQU          0x201336

; Message Object 25 Data Register High Low
CAN_MODATA25HL  EQU          0x201334

; Message Object 25 Data Register Low High
CAN_MODATA25LH  EQU          0x201332

; Message Object 25 Data Register Low Low
CAN_MODATA25LL  EQU          0x201330

; Message Object 26 Data Register High High
CAN_MODATA26HH  EQU          0x201356

; Message Object 26 Data Register High Low
CAN_MODATA26HL  EQU          0x201354

; Message Object 26 Data Register Low High
CAN_MODATA26LH  EQU          0x201352

; Message Object 26 Data Register Low Low
CAN_MODATA26LL  EQU          0x201350

; Message Object 27 Data Register High High
CAN_MODATA27HH  EQU          0x201376

; Message Object 27 Data Register High Low
CAN_MODATA27HL  EQU          0x201374

; Message Object 27 Data Register Low High
CAN_MODATA27LH  EQU          0x201372

; Message Object 27 Data Register Low Low
CAN_MODATA27LL  EQU          0x201370

; Message Object 28 Data Register High High
CAN_MODATA28HH  EQU          0x201396

; Message Object 28 Data Register High Low
CAN_MODATA28HL  EQU          0x201394

; Message Object 28 Data Register Low High
CAN_MODATA28LH  EQU          0x201392

; Message Object 28 Data Register Low Low
CAN_MODATA28LL  EQU          0x201390

; Message Object 29 Data Register High High
CAN_MODATA29HH  EQU          0x2013B6

; Message Object 29 Data Register High Low
CAN_MODATA29HL  EQU          0x2013B4

; Message Object 29 Data Register Low High
CAN_MODATA29LH  EQU          0x2013B2

; Message Object 29 Data Register Low Low
CAN_MODATA29LL  EQU          0x2013B0

; Message Object 2 Data Register High High
CAN_MODATA2HH  EQU           0x201056

; Message Object 2 Data Register High Low
CAN_MODATA2HL  EQU           0x201054

; Message Object 2 Data Register Low High
CAN_MODATA2LH  EQU           0x201052

; Message Object 2 Data Register Low Low
CAN_MODATA2LL  EQU           0x201050

; Message Object 30 Data Register High High
CAN_MODATA30HH  EQU          0x2013D6

; Message Object 30 Data Register High Low
CAN_MODATA30HL  EQU          0x2013D4

; Message Object 30 Data Register Low High
CAN_MODATA30LH  EQU          0x2013D2

; Message Object 30 Data Register Low Low
CAN_MODATA30LL  EQU          0x2013D0

; Message Object 31 Data Register High High
CAN_MODATA31HH  EQU          0x2013F6

; Message Object 31 Data Register High Low
CAN_MODATA31HL  EQU          0x2013F4

; Message Object 31 Data Register Low High
CAN_MODATA31LH  EQU          0x2013F2

; Message Object 31 Data Register Low Low
CAN_MODATA31LL  EQU          0x2013F0

; Message Object 32 Data Register High High
CAN_MODATA32HH  EQU          0x201416

; Message Object 32 Data Register High Low
CAN_MODATA32HL  EQU          0x201414

; Message Object 32 Data Register Low High
CAN_MODATA32LH  EQU          0x201412

; Message Object 32 Data Register Low Low
CAN_MODATA32LL  EQU          0x201410

; Message Object 33 Data Register High High
CAN_MODATA33HH  EQU          0x201436

; Message Object 33 Data Register High Low
CAN_MODATA33HL  EQU          0x201434

; Message Object 33 Data Register Low High
CAN_MODATA33LH  EQU          0x201432

; Message Object 33 Data Register Low Low
CAN_MODATA33LL  EQU          0x201430

; Message Object 34 Data Register High High
CAN_MODATA34HH  EQU          0x201456

; Message Object 34 Data Register High Low
CAN_MODATA34HL  EQU          0x201454

; Message Object 34 Data Register Low High
CAN_MODATA34LH  EQU          0x201452

; Message Object 34 Data Register Low Low
CAN_MODATA34LL  EQU          0x201450

; Message Object 35 Data Register High High
CAN_MODATA35HH  EQU          0x201476

; Message Object 35 Data Register High Low
CAN_MODATA35HL  EQU          0x201474

; Message Object 35 Data Register Low High
CAN_MODATA35LH  EQU          0x201472

; Message Object 35 Data Register Low Low
CAN_MODATA35LL  EQU          0x201470

; Message Object 36 Data Register High High
CAN_MODATA36HH  EQU          0x201496

; Message Object 36 Data Register High Low
CAN_MODATA36HL  EQU          0x201494

; Message Object 36 Data Register Low High
CAN_MODATA36LH  EQU          0x201492

; Message Object 36 Data Register Low Low
CAN_MODATA36LL  EQU          0x201490

; Message Object 37 Data Register High High
CAN_MODATA37HH  EQU          0x2014B6

; Message Object 37 Data Register High Low
CAN_MODATA37HL  EQU          0x2014B4

; Message Object 37 Data Register Low High
CAN_MODATA37LH  EQU          0x2014B2

; Message Object 37 Data Register Low Low
CAN_MODATA37LL  EQU          0x2014B0

; Message Object 38 Data Register High High
CAN_MODATA38HH  EQU          0x2014D6

; Message Object 38 Data Register High Low
CAN_MODATA38HL  EQU          0x2014D4

; Message Object 38 Data Register Low High
CAN_MODATA38LH  EQU          0x2014D2

; Message Object 38 Data Register Low Low
CAN_MODATA38LL  EQU          0x2014D0

; Message Object 39 Data Register High High
CAN_MODATA39HH  EQU          0x2014F6

; Message Object 39 Data Register High Low
CAN_MODATA39HL  EQU          0x2014F4

; Message Object 39 Data Register Low High
CAN_MODATA39LH  EQU          0x2014F2

; Message Object 39 Data Register Low Low
CAN_MODATA39LL  EQU          0x2014F0

; Message Object 3 Data Register High High
CAN_MODATA3HH  EQU           0x201076

; Message Object 3 Data Register High Low
CAN_MODATA3HL  EQU           0x201074

; Message Object 3 Data Register Low High
CAN_MODATA3LH  EQU           0x201072

; Message Object 3 Data Register Low Low
CAN_MODATA3LL  EQU           0x201070

; Message Object 40 Data Register High High
CAN_MODATA40HH  EQU          0x201516

; Message Object 40 Data Register High Low
CAN_MODATA40HL  EQU          0x201514

; Message Object 40 Data Register Low High
CAN_MODATA40LH  EQU          0x201512

; Message Object 40 Data Register Low Low
CAN_MODATA40LL  EQU          0x201510

; Message Object 41 Data Register High High
CAN_MODATA41HH  EQU          0x201536

; Message Object 41 Data Register High Low
CAN_MODATA41HL  EQU          0x201534

; Message Object 41 Data Register Low High
CAN_MODATA41LH  EQU          0x201532

; Message Object 41 Data Register Low Low
CAN_MODATA41LL  EQU          0x201530

; Message Object 42 Data Register High High
CAN_MODATA42HH  EQU          0x201556

; Message Object 42 Data Register High Low
CAN_MODATA42HL  EQU          0x201554

; Message Object 42 Data Register Low High
CAN_MODATA42LH  EQU          0x201552

; Message Object 42 Data Register Low Low
CAN_MODATA42LL  EQU          0x201550

; Message Object 43 Data Register High High
CAN_MODATA43HH  EQU          0x201576

; Message Object 43 Data Register High Low
CAN_MODATA43HL  EQU          0x201574

; Message Object 43 Data Register Low High
CAN_MODATA43LH  EQU          0x201572

; Message Object 43 Data Register Low Low
CAN_MODATA43LL  EQU          0x201570

; Message Object 44 Data Register High High
CAN_MODATA44HH  EQU          0x201596

; Message Object 44 Data Register High Low
CAN_MODATA44HL  EQU          0x201594

; Message Object 44 Data Register Low High
CAN_MODATA44LH  EQU          0x201592

; Message Object 44 Data Register Low Low
CAN_MODATA44LL  EQU          0x201590

; Message Object 45 Data Register High High
CAN_MODATA45HH  EQU          0x2015B6

; Message Object 45 Data Register High Low
CAN_MODATA45HL  EQU          0x2015B4

; Message Object 45 Data Register Low High
CAN_MODATA45LH  EQU          0x2015B2

; Message Object 45 Data Register Low Low
CAN_MODATA45LL  EQU          0x2015B0

; Message Object 46 Data Register High High
CAN_MODATA46HH  EQU          0x2015D6

; Message Object 46 Data Register High Low
CAN_MODATA46HL  EQU          0x2015D4

; Message Object 46 Data Register Low High
CAN_MODATA46LH  EQU          0x2015D2

; Message Object 46 Data Register Low Low
CAN_MODATA46LL  EQU          0x2015D0

; Message Object 47 Data Register High High
CAN_MODATA47HH  EQU          0x2015F6

; Message Object 47 Data Register High Low
CAN_MODATA47HL  EQU          0x2015F4

; Message Object 47 Data Register Low High
CAN_MODATA47LH  EQU          0x2015F2

; Message Object 47 Data Register Low Low
CAN_MODATA47LL  EQU          0x2015F0

; Message Object 48 Data Register High High
CAN_MODATA48HH  EQU          0x201616

; Message Object 48 Data Register High Low
CAN_MODATA48HL  EQU          0x201614

; Message Object 48 Data Register Low High
CAN_MODATA48LH  EQU          0x201612

; Message Object 48 Data Register Low Low
CAN_MODATA48LL  EQU          0x201610

; Message Object 49 Data Register High High
CAN_MODATA49HH  EQU          0x201636

; Message Object 49 Data Register High Low
CAN_MODATA49HL  EQU          0x201634

; Message Object 49 Data Register Low High
CAN_MODATA49LH  EQU          0x201632

; Message Object 49 Data Register Low Low
CAN_MODATA49LL  EQU          0x201630

; Message Object 4 Data Register High High
CAN_MODATA4HH  EQU           0x201096

; Message Object 4 Data Register High Low
CAN_MODATA4HL  EQU           0x201094

; Message Object 4 Data Register Low High
CAN_MODATA4LH  EQU           0x201092

; Message Object 4 Data Register Low Low
CAN_MODATA4LL  EQU           0x201090

; Message Object 50 Data Register High High
CAN_MODATA50HH  EQU          0x201656

; Message Object 50 Data Register High Low
CAN_MODATA50HL  EQU          0x201654

; Message Object 50 Data Register Low High
CAN_MODATA50LH  EQU          0x201652

; Message Object 50 Data Register Low Low
CAN_MODATA50LL  EQU          0x201650

; Message Object 51 Data Register High High
CAN_MODATA51HH  EQU          0x201676

; Message Object 51 Data Register High Low
CAN_MODATA51HL  EQU          0x201674

; Message Object 51 Data Register Low High
CAN_MODATA51LH  EQU          0x201672

; Message Object 51 Data Register Low Low
CAN_MODATA51LL  EQU          0x201670

; Message Object 52 Data Register High High
CAN_MODATA52HH  EQU          0x201696

; Message Object 52 Data Register High Low
CAN_MODATA52HL  EQU          0x201694

; Message Object 52 Data Register Low High
CAN_MODATA52LH  EQU          0x201692

; Message Object 52 Data Register Low Low
CAN_MODATA52LL  EQU          0x201690

; Message Object 53 Data Register High High
CAN_MODATA53HH  EQU          0x2016B6

; Message Object 53 Data Register High Low
CAN_MODATA53HL  EQU          0x2016B4

; Message Object 53 Data Register Low High
CAN_MODATA53LH  EQU          0x2016B2

; Message Object 53 Data Register Low Low
CAN_MODATA53LL  EQU          0x2016B0

; Message Object 54 Data Register High High
CAN_MODATA54HH  EQU          0x2016D6

; Message Object 54 Data Register High Low
CAN_MODATA54HL  EQU          0x2016D4

; Message Object 54 Data Register Low High
CAN_MODATA54LH  EQU          0x2016D2

; Message Object 54 Data Register Low Low
CAN_MODATA54LL  EQU          0x2016D0

; Message Object 55 Data Register High High
CAN_MODATA55HH  EQU          0x2016F6

; Message Object 55 Data Register High Low
CAN_MODATA55HL  EQU          0x2016F4

; Message Object 55 Data Register Low High
CAN_MODATA55LH  EQU          0x2016F2

; Message Object 55 Data Register Low Low
CAN_MODATA55LL  EQU          0x2016F0

; Message Object 56 Data Register High High
CAN_MODATA56HH  EQU          0x201716

; Message Object 56 Data Register High Low
CAN_MODATA56HL  EQU          0x201714

; Message Object 56 Data Register Low High
CAN_MODATA56LH  EQU          0x201712

; Message Object 56 Data Register Low Low
CAN_MODATA56LL  EQU          0x201710

; Message Object 57 Data Register High High
CAN_MODATA57HH  EQU          0x201736

; Message Object 57 Data Register High Low
CAN_MODATA57HL  EQU          0x201734

; Message Object 57 Data Register Low High
CAN_MODATA57LH  EQU          0x201732

; Message Object 57 Data Register Low Low
CAN_MODATA57LL  EQU          0x201730

; Message Object 58 Data Register High High
CAN_MODATA58HH  EQU          0x201756

; Message Object 58 Data Register High Low
CAN_MODATA58HL  EQU          0x201754

; Message Object 58 Data Register Low High
CAN_MODATA58LH  EQU          0x201752

; Message Object 58 Data Register Low Low
CAN_MODATA58LL  EQU          0x201750

; Message Object 59 Data Register High High
CAN_MODATA59HH  EQU          0x201776

; Message Object 59 Data Register High Low
CAN_MODATA59HL  EQU          0x201774

; Message Object 59 Data Register Low High
CAN_MODATA59LH  EQU          0x201772

; Message Object 59 Data Register Low Low
CAN_MODATA59LL  EQU          0x201770

; Message Object 5 Data Register High High
CAN_MODATA5HH  EQU           0x2010B6

; Message Object 5 Data Register High Low
CAN_MODATA5HL  EQU           0x2010B4

; Message Object 5 Data Register Low High
CAN_MODATA5LH  EQU           0x2010B2

; Message Object 5 Data Register Low Low
CAN_MODATA5LL  EQU           0x2010B0

; Message Object 60 Data Register High High
CAN_MODATA60HH  EQU          0x201796

; Message Object 60 Data Register High Low
CAN_MODATA60HL  EQU          0x201794

; Message Object 60 Data Register Low High
CAN_MODATA60LH  EQU          0x201792

; Message Object 60 Data Register Low Low
CAN_MODATA60LL  EQU          0x201790

; Message Object 61 Data Register High High
CAN_MODATA61HH  EQU          0x2017B6

; Message Object 61 Data Register High Low
CAN_MODATA61HL  EQU          0x2017B4

; Message Object 61 Data Register Low High
CAN_MODATA61LH  EQU          0x2017B2

; Message Object 61 Data Register Low Low
CAN_MODATA61LL  EQU          0x2017B0

; Message Object 62 Data Register High High
CAN_MODATA62HH  EQU          0x2017D6

; Message Object 62 Data Register High Low
CAN_MODATA62HL  EQU          0x2017D4

; Message Object 62 Data Register Low High
CAN_MODATA62LH  EQU          0x2017D2

; Message Object 62 Data Register Low Low
CAN_MODATA62LL  EQU          0x2017D0

; Message Object 63 Data Register High High
CAN_MODATA63HH  EQU          0x2017F6

; Message Object 63 Data Register High Low
CAN_MODATA63HL  EQU          0x2017F4

; Message Object 63 Data Register Low High
CAN_MODATA63LH  EQU          0x2017F2

; Message Object 63 Data Register Low Low
CAN_MODATA63LL  EQU          0x2017F0

; Message Object 64 Data Register High High
CAN_MODATA64HH  EQU          0x201816

; Message Object 64 Data Register High Low
CAN_MODATA64HL  EQU          0x201814

; Message Object 64 Data Register Low High
CAN_MODATA64LH  EQU          0x201812

; Message Object 64 Data Register Low Low
CAN_MODATA64LL  EQU          0x201810

; Message Object 65 Data Register High High
CAN_MODATA65HH  EQU          0x201836

; Message Object 65 Data Register High Low
CAN_MODATA65HL  EQU          0x201834

; Message Object 65 Data Register Low High
CAN_MODATA65LH  EQU          0x201832

; Message Object 65 Data Register Low Low
CAN_MODATA65LL  EQU          0x201830

; Message Object 66 Data Register High High
CAN_MODATA66HH  EQU          0x201856

; Message Object 66 Data Register High Low
CAN_MODATA66HL  EQU          0x201854

; Message Object 66 Data Register Low High
CAN_MODATA66LH  EQU          0x201852

; Message Object 66 Data Register Low Low
CAN_MODATA66LL  EQU          0x201850

; Message Object 67 Data Register High High
CAN_MODATA67HH  EQU          0x201876

; Message Object 67 Data Register High Low
CAN_MODATA67HL  EQU          0x201874

; Message Object 67 Data Register Low High
CAN_MODATA67LH  EQU          0x201872

; Message Object 67 Data Register Low Low
CAN_MODATA67LL  EQU          0x201870

; Message Object 68 Data Register High High
CAN_MODATA68HH  EQU          0x201896

; Message Object 68 Data Register High Low
CAN_MODATA68HL  EQU          0x201894

; Message Object 68 Data Register Low High
CAN_MODATA68LH  EQU          0x201892

; Message Object 68 Data Register Low Low
CAN_MODATA68LL  EQU          0x201890

; Message Object 69 Data Register High High
CAN_MODATA69HH  EQU          0x2018B6

; Message Object 69 Data Register High Low
CAN_MODATA69HL  EQU          0x2018B4

; Message Object 69 Data Register Low High
CAN_MODATA69LH  EQU          0x2018B2

; Message Object 69 Data Register Low Low
CAN_MODATA69LL  EQU          0x2018B0

; Message Object 6 Data Register High High
CAN_MODATA6HH  EQU           0x2010D6

; Message Object 6 Data Register High Low
CAN_MODATA6HL  EQU           0x2010D4

; Message Object 6 Data Register Low High
CAN_MODATA6LH  EQU           0x2010D2

; Message Object 6 Data Register Low Low
CAN_MODATA6LL  EQU           0x2010D0

; Message Object 70 Data Register High High
CAN_MODATA70HH  EQU          0x2018D6

; Message Object 70 Data Register High Low
CAN_MODATA70HL  EQU          0x2018D4

; Message Object 70 Data Register Low High
CAN_MODATA70LH  EQU          0x2018D2

; Message Object 70 Data Register Low Low
CAN_MODATA70LL  EQU          0x2018D0

; Message Object 71 Data Register High High
CAN_MODATA71HH  EQU          0x2018F6

; Message Object 71 Data Register High Low
CAN_MODATA71HL  EQU          0x2018F4

; Message Object 71 Data Register Low High
CAN_MODATA71LH  EQU          0x2018F2

; Message Object 71 Data Register Low Low
CAN_MODATA71LL  EQU          0x2018F0

; Message Object 72 Data Register High High
CAN_MODATA72HH  EQU          0x201916

; Message Object 72 Data Register High Low
CAN_MODATA72HL  EQU          0x201914

; Message Object 72 Data Register Low High
CAN_MODATA72LH  EQU          0x201912

; Message Object 72 Data Register Low Low
CAN_MODATA72LL  EQU          0x201910

; Message Object 73 Data Register High High
CAN_MODATA73HH  EQU          0x201936

; Message Object 73 Data Register High Low
CAN_MODATA73HL  EQU          0x201934

; Message Object 73 Data Register Low High
CAN_MODATA73LH  EQU          0x201932

; Message Object 73 Data Register Low Low
CAN_MODATA73LL  EQU          0x201930

; Message Object 74 Data Register High High
CAN_MODATA74HH  EQU          0x201956

; Message Object 74 Data Register High Low
CAN_MODATA74HL  EQU          0x201954

; Message Object 74 Data Register Low High
CAN_MODATA74LH  EQU          0x201952

; Message Object 74 Data Register Low Low
CAN_MODATA74LL  EQU          0x201950

; Message Object 75 Data Register High High
CAN_MODATA75HH  EQU          0x201976

; Message Object 75 Data Register High Low
CAN_MODATA75HL  EQU          0x201974

; Message Object 75 Data Register Low High
CAN_MODATA75LH  EQU          0x201972

; Message Object 75 Data Register Low Low
CAN_MODATA75LL  EQU          0x201970

; Message Object 76 Data Register High High
CAN_MODATA76HH  EQU          0x201996

; Message Object 76 Data Register High Low
CAN_MODATA76HL  EQU          0x201994

; Message Object 76 Data Register Low High
CAN_MODATA76LH  EQU          0x201992

; Message Object 76 Data Register Low Low
CAN_MODATA76LL  EQU          0x201990

; Message Object 77 Data Register High High
CAN_MODATA77HH  EQU          0x2019B6

; Message Object 77 Data Register High Low
CAN_MODATA77HL  EQU          0x2019B4

; Message Object 77 Data Register Low High
CAN_MODATA77LH  EQU          0x2019B2

; Message Object 77 Data Register Low Low
CAN_MODATA77LL  EQU          0x2019B0

; Message Object 78 Data Register High High
CAN_MODATA78HH  EQU          0x2019D6

; Message Object 78 Data Register High Low
CAN_MODATA78HL  EQU          0x2019D4

; Message Object 78 Data Register Low High
CAN_MODATA78LH  EQU          0x2019D2

; Message Object 78 Data Register Low Low
CAN_MODATA78LL  EQU          0x2019D0

; Message Object 79 Data Register High High
CAN_MODATA79HH  EQU          0x2019F6

; Message Object 79 Data Register High Low
CAN_MODATA79HL  EQU          0x2019F4

; Message Object 79 Data Register Low High
CAN_MODATA79LH  EQU          0x2019F2

; Message Object 79 Data Register Low Low
CAN_MODATA79LL  EQU          0x2019F0

; Message Object 7 Data Register High High
CAN_MODATA7HH  EQU           0x2010F6

; Message Object 7 Data Register High Low
CAN_MODATA7HL  EQU           0x2010F4

; Message Object 7 Data Register Low High
CAN_MODATA7LH  EQU           0x2010F2

; Message Object 7 Data Register Low Low
CAN_MODATA7LL  EQU           0x2010F0

; Message Object 80 Data Register High High
CAN_MODATA80HH  EQU          0x201A16

; Message Object 80 Data Register High Low
CAN_MODATA80HL  EQU          0x201A14

; Message Object 80 Data Register Low High
CAN_MODATA80LH  EQU          0x201A12

; Message Object 80 Data Register Low Low
CAN_MODATA80LL  EQU          0x201A10

; Message Object 81 Data Register High High
CAN_MODATA81HH  EQU          0x201A36

; Message Object 81 Data Register High Low
CAN_MODATA81HL  EQU          0x201A34

; Message Object 81 Data Register Low High
CAN_MODATA81LH  EQU          0x201A32

; Message Object 81 Data Register Low Low
CAN_MODATA81LL  EQU          0x201A30

; Message Object 82 Data Register High High
CAN_MODATA82HH  EQU          0x201A56

; Message Object 82 Data Register High Low
CAN_MODATA82HL  EQU          0x201A54

; Message Object 82 Data Register Low High
CAN_MODATA82LH  EQU          0x201A52

; Message Object 82 Data Register Low Low
CAN_MODATA82LL  EQU          0x201A50

; Message Object 83 Data Register High High
CAN_MODATA83HH  EQU          0x201A76

; Message Object 83 Data Register High Low
CAN_MODATA83HL  EQU          0x201A74

; Message Object 83 Data Register Low High
CAN_MODATA83LH  EQU          0x201A72

; Message Object 83 Data Register Low Low
CAN_MODATA83LL  EQU          0x201A70

; Message Object 84 Data Register High High
CAN_MODATA84HH  EQU          0x201A96

; Message Object 84 Data Register High Low
CAN_MODATA84HL  EQU          0x201A94

; Message Object 84 Data Register Low High
CAN_MODATA84LH  EQU          0x201A92

; Message Object 84 Data Register Low Low
CAN_MODATA84LL  EQU          0x201A90

; Message Object 85 Data Register High High
CAN_MODATA85HH  EQU          0x201AB6

; Message Object 85 Data Register High Low
CAN_MODATA85HL  EQU          0x201AB4

; Message Object 85 Data Register Low High
CAN_MODATA85LH  EQU          0x201AB2

; Message Object 85 Data Register Low Low
CAN_MODATA85LL  EQU          0x201AB0

; Message Object 86 Data Register High High
CAN_MODATA86HH  EQU          0x201AD6

; Message Object 86 Data Register High Low
CAN_MODATA86HL  EQU          0x201AD4

; Message Object 86 Data Register Low High
CAN_MODATA86LH  EQU          0x201AD2

; Message Object 86 Data Register Low Low
CAN_MODATA86LL  EQU          0x201AD0

; Message Object 87 Data Register High High
CAN_MODATA87HH  EQU          0x201AF6

; Message Object 87 Data Register High Low
CAN_MODATA87HL  EQU          0x201AF4

; Message Object 87 Data Register Low High
CAN_MODATA87LH  EQU          0x201AF2

; Message Object 87 Data Register Low Low
CAN_MODATA87LL  EQU          0x201AF0

; Message Object 88 Data Register High High
CAN_MODATA88HH  EQU          0x201B16

; Message Object 88 Data Register High Low
CAN_MODATA88HL  EQU          0x201B14

; Message Object 88 Data Register Low High
CAN_MODATA88LH  EQU          0x201B12

; Message Object 88 Data Register Low Low
CAN_MODATA88LL  EQU          0x201B10

; Message Object 89 Data Register High High
CAN_MODATA89HH  EQU          0x201B36

; Message Object 89 Data Register High Low
CAN_MODATA89HL  EQU          0x201B34

; Message Object 89 Data Register Low High
CAN_MODATA89LH  EQU          0x201B32

; Message Object 89 Data Register Low Low
CAN_MODATA89LL  EQU          0x201B30

; Message Object 8 Data Register High High
CAN_MODATA8HH  EQU           0x201116

; Message Object 8 Data Register High Low
CAN_MODATA8HL  EQU           0x201114

; Message Object 8 Data Register Low High
CAN_MODATA8LH  EQU           0x201112

; Message Object 8 Data Register Low Low
CAN_MODATA8LL  EQU           0x201110

; Message Object 90 Data Register High High
CAN_MODATA90HH  EQU          0x201B56

; Message Object 90 Data Register High Low
CAN_MODATA90HL  EQU          0x201B54

; Message Object 90 Data Register Low High
CAN_MODATA90LH  EQU          0x201B52

; Message Object 90 Data Register Low Low
CAN_MODATA90LL  EQU          0x201B50

; Message Object 91 Data Register High High
CAN_MODATA91HH  EQU          0x201B76

; Message Object 91 Data Register High Low
CAN_MODATA91HL  EQU          0x201B74

; Message Object 91 Data Register Low High
CAN_MODATA91LH  EQU          0x201B72

; Message Object 91 Data Register Low Low
CAN_MODATA91LL  EQU          0x201B70

; Message Object 92 Data Register High High
CAN_MODATA92HH  EQU          0x201B96

; Message Object 92 Data Register High Low
CAN_MODATA92HL  EQU          0x201B94

; Message Object 92 Data Register Low High
CAN_MODATA92LH  EQU          0x201B92

; Message Object 92 Data Register Low Low
CAN_MODATA92LL  EQU          0x201B90

; Message Object 93 Data Register High High
CAN_MODATA93HH  EQU          0x201BB6

; Message Object 93 Data Register High Low
CAN_MODATA93HL  EQU          0x201BB4

; Message Object 93 Data Register Low High
CAN_MODATA93LH  EQU          0x201BB2

; Message Object 93 Data Register Low Low
CAN_MODATA93LL  EQU          0x201BB0

; Message Object 94 Data Register High High
CAN_MODATA94HH  EQU          0x201BD6

; Message Object 94 Data Register High Low
CAN_MODATA94HL  EQU          0x201BD4

; Message Object 94 Data Register Low High
CAN_MODATA94LH  EQU          0x201BD2

; Message Object 94 Data Register Low Low
CAN_MODATA94LL  EQU          0x201BD0

; Message Object 95 Data Register High High
CAN_MODATA95HH  EQU          0x201BF6

; Message Object 95 Data Register High Low
CAN_MODATA95HL  EQU          0x201BF4

; Message Object 95 Data Register Low High
CAN_MODATA95LH  EQU          0x201BF2

; Message Object 95 Data Register Low Low
CAN_MODATA95LL  EQU          0x201BF0

; Message Object 96 Data Register High High
CAN_MODATA96HH  EQU          0x201C16

; Message Object 96 Data Register High Low
CAN_MODATA96HL  EQU          0x201C14

; Message Object 96 Data Register Low High
CAN_MODATA96LH  EQU          0x201C12

; Message Object 96 Data Register Low Low
CAN_MODATA96LL  EQU          0x201C10

; Message Object 97 Data Register High High
CAN_MODATA97HH  EQU          0x201C36

; Message Object 97 Data Register High Low
CAN_MODATA97HL  EQU          0x201C34

; Message Object 97 Data Register Low High
CAN_MODATA97LH  EQU          0x201C32

; Message Object 97 Data Register Low Low
CAN_MODATA97LL  EQU          0x201C30

; Message Object 98 Data Register High High
CAN_MODATA98HH  EQU          0x201C56

; Message Object 98 Data Register High Low
CAN_MODATA98HL  EQU          0x201C54

; Message Object 98 Data Register Low High
CAN_MODATA98LH  EQU          0x201C52

; Message Object 98 Data Register Low Low
CAN_MODATA98LL  EQU          0x201C50

; Message Object 99 Data Register High High
CAN_MODATA99HH  EQU          0x201C76

; Message Object 99 Data Register High Low
CAN_MODATA99HL  EQU          0x201C74

; Message Object 99 Data Register Low High
CAN_MODATA99LH  EQU          0x201C72

; Message Object 99 Data Register Low Low
CAN_MODATA99LL  EQU          0x201C70

; Message Object 9 Data Register High High
CAN_MODATA9HH  EQU           0x201136

; Message Object 9 Data Register High Low
CAN_MODATA9HL  EQU           0x201134

; Message Object 9 Data Register Low High
CAN_MODATA9LH  EQU           0x201132

; Message Object 9 Data Register Low Low
CAN_MODATA9LL  EQU           0x201130

; Message Object 0 Function Control Register High
CAN_MOFCR0H  EQU             0x201002

; Message Object 0 Function Control Register Low
CAN_MOFCR0L  EQU             0x201000

; Message Object 100 Function Control Register High
CAN_MOFCR100H  EQU           0x201C82

; Message Object 100 Function Control Register Low
CAN_MOFCR100L  EQU           0x201C80

; Message Object 101 Function Control Register High
CAN_MOFCR101H  EQU           0x201CA2

; Message Object 101 Function Control Register Low
CAN_MOFCR101L  EQU           0x201CA0

; Message Object 102 Function Control Register High
CAN_MOFCR102H  EQU           0x201CC2

; Message Object 102 Function Control Register Low
CAN_MOFCR102L  EQU           0x201CC0

; Message Object 103 Function Control Register High
CAN_MOFCR103H  EQU           0x201CE2

; Message Object 103 Function Control Register Low
CAN_MOFCR103L  EQU           0x201CE0

; Message Object 104 Function Control Register High
CAN_MOFCR104H  EQU           0x201D02

; Message Object 104 Function Control Register Low
CAN_MOFCR104L  EQU           0x201D00

; Message Object 105 Function Control Register High
CAN_MOFCR105H  EQU           0x201D22

; Message Object 105 Function Control Register Low
CAN_MOFCR105L  EQU           0x201D20

; Message Object 106 Function Control Register High
CAN_MOFCR106H  EQU           0x201D42

; Message Object 106 Function Control Register Low
CAN_MOFCR106L  EQU           0x201D40

; Message Object 107 Function Control Register High
CAN_MOFCR107H  EQU           0x201D62

; Message Object 107 Function Control Register Low
CAN_MOFCR107L  EQU           0x201D60

; Message Object 108 Function Control Register High
CAN_MOFCR108H  EQU           0x201D82

; Message Object 108 Function Control Register Low
CAN_MOFCR108L  EQU           0x201D80

; Message Object 109 Function Control Register High
CAN_MOFCR109H  EQU           0x201DA2

; Message Object 109 Function Control Register Low
CAN_MOFCR109L  EQU           0x201DA0

; Message Object 10 Function Control Register High
CAN_MOFCR10H  EQU            0x201142

; Message Object 10 Function Control Register Low
CAN_MOFCR10L  EQU            0x201140

; Message Object 110 Function Control Register High
CAN_MOFCR110H  EQU           0x201DC2

; Message Object 110 Function Control Register Low
CAN_MOFCR110L  EQU           0x201DC0

; Message Object 111 Function Control Register High
CAN_MOFCR111H  EQU           0x201DE2

; Message Object 111 Function Control Register Low
CAN_MOFCR111L  EQU           0x201DE0

; Message Object 112 Function Control Register High
CAN_MOFCR112H  EQU           0x201E02

; Message Object 112 Function Control Register Low
CAN_MOFCR112L  EQU           0x201E00

; Message Object 113 Function Control Register High
CAN_MOFCR113H  EQU           0x201E22

; Message Object 113 Function Control Register Low
CAN_MOFCR113L  EQU           0x201E20

; Message Object 114 Function Control Register High
CAN_MOFCR114H  EQU           0x201E42

; Message Object 114 Function Control Register Low
CAN_MOFCR114L  EQU           0x201E40

; Message Object 115 Function Control Register High
CAN_MOFCR115H  EQU           0x201E62

; Message Object 115 Function Control Register Low
CAN_MOFCR115L  EQU           0x201E60

; Message Object 116 Function Control Register High
CAN_MOFCR116H  EQU           0x201E82

; Message Object 116 Function Control Register Low
CAN_MOFCR116L  EQU           0x201E80

; Message Object 117 Function Control Register High
CAN_MOFCR117H  EQU           0x201EA2

; Message Object 117 Function Control Register Low
CAN_MOFCR117L  EQU           0x201EA0

; Message Object 118 Function Control Register High
CAN_MOFCR118H  EQU           0x201EC2

; Message Object 118 Function Control Register Low
CAN_MOFCR118L  EQU           0x201EC0

; Message Object 119 Function Control Register High
CAN_MOFCR119H  EQU           0x201EE2

; Message Object 119 Function Control Register Low
CAN_MOFCR119L  EQU           0x201EE0

; Message Object 11 Function Control Register High
CAN_MOFCR11H  EQU            0x201162

; Message Object 11 Function Control Register Low
CAN_MOFCR11L  EQU            0x201160

; Message Object 120 Function Control Register High
CAN_MOFCR120H  EQU           0x201F02

; Message Object 120 Function Control Register Low
CAN_MOFCR120L  EQU           0x201F00

; Message Object 121 Function Control Register High
CAN_MOFCR121H  EQU           0x201F22

; Message Object 121 Function Control Register Low
CAN_MOFCR121L  EQU           0x201F20

; Message Object 122 Function Control Register High
CAN_MOFCR122H  EQU           0x201F42

; Message Object 122 Function Control Register Low
CAN_MOFCR122L  EQU           0x201F40

; Message Object 123 Function Control Register High
CAN_MOFCR123H  EQU           0x201F62

; Message Object 123 Function Control Register Low
CAN_MOFCR123L  EQU           0x201F60

; Message Object 124 Function Control Register High
CAN_MOFCR124H  EQU           0x201F82

; Message Object 124 Function Control Register Low
CAN_MOFCR124L  EQU           0x201F80

; Message Object 125 Function Control Register High
CAN_MOFCR125H  EQU           0x201FA2

; Message Object 125 Function Control Register Low
CAN_MOFCR125L  EQU           0x201FA0

; Message Object 126 Function Control Register High
CAN_MOFCR126H  EQU           0x201FC2

; Message Object 126 Function Control Register Low
CAN_MOFCR126L  EQU           0x201FC0

; Message Object 127 Function Control Register High
CAN_MOFCR127H  EQU           0x201FE2

; Message Object 127 Function Control Register Low
CAN_MOFCR127L  EQU           0x201FE0

; Message Object 12 Function Control Register High
CAN_MOFCR12H  EQU            0x201182

; Message Object 12 Function Control Register Low
CAN_MOFCR12L  EQU            0x201180

; Message Object 13 Function Control Register High
CAN_MOFCR13H  EQU            0x2011A2

; Message Object 13 Function Control Register Low
CAN_MOFCR13L  EQU            0x2011A0

; Message Object 14 Function Control Register High
CAN_MOFCR14H  EQU            0x2011C2

; Message Object 14 Function Control Register Low
CAN_MOFCR14L  EQU            0x2011C0

; Message Object 15 Function Control Register High
CAN_MOFCR15H  EQU            0x2011E2

; Message Object 15 Function Control Register Low
CAN_MOFCR15L  EQU            0x2011E0

; Message Object 16 Function Control Register High
CAN_MOFCR16H  EQU            0x201202

; Message Object 16 Function Control Register Low
CAN_MOFCR16L  EQU            0x201200

; Message Object 17 Function Control Register High
CAN_MOFCR17H  EQU            0x201222

; Message Object 17 Function Control Register Low
CAN_MOFCR17L  EQU            0x201220

; Message Object 18 Function Control Register High
CAN_MOFCR18H  EQU            0x201242

; Message Object 18 Function Control Register Low
CAN_MOFCR18L  EQU            0x201240

; Message Object 19 Function Control Register High
CAN_MOFCR19H  EQU            0x201262

; Message Object 19 Function Control Register Low
CAN_MOFCR19L  EQU            0x201260

; Message Object 1 Function Control Register High
CAN_MOFCR1H  EQU             0x201022

; Message Object 1 Function Control Register Low
CAN_MOFCR1L  EQU             0x201020

; Message Object 20 Function Control Register High
CAN_MOFCR20H  EQU            0x201282

; Message Object 20 Function Control Register Low
CAN_MOFCR20L  EQU            0x201280

; Message Object 21 Function Control Register High
CAN_MOFCR21H  EQU            0x2012A2

; Message Object 21 Function Control Register Low
CAN_MOFCR21L  EQU            0x2012A0

; Message Object 22 Function Control Register High
CAN_MOFCR22H  EQU            0x2012C2

; Message Object 22 Function Control Register Low
CAN_MOFCR22L  EQU            0x2012C0

; Message Object 23 Function Control Register High
CAN_MOFCR23H  EQU            0x2012E2

; Message Object 23 Function Control Register Low
CAN_MOFCR23L  EQU            0x2012E0

; Message Object 24 Function Control Register High
CAN_MOFCR24H  EQU            0x201302

; Message Object 24 Function Control Register Low
CAN_MOFCR24L  EQU            0x201300

; Message Object 25 Function Control Register High
CAN_MOFCR25H  EQU            0x201322

; Message Object 25 Function Control Register Low
CAN_MOFCR25L  EQU            0x201320

; Message Object 26 Function Control Register High
CAN_MOFCR26H  EQU            0x201342

; Message Object 26 Function Control Register Low
CAN_MOFCR26L  EQU            0x201340

; Message Object 27 Function Control Register High
CAN_MOFCR27H  EQU            0x201362

; Message Object 27 Function Control Register Low
CAN_MOFCR27L  EQU            0x201360

; Message Object 28 Function Control Register High
CAN_MOFCR28H  EQU            0x201382

; Message Object 28 Function Control Register Low
CAN_MOFCR28L  EQU            0x201380

; Message Object 29 Function Control Register High
CAN_MOFCR29H  EQU            0x2013A2

; Message Object 29 Function Control Register Low
CAN_MOFCR29L  EQU            0x2013A0

; Message Object 2 Function Control Register High
CAN_MOFCR2H  EQU             0x201042

; Message Object 2 Function Control Register Low
CAN_MOFCR2L  EQU             0x201040

; Message Object 30 Function Control Register High
CAN_MOFCR30H  EQU            0x2013C2

; Message Object 30 Function Control Register Low
CAN_MOFCR30L  EQU            0x2013C0

; Message Object 31 Function Control Register High
CAN_MOFCR31H  EQU            0x2013E2

; Message Object 31 Function Control Register Low
CAN_MOFCR31L  EQU            0x2013E0

; Message Object 32 Function Control Register High
CAN_MOFCR32H  EQU            0x201402

; Message Object 32 Function Control Register Low
CAN_MOFCR32L  EQU            0x201400

; Message Object 33 Function Control Register High
CAN_MOFCR33H  EQU            0x201422

; Message Object 33 Function Control Register Low
CAN_MOFCR33L  EQU            0x201420

; Message Object 34 Function Control Register High
CAN_MOFCR34H  EQU            0x201442

; Message Object 34 Function Control Register Low
CAN_MOFCR34L  EQU            0x201440

; Message Object 35 Function Control Register High
CAN_MOFCR35H  EQU            0x201462

; Message Object 35 Function Control Register Low
CAN_MOFCR35L  EQU            0x201460

; Message Object 36 Function Control Register High
CAN_MOFCR36H  EQU            0x201482

; Message Object 36 Function Control Register Low
CAN_MOFCR36L  EQU            0x201480

; Message Object 37 Function Control Register High
CAN_MOFCR37H  EQU            0x2014A2

; Message Object 37 Function Control Register Low
CAN_MOFCR37L  EQU            0x2014A0

; Message Object 38 Function Control Register High
CAN_MOFCR38H  EQU            0x2014C2

; Message Object 38 Function Control Register Low
CAN_MOFCR38L  EQU            0x2014C0

; Message Object 39 Function Control Register High
CAN_MOFCR39H  EQU            0x2014E2

; Message Object 39 Function Control Register Low
CAN_MOFCR39L  EQU            0x2014E0

; Message Object 3 Function Control Register High
CAN_MOFCR3H  EQU             0x201062

; Message Object 3 Function Control Register Low
CAN_MOFCR3L  EQU             0x201060

; Message Object 40 Function Control Register High
CAN_MOFCR40H  EQU            0x201502

; Message Object 40 Function Control Register Low
CAN_MOFCR40L  EQU            0x201500

; Message Object 41 Function Control Register High
CAN_MOFCR41H  EQU            0x201522

; Message Object 41 Function Control Register Low
CAN_MOFCR41L  EQU            0x201520

; Message Object 42 Function Control Register High
CAN_MOFCR42H  EQU            0x201542

; Message Object 42 Function Control Register Low
CAN_MOFCR42L  EQU            0x201540

; Message Object 43 Function Control Register High
CAN_MOFCR43H  EQU            0x201562

; Message Object 43 Function Control Register Low
CAN_MOFCR43L  EQU            0x201560

; Message Object 44 Function Control Register High
CAN_MOFCR44H  EQU            0x201582

; Message Object 44 Function Control Register Low
CAN_MOFCR44L  EQU            0x201580

; Message Object 45 Function Control Register High
CAN_MOFCR45H  EQU            0x2015A2

; Message Object 45 Function Control Register Low
CAN_MOFCR45L  EQU            0x2015A0

; Message Object 46 Function Control Register High
CAN_MOFCR46H  EQU            0x2015C2

; Message Object 46 Function Control Register Low
CAN_MOFCR46L  EQU            0x2015C0

; Message Object 47 Function Control Register High
CAN_MOFCR47H  EQU            0x2015E2

; Message Object 47 Function Control Register Low
CAN_MOFCR47L  EQU            0x2015E0

; Message Object 48 Function Control Register High
CAN_MOFCR48H  EQU            0x201602

; Message Object 48 Function Control Register Low
CAN_MOFCR48L  EQU            0x201600

; Message Object 49 Function Control Register High
CAN_MOFCR49H  EQU            0x201622

; Message Object 49 Function Control Register Low
CAN_MOFCR49L  EQU            0x201620

; Message Object 4 Function Control Register High
CAN_MOFCR4H  EQU             0x201082

; Message Object 4 Function Control Register Low
CAN_MOFCR4L  EQU             0x201080

; Message Object 50 Function Control Register High
CAN_MOFCR50H  EQU            0x201642

; Message Object 50 Function Control Register Low
CAN_MOFCR50L  EQU            0x201640

; Message Object 51 Function Control Register High
CAN_MOFCR51H  EQU            0x201662

; Message Object 51 Function Control Register Low
CAN_MOFCR51L  EQU            0x201660

; Message Object 52 Function Control Register High
CAN_MOFCR52H  EQU            0x201682

; Message Object 52 Function Control Register Low
CAN_MOFCR52L  EQU            0x201680

; Message Object 53 Function Control Register High
CAN_MOFCR53H  EQU            0x2016A2

; Message Object 53 Function Control Register Low
CAN_MOFCR53L  EQU            0x2016A0

; Message Object 54 Function Control Register High
CAN_MOFCR54H  EQU            0x2016C2

; Message Object 54 Function Control Register Low
CAN_MOFCR54L  EQU            0x2016C0

; Message Object 55 Function Control Register High
CAN_MOFCR55H  EQU            0x2016E2

; Message Object 55 Function Control Register Low
CAN_MOFCR55L  EQU            0x2016E0

; Message Object 56 Function Control Register High
CAN_MOFCR56H  EQU            0x201702

; Message Object 56 Function Control Register Low
CAN_MOFCR56L  EQU            0x201700

; Message Object 57 Function Control Register High
CAN_MOFCR57H  EQU            0x201722

; Message Object 57 Function Control Register Low
CAN_MOFCR57L  EQU            0x201720

; Message Object 58 Function Control Register High
CAN_MOFCR58H  EQU            0x201742

; Message Object 58 Function Control Register Low
CAN_MOFCR58L  EQU            0x201740

; Message Object 59 Function Control Register High
CAN_MOFCR59H  EQU            0x201762

; Message Object 59 Function Control Register Low
CAN_MOFCR59L  EQU            0x201760

; Message Object 5 Function Control Register High
CAN_MOFCR5H  EQU             0x2010A2

; Message Object 5 Function Control Register Low
CAN_MOFCR5L  EQU             0x2010A0

; Message Object 60 Function Control Register High
CAN_MOFCR60H  EQU            0x201782

; Message Object 60 Function Control Register Low
CAN_MOFCR60L  EQU            0x201780

; Message Object 61 Function Control Register High
CAN_MOFCR61H  EQU            0x2017A2

; Message Object 61 Function Control Register Low
CAN_MOFCR61L  EQU            0x2017A0

; Message Object 62 Function Control Register High
CAN_MOFCR62H  EQU            0x2017C2

; Message Object 62 Function Control Register Low
CAN_MOFCR62L  EQU            0x2017C0

; Message Object 63 Function Control Register High
CAN_MOFCR63H  EQU            0x2017E2

; Message Object 63 Function Control Register Low
CAN_MOFCR63L  EQU            0x2017E0

; Message Object 64 Function Control Register High
CAN_MOFCR64H  EQU            0x201802

; Message Object 64 Function Control Register Low
CAN_MOFCR64L  EQU            0x201800

; Message Object 65 Function Control Register High
CAN_MOFCR65H  EQU            0x201822

; Message Object 65 Function Control Register Low
CAN_MOFCR65L  EQU            0x201820

; Message Object 66 Function Control Register High
CAN_MOFCR66H  EQU            0x201842

; Message Object 66 Function Control Register Low
CAN_MOFCR66L  EQU            0x201840

; Message Object 67 Function Control Register High
CAN_MOFCR67H  EQU            0x201862

; Message Object 67 Function Control Register Low
CAN_MOFCR67L  EQU            0x201860

; Message Object 68 Function Control Register High
CAN_MOFCR68H  EQU            0x201882

; Message Object 68 Function Control Register Low
CAN_MOFCR68L  EQU            0x201880

; Message Object 69 Function Control Register High
CAN_MOFCR69H  EQU            0x2018A2

; Message Object 69 Function Control Register Low
CAN_MOFCR69L  EQU            0x2018A0

; Message Object 6 Function Control Register High
CAN_MOFCR6H  EQU             0x2010C2

; Message Object 6 Function Control Register Low
CAN_MOFCR6L  EQU             0x2010C0

; Message Object 70 Function Control Register High
CAN_MOFCR70H  EQU            0x2018C2

; Message Object 70 Function Control Register Low
CAN_MOFCR70L  EQU            0x2018C0

; Message Object 71 Function Control Register High
CAN_MOFCR71H  EQU            0x2018E2

; Message Object 71 Function Control Register Low
CAN_MOFCR71L  EQU            0x2018E0

; Message Object 72 Function Control Register High
CAN_MOFCR72H  EQU            0x201902

; Message Object 72 Function Control Register Low
CAN_MOFCR72L  EQU            0x201900

; Message Object 73 Function Control Register High
CAN_MOFCR73H  EQU            0x201922

; Message Object 73 Function Control Register Low
CAN_MOFCR73L  EQU            0x201920

; Message Object 74 Function Control Register High
CAN_MOFCR74H  EQU            0x201942

; Message Object 74 Function Control Register Low
CAN_MOFCR74L  EQU            0x201940

; Message Object 75 Function Control Register High
CAN_MOFCR75H  EQU            0x201962

; Message Object 75 Function Control Register Low
CAN_MOFCR75L  EQU            0x201960

; Message Object 76 Function Control Register High
CAN_MOFCR76H  EQU            0x201982

; Message Object 76 Function Control Register Low
CAN_MOFCR76L  EQU            0x201980

; Message Object 77 Function Control Register High
CAN_MOFCR77H  EQU            0x2019A2

; Message Object 77 Function Control Register Low
CAN_MOFCR77L  EQU            0x2019A0

; Message Object 78 Function Control Register High
CAN_MOFCR78H  EQU            0x2019C2

; Message Object 78 Function Control Register Low
CAN_MOFCR78L  EQU            0x2019C0

; Message Object 79 Function Control Register High
CAN_MOFCR79H  EQU            0x2019E2

; Message Object 79 Function Control Register Low
CAN_MOFCR79L  EQU            0x2019E0

; Message Object 7 Function Control Register High
CAN_MOFCR7H  EQU             0x2010E2

; Message Object 7 Function Control Register Low
CAN_MOFCR7L  EQU             0x2010E0

; Message Object 80 Function Control Register High
CAN_MOFCR80H  EQU            0x201A02

; Message Object 80 Function Control Register Low
CAN_MOFCR80L  EQU            0x201A00

; Message Object 81 Function Control Register High
CAN_MOFCR81H  EQU            0x201A22

; Message Object 81 Function Control Register Low
CAN_MOFCR81L  EQU            0x201A20

; Message Object 82 Function Control Register High
CAN_MOFCR82H  EQU            0x201A42

; Message Object 82 Function Control Register Low
CAN_MOFCR82L  EQU            0x201A40

; Message Object 83 Function Control Register High
CAN_MOFCR83H  EQU            0x201A62

; Message Object 83 Function Control Register Low
CAN_MOFCR83L  EQU            0x201A60

; Message Object 84 Function Control Register High
CAN_MOFCR84H  EQU            0x201A82

; Message Object 84 Function Control Register Low
CAN_MOFCR84L  EQU            0x201A80

; Message Object 85 Function Control Register High
CAN_MOFCR85H  EQU            0x201AA2

; Message Object 85 Function Control Register Low
CAN_MOFCR85L  EQU            0x201AA0

; Message Object 86 Function Control Register High
CAN_MOFCR86H  EQU            0x201AC2

; Message Object 86 Function Control Register Low
CAN_MOFCR86L  EQU            0x201AC0

; Message Object 87 Function Control Register High
CAN_MOFCR87H  EQU            0x201AE2

; Message Object 87 Function Control Register Low
CAN_MOFCR87L  EQU            0x201AE0

; Message Object 88 Function Control Register High
CAN_MOFCR88H  EQU            0x201B02

; Message Object 88 Function Control Register Low
CAN_MOFCR88L  EQU            0x201B00

; Message Object 89 Function Control Register High
CAN_MOFCR89H  EQU            0x201B22

; Message Object 89 Function Control Register Low
CAN_MOFCR89L  EQU            0x201B20

; Message Object 8 Function Control Register High
CAN_MOFCR8H  EQU             0x201102

; Message Object 8 Function Control Register Low
CAN_MOFCR8L  EQU             0x201100

; Message Object 90 Function Control Register High
CAN_MOFCR90H  EQU            0x201B42

; Message Object 90 Function Control Register Low
CAN_MOFCR90L  EQU            0x201B40

; Message Object 91 Function Control Register High
CAN_MOFCR91H  EQU            0x201B62

; Message Object 91 Function Control Register Low
CAN_MOFCR91L  EQU            0x201B60

; Message Object 92 Function Control Register High
CAN_MOFCR92H  EQU            0x201B82

; Message Object 92 Function Control Register Low
CAN_MOFCR92L  EQU            0x201B80

; Message Object 93 Function Control Register High
CAN_MOFCR93H  EQU            0x201BA2

; Message Object 93 Function Control Register Low
CAN_MOFCR93L  EQU            0x201BA0

; Message Object 94 Function Control Register High
CAN_MOFCR94H  EQU            0x201BC2

; Message Object 94 Function Control Register Low
CAN_MOFCR94L  EQU            0x201BC0

; Message Object 95 Function Control Register High
CAN_MOFCR95H  EQU            0x201BE2

; Message Object 95 Function Control Register Low
CAN_MOFCR95L  EQU            0x201BE0

; Message Object 96 Function Control Register High
CAN_MOFCR96H  EQU            0x201C02

; Message Object 96 Function Control Register Low
CAN_MOFCR96L  EQU            0x201C00

; Message Object 97 Function Control Register High
CAN_MOFCR97H  EQU            0x201C22

; Message Object 97 Function Control Register Low
CAN_MOFCR97L  EQU            0x201C20

; Message Object 98 Function Control Register High
CAN_MOFCR98H  EQU            0x201C42

; Message Object 98 Function Control Register Low
CAN_MOFCR98L  EQU            0x201C40

; Message Object 99 Function Control Register High
CAN_MOFCR99H  EQU            0x201C62

; Message Object 99 Function Control Register Low
CAN_MOFCR99L  EQU            0x201C60

; Message Object 9 Function Control Register High
CAN_MOFCR9H  EQU             0x201122

; Message Object 9 Function Control Register Low
CAN_MOFCR9L  EQU             0x201120

; Message Object 0 FIFO/Gateway Pointer Register High
CAN_MOFGPR0H  EQU            0x201006

; Message Object 0 FIFO/Gateway Pointer Register Low
CAN_MOFGPR0L  EQU            0x201004

; Message Object 100 FIFO/Gateway Pointer Register High
CAN_MOFGPR100H  EQU          0x201C86

; Message Object 100 FIFO/Gateway Pointer Register Low
CAN_MOFGPR100L  EQU          0x201C84

; Message Object 101 FIFO/Gateway Pointer Register High
CAN_MOFGPR101H  EQU          0x201CA6

; Message Object 101 FIFO/Gateway Pointer Register Low
CAN_MOFGPR101L  EQU          0x201CA4

; Message Object 102 FIFO/Gateway Pointer Register High
CAN_MOFGPR102H  EQU          0x201CC6

; Message Object 102 FIFO/Gateway Pointer Register Low
CAN_MOFGPR102L  EQU          0x201CC4

; Message Object 103 FIFO/Gateway Pointer Register High
CAN_MOFGPR103H  EQU          0x201CE6

; Message Object 103 FIFO/Gateway Pointer Register Low
CAN_MOFGPR103L  EQU          0x201CE4

; Message Object 104 FIFO/Gateway Pointer Register High
CAN_MOFGPR104H  EQU          0x201D06

; Message Object 104 FIFO/Gateway Pointer Register Low
CAN_MOFGPR104L  EQU          0x201D04

; Message Object 105 FIFO/Gateway Pointer Register High
CAN_MOFGPR105H  EQU          0x201D26

; Message Object 105 FIFO/Gateway Pointer Register Low
CAN_MOFGPR105L  EQU          0x201D24

; Message Object 106 FIFO/Gateway Pointer Register High
CAN_MOFGPR106H  EQU          0x201D46

; Message Object 106 FIFO/Gateway Pointer Register Low
CAN_MOFGPR106L  EQU          0x201D44

; Message Object 107 FIFO/Gateway Pointer Register High
CAN_MOFGPR107H  EQU          0x201D66

; Message Object 107 FIFO/Gateway Pointer Register Low
CAN_MOFGPR107L  EQU          0x201D64

; Message Object 108 FIFO/Gateway Pointer Register High
CAN_MOFGPR108H  EQU          0x201D86

; Message Object 108 FIFO/Gateway Pointer Register Low
CAN_MOFGPR108L  EQU          0x201D84

; Message Object 109 FIFO/Gateway Pointer Register High
CAN_MOFGPR109H  EQU          0x201DA6

; Message Object 109 FIFO/Gateway Pointer Register Low
CAN_MOFGPR109L  EQU          0x201DA4

; Message Object 10 FIFO/Gateway Pointer Register High
CAN_MOFGPR10H  EQU           0x201146

; Message Object 10 FIFO/Gateway Pointer Register Low
CAN_MOFGPR10L  EQU           0x201144

; Message Object 110 FIFO/Gateway Pointer Register High
CAN_MOFGPR110H  EQU          0x201DC6

; Message Object 110 FIFO/Gateway Pointer Register Low
CAN_MOFGPR110L  EQU          0x201DC4

; Message Object 111 FIFO/Gateway Pointer Register High
CAN_MOFGPR111H  EQU          0x201DE6

; Message Object 111 FIFO/Gateway Pointer Register Low
CAN_MOFGPR111L  EQU          0x201DE4

; Message Object 112 FIFO/Gateway Pointer Register High
CAN_MOFGPR112H  EQU          0x201E06

; Message Object 112 FIFO/Gateway Pointer Register Low
CAN_MOFGPR112L  EQU          0x201E04

; Message Object 113 FIFO/Gateway Pointer Register High
CAN_MOFGPR113H  EQU          0x201E26

; Message Object 113 FIFO/Gateway Pointer Register Low
CAN_MOFGPR113L  EQU          0x201E24

; Message Object 114 FIFO/Gateway Pointer Register High
CAN_MOFGPR114H  EQU          0x201E46

; Message Object 114 FIFO/Gateway Pointer Register Low
CAN_MOFGPR114L  EQU          0x201E44

; Message Object 115 FIFO/Gateway Pointer Register High
CAN_MOFGPR115H  EQU          0x201E66

; Message Object 115 FIFO/Gateway Pointer Register Low
CAN_MOFGPR115L  EQU          0x201E64

; Message Object 116 FIFO/Gateway Pointer Register High
CAN_MOFGPR116H  EQU          0x201E86

; Message Object 116 FIFO/Gateway Pointer Register Low
CAN_MOFGPR116L  EQU          0x201E84

; Message Object 117 FIFO/Gateway Pointer Register High
CAN_MOFGPR117H  EQU          0x201EA6

; Message Object 117 FIFO/Gateway Pointer Register Low
CAN_MOFGPR117L  EQU          0x201EA4

; Message Object 118 FIFO/Gateway Pointer Register High
CAN_MOFGPR118H  EQU          0x201EC6

; Message Object 118 FIFO/Gateway Pointer Register Low
CAN_MOFGPR118L  EQU          0x201EC4

; Message Object 119 FIFO/Gateway Pointer Register High
CAN_MOFGPR119H  EQU          0x201EE6

; Message Object 119 FIFO/Gateway Pointer Register Low
CAN_MOFGPR119L  EQU          0x201EE4

; Message Object 11 FIFO/Gateway Pointer Register High
CAN_MOFGPR11H  EQU           0x201166

; Message Object 11 FIFO/Gateway Pointer Register Low
CAN_MOFGPR11L  EQU           0x201164

; Message Object 120 FIFO/Gateway Pointer Register High
CAN_MOFGPR120H  EQU          0x201F06

; Message Object 120 FIFO/Gateway Pointer Register Low
CAN_MOFGPR120L  EQU          0x201F04

; Message Object 121 FIFO/Gateway Pointer Register High
CAN_MOFGPR121H  EQU          0x201F26

; Message Object 121 FIFO/Gateway Pointer Register Low
CAN_MOFGPR121L  EQU          0x201F24

; Message Object 122 FIFO/Gateway Pointer Register High
CAN_MOFGPR122H  EQU          0x201F46

; Message Object 122 FIFO/Gateway Pointer Register Low
CAN_MOFGPR122L  EQU          0x201F44

; Message Object 123 FIFO/Gateway Pointer Register High
CAN_MOFGPR123H  EQU          0x201F66

; Message Object 123 FIFO/Gateway Pointer Register Low
CAN_MOFGPR123L  EQU          0x201F64

; Message Object 124 FIFO/Gateway Pointer Register High
CAN_MOFGPR124H  EQU          0x201F86

; Message Object 124 FIFO/Gateway Pointer Register Low
CAN_MOFGPR124L  EQU          0x201F84

; Message Object 125 FIFO/Gateway Pointer Register High
CAN_MOFGPR125H  EQU          0x201FA6

; Message Object 125 FIFO/Gateway Pointer Register Low
CAN_MOFGPR125L  EQU          0x201FA4

; Message Object 126 FIFO/Gateway Pointer Register High
CAN_MOFGPR126H  EQU          0x201FC6

; Message Object 126 FIFO/Gateway Pointer Register Low
CAN_MOFGPR126L  EQU          0x201FC4

; Message Object 127 FIFO/Gateway Pointer Register High
CAN_MOFGPR127H  EQU          0x201FE6

; Message Object 127 FIFO/Gateway Pointer Register Low
CAN_MOFGPR127L  EQU          0x201FE4

; Message Object 12 FIFO/Gateway Pointer Register High
CAN_MOFGPR12H  EQU           0x201186

; Message Object 12 FIFO/Gateway Pointer Register Low
CAN_MOFGPR12L  EQU           0x201184

; Message Object 13 FIFO/Gateway Pointer Register High
CAN_MOFGPR13H  EQU           0x2011A6

; Message Object 13 FIFO/Gateway Pointer Register Low
CAN_MOFGPR13L  EQU           0x2011A4

; Message Object 14 FIFO/Gateway Pointer Register High
CAN_MOFGPR14H  EQU           0x2011C6

; Message Object 14 FIFO/Gateway Pointer Register Low
CAN_MOFGPR14L  EQU           0x2011C4

; Message Object 15 FIFO/Gateway Pointer Register High
CAN_MOFGPR15H  EQU           0x2011E6

; Message Object 15 FIFO/Gateway Pointer Register Low
CAN_MOFGPR15L  EQU           0x2011E4

; Message Object 16 FIFO/Gateway Pointer Register High
CAN_MOFGPR16H  EQU           0x201206

; Message Object 16 FIFO/Gateway Pointer Register Low
CAN_MOFGPR16L  EQU           0x201204

; Message Object 17 FIFO/Gateway Pointer Register High
CAN_MOFGPR17H  EQU           0x201226

; Message Object 17 FIFO/Gateway Pointer Register Low
CAN_MOFGPR17L  EQU           0x201224

; Message Object 18 FIFO/Gateway Pointer Register High
CAN_MOFGPR18H  EQU           0x201246

; Message Object 18 FIFO/Gateway Pointer Register Low
CAN_MOFGPR18L  EQU           0x201244

; Message Object 19 FIFO/Gateway Pointer Register High
CAN_MOFGPR19H  EQU           0x201266

; Message Object 19 FIFO/Gateway Pointer Register Low
CAN_MOFGPR19L  EQU           0x201264

; Message Object 1 FIFO/Gateway Pointer Register High
CAN_MOFGPR1H  EQU            0x201026

; Message Object 1 FIFO/Gateway Pointer Register Low
CAN_MOFGPR1L  EQU            0x201024

; Message Object 20 FIFO/Gateway Pointer Register High
CAN_MOFGPR20H  EQU           0x201286

; Message Object 20 FIFO/Gateway Pointer Register Low
CAN_MOFGPR20L  EQU           0x201284

; Message Object 21 FIFO/Gateway Pointer Register High
CAN_MOFGPR21H  EQU           0x2012A6

; Message Object 21 FIFO/Gateway Pointer Register Low
CAN_MOFGPR21L  EQU           0x2012A4

; Message Object 22 FIFO/Gateway Pointer Register High
CAN_MOFGPR22H  EQU           0x2012C6

; Message Object 22 FIFO/Gateway Pointer Register Low
CAN_MOFGPR22L  EQU           0x2012C4

; Message Object 23 FIFO/Gateway Pointer Register High
CAN_MOFGPR23H  EQU           0x2012E6

; Message Object 23 FIFO/Gateway Pointer Register Low
CAN_MOFGPR23L  EQU           0x2012E4

; Message Object 24 FIFO/Gateway Pointer Register High
CAN_MOFGPR24H  EQU           0x201306

; Message Object 24 FIFO/Gateway Pointer Register Low
CAN_MOFGPR24L  EQU           0x201304

; Message Object 25 FIFO/Gateway Pointer Register High
CAN_MOFGPR25H  EQU           0x201326

; Message Object 25 FIFO/Gateway Pointer Register Low
CAN_MOFGPR25L  EQU           0x201324

; Message Object 26 FIFO/Gateway Pointer Register High
CAN_MOFGPR26H  EQU           0x201346

; Message Object 26 FIFO/Gateway Pointer Register Low
CAN_MOFGPR26L  EQU           0x201344

; Message Object 27 FIFO/Gateway Pointer Register High
CAN_MOFGPR27H  EQU           0x201366

; Message Object 27 FIFO/Gateway Pointer Register Low
CAN_MOFGPR27L  EQU           0x201364

; Message Object 28 FIFO/Gateway Pointer Register High
CAN_MOFGPR28H  EQU           0x201386

; Message Object 28 FIFO/Gateway Pointer Register Low
CAN_MOFGPR28L  EQU           0x201384

; Message Object 29 FIFO/Gateway Pointer Register High
CAN_MOFGPR29H  EQU           0x2013A6

; Message Object 29 FIFO/Gateway Pointer Register Low
CAN_MOFGPR29L  EQU           0x2013A4

; Message Object 2 FIFO/Gateway Pointer Register High
CAN_MOFGPR2H  EQU            0x201046

; Message Object 2 FIFO/Gateway Pointer Register Low
CAN_MOFGPR2L  EQU            0x201044

; Message Object 30 FIFO/Gateway Pointer Register High
CAN_MOFGPR30H  EQU           0x2013C6

; Message Object 30 FIFO/Gateway Pointer Register Low
CAN_MOFGPR30L  EQU           0x2013C4

; Message Object 31 FIFO/Gateway Pointer Register High
CAN_MOFGPR31H  EQU           0x2013E6

; Message Object 31 FIFO/Gateway Pointer Register Low
CAN_MOFGPR31L  EQU           0x2013E4

; Message Object 32 FIFO/Gateway Pointer Register High
CAN_MOFGPR32H  EQU           0x201406

; Message Object 32 FIFO/Gateway Pointer Register Low
CAN_MOFGPR32L  EQU           0x201404

; Message Object 33 FIFO/Gateway Pointer Register High
CAN_MOFGPR33H  EQU           0x201426

; Message Object 33 FIFO/Gateway Pointer Register Low
CAN_MOFGPR33L  EQU           0x201424

; Message Object 34 FIFO/Gateway Pointer Register High
CAN_MOFGPR34H  EQU           0x201446

; Message Object 34 FIFO/Gateway Pointer Register Low
CAN_MOFGPR34L  EQU           0x201444

; Message Object 35 FIFO/Gateway Pointer Register High
CAN_MOFGPR35H  EQU           0x201466

; Message Object 35 FIFO/Gateway Pointer Register Low
CAN_MOFGPR35L  EQU           0x201464

; Message Object 36 FIFO/Gateway Pointer Register High
CAN_MOFGPR36H  EQU           0x201486

; Message Object 36 FIFO/Gateway Pointer Register Low
CAN_MOFGPR36L  EQU           0x201484

; Message Object 37 FIFO/Gateway Pointer Register High
CAN_MOFGPR37H  EQU           0x2014A6

; Message Object 37 FIFO/Gateway Pointer Register Low
CAN_MOFGPR37L  EQU           0x2014A4

; Message Object 38 FIFO/Gateway Pointer Register High
CAN_MOFGPR38H  EQU           0x2014C6

; Message Object 38 FIFO/Gateway Pointer Register Low
CAN_MOFGPR38L  EQU           0x2014C4

; Message Object 39 FIFO/Gateway Pointer Register High
CAN_MOFGPR39H  EQU           0x2014E6

; Message Object 39 FIFO/Gateway Pointer Register Low
CAN_MOFGPR39L  EQU           0x2014E4

; Message Object 3 FIFO/Gateway Pointer Register High
CAN_MOFGPR3H  EQU            0x201066

; Message Object 3 FIFO/Gateway Pointer Register Low
CAN_MOFGPR3L  EQU            0x201064

; Message Object 40 FIFO/Gateway Pointer Register High
CAN_MOFGPR40H  EQU           0x201506

; Message Object 40 FIFO/Gateway Pointer Register Low
CAN_MOFGPR40L  EQU           0x201504

; Message Object 41 FIFO/Gateway Pointer Register High
CAN_MOFGPR41H  EQU           0x201526

; Message Object 41 FIFO/Gateway Pointer Register Low
CAN_MOFGPR41L  EQU           0x201524

; Message Object 42 FIFO/Gateway Pointer Register High
CAN_MOFGPR42H  EQU           0x201546

; Message Object 42 FIFO/Gateway Pointer Register Low
CAN_MOFGPR42L  EQU           0x201544

; Message Object 43 FIFO/Gateway Pointer Register High
CAN_MOFGPR43H  EQU           0x201566

; Message Object 43 FIFO/Gateway Pointer Register Low
CAN_MOFGPR43L  EQU           0x201564

; Message Object 44 FIFO/Gateway Pointer Register High
CAN_MOFGPR44H  EQU           0x201586

; Message Object 44 FIFO/Gateway Pointer Register Low
CAN_MOFGPR44L  EQU           0x201584

; Message Object 45 FIFO/Gateway Pointer Register High
CAN_MOFGPR45H  EQU           0x2015A6

; Message Object 45 FIFO/Gateway Pointer Register Low
CAN_MOFGPR45L  EQU           0x2015A4

; Message Object 46 FIFO/Gateway Pointer Register High
CAN_MOFGPR46H  EQU           0x2015C6

; Message Object 46 FIFO/Gateway Pointer Register Low
CAN_MOFGPR46L  EQU           0x2015C4

; Message Object 47 FIFO/Gateway Pointer Register High
CAN_MOFGPR47H  EQU           0x2015E6

; Message Object 47 FIFO/Gateway Pointer Register Low
CAN_MOFGPR47L  EQU           0x2015E4

; Message Object 48 FIFO/Gateway Pointer Register High
CAN_MOFGPR48H  EQU           0x201606

; Message Object 48 FIFO/Gateway Pointer Register Low
CAN_MOFGPR48L  EQU           0x201604

; Message Object 49 FIFO/Gateway Pointer Register High
CAN_MOFGPR49H  EQU           0x201626

; Message Object 49 FIFO/Gateway Pointer Register Low
CAN_MOFGPR49L  EQU           0x201624

; Message Object 4 FIFO/Gateway Pointer Register High
CAN_MOFGPR4H  EQU            0x201086

; Message Object 4 FIFO/Gateway Pointer Register Low
CAN_MOFGPR4L  EQU            0x201084

; Message Object 50 FIFO/Gateway Pointer Register High
CAN_MOFGPR50H  EQU           0x201646

; Message Object 50 FIFO/Gateway Pointer Register Low
CAN_MOFGPR50L  EQU           0x201644

; Message Object 51 FIFO/Gateway Pointer Register High
CAN_MOFGPR51H  EQU           0x201666

; Message Object 51 FIFO/Gateway Pointer Register Low
CAN_MOFGPR51L  EQU           0x201664

; Message Object 52 FIFO/Gateway Pointer Register High
CAN_MOFGPR52H  EQU           0x201686

; Message Object 52 FIFO/Gateway Pointer Register Low
CAN_MOFGPR52L  EQU           0x201684

; Message Object 53 FIFO/Gateway Pointer Register High
CAN_MOFGPR53H  EQU           0x2016A6

; Message Object 53 FIFO/Gateway Pointer Register Low
CAN_MOFGPR53L  EQU           0x2016A4

; Message Object 54 FIFO/Gateway Pointer Register High
CAN_MOFGPR54H  EQU           0x2016C6

; Message Object 54 FIFO/Gateway Pointer Register Low
CAN_MOFGPR54L  EQU           0x2016C4

; Message Object 55 FIFO/Gateway Pointer Register High
CAN_MOFGPR55H  EQU           0x2016E6

; Message Object 55 FIFO/Gateway Pointer Register Low
CAN_MOFGPR55L  EQU           0x2016E4

; Message Object 56 FIFO/Gateway Pointer Register High
CAN_MOFGPR56H  EQU           0x201706

; Message Object 56 FIFO/Gateway Pointer Register Low
CAN_MOFGPR56L  EQU           0x201704

; Message Object 57 FIFO/Gateway Pointer Register High
CAN_MOFGPR57H  EQU           0x201726

; Message Object 57 FIFO/Gateway Pointer Register Low
CAN_MOFGPR57L  EQU           0x201724

; Message Object 58 FIFO/Gateway Pointer Register High
CAN_MOFGPR58H  EQU           0x201746

; Message Object 58 FIFO/Gateway Pointer Register Low
CAN_MOFGPR58L  EQU           0x201744

; Message Object 59 FIFO/Gateway Pointer Register High
CAN_MOFGPR59H  EQU           0x201766

; Message Object 59 FIFO/Gateway Pointer Register Low
CAN_MOFGPR59L  EQU           0x201764

; Message Object 5 FIFO/Gateway Pointer Register High
CAN_MOFGPR5H  EQU            0x2010A6

; Message Object 5 FIFO/Gateway Pointer Register Low
CAN_MOFGPR5L  EQU            0x2010A4

; Message Object 60 FIFO/Gateway Pointer Register High
CAN_MOFGPR60H  EQU           0x201786

; Message Object 60 FIFO/Gateway Pointer Register Low
CAN_MOFGPR60L  EQU           0x201784

; Message Object 61 FIFO/Gateway Pointer Register High
CAN_MOFGPR61H  EQU           0x2017A6

; Message Object 61 FIFO/Gateway Pointer Register Low
CAN_MOFGPR61L  EQU           0x2017A4

; Message Object 62 FIFO/Gateway Pointer Register High
CAN_MOFGPR62H  EQU           0x2017C6

; Message Object 62 FIFO/Gateway Pointer Register Low
CAN_MOFGPR62L  EQU           0x2017C4

; Message Object 63 FIFO/Gateway Pointer Register High
CAN_MOFGPR63H  EQU           0x2017E6

; Message Object 63 FIFO/Gateway Pointer Register Low
CAN_MOFGPR63L  EQU           0x2017E4

; Message Object 64 FIFO/Gateway Pointer Register High
CAN_MOFGPR64H  EQU           0x201806

; Message Object 64 FIFO/Gateway Pointer Register Low
CAN_MOFGPR64L  EQU           0x201804

; Message Object 65 FIFO/Gateway Pointer Register High
CAN_MOFGPR65H  EQU           0x201826

; Message Object 65 FIFO/Gateway Pointer Register Low
CAN_MOFGPR65L  EQU           0x201824

; Message Object 66 FIFO/Gateway Pointer Register High
CAN_MOFGPR66H  EQU           0x201846

; Message Object 66 FIFO/Gateway Pointer Register Low
CAN_MOFGPR66L  EQU           0x201844

; Message Object 67 FIFO/Gateway Pointer Register High
CAN_MOFGPR67H  EQU           0x201866

; Message Object 67 FIFO/Gateway Pointer Register Low
CAN_MOFGPR67L  EQU           0x201864

; Message Object 68 FIFO/Gateway Pointer Register High
CAN_MOFGPR68H  EQU           0x201886

; Message Object 68 FIFO/Gateway Pointer Register Low
CAN_MOFGPR68L  EQU           0x201884

; Message Object 69 FIFO/Gateway Pointer Register High
CAN_MOFGPR69H  EQU           0x2018A6

; Message Object 69 FIFO/Gateway Pointer Register Low
CAN_MOFGPR69L  EQU           0x2018A4

; Message Object 6 FIFO/Gateway Pointer Register High
CAN_MOFGPR6H  EQU            0x2010C6

; Message Object 6 FIFO/Gateway Pointer Register Low
CAN_MOFGPR6L  EQU            0x2010C4

; Message Object 70 FIFO/Gateway Pointer Register High
CAN_MOFGPR70H  EQU           0x2018C6

; Message Object 70 FIFO/Gateway Pointer Register Low
CAN_MOFGPR70L  EQU           0x2018C4

; Message Object 71 FIFO/Gateway Pointer Register High
CAN_MOFGPR71H  EQU           0x2018E6

; Message Object 71 FIFO/Gateway Pointer Register Low
CAN_MOFGPR71L  EQU           0x2018E4

; Message Object 72 FIFO/Gateway Pointer Register High
CAN_MOFGPR72H  EQU           0x201906

; Message Object 72 FIFO/Gateway Pointer Register Low
CAN_MOFGPR72L  EQU           0x201904

; Message Object 73 FIFO/Gateway Pointer Register High
CAN_MOFGPR73H  EQU           0x201926

; Message Object 73 FIFO/Gateway Pointer Register Low
CAN_MOFGPR73L  EQU           0x201924

; Message Object 74 FIFO/Gateway Pointer Register High
CAN_MOFGPR74H  EQU           0x201946

; Message Object 74 FIFO/Gateway Pointer Register Low
CAN_MOFGPR74L  EQU           0x201944

; Message Object 75 FIFO/Gateway Pointer Register High
CAN_MOFGPR75H  EQU           0x201966

; Message Object 75 FIFO/Gateway Pointer Register Low
CAN_MOFGPR75L  EQU           0x201964

; Message Object 76 FIFO/Gateway Pointer Register High
CAN_MOFGPR76H  EQU           0x201986

; Message Object 76 FIFO/Gateway Pointer Register Low
CAN_MOFGPR76L  EQU           0x201984

; Message Object 77 FIFO/Gateway Pointer Register High
CAN_MOFGPR77H  EQU           0x2019A6

; Message Object 77 FIFO/Gateway Pointer Register Low
CAN_MOFGPR77L  EQU           0x2019A4

; Message Object 78 FIFO/Gateway Pointer Register High
CAN_MOFGPR78H  EQU           0x2019C6

; Message Object 78 FIFO/Gateway Pointer Register Low
CAN_MOFGPR78L  EQU           0x2019C4

; Message Object 79 FIFO/Gateway Pointer Register High
CAN_MOFGPR79H  EQU           0x2019E6

; Message Object 79 FIFO/Gateway Pointer Register Low
CAN_MOFGPR79L  EQU           0x2019E4

; Message Object 7 FIFO/Gateway Pointer Register High
CAN_MOFGPR7H  EQU            0x2010E6

; Message Object 7 FIFO/Gateway Pointer Register Low
CAN_MOFGPR7L  EQU            0x2010E4

; Message Object 80 FIFO/Gateway Pointer Register High
CAN_MOFGPR80H  EQU           0x201A06

; Message Object 80 FIFO/Gateway Pointer Register Low
CAN_MOFGPR80L  EQU           0x201A04

; Message Object 81 FIFO/Gateway Pointer Register High
CAN_MOFGPR81H  EQU           0x201A26

; Message Object 81 FIFO/Gateway Pointer Register Low
CAN_MOFGPR81L  EQU           0x201A24

; Message Object 82 FIFO/Gateway Pointer Register High
CAN_MOFGPR82H  EQU           0x201A46

; Message Object 82 FIFO/Gateway Pointer Register Low
CAN_MOFGPR82L  EQU           0x201A44

; Message Object 83 FIFO/Gateway Pointer Register High
CAN_MOFGPR83H  EQU           0x201A66

; Message Object 83 FIFO/Gateway Pointer Register Low
CAN_MOFGPR83L  EQU           0x201A64

; Message Object 84 FIFO/Gateway Pointer Register High
CAN_MOFGPR84H  EQU           0x201A86

; Message Object 84 FIFO/Gateway Pointer Register Low
CAN_MOFGPR84L  EQU           0x201A84

; Message Object 85 FIFO/Gateway Pointer Register High
CAN_MOFGPR85H  EQU           0x201AA6

; Message Object 85 FIFO/Gateway Pointer Register Low
CAN_MOFGPR85L  EQU           0x201AA4

; Message Object 86 FIFO/Gateway Pointer Register High
CAN_MOFGPR86H  EQU           0x201AC6

; Message Object 86 FIFO/Gateway Pointer Register Low
CAN_MOFGPR86L  EQU           0x201AC4

; Message Object 87 FIFO/Gateway Pointer Register High
CAN_MOFGPR87H  EQU           0x201AE6

; Message Object 87 FIFO/Gateway Pointer Register Low
CAN_MOFGPR87L  EQU           0x201AE4

; Message Object 88 FIFO/Gateway Pointer Register High
CAN_MOFGPR88H  EQU           0x201B06

; Message Object 88 FIFO/Gateway Pointer Register Low
CAN_MOFGPR88L  EQU           0x201B04

; Message Object 89 FIFO/Gateway Pointer Register High
CAN_MOFGPR89H  EQU           0x201B26

; Message Object 89 FIFO/Gateway Pointer Register Low
CAN_MOFGPR89L  EQU           0x201B24

; Message Object 8 FIFO/Gateway Pointer Register High
CAN_MOFGPR8H  EQU            0x201106

; Message Object 8 FIFO/Gateway Pointer Register Low
CAN_MOFGPR8L  EQU            0x201104

; Message Object 90 FIFO/Gateway Pointer Register High
CAN_MOFGPR90H  EQU           0x201B46

; Message Object 90 FIFO/Gateway Pointer Register Low
CAN_MOFGPR90L  EQU           0x201B44

; Message Object 91 FIFO/Gateway Pointer Register High
CAN_MOFGPR91H  EQU           0x201B66

; Message Object 91 FIFO/Gateway Pointer Register Low
CAN_MOFGPR91L  EQU           0x201B64

; Message Object 92 FIFO/Gateway Pointer Register High
CAN_MOFGPR92H  EQU           0x201B86

; Message Object 92 FIFO/Gateway Pointer Register Low
CAN_MOFGPR92L  EQU           0x201B84

; Message Object 93 FIFO/Gateway Pointer Register High
CAN_MOFGPR93H  EQU           0x201BA6

; Message Object 93 FIFO/Gateway Pointer Register Low
CAN_MOFGPR93L  EQU           0x201BA4

; Message Object 94 FIFO/Gateway Pointer Register High
CAN_MOFGPR94H  EQU           0x201BC6

; Message Object 94 FIFO/Gateway Pointer Register Low
CAN_MOFGPR94L  EQU           0x201BC4

; Message Object 95 FIFO/Gateway Pointer Register High
CAN_MOFGPR95H  EQU           0x201BE6

; Message Object 95 FIFO/Gateway Pointer Register Low
CAN_MOFGPR95L  EQU           0x201BE4

; Message Object 96 FIFO/Gateway Pointer Register High
CAN_MOFGPR96H  EQU           0x201C06

; Message Object 96 FIFO/Gateway Pointer Register Low
CAN_MOFGPR96L  EQU           0x201C04

; Message Object 97 FIFO/Gateway Pointer Register High
CAN_MOFGPR97H  EQU           0x201C26

; Message Object 97 FIFO/Gateway Pointer Register Low
CAN_MOFGPR97L  EQU           0x201C24

; Message Object 98 FIFO/Gateway Pointer Register High
CAN_MOFGPR98H  EQU           0x201C46

; Message Object 98 FIFO/Gateway Pointer Register Low
CAN_MOFGPR98L  EQU           0x201C44

; Message Object 99 FIFO/Gateway Pointer Register High
CAN_MOFGPR99H  EQU           0x201C66

; Message Object 99 FIFO/Gateway Pointer Register Low
CAN_MOFGPR99L  EQU           0x201C64

; Message Object 9 FIFO/Gateway Pointer Register High
CAN_MOFGPR9H  EQU            0x201126

; Message Object 9 FIFO/Gateway Pointer Register Low
CAN_MOFGPR9L  EQU            0x201124

; Message Object 0 Interrupt Pointer Register High
CAN_MOIPR0H  EQU             0x20100A

; Message Object 0 Interrupt Pointer Register Low
CAN_MOIPR0L  EQU             0x201008

; Message Object 100 Interrupt Pointer Register High
CAN_MOIPR100H  EQU           0x201C8A

; Message Object 100 Interrupt Pointer Register Low
CAN_MOIPR100L  EQU           0x201C88

; Message Object 101 Interrupt Pointer Register High
CAN_MOIPR101H  EQU           0x201CAA

; Message Object 101 Interrupt Pointer Register Low
CAN_MOIPR101L  EQU           0x201CA8

; Message Object 102 Interrupt Pointer Register High
CAN_MOIPR102H  EQU           0x201CCA

; Message Object 102 Interrupt Pointer Register Low
CAN_MOIPR102L  EQU           0x201CC8

; Message Object 103 Interrupt Pointer Register High
CAN_MOIPR103H  EQU           0x201CEA

; Message Object 103 Interrupt Pointer Register Low
CAN_MOIPR103L  EQU           0x201CE8

; Message Object 104 Interrupt Pointer Register High
CAN_MOIPR104H  EQU           0x201D0A

; Message Object 104 Interrupt Pointer Register Low
CAN_MOIPR104L  EQU           0x201D08

; Message Object 105 Interrupt Pointer Register High
CAN_MOIPR105H  EQU           0x201D2A

; Message Object 105 Interrupt Pointer Register Low
CAN_MOIPR105L  EQU           0x201D28

; Message Object 106 Interrupt Pointer Register High
CAN_MOIPR106H  EQU           0x201D4A

; Message Object 106 Interrupt Pointer Register Low
CAN_MOIPR106L  EQU           0x201D48

; Message Object 107 Interrupt Pointer Register High
CAN_MOIPR107H  EQU           0x201D6A

; Message Object 107 Interrupt Pointer Register Low
CAN_MOIPR107L  EQU           0x201D68

; Message Object 108 Interrupt Pointer Register High
CAN_MOIPR108H  EQU           0x201D8A

; Message Object 108 Interrupt Pointer Register Low
CAN_MOIPR108L  EQU           0x201D88

; Message Object 109 Interrupt Pointer Register High
CAN_MOIPR109H  EQU           0x201DAA

; Message Object 109 Interrupt Pointer Register Low
CAN_MOIPR109L  EQU           0x201DA8

; Message Object 10 Interrupt Pointer Register High
CAN_MOIPR10H  EQU            0x20114A

; Message Object 10 Interrupt Pointer Register Low
CAN_MOIPR10L  EQU            0x201148

; Message Object 110 Interrupt Pointer Register High
CAN_MOIPR110H  EQU           0x201DCA

; Message Object 110 Interrupt Pointer Register Low
CAN_MOIPR110L  EQU           0x201DC8

; Message Object 111 Interrupt Pointer Register High
CAN_MOIPR111H  EQU           0x201DEA

; Message Object 111 Interrupt Pointer Register Low
CAN_MOIPR111L  EQU           0x201DE8

; Message Object 112 Interrupt Pointer Register High
CAN_MOIPR112H  EQU           0x201E0A

; Message Object 112 Interrupt Pointer Register Low
CAN_MOIPR112L  EQU           0x201E08

; Message Object 113 Interrupt Pointer Register High
CAN_MOIPR113H  EQU           0x201E2A

; Message Object 113 Interrupt Pointer Register Low
CAN_MOIPR113L  EQU           0x201E28

; Message Object 114 Interrupt Pointer Register High
CAN_MOIPR114H  EQU           0x201E4A

; Message Object 114 Interrupt Pointer Register Low
CAN_MOIPR114L  EQU           0x201E48

; Message Object 115 Interrupt Pointer Register High
CAN_MOIPR115H  EQU           0x201E6A

; Message Object 115 Interrupt Pointer Register Low
CAN_MOIPR115L  EQU           0x201E68

; Message Object 116 Interrupt Pointer Register High
CAN_MOIPR116H  EQU           0x201E8A

; Message Object 116 Interrupt Pointer Register Low
CAN_MOIPR116L  EQU           0x201E88

; Message Object 117 Interrupt Pointer Register High
CAN_MOIPR117H  EQU           0x201EAA

; Message Object 117 Interrupt Pointer Register Low
CAN_MOIPR117L  EQU           0x201EA8

; Message Object 118 Interrupt Pointer Register High
CAN_MOIPR118H  EQU           0x201ECA

; Message Object 118 Interrupt Pointer Register Low
CAN_MOIPR118L  EQU           0x201EC8

; Message Object 119 Interrupt Pointer Register High
CAN_MOIPR119H  EQU           0x201EEA

; Message Object 119 Interrupt Pointer Register Low
CAN_MOIPR119L  EQU           0x201EE8

; Message Object 11 Interrupt Pointer Register High
CAN_MOIPR11H  EQU            0x20116A

; Message Object 11 Interrupt Pointer Register Low
CAN_MOIPR11L  EQU            0x201168

; Message Object 120 Interrupt Pointer Register High
CAN_MOIPR120H  EQU           0x201F0A

; Message Object 120 Interrupt Pointer Register Low
CAN_MOIPR120L  EQU           0x201F08

; Message Object 121 Interrupt Pointer Register High
CAN_MOIPR121H  EQU           0x201F2A

; Message Object 121 Interrupt Pointer Register Low
CAN_MOIPR121L  EQU           0x201F28

; Message Object 122 Interrupt Pointer Register High
CAN_MOIPR122H  EQU           0x201F4A

; Message Object 122 Interrupt Pointer Register Low
CAN_MOIPR122L  EQU           0x201F48

; Message Object 123 Interrupt Pointer Register High
CAN_MOIPR123H  EQU           0x201F6A

; Message Object 123 Interrupt Pointer Register Low
CAN_MOIPR123L  EQU           0x201F68

; Message Object 124 Interrupt Pointer Register High
CAN_MOIPR124H  EQU           0x201F8A

; Message Object 124 Interrupt Pointer Register Low
CAN_MOIPR124L  EQU           0x201F88

; Message Object 125 Interrupt Pointer Register High
CAN_MOIPR125H  EQU           0x201FAA

; Message Object 125 Interrupt Pointer Register Low
CAN_MOIPR125L  EQU           0x201FA8

; Message Object 126 Interrupt Pointer Register High
CAN_MOIPR126H  EQU           0x201FCA

; Message Object 126 Interrupt Pointer Register Low
CAN_MOIPR126L  EQU           0x201FC8

; Message Object 127 Interrupt Pointer Register High
CAN_MOIPR127H  EQU           0x201FEA

; Message Object 127 Interrupt Pointer Register Low
CAN_MOIPR127L  EQU           0x201FE8

; Message Object 12 Interrupt Pointer Register High
CAN_MOIPR12H  EQU            0x20118A

; Message Object 12 Interrupt Pointer Register Low
CAN_MOIPR12L  EQU            0x201188

; Message Object 13 Interrupt Pointer Register High
CAN_MOIPR13H  EQU            0x2011AA

; Message Object 13 Interrupt Pointer Register Low
CAN_MOIPR13L  EQU            0x2011A8

; Message Object 14 Interrupt Pointer Register High
CAN_MOIPR14H  EQU            0x2011CA

; Message Object 14 Interrupt Pointer Register Low
CAN_MOIPR14L  EQU            0x2011C8

; Message Object 15 Interrupt Pointer Register High
CAN_MOIPR15H  EQU            0x2011EA

; Message Object 15 Interrupt Pointer Register Low
CAN_MOIPR15L  EQU            0x2011E8

; Message Object 16 Interrupt Pointer Register High
CAN_MOIPR16H  EQU            0x20120A

; Message Object 16 Interrupt Pointer Register Low
CAN_MOIPR16L  EQU            0x201208

; Message Object 17 Interrupt Pointer Register High
CAN_MOIPR17H  EQU            0x20122A

; Message Object 17 Interrupt Pointer Register Low
CAN_MOIPR17L  EQU            0x201228

; Message Object 18 Interrupt Pointer Register High
CAN_MOIPR18H  EQU            0x20124A

; Message Object 18 Interrupt Pointer Register Low
CAN_MOIPR18L  EQU            0x201248

; Message Object 19 Interrupt Pointer Register High
CAN_MOIPR19H  EQU            0x20126A

; Message Object 19 Interrupt Pointer Register Low
CAN_MOIPR19L  EQU            0x201268

; Message Object 1 Interrupt Pointer Register High
CAN_MOIPR1H  EQU             0x20102A

; Message Object 1 Interrupt Pointer Register Low
CAN_MOIPR1L  EQU             0x201028

; Message Object 20 Interrupt Pointer Register High
CAN_MOIPR20H  EQU            0x20128A

; Message Object 20 Interrupt Pointer Register Low
CAN_MOIPR20L  EQU            0x201288

; Message Object 21 Interrupt Pointer Register High
CAN_MOIPR21H  EQU            0x2012AA

; Message Object 21 Interrupt Pointer Register Low
CAN_MOIPR21L  EQU            0x2012A8

; Message Object 22 Interrupt Pointer Register High
CAN_MOIPR22H  EQU            0x2012CA

; Message Object 22 Interrupt Pointer Register Low
CAN_MOIPR22L  EQU            0x2012C8

; Message Object 23 Interrupt Pointer Register High
CAN_MOIPR23H  EQU            0x2012EA

; Message Object 23 Interrupt Pointer Register Low
CAN_MOIPR23L  EQU            0x2012E8

; Message Object 24 Interrupt Pointer Register High
CAN_MOIPR24H  EQU            0x20130A

; Message Object 24 Interrupt Pointer Register Low
CAN_MOIPR24L  EQU            0x201308

; Message Object 25 Interrupt Pointer Register High
CAN_MOIPR25H  EQU            0x20132A

; Message Object 25 Interrupt Pointer Register Low
CAN_MOIPR25L  EQU            0x201328

; Message Object 26 Interrupt Pointer Register High
CAN_MOIPR26H  EQU            0x20134A

; Message Object 26 Interrupt Pointer Register Low
CAN_MOIPR26L  EQU            0x201348

; Message Object 27 Interrupt Pointer Register High
CAN_MOIPR27H  EQU            0x20136A

; Message Object 27 Interrupt Pointer Register Low
CAN_MOIPR27L  EQU            0x201368

; Message Object 28 Interrupt Pointer Register High
CAN_MOIPR28H  EQU            0x20138A

; Message Object 28 Interrupt Pointer Register Low
CAN_MOIPR28L  EQU            0x201388

; Message Object 29 Interrupt Pointer Register High
CAN_MOIPR29H  EQU            0x2013AA

; Message Object 29 Interrupt Pointer Register Low
CAN_MOIPR29L  EQU            0x2013A8

; Message Object 2 Interrupt Pointer Register High
CAN_MOIPR2H  EQU             0x20104A

; Message Object 2 Interrupt Pointer Register Low
CAN_MOIPR2L  EQU             0x201048

; Message Object 30 Interrupt Pointer Register High
CAN_MOIPR30H  EQU            0x2013CA

; Message Object 30 Interrupt Pointer Register Low
CAN_MOIPR30L  EQU            0x2013C8

; Message Object 31 Interrupt Pointer Register High
CAN_MOIPR31H  EQU            0x2013EA

; Message Object 31 Interrupt Pointer Register Low
CAN_MOIPR31L  EQU            0x2013E8

; Message Object 32 Interrupt Pointer Register High
CAN_MOIPR32H  EQU            0x20140A

; Message Object 32 Interrupt Pointer Register Low
CAN_MOIPR32L  EQU            0x201408

; Message Object 33 Interrupt Pointer Register High
CAN_MOIPR33H  EQU            0x20142A

; Message Object 33 Interrupt Pointer Register Low
CAN_MOIPR33L  EQU            0x201428

; Message Object 34 Interrupt Pointer Register High
CAN_MOIPR34H  EQU            0x20144A

; Message Object 34 Interrupt Pointer Register Low
CAN_MOIPR34L  EQU            0x201448

; Message Object 35 Interrupt Pointer Register High
CAN_MOIPR35H  EQU            0x20146A

; Message Object 35 Interrupt Pointer Register Low
CAN_MOIPR35L  EQU            0x201468

; Message Object 36 Interrupt Pointer Register High
CAN_MOIPR36H  EQU            0x20148A

; Message Object 36 Interrupt Pointer Register Low
CAN_MOIPR36L  EQU            0x201488

; Message Object 37 Interrupt Pointer Register High
CAN_MOIPR37H  EQU            0x2014AA

; Message Object 37 Interrupt Pointer Register Low
CAN_MOIPR37L  EQU            0x2014A8

; Message Object 38 Interrupt Pointer Register High
CAN_MOIPR38H  EQU            0x2014CA

; Message Object 38 Interrupt Pointer Register Low
CAN_MOIPR38L  EQU            0x2014C8

; Message Object 39 Interrupt Pointer Register High
CAN_MOIPR39H  EQU            0x2014EA

; Message Object 39 Interrupt Pointer Register Low
CAN_MOIPR39L  EQU            0x2014E8

; Message Object 3 Interrupt Pointer Register High
CAN_MOIPR3H  EQU             0x20106A

; Message Object 3 Interrupt Pointer Register Low
CAN_MOIPR3L  EQU             0x201068

; Message Object 40 Interrupt Pointer Register High
CAN_MOIPR40H  EQU            0x20150A

; Message Object 40 Interrupt Pointer Register Low
CAN_MOIPR40L  EQU            0x201508

; Message Object 41 Interrupt Pointer Register High
CAN_MOIPR41H  EQU            0x20152A

; Message Object 41 Interrupt Pointer Register Low
CAN_MOIPR41L  EQU            0x201528

; Message Object 42 Interrupt Pointer Register High
CAN_MOIPR42H  EQU            0x20154A

; Message Object 42 Interrupt Pointer Register Low
CAN_MOIPR42L  EQU            0x201548

; Message Object 43 Interrupt Pointer Register High
CAN_MOIPR43H  EQU            0x20156A

; Message Object 43 Interrupt Pointer Register Low
CAN_MOIPR43L  EQU            0x201568

; Message Object 44 Interrupt Pointer Register High
CAN_MOIPR44H  EQU            0x20158A

; Message Object 44 Interrupt Pointer Register Low
CAN_MOIPR44L  EQU            0x201588

; Message Object 45 Interrupt Pointer Register High
CAN_MOIPR45H  EQU            0x2015AA

; Message Object 45 Interrupt Pointer Register Low
CAN_MOIPR45L  EQU            0x2015A8

; Message Object 46 Interrupt Pointer Register High
CAN_MOIPR46H  EQU            0x2015CA

; Message Object 46 Interrupt Pointer Register Low
CAN_MOIPR46L  EQU            0x2015C8

; Message Object 47 Interrupt Pointer Register High
CAN_MOIPR47H  EQU            0x2015EA

; Message Object 47 Interrupt Pointer Register Low
CAN_MOIPR47L  EQU            0x2015E8

; Message Object 48 Interrupt Pointer Register High
CAN_MOIPR48H  EQU            0x20160A

; Message Object 48 Interrupt Pointer Register Low
CAN_MOIPR48L  EQU            0x201608

; Message Object 49 Interrupt Pointer Register High
CAN_MOIPR49H  EQU            0x20162A

; Message Object 49 Interrupt Pointer Register Low
CAN_MOIPR49L  EQU            0x201628

; Message Object 4 Interrupt Pointer Register High
CAN_MOIPR4H  EQU             0x20108A

; Message Object 4 Interrupt Pointer Register Low
CAN_MOIPR4L  EQU             0x201088

; Message Object 50 Interrupt Pointer Register High
CAN_MOIPR50H  EQU            0x20164A

; Message Object 50 Interrupt Pointer Register Low
CAN_MOIPR50L  EQU            0x201648

; Message Object 51 Interrupt Pointer Register High
CAN_MOIPR51H  EQU            0x20166A

; Message Object 51 Interrupt Pointer Register Low
CAN_MOIPR51L  EQU            0x201668

; Message Object 52 Interrupt Pointer Register High
CAN_MOIPR52H  EQU            0x20168A

; Message Object 52 Interrupt Pointer Register Low
CAN_MOIPR52L  EQU            0x201688

; Message Object 53 Interrupt Pointer Register High
CAN_MOIPR53H  EQU            0x2016AA

; Message Object 53 Interrupt Pointer Register Low
CAN_MOIPR53L  EQU            0x2016A8

; Message Object 54 Interrupt Pointer Register High
CAN_MOIPR54H  EQU            0x2016CA

; Message Object 54 Interrupt Pointer Register Low
CAN_MOIPR54L  EQU            0x2016C8

; Message Object 55 Interrupt Pointer Register High
CAN_MOIPR55H  EQU            0x2016EA

; Message Object 55 Interrupt Pointer Register Low
CAN_MOIPR55L  EQU            0x2016E8

; Message Object 56 Interrupt Pointer Register High
CAN_MOIPR56H  EQU            0x20170A

; Message Object 56 Interrupt Pointer Register Low
CAN_MOIPR56L  EQU            0x201708

; Message Object 57 Interrupt Pointer Register High
CAN_MOIPR57H  EQU            0x20172A

; Message Object 57 Interrupt Pointer Register Low
CAN_MOIPR57L  EQU            0x201728

; Message Object 58 Interrupt Pointer Register High
CAN_MOIPR58H  EQU            0x20174A

; Message Object 58 Interrupt Pointer Register Low
CAN_MOIPR58L  EQU            0x201748

; Message Object 59 Interrupt Pointer Register High
CAN_MOIPR59H  EQU            0x20176A

; Message Object 59 Interrupt Pointer Register Low
CAN_MOIPR59L  EQU            0x201768

; Message Object 5 Interrupt Pointer Register High
CAN_MOIPR5H  EQU             0x2010AA

; Message Object 5 Interrupt Pointer Register Low
CAN_MOIPR5L  EQU             0x2010A8

; Message Object 60 Interrupt Pointer Register High
CAN_MOIPR60H  EQU            0x20178A

; Message Object 60 Interrupt Pointer Register Low
CAN_MOIPR60L  EQU            0x201788

; Message Object 61 Interrupt Pointer Register High
CAN_MOIPR61H  EQU            0x2017AA

; Message Object 61 Interrupt Pointer Register Low
CAN_MOIPR61L  EQU            0x2017A8

; Message Object 62 Interrupt Pointer Register High
CAN_MOIPR62H  EQU            0x2017CA

; Message Object 62 Interrupt Pointer Register Low
CAN_MOIPR62L  EQU            0x2017C8

; Message Object 63 Interrupt Pointer Register High
CAN_MOIPR63H  EQU            0x2017EA

; Message Object 63 Interrupt Pointer Register Low
CAN_MOIPR63L  EQU            0x2017E8

; Message Object 64 Interrupt Pointer Register High
CAN_MOIPR64H  EQU            0x20180A

; Message Object 64 Interrupt Pointer Register Low
CAN_MOIPR64L  EQU            0x201808

; Message Object 65 Interrupt Pointer Register High
CAN_MOIPR65H  EQU            0x20182A

; Message Object 65 Interrupt Pointer Register Low
CAN_MOIPR65L  EQU            0x201828

; Message Object 66 Interrupt Pointer Register High
CAN_MOIPR66H  EQU            0x20184A

; Message Object 66 Interrupt Pointer Register Low
CAN_MOIPR66L  EQU            0x201848

; Message Object 67 Interrupt Pointer Register High
CAN_MOIPR67H  EQU            0x20186A

; Message Object 67 Interrupt Pointer Register Low
CAN_MOIPR67L  EQU            0x201868

; Message Object 68 Interrupt Pointer Register High
CAN_MOIPR68H  EQU            0x20188A

; Message Object 68 Interrupt Pointer Register Low
CAN_MOIPR68L  EQU            0x201888

; Message Object 69 Interrupt Pointer Register High
CAN_MOIPR69H  EQU            0x2018AA

; Message Object 69 Interrupt Pointer Register Low
CAN_MOIPR69L  EQU            0x2018A8

; Message Object 6 Interrupt Pointer Register High
CAN_MOIPR6H  EQU             0x2010CA

; Message Object 6 Interrupt Pointer Register Low
CAN_MOIPR6L  EQU             0x2010C8

; Message Object 70 Interrupt Pointer Register High
CAN_MOIPR70H  EQU            0x2018CA

; Message Object 70 Interrupt Pointer Register Low
CAN_MOIPR70L  EQU            0x2018C8

; Message Object 71 Interrupt Pointer Register High
CAN_MOIPR71H  EQU            0x2018EA

; Message Object 71 Interrupt Pointer Register Low
CAN_MOIPR71L  EQU            0x2018E8

; Message Object 72 Interrupt Pointer Register High
CAN_MOIPR72H  EQU            0x20190A

; Message Object 72 Interrupt Pointer Register Low
CAN_MOIPR72L  EQU            0x201908

; Message Object 73 Interrupt Pointer Register High
CAN_MOIPR73H  EQU            0x20192A

; Message Object 73 Interrupt Pointer Register Low
CAN_MOIPR73L  EQU            0x201928

; Message Object 74 Interrupt Pointer Register High
CAN_MOIPR74H  EQU            0x20194A

; Message Object 74 Interrupt Pointer Register Low
CAN_MOIPR74L  EQU            0x201948

; Message Object 75 Interrupt Pointer Register High
CAN_MOIPR75H  EQU            0x20196A

; Message Object 75 Interrupt Pointer Register Low
CAN_MOIPR75L  EQU            0x201968

; Message Object 76 Interrupt Pointer Register High
CAN_MOIPR76H  EQU            0x20198A

; Message Object 76 Interrupt Pointer Register Low
CAN_MOIPR76L  EQU            0x201988

; Message Object 77 Interrupt Pointer Register High
CAN_MOIPR77H  EQU            0x2019AA

; Message Object 77 Interrupt Pointer Register Low
CAN_MOIPR77L  EQU            0x2019A8

; Message Object 78 Interrupt Pointer Register High
CAN_MOIPR78H  EQU            0x2019CA

; Message Object 78 Interrupt Pointer Register Low
CAN_MOIPR78L  EQU            0x2019C8

; Message Object 79 Interrupt Pointer Register High
CAN_MOIPR79H  EQU            0x2019EA

; Message Object 79 Interrupt Pointer Register Low
CAN_MOIPR79L  EQU            0x2019E8

; Message Object 7 Interrupt Pointer Register High
CAN_MOIPR7H  EQU             0x2010EA

; Message Object 7 Interrupt Pointer Register Low
CAN_MOIPR7L  EQU             0x2010E8

; Message Object 80 Interrupt Pointer Register High
CAN_MOIPR80H  EQU            0x201A0A

; Message Object 80 Interrupt Pointer Register Low
CAN_MOIPR80L  EQU            0x201A08

; Message Object 81 Interrupt Pointer Register High
CAN_MOIPR81H  EQU            0x201A2A

; Message Object 81 Interrupt Pointer Register Low
CAN_MOIPR81L  EQU            0x201A28

; Message Object 82 Interrupt Pointer Register High
CAN_MOIPR82H  EQU            0x201A4A

; Message Object 82 Interrupt Pointer Register Low
CAN_MOIPR82L  EQU            0x201A48

; Message Object 83 Interrupt Pointer Register High
CAN_MOIPR83H  EQU            0x201A6A

; Message Object 83 Interrupt Pointer Register Low
CAN_MOIPR83L  EQU            0x201A68

; Message Object 84 Interrupt Pointer Register High
CAN_MOIPR84H  EQU            0x201A8A

; Message Object 84 Interrupt Pointer Register Low
CAN_MOIPR84L  EQU            0x201A88

; Message Object 85 Interrupt Pointer Register High
CAN_MOIPR85H  EQU            0x201AAA

; Message Object 85 Interrupt Pointer Register Low
CAN_MOIPR85L  EQU            0x201AA8

; Message Object 86 Interrupt Pointer Register High
CAN_MOIPR86H  EQU            0x201ACA

; Message Object 86 Interrupt Pointer Register Low
CAN_MOIPR86L  EQU            0x201AC8

; Message Object 87 Interrupt Pointer Register High
CAN_MOIPR87H  EQU            0x201AEA

; Message Object 87 Interrupt Pointer Register Low
CAN_MOIPR87L  EQU            0x201AE8

; Message Object 88 Interrupt Pointer Register High
CAN_MOIPR88H  EQU            0x201B0A

; Message Object 88 Interrupt Pointer Register Low
CAN_MOIPR88L  EQU            0x201B08

; Message Object 89 Interrupt Pointer Register High
CAN_MOIPR89H  EQU            0x201B2A

; Message Object 89 Interrupt Pointer Register Low
CAN_MOIPR89L  EQU            0x201B28

; Message Object 8 Interrupt Pointer Register High
CAN_MOIPR8H  EQU             0x20110A

; Message Object 8 Interrupt Pointer Register Low
CAN_MOIPR8L  EQU             0x201108

; Message Object 90 Interrupt Pointer Register High
CAN_MOIPR90H  EQU            0x201B4A

; Message Object 90 Interrupt Pointer Register Low
CAN_MOIPR90L  EQU            0x201B48

; Message Object 91 Interrupt Pointer Register High
CAN_MOIPR91H  EQU            0x201B6A

; Message Object 91 Interrupt Pointer Register Low
CAN_MOIPR91L  EQU            0x201B68

; Message Object 92 Interrupt Pointer Register High
CAN_MOIPR92H  EQU            0x201B8A

; Message Object 92 Interrupt Pointer Register Low
CAN_MOIPR92L  EQU            0x201B88

; Message Object 93 Interrupt Pointer Register High
CAN_MOIPR93H  EQU            0x201BAA

; Message Object 93 Interrupt Pointer Register Low
CAN_MOIPR93L  EQU            0x201BA8

; Message Object 94 Interrupt Pointer Register High
CAN_MOIPR94H  EQU            0x201BCA

; Message Object 94 Interrupt Pointer Register Low
CAN_MOIPR94L  EQU            0x201BC8

; Message Object 95 Interrupt Pointer Register High
CAN_MOIPR95H  EQU            0x201BEA

; Message Object 95 Interrupt Pointer Register Low
CAN_MOIPR95L  EQU            0x201BE8

; Message Object 96 Interrupt Pointer Register High
CAN_MOIPR96H  EQU            0x201C0A

; Message Object 96 Interrupt Pointer Register Low
CAN_MOIPR96L  EQU            0x201C08

; Message Object 97 Interrupt Pointer Register High
CAN_MOIPR97H  EQU            0x201C2A

; Message Object 97 Interrupt Pointer Register Low
CAN_MOIPR97L  EQU            0x201C28

; Message Object 98 Interrupt Pointer Register High
CAN_MOIPR98H  EQU            0x201C4A

; Message Object 98 Interrupt Pointer Register Low
CAN_MOIPR98L  EQU            0x201C48

; Message Object 99 Interrupt Pointer Register High
CAN_MOIPR99H  EQU            0x201C6A

; Message Object 99 Interrupt Pointer Register Low
CAN_MOIPR99L  EQU            0x201C68

; Message Object 9 Interrupt Pointer Register High
CAN_MOIPR9H  EQU             0x20112A

; Message Object 9 Interrupt Pointer Register Low
CAN_MOIPR9L  EQU             0x201128

; Message Index Register 0
CAN_MSID0  EQU               0x200180

; Message Index Register 1
CAN_MSID1  EQU               0x200184

; Message Index Register 2
CAN_MSID2  EQU               0x200188

; Message Index Register 3
CAN_MSID3  EQU               0x20018C

; Message Index Register 4
CAN_MSID4  EQU               0x200190

; Message Index Register 5
CAN_MSID5  EQU               0x200194

; Message Index Register 6
CAN_MSID6  EQU               0x200198

; Message Index Register 7
CAN_MSID7  EQU               0x20019C

; Message Index Mask Register High
CAN_MSIMASKH  EQU            0x2001C2

; Message Index Mask Register Low
CAN_MSIMASKL  EQU            0x2001C0

; Message Pending Register 0 High
CAN_MSPND0H  EQU             0x200142

; Message Pending Register 0 Low
CAN_MSPND0L  EQU             0x200140

; Message Pending Register 1 High
CAN_MSPND1H  EQU             0x200146

; Message Pending Register 1 Low
CAN_MSPND1L  EQU             0x200144

; Message Pending Register 2 High
CAN_MSPND2H  EQU             0x20014A

; Message Pending Register 2 Low
CAN_MSPND2L  EQU             0x200148

; Message Pending Register 3 High
CAN_MSPND3H  EQU             0x20014E

; Message Pending Register 3 Low
CAN_MSPND3L  EQU             0x20014C

; Message Pending Register 4 High
CAN_MSPND4H  EQU             0x200152

; Message Pending Register 4 Low
CAN_MSPND4L  EQU             0x200150

; Message Pending Register 5 High
CAN_MSPND5H  EQU             0x200156

; Message Pending Register 5 Low
CAN_MSPND5L  EQU             0x200154

; Message Pending Register 6 High
CAN_MSPND6H  EQU             0x20015A

; Message Pending Register 6 Low
CAN_MSPND6L  EQU             0x200158

; Message Pending Register 7 High
CAN_MSPND7H  EQU             0x20015E

; Message Pending Register 7 Low
CAN_MSPND7L  EQU             0x20015C

; Node 0 Bit Timing Register High
CAN_NBTR0H  EQU              0x200212

; Node 0 Bit Timing Register Low
CAN_NBTR0L  EQU              0x200210

; Node 1 Bit Timing Register High
CAN_NBTR1H  EQU              0x200312

; Node 1 Bit Timing Register Low
CAN_NBTR1L  EQU              0x200310

; Node 2 Bit Timing Register High
CAN_NBTR2H  EQU              0x200412

; Node 2 Bit Timing Register Low
CAN_NBTR2L  EQU              0x200410

; Node 3 Bit Timing Register High
CAN_NBTR3H  EQU              0x200512

; Node 3 Bit Timing Register Low
CAN_NBTR3L  EQU              0x200510

; Node 4 Bit Timing Register High
CAN_NBTR4H  EQU              0x200612

; Node 4 Bit Timing Register Low
CAN_NBTR4L  EQU              0x200610

; Node 0 Control Register
CAN_NCR0  EQU                0x200200

; Node 1 Control Register
CAN_NCR1  EQU                0x200300

; Node 2 Control Register
CAN_NCR2  EQU                0x200400

; Node 3 Control Register
CAN_NCR3  EQU                0x200500

; Node 4 Control Register
CAN_NCR4  EQU                0x200600

; Node 0 Error Counter Register High
CAN_NECNT0H  EQU             0x200216

; Node 0 Error Counter Register Low
CAN_NECNT0L  EQU             0x200214

; Node 1 Error Counter Register High
CAN_NECNT1H  EQU             0x200316

; Node 1 Error Counter Register Low
CAN_NECNT1L  EQU             0x200314

; Node 2 Error Counter Register High
CAN_NECNT2H  EQU             0x200416

; Node 2 Error Counter Register Low
CAN_NECNT2L  EQU             0x200414

; Node 3 Error Counter Register High
CAN_NECNT3H  EQU             0x200516

; Node 3 Error Counter Register Low
CAN_NECNT3L  EQU             0x200514

; Node 4 Error Counter Register High
CAN_NECNT4H  EQU             0x200616

; Node 4 Error Counter Register Low
CAN_NECNT4L  EQU             0x200614

; Node 0 Frame Counter Register High
CAN_NFCR0H  EQU              0x20021A

; Node 0 Frame Counter Register Low
CAN_NFCR0L  EQU              0x200218

; Node 1 Frame Counter Register High
CAN_NFCR1H  EQU              0x20031A

; Node 1 Frame Counter Register Low
CAN_NFCR1L  EQU              0x200318

; Node 2 Frame Counter Register High
CAN_NFCR2H  EQU              0x20041A

; Node 2 Frame Counter Register Low
CAN_NFCR2L  EQU              0x200418

; Node 3 Frame Counter Register High
CAN_NFCR3H  EQU              0x20051A

; Node 3 Frame Counter Register Low
CAN_NFCR3L  EQU              0x200518

; Node 4 Frame Counter Register High
CAN_NFCR4H  EQU              0x20061A

; Node 4 Frame Counter Register Low
CAN_NFCR4L  EQU              0x200618

; Node 0 Interrupt Pointer Register
CAN_NIPR0  EQU               0x200208

; Node 1 Interrupt Pointer Register
CAN_NIPR1  EQU               0x200308

; Node 2 Interrupt Pointer Register
CAN_NIPR2  EQU               0x200408

; Node 3 Interrupt Pointer Register
CAN_NIPR3  EQU               0x200508

; Node 4 Interrupt Pointer Register
CAN_NIPR4  EQU               0x200608

; Node 0 Port Control Register
CAN_NPCR0  EQU               0x20020C

; Node 1 Port Control Register
CAN_NPCR1  EQU               0x20030C

; Node 2 Port Control Register
CAN_NPCR2  EQU               0x20040C

; Node 3 Port Control Register
CAN_NPCR3  EQU               0x20050C

; Node 4 Port Control Register
CAN_NPCR4  EQU               0x20060C

; Node 0 Status Register
CAN_NSR0  EQU                0x200204

; Node 1 Status Register
CAN_NSR1  EQU                0x200304

; Node 2 Status Register
CAN_NSR2  EQU                0x200404

; Node 3 Status Register
CAN_NSR3  EQU                0x200504

; Node 4 Status Register
CAN_NSR4  EQU                0x200604

; Panel Control Register
CAN_PANCTRH  EQU             0x2001C6

; Panel Control Register
CAN_PANCTRL  EQU             0x2001C4

; Capture/Compare Register 16
CC2_CC16  DEFR                           0xFE60

; CAPCOM Interrupt Control Reg. 16
CC2_CC16IC  DEFR                         0xF1C0
CC2_CC16IC_GPX                      BIT CC2_CC16IC.8
CC2_CC16IC_IE                       BIT CC2_CC16IC.6
CC2_CC16IC_IR                       BIT CC2_CC16IC.7

; Capture/Compare Register 17
CC2_CC17  DEFR                           0xFE62

; CAPCOM Interrupt Control Reg. 17
CC2_CC17IC  DEFR                         0xF1C2
CC2_CC17IC_GPX                      BIT CC2_CC17IC.8
CC2_CC17IC_IE                       BIT CC2_CC17IC.6
CC2_CC17IC_IR                       BIT CC2_CC17IC.7

; Capture/Compare Register 18
CC2_CC18  DEFR                           0xFE64

; CAPCOM Interrupt Control Reg. 18
CC2_CC18IC  DEFR                         0xF1C4
CC2_CC18IC_GPX                      BIT CC2_CC18IC.8
CC2_CC18IC_IE                       BIT CC2_CC18IC.6
CC2_CC18IC_IR                       BIT CC2_CC18IC.7

; Capture/Compare Register 19
CC2_CC19  DEFR                           0xFE66

; CAPCOM Interrupt Control Reg. 19
CC2_CC19IC  DEFR                         0xF1C6
CC2_CC19IC_GPX                      BIT CC2_CC19IC.8
CC2_CC19IC_IE                       BIT CC2_CC19IC.6
CC2_CC19IC_IR                       BIT CC2_CC19IC.7

; Capture/Compare Register 20
CC2_CC20  DEFR                           0xFE68

; CAPCOM Interrupt Control Reg. 20
CC2_CC20IC  DEFR                         0xF1C8
CC2_CC20IC_GPX                      BIT CC2_CC20IC.8
CC2_CC20IC_IE                       BIT CC2_CC20IC.6
CC2_CC20IC_IR                       BIT CC2_CC20IC.7

; Capture/Compare Register 21
CC2_CC21  DEFR                           0xFE6A

; CAPCOM Interrupt Control Reg. 21
CC2_CC21IC  DEFR                         0xF1CA
CC2_CC21IC_GPX                      BIT CC2_CC21IC.8
CC2_CC21IC_IE                       BIT CC2_CC21IC.6
CC2_CC21IC_IR                       BIT CC2_CC21IC.7

; Capture/Compare Register 22
CC2_CC22  DEFR                           0xFE6C

; CAPCOM Interrupt Control Reg. 22
CC2_CC22IC  DEFR                         0xF1CC
CC2_CC22IC_GPX                      BIT CC2_CC22IC.8
CC2_CC22IC_IE                       BIT CC2_CC22IC.6
CC2_CC22IC_IR                       BIT CC2_CC22IC.7

; Capture/Compare Register 23
CC2_CC23  DEFR                           0xFE6E

; CAPCOM Interrupt Control Reg. 23
CC2_CC23IC  DEFR                         0xF1CE
CC2_CC23IC_GPX                      BIT CC2_CC23IC.8
CC2_CC23IC_IE                       BIT CC2_CC23IC.6
CC2_CC23IC_IR                       BIT CC2_CC23IC.7

; Capture/Compare Register 24
CC2_CC24  DEFR                           0xFE70

; CAPCOM Interrupt Control Reg. 24
CC2_CC24IC  DEFR                         0xF1D0
CC2_CC24IC_GPX                      BIT CC2_CC24IC.8
CC2_CC24IC_IE                       BIT CC2_CC24IC.6
CC2_CC24IC_IR                       BIT CC2_CC24IC.7

; Capture/Compare Register 25
CC2_CC25  DEFR                           0xFE72

; CAPCOM Interrupt Control Reg. 25
CC2_CC25IC  DEFR                         0xF1D2
CC2_CC25IC_GPX                      BIT CC2_CC25IC.8
CC2_CC25IC_IE                       BIT CC2_CC25IC.6
CC2_CC25IC_IR                       BIT CC2_CC25IC.7

; Capture/Compare Register 26
CC2_CC26  DEFR                           0xFE74

; CAPCOM Interrupt Control Reg. 26
CC2_CC26IC  DEFR                         0xF1D4
CC2_CC26IC_GPX                      BIT CC2_CC26IC.8
CC2_CC26IC_IE                       BIT CC2_CC26IC.6
CC2_CC26IC_IR                       BIT CC2_CC26IC.7

; Capture/Compare Register 27
CC2_CC27  DEFR                           0xFE76

; CAPCOM Interrupt Control Reg. 27
CC2_CC27IC  DEFR                         0xF1D6
CC2_CC27IC_GPX                      BIT CC2_CC27IC.8
CC2_CC27IC_IE                       BIT CC2_CC27IC.6
CC2_CC27IC_IR                       BIT CC2_CC27IC.7

; Capture/Compare Register 28
CC2_CC28  DEFR                           0xFE78

; CAPCOM Interrupt Control Reg. 28
CC2_CC28IC  DEFR                         0xF1D8
CC2_CC28IC_GPX                      BIT CC2_CC28IC.8
CC2_CC28IC_IE                       BIT CC2_CC28IC.6
CC2_CC28IC_IR                       BIT CC2_CC28IC.7

; Capture/Compare Register 29
CC2_CC29  DEFR                           0xFE7A

; CAPCOM Interrupt Control Reg. 29
CC2_CC29IC  DEFR                         0xF1DA
CC2_CC29IC_GPX                      BIT CC2_CC29IC.8
CC2_CC29IC_IE                       BIT CC2_CC29IC.6
CC2_CC29IC_IR                       BIT CC2_CC29IC.7

; Capture/Compare Register 30
CC2_CC30  DEFR                           0xFE7C

; CAPCOM Interrupt Control Reg. 30
CC2_CC30IC  DEFR                         0xF1DC
CC2_CC30IC_GPX                      BIT CC2_CC30IC.8
CC2_CC30IC_IE                       BIT CC2_CC30IC.6
CC2_CC30IC_IR                       BIT CC2_CC30IC.7

; Capture/Compare Register 31
CC2_CC31  DEFR                           0xFE7E

; CAPCOM Interrupt Control Reg. 31
CC2_CC31IC  DEFR                         0xF1DE
CC2_CC31IC_GPX                      BIT CC2_CC31IC.8
CC2_CC31IC_IE                       BIT CC2_CC31IC.6
CC2_CC31IC_IR                       BIT CC2_CC31IC.7

; Double-Register Compare Mode Register
CC2_DRM  DEFR                            0xFF2A

; I/O Control Register
CC2_IOC  DEFR                            0xF066

; CC2 Kernel State Con. Register
CC2_KSCCFG  DEFR                         0xFE24

; Capture/Compare Mode Registers for the CAPCOM Unit [CC16...CC19]
CC2_M4  DEFR                             0xFF22
CC2_M4_ACC16                    BIT CC2_M4.3
CC2_M4_ACC17                    BIT CC2_M4.7
CC2_M4_ACC18                    BIT CC2_M4.11
CC2_M4_ACC19                    BIT CC2_M4.15

; Capture/Compare Mode Registers for the CAPCOM Unit [CC20...CC23]
CC2_M5  DEFR                             0xFF24
CC2_M5_ACC20                    BIT CC2_M5.3
CC2_M5_ACC21                    BIT CC2_M5.7
CC2_M5_ACC22                    BIT CC2_M5.11
CC2_M5_ACC23                    BIT CC2_M5.15

; Capture/Compare Mode Registers for the CAPCOM Unit [CC24...CC27]
CC2_M6  DEFR                             0xFF26
CC2_M6_ACC24                    BIT CC2_M6.3
CC2_M6_ACC25                    BIT CC2_M6.7
CC2_M6_ACC26                    BIT CC2_M6.11
CC2_M6_ACC27                    BIT CC2_M6.15

; Capture/Compare Mode Registers for the CAPCOM Unit [CC28...CC31]
CC2_M7  DEFR                             0xFF28
CC2_M7_ACC28                    BIT CC2_M7.3
CC2_M7_ACC29                    BIT CC2_M7.7
CC2_M7_ACC30                    BIT CC2_M7.11
CC2_M7_ACC31                    BIT CC2_M7.15

; Compare Output Register
CC2_OUT  DEFR                            0xFF2C
CC2_OUT_CC0IO                    BIT CC2_OUT.0
CC2_OUT_CC10IO                   BIT CC2_OUT.10
CC2_OUT_CC11IO                   BIT CC2_OUT.11
CC2_OUT_CC12IO                   BIT CC2_OUT.12
CC2_OUT_CC13IO                   BIT CC2_OUT.13
CC2_OUT_CC14IO                   BIT CC2_OUT.14
CC2_OUT_CC15IO                   BIT CC2_OUT.15
CC2_OUT_CC1IO                    BIT CC2_OUT.1
CC2_OUT_CC2IO                    BIT CC2_OUT.2
CC2_OUT_CC3IO                    BIT CC2_OUT.3
CC2_OUT_CC4IO                    BIT CC2_OUT.4
CC2_OUT_CC5IO                    BIT CC2_OUT.5
CC2_OUT_CC6IO                    BIT CC2_OUT.6
CC2_OUT_CC7IO                    BIT CC2_OUT.7
CC2_OUT_CC8IO                    BIT CC2_OUT.8
CC2_OUT_CC9IO                    BIT CC2_OUT.9

; Single Event Enable Register
CC2_SEE  DEFR                            0xFE2A

; Single Event Mode Register
CC2_SEM  DEFR                            0xFE28

; Timer 7 Register
CC2_T7  DEFR                             0xF050

; Timer 7/8 Control Register
CC2_T78CON  DEFR                         0xFF20
CC2_T78CON_T7M                      BIT CC2_T78CON.3
CC2_T78CON_T7R                      BIT CC2_T78CON.6
CC2_T78CON_T8M                      BIT CC2_T78CON.11
CC2_T78CON_T8R                      BIT CC2_T78CON.14

; CAPCOM TIMER 7 IC
CC2_T7IC  DEFR                           0xFF6C
CC2_T7IC_GPX                      BIT CC2_T7IC.8
CC2_T7IC_IE                       BIT CC2_T7IC.6
CC2_T7IC_IR                       BIT CC2_T7IC.7

; Timer 7 Reload Register
CC2_T7REL  DEFR                          0xF054

; Timer 8 Register
CC2_T8  DEFR                             0xF052

; CAPCOM TIMER 8 IC
CC2_T8IC  DEFR                           0xFF6E
CC2_T8IC_GPX                      BIT CC2_T8IC.8
CC2_T8IC_IE                       BIT CC2_T8IC.6
CC2_T8IC_IR                       BIT CC2_T8IC.7

; Timer 8 Reload Register
CC2_T8REL  DEFR                          0xF056

; CCU60 Interrupt Control Reg. 0
CCU60_0IC  DEFR                          0xF160
CCU60_0IC_GPX                      BIT CCU60_0IC.8
CCU60_0IC_IE                       BIT CCU60_0IC.6
CCU60_0IC_IR                       BIT CCU60_0IC.7

; CCU60 Interrupt Control Reg. 1
CCU60_1IC  DEFR                          0xF162
CCU60_1IC_GPX                      BIT CCU60_1IC.8
CCU60_1IC_IE                       BIT CCU60_1IC.6
CCU60_1IC_IR                       BIT CCU60_1IC.7

; CCU60 Interrupt Control Reg. 2
CCU60_2IC  DEFR                          0xF164
CCU60_2IC_GPX                      BIT CCU60_2IC.8
CCU60_2IC_IE                       BIT CCU60_2IC.6
CCU60_2IC_IR                       BIT CCU60_2IC.7

; CCU60 Interrupt Control Reg. 3
CCU60_3IC  DEFR                          0xF166
CCU60_3IC_GPX                      BIT CCU60_3IC.8
CCU60_3IC_IE                       BIT CCU60_3IC.6
CCU60_3IC_IR                       BIT CCU60_3IC.7

; Capture/Compare Register for Channel CC60
CCU60_CC60R  EQU             0xEA18

; Capture/Compare Shadow Reg. for Channel CC60
CCU60_CC60SR  EQU            0xEA20

; Capture/Compare Register for Channel CC61
CCU60_CC61R  EQU             0xEA1A

; Capture/Compare Shadow Reg. for Channel CC61
CCU60_CC61SR  EQU            0xEA22

; Capture/Compare Register for Channel CC62
CCU60_CC62R  EQU             0xEA1C

; Capture/Compare Shadow Reg. for Channel CC62
CCU60_CC62SR  EQU            0xEA24

; Compare Register for T13
CCU60_CC63R  EQU             0xEA34

; Compare Shadow Register for T13
CCU60_CC63SR  EQU            0xEA36

; Compare State Modification Register
CCU60_CMPMODIF  EQU          0xEA2A

; Compare State Register
CCU60_CMPSTAT  EQU           0xEA28

; Interrupt Enable Register
CCU60_IEN  EQU               0xEA58

; Interrupt Node Pointer Register
CCU60_INP  EQU               0xEA56

; Interrupt Status Register
CCU60_IS  EQU                0xEA50

; Interrupt Status Reset Register
CCU60_ISR  EQU               0xEA54

; Interrupt Status Set Register
CCU60_ISS  EQU               0xEA52

; Kernel State Configuration Register
CCU60_KSCFG  EQU             0xEA00

; Kernel State Control Sensitivity Register
CCU60_KSCSR  EQU             0xEA0E

; Module Configuration Register
CCU60_MCFG  EQU              0xEA0C

; Multi-Channel Mode Control Register
CCU60_MCMCTR  EQU            0xEA4E

; Multi-Channel Mode Output Register
CCU60_MCMOUT  EQU            0xEA4C

; Multi-Channel Mode Output Shadow Register
CCU60_MCMOUTS  EQU           0xEA4A

; Modulation Control Register
CCU60_MODCTR  EQU            0xEA40

; Port Input Select Register High
CCU60_PISELH  EQU            0xEA06

; Port Input Select Register Low
CCU60_PISELL  EQU            0xEA04

; Passive State Level Register
CCU60_PSLR  EQU              0xEA44

; Timer T12 Counter Register
CCU60_T12  EQU               0xEA10

; Dead-Time Contol Register for Timer12
CCU60_T12DTC  EQU            0xEA14

; T12 Capture/Compare Mode Select Register
CCU60_T12MSEL  EQU           0xEA46

; Timer 12 Period Register
CCU60_T12PR  EQU             0xEA12

; Timer T13 Counter Register
CCU60_T13  EQU               0xEA30

; Timer 13 Period Register
CCU60_T13PR  EQU             0xEA32

; Timer Control Register 0
CCU60_TCTR0  EQU             0xEA2C

; Timer Control Register 2
CCU60_TCTR2  EQU             0xEA2E

; Timer Control Register 4
CCU60_TCTR4  EQU             0xEA26

; Trap Control Register
CCU60_TRPCTR  EQU            0xEA42

; CCU61 Interrupt Control Reg. 0
CCU61_0IC  DEFR                          0xF168
CCU61_0IC_GPX                      BIT CCU61_0IC.8
CCU61_0IC_IE                       BIT CCU61_0IC.6
CCU61_0IC_IR                       BIT CCU61_0IC.7

; CCU61 Interrupt Control Reg. 1
CCU61_1IC  DEFR                          0xF16A
CCU61_1IC_GPX                      BIT CCU61_1IC.8
CCU61_1IC_IE                       BIT CCU61_1IC.6
CCU61_1IC_IR                       BIT CCU61_1IC.7

; CCU61 Interrupt Control Reg. 2
CCU61_2IC  DEFR                          0xF16C
CCU61_2IC_GPX                      BIT CCU61_2IC.8
CCU61_2IC_IE                       BIT CCU61_2IC.6
CCU61_2IC_IR                       BIT CCU61_2IC.7

; CCU61 Interrupt Control Reg. 3
CCU61_3IC  DEFR                          0xF16E
CCU61_3IC_GPX                      BIT CCU61_3IC.8
CCU61_3IC_IE                       BIT CCU61_3IC.6
CCU61_3IC_IR                       BIT CCU61_3IC.7

; Capture/Compare Register for Channel CC60
CCU61_CC60R  EQU             0xEA98

; Capture/Compare Shadow Reg. for Channel CC60
CCU61_CC60SR  EQU            0xEAA0

; Capture/Compare Register for Channel CC61
CCU61_CC61R  EQU             0xEA9A

; Capture/Compare Shadow Reg. for Channel CC61
CCU61_CC61SR  EQU            0xEAA2

; Capture/Compare Register for Channel CC62
CCU61_CC62R  EQU             0xEA9C

; Capture/Compare Shadow Reg. for Channel CC62
CCU61_CC62SR  EQU            0xEAA4

; Compare Register for T13
CCU61_CC63R  EQU             0xEAB4

; Compare Shadow Register for T13
CCU61_CC63SR  EQU            0xEAB6

; Compare State Modification Register
CCU61_CMPMODIF  EQU          0xEAAA

; Compare State Register
CCU61_CMPSTAT  EQU           0xEAA8

; Interrupt Enable Register
CCU61_IEN  EQU               0xEAD8

; Interrupt Node Pointer Register
CCU61_INP  EQU               0xEAD6

; Interrupt Status Register
CCU61_IS  EQU                0xEAD0

; Interrupt Status Reset Register
CCU61_ISR  EQU               0xEAD4

; Interrupt Status Set Register
CCU61_ISS  EQU               0xEAD2

; Kernel State Configuration Register
CCU61_KSCFG  EQU             0xEA80

; Kernel State Control Sensitivity Register
CCU61_KSCSR  EQU             0xEA8E

; Module Configuration Register
CCU61_MCFG  EQU              0xEA8C

; Multi-Channel Mode Control Register
CCU61_MCMCTR  EQU            0xEACE

; Multi-Channel Mode Output Register
CCU61_MCMOUT  EQU            0xEACC

; Multi-Channel Mode Output Shadow Register
CCU61_MCMOUTS  EQU           0xEACA

; Modulation Control Register
CCU61_MODCTR  EQU            0xEAC0

; Port Input Select Register High
CCU61_PISELH  EQU            0xEA86

; Port Input Select Register Low
CCU61_PISELL  EQU            0xEA84

; Passive State Level Register
CCU61_PSLR  EQU              0xEAC4

; Timer T12 Counter Register
CCU61_T12  EQU               0xEA90

; Dead-Time Contol Register for Timer12
CCU61_T12DTC  EQU            0xEA94

; T12 Capture/Compare Mode Select Register
CCU61_T12MSEL  EQU           0xEAC6

; Timer 12 Period Register
CCU61_T12PR  EQU             0xEA92

; Timer T13 Counter Register
CCU61_T13  EQU               0xEAB0

; Timer 13 Period Register
CCU61_T13PR  EQU             0xEAB2

; Timer Control Register 0
CCU61_TCTR0  EQU             0xEAAC

; Timer Control Register 2
CCU61_TCTR2  EQU             0xEAAE

; Timer Control Register 4
CCU61_TCTR4  EQU             0xEAA6

; Trap Control Register
CCU61_TRPCTR  EQU            0xEAC2

; CCU62 Interrupt Control Reg. 0
CCU62_0IC  DEFR                          0xF170
CCU62_0IC_GPX                      BIT CCU62_0IC.8
CCU62_0IC_IE                       BIT CCU62_0IC.6
CCU62_0IC_IR                       BIT CCU62_0IC.7

; CCU62 Interrupt Control Reg. 1
CCU62_1IC  DEFR                          0xF172
CCU62_1IC_GPX                      BIT CCU62_1IC.8
CCU62_1IC_IE                       BIT CCU62_1IC.6
CCU62_1IC_IR                       BIT CCU62_1IC.7

; CCU62 Interrupt Control Reg. 2
CCU62_2IC  DEFR                          0xF174
CCU62_2IC_GPX                      BIT CCU62_2IC.8
CCU62_2IC_IE                       BIT CCU62_2IC.6
CCU62_2IC_IR                       BIT CCU62_2IC.7

; CCU62 Interrupt Control Reg. 3
CCU62_3IC  DEFR                          0xF176
CCU62_3IC_GPX                      BIT CCU62_3IC.8
CCU62_3IC_IE                       BIT CCU62_3IC.6
CCU62_3IC_IR                       BIT CCU62_3IC.7

; Capture/Compare Register for Channel CC60
CCU62_CC60R  EQU             0xEB18

; Capture/Compare Shadow Reg. for Channel CC60
CCU62_CC60SR  EQU            0xEB20

; Capture/Compare Register for Channel CC61
CCU62_CC61R  EQU             0xEB1A

; Capture/Compare Shadow Reg. for Channel CC61
CCU62_CC61SR  EQU            0xEB22

; Capture/Compare Register for Channel CC62
CCU62_CC62R  EQU             0xEB1C

; Capture/Compare Shadow Reg. for Channel CC62
CCU62_CC62SR  EQU            0xEB24

; Compare Register for T13
CCU62_CC63R  EQU             0xEB34

; Compare Shadow Register for T13
CCU62_CC63SR  EQU            0xEB36

; Compare State Modification Register
CCU62_CMPMODIF  EQU          0xEB2A

; Compare State Register
CCU62_CMPSTAT  EQU           0xEB28

; Interrupt Enable Register
CCU62_IEN  EQU               0xEB58

; Interrupt Node Pointer Register
CCU62_INP  EQU               0xEB56

; Interrupt Status Register
CCU62_IS  EQU                0xEB50

; Interrupt Status Reset Register
CCU62_ISR  EQU               0xEB54

; Interrupt Status Set Register
CCU62_ISS  EQU               0xEB52

; Kernel State Configuration Register
CCU62_KSCFG  EQU             0xEB00

; Kernel State Control Sensitivity Register
CCU62_KSCSR  EQU             0xEB0E

; Module Configuration Register
CCU62_MCFG  EQU              0xEB0C

; Multi-Channel Mode Control Register
CCU62_MCMCTR  EQU            0xEB4E

; Multi-Channel Mode Output Register
CCU62_MCMOUT  EQU            0xEB4C

; Multi-Channel Mode Output Shadow Register
CCU62_MCMOUTS  EQU           0xEB4A

; Modulation Control Register
CCU62_MODCTR  EQU            0xEB40

; Port Input Select Register High
CCU62_PISELH  EQU            0xEB06

; Port Input Select Register Low
CCU62_PISELL  EQU            0xEB04

; Passive State Level Register
CCU62_PSLR  EQU              0xEB44

; Timer T12 Counter Register
CCU62_T12  EQU               0xEB10

; Dead-Time Contol Register for Timer12
CCU62_T12DTC  EQU            0xEB14

; T12 Capture/Compare Mode Select Register
CCU62_T12MSEL  EQU           0xEB46

; Timer 12 Period Register
CCU62_T12PR  EQU             0xEB12

; Timer T13 Counter Register
CCU62_T13  EQU               0xEB30

; Timer 13 Period Register
CCU62_T13PR  EQU             0xEB32

; Timer Control Register 0
CCU62_TCTR0  EQU             0xEB2C

; Timer Control Register 2
CCU62_TCTR2  EQU             0xEB2E

; Timer Control Register 4
CCU62_TCTR4  EQU             0xEB26

; Trap Control Register
CCU62_TRPCTR  EQU            0xEB42

; CCU63 Interrupt Control Reg. 0
CCU63_0IC  DEFR                          0xF178
CCU63_0IC_GPX                      BIT CCU63_0IC.8
CCU63_0IC_IE                       BIT CCU63_0IC.6
CCU63_0IC_IR                       BIT CCU63_0IC.7

; CCU63 Interrupt Control Reg. 1
CCU63_1IC  DEFR                          0xF17A
CCU63_1IC_GPX                      BIT CCU63_1IC.8
CCU63_1IC_IE                       BIT CCU63_1IC.6
CCU63_1IC_IR                       BIT CCU63_1IC.7

; CCU63 Interrupt Control Reg. 2
CCU63_2IC  DEFR                          0xF17C
CCU63_2IC_GPX                      BIT CCU63_2IC.8
CCU63_2IC_IE                       BIT CCU63_2IC.6
CCU63_2IC_IR                       BIT CCU63_2IC.7

; CCU63 Interrupt Control Reg. 3
CCU63_3IC  DEFR                          0xF17E
CCU63_3IC_GPX                      BIT CCU63_3IC.8
CCU63_3IC_IE                       BIT CCU63_3IC.6
CCU63_3IC_IR                       BIT CCU63_3IC.7

; Capture/Compare Register for Channel CC60
CCU63_CC60R  EQU             0xEB98

; Capture/Compare Shadow Reg. for Channel CC60
CCU63_CC60SR  EQU            0xEBA0

; Capture/Compare Register for Channel CC61
CCU63_CC61R  EQU             0xEB9A

; Capture/Compare Shadow Reg. for Channel CC61
CCU63_CC61SR  EQU            0xEBA2

; Capture/Compare Register for Channel CC62
CCU63_CC62R  EQU             0xEB9C

; Capture/Compare Shadow Reg. for Channel CC62
CCU63_CC62SR  EQU            0xEBA4

; Compare Register for T13
CCU63_CC63R  EQU             0xEBB4

; Compare Shadow Register for T13
CCU63_CC63SR  EQU            0xEBB6

; Compare State Modification Register
CCU63_CMPMODIF  EQU          0xEBAA

; Compare State Register
CCU63_CMPSTAT  EQU           0xEBA8

; Interrupt Enable Register
CCU63_IEN  EQU               0xEBD8

; Interrupt Node Pointer Register
CCU63_INP  EQU               0xEBD6

; Interrupt Status Register
CCU63_IS  EQU                0xEBD0

; Interrupt Status Reset Register
CCU63_ISR  EQU               0xEBD4

; Interrupt Status Set Register
CCU63_ISS  EQU               0xEBD2

; Kernel State Configuration Register
CCU63_KSCFG  EQU             0xEB80

; Kernel State Control Sensitivity Register
CCU63_KSCSR  EQU             0xEB8E

; Module Configuration Register
CCU63_MCFG  EQU              0xEB8C

; Multi-Channel Mode Control Register
CCU63_MCMCTR  EQU            0xEBCE

; Multi-Channel Mode Output Register
CCU63_MCMOUT  EQU            0xEBCC

; Multi-Channel Mode Output Shadow Register
CCU63_MCMOUTS  EQU           0xEBCA

; Modulation Control Register
CCU63_MODCTR  EQU            0xEBC0

; Port Input Select Register High
CCU63_PISELH  EQU            0xEB86

; Port Input Select Register Low
CCU63_PISELL  EQU            0xEB84

; Passive State Level Register
CCU63_PSLR  EQU              0xEBC4

; Timer T12 Counter Register
CCU63_T12  EQU               0xEB90

; Dead-Time Contol Register for Timer12
CCU63_T12DTC  EQU            0xEB94

; T12 Capture/Compare Mode Select Register
CCU63_T12MSEL  EQU           0xEBC6

; Timer 12 Period Register
CCU63_T12PR  EQU             0xEB92

; Timer T13 Counter Register
CCU63_T13  EQU               0xEBB0

; Timer 13 Period Register
CCU63_T13PR  EQU             0xEBB2

; Timer Control Register 0
CCU63_TCTR0  EQU             0xEBAC

; Timer Control Register 2
CCU63_TCTR2  EQU             0xEBAE

; Timer Control Register 4
CCU63_TCTR4  EQU             0xEBA6

; Trap Control Register
CCU63_TRPCTR  EQU            0xEBC2

; Monitor target ADdress register
CMADR  DEFR                              0xF0F8

; Monitor Control and Break Level register
CMCTR  DEFR                              0xF0FA

; COMDATA in Monitor Controlled Tracing Mode
COMDATA  DEFR                            0xF068

; Data Register in Communication Mode
COMDATA  DEFR                            0xF068

; Context Pointer
CP  DEFR                                 0xFE10

; CPU Control Register 1
CPUCON1  DEFR                            0xFE18

; CPU Control Register 2
CPUCON2  DEFR                            0xFE1A

; Code Segment Pointer
CSP  DEFR                                0xFE08

; Debug Status Register
DBGSR  DEFR                              0xF0FC

; Data Compare Data Programming register
DCMPDP  DEFR                             0xF0EE

; Data Compare Select Programming register
DCMPSP  DEFR                             0xF0EC

; Break Pin Event Control Register
DEXEVT  DEFR                             0xF0F2

; Data Page Pointer 0
DPP0  DEFR                               0xFE00

; Data Page Pointer 1
DPP1  DEFR                               0xFE02

; Data Page Pointer 2
DPP2  DEFR                               0xFE04

; Data Page Pointer 3
DPP3  DEFR                               0xFE06

; PEC Destination Pointer 0
DSTP0  EQU                   0xEC42

; PEC Destination Pointer 1
DSTP1  EQU                   0xEC46

; PEC Destination Pointer 2
DSTP2  EQU                   0xEC4A

; PEC Destination Pointer 3
DSTP3  EQU                   0xEC4E

; PEC Destination Pointer 4
DSTP4  EQU                   0xEC52

; PEC Destination Pointer 5
DSTP5  EQU                   0xEC56

; PEC Destination Pointer 6
DSTP6  EQU                   0xEC5A

; PEC Destination Pointer 7
DSTP7  EQU                   0xEC5E

; Software Debug Event Control Register
DSWEVT  DEFR                             0xF0F4

; Task ID Register
DTIDR  DEFR                              0xF0D8

; Hardware Trigger Event Control Register
DTREVT  DEFR                             0xF0F0

; Address Range/Size for CS1
EBC_ADDRSEL1  EQU            0xEE1E

; Address Range/Size for CS2
EBC_ADDRSEL2  EQU            0xEE26

; Address Range/Size for CS3
EBC_ADDRSEL3  EQU            0xEE2E

; Address Range/Size for CS4
EBC_ADDRSEL4  EQU            0xEE36

; Address Range/Size for CS7
EBC_ADDRSEL7  EQU            0xEE4E

; EBC Mode Register 0
EBC_EBCMOD0  EQU             0xEE00

; EBC Mode Register 1
EBC_EBCMOD1  EQU             0xEE02

; Function Cfg. Reg. for CS0
EBC_FCONCS0  EQU             0xEE12

; Function Cfg. Reg. for CS1
EBC_FCONCS1  EQU             0xEE1A

; Function Cfg. Reg. for CS2
EBC_FCONCS2  EQU             0xEE22

; Function Cfg. Reg. for CS3
EBC_FCONCS3  EQU             0xEE2A

; Function Cfg. Reg. for CS4
EBC_FCONCS4  EQU             0xEE32

; Function Cfg. Reg. for CSx
EBC_FCONCS7  EQU             0xEE4A

; Timing Cfg. Reg. for CS0
EBC_TCONCS0  EQU             0xEE10

; Timing Cfg. Reg. for CS1
EBC_TCONCS1  EQU             0xEE18

; Timing Cfg. Reg. for CS2
EBC_TCONCS2  EQU             0xEE20

; Timing Cfg. Reg. for CS3
EBC_TCONCS3  EQU             0xEE28

; Timing Cfg. Reg. for CS4
EBC_TCONCS4  EQU             0xEE30

; Timing Cfg. Reg. for CS7
EBC_TCONCS7  EQU             0xEE48

; EOP Interrupt Control Reg.
EOPIC  DEFR                              0xF19E
EOPIE                    BIT EOPIC.6
EOPIR                    BIT EOPIC.7
GPX                      BIT EOPIC.8

; Fast Interrupt Address Reg. 0
FINT0ADDR  EQU               0xEC02

; Fast Interrupt Control Reg. 0
FINT0CSP  EQU                0xEC00

; Fast Interrupt Address Reg. 1
FINT1ADDR  EQU               0xEC06

; Fast Interrupt Control Reg. 1
FINT1CSP  EQU                0xEC04

; Flash Kernel State Con. Register
FL_KSCCFG  DEFR                          0xFE22

; Capture/Reload Register
GPT12E_CAPREL  DEFR                      0xFE4A

; GPT12 CAPREL IC
GPT12E_CRIC  DEFR                        0xFF6A
GPT12E_CRIC_GPX                      BIT GPT12E_CRIC.8
GPT12E_CRIC_IE                       BIT GPT12E_CRIC.6
GPT12E_CRIC_IR                       BIT GPT12E_CRIC.7

; GPT12E Kernel State Con. Register
GPT12E_KSCCFG  DEFR                      0xFE1C

; Timer 2
GPT12E_T2  DEFR                          0xFE40

; Timer 2 Control Register
GPT12E_T2CON  DEFR                       0xFF40
GPT12E_T2CON_T2CHDIR                  BIT GPT12E_T2CON.14
GPT12E_T2CON_T2EDGE                   BIT GPT12E_T2CON.13
GPT12E_T2CON_T2IRDIS                  BIT GPT12E_T2CON.12
GPT12E_T2CON_T2R                      BIT GPT12E_T2CON.6
GPT12E_T2CON_T2RC                     BIT GPT12E_T2CON.9
GPT12E_T2CON_T2RDIR                   BIT GPT12E_T2CON.15
GPT12E_T2CON_T2UD                     BIT GPT12E_T2CON.7
GPT12E_T2CON_T2UDE                    BIT GPT12E_T2CON.8

; GPT12 TIMER 2 IC
GPT12E_T2IC  DEFR                        0xFF60
GPT12E_T2IC_GPX                      BIT GPT12E_T2IC.8
GPT12E_T2IC_IE                       BIT GPT12E_T2IC.6
GPT12E_T2IC_IR                       BIT GPT12E_T2IC.7

; Timer 3
GPT12E_T3  DEFR                          0xFE42

; Timer 3 Control Register
GPT12E_T3CON  DEFR                       0xFF42
GPT12E_T3CON_T3CHDIR                  BIT GPT12E_T3CON.14
GPT12E_T3CON_T3EDGE                   BIT GPT12E_T3CON.13
GPT12E_T3CON_T3OE                     BIT GPT12E_T3CON.9
GPT12E_T3CON_T3OTL                    BIT GPT12E_T3CON.10
GPT12E_T3CON_T3R                      BIT GPT12E_T3CON.6
GPT12E_T3CON_T3RDIR                   BIT GPT12E_T3CON.15
GPT12E_T3CON_T3UD                     BIT GPT12E_T3CON.7
GPT12E_T3CON_T3UDE                    BIT GPT12E_T3CON.8

; GPT12 TIMER 3 IC
GPT12E_T3IC  DEFR                        0xFF62
GPT12E_T3IC_GPX                      BIT GPT12E_T3IC.8
GPT12E_T3IC_IE                       BIT GPT12E_T3IC.6
GPT12E_T3IC_IR                       BIT GPT12E_T3IC.7

; Timer 4
GPT12E_T4  DEFR                          0xFE44

; Timer 4 Control Register
GPT12E_T4CON  DEFR                       0xFF44
GPT12E_T4CON_T4CHDIR                  BIT GPT12E_T4CON.14
GPT12E_T4CON_T4EDGE                   BIT GPT12E_T4CON.13
GPT12E_T4CON_T4IRDIS                  BIT GPT12E_T4CON.12
GPT12E_T4CON_T4R                      BIT GPT12E_T4CON.6
GPT12E_T4CON_T4RC                     BIT GPT12E_T4CON.9
GPT12E_T4CON_T4RDIR                   BIT GPT12E_T4CON.15
GPT12E_T4CON_T4UD                     BIT GPT12E_T4CON.7
GPT12E_T4CON_T4UDE                    BIT GPT12E_T4CON.8

; GPT12 TIMER 4 IC
GPT12E_T4IC  DEFR                        0xFF64
GPT12E_T4IC_GPX                      BIT GPT12E_T4IC.8
GPT12E_T4IC_IE                       BIT GPT12E_T4IC.6
GPT12E_T4IC_IR                       BIT GPT12E_T4IC.7

; Timer 5
GPT12E_T5  DEFR                          0xFE46

; Timer 5 Control Register
GPT12E_T5CON  DEFR                       0xFF46
GPT12E_T5CON_CT3                      BIT GPT12E_T5CON.10
GPT12E_T5CON_T5CC                     BIT GPT12E_T5CON.11
GPT12E_T5CON_T5CLR                    BIT GPT12E_T5CON.14
GPT12E_T5CON_T5R                      BIT GPT12E_T5CON.6
GPT12E_T5CON_T5RC                     BIT GPT12E_T5CON.9
GPT12E_T5CON_T5SC                     BIT GPT12E_T5CON.15
GPT12E_T5CON_T5UD                     BIT GPT12E_T5CON.7
GPT12E_T5CON_T5UDE                    BIT GPT12E_T5CON.8

; GPT12 TIMER 5 IC
GPT12E_T5IC  DEFR                        0xFF66
GPT12E_T5IC_GPX                      BIT GPT12E_T5IC.8
GPT12E_T5IC_IE                       BIT GPT12E_T5IC.6
GPT12E_T5IC_IR                       BIT GPT12E_T5IC.7

; Timer 6
GPT12E_T6  DEFR                          0xFE48

; Timer 6 Control Register
GPT12E_T6CON  DEFR                       0xFF48
GPT12E_T6CON_T6CLR                    BIT GPT12E_T6CON.14
GPT12E_T6CON_T6OE                     BIT GPT12E_T6CON.9
GPT12E_T6CON_T6OTL                    BIT GPT12E_T6CON.10
GPT12E_T6CON_T6R                      BIT GPT12E_T6CON.6
GPT12E_T6CON_T6SR                     BIT GPT12E_T6CON.15
GPT12E_T6CON_T6UD                     BIT GPT12E_T6CON.7
GPT12E_T6CON_T6UDE                    BIT GPT12E_T6CON.8

; GPT12 TIMER 6 IC
GPT12E_T6IC  DEFR                        0xFF68
GPT12E_T6IC_GPX                      BIT GPT12E_T6IC.8
GPT12E_T6IC_IE                       BIT GPT12E_T6IC.6
GPT12E_T6IC_IR                       BIT GPT12E_T6IC.7

; Address Pointer
IDX0  DEFR                               0xFF08

; Address Pointer
IDX1  DEFR                               0xFF0A

; Flash State Busy
IMB_FSR_BUSY  EQU            0xFFFF06

; Flash State Operations
IMB_FSR_OP  EQU              0xFFFF08

; Flash State Protection
IMB_FSR_PROT  EQU            0xFFFF0A

; IMB Control High
IMB_IMBCTRH  EQU             0xFFFF02

; IMB Control Low
IMB_IMBCTRL  EQU             0xFFFF00

; Interrupt Control
IMB_INTCTR  EQU              0xFFFF04

; Margin Control
IMB_MAR  EQU                 0xFFFF0C

; Protection Configuration 0.
IMB_PROCON0  EQU             0xFFFF10

; Protection Configuration 1.
IMB_PROCON1  EQU             0xFFFF12

; Protection Configuration 2.
IMB_PROCON2  EQU             0xFFFF14

; Status and Control Register
IOSR  DEFR                               0xF06C

; Accumulator High Word
MAH  DEFR                                0xFE5E

; Accumulator Low Word
MAL  DEFR                                0xFE5C

; MultiCAN Kernel State Con. Register
MCAN_KSCCFG  DEFR                        0xFE1E

; MAC Control Word
MCW  DEFR                                0xFFDC
MCW_MP                       BIT MCW.10
MCW_MS                       BIT MCW.9

; Multiply Divide Control
MDC  DEFR                                0xFF0E
MDC_MDRIU                    BIT MDC.4

; Multiply Divide High Word
MDH  DEFR                                0xFE0C

; Multiply Divide Low Word
MDL  DEFR                                0xFE0E

; London Subsystem Kernel State Control Register
MEM_KSCCFG  DEFR                         0xF012

; MAC Repeat Word
MRW  DEFR                                0xFFDA

; MAC Status Word
MSW  DEFR                                0xFFDE
MC                       BIT MSW.10
ME                       BIT MSW.12
MN                       BIT MSW.8
MSL                      BIT MSW.13
MSV                      BIT MSW.11
MV                       BIT MSW.14
MZ                       BIT MSW.9

; Constant Ones Register
ONES  DEFR                               0xFF1E

; Port 0 Input Register
P0_IN  DEFR                              0xFF80
P0_IN_P0                       BIT P0_IN.0
P0_IN_P1                       BIT P0_IN.1
P0_IN_P10                      BIT P0_IN.10
P0_IN_P11                      BIT P0_IN.11
P0_IN_P12                      BIT P0_IN.12
P0_IN_P13                      BIT P0_IN.13
P0_IN_P14                      BIT P0_IN.14
P0_IN_P15                      BIT P0_IN.15
P0_IN_P2                       BIT P0_IN.2
P0_IN_P3                       BIT P0_IN.3
P0_IN_P4                       BIT P0_IN.4
P0_IN_P5                       BIT P0_IN.5
P0_IN_P6                       BIT P0_IN.6
P0_IN_P7                       BIT P0_IN.7
P0_IN_P8                       BIT P0_IN.8
P0_IN_P9                       BIT P0_IN.9

; Port 0 Input/Output Control Register 00
P0_IOCR00  EQU               0xE800

; Port 0 Input/Output Control Register 01
P0_IOCR01  EQU               0xE802

; Port 0 Input/Output Control Register 02
P0_IOCR02  EQU               0xE804

; Port 0 Input/Output Control Register 03
P0_IOCR03  EQU               0xE806

; Port 0 Input/Output Control Register 04
P0_IOCR04  EQU               0xE808

; Port 0 Input/Output Control Register 05
P0_IOCR05  EQU               0xE80A

; Port 0 Input/Output Control Register 06
P0_IOCR06  EQU               0xE80C

; Port 0 Input/Output Control Register 07
P0_IOCR07  EQU               0xE80E

; Port 0 Output Modification Register Low
P0_OMRL  EQU                 0xE9C0

; Port 0 Output Register
P0_OUT  DEFR                             0xFFA2
P0_OUT_P0                       BIT P0_OUT.0
P0_OUT_P1                       BIT P0_OUT.1
P0_OUT_P10                      BIT P0_OUT.10
P0_OUT_P11                      BIT P0_OUT.11
P0_OUT_P12                      BIT P0_OUT.12
P0_OUT_P13                      BIT P0_OUT.13
P0_OUT_P14                      BIT P0_OUT.14
P0_OUT_P15                      BIT P0_OUT.15
P0_OUT_P2                       BIT P0_OUT.2
P0_OUT_P3                       BIT P0_OUT.3
P0_OUT_P4                       BIT P0_OUT.4
P0_OUT_P5                       BIT P0_OUT.5
P0_OUT_P6                       BIT P0_OUT.6
P0_OUT_P7                       BIT P0_OUT.7
P0_OUT_P8                       BIT P0_OUT.8
P0_OUT_P9                       BIT P0_OUT.9

; Port 0 Output Control Register
P0_POCON  EQU                0xE8A0

; Port 10 Input Register
P10_IN  DEFR                             0xFF94
P10_IN_P0                       BIT P10_IN.0
P10_IN_P1                       BIT P10_IN.1
P10_IN_P10                      BIT P10_IN.10
P10_IN_P11                      BIT P10_IN.11
P10_IN_P12                      BIT P10_IN.12
P10_IN_P13                      BIT P10_IN.13
P10_IN_P14                      BIT P10_IN.14
P10_IN_P15                      BIT P10_IN.15
P10_IN_P2                       BIT P10_IN.2
P10_IN_P3                       BIT P10_IN.3
P10_IN_P4                       BIT P10_IN.4
P10_IN_P5                       BIT P10_IN.5
P10_IN_P6                       BIT P10_IN.6
P10_IN_P7                       BIT P10_IN.7
P10_IN_P8                       BIT P10_IN.8
P10_IN_P9                       BIT P10_IN.9

; Port 10 Input/Output Control Register 00
P10_IOCR00  EQU              0xE940

; Port 10 Input/Output Control Register 01
P10_IOCR01  EQU              0xE942

; Port 10 Input/Output Control Register 02
P10_IOCR02  EQU              0xE944

; Port 10 Input/Output Control Register 03
P10_IOCR03  EQU              0xE946

; Port 10 Input/Output Control Register 04
P10_IOCR04  EQU              0xE948

; Port 10 Input/Output Control Register 05
P10_IOCR05  EQU              0xE94A

; Port 10 Input/Output Control Register 06
P10_IOCR06  EQU              0xE94C

; Port 10 Input/Output Control Register 07
P10_IOCR07  EQU              0xE94E

; Port 10 Input/Output Control Register 08
P10_IOCR08  EQU              0xE950

; Port 10 Input/Output Control Register 09
P10_IOCR09  EQU              0xE952

; Port 10 Input/Output Control Register 10
P10_IOCR10  EQU              0xE954

; Port 10 Input/Output Control Register 11
P10_IOCR11  EQU              0xE956

; Port 10 Input/Output Control Register 12
P10_IOCR12  EQU              0xE958

; Port 10 Input/Output Control Register 13
P10_IOCR13  EQU              0xE95A

; Port 10 Input/Output Control Register 14
P10_IOCR14  EQU              0xE95C

; Port 10 Input/Output Control Register 15
P10_IOCR15  EQU              0xE95E

; Port 10 Output Modification Register High
P10_OMRH  EQU                0xE9EA

; Port 10 Output Modification Register Low
P10_OMRL  EQU                0xE9E8

; Port 10 Output Register
P10_OUT  DEFR                            0xFFB6
P10_OUT_P0                       BIT P10_OUT.0
P10_OUT_P1                       BIT P10_OUT.1
P10_OUT_P10                      BIT P10_OUT.10
P10_OUT_P11                      BIT P10_OUT.11
P10_OUT_P12                      BIT P10_OUT.12
P10_OUT_P13                      BIT P10_OUT.13
P10_OUT_P14                      BIT P10_OUT.14
P10_OUT_P15                      BIT P10_OUT.15
P10_OUT_P2                       BIT P10_OUT.2
P10_OUT_P3                       BIT P10_OUT.3
P10_OUT_P4                       BIT P10_OUT.4
P10_OUT_P5                       BIT P10_OUT.5
P10_OUT_P6                       BIT P10_OUT.6
P10_OUT_P7                       BIT P10_OUT.7
P10_OUT_P8                       BIT P10_OUT.8
P10_OUT_P9                       BIT P10_OUT.9

; Port 10 Output Control Register
P10_POCON  EQU               0xE8B4

; Port 11 Input Register
P11_IN  DEFR                             0xFF96
P11_IN_P0                       BIT P11_IN.0
P11_IN_P1                       BIT P11_IN.1
P11_IN_P10                      BIT P11_IN.10
P11_IN_P11                      BIT P11_IN.11
P11_IN_P12                      BIT P11_IN.12
P11_IN_P13                      BIT P11_IN.13
P11_IN_P14                      BIT P11_IN.14
P11_IN_P15                      BIT P11_IN.15
P11_IN_P2                       BIT P11_IN.2
P11_IN_P3                       BIT P11_IN.3
P11_IN_P4                       BIT P11_IN.4
P11_IN_P5                       BIT P11_IN.5
P11_IN_P6                       BIT P11_IN.6
P11_IN_P7                       BIT P11_IN.7
P11_IN_P8                       BIT P11_IN.8
P11_IN_P9                       BIT P11_IN.9

; Port 11 Input/Output Control Register 00
P11_IOCR00  EQU              0xE960

; Port 11 Input/Output Control Register 01
P11_IOCR01  EQU              0xE962

; Port 11 Input/Output Control Register 02
P11_IOCR02  EQU              0xE964

; Port 11 Input/Output Control Register 03
P11_IOCR03  EQU              0xE966

; Port 11 Input/Output Control Register 04
P11_IOCR04  EQU              0xE968

; Port 11 Input/Output Control Register 05
P11_IOCR05  EQU              0xE96A

; Port 11 Output Modification Register Low
P11_OMRL  EQU                0xE9EC

; Port 11 Output Register
P11_OUT  DEFR                            0xFFB8
P11_OUT_P0                       BIT P11_OUT.0
P11_OUT_P1                       BIT P11_OUT.1
P11_OUT_P10                      BIT P11_OUT.10
P11_OUT_P11                      BIT P11_OUT.11
P11_OUT_P12                      BIT P11_OUT.12
P11_OUT_P13                      BIT P11_OUT.13
P11_OUT_P14                      BIT P11_OUT.14
P11_OUT_P15                      BIT P11_OUT.15
P11_OUT_P2                       BIT P11_OUT.2
P11_OUT_P3                       BIT P11_OUT.3
P11_OUT_P4                       BIT P11_OUT.4
P11_OUT_P5                       BIT P11_OUT.5
P11_OUT_P6                       BIT P11_OUT.6
P11_OUT_P7                       BIT P11_OUT.7
P11_OUT_P8                       BIT P11_OUT.8
P11_OUT_P9                       BIT P11_OUT.9

; Port 11 Output Control Register
P11_POCON  EQU               0xE8B6

; Port 15 Digital Input Disable Register
P15_DIDIS  DEFR                          0xFE9E

; Port 15 Input Register
P15_IN  DEFR                             0xFF9E
P15_IN_P0                       BIT P15_IN.0
P15_IN_P1                       BIT P15_IN.1
P15_IN_P10                      BIT P15_IN.10
P15_IN_P11                      BIT P15_IN.11
P15_IN_P12                      BIT P15_IN.12
P15_IN_P13                      BIT P15_IN.13
P15_IN_P14                      BIT P15_IN.14
P15_IN_P15                      BIT P15_IN.15
P15_IN_P2                       BIT P15_IN.2
P15_IN_P3                       BIT P15_IN.3
P15_IN_P4                       BIT P15_IN.4
P15_IN_P5                       BIT P15_IN.5
P15_IN_P6                       BIT P15_IN.6
P15_IN_P7                       BIT P15_IN.7
P15_IN_P8                       BIT P15_IN.8
P15_IN_P9                       BIT P15_IN.9

; Port 1 Input Register
P1_IN  DEFR                              0xFF82
P1_IN_P0                       BIT P1_IN.0
P1_IN_P1                       BIT P1_IN.1
P1_IN_P10                      BIT P1_IN.10
P1_IN_P11                      BIT P1_IN.11
P1_IN_P12                      BIT P1_IN.12
P1_IN_P13                      BIT P1_IN.13
P1_IN_P14                      BIT P1_IN.14
P1_IN_P15                      BIT P1_IN.15
P1_IN_P2                       BIT P1_IN.2
P1_IN_P3                       BIT P1_IN.3
P1_IN_P4                       BIT P1_IN.4
P1_IN_P5                       BIT P1_IN.5
P1_IN_P6                       BIT P1_IN.6
P1_IN_P7                       BIT P1_IN.7
P1_IN_P8                       BIT P1_IN.8
P1_IN_P9                       BIT P1_IN.9

; Port 1 Input/Output Control Register 00
P1_IOCR00  EQU               0xE820

; Port 1 Input/Output Control Register 01
P1_IOCR01  EQU               0xE822

; Port 1 Input/Output Control Register 02
P1_IOCR02  EQU               0xE824

; Port 1 Input/Output Control Register 03
P1_IOCR03  EQU               0xE826

; Port 1 Input/Output Control Register 04
P1_IOCR04  EQU               0xE828

; Port 1 Input/Output Control Register 05
P1_IOCR05  EQU               0xE82A

; Port 1 Input/Output Control Register 06
P1_IOCR06  EQU               0xE82C

; Port 1 Input/Output Control Register 07
P1_IOCR07  EQU               0xE82E

; Port 1 Output Modification Register Low
P1_OMRL  EQU                 0xE9C4

; Port 1 Output Register
P1_OUT  DEFR                             0xFFA4
P1_OUT_P0                       BIT P1_OUT.0
P1_OUT_P1                       BIT P1_OUT.1
P1_OUT_P10                      BIT P1_OUT.10
P1_OUT_P11                      BIT P1_OUT.11
P1_OUT_P12                      BIT P1_OUT.12
P1_OUT_P13                      BIT P1_OUT.13
P1_OUT_P14                      BIT P1_OUT.14
P1_OUT_P15                      BIT P1_OUT.15
P1_OUT_P2                       BIT P1_OUT.2
P1_OUT_P3                       BIT P1_OUT.3
P1_OUT_P4                       BIT P1_OUT.4
P1_OUT_P5                       BIT P1_OUT.5
P1_OUT_P6                       BIT P1_OUT.6
P1_OUT_P7                       BIT P1_OUT.7
P1_OUT_P8                       BIT P1_OUT.8
P1_OUT_P9                       BIT P1_OUT.9

; Port 1 Output Control Register
P1_POCON  EQU                0xE8A2

; Port 2 Input Register
P2_IN  DEFR                              0xFF84
P2_IN_P0                       BIT P2_IN.0
P2_IN_P1                       BIT P2_IN.1
P2_IN_P10                      BIT P2_IN.10
P2_IN_P11                      BIT P2_IN.11
P2_IN_P12                      BIT P2_IN.12
P2_IN_P13                      BIT P2_IN.13
P2_IN_P14                      BIT P2_IN.14
P2_IN_P15                      BIT P2_IN.15
P2_IN_P2                       BIT P2_IN.2
P2_IN_P3                       BIT P2_IN.3
P2_IN_P4                       BIT P2_IN.4
P2_IN_P5                       BIT P2_IN.5
P2_IN_P6                       BIT P2_IN.6
P2_IN_P7                       BIT P2_IN.7
P2_IN_P8                       BIT P2_IN.8
P2_IN_P9                       BIT P2_IN.9

; Port 2 Input/Output Control Register 00
P2_IOCR00  EQU               0xE840

; Port 2 Input/Output Control Register 01
P2_IOCR01  EQU               0xE842

; Port 2 Input/Output Control Register 02
P2_IOCR02  EQU               0xE844

; Port 2 Input/Output Control Register 03
P2_IOCR03  EQU               0xE846

; Port 2 Input/Output Control Register 04
P2_IOCR04  EQU               0xE848

; Port 2 Input/Output Control Register 05
P2_IOCR05  EQU               0xE84A

; Port 2 Input/Output Control Register 06
P2_IOCR06  EQU               0xE84C

; Port 2 Input/Output Control Register 07
P2_IOCR07  EQU               0xE84E

; Port 2 Input/Output Control Register 08
P2_IOCR08  EQU               0xE850

; Port 2 Input/Output Control Register 09
P2_IOCR09  EQU               0xE852

; Port 2 Input/Output Control Register 10
P2_IOCR10  EQU               0xE854

; Port 2 Input/Output Control Register 11
P2_IOCR11  EQU               0xE856

; Port 2 Input/Output Control Register 12
P2_IOCR12  EQU               0xE858

; Port 2 Output Modification Register High
P2_OMRH  EQU                 0xE9CA

; Port 2 Output Modification Register Low
P2_OMRL  EQU                 0xE9C8

; Port 2 Output Register
P2_OUT  DEFR                             0xFFA6
P2_OUT_P0                       BIT P2_OUT.0
P2_OUT_P1                       BIT P2_OUT.1
P2_OUT_P10                      BIT P2_OUT.10
P2_OUT_P11                      BIT P2_OUT.11
P2_OUT_P12                      BIT P2_OUT.12
P2_OUT_P13                      BIT P2_OUT.13
P2_OUT_P14                      BIT P2_OUT.14
P2_OUT_P15                      BIT P2_OUT.15
P2_OUT_P2                       BIT P2_OUT.2
P2_OUT_P3                       BIT P2_OUT.3
P2_OUT_P4                       BIT P2_OUT.4
P2_OUT_P5                       BIT P2_OUT.5
P2_OUT_P6                       BIT P2_OUT.6
P2_OUT_P7                       BIT P2_OUT.7
P2_OUT_P8                       BIT P2_OUT.8
P2_OUT_P9                       BIT P2_OUT.9

; Port 2 Output Control Register
P2_POCON  EQU                0xE8A4

; Port 3 Input Register
P3_IN  DEFR                              0xFF86
P3_IN_P0                       BIT P3_IN.0
P3_IN_P1                       BIT P3_IN.1
P3_IN_P10                      BIT P3_IN.10
P3_IN_P11                      BIT P3_IN.11
P3_IN_P12                      BIT P3_IN.12
P3_IN_P13                      BIT P3_IN.13
P3_IN_P14                      BIT P3_IN.14
P3_IN_P15                      BIT P3_IN.15
P3_IN_P2                       BIT P3_IN.2
P3_IN_P3                       BIT P3_IN.3
P3_IN_P4                       BIT P3_IN.4
P3_IN_P5                       BIT P3_IN.5
P3_IN_P6                       BIT P3_IN.6
P3_IN_P7                       BIT P3_IN.7
P3_IN_P8                       BIT P3_IN.8
P3_IN_P9                       BIT P3_IN.9

; Port 3 Input/Output Control Register 00
P3_IOCR00  EQU               0xE860

; Port 3 Input/Output Control Register 01
P3_IOCR01  EQU               0xE862

; Port 3 Input/Output Control Register 02
P3_IOCR02  EQU               0xE864

; Port 3 Input/Output Control Register 03
P3_IOCR03  EQU               0xE866

; Port 3 Input/Output Control Register 04
P3_IOCR04  EQU               0xE868

; Port 3 Input/Output Control Register 05
P3_IOCR05  EQU               0xE86A

; Port 3 Input/Output Control Register 06
P3_IOCR06  EQU               0xE86C

; Port 3 Input/Output Control Register 07
P3_IOCR07  EQU               0xE86E

; Port 3 Output Modification Register Low
P3_OMRL  EQU                 0xE9CC

; Port 3 Output Register
P3_OUT  DEFR                             0xFFA8
P3_OUT_P0                       BIT P3_OUT.0
P3_OUT_P1                       BIT P3_OUT.1
P3_OUT_P10                      BIT P3_OUT.10
P3_OUT_P11                      BIT P3_OUT.11
P3_OUT_P12                      BIT P3_OUT.12
P3_OUT_P13                      BIT P3_OUT.13
P3_OUT_P14                      BIT P3_OUT.14
P3_OUT_P15                      BIT P3_OUT.15
P3_OUT_P2                       BIT P3_OUT.2
P3_OUT_P3                       BIT P3_OUT.3
P3_OUT_P4                       BIT P3_OUT.4
P3_OUT_P5                       BIT P3_OUT.5
P3_OUT_P6                       BIT P3_OUT.6
P3_OUT_P7                       BIT P3_OUT.7
P3_OUT_P8                       BIT P3_OUT.8
P3_OUT_P9                       BIT P3_OUT.9

; Port 3 Output Control Register
P3_POCON  EQU                0xE8A6

; Port 4 Input Register
P4_IN  DEFR                              0xFF88
P4_IN_P0                       BIT P4_IN.0
P4_IN_P1                       BIT P4_IN.1
P4_IN_P10                      BIT P4_IN.10
P4_IN_P11                      BIT P4_IN.11
P4_IN_P12                      BIT P4_IN.12
P4_IN_P13                      BIT P4_IN.13
P4_IN_P14                      BIT P4_IN.14
P4_IN_P15                      BIT P4_IN.15
P4_IN_P2                       BIT P4_IN.2
P4_IN_P3                       BIT P4_IN.3
P4_IN_P4                       BIT P4_IN.4
P4_IN_P5                       BIT P4_IN.5
P4_IN_P6                       BIT P4_IN.6
P4_IN_P7                       BIT P4_IN.7
P4_IN_P8                       BIT P4_IN.8
P4_IN_P9                       BIT P4_IN.9

; Port 4 Input/Output Control Register 00
P4_IOCR00  EQU               0xE880

; Port 4 Input/Output Control Register 01
P4_IOCR01  EQU               0xE882

; Port 4 Input/Output Control Register 02
P4_IOCR02  EQU               0xE884

; Port 4 Input/Output Control Register 03
P4_IOCR03  EQU               0xE886

; Port 4 Input/Output Control Register 04
P4_IOCR04  EQU               0xE888

; Port 4 Input/Output Control Register 05
P4_IOCR05  EQU               0xE88A

; Port 4 Input/Output Control Register 06
P4_IOCR06  EQU               0xE88C

; Port 4 Input/Output Control Register 07
P4_IOCR07  EQU               0xE88E

; Port 4 Output Modification Register Low
P4_OMRL  EQU                 0xE9D0

; Port 4 Output Register
P4_OUT  DEFR                             0xFFAA
P4_OUT_P0                       BIT P4_OUT.0
P4_OUT_P1                       BIT P4_OUT.1
P4_OUT_P10                      BIT P4_OUT.10
P4_OUT_P11                      BIT P4_OUT.11
P4_OUT_P12                      BIT P4_OUT.12
P4_OUT_P13                      BIT P4_OUT.13
P4_OUT_P14                      BIT P4_OUT.14
P4_OUT_P15                      BIT P4_OUT.15
P4_OUT_P2                       BIT P4_OUT.2
P4_OUT_P3                       BIT P4_OUT.3
P4_OUT_P4                       BIT P4_OUT.4
P4_OUT_P5                       BIT P4_OUT.5
P4_OUT_P6                       BIT P4_OUT.6
P4_OUT_P7                       BIT P4_OUT.7
P4_OUT_P8                       BIT P4_OUT.8
P4_OUT_P9                       BIT P4_OUT.9

; Port 4 Output Control Register
P4_POCON  EQU                0xE8A8

; Port 5 Digital Input Disable Register
P5_DIDIS  DEFR                           0xFE8A

; Port 5 Input Register
P5_IN  DEFR                              0xFF8A
P5_IN_P0                       BIT P5_IN.0
P5_IN_P1                       BIT P5_IN.1
P5_IN_P10                      BIT P5_IN.10
P5_IN_P11                      BIT P5_IN.11
P5_IN_P12                      BIT P5_IN.12
P5_IN_P13                      BIT P5_IN.13
P5_IN_P14                      BIT P5_IN.14
P5_IN_P15                      BIT P5_IN.15
P5_IN_P2                       BIT P5_IN.2
P5_IN_P3                       BIT P5_IN.3
P5_IN_P4                       BIT P5_IN.4
P5_IN_P5                       BIT P5_IN.5
P5_IN_P6                       BIT P5_IN.6
P5_IN_P7                       BIT P5_IN.7
P5_IN_P8                       BIT P5_IN.8
P5_IN_P9                       BIT P5_IN.9

; Port 6 Input Register
P6_IN  DEFR                              0xFF8C
P6_IN_P0                       BIT P6_IN.0
P6_IN_P1                       BIT P6_IN.1
P6_IN_P10                      BIT P6_IN.10
P6_IN_P11                      BIT P6_IN.11
P6_IN_P12                      BIT P6_IN.12
P6_IN_P13                      BIT P6_IN.13
P6_IN_P14                      BIT P6_IN.14
P6_IN_P15                      BIT P6_IN.15
P6_IN_P2                       BIT P6_IN.2
P6_IN_P3                       BIT P6_IN.3
P6_IN_P4                       BIT P6_IN.4
P6_IN_P5                       BIT P6_IN.5
P6_IN_P6                       BIT P6_IN.6
P6_IN_P7                       BIT P6_IN.7
P6_IN_P8                       BIT P6_IN.8
P6_IN_P9                       BIT P6_IN.9

; Port 6 Input/Output Control Register 00
P6_IOCR00  EQU               0xE8C0

; Port 6 Input/Output Control Register 01
P6_IOCR01  EQU               0xE8C2

; Port 6 Input/Output Control Register 02
P6_IOCR02  EQU               0xE8C4

; Port 6 Input/Output Control Register 03
P6_IOCR03  EQU               0xE8C6

; Port 6 Output Modification Register Low
P6_OMRL  EQU                 0xE9D8

; Port 6 Output Register
P6_OUT  DEFR                             0xFFAE
P6_OUT_P0                       BIT P6_OUT.0
P6_OUT_P1                       BIT P6_OUT.1
P6_OUT_P10                      BIT P6_OUT.10
P6_OUT_P11                      BIT P6_OUT.11
P6_OUT_P12                      BIT P6_OUT.12
P6_OUT_P13                      BIT P6_OUT.13
P6_OUT_P14                      BIT P6_OUT.14
P6_OUT_P15                      BIT P6_OUT.15
P6_OUT_P2                       BIT P6_OUT.2
P6_OUT_P3                       BIT P6_OUT.3
P6_OUT_P4                       BIT P6_OUT.4
P6_OUT_P5                       BIT P6_OUT.5
P6_OUT_P6                       BIT P6_OUT.6
P6_OUT_P7                       BIT P6_OUT.7
P6_OUT_P8                       BIT P6_OUT.8
P6_OUT_P9                       BIT P6_OUT.9

; Port 6 Output Control Register
P6_POCON  EQU                0xE8AC

; Port 7 Input Register
P7_IN  DEFR                              0xFF8E
P7_IN_P0                       BIT P7_IN.0
P7_IN_P1                       BIT P7_IN.1
P7_IN_P10                      BIT P7_IN.10
P7_IN_P11                      BIT P7_IN.11
P7_IN_P12                      BIT P7_IN.12
P7_IN_P13                      BIT P7_IN.13
P7_IN_P14                      BIT P7_IN.14
P7_IN_P15                      BIT P7_IN.15
P7_IN_P2                       BIT P7_IN.2
P7_IN_P3                       BIT P7_IN.3
P7_IN_P4                       BIT P7_IN.4
P7_IN_P5                       BIT P7_IN.5
P7_IN_P6                       BIT P7_IN.6
P7_IN_P7                       BIT P7_IN.7
P7_IN_P8                       BIT P7_IN.8
P7_IN_P9                       BIT P7_IN.9

; Port 7 Input/Output Control Register 00
P7_IOCR00  EQU               0xE8E0

; Port 7 Input/Output Control Register 01
P7_IOCR01  EQU               0xE8E2

; Port 7 Input/Output Control Register 02
P7_IOCR02  EQU               0xE8E4

; Port 7 Input/Output Control Register 03
P7_IOCR03  EQU               0xE8E6

; Port 7 Input/Output Control Register 04
P7_IOCR04  EQU               0xE8E8

; Port 7 Output Modification Register Low
P7_OMRL  EQU                 0xE9DC

; Port 7 Output Register
P7_OUT  DEFR                             0xFFB0
P7_OUT_P0                       BIT P7_OUT.0
P7_OUT_P1                       BIT P7_OUT.1
P7_OUT_P10                      BIT P7_OUT.10
P7_OUT_P11                      BIT P7_OUT.11
P7_OUT_P12                      BIT P7_OUT.12
P7_OUT_P13                      BIT P7_OUT.13
P7_OUT_P14                      BIT P7_OUT.14
P7_OUT_P15                      BIT P7_OUT.15
P7_OUT_P2                       BIT P7_OUT.2
P7_OUT_P3                       BIT P7_OUT.3
P7_OUT_P4                       BIT P7_OUT.4
P7_OUT_P5                       BIT P7_OUT.5
P7_OUT_P6                       BIT P7_OUT.6
P7_OUT_P7                       BIT P7_OUT.7
P7_OUT_P8                       BIT P7_OUT.8
P7_OUT_P9                       BIT P7_OUT.9

; Port 7 Output Control Register
P7_POCON  EQU                0xE8AE

; Port 8 Input Register
P8_IN  DEFR                              0xFF90
P8_IN_P0                       BIT P8_IN.0
P8_IN_P1                       BIT P8_IN.1
P8_IN_P10                      BIT P8_IN.10
P8_IN_P11                      BIT P8_IN.11
P8_IN_P12                      BIT P8_IN.12
P8_IN_P13                      BIT P8_IN.13
P8_IN_P14                      BIT P8_IN.14
P8_IN_P15                      BIT P8_IN.15
P8_IN_P2                       BIT P8_IN.2
P8_IN_P3                       BIT P8_IN.3
P8_IN_P4                       BIT P8_IN.4
P8_IN_P5                       BIT P8_IN.5
P8_IN_P6                       BIT P8_IN.6
P8_IN_P7                       BIT P8_IN.7
P8_IN_P8                       BIT P8_IN.8
P8_IN_P9                       BIT P8_IN.9

; Port 8 Input/Output Control Register 00
P8_IOCR00  EQU               0xE900

; Port 8 Input/Output Control Register 01
P8_IOCR01  EQU               0xE902

; Port 8 Input/Output Control Register 02
P8_IOCR02  EQU               0xE904

; Port 8 Input/Output Control Register 03
P8_IOCR03  EQU               0xE906

; Port 8 Input/Output Control Register 04
P8_IOCR04  EQU               0xE908

; Port 8 Input/Output Control Register 05
P8_IOCR05  EQU               0xE90A

; Port 8 Input/Output Control Register 06
P8_IOCR06  EQU               0xE90C

; Port 8 Output Modification Register Low
P8_OMRL  EQU                 0xE9E0

; Port 8 Output Register
P8_OUT  DEFR                             0xFFB2
P8_OUT_P0                       BIT P8_OUT.0
P8_OUT_P1                       BIT P8_OUT.1
P8_OUT_P10                      BIT P8_OUT.10
P8_OUT_P11                      BIT P8_OUT.11
P8_OUT_P12                      BIT P8_OUT.12
P8_OUT_P13                      BIT P8_OUT.13
P8_OUT_P14                      BIT P8_OUT.14
P8_OUT_P15                      BIT P8_OUT.15
P8_OUT_P2                       BIT P8_OUT.2
P8_OUT_P3                       BIT P8_OUT.3
P8_OUT_P4                       BIT P8_OUT.4
P8_OUT_P5                       BIT P8_OUT.5
P8_OUT_P6                       BIT P8_OUT.6
P8_OUT_P7                       BIT P8_OUT.7
P8_OUT_P8                       BIT P8_OUT.8
P8_OUT_P9                       BIT P8_OUT.9

; Port 8 Output Control Register
P8_POCON  EQU                0xE8B0

; Port 9 Input Register
P9_IN  DEFR                              0xFF92
P9_IN_P0                       BIT P9_IN.0
P9_IN_P1                       BIT P9_IN.1
P9_IN_P10                      BIT P9_IN.10
P9_IN_P11                      BIT P9_IN.11
P9_IN_P12                      BIT P9_IN.12
P9_IN_P13                      BIT P9_IN.13
P9_IN_P14                      BIT P9_IN.14
P9_IN_P15                      BIT P9_IN.15
P9_IN_P2                       BIT P9_IN.2
P9_IN_P3                       BIT P9_IN.3
P9_IN_P4                       BIT P9_IN.4
P9_IN_P5                       BIT P9_IN.5
P9_IN_P6                       BIT P9_IN.6
P9_IN_P7                       BIT P9_IN.7
P9_IN_P8                       BIT P9_IN.8
P9_IN_P9                       BIT P9_IN.9

; Port 9 Input/Output Control Register 00
P9_IOCR00  EQU               0xE920

; Port 9 Input/Output Control Register 01
P9_IOCR01  EQU               0xE922

; Port 9 Input/Output Control Register 02
P9_IOCR02  EQU               0xE924

; Port 9 Input/Output Control Register 03
P9_IOCR03  EQU               0xE926

; Port 9 Input/Output Control Register 04
P9_IOCR04  EQU               0xE928

; Port 9 Input/Output Control Register 05
P9_IOCR05  EQU               0xE92A

; Port 9 Input/Output Control Register 06
P9_IOCR06  EQU               0xE92C

; Port 9 Input/Output Control Register 07
P9_IOCR07  EQU               0xE92E

; Port 9 Output Modification Register Low
P9_OMRL  EQU                 0xE9E4

; Port 9 Output Register
P9_OUT  DEFR                             0xFFB4
P9_OUT_P0                       BIT P9_OUT.0
P9_OUT_P1                       BIT P9_OUT.1
P9_OUT_P10                      BIT P9_OUT.10
P9_OUT_P11                      BIT P9_OUT.11
P9_OUT_P12                      BIT P9_OUT.12
P9_OUT_P13                      BIT P9_OUT.13
P9_OUT_P14                      BIT P9_OUT.14
P9_OUT_P15                      BIT P9_OUT.15
P9_OUT_P2                       BIT P9_OUT.2
P9_OUT_P3                       BIT P9_OUT.3
P9_OUT_P4                       BIT P9_OUT.4
P9_OUT_P5                       BIT P9_OUT.5
P9_OUT_P6                       BIT P9_OUT.6
P9_OUT_P7                       BIT P9_OUT.7
P9_OUT_P8                       BIT P9_OUT.8
P9_OUT_P9                       BIT P9_OUT.9

; Port 9 Output Control Register
P9_POCON  EQU                0xE8B2

; PEC Channel Control Reg. 0
PECC0  DEFR                              0xFEC0

; PEC Channel Control Reg. 1
PECC1  DEFR                              0xFEC2

; PEC Channel Control Reg. 2
PECC2  DEFR                              0xFEC4

; PEC Channel Control Reg. 3
PECC3  DEFR                              0xFEC6

; PEC Channel Control Reg. 4
PECC4  DEFR                              0xFEC8

; PEC Channel Control Reg. 5
PECC5  DEFR                              0xFECA

; PEC Channel Control Reg. 6
PECC6  DEFR                              0xFECC

; PEC Channel Control Reg. 7
PECC7  DEFR                              0xFECE

; PEC Intr. Sub Node Control
PECISNC  DEFR                            0xFFD8
PECISNC_C0IE                     BIT PECISNC.0
PECISNC_C0IR                     BIT PECISNC.1
PECISNC_C1IE                     BIT PECISNC.2
PECISNC_C1IR                     BIT PECISNC.3
PECISNC_C2IE                     BIT PECISNC.4
PECISNC_C2IR                     BIT PECISNC.5
PECISNC_C3IE                     BIT PECISNC.6
PECISNC_C3IR                     BIT PECISNC.7
PECISNC_C4IE                     BIT PECISNC.8
PECISNC_C4IR                     BIT PECISNC.9
PECISNC_C5IE                     BIT PECISNC.10
PECISNC_C5IR                     BIT PECISNC.11
PECISNC_C6IE                     BIT PECISNC.12
PECISNC_C6IR                     BIT PECISNC.13
PECISNC_C7IE                     BIT PECISNC.14
PECISNC_C7IR                     BIT PECISNC.15

; PEC Segment Pointer 0
PECSEG0  EQU                 0xEC80

; PEC Segment Pointer 1
PECSEG1  EQU                 0xEC82

; PEC Segment Pointer 2
PECSEG2  EQU                 0xEC84

; PEC Segment Pointer 3
PECSEG3  EQU                 0xEC86

; PEC Segment Pointer 4
PECSEG4  EQU                 0xEC88

; PEC Segment Pointer 5
PECSEG5  EQU                 0xEC8A

; PEC Segment Pointer 6
PECSEG6  EQU                 0xEC8C

; PEC Segment Pointer 7
PECSEG7  EQU                 0xEC8E

; Program Flash Interrupt
PFM_IC  DEFR                             0xF19A
PFM_IC_GPX                      BIT PFM_IC.8
PFM_IC_IE                       BIT PFM_IC.6
PFM_IC_IR                       BIT PFM_IC.7

; Processor Status Word
PSW  DEFR                                0xFF10
PSW_C                        BIT PSW.1
PSW_E                        BIT PSW.4
PSW_HLDEN                    BIT PSW.10
PSW_IEN                      BIT PSW.11
PSW_MULIP                    BIT PSW.5
PSW_N                        BIT PSW.0
PSW_USR0                     BIT PSW.6
PSW_USR1                     BIT PSW.7
PSW_V                        BIT PSW.2
PSW_Z                        BIT PSW.3

; Offset Register
QR0  DEFR                                0xF004

; Offset Register
QR1  DEFR                                0xF006

; Offset Register
QX0  DEFR                                0xF000

; Offset Register
QX1  DEFR                                0xF002

; Control Register
RTC_CON  DEFR                            0xF110
RTC_CON_ACCPOS                   BIT RTC_CON.15
RTC_CON_PRE                      BIT RTC_CON.1
RTC_CON_REFCLK                   BIT RTC_CON.4
RTC_CON_RUN                      BIT RTC_CON.0
RTC_CON_T14DEC                   BIT RTC_CON.2
RTC_CON_T14INC                   BIT RTC_CON.3

; Real Time Clock Interrupt
RTC_IC  DEFR                             0xF19C
RTC_IC_GPX                      BIT RTC_IC.8
RTC_IC_IE                       BIT RTC_IC.6
RTC_IC_IR                       BIT RTC_IC.7

; Interrupt Sub Node Control
RTC_ISNC  DEFR                           0xF10C
RTC_ISNC_CNT0IE                   BIT RTC_ISNC.2
RTC_ISNC_CNT0IR                   BIT RTC_ISNC.3
RTC_ISNC_CNT1IE                   BIT RTC_ISNC.4
RTC_ISNC_CNT1IR                   BIT RTC_ISNC.5
RTC_ISNC_CNT2IE                   BIT RTC_ISNC.6
RTC_ISNC_CNT2IR                   BIT RTC_ISNC.7
RTC_ISNC_CNT3IE                   BIT RTC_ISNC.8
RTC_ISNC_CNT3IR                   BIT RTC_ISNC.9
RTC_ISNC_T14IE                    BIT RTC_ISNC.0
RTC_ISNC_T14IR                    BIT RTC_ISNC.1

; RTC Kernel State Con. Register
RTC_KSCCFG  DEFR                         0xF010

; RTC Reload Register High
RTC_RELH  DEFR                           0xF0CE

; RTC Reload Register Low
RTC_RELL  DEFR                           0xF0CC

; RTC Count Register High
RTC_RTCH  DEFR                           0xF0D6

; RTC Count Register Low
RTC_RTCL  DEFR                           0xF0D4

; T14 Count Register
RTC_T14  DEFR                            0xF0D2

; T14 Reload Register
RTC_T14REL  DEFR                         0xF0D0

; RWDATA in Monitor Controlled Tracing Mode
RWDATA  DEFR                             0xF06A

; Data Register in RW Mode
RWDATA  DEFR                             0xF06A

; Data Register in RW Mode, Byte layout
RWDATA  DEFR                             0xF06A

; SBRAM Data Register 0
SBRAM_DATA0  DEFR                        0xFEE0

; SBRAM Data Register 1
SBRAM_DATA1  DEFR                        0xFEE2

; SBRAM Read Address Register
SBRAM_RADD  DEFR                         0xFEDC

; SBRAM Write Address Register
SBRAM_WADD  DEFR                         0xFEDE

; SCU 0
SCU_0IC  DEFR                            0xF198
SCU_0IC_GPX                      BIT SCU_0IC.8
SCU_0IC_IE                       BIT SCU_0IC.6
SCU_0IC_IR                       BIT SCU_0IC.7

; SCU 1
SCU_1IC  DEFR                            0xF196
SCU_1IC_GPX                      BIT SCU_1IC.8
SCU_1IC_IE                       BIT SCU_1IC.6
SCU_1IC_IR                       BIT SCU_1IC.7

; Debug Pin Routing Register
SCU_DBGPRR  DEFR                         0xF06E

; DMP_M Int. and Trap Trigger Register
SCU_DMPMIT  DEFR                         0xFE96

; DMP_M Int. and Trap Clear Register
SCU_DMPMITCLR  DEFR                      0xFE98

; ESR0 Configuration Register
SCU_ESRCFG0  DEFR                        0xF100
SCU_ESRCFG0_DFEN                     BIT SCU_ESRCFG0.4
SCU_ESRCFG0_IN                       BIT SCU_ESRCFG0.6
SCU_ESRCFG0_OUT                      BIT SCU_ESRCFG0.5

; ESR1 Configuration Register
SCU_ESRCFG1  DEFR                        0xF102
SCU_ESRCFG1_DFEN                     BIT SCU_ESRCFG1.4
SCU_ESRCFG1_IN                       BIT SCU_ESRCFG1.6
SCU_ESRCFG1_OUT                      BIT SCU_ESRCFG1.5

; ESR2 Configuration Register
SCU_ESRCFG2  DEFR                        0xF104
SCU_ESRCFG2_DFEN                     BIT SCU_ESRCFG2.4
SCU_ESRCFG2_IN                       BIT SCU_ESRCFG2.6
SCU_ESRCFG2_OUT                      BIT SCU_ESRCFG2.5

; ESR Data Register
SCU_ESRDAT  DEFR                         0xF106

; ESR1 External Control Register
SCU_ESREXCON1  DEFR                      0xFF32
SCU_ESREXCON1_ESR1EN                   BIT SCU_ESREXCON1.0
SCU_ESREXCON1_P100EN                   BIT SCU_ESREXCON1.3
SCU_ESREXCON1_P10EN                    BIT SCU_ESREXCON1.4
SCU_ESREXCON1_P12EN                    BIT SCU_ESREXCON1.5
SCU_ESREXCON1_P21EN                    BIT SCU_ESREXCON1.6
SCU_ESREXCON1_P24EN                    BIT SCU_ESREXCON1.1
SCU_ESREXCON1_P30EN                    BIT SCU_ESREXCON1.2

; ESR2 External Control Register
SCU_ESREXCON2  DEFR                      0xFF34
SCU_ESREXCON2_ESR2EN                   BIT SCU_ESREXCON2.0
SCU_ESREXCON2_P1014EN                  BIT SCU_ESREXCON2.3
SCU_ESREXCON2_P11EN                    BIT SCU_ESREXCON2.4
SCU_ESREXCON2_P13EN                    BIT SCU_ESREXCON2.5
SCU_ESREXCON2_P22EN                    BIT SCU_ESREXCON2.6
SCU_ESREXCON2_P23EN                    BIT SCU_ESREXCON2.1
SCU_ESREXCON2_P70EN                    BIT SCU_ESREXCON2.2

; EVR_1 Control 0 Register
SCU_EVR1CON0  DEFR                       0xF088

; EVR_1 Setting for 1.0 V Register
SCU_EVR1SET10V  DEFR                     0xF098

; EVR_1 Setting for 1.5 V HP Register
SCU_EVR1SET15VHP  DEFR                   0xF09E

; EVR_1 Setting for 1.5 V LP Register
SCU_EVR1SET15VLP  DEFR                   0xF09C

; EVR_1 Status Register
SCU_EVR1STAT  DEFR                       0xF08E

; EVR_M Control 0 Register
SCU_EVRMCON0  DEFR                       0xF084

; EVR_M Control 1 Register
SCU_EVRMCON1  DEFR                       0xF086

; EVR_M Setting for 1.0 V Register
SCU_EVRMSET10V  DEFR                     0xF090

; EVR_M Setting for 1.5 V HP Register
SCU_EVRMSET15VHP  DEFR                   0xF096

; EVR_M Setting for 1.5 V LP Register
SCU_EVRMSET15VLP  DEFR                   0xF094

; EVR_M Status Register
SCU_EVRMSTAT  DEFR                       0xF08C

; External Int. Trigger Control 0 Register
SCU_EXICON0  DEFR                        0xF030

; External Int. Trigger Control 1 Register
SCU_EXICON1  DEFR                        0xF032

; External Int. Trigger Control 2 Register
SCU_EXICON2  DEFR                        0xF034

; External Int. Trigger Control 3 Register
SCU_EXICON3  DEFR                        0xF036

; External Int. Input Select Register
SCU_EXISEL  DEFR                         0xF1A0

; External Output Trigger Control 0 Register
SCU_EXOCON0  DEFR                        0xFE30

; External Output Trigger Control 1 Register
SCU_EXOCON1  DEFR                        0xFE32

; External Output Trigger Control 2 Register
SCU_EXOCON2  DEFR                        0xFE34

; External Output Trigger Control 3 Register
SCU_EXOCON3  DEFR                        0xFE36

; External Clock Control Register
SCU_EXTCON  DEFR                         0xFF5E
SCU_EXTCON_EN                       BIT SCU_EXTCON.0
SCU_EXTCON_FOEN                     BIT SCU_EXTCON.15
SCU_EXTCON_FOSS                     BIT SCU_EXTCON.14
SCU_EXTCON_FOTL                     BIT SCU_EXTCON.6

; GSC Enable Register
SCU_GSCEN  DEFR                          0xFF16
SCU_GSCEN_1                        BIT SCU_GSCEN.13
SCU_GSCEN_ESR0EN                   BIT SCU_GSCEN.5
SCU_GSCEN_ESR1EN                   BIT SCU_GSCEN.6
SCU_GSCEN_ESR2EN                   BIT SCU_GSCEN.7
SCU_GSCEN_GPTEN                    BIT SCU_GSCEN.10
SCU_GSCEN_ITCEN                    BIT SCU_GSCEN.9
SCU_GSCEN_OCDSENEN                 BIT SCU_GSCEN.14
SCU_GSCEN_OCDSEXEN                 BIT SCU_GSCEN.4
SCU_GSCEN_PSCAENEN                 BIT SCU_GSCEN.3
SCU_GSCEN_PSCAEXEN                 BIT SCU_GSCEN.2
SCU_GSCEN_PSCBENEN                 BIT SCU_GSCEN.1
SCU_GSCEN_PSCBEXEN                 BIT SCU_GSCEN.0
SCU_GSCEN_SW1EN                    BIT SCU_GSCEN.11
SCU_GSCEN_SW2EN                    BIT SCU_GSCEN.12
SCU_GSCEN_WUTEN                    BIT SCU_GSCEN.8

; GSC Status Register
SCU_GSCSTAT  DEFR                        0xFF18
SCU_GSCSTAT_ERR                      BIT SCU_GSCSTAT.8
SCU_GSCSTAT_PEN                      BIT SCU_GSCSTAT.9

; GSC SW Request Register
SCU_GSCSWREQ  DEFR                       0xFF14
SCU_GSCSWREQ_SWTRG1                   BIT SCU_GSCSWREQ.0
SCU_GSCSWREQ_SWTRG2                   BIT SCU_GSCSWREQ.1

; High Precision OSC Control Register
SCU_HPOSCCON  DEFR                       0xF1B4
SCU_HPOSCCON_EMCLKEN                  BIT SCU_HPOSCCON.9
SCU_HPOSCCON_EMFINDISEN               BIT SCU_HPOSCCON.10
SCU_HPOSCCON_OSC2L0                   BIT SCU_HPOSCCON.12
SCU_HPOSCCON_OSC2L1                   BIT SCU_HPOSCCON.11
SCU_HPOSCCON_OSCWDTRST                BIT SCU_HPOSCCON.1
SCU_HPOSCCON_PLLV                     BIT SCU_HPOSCCON.0
SCU_HPOSCCON_SHBY                     BIT SCU_HPOSCCON.8
SCU_HPOSCCON_X1D                      BIT SCU_HPOSCCON.6
SCU_HPOSCCON_X1DEN                    BIT SCU_HPOSCCON.7

; Chip Identification Register
SCU_IDCHIP  DEFR                         0xF07C

; Manufacturer Identification Register
SCU_IDMANUF  DEFR                        0xF07E

; Program Memory Identification Register
SCU_IDMEM  DEFR                          0xF07A

; Programming Voltage Id. Register
SCU_IDPROG  DEFR                         0xF078

; Interrupt Clear Register
SCU_INTCLR  DEFR                         0xFE82

; Interrupt Disable Register
SCU_INTDIS  DEFR                         0xFE84

; Interrupt Node Pointer 0 Register
SCU_INTNP0  DEFR                         0xFE86

; Interrupt Node Pointer 1 Register
SCU_INTNP1  DEFR                         0xFE88

; Interrupt Set Register
SCU_INTSET  DEFR                         0xFE80

; Interrupt Status Register
SCU_INTSTAT  DEFR                        0xFF00
SCU_INTSTAT_GSCI                     BIT SCU_INTSTAT.9
SCU_INTSTAT_PVC1I1                   BIT SCU_INTSTAT.4
SCU_INTSTAT_PVC1I2                   BIT SCU_INTSTAT.5
SCU_INTSTAT_PVCMI1                   BIT SCU_INTSTAT.2
SCU_INTSTAT_PVCMI2                   BIT SCU_INTSTAT.3
SCU_INTSTAT_SWDI1                    BIT SCU_INTSTAT.0
SCU_INTSTAT_SWDI2                    BIT SCU_INTSTAT.1
SCU_INTSTAT_WDTI                     BIT SCU_INTSTAT.8
SCU_INTSTAT_WUI                      BIT SCU_INTSTAT.7
SCU_INTSTAT_WUTI                     BIT SCU_INTSTAT.6

; Interrupt Source Select Register
SCU_ISSR  DEFR                           0xFF2E
SCU_ISSR_ISS0                     BIT SCU_ISSR.0
SCU_ISSR_ISS1                     BIT SCU_ISSR.1
SCU_ISSR_ISS10                    BIT SCU_ISSR.10
SCU_ISSR_ISS11                    BIT SCU_ISSR.11
SCU_ISSR_ISS12                    BIT SCU_ISSR.12
SCU_ISSR_ISS13                    BIT SCU_ISSR.13
SCU_ISSR_ISS14                    BIT SCU_ISSR.14
SCU_ISSR_ISS15                    BIT SCU_ISSR.15
SCU_ISSR_ISS2                     BIT SCU_ISSR.2
SCU_ISSR_ISS3                     BIT SCU_ISSR.3
SCU_ISSR_ISS4                     BIT SCU_ISSR.4
SCU_ISSR_ISS5                     BIT SCU_ISSR.5
SCU_ISSR_ISS6                     BIT SCU_ISSR.6
SCU_ISSR_ISS7                     BIT SCU_ISSR.7
SCU_ISSR_ISS8                     BIT SCU_ISSR.8
SCU_ISSR_ISS9                     BIT SCU_ISSR.9

; Marker Memory 0 Register
SCU_MKMEM0  DEFR                         0xFED0

; Marker Memory 1 Register
SCU_MKMEM1  DEFR                         0xFED2

; Marker Memory 2 Register
SCU_MKMEM2  DEFR                         0xFED4

; Marker Memory 3 Register
SCU_MKMEM3  DEFR                         0xFED6

; PLL Configuration 0 Register
SCU_PLLCON0  DEFR                        0xF1B8
SCU_PLLCON0_NACK                     BIT SCU_PLLCON0.15
SCU_PLLCON0_REGENCLR                 BIT SCU_PLLCON0.4
SCU_PLLCON0_REGENSET                 BIT SCU_PLLCON0.5
SCU_PLLCON0_VCOBY                    BIT SCU_PLLCON0.0
SCU_PLLCON0_VCOPWD                   BIT SCU_PLLCON0.1

; PLL Configuration 1 Register
SCU_PLLCON1  DEFR                        0xF1BA
SCU_PLLCON1_AOSCSEL                  BIT SCU_PLLCON1.3
SCU_PLLCON1_EMCLKEN                  BIT SCU_PLLCON1.5
SCU_PLLCON1_EMFINDISEN               BIT SCU_PLLCON1.6
SCU_PLLCON1_OSCSEL                   BIT SCU_PLLCON1.1
SCU_PLLCON1_PACK                     BIT SCU_PLLCON1.15
SCU_PLLCON1_PLLPWD                   BIT SCU_PLLCON1.0
SCU_PLLCON1_RESLD                    BIT SCU_PLLCON1.2

; PLL Configuration 2 Register
SCU_PLLCON2  DEFR                        0xF1BC
SCU_PLLCON2_K1ACK                    BIT SCU_PLLCON2.15

; PLL Configuration 3 Register
SCU_PLLCON3  DEFR                        0xF1BE
SCU_PLLCON3_K2ACK                    BIT SCU_PLLCON3.15

; PLL OSC Configuration Register
SCU_PLLOSCCON  DEFR                      0xF1B6
SCU_PLLOSCCON_OSCPD                    BIT SCU_PLLOSCCON.0

; PLL Status Register
SCU_PLLSTAT  DEFR                        0xF0BC

; PSC Status Register
SCU_PSCSTAT  EQU             0xFFE8

; PVC_1 Control Step 0 Register
SCU_PVC1CON0  DEFR                       0xF014

; PVC_1 Control for Step 1Set A Register
SCU_PVC1CONA1  DEFR                      0xF016

; PVC_1 Control for Step 2 Set A Register
SCU_PVC1CONA2  DEFR                      0xF018

; PVC_1 Control for Step 3 Set A Register
SCU_PVC1CONA3  DEFR                      0xF01A

; PVC_1 Control for Step 4 Set A Register
SCU_PVC1CONA4  DEFR                      0xF01C

; PVC_1 Control for Step 5 Set A Register
SCU_PVC1CONA5  DEFR                      0xF01E

; PVC_1 Control for Step 6 Set A Register
SCU_PVC1CONA6  DEFR                      0xF020

; PVC_1 Control for Step 1 Set B Register
SCU_PVC1CONB1  DEFR                      0xF024

; PVC_1 Control for Step 2 Set B Register
SCU_PVC1CONB2  DEFR                      0xF026

; PVC_1 Control for Step 3 Set B Register
SCU_PVC1CONB3  DEFR                      0xF028

; PVC_1 Control for Step 4 Set B Register
SCU_PVC1CONB4  DEFR                      0xF02A

; PVC_1 Control for Step 5 Set B Register
SCU_PVC1CONB5  DEFR                      0xF02C

; PVC_1 Control for Step 6 Set B Register
SCU_PVC1CONB6  DEFR                      0xF02E

; PVC_M Control Step 0 Register
SCU_PVCMCON0  EQU            0xF1E4

; PVC_M Control for Step 1 Set A Register
SCU_PVCMCONA1  EQU           0xF1E6

; PVC_M Control for Step 2 Set A Register
SCU_PVCMCONA2  EQU           0xF1E8

; PVC_M Control for Step 3 Set A Register
SCU_PVCMCONA3  EQU           0xF1EA

; PVC_M Control for Step 4 Set A Register
SCU_PVCMCONA4  EQU           0xF1EC

; PVC_M Control for Step 5 Set A Register
SCU_PVCMCONA5  EQU           0xF1EE

; PVC_M Control for Step 6 Set A Register
SCU_PVCMCONA6  EQU           0xF1F0

; PVC_M Control for Step 1 Set B Register
SCU_PVCMCONB1  EQU           0xF1F4

; PVC_M Control for Step 2 Set B Register
SCU_PVCMCONB2  EQU           0xF1F6

; PVC_M Control for Step 3 Set B Register
SCU_PVCMCONB3  EQU           0xF1F8

; PVC_M Control for Step 4 Set B Register
SCU_PVCMCONB4  EQU           0xF1FA

; PVC_M Control for Step 5 Set B Register
SCU_PVCMCONB5  EQU           0xF1FC

; PVC_M Control for Step 6 Set B Register
SCU_PVCMCONB6  EQU           0xF1FE

; Reset Counter Control Register
SCU_RSTCNTCON  DEFR                      0xF1B2

; Reset Configuration 0 Register
SCU_RSTCON0  DEFR                        0xF0B8

; Reset Configuration 1 Register
SCU_RSTCON1  DEFR                        0xF0BA

; Reset Status 0 Register
SCU_RSTSTAT0  DEFR                       0xF0B2

; Reset Status 1 Register
SCU_RSTSTAT1  DEFR                       0xF0B4

; Reset Status 2 Register
SCU_RSTSTAT2  DEFR                       0xF0B6

; RTC Clock Control Register
SCU_RTCCLKCON  DEFR                      0xFF4E
SCU_RTCCLKCON_RTCCM                    BIT SCU_RTCCLKCON.2

; Sequence Step 1 for Set A Register
SCU_SEQASTEP1  DEFR                      0xFEE6

; Sequence Step 2 for Set A Register
SCU_SEQASTEP2  DEFR                      0xFEE8

; Sequence Step 3 for Set A Register
SCU_SEQASTEP3  DEFR                      0xFEEA

; Sequence Step 4 for Set A Register
SCU_SEQASTEP4  DEFR                      0xFEEC

; Sequence Step 5 for Set A Register
SCU_SEQASTEP5  DEFR                      0xFEEE

; Sequence Step 6 for Set A Register
SCU_SEQASTEP6  DEFR                      0xFEF0

; Sequence Step 1 for Set B Register
SCU_SEQBSTEP1  DEFR                      0xFEF4

; Sequence Step 2 for Set B Register
SCU_SEQBSTEP2  DEFR                      0xFEF6

; Sequence Step 3 for Set B Register
SCU_SEQBSTEP3  DEFR                      0xFEF8

; Sequence Step 4 for Set B Register
SCU_SEQBSTEP4  DEFR                      0xFEFA

; Sequence Step 5 for Set B Register
SCU_SEQBSTEP5  DEFR                      0xFEFC

; Sequence Step 6 for Set B Register
SCU_SEQBSTEP6  DEFR                      0xFEFE

; Sequence Control Register
SCU_SEQCON  DEFR                         0xFEE4

; Security Level Command Register
SCU_SLC  DEFR                            0xF0C0

; Security Level Status Register
SCU_SLS  DEFR                            0xF0C2

; Status Clear 0 Register
SCU_STATCLR0  DEFR                       0xF0E0

; Status Clear 1 Register
SCU_STATCLR1  DEFR                       0xF0E2

; Start-up Configuration Register
SCU_STCON  EQU               0xF1E2

; Step 0 Register
SCU_STEP0  DEFR                          0xFEF2

; Start-up Memory 0 Register
SCU_STMEM0  DEFR                         0xF0A0

; Start-up Status Register
SCU_STSTAT  EQU              0xF1E0

; SWD Control 0 Register
SCU_SWDCON0  DEFR                        0xF080

; SWD Control 1 Register
SCU_SWDCON1  DEFR                        0xF082

; SW Reset Control Register
SCU_SWRSTCON  DEFR                       0xF0AE

; System Control 0 Register
SCU_SYSCON0  DEFR                        0xFF4A
SCU_SYSCON0_EMCLKSELEN               BIT SCU_SYSCON0.6
SCU_SYSCON0_EMSOSC                   BIT SCU_SYSCON0.12
SCU_SYSCON0_EMSPWR                   BIT SCU_SYSCON0.14
SCU_SYSCON0_EMSVCO                   BIT SCU_SYSCON0.13
SCU_SYSCON0_SELSTAT                  BIT SCU_SYSCON0.15

; System Control 1 Register
SCU_SYSCON1  DEFR                        0xFF4C
SCU_SYSCON1_GLCCST                   BIT SCU_SYSCON1.3
SCU_SYSCON1_OCDSEN                   BIT SCU_SYSCON1.2
SCU_SYSCON1_VRMDS                    BIT SCU_SYSCON1.1
SCU_SYSCON1_VRMPS                    BIT SCU_SYSCON1.0

; Temperature Compensation Register
SCU_TCCR  DEFR                           0xF1AC
SCU_TCCR_TCE                      BIT SCU_TCCR.7

; Temperature Comp. Level Register
SCU_TCLR  DEFR                           0xF0AC

; Trap Clear Register
SCU_TRAPCLR  DEFR                        0xFE8E

; Trap Disable Register
SCU_TRAPDIS  DEFR                        0xFE90

; Trap Node Pointer Register
SCU_TRAPNP  DEFR                         0xFE92

; Trap Set Register
SCU_TRAPSET  DEFR                        0xFE8C

; Trap Status Register
SCU_TRAPSTAT  DEFR                       0xFF02
SCU_TRAPSTAT_ESR0T                    BIT SCU_TRAPSTAT.1
SCU_TRAPSTAT_ESR1T                    BIT SCU_TRAPSTAT.2
SCU_TRAPSTAT_ESR2T                    BIT SCU_TRAPSTAT.3
SCU_TRAPSTAT_FAT                      BIT SCU_TRAPSTAT.0
SCU_TRAPSTAT_OSCWDTT                  BIT SCU_TRAPSTAT.4
SCU_TRAPSTAT_PET                      BIT SCU_TRAPSTAT.6
SCU_TRAPSTAT_RAT                      BIT SCU_TRAPSTAT.5
SCU_TRAPSTAT_VCOLCKT                  BIT SCU_TRAPSTAT.7

; WDT Control and Status Register
SCU_WDTCS  DEFR                          0xF0C6

; WDT Reload Register
SCU_WDTREL  DEFR                         0xF0C8

; WDT Timer Register
SCU_WDTTIM  DEFR                         0xF0CA

; Wake-up Interval Count Register
SCU_WICR  DEFR                           0xF0B0

; Wake-up Control Register
SCU_WUCR  DEFR                           0xF1B0
SCU_WUCR_AON                      BIT SCU_WUCR.9
SCU_WUCR_ASP                      BIT SCU_WUCR.10
SCU_WUCR_CLRTRG                   BIT SCU_WUCR.7
SCU_WUCR_RUN                      BIT SCU_WUCR.8
SCU_WUCR_TTSTAT                   BIT SCU_WUCR.14
SCU_WUCR_WUTRG                    BIT SCU_WUCR.15

; Wake-up OSC Control Register
SCU_WUOSCCON  DEFR                       0xF1AE
SCU_WUOSCCON_DIS                      BIT SCU_WUOSCCON.4

; Stack Pointer
SP  DEFR                                 0xFE12

; Stack Pointer Segment
SPSEG  DEFR                              0xFF0C

; PEC Source Pointer 0
SRCP0  EQU                   0xEC40

; PEC Source Pointer 1
SRCP1  EQU                   0xEC44

; PEC Source Pointer 2
SRCP2  EQU                   0xEC48

; PEC Source Pointer 3
SRCP3  EQU                   0xEC4C

; PEC Source Pointer 4
SRCP4  EQU                   0xEC50

; PEC Source Pointer 5
SRCP5  EQU                   0xEC54

; PEC Source Pointer 6
SRCP6  EQU                   0xEC58

; PEC Source Pointer 7
SRCP7  EQU                   0xEC5C

; Stack Overflow Pointer
STKOV  DEFR                              0xFE14

; Stack Underflow Pointer
STKUN  DEFR                              0xFE16

; Trap Flag Register
TFR  DEFR                                0xFFAC
TFR_ACER                     BIT TFR.4
TFR_ILLOPA                   BIT TFR.2
TFR_PRTFLT                   BIT TFR.3
TFR_SOFTBRK                  BIT TFR.12
TFR_SR0                      BIT TFR.15
TFR_SR1                      BIT TFR.11
TFR_STKOF                    BIT TFR.14
TFR_STKUF                    BIT TFR.13
TFR_UNDOPC                   BIT TFR.7

; USIC Interrupt Control Reg. 0
U0C0_0IC  DEFR                           0xF120
U0C0_0IC_GPX                      BIT U0C0_0IC.8
U0C0_0IC_IE                       BIT U0C0_0IC.6
U0C0_0IC_IR                       BIT U0C0_0IC.7

; USIC Interrupt Control Reg. 1
U0C0_1IC  DEFR                           0xF122
U0C0_1IC_GPX                      BIT U0C0_1IC.8
U0C0_1IC_IE                       BIT U0C0_1IC.6
U0C0_1IC_IR                       BIT U0C0_1IC.7

; USIC Interrupt Control Reg. 2
U0C0_2IC  DEFR                           0xF124
U0C0_2IC_GPX                      BIT U0C0_2IC.8
U0C0_2IC_IE                       BIT U0C0_2IC.6
U0C0_2IC_IR                       BIT U0C0_2IC.7

; Baud Rate Generator Register H
U0C0_BRGH  EQU               0x20401E

; Baud Rate Generator Register L
U0C0_BRGL  EQU               0x20401C

; Bypass Data Register
U0C0_BYP  EQU                0x204100

; Bypass Control Register H
U0C0_BYPCRH  EQU             0x204106

; Bypass Control Register L
U0C0_BYPCRL  EQU             0x204104

; Channel Configuration Register
U0C0_CCFG  EQU               0x204018

; Channel Control Register
U0C0_CCR  EQU                0x204010

; I0put Control Register n
U0C0_DX0CR  EQU              0x204020

; I1put Control Register n
U0C0_DX1CR  EQU              0x204024

; I2put Control Register n
U0C0_DX2CR  EQU              0x204028

; Error Detection and Correction Test Register H
U0C0_EDCRH  EQU              0x20406E

; Error Detection and Correction Test Register L
U0C0_EDCRL  EQU              0x20406C

; Fractional Divider Register H
U0C0_FDRH  EQU               0x204006

; Fractional Divider Register L
U0C0_FDRL  EQU               0x204004

; Flag Modification Register H
U0C0_FMRH  EQU               0x20403A

; Flag Modification Register L
U0C0_FMRL  EQU               0x204038

; Transmit FIFO Input Location 00
U0C0_IN00  EQU               0x204180

; Transmit FIFO Input Location 01
U0C0_IN01  EQU               0x204184

; Transmit FIFO Input Location 02
U0C0_IN02  EQU               0x204188

; Transmit FIFO Input Location 03
U0C0_IN03  EQU               0x20418C

; Transmit FIFO Input Location 04
U0C0_IN04  EQU               0x204190

; Transmit FIFO Input Location 05
U0C0_IN05  EQU               0x204194

; Transmit FIFO Input Location 06
U0C0_IN06  EQU               0x204198

; Transmit FIFO Input Location 07
U0C0_IN07  EQU               0x20419C

; Transmit FIFO Input Location 08
U0C0_IN08  EQU               0x2041A0

; Transmit FIFO Input Location 09
U0C0_IN09  EQU               0x2041A4

; Transmit FIFO Input Location 10
U0C0_IN10  EQU               0x2041A8

; Transmit FIFO Input Location 11
U0C0_IN11  EQU               0x2041AC

; Transmit FIFO Input Location 12
U0C0_IN12  EQU               0x2041B0

; Transmit FIFO Input Location 13
U0C0_IN13  EQU               0x2041B4

; Transmit FIFO Input Location 14
U0C0_IN14  EQU               0x2041B8

; Transmit FIFO Input Location 15
U0C0_IN15  EQU               0x2041BC

; Transmit FIFO Input Location 16
U0C0_IN16  EQU               0x2041C0

; Transmit FIFO Input Location 17
U0C0_IN17  EQU               0x2041C4

; Transmit FIFO Input Location 18
U0C0_IN18  EQU               0x2041C8

; Transmit FIFO Input Location 19
U0C0_IN19  EQU               0x2041CC

; Transmit FIFO Input Location 20
U0C0_IN20  EQU               0x2041D0

; Transmit FIFO Input Location 21
U0C0_IN21  EQU               0x2041D4

; Transmit FIFO Input Location 22
U0C0_IN22  EQU               0x2041D8

; Transmit FIFO Input Location 23
U0C0_IN23  EQU               0x2041DC

; Transmit FIFO Input Location 24
U0C0_IN24  EQU               0x2041E0

; Transmit FIFO Input Location 25
U0C0_IN25  EQU               0x2041E4

; Transmit FIFO Input Location 26
U0C0_IN26  EQU               0x2041E8

; Transmit FIFO Input Location 27
U0C0_IN27  EQU               0x2041EC

; Transmit FIFO Input Location 28
U0C0_IN28  EQU               0x2041F0

; Transmit FIFO Input Location 29
U0C0_IN29  EQU               0x2041F4

; Transmit FIFO Input Location 30
U0C0_IN30  EQU               0x2041F8

; Transmit FIFO Input Location 31
U0C0_IN31  EQU               0x2041FC

; Interrupt Node Pointer Register H
U0C0_INPRH  EQU              0x204016

; Interrupt Node Pointer Register L
U0C0_INPRL  EQU              0x204014

; Kernel State Configuration Register
U0C0_KSCFG  EQU              0x20400C

; Receiver Buffer Output Register H for Debugger
U0C0_OUTDRH  EQU             0x204126

; Receiver Buffer Output Register L for Debugger
U0C0_OUTDRL  EQU             0x204124

; Receiver Buffer Output Register H
U0C0_OUTRH  EQU              0x204122

; Receiver Buffer Output Register L
U0C0_OUTRL  EQU              0x204120

; Protocol Control Register H
U0C0_PCRH  EQU               0x204042

; Protocol Control Register L
U0C0_PCRL  EQU               0x204040

; Protocol Status Clear Register
U0C0_PSCR  EQU               0x204048

; Protocol Status Register
U0C0_PSR  EQU                0x204044

; Receiver Buffer Control Register H
U0C0_RBCTRH  EQU             0x204116

; Receiver Buffer Control Register L
U0C0_RBCTRL  EQU             0x204114

; Receiver Buffer Register
U0C0_RBUF  EQU               0x20405C

; Receiver Buffer Register 0
U0C0_RBUF0  EQU              0x204050

; Receiver Buffer 01 Status Register H
U0C0_RBUF01SRH  EQU          0x204062

; Receiver Buffer 01 Status Register L
U0C0_RBUF01SRL  EQU          0x204060

; Receiver Buffer Register 1
U0C0_RBUF1  EQU              0x204054

; Receiver Buffer Reg. for Debugger
U0C0_RBUFD  EQU              0x20404C

; Receiver Buffer Status Register
U0C0_RBUFSR  EQU             0x204058

; Shift Control Register H
U0C0_SCTRH  EQU              0x204032

; Shift Control Register L
U0C0_SCTRL  EQU              0x204030

; Transmitter Buffer Control Reg. H
U0C0_TBCTRH  EQU             0x204112

; Transmitter Buffer Control Reg. L
U0C0_TBCTRL  EQU             0x204110

; Transmit Buffer Location 00
U0C0_TBUF00  EQU             0x204080

; Transmit Buffer Location 01
U0C0_TBUF01  EQU             0x204084

; Transmit Buffer Location 02
U0C0_TBUF02  EQU             0x204088

; Transmit Buffer Location 03
U0C0_TBUF03  EQU             0x20408C

; Transmit Buffer Location 04
U0C0_TBUF04  EQU             0x204090

; Transmit Buffer Location 05
U0C0_TBUF05  EQU             0x204094

; Transmit Buffer Location 06
U0C0_TBUF06  EQU             0x204098

; Transmit Buffer Location 07
U0C0_TBUF07  EQU             0x20409C

; Transmit Buffer Location 08
U0C0_TBUF08  EQU             0x2040A0

; Transmit Buffer Location 09
U0C0_TBUF09  EQU             0x2040A4

; Transmit Buffer Location 10
U0C0_TBUF10  EQU             0x2040A8

; Transmit Buffer Location 11
U0C0_TBUF11  EQU             0x2040AC

; Transmit Buffer Location 12
U0C0_TBUF12  EQU             0x2040B0

; Transmit Buffer Location 13
U0C0_TBUF13  EQU             0x2040B4

; Transmit Buffer Location 14
U0C0_TBUF14  EQU             0x2040B8

; Transmit Buffer Location 15
U0C0_TBUF15  EQU             0x2040BC

; Transmit Buffer Location 16
U0C0_TBUF16  EQU             0x2040C0

; Transmit Buffer Location 17
U0C0_TBUF17  EQU             0x2040C4

; Transmit Buffer Location 18
U0C0_TBUF18  EQU             0x2040C8

; Transmit Buffer Location 19
U0C0_TBUF19  EQU             0x2040CC

; Transmit Buffer Location 20
U0C0_TBUF20  EQU             0x2040D0

; Transmit Buffer Location 21
U0C0_TBUF21  EQU             0x2040D4

; Transmit Buffer Location 22
U0C0_TBUF22  EQU             0x2040D8

; Transmit Buffer Location 23
U0C0_TBUF23  EQU             0x2040DC

; Transmit Buffer Location 24
U0C0_TBUF24  EQU             0x2040E0

; Transmit Buffer Location 25
U0C0_TBUF25  EQU             0x2040E4

; Transmit Buffer Location 26
U0C0_TBUF26  EQU             0x2040E8

; Transmit Buffer Location 27
U0C0_TBUF27  EQU             0x2040EC

; Transmit Buffer Location 28
U0C0_TBUF28  EQU             0x2040F0

; Transmit Buffer Location 29
U0C0_TBUF29  EQU             0x2040F4

; Transmit Buffer Location 30
U0C0_TBUF30  EQU             0x2040F8

; Transmit Buffer Location 31
U0C0_TBUF31  EQU             0x2040FC

; Transmit Control/Status Register H
U0C0_TCSRH  EQU              0x20403E

; Transmit Control/Status Register L
U0C0_TCSRL  EQU              0x20403C

; Transmit / Receive Buffer Pointer Reg H
U0C0_TRBPTRH  EQU            0x20410A

; Transmit / Receive Buffer Pointer Reg L
U0C0_TRBPTRL  EQU            0x204108

; Transmit / Receive Buffer Status Clear Reg
U0C0_TRBSCR  EQU             0x20411C

; Transmit / Receive Buffer Status Reg H
U0C0_TRBSRH  EQU             0x20411A

; Transmit / Receive Buffer Status Reg. L
U0C0_TRBSRL  EQU             0x204118

; USIC Interrupt Control Reg. 0
U0C1_0IC  DEFR                           0xF126
U0C1_0IC_GPX                      BIT U0C1_0IC.8
U0C1_0IC_IE                       BIT U0C1_0IC.6
U0C1_0IC_IR                       BIT U0C1_0IC.7

; USIC Interrupt Control Reg. 1
U0C1_1IC  DEFR                           0xF128
U0C1_1IC_GPX                      BIT U0C1_1IC.8
U0C1_1IC_IE                       BIT U0C1_1IC.6
U0C1_1IC_IR                       BIT U0C1_1IC.7

; USIC Interrupt Control Reg. 2
U0C1_2IC  DEFR                           0xF12A
U0C1_2IC_GPX                      BIT U0C1_2IC.8
U0C1_2IC_IE                       BIT U0C1_2IC.6
U0C1_2IC_IR                       BIT U0C1_2IC.7

; Baud Rate Generator Register H
U0C1_BRGH  EQU               0x20421E

; Baud Rate Generator Register L
U0C1_BRGL  EQU               0x20421C

; Bypass Data Register
U0C1_BYP  EQU                0x204300

; Bypass Control Register H
U0C1_BYPCRH  EQU             0x204306

; Bypass Control Register L
U0C1_BYPCRL  EQU             0x204304

; Channel Configuration Register
U0C1_CCFG  EQU               0x204218

; Channel Control Register
U0C1_CCR  EQU                0x204210

; I0put Control Register n
U0C1_DX0CR  EQU              0x204220

; I1put Control Register n
U0C1_DX1CR  EQU              0x204224

; I2put Control Register n
U0C1_DX2CR  EQU              0x204228

; Error Detection and Correction Test Register H
U0C1_EDCRH  EQU              0x20426E

; Error Detection and Correction Test Register L
U0C1_EDCRL  EQU              0x20426C

; Fractional Divider Register H
U0C1_FDRH  EQU               0x204206

; Fractional Divider Register L
U0C1_FDRL  EQU               0x204204

; Flag Modification Register H
U0C1_FMRH  EQU               0x20423A

; Flag Modification Register L
U0C1_FMRL  EQU               0x204238

; Transmit FIFO Input Location 00
U0C1_IN00  EQU               0x204380

; Transmit FIFO Input Location 01
U0C1_IN01  EQU               0x204384

; Transmit FIFO Input Location 02
U0C1_IN02  EQU               0x204388

; Transmit FIFO Input Location 03
U0C1_IN03  EQU               0x20438C

; Transmit FIFO Input Location 04
U0C1_IN04  EQU               0x204390

; Transmit FIFO Input Location 05
U0C1_IN05  EQU               0x204394

; Transmit FIFO Input Location 06
U0C1_IN06  EQU               0x204398

; Transmit FIFO Input Location 07
U0C1_IN07  EQU               0x20439C

; Transmit FIFO Input Location 08
U0C1_IN08  EQU               0x2043A0

; Transmit FIFO Input Location 09
U0C1_IN09  EQU               0x2043A4

; Transmit FIFO Input Location 10
U0C1_IN10  EQU               0x2043A8

; Transmit FIFO Input Location 11
U0C1_IN11  EQU               0x2043AC

; Transmit FIFO Input Location 12
U0C1_IN12  EQU               0x2043B0

; Transmit FIFO Input Location 13
U0C1_IN13  EQU               0x2043B4

; Transmit FIFO Input Location 14
U0C1_IN14  EQU               0x2043B8

; Transmit FIFO Input Location 15
U0C1_IN15  EQU               0x2043BC

; Transmit FIFO Input Location 16
U0C1_IN16  EQU               0x2043C0

; Transmit FIFO Input Location 17
U0C1_IN17  EQU               0x2043C4

; Transmit FIFO Input Location 18
U0C1_IN18  EQU               0x2043C8

; Transmit FIFO Input Location 19
U0C1_IN19  EQU               0x2043CC

; Transmit FIFO Input Location 20
U0C1_IN20  EQU               0x2043D0

; Transmit FIFO Input Location 21
U0C1_IN21  EQU               0x2043D4

; Transmit FIFO Input Location 22
U0C1_IN22  EQU               0x2043D8

; Transmit FIFO Input Location 23
U0C1_IN23  EQU               0x2043DC

; Transmit FIFO Input Location 24
U0C1_IN24  EQU               0x2043E0

; Transmit FIFO Input Location 25
U0C1_IN25  EQU               0x2043E4

; Transmit FIFO Input Location 26
U0C1_IN26  EQU               0x2043E8

; Transmit FIFO Input Location 27
U0C1_IN27  EQU               0x2043EC

; Transmit FIFO Input Location 28
U0C1_IN28  EQU               0x2043F0

; Transmit FIFO Input Location 29
U0C1_IN29  EQU               0x2043F4

; Transmit FIFO Input Location 30
U0C1_IN30  EQU               0x2043F8

; Transmit FIFO Input Location 31
U0C1_IN31  EQU               0x2043FC

; Interrupt Node Pointer Register H
U0C1_INPRH  EQU              0x204216

; Interrupt Node Pointer Register L
U0C1_INPRL  EQU              0x204214

; Kernel State Configuration Register
U0C1_KSCFG  EQU              0x20420C

; Receiver Buffer Output Register H for Debugger
U0C1_OUTDRH  EQU             0x204326

; Receiver Buffer Output Register L for Debugger
U0C1_OUTDRL  EQU             0x204324

; Receiver Buffer Output Register H
U0C1_OUTRH  EQU              0x204322

; Receiver Buffer Output Register L
U0C1_OUTRL  EQU              0x204320

; Protocol Control Register H
U0C1_PCRH  EQU               0x204242

; Protocol Control Register L
U0C1_PCRL  EQU               0x204240

; Protocol Status Clear Register
U0C1_PSCR  EQU               0x204248

; Protocol Status Register
U0C1_PSR  EQU                0x204244

; Receiver Buffer Control Register H
U0C1_RBCTRH  EQU             0x204316

; Receiver Buffer Control Register L
U0C1_RBCTRL  EQU             0x204314

; Receiver Buffer Register
U0C1_RBUF  EQU               0x20425C

; Receiver Buffer Register 0
U0C1_RBUF0  EQU              0x204250

; Receiver Buffer 01 Status Register H
U0C1_RBUF01SRH  EQU          0x204262

; Receiver Buffer 01 Status Register L
U0C1_RBUF01SRL  EQU          0x204260

; Receiver Buffer Register 1
U0C1_RBUF1  EQU              0x204254

; Receiver Buffer Reg. for Debugger
U0C1_RBUFD  EQU              0x20424C

; Receiver Buffer Status Register
U0C1_RBUFSR  EQU             0x204258

; Shift Control Register H
U0C1_SCTRH  EQU              0x204232

; Shift Control Register L
U0C1_SCTRL  EQU              0x204230

; Transmitter Buffer Control Reg. H
U0C1_TBCTRH  EQU             0x204312

; Transmitter Buffer Control Reg. L
U0C1_TBCTRL  EQU             0x204310

; Transmit Buffer Location 00
U0C1_TBUF00  EQU             0x204280

; Transmit Buffer Location 01
U0C1_TBUF01  EQU             0x204284

; Transmit Buffer Location 02
U0C1_TBUF02  EQU             0x204288

; Transmit Buffer Location 03
U0C1_TBUF03  EQU             0x20428C

; Transmit Buffer Location 04
U0C1_TBUF04  EQU             0x204290

; Transmit Buffer Location 05
U0C1_TBUF05  EQU             0x204294

; Transmit Buffer Location 06
U0C1_TBUF06  EQU             0x204298

; Transmit Buffer Location 07
U0C1_TBUF07  EQU             0x20429C

; Transmit Buffer Location 08
U0C1_TBUF08  EQU             0x2042A0

; Transmit Buffer Location 09
U0C1_TBUF09  EQU             0x2042A4

; Transmit Buffer Location 10
U0C1_TBUF10  EQU             0x2042A8

; Transmit Buffer Location 11
U0C1_TBUF11  EQU             0x2042AC

; Transmit Buffer Location 12
U0C1_TBUF12  EQU             0x2042B0

; Transmit Buffer Location 13
U0C1_TBUF13  EQU             0x2042B4

; Transmit Buffer Location 14
U0C1_TBUF14  EQU             0x2042B8

; Transmit Buffer Location 15
U0C1_TBUF15  EQU             0x2042BC

; Transmit Buffer Location 16
U0C1_TBUF16  EQU             0x2042C0

; Transmit Buffer Location 17
U0C1_TBUF17  EQU             0x2042C4

; Transmit Buffer Location 18
U0C1_TBUF18  EQU             0x2042C8

; Transmit Buffer Location 19
U0C1_TBUF19  EQU             0x2042CC

; Transmit Buffer Location 20
U0C1_TBUF20  EQU             0x2042D0

; Transmit Buffer Location 21
U0C1_TBUF21  EQU             0x2042D4

; Transmit Buffer Location 22
U0C1_TBUF22  EQU             0x2042D8

; Transmit Buffer Location 23
U0C1_TBUF23  EQU             0x2042DC

; Transmit Buffer Location 24
U0C1_TBUF24  EQU             0x2042E0

; Transmit Buffer Location 25
U0C1_TBUF25  EQU             0x2042E4

; Transmit Buffer Location 26
U0C1_TBUF26  EQU             0x2042E8

; Transmit Buffer Location 27
U0C1_TBUF27  EQU             0x2042EC

; Transmit Buffer Location 28
U0C1_TBUF28  EQU             0x2042F0

; Transmit Buffer Location 29
U0C1_TBUF29  EQU             0x2042F4

; Transmit Buffer Location 30
U0C1_TBUF30  EQU             0x2042F8

; Transmit Buffer Location 31
U0C1_TBUF31  EQU             0x2042FC

; Transmit Control/Status Register H
U0C1_TCSRH  EQU              0x20423E

; Transmit Control/Status Register L
U0C1_TCSRL  EQU              0x20423C

; Transmit / Receive Buffer Pointer Reg H
U0C1_TRBPTRH  EQU            0x20430A

; Transmit / Receive Buffer Pointer Reg L
U0C1_TRBPTRL  EQU            0x204308

; Transmit / Receive Buffer Status Clear Reg
U0C1_TRBSCR  EQU             0x20431C

; Transmit / Receive Buffer Status Reg H
U0C1_TRBSRH  EQU             0x20431A

; Transmit / Receive Buffer Status Reg. L
U0C1_TRBSRL  EQU             0x204318

; USIC Interrupt Control Reg. 0
U1C0_0IC  DEFR                           0xF12C
U1C0_0IC_GPX                      BIT U1C0_0IC.8
U1C0_0IC_IE                       BIT U1C0_0IC.6
U1C0_0IC_IR                       BIT U1C0_0IC.7

; USIC Interrupt Control Reg. 1
U1C0_1IC  DEFR                           0xF12E
U1C0_1IC_GPX                      BIT U1C0_1IC.8
U1C0_1IC_IE                       BIT U1C0_1IC.6
U1C0_1IC_IR                       BIT U1C0_1IC.7

; USIC Interrupt Control Reg. 2
U1C0_2IC  DEFR                           0xF130
U1C0_2IC_GPX                      BIT U1C0_2IC.8
U1C0_2IC_IE                       BIT U1C0_2IC.6
U1C0_2IC_IR                       BIT U1C0_2IC.7

; Baud Rate Generator Register H
U1C0_BRGH  EQU               0x20481E

; Baud Rate Generator Register L
U1C0_BRGL  EQU               0x20481C

; Bypass Data Register
U1C0_BYP  EQU                0x204900

; Bypass Control Register H
U1C0_BYPCRH  EQU             0x204906

; Bypass Control Register L
U1C0_BYPCRL  EQU             0x204904

; Channel Configuration Register
U1C0_CCFG  EQU               0x204818

; Channel Control Register
U1C0_CCR  EQU                0x204810

; I0put Control Register n
U1C0_DX0CR  EQU              0x204820

; I1put Control Register n
U1C0_DX1CR  EQU              0x204824

; I2put Control Register n
U1C0_DX2CR  EQU              0x204828

; Error Detection and Correction Test Register H
U1C0_EDCRH  EQU              0x20486E

; Error Detection and Correction Test Register L
U1C0_EDCRL  EQU              0x20486C

; Fractional Divider Register H
U1C0_FDRH  EQU               0x204806

; Fractional Divider Register L
U1C0_FDRL  EQU               0x204804

; Flag Modification Register H
U1C0_FMRH  EQU               0x20483A

; Flag Modification Register L
U1C0_FMRL  EQU               0x204838

; Transmit FIFO Input Location 00
U1C0_IN00  EQU               0x204980

; Transmit FIFO Input Location 01
U1C0_IN01  EQU               0x204984

; Transmit FIFO Input Location 02
U1C0_IN02  EQU               0x204988

; Transmit FIFO Input Location 03
U1C0_IN03  EQU               0x20498C

; Transmit FIFO Input Location 04
U1C0_IN04  EQU               0x204990

; Transmit FIFO Input Location 05
U1C0_IN05  EQU               0x204994

; Transmit FIFO Input Location 06
U1C0_IN06  EQU               0x204998

; Transmit FIFO Input Location 07
U1C0_IN07  EQU               0x20499C

; Transmit FIFO Input Location 08
U1C0_IN08  EQU               0x2049A0

; Transmit FIFO Input Location 09
U1C0_IN09  EQU               0x2049A4

; Transmit FIFO Input Location 10
U1C0_IN10  EQU               0x2049A8

; Transmit FIFO Input Location 11
U1C0_IN11  EQU               0x2049AC

; Transmit FIFO Input Location 12
U1C0_IN12  EQU               0x2049B0

; Transmit FIFO Input Location 13
U1C0_IN13  EQU               0x2049B4

; Transmit FIFO Input Location 14
U1C0_IN14  EQU               0x2049B8

; Transmit FIFO Input Location 15
U1C0_IN15  EQU               0x2049BC

; Transmit FIFO Input Location 16
U1C0_IN16  EQU               0x2049C0

; Transmit FIFO Input Location 17
U1C0_IN17  EQU               0x2049C4

; Transmit FIFO Input Location 18
U1C0_IN18  EQU               0x2049C8

; Transmit FIFO Input Location 19
U1C0_IN19  EQU               0x2049CC

; Transmit FIFO Input Location 20
U1C0_IN20  EQU               0x2049D0

; Transmit FIFO Input Location 21
U1C0_IN21  EQU               0x2049D4

; Transmit FIFO Input Location 22
U1C0_IN22  EQU               0x2049D8

; Transmit FIFO Input Location 23
U1C0_IN23  EQU               0x2049DC

; Transmit FIFO Input Location 24
U1C0_IN24  EQU               0x2049E0

; Transmit FIFO Input Location 25
U1C0_IN25  EQU               0x2049E4

; Transmit FIFO Input Location 26
U1C0_IN26  EQU               0x2049E8

; Transmit FIFO Input Location 27
U1C0_IN27  EQU               0x2049EC

; Transmit FIFO Input Location 28
U1C0_IN28  EQU               0x2049F0

; Transmit FIFO Input Location 29
U1C0_IN29  EQU               0x2049F4

; Transmit FIFO Input Location 30
U1C0_IN30  EQU               0x2049F8

; Transmit FIFO Input Location 31
U1C0_IN31  EQU               0x2049FC

; Interrupt Node Pointer Register H
U1C0_INPRH  EQU              0x204816

; Interrupt Node Pointer Register L
U1C0_INPRL  EQU              0x204814

; Kernel State Configuration Register
U1C0_KSCFG  EQU              0x20480C

; Receiver Buffer Output Register H for Debugger
U1C0_OUTDRH  EQU             0x204926

; Receiver Buffer Output Register L for Debugger
U1C0_OUTDRL  EQU             0x204924

; Receiver Buffer Output Register H
U1C0_OUTRH  EQU              0x204922

; Receiver Buffer Output Register L
U1C0_OUTRL  EQU              0x204920

; Protocol Control Register H
U1C0_PCRH  EQU               0x204842

; Protocol Control Register L
U1C0_PCRL  EQU               0x204840

; Protocol Status Clear Register
U1C0_PSCR  EQU               0x204848

; Protocol Status Register
U1C0_PSR  EQU                0x204844

; Receiver Buffer Control Register H
U1C0_RBCTRH  EQU             0x204916

; Receiver Buffer Control Register L
U1C0_RBCTRL  EQU             0x204914

; Receiver Buffer Register
U1C0_RBUF  EQU               0x20485C

; Receiver Buffer Register 0
U1C0_RBUF0  EQU              0x204850

; Receiver Buffer 01 Status Register H
U1C0_RBUF01SRH  EQU          0x204862

; Receiver Buffer 01 Status Register L
U1C0_RBUF01SRL  EQU          0x204860

; Receiver Buffer Register 1
U1C0_RBUF1  EQU              0x204854

; Receiver Buffer Reg. for Debugger
U1C0_RBUFD  EQU              0x20484C

; Receiver Buffer Status Register
U1C0_RBUFSR  EQU             0x204858

; Shift Control Register H
U1C0_SCTRH  EQU              0x204832

; Shift Control Register L
U1C0_SCTRL  EQU              0x204830

; Transmitter Buffer Control Reg. H
U1C0_TBCTRH  EQU             0x204912

; Transmitter Buffer Control Reg. L
U1C0_TBCTRL  EQU             0x204910

; Transmit Buffer Location 00
U1C0_TBUF00  EQU             0x204880

; Transmit Buffer Location 01
U1C0_TBUF01  EQU             0x204884

; Transmit Buffer Location 02
U1C0_TBUF02  EQU             0x204888

; Transmit Buffer Location 03
U1C0_TBUF03  EQU             0x20488C

; Transmit Buffer Location 04
U1C0_TBUF04  EQU             0x204890

; Transmit Buffer Location 05
U1C0_TBUF05  EQU             0x204894

; Transmit Buffer Location 06
U1C0_TBUF06  EQU             0x204898

; Transmit Buffer Location 07
U1C0_TBUF07  EQU             0x20489C

; Transmit Buffer Location 08
U1C0_TBUF08  EQU             0x2048A0

; Transmit Buffer Location 09
U1C0_TBUF09  EQU             0x2048A4

; Transmit Buffer Location 10
U1C0_TBUF10  EQU             0x2048A8

; Transmit Buffer Location 11
U1C0_TBUF11  EQU             0x2048AC

; Transmit Buffer Location 12
U1C0_TBUF12  EQU             0x2048B0

; Transmit Buffer Location 13
U1C0_TBUF13  EQU             0x2048B4

; Transmit Buffer Location 14
U1C0_TBUF14  EQU             0x2048B8

; Transmit Buffer Location 15
U1C0_TBUF15  EQU             0x2048BC

; Transmit Buffer Location 16
U1C0_TBUF16  EQU             0x2048C0

; Transmit Buffer Location 17
U1C0_TBUF17  EQU             0x2048C4

; Transmit Buffer Location 18
U1C0_TBUF18  EQU             0x2048C8

; Transmit Buffer Location 19
U1C0_TBUF19  EQU             0x2048CC

; Transmit Buffer Location 20
U1C0_TBUF20  EQU             0x2048D0

; Transmit Buffer Location 21
U1C0_TBUF21  EQU             0x2048D4

; Transmit Buffer Location 22
U1C0_TBUF22  EQU             0x2048D8

; Transmit Buffer Location 23
U1C0_TBUF23  EQU             0x2048DC

; Transmit Buffer Location 24
U1C0_TBUF24  EQU             0x2048E0

; Transmit Buffer Location 25
U1C0_TBUF25  EQU             0x2048E4

; Transmit Buffer Location 26
U1C0_TBUF26  EQU             0x2048E8

; Transmit Buffer Location 27
U1C0_TBUF27  EQU             0x2048EC

; Transmit Buffer Location 28
U1C0_TBUF28  EQU             0x2048F0

; Transmit Buffer Location 29
U1C0_TBUF29  EQU             0x2048F4

; Transmit Buffer Location 30
U1C0_TBUF30  EQU             0x2048F8

; Transmit Buffer Location 31
U1C0_TBUF31  EQU             0x2048FC

; Transmit Control/Status Register H
U1C0_TCSRH  EQU              0x20483E

; Transmit Control/Status Register L
U1C0_TCSRL  EQU              0x20483C

; Transmit / Receive Buffer Pointer Reg H
U1C0_TRBPTRH  EQU            0x20490A

; Transmit / Receive Buffer Pointer Reg L
U1C0_TRBPTRL  EQU            0x204908

; Transmit / Receive Buffer Status Clear Reg
U1C0_TRBSCR  EQU             0x20491C

; Transmit / Receive Buffer Status Reg H
U1C0_TRBSRH  EQU             0x20491A

; Transmit / Receive Buffer Status Reg. L
U1C0_TRBSRL  EQU             0x204918

; USIC Interrupt Control Reg. 0
U1C1_0IC  DEFR                           0xF132
U1C1_0IC_GPX                      BIT U1C1_0IC.8
U1C1_0IC_IE                       BIT U1C1_0IC.6
U1C1_0IC_IR                       BIT U1C1_0IC.7

; USIC Interrupt Control Reg. 1
U1C1_1IC  DEFR                           0xF134
U1C1_1IC_GPX                      BIT U1C1_1IC.8
U1C1_1IC_IE                       BIT U1C1_1IC.6
U1C1_1IC_IR                       BIT U1C1_1IC.7

; USIC Interrupt Control Reg. 2
U1C1_2IC  DEFR                           0xF136
U1C1_2IC_GPX                      BIT U1C1_2IC.8
U1C1_2IC_IE                       BIT U1C1_2IC.6
U1C1_2IC_IR                       BIT U1C1_2IC.7

; Baud Rate Generator Register H
U1C1_BRGH  EQU               0x204A1E

; Baud Rate Generator Register L
U1C1_BRGL  EQU               0x204A1C

; Bypass Data Register
U1C1_BYP  EQU                0x204B00

; Bypass Control Register H
U1C1_BYPCRH  EQU             0x204B06

; Bypass Control Register L
U1C1_BYPCRL  EQU             0x204B04

; Channel Configuration Register
U1C1_CCFG  EQU               0x204A18

; Channel Control Register
U1C1_CCR  EQU                0x204A10

; I0put Control Register n
U1C1_DX0CR  EQU              0x204A20

; I1put Control Register n
U1C1_DX1CR  EQU              0x204A24

; I2put Control Register n
U1C1_DX2CR  EQU              0x204A28

; Error Detection and Correction Test Register H
U1C1_EDCRH  EQU              0x204A6E

; Error Detection and Correction Test Register L
U1C1_EDCRL  EQU              0x204A6C

; Fractional Divider Register H
U1C1_FDRH  EQU               0x204A06

; Fractional Divider Register L
U1C1_FDRL  EQU               0x204A04

; Flag Modification Register H
U1C1_FMRH  EQU               0x204A3A

; Flag Modification Register L
U1C1_FMRL  EQU               0x204A38

; Transmit FIFO Input Location 00
U1C1_IN00  EQU               0x204B80

; Transmit FIFO Input Location 01
U1C1_IN01  EQU               0x204B84

; Transmit FIFO Input Location 02
U1C1_IN02  EQU               0x204B88

; Transmit FIFO Input Location 03
U1C1_IN03  EQU               0x204B8C

; Transmit FIFO Input Location 04
U1C1_IN04  EQU               0x204B90

; Transmit FIFO Input Location 05
U1C1_IN05  EQU               0x204B94

; Transmit FIFO Input Location 06
U1C1_IN06  EQU               0x204B98

; Transmit FIFO Input Location 07
U1C1_IN07  EQU               0x204B9C

; Transmit FIFO Input Location 08
U1C1_IN08  EQU               0x204BA0

; Transmit FIFO Input Location 09
U1C1_IN09  EQU               0x204BA4

; Transmit FIFO Input Location 10
U1C1_IN10  EQU               0x204BA8

; Transmit FIFO Input Location 11
U1C1_IN11  EQU               0x204BAC

; Transmit FIFO Input Location 12
U1C1_IN12  EQU               0x204BB0

; Transmit FIFO Input Location 13
U1C1_IN13  EQU               0x204BB4

; Transmit FIFO Input Location 14
U1C1_IN14  EQU               0x204BB8

; Transmit FIFO Input Location 15
U1C1_IN15  EQU               0x204BBC

; Transmit FIFO Input Location 16
U1C1_IN16  EQU               0x204BC0

; Transmit FIFO Input Location 17
U1C1_IN17  EQU               0x204BC4

; Transmit FIFO Input Location 18
U1C1_IN18  EQU               0x204BC8

; Transmit FIFO Input Location 19
U1C1_IN19  EQU               0x204BCC

; Transmit FIFO Input Location 20
U1C1_IN20  EQU               0x204BD0

; Transmit FIFO Input Location 21
U1C1_IN21  EQU               0x204BD4

; Transmit FIFO Input Location 22
U1C1_IN22  EQU               0x204BD8

; Transmit FIFO Input Location 23
U1C1_IN23  EQU               0x204BDC

; Transmit FIFO Input Location 24
U1C1_IN24  EQU               0x204BE0

; Transmit FIFO Input Location 25
U1C1_IN25  EQU               0x204BE4

; Transmit FIFO Input Location 26
U1C1_IN26  EQU               0x204BE8

; Transmit FIFO Input Location 27
U1C1_IN27  EQU               0x204BEC

; Transmit FIFO Input Location 28
U1C1_IN28  EQU               0x204BF0

; Transmit FIFO Input Location 29
U1C1_IN29  EQU               0x204BF4

; Transmit FIFO Input Location 30
U1C1_IN30  EQU               0x204BF8

; Transmit FIFO Input Location 31
U1C1_IN31  EQU               0x204BFC

; Interrupt Node Pointer Register H
U1C1_INPRH  EQU              0x204A16

; Interrupt Node Pointer Register L
U1C1_INPRL  EQU              0x204A14

; Kernel State Configuration Register
U1C1_KSCFG  EQU              0x204A0C

; Receiver Buffer Output Register H for Debugger
U1C1_OUTDRH  EQU             0x204B26

; Receiver Buffer Output Register L for Debugger
U1C1_OUTDRL  EQU             0x204B24

; Receiver Buffer Output Register H
U1C1_OUTRH  EQU              0x204B22

; Receiver Buffer Output Register L
U1C1_OUTRL  EQU              0x204B20

; Protocol Control Register H
U1C1_PCRH  EQU               0x204A42

; Protocol Control Register L
U1C1_PCRL  EQU               0x204A40

; Protocol Status Clear Register
U1C1_PSCR  EQU               0x204A48

; Protocol Status Register
U1C1_PSR  EQU                0x204A44

; Receiver Buffer Control Register H
U1C1_RBCTRH  EQU             0x204B16

; Receiver Buffer Control Register L
U1C1_RBCTRL  EQU             0x204B14

; Receiver Buffer Register
U1C1_RBUF  EQU               0x204A5C

; Receiver Buffer Register 0
U1C1_RBUF0  EQU              0x204A50

; Receiver Buffer 01 Status Register H
U1C1_RBUF01SRH  EQU          0x204A62

; Receiver Buffer 01 Status Register L
U1C1_RBUF01SRL  EQU          0x204A60

; Receiver Buffer Register 1
U1C1_RBUF1  EQU              0x204A54

; Receiver Buffer Reg. for Debugger
U1C1_RBUFD  EQU              0x204A4C

; Receiver Buffer Status Register
U1C1_RBUFSR  EQU             0x204A58

; Shift Control Register H
U1C1_SCTRH  EQU              0x204A32

; Shift Control Register L
U1C1_SCTRL  EQU              0x204A30

; Transmitter Buffer Control Reg. H
U1C1_TBCTRH  EQU             0x204B12

; Transmitter Buffer Control Reg. L
U1C1_TBCTRL  EQU             0x204B10

; Transmit Buffer Location 00
U1C1_TBUF00  EQU             0x204A80

; Transmit Buffer Location 01
U1C1_TBUF01  EQU             0x204A84

; Transmit Buffer Location 02
U1C1_TBUF02  EQU             0x204A88

; Transmit Buffer Location 03
U1C1_TBUF03  EQU             0x204A8C

; Transmit Buffer Location 04
U1C1_TBUF04  EQU             0x204A90

; Transmit Buffer Location 05
U1C1_TBUF05  EQU             0x204A94

; Transmit Buffer Location 06
U1C1_TBUF06  EQU             0x204A98

; Transmit Buffer Location 07
U1C1_TBUF07  EQU             0x204A9C

; Transmit Buffer Location 08
U1C1_TBUF08  EQU             0x204AA0

; Transmit Buffer Location 09
U1C1_TBUF09  EQU             0x204AA4

; Transmit Buffer Location 10
U1C1_TBUF10  EQU             0x204AA8

; Transmit Buffer Location 11
U1C1_TBUF11  EQU             0x204AAC

; Transmit Buffer Location 12
U1C1_TBUF12  EQU             0x204AB0

; Transmit Buffer Location 13
U1C1_TBUF13  EQU             0x204AB4

; Transmit Buffer Location 14
U1C1_TBUF14  EQU             0x204AB8

; Transmit Buffer Location 15
U1C1_TBUF15  EQU             0x204ABC

; Transmit Buffer Location 16
U1C1_TBUF16  EQU             0x204AC0

; Transmit Buffer Location 17
U1C1_TBUF17  EQU             0x204AC4

; Transmit Buffer Location 18
U1C1_TBUF18  EQU             0x204AC8

; Transmit Buffer Location 19
U1C1_TBUF19  EQU             0x204ACC

; Transmit Buffer Location 20
U1C1_TBUF20  EQU             0x204AD0

; Transmit Buffer Location 21
U1C1_TBUF21  EQU             0x204AD4

; Transmit Buffer Location 22
U1C1_TBUF22  EQU             0x204AD8

; Transmit Buffer Location 23
U1C1_TBUF23  EQU             0x204ADC

; Transmit Buffer Location 24
U1C1_TBUF24  EQU             0x204AE0

; Transmit Buffer Location 25
U1C1_TBUF25  EQU             0x204AE4

; Transmit Buffer Location 26
U1C1_TBUF26  EQU             0x204AE8

; Transmit Buffer Location 27
U1C1_TBUF27  EQU             0x204AEC

; Transmit Buffer Location 28
U1C1_TBUF28  EQU             0x204AF0

; Transmit Buffer Location 29
U1C1_TBUF29  EQU             0x204AF4

; Transmit Buffer Location 30
U1C1_TBUF30  EQU             0x204AF8

; Transmit Buffer Location 31
U1C1_TBUF31  EQU             0x204AFC

; Transmit Control/Status Register H
U1C1_TCSRH  EQU              0x204A3E

; Transmit Control/Status Register L
U1C1_TCSRL  EQU              0x204A3C

; Transmit / Receive Buffer Pointer Reg H
U1C1_TRBPTRH  EQU            0x204B0A

; Transmit / Receive Buffer Pointer Reg L
U1C1_TRBPTRL  EQU            0x204B08

; Transmit / Receive Buffer Status Clear Reg
U1C1_TRBSCR  EQU             0x204B1C

; Transmit / Receive Buffer Status Reg H
U1C1_TRBSRH  EQU             0x204B1A

; Transmit / Receive Buffer Status Reg. L
U1C1_TRBSRL  EQU             0x204B18

; USIC Interrupt Control Reg. 0
U2C0_0IC  DEFR                           0xF138
U2C0_0IC_GPX                      BIT U2C0_0IC.8
U2C0_0IC_IE                       BIT U2C0_0IC.6
U2C0_0IC_IR                       BIT U2C0_0IC.7

; USIC Interrupt Control Reg. 1
U2C0_1IC  DEFR                           0xF13A
U2C0_1IC_GPX                      BIT U2C0_1IC.8
U2C0_1IC_IE                       BIT U2C0_1IC.6
U2C0_1IC_IR                       BIT U2C0_1IC.7

; USIC Interrupt Control Reg. 2
U2C0_2IC  DEFR                           0xF13C
U2C0_2IC_GPX                      BIT U2C0_2IC.8
U2C0_2IC_IE                       BIT U2C0_2IC.6
U2C0_2IC_IR                       BIT U2C0_2IC.7

; Baud Rate Generator Register H
U2C0_BRGH  EQU               0x20501E

; Baud Rate Generator Register L
U2C0_BRGL  EQU               0x20501C

; Bypass Data Register
U2C0_BYP  EQU                0x205100

; Bypass Control Register H
U2C0_BYPCRH  EQU             0x205106

; Bypass Control Register L
U2C0_BYPCRL  EQU             0x205104

; Channel Configuration Register
U2C0_CCFG  EQU               0x205018

; Channel Control Register
U2C0_CCR  EQU                0x205010

; I0put Control Register n
U2C0_DX0CR  EQU              0x205020

; I1put Control Register n
U2C0_DX1CR  EQU              0x205024

; I2put Control Register n
U2C0_DX2CR  EQU              0x205028

; Error Detection and Correction Test Register H
U2C0_EDCRH  EQU              0x20506E

; Error Detection and Correction Test Register L
U2C0_EDCRL  EQU              0x20506C

; Fractional Divider Register H
U2C0_FDRH  EQU               0x205006

; Fractional Divider Register L
U2C0_FDRL  EQU               0x205004

; Flag Modification Register H
U2C0_FMRH  EQU               0x20503A

; Flag Modification Register L
U2C0_FMRL  EQU               0x205038

; Transmit FIFO Input Location 00
U2C0_IN00  EQU               0x205180

; Transmit FIFO Input Location 01
U2C0_IN01  EQU               0x205184

; Transmit FIFO Input Location 02
U2C0_IN02  EQU               0x205188

; Transmit FIFO Input Location 03
U2C0_IN03  EQU               0x20518C

; Transmit FIFO Input Location 04
U2C0_IN04  EQU               0x205190

; Transmit FIFO Input Location 05
U2C0_IN05  EQU               0x205194

; Transmit FIFO Input Location 06
U2C0_IN06  EQU               0x205198

; Transmit FIFO Input Location 07
U2C0_IN07  EQU               0x20519C

; Transmit FIFO Input Location 08
U2C0_IN08  EQU               0x2051A0

; Transmit FIFO Input Location 09
U2C0_IN09  EQU               0x2051A4

; Transmit FIFO Input Location 10
U2C0_IN10  EQU               0x2051A8

; Transmit FIFO Input Location 11
U2C0_IN11  EQU               0x2051AC

; Transmit FIFO Input Location 12
U2C0_IN12  EQU               0x2051B0

; Transmit FIFO Input Location 13
U2C0_IN13  EQU               0x2051B4

; Transmit FIFO Input Location 14
U2C0_IN14  EQU               0x2051B8

; Transmit FIFO Input Location 15
U2C0_IN15  EQU               0x2051BC

; Transmit FIFO Input Location 16
U2C0_IN16  EQU               0x2051C0

; Transmit FIFO Input Location 17
U2C0_IN17  EQU               0x2051C4

; Transmit FIFO Input Location 18
U2C0_IN18  EQU               0x2051C8

; Transmit FIFO Input Location 19
U2C0_IN19  EQU               0x2051CC

; Transmit FIFO Input Location 20
U2C0_IN20  EQU               0x2051D0

; Transmit FIFO Input Location 21
U2C0_IN21  EQU               0x2051D4

; Transmit FIFO Input Location 22
U2C0_IN22  EQU               0x2051D8

; Transmit FIFO Input Location 23
U2C0_IN23  EQU               0x2051DC

; Transmit FIFO Input Location 24
U2C0_IN24  EQU               0x2051E0

; Transmit FIFO Input Location 25
U2C0_IN25  EQU               0x2051E4

; Transmit FIFO Input Location 26
U2C0_IN26  EQU               0x2051E8

; Transmit FIFO Input Location 27
U2C0_IN27  EQU               0x2051EC

; Transmit FIFO Input Location 28
U2C0_IN28  EQU               0x2051F0

; Transmit FIFO Input Location 29
U2C0_IN29  EQU               0x2051F4

; Transmit FIFO Input Location 30
U2C0_IN30  EQU               0x2051F8

; Transmit FIFO Input Location 31
U2C0_IN31  EQU               0x2051FC

; Interrupt Node Pointer Register H
U2C0_INPRH  EQU              0x205016

; Interrupt Node Pointer Register L
U2C0_INPRL  EQU              0x205014

; Kernel State Configuration Register
U2C0_KSCFG  EQU              0x20500C

; Receiver Buffer Output Register H for Debugger
U2C0_OUTDRH  EQU             0x205126

; Receiver Buffer Output Register L for Debugger
U2C0_OUTDRL  EQU             0x205124

; Receiver Buffer Output Register H
U2C0_OUTRH  EQU              0x205122

; Receiver Buffer Output Register L
U2C0_OUTRL  EQU              0x205120

; Protocol Control Register H
U2C0_PCRH  EQU               0x205042

; Protocol Control Register L
U2C0_PCRL  EQU               0x205040

; Protocol Status Clear Register
U2C0_PSCR  EQU               0x205048

; Protocol Status Register
U2C0_PSR  EQU                0x205044

; Receiver Buffer Control Register H
U2C0_RBCTRH  EQU             0x205116

; Receiver Buffer Control Register L
U2C0_RBCTRL  EQU             0x205114

; Receiver Buffer Register
U2C0_RBUF  EQU               0x20505C

; Receiver Buffer Register 0
U2C0_RBUF0  EQU              0x205050

; Receiver Buffer 01 Status Register H
U2C0_RBUF01SRH  EQU          0x205062

; Receiver Buffer 01 Status Register L
U2C0_RBUF01SRL  EQU          0x205060

; Receiver Buffer Register 1
U2C0_RBUF1  EQU              0x205054

; Receiver Buffer Reg. for Debugger
U2C0_RBUFD  EQU              0x20504C

; Receiver Buffer Status Register
U2C0_RBUFSR  EQU             0x205058

; Shift Control Register H
U2C0_SCTRH  EQU              0x205032

; Shift Control Register L
U2C0_SCTRL  EQU              0x205030

; Transmitter Buffer Control Reg. H
U2C0_TBCTRH  EQU             0x205112

; Transmitter Buffer Control Reg. L
U2C0_TBCTRL  EQU             0x205110

; Transmit Buffer Location 00
U2C0_TBUF00  EQU             0x205080

; Transmit Buffer Location 01
U2C0_TBUF01  EQU             0x205084

; Transmit Buffer Location 02
U2C0_TBUF02  EQU             0x205088

; Transmit Buffer Location 03
U2C0_TBUF03  EQU             0x20508C

; Transmit Buffer Location 04
U2C0_TBUF04  EQU             0x205090

; Transmit Buffer Location 05
U2C0_TBUF05  EQU             0x205094

; Transmit Buffer Location 06
U2C0_TBUF06  EQU             0x205098

; Transmit Buffer Location 07
U2C0_TBUF07  EQU             0x20509C

; Transmit Buffer Location 08
U2C0_TBUF08  EQU             0x2050A0

; Transmit Buffer Location 09
U2C0_TBUF09  EQU             0x2050A4

; Transmit Buffer Location 10
U2C0_TBUF10  EQU             0x2050A8

; Transmit Buffer Location 11
U2C0_TBUF11  EQU             0x2050AC

; Transmit Buffer Location 12
U2C0_TBUF12  EQU             0x2050B0

; Transmit Buffer Location 13
U2C0_TBUF13  EQU             0x2050B4

; Transmit Buffer Location 14
U2C0_TBUF14  EQU             0x2050B8

; Transmit Buffer Location 15
U2C0_TBUF15  EQU             0x2050BC

; Transmit Buffer Location 16
U2C0_TBUF16  EQU             0x2050C0

; Transmit Buffer Location 17
U2C0_TBUF17  EQU             0x2050C4

; Transmit Buffer Location 18
U2C0_TBUF18  EQU             0x2050C8

; Transmit Buffer Location 19
U2C0_TBUF19  EQU             0x2050CC

; Transmit Buffer Location 20
U2C0_TBUF20  EQU             0x2050D0

; Transmit Buffer Location 21
U2C0_TBUF21  EQU             0x2050D4

; Transmit Buffer Location 22
U2C0_TBUF22  EQU             0x2050D8

; Transmit Buffer Location 23
U2C0_TBUF23  EQU             0x2050DC

; Transmit Buffer Location 24
U2C0_TBUF24  EQU             0x2050E0

; Transmit Buffer Location 25
U2C0_TBUF25  EQU             0x2050E4

; Transmit Buffer Location 26
U2C0_TBUF26  EQU             0x2050E8

; Transmit Buffer Location 27
U2C0_TBUF27  EQU             0x2050EC

; Transmit Buffer Location 28
U2C0_TBUF28  EQU             0x2050F0

; Transmit Buffer Location 29
U2C0_TBUF29  EQU             0x2050F4

; Transmit Buffer Location 30
U2C0_TBUF30  EQU             0x2050F8

; Transmit Buffer Location 31
U2C0_TBUF31  EQU             0x2050FC

; Transmit Control/Status Register H
U2C0_TCSRH  EQU              0x20503E

; Transmit Control/Status Register L
U2C0_TCSRL  EQU              0x20503C

; Transmit / Receive Buffer Pointer Reg H
U2C0_TRBPTRH  EQU            0x20510A

; Transmit / Receive Buffer Pointer Reg L
U2C0_TRBPTRL  EQU            0x205108

; Transmit / Receive Buffer Status Clear Reg
U2C0_TRBSCR  EQU             0x20511C

; Transmit / Receive Buffer Status Reg H
U2C0_TRBSRH  EQU             0x20511A

; Transmit / Receive Buffer Status Reg. L
U2C0_TRBSRL  EQU             0x205118

; USIC Interrupt Control Reg. x
U2C1_0IC  DEFR                           0xF13E
U2C1_0IC_GPX                      BIT U2C1_0IC.8
U2C1_0IC_IE                       BIT U2C1_0IC.6
U2C1_0IC_IR                       BIT U2C1_0IC.7

; USIC Interrupt Control Reg.
U2C1_1IC  DEFR                           0xF180
U2C1_1IC_GPX                      BIT U2C1_1IC.8
U2C1_1IC_IE                       BIT U2C1_1IC.6
U2C1_1IC_IR                       BIT U2C1_1IC.7

; USIC Interrupt Control Reg.
U2C1_2IC  DEFR                           0xF182
U2C1_2IC_GPX                      BIT U2C1_2IC.8
U2C1_2IC_IE                       BIT U2C1_2IC.6
U2C1_2IC_IR                       BIT U2C1_2IC.7   

; Baud Rate Generator Register H
U2C1_BRGH  EQU               0x20521E

; Baud Rate Generator Register L
U2C1_BRGL  EQU               0x20521C

; Bypass Data Register
U2C1_BYP  EQU                0x205300

; Bypass Control Register H
U2C1_BYPCRH  EQU             0x205306

; Bypass Control Register L
U2C1_BYPCRL  EQU             0x205304

; Channel Configuration Register
U2C1_CCFG  EQU               0x205218

; Channel Control Register
U2C1_CCR  EQU                0x205210

; I0put Control Register n
U2C1_DX0CR  EQU              0x205220

; I1put Control Register n
U2C1_DX1CR  EQU              0x205224

; I2put Control Register n
U2C1_DX2CR  EQU              0x205228

; Error Detection and Correction Test Register H
U2C1_EDCRH  EQU              0x20526E

; Error Detection and Correction Test Register L
U2C1_EDCRL  EQU              0x20526C

; Fractional Divider Register H
U2C1_FDRH  EQU               0x205206

; Fractional Divider Register L
U2C1_FDRL  EQU               0x205204

; Flag Modification Register H
U2C1_FMRH  EQU               0x20523A

; Flag Modification Register L
U2C1_FMRL  EQU               0x205238

; Transmit FIFO Input Location 00
U2C1_IN00  EQU               0x205380

; Transmit FIFO Input Location 01
U2C1_IN01  EQU               0x205384

; Transmit FIFO Input Location 02
U2C1_IN02  EQU               0x205388

; Transmit FIFO Input Location 03
U2C1_IN03  EQU               0x20538C

; Transmit FIFO Input Location 04
U2C1_IN04  EQU               0x205390

; Transmit FIFO Input Location 05
U2C1_IN05  EQU               0x205394

; Transmit FIFO Input Location 06
U2C1_IN06  EQU               0x205398

; Transmit FIFO Input Location 07
U2C1_IN07  EQU               0x20539C

; Transmit FIFO Input Location 08
U2C1_IN08  EQU               0x2053A0

; Transmit FIFO Input Location 09
U2C1_IN09  EQU               0x2053A4

; Transmit FIFO Input Location 10
U2C1_IN10  EQU               0x2053A8

; Transmit FIFO Input Location 11
U2C1_IN11  EQU               0x2053AC

; Transmit FIFO Input Location 12
U2C1_IN12  EQU               0x2053B0

; Transmit FIFO Input Location 13
U2C1_IN13  EQU               0x2053B4

; Transmit FIFO Input Location 14
U2C1_IN14  EQU               0x2053B8

; Transmit FIFO Input Location 15
U2C1_IN15  EQU               0x2053BC

; Transmit FIFO Input Location 16
U2C1_IN16  EQU               0x2053C0

; Transmit FIFO Input Location 17
U2C1_IN17  EQU               0x2053C4

; Transmit FIFO Input Location 18
U2C1_IN18  EQU               0x2053C8

; Transmit FIFO Input Location 19
U2C1_IN19  EQU               0x2053CC

; Transmit FIFO Input Location 20
U2C1_IN20  EQU               0x2053D0

; Transmit FIFO Input Location 21
U2C1_IN21  EQU               0x2053D4

; Transmit FIFO Input Location 22
U2C1_IN22  EQU               0x2053D8

; Transmit FIFO Input Location 23
U2C1_IN23  EQU               0x2053DC

; Transmit FIFO Input Location 24
U2C1_IN24  EQU               0x2053E0

; Transmit FIFO Input Location 25
U2C1_IN25  EQU               0x2053E4

; Transmit FIFO Input Location 26
U2C1_IN26  EQU               0x2053E8

; Transmit FIFO Input Location 27
U2C1_IN27  EQU               0x2053EC

; Transmit FIFO Input Location 28
U2C1_IN28  EQU               0x2053F0

; Transmit FIFO Input Location 29
U2C1_IN29  EQU               0x2053F4

; Transmit FIFO Input Location 30
U2C1_IN30  EQU               0x2053F8

; Transmit FIFO Input Location 31
U2C1_IN31  EQU               0x2053FC

; Interrupt Node Pointer Register H
U2C1_INPRH  EQU              0x205216

; Interrupt Node Pointer Register L
U2C1_INPRL  EQU              0x205214

; Kernel State Configuration Register
U2C1_KSCFG  EQU              0x20520C

; Receiver Buffer Output Register H for Debugger
U2C1_OUTDRH  EQU             0x205326

; Receiver Buffer Output Register L for Debugger
U2C1_OUTDRL  EQU             0x205324

; Receiver Buffer Output Register H
U2C1_OUTRH  EQU              0x205322

; Receiver Buffer Output Register L
U2C1_OUTRL  EQU              0x205320

; Protocol Control Register H
U2C1_PCRH  EQU               0x205242

; Protocol Control Register L
U2C1_PCRL  EQU               0x205240

; Protocol Status Clear Register
U2C1_PSCR  EQU               0x205248

; Protocol Status Register
U2C1_PSR  EQU                0x205244

; Receiver Buffer Control Register H
U2C1_RBCTRH  EQU             0x205316

; Receiver Buffer Control Register L
U2C1_RBCTRL  EQU             0x205314

; Receiver Buffer Register
U2C1_RBUF  EQU               0x20525C

; Receiver Buffer Register 0
U2C1_RBUF0  EQU              0x205250

; Receiver Buffer 01 Status Register H
U2C1_RBUF01SRH  EQU          0x205262

; Receiver Buffer 01 Status Register L
U2C1_RBUF01SRL  EQU          0x205260

; Receiver Buffer Register 1
U2C1_RBUF1  EQU              0x205254

; Receiver Buffer Reg. for Debugger
U2C1_RBUFD  EQU              0x20524C

; Receiver Buffer Status Register
U2C1_RBUFSR  EQU             0x205258

; Shift Control Register H
U2C1_SCTRH  EQU              0x205232

; Shift Control Register L
U2C1_SCTRL  EQU              0x205230

; Transmitter Buffer Control Reg. H
U2C1_TBCTRH  EQU             0x205312

; Transmitter Buffer Control Reg. L
U2C1_TBCTRL  EQU             0x205310

; Transmit Buffer Location 00
U2C1_TBUF00  EQU             0x205280

; Transmit Buffer Location 01
U2C1_TBUF01  EQU             0x205284

; Transmit Buffer Location 02
U2C1_TBUF02  EQU             0x205288

; Transmit Buffer Location 03
U2C1_TBUF03  EQU             0x20528C

; Transmit Buffer Location 04
U2C1_TBUF04  EQU             0x205290

; Transmit Buffer Location 05
U2C1_TBUF05  EQU             0x205294

; Transmit Buffer Location 06
U2C1_TBUF06  EQU             0x205298

; Transmit Buffer Location 07
U2C1_TBUF07  EQU             0x20529C

; Transmit Buffer Location 08
U2C1_TBUF08  EQU             0x2052A0

; Transmit Buffer Location 09
U2C1_TBUF09  EQU             0x2052A4

; Transmit Buffer Location 10
U2C1_TBUF10  EQU             0x2052A8

; Transmit Buffer Location 11
U2C1_TBUF11  EQU             0x2052AC

; Transmit Buffer Location 12
U2C1_TBUF12  EQU             0x2052B0

; Transmit Buffer Location 13
U2C1_TBUF13  EQU             0x2052B4

; Transmit Buffer Location 14
U2C1_TBUF14  EQU             0x2052B8

; Transmit Buffer Location 15
U2C1_TBUF15  EQU             0x2052BC

; Transmit Buffer Location 16
U2C1_TBUF16  EQU             0x2052C0

; Transmit Buffer Location 17
U2C1_TBUF17  EQU             0x2052C4

; Transmit Buffer Location 18
U2C1_TBUF18  EQU             0x2052C8

; Transmit Buffer Location 19
U2C1_TBUF19  EQU             0x2052CC

; Transmit Buffer Location 20
U2C1_TBUF20  EQU             0x2052D0

; Transmit Buffer Location 21
U2C1_TBUF21  EQU             0x2052D4

; Transmit Buffer Location 22
U2C1_TBUF22  EQU             0x2052D8

; Transmit Buffer Location 23
U2C1_TBUF23  EQU             0x2052DC

; Transmit Buffer Location 24
U2C1_TBUF24  EQU             0x2052E0

; Transmit Buffer Location 25
U2C1_TBUF25  EQU             0x2052E4

; Transmit Buffer Location 26
U2C1_TBUF26  EQU             0x2052E8

; Transmit Buffer Location 27
U2C1_TBUF27  EQU             0x2052EC

; Transmit Buffer Location 28
U2C1_TBUF28  EQU             0x2052F0

; Transmit Buffer Location 29
U2C1_TBUF29  EQU             0x2052F4

; Transmit Buffer Location 30
U2C1_TBUF30  EQU             0x2052F8

; Transmit Buffer Location 31
U2C1_TBUF31  EQU             0x2052FC

; Transmit Control/Status Register H
U2C1_TCSRH  EQU              0x20523E

; Transmit Control/Status Register L
U2C1_TCSRL  EQU              0x20523C

; Transmit / Receive Buffer Pointer Reg H
U2C1_TRBPTRH  EQU            0x20530A

; Transmit / Receive Buffer Pointer Reg L
U2C1_TRBPTRL  EQU            0x205308

; Transmit / Receive Buffer Status Clear Reg
U2C1_TRBSCR  EQU             0x20531C

; Transmit / Receive Buffer Status Reg H
U2C1_TRBSRH  EQU             0x20531A

; Transmit / Receive Buffer Status Reg. L
U2C1_TRBSRL  EQU             0x205318

; Vector Segment Pointer
VECSEG  DEFR                             0xFF12

; Constant Zeros Register
ZEROS  DEFR                              0xFF1C
