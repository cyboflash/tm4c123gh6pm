// I've decided to write this file after I saw a post on piazza.com for the edX UT. 6.02X Embedded
// Systems - Shape The World class. Some student partially mapped GPIO registers to a structure. I
// thought it would be nice to have all the registers mapped.
//
// License:
// This software is provided as is. No warranty of any kind. You may use it, modify it, do whatever
// you want with it. It can be used in any projects, open source or commercial. There is only one
// condition for using it. Please include (or do not remove) the orignal authors comment lines
// somewhere at the top of the file
//
// Original authors: Rail Shafigulin and anonymous student from UT. 6.02X Embedded Systems - Shape
//                   the world class.
//
// By the way if anyone is able to track down this student I would gladly include his/her name to
// this file if he/she doesn't mind.

#ifndef __TM4C123GH6PM_REGISTER_MAP_H__
#define __TM4C123GH6PM_REGISTER_MAP_H__

#include <stdint.h>

typedef union PeriphIDRegister_t {
  uint32_t value;
  struct {
    uint32_t PID      : 8,
             reserved : 24;
  } field;
} PeriphIDRegister;

typedef union PCellIDRegister_t {
  uint32_t value;
  struct {
    uint32_t CID      : 8,
             reserved : 24;
  } field;
} PCellIDRegister;

/* GPIO */
typedef union GPIODIRRegister_t {
  uint32_t value;
  struct {
    uint32_t DIR      : 8,
             reserved : 24;
  } field;
} GPIODIRRegister;

typedef union GPIOISRegister_t {
  uint32_t value;
  struct {
    uint32_t IS       : 8,
             reserved : 24;
  } field;
} GPIOISRegister;

typedef union GPIOIBERegister_t {
  uint32_t value;
  struct {
    uint32_t IBE      : 8,
             reserved : 24;
  } field;
} GPIOIBERegister;

typedef union GPIOIEVRegister_t {
  uint32_t value;
  struct {
    uint32_t IEV      : 8,
             reserved : 24;
  } field;
} GPIOIEVRegister;

typedef union GPIOIMRegister_t {
  uint32_t value;
  struct {
    uint32_t IME      : 8,
             reserved : 24;
  } field;
} GPIOIMRegister;

typedef union GPIORISRegister_t {
  uint32_t value;
  struct {
    uint32_t RIS      : 8,
             reserved : 24;
  } field;
} GPIORISRegister;

typedef union GPIOMISRegister_t {
  uint32_t value;
  struct {
    uint32_t MIS      : 8,
             reserved : 24;
  } field;
} GPIOMISRegister;

typedef union GPIOICRRegister_t {
  uint32_t value;
  struct {
    uint32_t IC       : 8,
             reserved : 24;
  } field;
} GPIOICRRegister;

typedef union GPIOAFSELRegister_t {
  uint32_t value;
  struct {
    uint32_t AFSEL    : 8,
             reserved : 24;
  } field;
} GPIOAFSELRegister;

typedef union GPIODRRRegister_t {
  uint32_t value;
  struct {
    uint32_t DRV      : 8,
             reserved : 24;
  } field;
} GPIODRRRegister;

typedef GPIODRRRegister GPIODR2RRegister;
typedef GPIODRRRegister GPIODR4RRegister;
typedef GPIODRRRegister GPIODR8RRegister;

typedef union GPIOODRRegister_t {
  uint32_t value;
  struct {
    uint32_t ODE      : 8,
             reserved : 24;
  } field;
} GPIODRRegister;


typedef union GPIOPURRegister_t {
  uint32_t value;
  struct {
    uint32_t PUE      : 8,
             reserved : 24;
  } field;
} GPIOPURRegister;

typedef union GPIOPDRRegister_t {
  uint32_t value;
  struct {
    uint32_t PDE      : 8,
             reserved : 24;
  } field;
} GPIOPDRRegister;

typedef union GPIOSLRRegister_t {
  uint32_t value;
  struct {
    uint32_t SRL      : 8,
             reserved : 24;
  } field;
} GPIOSLRRegister;

typedef union GPIODENRegister_t {
  uint32_t value;
  struct {
    uint32_t DEN      : 8,
             reserved : 24;
  } field;
} GPIODENRegister;

typedef union GPIOLOCKRegister_t {
  uint32_t value;
  struct {
    uint32_t LOCK : 32;
  } field;
} GPIOLOCKRegister;


typedef union GPIOCRRegister_t {
  uint32_t value;
  struct {
    uint32_t CR       : 8,
             reserved : 24;
  } field;
} GPIOCRRegister;

typedef union GPIOAMSELRegister_t {
  uint32_t value;
  struct {
    uint32_t GPIOAMSEL : 4,
             reserved  : 28;
  } field;
} GPIOAMSELRegister;

typedef union GPIOPCTLRegister_t {
  uint32_t value;
  struct {
    uint32_t PMC0 : 4,
             PMC1 : 4,
             PMC2 : 4,
             PMC3 : 4,
             PMC4 : 4,
             PMC5 : 4,
             PMC6 : 4,
             PMC7 : 4;
  } field;
} GPIOPCTLRegister;

typedef union GPIOADCCTLRegister_t {
  uint32_t value;
  struct {
    uint32_t ADCEN    : 8,
             reserved : 24;
  } field;
} GPIOADCCTLRegister;

typedef union GPIODMACTLRegister_t {
  uint32_t value;
  struct {
    uint32_t DMAEN    : 8,
             reserved : 24;
  } field;
} GPIODMACTLRegister;

typedef PeriphIDRegister GPIOPeriphIDRegister;

typedef GPIOPeriphIDRegister GPIOPeriphID0Register;
typedef GPIOPeriphIDRegister GPIOPeriphID1Register;
typedef GPIOPeriphIDRegister GPIOPeriphID2Register;
typedef GPIOPeriphIDRegister GPIOPeriphID3Register;
typedef GPIOPeriphIDRegister GPIOPeriphID4Register;
typedef GPIOPeriphIDRegister GPIOPeriphID5Register;
typedef GPIOPeriphIDRegister GPIOPeriphID6Register;
typedef GPIOPeriphIDRegister GPIOPeriphID7Register;

typedef PCellIDRegister GPIOPCellIDRegister;

typedef GPIOPCellIDRegister GPIOPCellID0Register;
typedef GPIOPCellIDRegister GPIOPCellID1Register;
typedef GPIOPCellIDRegister GPIOPCellID2Register;
typedef GPIOPCellIDRegister GPIOPCellID3Register;
typedef GPIOPCellIDRegister GPIOPCellID4Register;
typedef GPIOPCellIDRegister GPIOPCellID5Register;
typedef GPIOPCellIDRegister GPIOPCellID6Register;
typedef GPIOPCellIDRegister GPIOPCellID7Register;

typedef struct GPIORegisterBase_t {
                                          // Offset
  uint8_t               GPIODATA[0x400];  // 0x000
  GPIODIRRegister       GPIODIR;          // 0x400
  GPIOISRegister        GPIOIS;           // 0x404
  GPIOIBERegister       GPIOIBE;          // 0x408
  GPIOIEVRegister       GPIOIEV;          // 0x40C
  GPIOIMRegister        GPIOIM;           // 0x410
  GPIORISRegister       GPIORIS;          // 0x414
  GPIOMISRegister       GPIOMIS;          // 0x418
  GPIOICRRegister       GPIOICR;          // 0x41C
  GPIOAFSELRegister     GPIOAFSEL;        // 0x420
  uint8_t               reserved0[0x0DC]; // 0x424
  GPIODR2RRegister      GPIODR2R;         // 0x500
  GPIODR4RRegister      GPIODR4R;         // 0x504
  GPIODR8RRegister      GPIODR8R;         // 0x508
  GPIODRRegister        GPIOODR;          // 0x50C
  GPIOPURRegister       GPIOPUR;          // 0x510
  GPIOPDRRegister       GPIOPDR;          // 0x514
  GPIOSLRRegister       GPIOSLR;          // 0x518
  GPIODENRegister       GPIODEN;          // 0x51C
  GPIOLOCKRegister      GPIOLOCK;         // 0x520
  GPIOCRRegister        GPIOCR;           // 0x524
  GPIOAMSELRegister     GPIOAMSEL;        // 0x528
  GPIOPCTLRegister      GPIOPCTL;         // 0x52C
  GPIOADCCTLRegister    GPIOADCCTL;       // 0x530
  GPIODMACTLRegister    GPIODMACTL;       // 0x534
  uint8_t               reserved1[0xA98]; // 0x538
  GPIOPeriphID4Register GPIOPeriphID4;    // 0xFD0
  GPIOPeriphID5Register GPIOPeriphID5;    // 0xFD4
  GPIOPeriphID6Register GPIOPeriphID6;    // 0xFD8
  GPIOPeriphID7Register GPIOPeriphID7;    // 0xFDC
  GPIOPeriphID0Register GPIOPeriphID0;    // 0xFE0
  GPIOPeriphID1Register GPIOPeriphID1;    // 0xFE4
  GPIOPeriphID2Register GPIOPeriphID2;    // 0xFE8
  GPIOPeriphID3Register GPIOPeriphID3;    // 0xFEC
  GPIOPCellID0Register  GPIOPCellID0;     // 0xFF0
  GPIOPCellID1Register  GPIOPCellID1;     // 0xFF4
  GPIOPCellID2Register  GPIOPCellID2;     // 0xFF8
  GPIOPCellID3Register  GPIOPCellID3;     // 0xFFC
} GPIORegisterBase;

/* Define a const pointer to a volatile GPIORegisterBase */
typedef GPIORegisterBase volatile * const GPIORegisterBasePtr;

/* GPTM */
typedef union GPTMMCFGRegister_t {
  uint32_t value;
  struct {
    uint32_t GPTMCFG  : 3,
             reserved : 29;
  } field;
} GPTMCFGRegister;

typedef union GPTMTMRRegister_t {
  uint32_t value;
  struct {
    uint32_t TMR      : 2,
             TCMR     : 1,
             TAMS     : 1,
             TCDIR    : 1,
             TMIE     : 1,
             TWOT     : 1,
             TSNAPS   : 1,
             TILD     : 1,
             TPWMIE   : 1,
             TMRSU    : 1,
             TPLO     : 1,
             reserved : 20;
  } field;
} GPTMTMRRegister;

typedef GPTMTMRRegister GPTMTAMRRegister;
typedef GPTMTMRRegister GPTMTBMRRegister;

typedef union GPTMCTLRegister_t {
  uint32_t value;
  struct {
    uint32_t TAEN      : 1,
             TASTALL   : 1,
             TAEVENT   : 2,
             RTCEN     : 1,
             TAOTE     : 1,
             TAPWML    : 1,
             reserved0 : 1,
             TBEN      : 1,
             TBSTALL   : 1,
             TBEVENT   : 2,
             reserved1 : 1,
             TBOTE     : 1,
             TBPWML    : 1,
             reserved2 : 17;
  } field;
} GPTMCTLRegister;

typedef union GPTMSYNCRegister_t {
  uint32_t value;
  struct {
    uint32_t SYNCT0   : 2,
             SYNCT1   : 2,
             SYNCT2   : 2,
             SYNCT3   : 2,
             SYNCT4   : 2,
             SYNCT5   : 2,
             SYNCWT0  : 2,
             SYNCWT1  : 2,
             SYNCWT2  : 2,
             SYNCWT3  : 2,
             SYNCWT4  : 2,
             SYNCWT5  : 2,
             reserved : 8;
  } field;
} GPTMSYNCRegister;

typedef union GPTMInterruptRegister_t {
  uint32_t value;
  struct {
    uint32_t TATO : 1,
             CAM : 1,
             CAE : 1,
             RTC : 1,
             TAM : 1,
             reserved0 : 3,
             TBTO : 1,
             CBM : 1,
             CBE : 1,
             TBM : 1,
             reserved1 : 4,
             WUE : 1,
             reserved2 : 15;
  } field;
} GPTMInterruptRegister;

typedef GPTMInterruptRegister GPTMIMRRegister;
typedef GPTMInterruptRegister GPTMRISRegister;
typedef GPTMInterruptRegister GPTMMISRegister;
typedef GPTMInterruptRegister GPTMICRRegister;

typedef union GPTMTILRRegister_t {
  uint32_t value;
  struct {
    uint32_t TILR : 32;
  } field;
} GPTMTILRRegister;

typedef GPTMTILRRegister GPTMTAILRRegister;
typedef GPTMTILRRegister GPTMTBILRRegister;

typedef union GPTMTMATCHRRegister_t {
  uint32_t value;
  struct {
    uint32_t TMR : 32;
  } field;
} GPTMTMATCHRRegister;

typedef GPTMTMATCHRRegister GPTMTAMATCHRRegister;
typedef GPTMTMATCHRRegister GPTMTBMATCHRRegister;

typedef union GPTMTPRRegister_t {
  uint32_t value;
  struct {
    uint32_t TPSR     : 8,
             TPSRH    : 8,
             reserved : 16;
  } field;
} GPTMTPRRegister;

typedef GPTMTPRRegister GPTMTAPRRegister;
typedef GPTMTPRRegister GPTMTBPRRegister;

typedef union GPTMTPMRRegister_t {
  uint32_t value;
  struct {
    uint32_t TPSMR    : 8,
             TPSMRH   : 8,
             reserved : 16;
  } field;
} GPTMTPMRRegister;

typedef GPTMTPMRRegister GPTMTAPMRRegister;
typedef GPTMTPMRRegister GPTMTBPMRRegister;

typedef union GPTMTRRegister_t {
  uint32_t value;
  struct {
    uint32_t TR : 32;
  } field;
} GPTMTRRegister;

typedef GPTMTRRegister GPTMTARRegister;
typedef GPTMTRRegister GPTMTBRRegister;

typedef union GPTMTVRegister_t {
  uint32_t value;
  struct {
    uint32_t TV : 32;
  } field;
} GPTMTVRegister;

typedef GPTMTVRegister GPTMTAVRegister;
typedef GPTMTVRegister GPTMTBVRegister;

typedef union GPTMRTCPDRegister_t {
  uint32_t value;
  struct {
    uint32_t RTCPD    : 16,
             reserved : 16;
  } field;
} GPTMRTCPDRegister;

typedef union GPTMTPSRegister_t {
  uint32_t value;
  struct {
    uint32_t PSS      : 16,
             reserved : 16;
  } field;
} GPTMTPSRegister;

typedef GPTMTPSRegister GPTMTAPSRegister;
typedef GPTMTPSRegister GPTMTBPSRegister;

typedef union GPTMTPVRegister_t {
  uint32_t value;
  struct {
    uint32_t PSV      : 16,
             reserved : 16;
  } field;
} GPTMTPVRegister;

typedef GPTMTPVRegister GPTMTAPVRegister;
typedef GPTMTPVRegister GPTMTBPVRegister;

typedef union GPTMPPRegister_t {
  uint32_t value;
  struct {
    uint32_t SIZE     : 4,
             reserved : 28;
  } field;
} GPTMPPRegister;

typedef struct GPTMRegisterBase_t {
                                         // Offset
  GPTMCFGRegister      GPTMCFG;          // 0x000
  GPTMTAMRRegister     GPTMTAMR;         // 0x004
  GPTMTBMRRegister     GPTMTBMR;         // 0x008
  GPTMCTLRegister      GPTMCTL;          // 0x00C
  GPTMSYNCRegister     GPTMSYNC;         // 0x010
  uint8_t              reserved0[0x04];  // 0x014
  GPTMIMRRegister      GPTMIMR;          // 0x018
  GPTMRISRegister      GPTMRIS;          // 0x01C
  GPTMMISRegister      GPTMMIS;          // 0x020
  GPTMICRRegister      GPTMICR;          // 0x024
  GPTMTILRRegister     GPTMTAILR;        // 0x028
  GPTMTILRRegister     GPTMTBILR;        // 0x02C
  GPTMTAMATCHRRegister GPTMTAMATCHR;     // 0x030
  GPTMTBMATCHRRegister GPTMTBMATCHR;     // 0x034
  GPTMTAPRRegister     GPTMTAPR;         // 0x038
  GPTMTBPRRegister     GPTMTBPR;         // 0x03C
  GPTMTAPMRRegister    GPTMTAPMR;        // 0x040
  GPTMTBPMRRegister    GPTMTBPMR;        // 0x044
  GPTMTARRegister      GPTMTAR;          // 0x048
  GPTMTBRRegister      GPTMTBR;          // 0x04C
  GPTMTAVRegister      GPTMTAV;          // 0x050
  GPTMTBVRegister      GPTMTBV;          // 0x054
  GPTMRTCPDRegister    GPTMRTCPD;        // 0x058
  GPTMTAPSRegister     GPTMTAPS;         // 0x05C
  GPTMTBPSRegister     GPTMTBPS;         // 0x060
  GPTMTAPVRegister     GPTMTAPV;         // 0x064
  GPTMTBPVRegister     GPTMTBPV;         // 0x068
  uint8_t              reserved1[0xF54]; // 0x06C
  GPTMPPRegister       GPTMPP;           // 0xFC0
} GPTMRegisterBase;

/* Define a const pointer to a volatile GPTMRegisterBase */
typedef GPTMRegisterBase volatile * const GPTMRegisterBasePtr;

/* System Control */
typedef union RISRegister_t {
  uint32_t value;
  struct {
    uint32_t reserved0 : 1,
             BOR1RIS   : 1,
             reserved1 : 1,
             MOFRIS    : 1,
             reserved2 : 2,
             PLLRIS    : 1,
             USBPLLRIS : 1,
             MOSCPURIS : 1,
             reserved3 : 1,
             VDDARIS   : 1,
             BOR0RIS   : 1,
             reserved4 : 20;
  } field;
} RISRegister;

typedef union RCCRegister_t {
  uint32_t value;
  struct {
    uint32_t MOSCDIS   : 1,
             reserved0 : 3,
             OSCSRC    : 2,
             XTAL      : 5,
             BYPASS    : 1,
             reserved1 : 1,
             PWRDN     : 1,
             reserved2 : 3,
             PWMDIV    : 3,
             USEPWMDIV : 1,
             reserved3 : 1,
             USESYSDIV : 1,
             SYSDIV    : 4,
             ACG       : 1,
             reserved4 : 4;
  } field;
} RCCRegister;

typedef union RCGC0Register_t {
  uint32_t value;
  struct {
    uint32_t reserved0  : 3,
             WDT0       : 1,
             reserved1  : 2,
             HIB        : 1,
             reserved2  : 1,
             MAXADC0SPD : 2,
             MAXADC1SPD : 2,
             reserved3  : 4,
             ADC0       : 1,
             ADC1       : 1,
             reserved4  : 2,
             PWM0       : 1,
             reserved5  : 3,
             CAN0       : 1,
             CAN1       : 1,
             reserved6  : 2,
             WDT1       : 1,
             reserved7  : 3;
  } field;
} RCGC0Register;

typedef union RCGC1Register_t {
  uint32_t value;
  struct {
    uint32_t UART0     : 1,
             UART1     : 1,
             UART2     : 1,
             reserved0 : 1,
             SSI0      : 1,
             SSI1      : 1,
             reserved1 : 2,
             QEI0      : 1,
             QEI1      : 1,
             reserved2 : 2,
             I2C0      : 1,
             reserved3 : 1,
             I2C1      : 1,
             reserved4 : 1,
             TIMER0    : 1,
             TIMER1    : 1,
             TIMER2    : 1,
             TIMER3    : 1,
             reserved5 : 4,
             COMP0     : 1,
             COMP1     : 1,
             reserved6 : 6;
  } field;
} RCGC1Register;

typedef union RCC2Register_t {
  uint32_t value;
  struct {
    uint32_t reserved0  : 4,
             OSCSRC2    : 3,
             reserved1  : 4,
             BYPASS2    : 1,
             reserved2  : 1,
             PWRDN2     : 1,
             USBPWRDN   : 1,
             reserved3  : 7,
             SYSDIV2LSB : 1,
             SYSDIV2    : 6,
             reserved4  : 1,
             DIV400     : 1,
             USERCC2    : 1;
  } field;
} RCC2Register;

typedef union RCGC2Register_t {
  uint32_t value;
  struct {
    uint32_t GPIOA     : 1,
             GPIOB     : 1,
             GPIOC     : 1,
             GPIOD     : 1,
             GPIOE     : 1,
             GPIOF     : 1,
             reserved0 : 7,
             UDMA      : 1,
             reserved1 : 2,
             USB0      : 1,
             reserved2 : 15;
  } field;
} RCGC2Register;

typedef struct SystemControlRegisterBase_t {
  uint8_t       reserved0[0x050]; // 0x000
  RISRegister   RIS;              // 0x050
  uint8_t       reserved1[0x00C]; // 0x054
  RCCRegister   RCC;              // 0x060
  uint8_t       reserved2[0x00C]; // 0x064
  RCC2Register  RCC2;             // 0x070
  uint8_t       reserved3[0x08C]; // 0x074
  RCGC0Register RCGC0;            // 0x100
  RCGC1Register RCGC1;            // 0x104
  RCGC2Register RCGC2;            // 0x108
} SystemControlRegisterBase;

/* Define a const pointer to a volatile SystemControlRegister */
typedef SystemControlRegisterBase volatile * const SystemControlRegisterBasePtr;

/* System Tick */
typedef union STCTRLRegister_t {
  uint32_t value;
  struct {
    uint32_t ENABLE    : 1,
             INTEN     : 1,
             CLK_SRC   : 1,
             reserved0 : 13,
             COUNT     : 1,
             reserved1 : 15;
  } field;
} STCTRLRegister;

typedef union STRELOADRegister_t {
  uint32_t value;
  struct {
    uint32_t RELOAD   : 24,
             reserved : 8;
  } field;
} STRELOADRegister;

typedef union STCURRENTRegister_t {
  uint32_t value;
  struct {
    uint32_t CURRENT  : 24,
             reserved : 8;
  } field;
} STCURRENTRegister;

typedef struct SystemTickRegisterBase_t {
                                     // Offset
  uint8_t           reserved[0x010]; // 0x000
  STCTRLRegister    STCTRL;          // 0x010
  STRELOADRegister  STRELOAD;        // 0x014
  STCURRENTRegister STCURRENT;       // 0x018
} SystemTickRegisterBase;

/* Define a const pointer to a volatile SystemTickRegisterBase */
typedef SystemTickRegisterBase volatile * const SystemTickRegisterBasePtr;

/* NVIC */
typedef union NVICRegister_t {
  uint32_t value;
  struct {
    uint32_t INT : 32;
  } field;
} NVICRegister;

typedef NVICRegister ENRegister;
typedef NVICRegister DISRegister;
typedef NVICRegister PENDRegister;
typedef NVICRegister UNPENDRegister;
typedef NVICRegister ACTIVERegister;

typedef ENRegister EN0Register;
typedef ENRegister EN1Register;
typedef ENRegister EN2Register;
typedef ENRegister EN3Register;
typedef ENRegister EN4Register;

typedef DISRegister DIS0Register;
typedef DISRegister DIS1Register;
typedef DISRegister DIS2Register;
typedef DISRegister DIS3Register;
typedef DISRegister DIS4Register;

typedef PENDRegister PEND0Register;
typedef PENDRegister PEND1Register;
typedef PENDRegister PEND2Register;
typedef PENDRegister PEND3Register;
typedef PENDRegister PEND4Register;

typedef UNPENDRegister UNPEND0Register;
typedef UNPENDRegister UNPEND1Register;
typedef UNPENDRegister UNPEND2Register;
typedef UNPENDRegister UNPEND3Register;
typedef UNPENDRegister UNPEND4Register;

typedef ACTIVERegister ACTIVE0Register;
typedef ACTIVERegister ACTIVE1Register;
typedef ACTIVERegister ACTIVE2Register;
typedef ACTIVERegister ACTIVE3Register;
typedef ACTIVERegister ACTIVE4Register;

typedef union PRIRegister_t {
  uint32_t value;
  struct {
    uint32_t reserved0 : 5,
             INTA      : 3,
             reserved1 : 5,
             INTB      : 3,
             reserved3 : 5,
             INTC      : 3,
             reserved4 : 5,
             INTD      : 3;
  } field;
} PRIRegister;

typedef PRIRegister PRI0Register;
typedef PRIRegister PRI1Register;
typedef PRIRegister PRI2Register;
typedef PRIRegister PRI3Register;
typedef PRIRegister PRI4Register;
typedef PRIRegister PRI5Register;
typedef PRIRegister PRI6Register;
typedef PRIRegister PRI7Register;
typedef PRIRegister PRI8Register;
typedef PRIRegister PRI9Register;
typedef PRIRegister PRI10Register;
typedef PRIRegister PRI11Register;
typedef PRIRegister PRI12Register;
typedef PRIRegister PRI13Register;
typedef PRIRegister PRI14Register;
typedef PRIRegister PRI15Register;
typedef PRIRegister PRI16Register;
typedef PRIRegister PRI17Register;
typedef PRIRegister PRI18Register;
typedef PRIRegister PRI19Register;
typedef PRIRegister PRI20Register;
typedef PRIRegister PRI21Register;
typedef PRIRegister PRI22Register;
typedef PRIRegister PRI23Register;
typedef PRIRegister PRI24Register;
typedef PRIRegister PRI25Register;
typedef PRIRegister PRI26Register;
typedef PRIRegister PRI27Register;
typedef PRIRegister PRI28Register;
typedef PRIRegister PRI29Register;
typedef PRIRegister PRI30Register;
typedef PRIRegister PRI31Register;
typedef PRIRegister PRI32Register;
typedef PRIRegister PRI33Register;
typedef PRIRegister PRI34Register;

typedef union SWTRIGRegister_t {
  uint32_t value;
  struct {
    uint32_t INTID    : 8,
             reserved : 24;
  } field;
} SWTRIGRegister;

typedef struct NVICRegisterBase_t {
                                    // Offset
  uint8_t        reserved0[0x100];  // 0x000
  EN0Register     EN0;              // 0x100
  EN1Register     EN1;              // 0x104
  EN2Register     EN2;              // 0x108
  EN3Register     EN3;              // 0x10C
  EN4Register     EN4;              // 0x110
  uint8_t         reserved1[0x06C]; // 0x114
  DIS0Register    DIS0;             // 0x180
  DIS1Register    DIS1;             // 0x184
  DIS2Register    DIS2;             // 0x188
  DIS3Register    DIS3;             // 0x18C
  DIS4Register    DIS4;             // 0x190
  uint8_t         reserved2[0x06C]; // 0x194
  PEND0Register   PEND0;            // 0x200
  PEND1Register   PEND1;            // 0x204
  PEND2Register   PEND2;            // 0x208
  PEND3Register   PEND3;            // 0x20C
  PEND4Register   PEND4;            // 0x210
  uint8_t         reserved3[0x06C]; // 0x214
  UNPEND0Register UNPEND0;          // 0x280
  UNPEND1Register UNPEND1;          // 0x284
  UNPEND2Register UNPEND2;          // 0x288
  UNPEND3Register UNPEND3;          // 0x28C
  UNPEND4Register UNPEND4;          // 0x290
  uint8_t         reserved4[0x06C]; // 0x294
  ACTIVE0Register ACTIVE0;          // 0x300
  ACTIVE1Register ACTIVE1;          // 0x304
  ACTIVE2Register ACTIVE2;          // 0x308
  ACTIVE3Register ACTIVE3;          // 0x30C
  ACTIVE4Register ACTIVE4;          // 0x310
  uint8_t         reserved5[0x0EC]; // 0x314
  PRI0Register    PRI0;             // 0x400
  PRI1Register    PRI1;             // 0x404
  PRI2Register    PRI2;             // 0x408
  PRI3Register    PRI3;             // 0x40C
  PRI4Register    PRI4;             // 0x410
  PRI5Register    PRI5;             // 0x414
  PRI6Register    PRI6;             // 0x418
  PRI7Register    PRI7;             // 0x41C
  PRI8Register    PRI8;             // 0x420
  PRI9Register    PRI9;             // 0x424
  PRI0Register    PRI10;            // 0x428
  PRI1Register    PRI11;            // 0x42C
  PRI2Register    PRI12;            // 0x430
  PRI3Register    PRI13;            // 0x434
  PRI4Register    PRI14;            // 0x438
  PRI5Register    PRI15;            // 0x43C
  PRI6Register    PRI16;            // 0x440
  PRI7Register    PRI17;            // 0x444
  PRI8Register    PRI18;            // 0x448
  PRI9Register    PRI19;            // 0x44C
  PRI0Register    PRI20;            // 0x450
  PRI1Register    PRI21;            // 0x454
  PRI2Register    PRI22;            // 0x458
  PRI3Register    PRI23;            // 0x45C
  PRI4Register    PRI24;            // 0x460
  PRI5Register    PRI25;            // 0x464
  PRI6Register    PRI26;            // 0x468
  PRI7Register    PRI27;            // 0x46C
  PRI8Register    PRI28;            // 0x470
  PRI9Register    PRI29;            // 0x474
  PRI0Register    PRI30;            // 0x478
  PRI1Register    PRI31;            // 0x47C
  PRI2Register    PRI32;            // 0x480
  PRI3Register    PRI33;            // 0x484
  PRI4Register    PRI34;            // 0x488
  uint8_t         reserved6[0xA74]; // 0x48C
  SWTRIGRegister SWTRIG;            // 0xF00
} NVICRegisterBase;

/* Define a const pointer to a volatile NVICRegisterBase */
typedef NVICRegisterBase volatile * const NVICRegisterBasePtr;

/* Peripherals */
typedef union PeripheralsRegisterBase_t {
  SystemTickRegisterBase systemTick;
  NVICRegisterBase nvic;
} PeripheralsRegisterBase;

/* Define a const pointer to a volatile PeripheralsRegisterBase */
typedef PeripheralsRegisterBase volatile * const PeripheralsRegisterBasePtr;

/* ADC */
typedef union ADCACTSSRegiseter_t {
  uint32_t value;
  struct {
    uint32_t ASEN0     : 1,
             ASEN1     : 1,
             ASEN2     : 1,
             ASEN3     : 1,
             reserved0 : 12,
             BUSY      : 1,
             reserved1 : 15;
  } field;
} ADCACTSSRegiseter;

typedef union ADCIRSRegister_t {
  uint32_t value;
  struct {
    uint32_t INR0      : 1,
             INR1      : 1,
             INR2      : 1,
             INR3      : 1,
             reserved0 : 12,
             INRDC     : 1,
             reserved1 : 15;
  } field;
} ADCIRSRegister;

typedef union ADCIMRegister_t {
  uint32_t value;
  struct {
    uint32_t MASK0     : 1,
             MASK1     : 1,
             MASK2     : 1,
             MASK3     : 1,
             reserved0 : 12,
             DCONSS0   : 1,
             DCONSS1   : 1,
             DCONSS2   : 1,
             DCONSS3   : 1,
             reserved1 : 12;
  } field;
} ADCIMRegister;

typedef union ADCISCRegister_t {
  uint32_t value;
  struct {
    uint32_t IN0       : 1,
             IN1       : 1,
             IN2       : 1,
             IN3       : 1,
             reserved  : 12,
             DCINSS0   : 1,
             DCINSS1   : 1,
             DCINSS2   : 1,
             DCINSS3   : 1,
             reserved1 : 12;
  } field;
} ADCISCRegister;

typedef union ADCOSTATRegister_t {
  uint32_t value;
  struct {
    uint32_t OV0      : 1,
             OV1      : 1,
             OV2      : 1,
             OV3      : 1,
             reserved : 12;
  } field;
} ADCOSTATRegister;

typedef union ADCEMUXRegister_t {
  uint32_t value;
  struct {
    uint32_t EM0      : 4,
             EM1      : 4,
             EM2      : 4,
             EM3      : 4,
             reserved : 16;
  } field;
} ADCEMUXRegister;

typedef union ADCUSTATRegister_t {
  uint32_t value;
  struct {
    uint32_t UV0      : 1,
             UV1      : 1,
             UV2      : 1,
             UV3      : 1,
             reserved : 12;
  } field;
} ADCUSTATRegister;

typedef union ADCTSSELRegister_t {
  uint32_t value;
  struct {
    uint32_t reserved0 : 4,
             PS0       : 2,
             reserved1 : 6,
             PS1       : 2,
             reserved2 : 6,
             PS2       : 2,
             reserved3 : 6,
             PS3       : 2,
             reserved4 : 2;
  } field;
} ADCTSSELRegister;

typedef union ADCSSPRIRegister_t {
  uint32_t value;
  struct {
    uint32_t SS0       : 2,
             reserved0 : 2,
             SS1       : 2,
             reserved1 : 2,
             SS2       : 2,
             reserved2 : 2,
             SS3       : 2,
             reserved3 : 2,
             reserved4 : 16;
  } field;
} ADCSSPRIRegister;

typedef union ADCSPCRegister_t {
  uint32_t value;
  struct {
    uint32_t PHASE    : 4,
             reserved : 28;
  } field;
} ADCSPCRegister;

typedef union ADCPSSIRegister_t {
  uint32_t value;
  struct {
    uint32_t SS0       : 1,
             SS1       : 1,
             SS2       : 1,
             SS3       : 1,
             reserved0 : 23,
             SYNCWAIT  : 1,
             reserved1 : 3,
             GSYNC     : 1;
  } field;
} ADCPSSIRegister;

typedef union ADCSACRegister_t {
  uint32_t value;
  struct {
    uint32_t AVG      : 3,
             reserved : 29;
  } field;
} ADCSACRegister;

typedef union ADCDCISCRegister_t {
  uint32_t value;
  struct {
    uint32_t DCINT0   : 1,
             DCINT1   : 1,
             DCINT2   : 1,
             DCINT3   : 1,
             DCINT4   : 1,
             DCINT5   : 1,
             DCINT6   : 1,
             DCINT7   : 1,
             reserved : 24;
  } field;
} ADCDCISCRegister;

typedef union ADCCTLRegister_t {
  uint32_t value;
  struct {
    uint32_t VREF      : 2,
             reserved0 : 4,
             DITHER    : 1,
             reserved1 : 29;
  } field;
} ADCCTLRegister;

typedef union ADCSSMUX0Register_t {
  uint32_t value;
  struct {
    uint32_t MUX0 : 4,
             MUX1 : 4,
             MUX2 : 4,
             MUX3 : 4,
             MUX4 : 4,
             MUX5 : 4,
             MUX6 : 4,
             MUX7 : 4;
  } field;
} ADCSSMUX0Register;

typedef union ADCSSCTL0Register_t {
  uint32_t value;
  struct {
    uint32_t D0   : 1,
             END0 : 1,
             IE0  : 1,
             TS0  : 1,
             D1   : 1,
             END1 : 1,
             IE1  : 1,
             TS1  : 1,
             D2   : 1,
             END2 : 1,
             IE2  : 1,
             TS2  : 1,
             D3   : 1,
             END3 : 1,
             IE3  : 1,
             TS3  : 1,
             D4   : 1,
             END4 : 1,
             IE4  : 1,
             TS4  : 1,
             D5   : 1,
             END5 : 1,
             IE5  : 1,
             TS5  : 1,
             D6   : 1,
             END6 : 1,
             IE6  : 1,
             TS6  : 1,
             D7   : 1,
             END7 : 1,
             IE7  : 1,
             TS7  : 1;
  } field;
} ADCSSCTL0Register;

typedef union ADCFIFORegister_t {
  uint32_t value;
  struct {
    uint32_t DATA     : 12,
             reserved : 20;
  } field;
} ADCFIFORegister;

typedef ADCFIFORegister ADCSSFIFO0Register;
typedef ADCFIFORegister ADCSSFIFO1Register;
typedef ADCFIFORegister ADCSSFIFO2Register;
typedef ADCFIFORegister ADCSSFIFO3Register;

typedef union ADCSSFSTATRegister_t {
  uint32_t value;
  struct {
    uint32_t TPTR      : 4,
             HPTR      : 4,
             EMPTY     : 1,
             reserved0 : 3,
             FULL      : 1,
             reserved1 : 3,
             reserved2 : 16;
  } field;
} ADCSSFSTATRegister;

typedef ADCSSFSTATRegister ADCSSFSTAT0Register;
typedef ADCSSFSTATRegister ADCSSFSTAT1Register;
typedef ADCSSFSTATRegister ADCSSFSTAT2Register;
typedef ADCSSFSTATRegister ADCSSFSTAT3Register;

typedef union ADCSSOP0Register_t {
  uint32_t value;
  struct {
    uint32_t S0DCOP    : 1,
             reserved0 : 3,
             S1DCOP    : 1,
             reserved1 : 3,
             S2DCOP    : 1,
             reserved2 : 3,
             S3DCOP    : 1,
             reserved3 : 3,
             S4DCOP    : 1,
             reserved4 : 3,
             S5DCOP    : 1,
             reserved5 : 3,
             S6DCOP    : 1,
             reserved6 : 3,
             S7DCOP    : 1,
             reserved7 : 3;
  } field;
} ADCSSOP0Register;

typedef union ADCSSDC0Register_t {
  uint32_t value;
  struct {
    uint32_t S0DCSEL : 4,
             S1DCSEL : 4,
             S2DCSEL : 4,
             S3DCSEL : 4,
             S4DCSEL : 4,
             S5DCSEL : 4,
             S6DCSEL : 4,
             S7DCSEL : 4;
  } field;
} ADCSSDC0Register;

typedef union ADCSSMUXRegister_t {
  uint32_t value;
  struct {
    uint32_t MUX0     : 4,
             MUX1     : 4,
             MUX2     : 4,
             MUX3     : 4,
             reserved : 16;
  } field;
} ADCSSMUXRegister;

typedef ADCSSMUXRegister ADCSSMUX1Register;
typedef ADCSSMUXRegister ADCSSMUX2Register;

typedef union ADCSSCTLRegister_t {
  uint32_t value;
  struct {
    uint32_t D0   : 1,
             END0 : 1,
             IE0  : 1,
             TS0  : 1,
             D1   : 1,
             END1 : 1,
             IE1  : 1,
             TS1  : 1,
             D2   : 1,
             END2 : 1,
             IE2  : 1,
             TS2  : 1,
             D3   : 1,
             END3 : 1,
             IE3  : 1,
             TS3  : 1,
             D4   : 1,
             END4 : 1,
             IE4  : 1,
             TS4  : 1,
             D5   : 1,
             END5 : 1,
             IE5  : 1,
             TS5  : 1,
             D6   : 1,
             END6 : 1,
             IE6  : 1,
             TS6  : 1,
             D7   : 1,
             END7 : 1,
             IE7  : 1,
             TS7  : 1;
  } field;
} ADCSSCTLRegister;

typedef ADCSSCTLRegister ADCSSCTL1Register;
typedef ADCSSCTLRegister ADCSSCTL2Register;

typedef union ADCSSOPRegister_t {
  uint32_t value;
  struct {
    uint32_t S0DCOP    : 1,
             reserved0 : 3,
             S1DCOP    : 1,
             reserved1 : 3,
             S2DCOP    : 1,
             reserved2 : 3,
             S3DCOP    : 1,
             reserved3 : 3,
             reserved4 : 16;
  } field;
} ADCSSOPRegister;

typedef ADCSSOPRegister ADCSSOP1Register;
typedef ADCSSOPRegister ADCSSOP2Register;

typedef union ADCSSDCRegister_t {
  uint32_t value;
  struct {
    uint32_t S0DCSEL  : 4,
             S1DCSEL  : 4,
             S2DCSEL  : 4,
             S3DCSEL  : 4,
             reserved : 16;
  } field;
} ADCSSDCRegister;

typedef ADCSSDCRegister ADCSSDC1Register;
typedef ADCSSDCRegister ADCSSDC2Register;

typedef union ADCSSMUX3Register_t {
  uint32_t value;
  struct {
    uint32_t MUX0     : 4,
             reserved : 28;
  } field;
} ADCSSMUX3Register;

typedef union ADCSSCTL3Register_t {
  uint32_t value;
  struct {
    uint32_t D0       : 1,
             END0     : 1,
             IE0      : 1,
             TS0      : 1,
             reserved : 28;
  } field;
} ADCSSCTL3Register;

typedef union ADCSSOP3Register_t {
  uint32_t value;
  struct {
    uint32_t S0DCOP   : 1,
             reserved : 31;
  } field;
} ADCSSOP3Register;

typedef union ADCSSDC3Register_t {
  uint32_t value;
  struct {
    uint32_t S0DCSEL  : 4,
             reserved : 28;
  } field;
} ADCSSDC3Register;

typedef union ADCDCRICRegister_t {
  uint32_t value;
  struct {
    uint32_t DCINT0    : 1,
             DCINT1    : 1,
             DCINT2    : 1,
             DCINT3    : 1,
             DCINT4    : 1,
             DCINT5    : 1,
             DCINT6    : 1,
             DCINT7    : 1,
             reserved0 : 8,
             DCTRIG0   : 1,
             DCTRIG1   : 1,
             DCTRIG2   : 1,
             DCTRIG3   : 1,
             DCTRIG4   : 1,
             DCTRIG5   : 1,
             DCTRIG6   : 1,
             DCTRIG7   : 1,
             reserved1 : 8;
  } field;
} ADCDCRICRegister;

typedef union ADCDCCTLRegister_t {
  uint32_t value;
  struct {
    uint32_t CIM       : 2,
             CIC       : 2,
             CIE       : 1,
             reserved0 : 3,
             CTM       : 2,
             CTC       : 2,
             CTE       : 1,
             reserved1 : 19;
  } field;
} ADCDCCTLRegister;

typedef ADCDCCTLRegister ADCDCCTL0Register;
typedef ADCDCCTLRegister ADCDCCTL1Register;
typedef ADCDCCTLRegister ADCDCCTL2Register;
typedef ADCDCCTLRegister ADCDCCTL3Register;
typedef ADCDCCTLRegister ADCDCCTL4Register;
typedef ADCDCCTLRegister ADCDCCTL5Register;
typedef ADCDCCTLRegister ADCDCCTL6Register;
typedef ADCDCCTLRegister ADCDCCTL7Register;

typedef union ADCDCCOMPRegister_t {
  uint32_t value;
  struct {
    uint32_t COMP0     : 12,
             reserved0 : 4,
             COMP1     : 12,
             reserved1 : 4;
  } field;
} ADCDCCOMPRegister;

typedef ADCDCCOMPRegister ADCDCCOMP0Register;
typedef ADCDCCOMPRegister ADCDCCOMP1Register;
typedef ADCDCCOMPRegister ADCDCCOMP2Register;
typedef ADCDCCOMPRegister ADCDCCOMP3Register;
typedef ADCDCCOMPRegister ADCDCCOMP4Register;
typedef ADCDCCOMPRegister ADCDCCOMP5Register;
typedef ADCDCCOMPRegister ADCDCCOMP6Register;
typedef ADCDCCOMPRegister ADCDCCOMP7Register;

typedef union ADCPPRegister_t {
  uint32_t value;
  struct {
    uint32_t MSR      : 4,
             CH       : 6,
             DC       : 6,
             TYPE     : 2,
             RSL      : 5,
             TS       : 1,
             reserved : 8;
  } field;
} ADCPPRegister;

typedef union ADCPCRegister_t {
  uint32_t value;
  struct {
    uint32_t SR       : 4,
             reserved : 28;
  } field;
} ADCPCRegister;

typedef union ADCCCRegister_t {
  uint32_t value;
  struct {
    uint32_t CS       : 4,
             reserved : 28;
  } field;
} ADCCRegister;

typedef struct ADCRegisterBase_t {
                                        // Offset
  ADCACTSSRegiseter   ADCACTSS;         // 0x000
  ADCIRSRegister      ADCIRS;           // 0x004
  ADCIMRegister       ADCIM;            // 0x008
  ADCISCRegister      ADCISC;           // 0x00C
  ADCOSTATRegister    ADCOSTAT;         // 0x010
  ADCEMUXRegister     ADCEMUX;          // 0x014
  ADCUSTATRegister    ADCUSTAT;         // 0x018
  ADCTSSELRegister    ADCTSSEL;         // 0x01C
  ADCSSPRIRegister    ADCSSPRI;         // 0x020
  ADCSPCRegister      ADCSPC;           // 0x024
  ADCPSSIRegister     ADCPSSI;          // 0x028
  uint8_t             reserved0[0x004]; // 0x02C
  ADCSACRegister      ADCSAC;           // 0x030
  ADCDCISCRegister    ADCDCISC;         // 0x034
  ADCCTLRegister      ADCCTL;           // 0x038
  uint8_t             reserved1[0x004]; // 0x03C
  ADCSSMUX0Register   ADCSSMUX0;        // 0x040
  ADCSSCTL0Register   ADCSSCTL0;        // 0x044
  ADCSSFIFO0Register  ADCSSFIFO0;       // 0x048
  ADCSSFSTAT0Register ADCSSFSTAT0;      // 0x04C
  ADCSSOP0Register    ADCSSOP0;         // 0x050
  ADCSSDC0Register    ADCSSDC0;         // 0x054
  uint8_t             reserved2[0x008]; // 0x058
  ADCSSMUX1Register   ADCSSMUX1;        // 0x060
  ADCSSCTL1Register   ADCSSCTL1;        // 0x064
  ADCSSFIFO1Register  ADCSSFIFO1;       // 0x068
  ADCSSFSTAT1Register ADCSSFSTAT1;      // 0x06C
  ADCSSOP1Register    ADCSSOP1;         // 0x070
  ADCSSDC1Register    ADCSSDC1;         // 0x074
  uint8_t             reserved3[0x008]; // 0x078
  ADCSSMUX2Register   ADCSSMUX2;        // 0x080
  ADCSSCTL2Register   ADCSSCTL2;        // 0x084
  ADCSSFIFO2Register  ADCSSFIFO2;       // 0x088
  ADCSSFSTAT2Register ADCSSFSTAT2;      // 0x08C
  ADCSSOP2Register    ADCSSOP2;         // 0x090
  ADCSSDC2Register    ADCSSDC2;         // 0x094
  uint8_t             reserved4[0x008]; // 0x098
  ADCSSMUX3Register   ADCSSMUX3;        // 0x0A0
  ADCSSCTL3Register   ADCSSCTL3;        // 0x0A4
  ADCSSFIFO3Register  ADCSSFIFO3;       // 0x0A8
  ADCSSFSTAT3Register ADCSSFSTAT3;      // 0x0AC
  ADCSSOP3Register    ADCSSOP3;         // 0x0B0
  ADCSSDC3Register    ADCSSDC3;         // 0x0B4
  uint8_t             reserved5[0xC48]; // 0x0B8
  ADCDCRICRegister    ADCDCRIC;         // 0xD00
  uint8_t             reserved6[0x0FC]; // 0xD04
  ADCDCCTL0Register   ADCDCCTL0;        // 0xE00
  ADCDCCTL1Register   ADCDCCTL1;        // 0xE04
  ADCDCCTL2Register   ADCDCCTL2;        // 0xE08
  ADCDCCTL3Register   ADCDCCTL3;        // 0xE0C
  ADCDCCTL4Register   ADCDCCTL4;        // 0xE10
  ADCDCCTL5Register   ADCDCCTL5;        // 0xE14
  ADCDCCTL6Register   ADCDCCTL6;        // 0xE18
  ADCDCCTL7Register   ADCDCCTL7;        // 0xE1C
  uint8_t             reserved7[0x020]; // 0xE20
  ADCDCCOMP0Register  ADCDCCOMP0;       // 0xE40
  ADCDCCOMP1Register  ADCDCCOMP1;       // 0xE44
  ADCDCCOMP2Register  ADCDCCOMP2;       // 0xE48
  ADCDCCOMP3Register  ADCDCCOMP3;       // 0xE4C
  ADCDCCOMP4Register  ADCDCCOMP4;       // 0xE50
  ADCDCCOMP5Register  ADCDCCOMP5;       // 0xE54
  ADCDCCOMP6Register  ADCDCCOMP6;       // 0xE58
  ADCDCCOMP7Register  ADCDCCOMP7;       // 0xE5C
  uint8_t             reserved8[0x160]; // 0xE60
  ADCPPRegister       ADCPP;            // 0xFC0
  ADCPCRegister       ADCPC;            // 0xFC4
  ADCCRegister        ADCC;             // 0xFC8
} ADCRegisterBase;

/* Define a const pointer to a volatile ADCRegisterBase */
typedef ADCRegisterBase volatile * const ADCRegisterBasePtr;

/* UART */
typedef union UARTDRRegister_t {
  uint32_t value;
  struct {
    uint32_t DATA     : 8,
             FE       : 1,
             PE       : 1,
             BE       : 1,
             OE       : 1,
             reserved : 20;
  } field;
} UARTDRRegister;

typedef union UARTRSRRegister_t {
  uint32_t value;
  struct {
    uint32_t FE       : 1,
             PE       : 1,
             BE       : 1,
             OE       : 1,
             reserved : 28;
  } field;
} UARTRSRRegister;

typedef union UARTECRRegister_t {
  uint32_t value;
  struct {
    uint32_t DATA     : 8,
             reserved : 24;
  } field;
} UARTECRRegister;

typedef union UARTRSRECRRegister_t {
  uint32_t value;
  UARTRSRRegister UARTRSR;
  UARTECRRegister UARTECR;
} UARTRSRECRRegister;

typedef union UARTFRRegister_t {
  uint32_t value;
  struct {
    uint32_t CTS       : 1,
             reserved0 : 2,
             BUSY      : 1,
             RXFE      : 1,
             TXFF      : 1,
             RXFF      : 1,
             TXFE      : 1,
             reserved1 : 24;
  } field;
} UARTFRRegister;

typedef union UARTILPRRegister_t {
  uint32_t value;
  struct {
    uint32_t ILPDVSR  : 8,
             reserved : 24;
  } field;
} UARTILPRRegister;

typedef union UARTIBRDRegister_t {
  uint32_t value;
  struct {
    uint32_t DIVINT   : 16,
             reserved : 16;
  } field;
} UARTIBRDRegister;

typedef union UARTFBRDRegister_t {
  uint32_t value;
  struct {
    uint32_t DIVINT   : 6,
             reserved : 26;
  } field;
} UARTFBRDRegister;

typedef union UARTLCRHRegister_t {
  uint32_t value;
  struct {
    uint32_t BRK      : 1,
             PEN      : 1,
             EPS      : 1,
             STP2     : 1,
             FEN      : 1,
             WLEN     : 2,
             SPS      : 1,
             reserved : 24;
  } field;
} UARTLCRHRegister;

typedef union UARTCTLRegister_t {
  uint32_t value;
  struct {
    uint32_t UARTEN    : 1,
             SIREN     : 1,
             SIRLP     : 1,
             SMART     : 1,
             EOT       : 1,
             HSE       : 1,
             reserved0 : 1,
             LBE       : 1,
             TXE       : 1,
             RXE       : 1,
             reserved1 : 1,
             RTS       : 1,
             reserved2 : 2,
             RTSEN     : 1,
             CTSEN     : 1,
             reserved3 : 16;
  } field;
} UARTCTLRegister;

typedef union UARTIFLSRegister_t {
  uint32_t value;
  struct {
    uint32_t TXIFLSEL : 4,
             RXIFLSEL : 4,
             reserved : 24;
  } field;
} UARTIFLSRegister;

typedef union UARTInterruptRegister_t {
  uint32_t value;
  struct {
    uint32_t reserved0 : 1,
             CTS       : 1,
             reserved1 : 2,
             RX        : 1,
             TX        : 1,
             RT        : 1,
             FE        : 1,
             PE        : 1,
             BE        : 1,
             OE        : 1,
             reserved2 : 1,
             _9BIT     : 1,
             reserved3 : 19;
  } field;
} UARTInterruptRegister;

typedef UARTInterruptRegister UARTIMRegister;
typedef UARTInterruptRegister UARTRISRegister;
typedef UARTInterruptRegister UARTMISRegister;
typedef UARTInterruptRegister UARTICRegister;

typedef union UARTDMACTLRegister_t {
  uint32_t value;
  struct {
    uint32_t RXDMAE   : 1,
             TXDMAE   : 1,
             DMAERR   : 1,
             reserved : 29;
  } field;
} UARTDMACTLRegister;

typedef union UART9BITADDRRegister_t {
  uint32_t value;
  struct {
    uint32_t ADDR      : 8,
             reserved0 : 7,
             _9BITEN   : 1,
             reserved1 : 16;
  } field;
} UART9BITADDRRegister;

typedef union UART9BITAMASKRegister_t {
  uint32_t value;
  struct {
    uint32_t MASK     : 8,
             reserved : 24;
  } field;
} UART9BITAMASKRegister;

typedef union UARTPPRegister_t {
  uint32_t value;
  struct {
    uint32_t SC       : 1,
             NB       : 1,
             reserved : 30;
  } field;
} UARTPPRegister;

typedef union UARTCCRegister_t {
  uint32_t value;
  struct {
    uint32_t SC       : 4,
             reserved : 28;
  } field;
} UARTCCRegister;

typedef PeriphIDRegister UARTPeriphIDRegister;

typedef UARTPeriphIDRegister UARTPeriphID0Register;
typedef UARTPeriphIDRegister UARTPeriphID1Register;
typedef UARTPeriphIDRegister UARTPeriphID2Register;
typedef UARTPeriphIDRegister UARTPeriphID3Register;
typedef UARTPeriphIDRegister UARTPeriphID4Register;
typedef UARTPeriphIDRegister UARTPeriphID5Register;
typedef UARTPeriphIDRegister UARTPeriphID6Register;
typedef UARTPeriphIDRegister UARTPeriphID7Register;

typedef PCellIDRegister UARTPCellIDRegister;

typedef UARTPCellIDRegister UARTPCellID0Register;
typedef UARTPCellIDRegister UARTPCellID1Register;
typedef UARTPCellIDRegister UARTPCellID2Register;
typedef UARTPCellIDRegister UARTPCellID3Register;

typedef struct UARTRegisterBase_t {
                                          // Offset
  UARTDRRegister        UARTDR;           // 0x000
  UARTRSRECRRegister    UARTRSRECR;       // 0x004
  uint8_t               reserved0[0x010]; // 0x008
  UARTFRRegister        UARTFR;           // 0x018
  uint8_t               reserved1[0x004]; // 0x01C
  UARTILPRRegister      UARTILPR;         // 0x020
  UARTIBRDRegister      UARTIBRD;         // 0x024
  UARTFBRDRegister      UARTFBRD;         // 0x028
  UARTLCRHRegister      UARTLCRH;         // 0x02C
  UARTCTLRegister       UARTCTL;          // 0x030
  UARTIFLSRegister      UARTIFLS;         // 0x034
  UARTIMRegister        UARTIM;           // 0x038
  UARTRISRegister       UARTRIS;          // 0x03C
  UARTMISRegister       UARTMIS;          // 0x040
  UARTICRegister        UARTICR;          // 0x044
  UARTDMACTLRegister    UARTDMACTL;       // 0x048
  uint8_t               reserved2[0x058]; // 0x04C
  UART9BITADDRRegister  UART9BITADDR;     // 0x0A4
  UART9BITAMASKRegister UART9BITAMASK;    // 0x0A8
  uint8_t               reserved3[0xF14]; // 0x0AC
  UARTPPRegister        UARTPP;           // 0xFC0
  uint8_t               reserved4[0x004]; // 0xFC4
  UARTCCRegister        UARTCC;           // 0xFC8
  uint8_t               reserved5[0x004]; // 0xFCC
  UARTPeriphID4Register UARTPeriphID4;    // 0xFD0
  UARTPeriphID5Register UARTPeriphID5;    // 0xFD4
  UARTPeriphID6Register UARTPeriphID6;    // 0xFD8
  UARTPeriphID7Register UARTPeriphID7;    // 0xFDC
  UARTPeriphID0Register UARTPeriphID0;    // 0xFE0
  UARTPeriphID1Register UARTPeriphID1;    // 0xFE4
  UARTPeriphID2Register UARTPeriphID2;    // 0xFE8
  UARTPeriphID3Register UARTPeriphID3;    // 0xFEC
  UARTPCellID0Register  UARTPCellID0;     // 0xFF0
  UARTPCellID1Register  UARTPCellID1;     // 0xFF4
  UARTPCellID2Register  UARTPCellID2;     // 0xFF8
  UARTPCellID3Register  UARTPCellID3;     // 0xFFC
} UARTRegisterBase;

/* Define a const pointer to a volatile  UARTRegisterBasePtr */
typedef UARTRegisterBase volatile * const UARTRegisterBasePtr;

/* SSI */
typedef union SSICR0Register_t {
  uint32_t value;
  struct {
    uint32_t DSS      : 4,
             FRF      : 2,
             SPO      : 1,
             SPH      : 1,
             SCR      : 8,
             reserved : 16;
  } field;
} SSICR0Register;

typedef union SSICR1Register_t {
  uint32_t value;
  struct {
    uint32_t LBM      : 1,
             SSE      : 1,
             MS       : 1,
             SOD      : 1,
             EOT      : 1,
             reserved : 27;
  } field;
} SSICR1Register;

typedef union SSIDRRegister_t {
  uint32_t value;
  struct {
    uint32_t DATA     : 16,
             reserved : 16;
  } field;
} SSIDRRegister;

typedef union SSISRRegister_t {
  uint32_t value;
  struct {
    uint32_t TFE      : 1,
             TNF      : 1,
             RNE      : 1,
             RFF      : 1,
             BSY      : 1,
             reserved : 27;
  } field;
} SSISRRegister;

typedef union SSICPSRRegister_t {
  uint32_t value;
  struct {
    uint32_t CPSDVSR  : 8,
             reserved : 24;
  } field;
} SSICPSRRegister;

typedef union SSIInterruptRegister_t {
  uint32_t value;
  struct {
    uint32_t ROR      : 1,
             RT       : 1,
             RX       : 1,
             TX       : 1,
             reserved : 28;
  } field;
} SSIInterruptRegister;

typedef SSIInterruptRegister SSIIMRegister;
typedef SSIInterruptRegister SSIRISRegister;
typedef SSIInterruptRegister SSIMISRegister;

typedef union SSIICRRegister_t {
  uint32_t value;
  struct {
    uint32_t RORIC    : 1,
             RTIC     : 1,
             reserved : 30;
  } field;
} SSIICRRegister;

typedef union SSIDMACTLRegister_t {
  uint32_t value;
  struct {
    uint32_t RXDMAE   : 1,
             TXDMAE   : 1,
             reserved : 30;
  } field;
} SSIDMACTLRegister;

typedef union SSICCRegister_t {
  uint32_t value;
  struct {
    uint32_t CS       : 4,
             reserved : 28;
  } field;
} SSICCRegister;

typedef PeriphIDRegister SSIPeriphIDRegister;

typedef SSIPeriphIDRegister SSIPeriphID0Register;
typedef SSIPeriphIDRegister SSIPeriphID1Register;
typedef SSIPeriphIDRegister SSIPeriphID2Register;
typedef SSIPeriphIDRegister SSIPeriphID3Register;
typedef SSIPeriphIDRegister SSIPeriphID4Register;
typedef SSIPeriphIDRegister SSIPeriphID5Register;
typedef SSIPeriphIDRegister SSIPeriphID6Register;
typedef SSIPeriphIDRegister SSIPeriphID7Register;

typedef PCellIDRegister SSIPCellIDRegister;

typedef SSIPCellIDRegister SSIPCellID0Register;
typedef SSIPCellIDRegister SSIPCellID1Register;
typedef SSIPCellIDRegister SSIPCellID2Register;
typedef SSIPCellIDRegister SSIPCellID3Register;

typedef struct SSIRegisterBase_t {
                                         // Offset
  SSICR0Register       SSICR0;           // 0x000
  SSICR1Register       SSICR1;           // 0x004
  SSIDRRegister        SSIDR;            // 0x008
  SSISRRegister        SSISR;            // 0x00C
  SSICPSRRegister      SSICPSR;          // 0x010
  SSIIMRegister        SSIIM;            // 0x014
  SSIRISRegister       SSIRIS;           // 0x018
  SSIMISRegister       SSIMIS;           // 0x01C
  SSIICRRegister       SSIICR;           // 0x020
  SSIDMACTLRegister    SSIDMACTL;        // 0x024
  uint8_t              reserved0[0xFA0]; // 0x028
  SSICCRegister        SSICC;            // 0xFC8
  uint8_t              reserved1[4];     // 0xFCC
  SSIPeriphID4Register SSIPeriphID4;     // 0xFD0
  SSIPeriphID5Register SSIPeriphID5;     // 0xFD4
  SSIPeriphID6Register SSIPeriphID6;     // 0xFD8
  SSIPeriphID7Register SSIPeriphID7;     // 0xFDC
  SSIPeriphID0Register SSIPeriphID0;     // 0xFE0
  SSIPeriphID1Register SSIPeriphID1;     // 0xFE4
  SSIPeriphID2Register SSIPeriphID2;     // 0xFE8
  SSIPeriphID3Register SSIPeriphID3;     // 0xFEC
  SSIPCellID0Register  SSIPCellID0;      // 0xFF0
  SSIPCellID1Register  SSIPCellID1;      // 0xFF4
  SSIPCellID2Register  SSIPCellID2;      // 0xFF8
  SSIPCellID3Register  SSIPCellID3;      // 0xFFC
} SSIRegisterBase;

/* Define a const pointer to a volatile  SSIRegisterBasePtr */
typedef SSIRegisterBase volatile * const SSIRegisterBasePtr;

/* Base Addresses and Offsets */
#define SYSTEM_TICK_REGISTER_OFFSET        ((unsigned long)0x00000010)
#define NVIC_REGISTER_OFFSET               ((unsigned long)0x00000100)
#define PERIPHERALS_REGISTER_BASE_ADDR     ((unsigned long)0xE000E000)
#define SYSTEM_TICK_REGISTER_BASE_ADDR     (PERIPHERALS_REGISTER_BASE_ADDR)
#define NVIC_REGISTER_BASE_ADDR            (PERIPHERALS_REGISTER_BASE_ADDR)

#define SYSTEM_CONTROL_REGISTER_BASE_ADDR ((unsigned long)0x400FE000)

#define GPIO_APB_PORTA_REGISTER_BASE_ADDR ((unsigned long)0x40004000)
#define GPIO_APB_PORTB_REGISTER_BASE_ADDR ((unsigned long)0x40005000)
#define GPIO_APB_PORTC_REGISTER_BASE_ADDR ((unsigned long)0x40006000)
#define GPIO_APB_PORTD_REGISTER_BASE_ADDR ((unsigned long)0x40007000)
#define GPIO_APB_PORTE_REGISTER_BASE_ADDR ((unsigned long)0x40024000)
#define GPIO_APB_PORTF_REGISTER_BASE_ADDR ((unsigned long)0x40025000)

#define GPTM_16_32_TIMER0 ((unsigned long)0x40030000)
#define GPTM_16_32_TIMER1 ((unsigned long)0x40031000)
#define GPTM_16_32_TIMER2 ((unsigned long)0x40032000)
#define GPTM_16_32_TIMER3 ((unsigned long)0x40033000)
#define GPTM_16_32_TIMER4 ((unsigned long)0x40034000)
#define GPTM_16_32_TIMER5 ((unsigned long)0x40035000)
#define GPTM_32_64_TIMER0 ((unsigned long)0x40036000)
#define GPTM_32_64_TIMER1 ((unsigned long)0x40037000)
#define GPTM_32_64_TIMER2 ((unsigned long)0x4003C000)
#define GPTM_32_64_TIMER3 ((unsigned long)0x4003D000)
#define GPTM_32_64_TIMER4 ((unsigned long)0x4003E000)
#define GPTM_32_64_TIMER5 ((unsigned long)0x4003F000)

#define ADC0_REGISTER_BASE_ADDR ((unsigned long)0x40038000)
#define ADC1_REGISTER_BASE_ADDR ((unsigned long)0x40039000)

#define UART0_REGISTER_BASE_ADDR ((unsigned long)0x4000C000)
#define UART1_REGISTER_BASE_ADDR ((unsigned long)0x4000D000)
#define UART2_REGISTER_BASE_ADDR ((unsigned long)0x4000E000)
#define UART3_REGISTER_BASE_ADDR ((unsigned long)0x4000F000)
#define UART4_REGISTER_BASE_ADDR ((unsigned long)0x40010000)
#define UART5_REGISTER_BASE_ADDR ((unsigned long)0x40011000)
#define UART6_REGISTER_BASE_ADDR ((unsigned long)0x40012000)
#define UART7_REGISTER_BASE_ADDR ((unsigned long)0x40013000)

#define SSI0_REGISTER_BASE_ADDR ((unsigned long)0x40008000)
#define SSI1_REGISTER_BASE_ADDR ((unsigned long)0x40009000)
#define SSI2_REGISTER_BASE_ADDR ((unsigned long)0x4000A000)
#define SSI3_REGISTER_BASE_ADDR ((unsigned long)0x4000B000)

extern PeripheralsRegisterBasePtr pPeripherals;
#define pSystemTick (&pPeripherals->systemTick)
#define pNvic       (&pPeripherals->nvic)

extern GPIORegisterBasePtr pPortA;
extern GPIORegisterBasePtr pPortB;
extern GPIORegisterBasePtr pPortC;
extern GPIORegisterBasePtr pPortD;
extern GPIORegisterBasePtr pPortE;
extern GPIORegisterBasePtr pPortF;

extern GPTMRegisterBasePtr p1632Timer0;
extern GPTMRegisterBasePtr p1632Timer1;
extern GPTMRegisterBasePtr p1632Timer2;
extern GPTMRegisterBasePtr p1632Timer3;
extern GPTMRegisterBasePtr p1632Timer4;
extern GPTMRegisterBasePtr p1632Timer5;
extern GPTMRegisterBasePtr p3264Timer0;
extern GPTMRegisterBasePtr p3264Timer1;
extern GPTMRegisterBasePtr p3264Timer2;
extern GPTMRegisterBasePtr p3264Timer3;
extern GPTMRegisterBasePtr p3264Timer4;
extern GPTMRegisterBasePtr p3264Timer5;

extern ADCRegisterBasePtr pAdc0;
extern ADCRegisterBasePtr pAdc1;

extern UARTRegisterBasePtr pUart0;
extern UARTRegisterBasePtr pUart1;
extern UARTRegisterBasePtr pUart2;
extern UARTRegisterBasePtr pUart3;
extern UARTRegisterBasePtr pUart4;
extern UARTRegisterBasePtr pUart5;
extern UARTRegisterBasePtr pUart6;
extern UARTRegisterBasePtr pUart7;

extern SSIRegisterBasePtr pSsi0;
extern SSIRegisterBasePtr pSsi1;
extern SSIRegisterBasePtr pSsi2;
extern SSIRegisterBasePtr pSsi3;

extern SystemControlRegisterBasePtr pSystemControl;

#endif // __TM4C123GH6PM_REGISTER_MAP_H__
