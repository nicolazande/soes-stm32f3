/*
* This source file is part of the EtherCAT Slave Stack Code licensed by Beckhoff Automation GmbH & Co KG, 33415 Verl, Germany.
* The corresponding license agreement applies. This hint shall not be removed.
*/

/**
* \addtogroup lan9252_spi lan9252_spi
* @{
*/

/**
\file lan9252_spiObjects
\author ET9300Utilities.ApplicationHandler (Version 1.6.4.0) | EthercatSSC@beckhoff.com

\brief lan9252_spi specific objects<br>
\brief NOTE : This file will be overwritten if a new object dictionary is generated!<br>
*/

#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
#define PROTO
#else
#define PROTO extern
#endif
/******************************************************************************
*                    Object 0x1600 : LED state RXPDO
******************************************************************************/
/**
* \addtogroup 0x1600 0x1600 | LED state RXPDO
* @{
* \brief Object 0x1600 (LED state RXPDO) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - LED state [0]<br>
* SubIndex 2 - LED state [1]<br>
* SubIndex 3 - LED state [2]<br>
* SubIndex 4 - LED state [3]<br>
* SubIndex 5 - LED state [4]<br>
* SubIndex 6 - LED state [5]<br>
* SubIndex 7 - LED state [6]<br>
* SubIndex 8 - LED state [7]<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1600[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex1 - LED state [0] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex2 - LED state [1] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex3 - LED state [2] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex4 - LED state [3] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex5 - LED state [4] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex6 - LED state [5] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex7 - LED state [6] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex8 - LED state [7] */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1600[] = "LED state RXPDO\000"
"LED state [0]\000"
"LED state [1]\000"
"LED state [2]\000"
"LED state [3]\000"
"LED state [4]\000"
"LED state [5]\000"
"LED state [6]\000"
"LED state [7]\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 -  */
UINT32 SI2; /* Subindex2 -  */
UINT32 SI3; /* Subindex3 -  */
UINT32 SI4; /* Subindex4 -  */
UINT32 SI5; /* Subindex5 -  */
UINT32 SI6; /* Subindex6 -  */
UINT32 SI7; /* Subindex7 -  */
UINT32 SI8; /* Subindex8 -  */
} OBJ_STRUCT_PACKED_END
TOBJ1600;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1600 LEDStateRXPDO0x1600
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={8,0x70000108,0x70000208,0x70000308,0x70000408,0x70000508,0x70000608,0x70000708,0x70000808}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1601 : 24V power supply state RXPDO
******************************************************************************/
/**
* \addtogroup 0x1601 0x1601 | 24V power supply state RXPDO
* @{
* \brief Object 0x1601 (24V power supply state RXPDO) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - 24V power supply state [0]<br>
* SubIndex 2 - 24V power supply state [1]<br>
* SubIndex 3 - 24V power supply state [2]<br>
* SubIndex 4 - 24V power supply state [3]<br>
* SubIndex 5 - 24V power supply state [4]<br>
* SubIndex 6 - 24V power supply state [5]<br>
* SubIndex 7 - 24V power supply state [6]<br>
* SubIndex 8 - 24V power supply state [7]<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1601[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex1 - 24V power supply state [0] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex2 - 24V power supply state [1] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex3 - 24V power supply state [2] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex4 - 24V power supply state [3] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex5 - 24V power supply state [4] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex6 - 24V power supply state [5] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex7 - 24V power supply state [6] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex8 - 24V power supply state [7] */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1601[] = "24V power supply state RXPDO\000"
"24V power supply state [0]\000"
"24V power supply state [1]\000"
"24V power supply state [2]\000"
"24V power supply state [3]\000"
"24V power supply state [4]\000"
"24V power supply state [5]\000"
"24V power supply state [6]\000"
"24V power supply state [7]\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 -  */
UINT32 SI2; /* Subindex2 -  */
UINT32 SI3; /* Subindex3 -  */
UINT32 SI4; /* Subindex4 -  */
UINT32 SI5; /* Subindex5 -  */
UINT32 SI6; /* Subindex6 -  */
UINT32 SI7; /* Subindex7 -  */
UINT32 SI8; /* Subindex8 -  */
} OBJ_STRUCT_PACKED_END
TOBJ1601;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1601 _24VPowerSupplyStateRXPDO0x1601
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={8,0x70010108,0x70010208,0x70010308,0x70010408,0x70010508,0x70010608,0x70010708,0x70010808}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1602 : 20V power supply state RXPDO
******************************************************************************/
/**
* \addtogroup 0x1602 0x1602 | 20V power supply state RXPDO
* @{
* \brief Object 0x1602 (20V power supply state RXPDO) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - 20V power supply state [0]<br>
* SubIndex 2 - 20V power supply state [1]<br>
* SubIndex 3 - 20V power supply state [2]<br>
* SubIndex 4 - 20V power supply state [3]<br>
* SubIndex 5 - 20V power supply state [4]<br>
* SubIndex 6 - 20V power supply state [5]<br>
* SubIndex 7 - 20V power supply state [6]<br>
* SubIndex 8 - 20V power supply state [7]<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1602[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex1 - 20V power supply state [0] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex2 - 20V power supply state [1] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex3 - 20V power supply state [2] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex4 - 20V power supply state [3] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex5 - 20V power supply state [4] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex6 - 20V power supply state [5] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex7 - 20V power supply state [6] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex8 - 20V power supply state [7] */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1602[] = "20V power supply state RXPDO\000"
"20V power supply state [0]\000"
"20V power supply state [1]\000"
"20V power supply state [2]\000"
"20V power supply state [3]\000"
"20V power supply state [4]\000"
"20V power supply state [5]\000"
"20V power supply state [6]\000"
"20V power supply state [7]\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 -  */
UINT32 SI2; /* Subindex2 -  */
UINT32 SI3; /* Subindex3 -  */
UINT32 SI4; /* Subindex4 -  */
UINT32 SI5; /* Subindex5 -  */
UINT32 SI6; /* Subindex6 -  */
UINT32 SI7; /* Subindex7 -  */
UINT32 SI8; /* Subindex8 -  */
} OBJ_STRUCT_PACKED_END
TOBJ1602;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1602 _20VPowerSupplyStateRXPDO0x1602
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={8,0x70020108,0x70020208,0x70020308,0x70020408,0x70020508,0x70020608,0x70020708,0x70020808}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1603 : 5V power supply state RXPDO
******************************************************************************/
/**
* \addtogroup 0x1603 0x1603 | 5V power supply state RXPDO
* @{
* \brief Object 0x1603 (5V power supply state RXPDO) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - 5V power supply state [0]<br>
* SubIndex 2 - 5V power supply state [1]<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1603[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex1 - 5V power supply state [0] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex2 - 5V power supply state [1] */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1603[] = "5V power supply state RXPDO\000"
"5V power supply state [0]\000"
"5V power supply state [1]\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 -  */
UINT32 SI2; /* Subindex2 -  */
} OBJ_STRUCT_PACKED_END
TOBJ1603;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1603 _5VPowerSupplyStateRXPDO0x1603
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={2,0x70030108,0x70030208}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1A00 : RTR temperature TXPDO
******************************************************************************/
/**
* \addtogroup 0x1A00 0x1A00 | RTR temperature TXPDO
* @{
* \brief Object 0x1A00 (RTR temperature TXPDO) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - RTR temperature [0]<br>
* SubIndex 2 - RTR temperature [1]<br>
* SubIndex 3 - RTR temperature [2]<br>
* SubIndex 4 - RTR temperature [3]<br>
* SubIndex 5 - RTR temperature [4]<br>
* SubIndex 6 - RTR temperature [5]<br>
* SubIndex 7 - RTR temperature [6]<br>
* SubIndex 8 - RTR temperature [7]<br>
* SubIndex 9 - RTR temperature [8]<br>
* SubIndex 10 - RTR temperature [9]<br>
* SubIndex 11 - RTR temperature [10]<br>
* SubIndex 12 - RTR temperature [11]<br>
* SubIndex 13 - RTR temperature [12]<br>
* SubIndex 14 - RTR temperature [13]<br>
* SubIndex 15 - RTR temperature [14]<br>
* SubIndex 16 - RTR temperature [15]<br>
* SubIndex 17 - RTR temperature [16]<br>
* SubIndex 18 - RTR temperature [17]<br>
* SubIndex 19 - RTR temperature [18]<br>
* SubIndex 20 - RTR temperature [19]<br>
* SubIndex 21 - RTR temperature [20]<br>
* SubIndex 22 - RTR temperature [21]<br>
* SubIndex 23 - RTR temperature [22]<br>
* SubIndex 24 - RTR temperature [23]<br>
* SubIndex 25 - RTR temperature [24]<br>
* SubIndex 26 - RTR high fault [0]<br>
* SubIndex 27 - RTR high fault [1]<br>
* SubIndex 28 - RTR high fault [2]<br>
* SubIndex 29 - RTR high fault [3]<br>
* SubIndex 30 - RTR high fault [4]<br>
* SubIndex 31 - RTR high fault [5]<br>
* SubIndex 32 - RTR high fault [6]<br>
* SubIndex 33 - RTR high fault [7]<br>
* SubIndex 34 - RTR high fault [8]<br>
* SubIndex 35 - RTR high fault [9]<br>
* SubIndex 36 - RTR high fault [10]<br>
* SubIndex 37 - RTR high fault [11]<br>
* SubIndex 38 - RTR high fault [12]<br>
* SubIndex 39 - RTR high fault [13]<br>
* SubIndex 40 - RTR high fault [14]<br>
* SubIndex 41 - RTR high fault [15]<br>
* SubIndex 42 - RTR high fault [16]<br>
* SubIndex 43 - RTR high fault [17]<br>
* SubIndex 44 - RTR high fault [18]<br>
* SubIndex 45 - RTR high fault [19]<br>
* SubIndex 46 - RTR high fault [20]<br>
* SubIndex 47 - RTR high fault [21]<br>
* SubIndex 48 - RTR high fault [22]<br>
* SubIndex 49 - RTR high fault [23]<br>
* SubIndex 50 - RTR high fault [24]<br>
* SubIndex 51 - RTR low fault [0]<br>
* SubIndex 52 - RTR low fault [1]<br>
* SubIndex 53 - RTR low fault [2]<br>
* SubIndex 54 - RTR low fault [3]<br>
* SubIndex 55 - RTR low fault [4]<br>
* SubIndex 56 - RTR low fault [5]<br>
* SubIndex 57 - RTR low fault [6]<br>
* SubIndex 58 - RTR low fault [7]<br>
* SubIndex 59 - RTR low fault [8]<br>
* SubIndex 60 - RTR low fault [9]<br>
* SubIndex 61 - RTR low fault [10]<br>
* SubIndex 62 - RTR low fault [11]<br>
* SubIndex 63 - RTR low fault [12]<br>
* SubIndex 64 - RTR low fault [13]<br>
* SubIndex 65 - RTR low fault [14]<br>
* SubIndex 66 - RTR low fault [15]<br>
* SubIndex 67 - RTR low fault [16]<br>
* SubIndex 68 - RTR low fault [17]<br>
* SubIndex 69 - RTR low fault [18]<br>
* SubIndex 70 - RTR low fault [19]<br>
* SubIndex 71 - RTR low fault [20]<br>
* SubIndex 72 - RTR low fault [21]<br>
* SubIndex 73 - RTR low fault [22]<br>
* SubIndex 74 - RTR low fault [23]<br>
* SubIndex 75 - RTR low fault [24]<br>
* SubIndex 76 - RTR fault status [0]<br>
* SubIndex 77 - RTR fault status [1]<br>
* SubIndex 78 - RTR fault status [2]<br>
* SubIndex 79 - RTR fault status [3]<br>
* SubIndex 80 - RTR fault status [4]<br>
* SubIndex 81 - RTR fault status [5]<br>
* SubIndex 82 - RTR fault status [6]<br>
* SubIndex 83 - RTR fault status [7]<br>
* SubIndex 84 - RTR fault status [8]<br>
* SubIndex 85 - RTR fault status [9]<br>
* SubIndex 86 - RTR fault status [10]<br>
* SubIndex 87 - RTR fault status [11]<br>
* SubIndex 88 - RTR fault status [12]<br>
* SubIndex 89 - RTR fault status [13]<br>
* SubIndex 90 - RTR fault status [14]<br>
* SubIndex 91 - RTR fault status [15]<br>
* SubIndex 92 - RTR fault status [16]<br>
* SubIndex 93 - RTR fault status [17]<br>
* SubIndex 94 - RTR fault status [18]<br>
* SubIndex 95 - RTR fault status [19]<br>
* SubIndex 96 - RTR fault status [20]<br>
* SubIndex 97 - RTR fault status [21]<br>
* SubIndex 98 - RTR fault status [22]<br>
* SubIndex 99 - RTR fault status [23]<br>
* SubIndex 100 - RTR fault status [24]<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1A00[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex1 - RTR temperature [0] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex2 - RTR temperature [1] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex3 - RTR temperature [2] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex4 - RTR temperature [3] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex5 - RTR temperature [4] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex6 - RTR temperature [5] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex7 - RTR temperature [6] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex8 - RTR temperature [7] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex9 - RTR temperature [8] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex10 - RTR temperature [9] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex11 - RTR temperature [10] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex12 - RTR temperature [11] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex13 - RTR temperature [12] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex14 - RTR temperature [13] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex15 - RTR temperature [14] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex16 - RTR temperature [15] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex17 - RTR temperature [16] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex18 - RTR temperature [17] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex19 - RTR temperature [18] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex20 - RTR temperature [19] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex21 - RTR temperature [20] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex22 - RTR temperature [21] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex23 - RTR temperature [22] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex24 - RTR temperature [23] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex25 - RTR temperature [24] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex26 - RTR high fault [0] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex27 - RTR high fault [1] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex28 - RTR high fault [2] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex29 - RTR high fault [3] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex30 - RTR high fault [4] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex31 - RTR high fault [5] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex32 - RTR high fault [6] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex33 - RTR high fault [7] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex34 - RTR high fault [8] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex35 - RTR high fault [9] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex36 - RTR high fault [10] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex37 - RTR high fault [11] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex38 - RTR high fault [12] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex39 - RTR high fault [13] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex40 - RTR high fault [14] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex41 - RTR high fault [15] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex42 - RTR high fault [16] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex43 - RTR high fault [17] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex44 - RTR high fault [18] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex45 - RTR high fault [19] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex46 - RTR high fault [20] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex47 - RTR high fault [21] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex48 - RTR high fault [22] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex49 - RTR high fault [23] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex50 - RTR high fault [24] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex51 - RTR low fault [0] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex52 - RTR low fault [1] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex53 - RTR low fault [2] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex54 - RTR low fault [3] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex55 - RTR low fault [4] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex56 - RTR low fault [5] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex57 - RTR low fault [6] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex58 - RTR low fault [7] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex59 - RTR low fault [8] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex60 - RTR low fault [9] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex61 - RTR low fault [10] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex62 - RTR low fault [11] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex63 - RTR low fault [12] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex64 - RTR low fault [13] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex65 - RTR low fault [14] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex66 - RTR low fault [15] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex67 - RTR low fault [16] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex68 - RTR low fault [17] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex69 - RTR low fault [18] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex70 - RTR low fault [19] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex71 - RTR low fault [20] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex72 - RTR low fault [21] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex73 - RTR low fault [22] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex74 - RTR low fault [23] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex75 - RTR low fault [24] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex76 - RTR fault status [0] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex77 - RTR fault status [1] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex78 - RTR fault status [2] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex79 - RTR fault status [3] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex80 - RTR fault status [4] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex81 - RTR fault status [5] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex82 - RTR fault status [6] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex83 - RTR fault status [7] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex84 - RTR fault status [8] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex85 - RTR fault status [9] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex86 - RTR fault status [10] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex87 - RTR fault status [11] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex88 - RTR fault status [12] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex89 - RTR fault status [13] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex90 - RTR fault status [14] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex91 - RTR fault status [15] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex92 - RTR fault status [16] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex93 - RTR fault status [17] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex94 - RTR fault status [18] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex95 - RTR fault status [19] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex96 - RTR fault status [20] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex97 - RTR fault status [21] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex98 - RTR fault status [22] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex99 - RTR fault status [23] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex100 - RTR fault status [24] */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1A00[] = "RTR temperature TXPDO\000"
"RTR temperature [0]\000"
"RTR temperature [1]\000"
"RTR temperature [2]\000"
"RTR temperature [3]\000"
"RTR temperature [4]\000"
"RTR temperature [5]\000"
"RTR temperature [6]\000"
"RTR temperature [7]\000"
"RTR temperature [8]\000"
"RTR temperature [9]\000"
"RTR temperature [10]\000"
"RTR temperature [11]\000"
"RTR temperature [12]\000"
"RTR temperature [13]\000"
"RTR temperature [14]\000"
"RTR temperature [15]\000"
"RTR temperature [16]\000"
"RTR temperature [17]\000"
"RTR temperature [18]\000"
"RTR temperature [19]\000"
"RTR temperature [20]\000"
"RTR temperature [21]\000"
"RTR temperature [22]\000"
"RTR temperature [23]\000"
"RTR temperature [24]\000"
"RTR high fault [0]\000"
"RTR high fault [1]\000"
"RTR high fault [2]\000"
"RTR high fault [3]\000"
"RTR high fault [4]\000"
"RTR high fault [5]\000"
"RTR high fault [6]\000"
"RTR high fault [7]\000"
"RTR high fault [8]\000"
"RTR high fault [9]\000"
"RTR high fault [10]\000"
"RTR high fault [11]\000"
"RTR high fault [12]\000"
"RTR high fault [13]\000"
"RTR high fault [14]\000"
"RTR high fault [15]\000"
"RTR high fault [16]\000"
"RTR high fault [17]\000"
"RTR high fault [18]\000"
"RTR high fault [19]\000"
"RTR high fault [20]\000"
"RTR high fault [21]\000"
"RTR high fault [22]\000"
"RTR high fault [23]\000"
"RTR high fault [24]\000"
"RTR low fault [0]\000"
"RTR low fault [1]\000"
"RTR low fault [2]\000"
"RTR low fault [3]\000"
"RTR low fault [4]\000"
"RTR low fault [5]\000"
"RTR low fault [6]\000"
"RTR low fault [7]\000"
"RTR low fault [8]\000"
"RTR low fault [9]\000"
"RTR low fault [10]\000"
"RTR low fault [11]\000"
"RTR low fault [12]\000"
"RTR low fault [13]\000"
"RTR low fault [14]\000"
"RTR low fault [15]\000"
"RTR low fault [16]\000"
"RTR low fault [17]\000"
"RTR low fault [18]\000"
"RTR low fault [19]\000"
"RTR low fault [20]\000"
"RTR low fault [21]\000"
"RTR low fault [22]\000"
"RTR low fault [23]\000"
"RTR low fault [24]\000"
"RTR fault status [0]\000"
"RTR fault status [1]\000"
"RTR fault status [2]\000"
"RTR fault status [3]\000"
"RTR fault status [4]\000"
"RTR fault status [5]\000"
"RTR fault status [6]\000"
"RTR fault status [7]\000"
"RTR fault status [8]\000"
"RTR fault status [9]\000"
"RTR fault status [10]\000"
"RTR fault status [11]\000"
"RTR fault status [12]\000"
"RTR fault status [13]\000"
"RTR fault status [14]\000"
"RTR fault status [15]\000"
"RTR fault status [16]\000"
"RTR fault status [17]\000"
"RTR fault status [18]\000"
"RTR fault status [19]\000"
"RTR fault status [20]\000"
"RTR fault status [21]\000"
"RTR fault status [22]\000"
"RTR fault status [23]\000"
"RTR fault status [24]\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 -  */
UINT32 SI2; /* Subindex2 -  */
UINT32 SI3; /* Subindex3 -  */
UINT32 SI4; /* Subindex4 -  */
UINT32 SI5; /* Subindex5 -  */
UINT32 SI6; /* Subindex6 -  */
UINT32 SI7; /* Subindex7 -  */
UINT32 SI8; /* Subindex8 -  */
UINT32 SI9; /* Subindex9 -  */
UINT32 SI10; /* Subindex10 -  */
UINT32 SI11; /* Subindex11 -  */
UINT32 SI12; /* Subindex12 -  */
UINT32 SI13; /* Subindex13 -  */
UINT32 SI14; /* Subindex14 -  */
UINT32 SI15; /* Subindex15 -  */
UINT32 SI16; /* Subindex16 -  */
UINT32 SI17; /* Subindex17 -  */
UINT32 SI18; /* Subindex18 -  */
UINT32 SI19; /* Subindex19 -  */
UINT32 SI20; /* Subindex20 -  */
UINT32 SI21; /* Subindex21 -  */
UINT32 SI22; /* Subindex22 -  */
UINT32 SI23; /* Subindex23 -  */
UINT32 SI24; /* Subindex24 -  */
UINT32 SI25; /* Subindex25 -  */
UINT32 SI26; /* Subindex26 -  */
UINT32 SI27; /* Subindex27 -  */
UINT32 SI28; /* Subindex28 -  */
UINT32 SI29; /* Subindex29 -  */
UINT32 SI30; /* Subindex30 -  */
UINT32 SI31; /* Subindex31 -  */
UINT32 SI32; /* Subindex32 -  */
UINT32 SI33; /* Subindex33 -  */
UINT32 SI34; /* Subindex34 -  */
UINT32 SI35; /* Subindex35 -  */
UINT32 SI36; /* Subindex36 -  */
UINT32 SI37; /* Subindex37 -  */
UINT32 SI38; /* Subindex38 -  */
UINT32 SI39; /* Subindex39 -  */
UINT32 SI40; /* Subindex40 -  */
UINT32 SI41; /* Subindex41 -  */
UINT32 SI42; /* Subindex42 -  */
UINT32 SI43; /* Subindex43 -  */
UINT32 SI44; /* Subindex44 -  */
UINT32 SI45; /* Subindex45 -  */
UINT32 SI46; /* Subindex46 -  */
UINT32 SI47; /* Subindex47 -  */
UINT32 SI48; /* Subindex48 -  */
UINT32 SI49; /* Subindex49 -  */
UINT32 SI50; /* Subindex50 -  */
UINT32 SI51; /* Subindex51 -  */
UINT32 SI52; /* Subindex52 -  */
UINT32 SI53; /* Subindex53 -  */
UINT32 SI54; /* Subindex54 -  */
UINT32 SI55; /* Subindex55 -  */
UINT32 SI56; /* Subindex56 -  */
UINT32 SI57; /* Subindex57 -  */
UINT32 SI58; /* Subindex58 -  */
UINT32 SI59; /* Subindex59 -  */
UINT32 SI60; /* Subindex60 -  */
UINT32 SI61; /* Subindex61 -  */
UINT32 SI62; /* Subindex62 -  */
UINT32 SI63; /* Subindex63 -  */
UINT32 SI64; /* Subindex64 -  */
UINT32 SI65; /* Subindex65 -  */
UINT32 SI66; /* Subindex66 -  */
UINT32 SI67; /* Subindex67 -  */
UINT32 SI68; /* Subindex68 -  */
UINT32 SI69; /* Subindex69 -  */
UINT32 SI70; /* Subindex70 -  */
UINT32 SI71; /* Subindex71 -  */
UINT32 SI72; /* Subindex72 -  */
UINT32 SI73; /* Subindex73 -  */
UINT32 SI74; /* Subindex74 -  */
UINT32 SI75; /* Subindex75 -  */
UINT32 SI76; /* Subindex76 -  */
UINT32 SI77; /* Subindex77 -  */
UINT32 SI78; /* Subindex78 -  */
UINT32 SI79; /* Subindex79 -  */
UINT32 SI80; /* Subindex80 -  */
UINT32 SI81; /* Subindex81 -  */
UINT32 SI82; /* Subindex82 -  */
UINT32 SI83; /* Subindex83 -  */
UINT32 SI84; /* Subindex84 -  */
UINT32 SI85; /* Subindex85 -  */
UINT32 SI86; /* Subindex86 -  */
UINT32 SI87; /* Subindex87 -  */
UINT32 SI88; /* Subindex88 -  */
UINT32 SI89; /* Subindex89 -  */
UINT32 SI90; /* Subindex90 -  */
UINT32 SI91; /* Subindex91 -  */
UINT32 SI92; /* Subindex92 -  */
UINT32 SI93; /* Subindex93 -  */
UINT32 SI94; /* Subindex94 -  */
UINT32 SI95; /* Subindex95 -  */
UINT32 SI96; /* Subindex96 -  */
UINT32 SI97; /* Subindex97 -  */
UINT32 SI98; /* Subindex98 -  */
UINT32 SI99; /* Subindex99 -  */
UINT32 SI100; /* Subindex100 -  */
} OBJ_STRUCT_PACKED_END
TOBJ1A00;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1A00 RTRTemperatureTXPDO0x1A00
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={100,0x60000120,0x60000220,0x60000320,0x60000420,0x60000520,0x60000620,0x60000720,0x60000820,0x60000920,0x60000A20,0x60000B20,0x60000C20,0x60000D20,0x60000E20,0x60000F20,0x60001020,0x60001120,0x60001220,0x60001320,0x60001420,0x60001520,0x60001620,0x60001720,0x60001820,0x60001920,0x60010110,0x60010210,0x60010310,0x60010410,0x60010510,0x60010610,0x60010710,0x60010810,0x60010910,0x60010A10,0x60010B10,0x60010C10,0x60010D10,0x60010E10,0x60010F10,0x60011010,0x60011110,0x60011210,0x60011310,0x60011410,0x60011510,0x60011610,0x60011710,0x60011810,0x60011910,0x60020110,0x60020210,0x60020310,0x60020410,0x60020510,0x60020610,0x60020710,0x60020810,0x60020910,0x60020A10,0x60020B10,0x60020C10,0x60020D10,0x60020E10,0x60020F10,0x60021010,0x60021110,0x60021210,0x60021310,0x60021410,0x60021510,0x60021610,0x60021710,0x60021810,0x60021910,0x60030110,0x60030210,0x60030310,0x60030410,0x60030510,0x60030610,0x60030710,0x60030810,0x60030910,0x60030A10,0x60030B10,0x60030C10,0x60030D10,0x60030E10,0x60030F10,0x60031010,0x60031110,0x60031210,0x60031310,0x60031410,0x60031510,0x60031610,0x60031710,0x60031810,0x60031910}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1A01 : IMU TXPDO
******************************************************************************/
/**
* \addtogroup 0x1A01 0x1A01 | IMU TXPDO
* @{
* \brief Object 0x1A01 (IMU TXPDO) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - IMU ax [0]<br>
* SubIndex 2 - IMU ay [0]<br>
* SubIndex 3 - IMU az [0]<br>
* SubIndex 4 - IMU wx [0]<br>
* SubIndex 5 - IMU wy [0]<br>
* SubIndex 6 - IMU wz [0]<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1A01[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex1 - IMU ax [0] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex2 - IMU ay [0] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex3 - IMU az [0] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex4 - IMU wx [0] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex5 - IMU wy [0] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex6 - IMU wz [0] */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1A01[] = "IMU TXPDO\000"
"IMU ax [0]\000"
"IMU ay [0]\000"
"IMU az [0]\000"
"IMU wx [0]\000"
"IMU wy [0]\000"
"IMU wz [0]\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 -  */
UINT32 SI2; /* Subindex2 -  */
UINT32 SI3; /* Subindex3 -  */
UINT32 SI4; /* Subindex4 -  */
UINT32 SI5; /* Subindex5 -  */
UINT32 SI6; /* Subindex6 -  */
} OBJ_STRUCT_PACKED_END
TOBJ1A01;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1A01 IMUTXPDO0x1A01
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={6,0x60040120,0x60050120,0x60060120,0x60070120,0x60080120,0x60090120}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1A02 : Photo millivolts TXPDO
******************************************************************************/
/**
* \addtogroup 0x1A02 0x1A02 | Photo millivolts TXPDO
* @{
* \brief Object 0x1A02 (Photo millivolts TXPDO) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Photo millivolts [0]<br>
* SubIndex 2 - Photo millivolts [1]<br>
* SubIndex 3 - Photo millivolts [2]<br>
* SubIndex 4 - Photo millivolts [3]<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1A02[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex1 - Photo millivolts [0] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex2 - Photo millivolts [1] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex3 - Photo millivolts [2] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex4 - Photo millivolts [3] */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1A02[] = "Photo millivolts TXPDO\000"
"Photo millivolts [0]\000"
"Photo millivolts [1]\000"
"Photo millivolts [2]\000"
"Photo millivolts [3]\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 -  */
UINT32 SI2; /* Subindex2 -  */
UINT32 SI3; /* Subindex3 -  */
UINT32 SI4; /* Subindex4 -  */
} OBJ_STRUCT_PACKED_END
TOBJ1A02;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1A02 PhotoMillivoltsTXPDO0x1A02
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={4,0x600A0110,0x600A0210,0x600A0310,0x600A0410}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1A03 : Pyrometer temperature TXPDO
******************************************************************************/
/**
* \addtogroup 0x1A03 0x1A03 | Pyrometer temperature TXPDO
* @{
* \brief Object 0x1A03 (Pyrometer temperature TXPDO) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Pyrometer temperature [0]<br>
* SubIndex 2 - Pyrometer temperature [1]<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1A03[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex1 - Pyrometer temperature [0] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex2 - Pyrometer temperature [1] */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1A03[] = "Pyrometer temperature TXPDO\000"
"Pyrometer temperature [0]\000"
"Pyrometer temperature [1]\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 -  */
UINT32 SI2; /* Subindex2 -  */
} OBJ_STRUCT_PACKED_END
TOBJ1A03;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1A03 PyrometerTemperatureTXPDO0x1A03
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={2,0x600B0120,0x600B0220}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1A04 : LED state TXPDO
******************************************************************************/
/**
* \addtogroup 0x1A04 0x1A04 | LED state TXPDO
* @{
* \brief Object 0x1A04 (LED state TXPDO) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - LED state [0]<br>
* SubIndex 2 - LED state [1]<br>
* SubIndex 3 - LED state [2]<br>
* SubIndex 4 - LED state [3]<br>
* SubIndex 5 - LED state [4]<br>
* SubIndex 6 - LED state [5]<br>
* SubIndex 7 - LED state [6]<br>
* SubIndex 8 - LED state [7]<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1A04[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex1 - LED state [0] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex2 - LED state [1] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex3 - LED state [2] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex4 - LED state [3] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex5 - LED state [4] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex6 - LED state [5] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex7 - LED state [6] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex8 - LED state [7] */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1A04[] = "LED state TXPDO\000"
"LED state [0]\000"
"LED state [1]\000"
"LED state [2]\000"
"LED state [3]\000"
"LED state [4]\000"
"LED state [5]\000"
"LED state [6]\000"
"LED state [7]\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 -  */
UINT32 SI2; /* Subindex2 -  */
UINT32 SI3; /* Subindex3 -  */
UINT32 SI4; /* Subindex4 -  */
UINT32 SI5; /* Subindex5 -  */
UINT32 SI6; /* Subindex6 -  */
UINT32 SI7; /* Subindex7 -  */
UINT32 SI8; /* Subindex8 -  */
} OBJ_STRUCT_PACKED_END
TOBJ1A04;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1A04 LEDStateTXPDO0x1A04
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={8,0x70000108,0x70000208,0x70000308,0x70000408,0x70000508,0x70000608,0x70000708,0x70000808}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1A05 : 24V power supply state TXPDO
******************************************************************************/
/**
* \addtogroup 0x1A05 0x1A05 | 24V power supply state TXPDO
* @{
* \brief Object 0x1A05 (24V power supply state TXPDO) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - 24V power supply state [0]<br>
* SubIndex 2 - 24V power supply state [1]<br>
* SubIndex 3 - 24V power supply state [2]<br>
* SubIndex 4 - 24V power supply state [3]<br>
* SubIndex 5 - 24V power supply state [4]<br>
* SubIndex 6 - 24V power supply state [5]<br>
* SubIndex 7 - 24V power supply state [6]<br>
* SubIndex 8 - 24V power supply state [7]<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1A05[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex1 - 24V power supply state [0] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex2 - 24V power supply state [1] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex3 - 24V power supply state [2] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex4 - 24V power supply state [3] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex5 - 24V power supply state [4] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex6 - 24V power supply state [5] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex7 - 24V power supply state [6] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex8 - 24V power supply state [7] */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1A05[] = "24V power supply state TXPDO\000"
"24V power supply state [0]\000"
"24V power supply state [1]\000"
"24V power supply state [2]\000"
"24V power supply state [3]\000"
"24V power supply state [4]\000"
"24V power supply state [5]\000"
"24V power supply state [6]\000"
"24V power supply state [7]\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 -  */
UINT32 SI2; /* Subindex2 -  */
UINT32 SI3; /* Subindex3 -  */
UINT32 SI4; /* Subindex4 -  */
UINT32 SI5; /* Subindex5 -  */
UINT32 SI6; /* Subindex6 -  */
UINT32 SI7; /* Subindex7 -  */
UINT32 SI8; /* Subindex8 -  */
} OBJ_STRUCT_PACKED_END
TOBJ1A05;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1A05 _24VPowerSupplyStateTXPDO0x1A05
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={8,0x70010108,0x70010208,0x70010308,0x70010408,0x70010508,0x70010608,0x70010708,0x70010808}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1A06 : 20V power supply state TXPDO
******************************************************************************/
/**
* \addtogroup 0x1A06 0x1A06 | 20V power supply state TXPDO
* @{
* \brief Object 0x1A06 (20V power supply state TXPDO) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - 20V power supply state [0]<br>
* SubIndex 2 - 20V power supply state [1]<br>
* SubIndex 3 - 20V power supply state [2]<br>
* SubIndex 4 - 20V power supply state [3]<br>
* SubIndex 5 - 20V power supply state [4]<br>
* SubIndex 6 - 20V power supply state [5]<br>
* SubIndex 7 - 20V power supply state [6]<br>
* SubIndex 8 - 20V power supply state [7]<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1A06[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex1 - 20V power supply state [0] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex2 - 20V power supply state [1] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex3 - 20V power supply state [2] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex4 - 20V power supply state [3] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex5 - 20V power supply state [4] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex6 - 20V power supply state [5] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex7 - 20V power supply state [6] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex8 - 20V power supply state [7] */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1A06[] = "20V power supply state TXPDO\000"
"20V power supply state [0]\000"
"20V power supply state [1]\000"
"20V power supply state [2]\000"
"20V power supply state [3]\000"
"20V power supply state [4]\000"
"20V power supply state [5]\000"
"20V power supply state [6]\000"
"20V power supply state [7]\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 -  */
UINT32 SI2; /* Subindex2 -  */
UINT32 SI3; /* Subindex3 -  */
UINT32 SI4; /* Subindex4 -  */
UINT32 SI5; /* Subindex5 -  */
UINT32 SI6; /* Subindex6 -  */
UINT32 SI7; /* Subindex7 -  */
UINT32 SI8; /* Subindex8 -  */
} OBJ_STRUCT_PACKED_END
TOBJ1A06;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1A06 _20VPowerSupplyStateTXPDO0x1A06
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={8,0x70020108,0x70020208,0x70020308,0x70020408,0x70020508,0x70020608,0x70020708,0x70020808}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1A07 : 5V power supply state TXPDO
******************************************************************************/
/**
* \addtogroup 0x1A07 0x1A07 | 5V power supply state TXPDO
* @{
* \brief Object 0x1A07 (5V power supply state TXPDO) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - 5V power supply state [0]<br>
* SubIndex 2 - 5V power supply state [1]<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1A07[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex1 - 5V power supply state [0] */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex2 - 5V power supply state [1] */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1A07[] = "5V power supply state TXPDO\000"
"5V power supply state [0]\000"
"5V power supply state [1]\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 -  */
UINT32 SI2; /* Subindex2 -  */
} OBJ_STRUCT_PACKED_END
TOBJ1A07;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1A07 _5VPowerSupplyStateTXPDO0x1A07
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={2,0x70030108,0x70030208}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1C12 : Sync Manager 2 PDO Assignment
******************************************************************************/
/**
* \addtogroup 0x1C12 0x1C12 | Sync Manager 2 PDO Assignment
* @{
* \brief Object 0x1C12 (Sync Manager 2 PDO Assignment) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1C12[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x1C12[] = "Sync Manager 2 PDO Assignment\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT16 aEntries[4];  /**< \brief Subindex 1 - 4 */
} OBJ_STRUCT_PACKED_END
TOBJ1C12;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1C12 sRxPDOassign
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={4,{0x1600,0x1601,0x1602,0x1603}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1C13 : Sync Manager 3 PDO Assignment
******************************************************************************/
/**
* \addtogroup 0x1C13 0x1C13 | Sync Manager 3 PDO Assignment
* @{
* \brief Object 0x1C13 (Sync Manager 3 PDO Assignment) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1C13[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x1C13[] = "Sync Manager 3 PDO Assignment\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT16 aEntries[8];  /**< \brief Subindex 1 - 8 */
} OBJ_STRUCT_PACKED_END
TOBJ1C13;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1C13 sTxPDOassign
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={8,{0x1A00,0x1A01,0x1A02,0x1A03,0x1A04,0x1A05,0x1A06,0x1A07}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x6000 : RTD temperature
******************************************************************************/
/**
* \addtogroup 0x6000 0x6000 | RTD temperature
* @{
* \brief Object 0x6000 (RTD temperature) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x6000[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x6000[] = "RTD temperature\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT32 aEntries[25];  /**< \brief Subindex 1 - 25 */
} OBJ_STRUCT_PACKED_END
TOBJ6000;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ6000 RTDTemperature0x6000
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={25,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x6001 : RTD high fault
******************************************************************************/
/**
* \addtogroup 0x6001 0x6001 | RTD high fault
* @{
* \brief Object 0x6001 (RTD high fault) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x6001[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x6001[] = "RTD high fault\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT16 aEntries[25];  /**< \brief Subindex 1 - 25 */
} OBJ_STRUCT_PACKED_END
TOBJ6001;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ6001 RTDHighFault0x6001
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={25,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x6002 : RTD low fault
******************************************************************************/
/**
* \addtogroup 0x6002 0x6002 | RTD low fault
* @{
* \brief Object 0x6002 (RTD low fault) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x6002[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x6002[] = "RTD low fault\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT16 aEntries[25];  /**< \brief Subindex 1 - 25 */
} OBJ_STRUCT_PACKED_END
TOBJ6002;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ6002 RTDLowFault0x6002
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={25,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x6003 : RTD fault status
******************************************************************************/
/**
* \addtogroup 0x6003 0x6003 | RTD fault status
* @{
* \brief Object 0x6003 (RTD fault status) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x6003[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x6003[] = "RTD fault status\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT16 aEntries[25];  /**< \brief Subindex 1 - 25 */
} OBJ_STRUCT_PACKED_END
TOBJ6003;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ6003 RTDFaultStatus0x6003
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={25,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x6004 : IMU ax
******************************************************************************/
/**
* \addtogroup 0x6004 0x6004 | IMU ax
* @{
* \brief Object 0x6004 (IMU ax) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x6004[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x6004[] = "IMU ax\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT32 aEntries[1];  /**< \brief Subindex 1 - 1 */
} OBJ_STRUCT_PACKED_END
TOBJ6004;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ6004 IMUAx0x6004
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={1,{0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x6005 : IMU ay
******************************************************************************/
/**
* \addtogroup 0x6005 0x6005 | IMU ay
* @{
* \brief Object 0x6005 (IMU ay) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x6005[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x6005[] = "IMU ay\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT32 aEntries[1];  /**< \brief Subindex 1 - 1 */
} OBJ_STRUCT_PACKED_END
TOBJ6005;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ6005 IMUAy0x6005
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={1,{0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x6006 : IMU az
******************************************************************************/
/**
* \addtogroup 0x6006 0x6006 | IMU az
* @{
* \brief Object 0x6006 (IMU az) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x6006[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x6006[] = "IMU az\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT32 aEntries[1];  /**< \brief Subindex 1 - 1 */
} OBJ_STRUCT_PACKED_END
TOBJ6006;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ6006 IMUAz0x6006
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={1,{0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x6007 : IMU wx
******************************************************************************/
/**
* \addtogroup 0x6007 0x6007 | IMU wx
* @{
* \brief Object 0x6007 (IMU wx) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x6007[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x6007[] = "IMU wx\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT32 aEntries[1];  /**< \brief Subindex 1 - 1 */
} OBJ_STRUCT_PACKED_END
TOBJ6007;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ6007 IMUWx0x6007
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={1,{0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x6008 : IMU wy
******************************************************************************/
/**
* \addtogroup 0x6008 0x6008 | IMU wy
* @{
* \brief Object 0x6008 (IMU wy) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x6008[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x6008[] = "IMU wy\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT32 aEntries[1];  /**< \brief Subindex 1 - 1 */
} OBJ_STRUCT_PACKED_END
TOBJ6008;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ6008 IMUWy0x6008
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={1,{0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x6009 : IMU wz
******************************************************************************/
/**
* \addtogroup 0x6009 0x6009 | IMU wz
* @{
* \brief Object 0x6009 (IMU wz) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x6009[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x6009[] = "IMU wz\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT32 aEntries[1];  /**< \brief Subindex 1 - 1 */
} OBJ_STRUCT_PACKED_END
TOBJ6009;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ6009 IMUWz0x6009
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={1,{0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x600A : Photo millivolts
******************************************************************************/
/**
* \addtogroup 0x600A 0x600A | Photo millivolts
* @{
* \brief Object 0x600A (Photo millivolts) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x600A[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x600A[] = "Photo millivolts\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT16 aEntries[4];  /**< \brief Subindex 1 - 4 */
} OBJ_STRUCT_PACKED_END
TOBJ600A;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ600A PhotoMillivolts0x600A
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={4,{0,0,0,0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x600B : Pyro temperature
******************************************************************************/
/**
* \addtogroup 0x600B 0x600B | Pyro temperature
* @{
* \brief Object 0x600B (Pyro temperature) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x600B[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x600B[] = "Pyro temperature\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT32 aEntries[2];  /**< \brief Subindex 1 - 2 */
} OBJ_STRUCT_PACKED_END
TOBJ600B;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ600B PyroTemperature0x600B
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={2,{0,0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x7000 : LED state
******************************************************************************/
/**
* \addtogroup 0x7000 0x7000 | LED state
* @{
* \brief Object 0x7000 (LED state) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x7000[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READWRITE }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x7000[] = "LED state\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT8 aEntries[8];  /**< \brief Subindex 1 - 8 */
} OBJ_STRUCT_PACKED_END
TOBJ7000;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ7000 LEDState0x7000
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={8,{0,0,0,0,0,0,0,0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x7001 : 24V power supply state
******************************************************************************/
/**
* \addtogroup 0x7001 0x7001 | 24V power supply state
* @{
* \brief Object 0x7001 (24V power supply state) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x7001[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READWRITE }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x7001[] = "24V power supply state\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT8 aEntries[8];  /**< \brief Subindex 1 - 8 */
} OBJ_STRUCT_PACKED_END
TOBJ7001;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ7001 _24VPowerSupplyState0x7001
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={8,{0,0,0,0,0,0,0,0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x7002 : 20V power supply state
******************************************************************************/
/**
* \addtogroup 0x7002 0x7002 | 20V power supply state
* @{
* \brief Object 0x7002 (20V power supply state) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x7002[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READWRITE }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x7002[] = "20V power supply state\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT8 aEntries[8];  /**< \brief Subindex 1 - 8 */
} OBJ_STRUCT_PACKED_END
TOBJ7002;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ7002 _20VPowerSupplyState0x7002
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={8,{0,0,0,0,0,0,0,0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x7003 : 5V power supply state
******************************************************************************/
/**
* \addtogroup 0x7003 0x7003 | 5V power supply state
* @{
* \brief Object 0x7003 (5V power supply state) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x7003[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READWRITE }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x7003[] = "5V power supply state\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT8 aEntries[2];  /**< \brief Subindex 1 - 2 */
} OBJ_STRUCT_PACKED_END
TOBJ7003;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ7003 _5VPowerSupplyState0x7003
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={2,{0,0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x8000 : RTD filter
******************************************************************************/
/**
* \addtogroup 0x8000 0x8000 | RTD filter
* @{
* \brief Object 0x8000 (RTD filter) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x8000[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READWRITE }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x8000[] = "RTD filter\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT8 aEntries[25];  /**< \brief Subindex 1 - 25 */
} OBJ_STRUCT_PACKED_END
TOBJ8000;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ8000 RTDFilter0x8000
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={25,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x8001 : RTD val_2
******************************************************************************/
/**
* \addtogroup 0x8001 0x8001 | RTD val_2
* @{
* \brief Object 0x8001 (RTD val_2) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x8001[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x8001[] = "RTD val_2\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT32 aEntries[25];  /**< \brief Subindex 1 - 25 */
} OBJ_STRUCT_PACKED_END
TOBJ8001;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ8001 RTDVal_20x8001
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={25,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x8002 : RTD val_3
******************************************************************************/
/**
* \addtogroup 0x8002 0x8002 | RTD val_3
* @{
* \brief Object 0x8002 (RTD val_3) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x8002[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x8002[] = "RTD val_3\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT32 aEntries[25];  /**< \brief Subindex 1 - 25 */
} OBJ_STRUCT_PACKED_END
TOBJ8002;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ8002 RTDVal_30x8002
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={25,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x8003 : RTD val_4
******************************************************************************/
/**
* \addtogroup 0x8003 0x8003 | RTD val_4
* @{
* \brief Object 0x8003 (RTD val_4) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x8003[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x8003[] = "RTD val_4\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT32 aEntries[25];  /**< \brief Subindex 1 - 25 */
} OBJ_STRUCT_PACKED_END
TOBJ8003;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ8003 RTDVal_40x8003
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={25,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x8004 : RTD val_5
******************************************************************************/
/**
* \addtogroup 0x8004 0x8004 | RTD val_5
* @{
* \brief Object 0x8004 (RTD val_5) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x8004[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x8004[] = "RTD val_5\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT32 aEntries[25];  /**< \brief Subindex 1 - 25 */
} OBJ_STRUCT_PACKED_END
TOBJ8004;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ8004 RTDVal_50x8004
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={25,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x8005 : RTD val_6
******************************************************************************/
/**
* \addtogroup 0x8005 0x8005 | RTD val_6
* @{
* \brief Object 0x8005 (RTD val_6) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x8005[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x8005[] = "RTD val_6\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT32 aEntries[25];  /**< \brief Subindex 1 - 25 */
} OBJ_STRUCT_PACKED_END
TOBJ8005;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ8005 RTDVal_60x8005
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={25,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x8006 : RTD val_7
******************************************************************************/
/**
* \addtogroup 0x8006 0x8006 | RTD val_7
* @{
* \brief Object 0x8006 (RTD val_7) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x8006[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x8006[] = "RTD val_7\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT32 aEntries[25];  /**< \brief Subindex 1 - 25 */
} OBJ_STRUCT_PACKED_END
TOBJ8006;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ8006 RTDVal_70x8006
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={25,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x8007 : RTD val_8
******************************************************************************/
/**
* \addtogroup 0x8007 0x8007 | RTD val_8
* @{
* \brief Object 0x8007 (RTD val_8) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x8007[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x8007[] = "RTD val_8\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT32 aEntries[25];  /**< \brief Subindex 1 - 25 */
} OBJ_STRUCT_PACKED_END
TOBJ8007;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ8007 RTDVal_80x8007
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={25,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x8008 : RTD val_9
******************************************************************************/
/**
* \addtogroup 0x8008 0x8008 | RTD val_9
* @{
* \brief Object 0x8008 (RTD val_9) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x8008[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x8008[] = "RTD val_9\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT32 aEntries[25];  /**< \brief Subindex 1 - 25 */
} OBJ_STRUCT_PACKED_END
TOBJ8008;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ8008 RTDVal_90x8008
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={25,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x8009 : RTD val_10
******************************************************************************/
/**
* \addtogroup 0x8009 0x8009 | RTD val_10
* @{
* \brief Object 0x8009 (RTD val_10) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x8009[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x8009[] = "RTD val_10\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT32 aEntries[25];  /**< \brief Subindex 1 - 25 */
} OBJ_STRUCT_PACKED_END
TOBJ8009;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ8009 RTDVal_100x8009
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={25,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x800A : RTD val_11
******************************************************************************/
/**
* \addtogroup 0x800A 0x800A | RTD val_11
* @{
* \brief Object 0x800A (RTD val_11) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x800A[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x800A[] = "RTD val_11\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT32 aEntries[25];  /**< \brief Subindex 1 - 25 */
} OBJ_STRUCT_PACKED_END
TOBJ800A;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ800A RTDVal_110x800A
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={25,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x800B : RTD val_12
******************************************************************************/
/**
* \addtogroup 0x800B 0x800B | RTD val_12
* @{
* \brief Object 0x800B (RTD val_12) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x800B[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x800B[] = "RTD val_12\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT32 aEntries[25];  /**< \brief Subindex 1 - 25 */
} OBJ_STRUCT_PACKED_END
TOBJ800B;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ800B RTDVal_120x800B
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={25,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x800C : IMU val_1
******************************************************************************/
/**
* \addtogroup 0x800C 0x800C | IMU val_1
* @{
* \brief Object 0x800C (IMU val_1) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x800C[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x800C[] = "IMU val_1\000\377";
#endif //#ifdef _OBJD_

#ifndef _LAN9252_SPI_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT32 aEntries[1];  /**< \brief Subindex 1 - 1 */
} OBJ_STRUCT_PACKED_END
TOBJ800C;
#endif //#ifndef _LAN9252_SPI_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ800C IMUVal_10x800C
#if defined(_LAN9252_SPI_) && (_LAN9252_SPI_ == 1)
={1,{0}}
#endif
;
/** @}*/







#ifdef _OBJD_
TOBJECT    OBJMEM ApplicationObjDic[] = {
/* Object 0x1600 */
{NULL , NULL ,  0x1600 , {DEFTYPE_PDOMAPPING , 8 | (OBJCODE_REC << 8)} , asEntryDesc0x1600 , aName0x1600 , &LEDStateRXPDO0x1600 , NULL , NULL , 0x0000 },
/* Object 0x1601 */
{NULL , NULL ,  0x1601 , {DEFTYPE_PDOMAPPING , 8 | (OBJCODE_REC << 8)} , asEntryDesc0x1601 , aName0x1601 , &_24VPowerSupplyStateRXPDO0x1601 , NULL , NULL , 0x0000 },
/* Object 0x1602 */
{NULL , NULL ,  0x1602 , {DEFTYPE_PDOMAPPING , 8 | (OBJCODE_REC << 8)} , asEntryDesc0x1602 , aName0x1602 , &_20VPowerSupplyStateRXPDO0x1602 , NULL , NULL , 0x0000 },
/* Object 0x1603 */
{NULL , NULL ,  0x1603 , {DEFTYPE_PDOMAPPING , 2 | (OBJCODE_REC << 8)} , asEntryDesc0x1603 , aName0x1603 , &_5VPowerSupplyStateRXPDO0x1603 , NULL , NULL , 0x0000 },
/* Object 0x1A00 */
{NULL , NULL ,  0x1A00 , {DEFTYPE_PDOMAPPING , 100 | (OBJCODE_REC << 8)} , asEntryDesc0x1A00 , aName0x1A00 , &RTRTemperatureTXPDO0x1A00 , NULL , NULL , 0x0000 },
/* Object 0x1A01 */
{NULL , NULL ,  0x1A01 , {DEFTYPE_PDOMAPPING , 6 | (OBJCODE_REC << 8)} , asEntryDesc0x1A01 , aName0x1A01 , &IMUTXPDO0x1A01 , NULL , NULL , 0x0000 },
/* Object 0x1A02 */
{NULL , NULL ,  0x1A02 , {DEFTYPE_PDOMAPPING , 4 | (OBJCODE_REC << 8)} , asEntryDesc0x1A02 , aName0x1A02 , &PhotoMillivoltsTXPDO0x1A02 , NULL , NULL , 0x0000 },
/* Object 0x1A03 */
{NULL , NULL ,  0x1A03 , {DEFTYPE_PDOMAPPING , 2 | (OBJCODE_REC << 8)} , asEntryDesc0x1A03 , aName0x1A03 , &PyrometerTemperatureTXPDO0x1A03 , NULL , NULL , 0x0000 },
/* Object 0x1A04 */
{NULL , NULL ,  0x1A04 , {DEFTYPE_PDOMAPPING , 8 | (OBJCODE_REC << 8)} , asEntryDesc0x1A04 , aName0x1A04 , &LEDStateTXPDO0x1A04 , NULL , NULL , 0x0000 },
/* Object 0x1A05 */
{NULL , NULL ,  0x1A05 , {DEFTYPE_PDOMAPPING , 8 | (OBJCODE_REC << 8)} , asEntryDesc0x1A05 , aName0x1A05 , &_24VPowerSupplyStateTXPDO0x1A05 , NULL , NULL , 0x0000 },
/* Object 0x1A06 */
{NULL , NULL ,  0x1A06 , {DEFTYPE_PDOMAPPING , 8 | (OBJCODE_REC << 8)} , asEntryDesc0x1A06 , aName0x1A06 , &_20VPowerSupplyStateTXPDO0x1A06 , NULL , NULL , 0x0000 },
/* Object 0x1A07 */
{NULL , NULL ,  0x1A07 , {DEFTYPE_PDOMAPPING , 2 | (OBJCODE_REC << 8)} , asEntryDesc0x1A07 , aName0x1A07 , &_5VPowerSupplyStateTXPDO0x1A07 , NULL , NULL , 0x0000 },
/* Object 0x1C12 */
{NULL , NULL ,  0x1C12 , {DEFTYPE_UNSIGNED16 , 4 | (OBJCODE_ARR << 8)} , asEntryDesc0x1C12 , aName0x1C12 , &sRxPDOassign , NULL , NULL , 0x0000 },
/* Object 0x1C13 */
{NULL , NULL ,  0x1C13 , {DEFTYPE_UNSIGNED16 , 8 | (OBJCODE_ARR << 8)} , asEntryDesc0x1C13 , aName0x1C13 , &sTxPDOassign , NULL , NULL , 0x0000 },
/* Object 0x6000 */
{NULL , NULL ,  0x6000 , {DEFTYPE_UNSIGNED32 , 25 | (OBJCODE_ARR << 8)} , asEntryDesc0x6000 , aName0x6000 , &RTDTemperature0x6000 , NULL , NULL , 0x0000 },
/* Object 0x6001 */
{NULL , NULL ,  0x6001 , {DEFTYPE_UNSIGNED16 , 25 | (OBJCODE_ARR << 8)} , asEntryDesc0x6001 , aName0x6001 , &RTDHighFault0x6001 , NULL , NULL , 0x0000 },
/* Object 0x6002 */
{NULL , NULL ,  0x6002 , {DEFTYPE_UNSIGNED16 , 25 | (OBJCODE_ARR << 8)} , asEntryDesc0x6002 , aName0x6002 , &RTDLowFault0x6002 , NULL , NULL , 0x0000 },
/* Object 0x6003 */
{NULL , NULL ,  0x6003 , {DEFTYPE_UNSIGNED16 , 25 | (OBJCODE_ARR << 8)} , asEntryDesc0x6003 , aName0x6003 , &RTDFaultStatus0x6003 , NULL , NULL , 0x0000 },
/* Object 0x6004 */
{NULL , NULL ,  0x6004 , {DEFTYPE_UNSIGNED32 , 1 | (OBJCODE_ARR << 8)} , asEntryDesc0x6004 , aName0x6004 , &IMUAx0x6004 , NULL , NULL , 0x0000 },
/* Object 0x6005 */
{NULL , NULL ,  0x6005 , {DEFTYPE_UNSIGNED32 , 1 | (OBJCODE_ARR << 8)} , asEntryDesc0x6005 , aName0x6005 , &IMUAy0x6005 , NULL , NULL , 0x0000 },
/* Object 0x6006 */
{NULL , NULL ,  0x6006 , {DEFTYPE_UNSIGNED32 , 1 | (OBJCODE_ARR << 8)} , asEntryDesc0x6006 , aName0x6006 , &IMUAz0x6006 , NULL , NULL , 0x0000 },
/* Object 0x6007 */
{NULL , NULL ,  0x6007 , {DEFTYPE_UNSIGNED32 , 1 | (OBJCODE_ARR << 8)} , asEntryDesc0x6007 , aName0x6007 , &IMUWx0x6007 , NULL , NULL , 0x0000 },
/* Object 0x6008 */
{NULL , NULL ,  0x6008 , {DEFTYPE_UNSIGNED32 , 1 | (OBJCODE_ARR << 8)} , asEntryDesc0x6008 , aName0x6008 , &IMUWy0x6008 , NULL , NULL , 0x0000 },
/* Object 0x6009 */
{NULL , NULL ,  0x6009 , {DEFTYPE_UNSIGNED32 , 1 | (OBJCODE_ARR << 8)} , asEntryDesc0x6009 , aName0x6009 , &IMUWz0x6009 , NULL , NULL , 0x0000 },
/* Object 0x600A */
{NULL , NULL ,  0x600A , {DEFTYPE_UNSIGNED16 , 4 | (OBJCODE_ARR << 8)} , asEntryDesc0x600A , aName0x600A , &PhotoMillivolts0x600A , NULL , NULL , 0x0000 },
/* Object 0x600B */
{NULL , NULL ,  0x600B , {DEFTYPE_UNSIGNED32 , 2 | (OBJCODE_ARR << 8)} , asEntryDesc0x600B , aName0x600B , &PyroTemperature0x600B , NULL , NULL , 0x0000 },
/* Object 0x7000 */
{NULL , NULL ,  0x7000 , {DEFTYPE_UNSIGNED8 , 8 | (OBJCODE_ARR << 8)} , asEntryDesc0x7000 , aName0x7000 , &LEDState0x7000 , NULL , NULL , 0x0000 },
/* Object 0x7001 */
{NULL , NULL ,  0x7001 , {DEFTYPE_UNSIGNED8 , 8 | (OBJCODE_ARR << 8)} , asEntryDesc0x7001 , aName0x7001 , &_24VPowerSupplyState0x7001 , NULL , NULL , 0x0000 },
/* Object 0x7002 */
{NULL , NULL ,  0x7002 , {DEFTYPE_UNSIGNED8 , 8 | (OBJCODE_ARR << 8)} , asEntryDesc0x7002 , aName0x7002 , &_20VPowerSupplyState0x7002 , NULL , NULL , 0x0000 },
/* Object 0x7003 */
{NULL , NULL ,  0x7003 , {DEFTYPE_UNSIGNED8 , 2 | (OBJCODE_ARR << 8)} , asEntryDesc0x7003 , aName0x7003 , &_5VPowerSupplyState0x7003 , NULL , NULL , 0x0000 },
/* Object 0x8000 */
{NULL , NULL ,  0x8000 , {DEFTYPE_UNSIGNED8 , 25 | (OBJCODE_ARR << 8)} , asEntryDesc0x8000 , aName0x8000 , &RTDFilter0x8000 , NULL , NULL , 0x0000 },
/* Object 0x8001 */
{NULL , NULL ,  0x8001 , {DEFTYPE_UNSIGNED32 , 25 | (OBJCODE_ARR << 8)} , asEntryDesc0x8001 , aName0x8001 , &RTDVal_20x8001 , NULL , NULL , 0x0000 },
/* Object 0x8002 */
{NULL , NULL ,  0x8002 , {DEFTYPE_UNSIGNED32 , 25 | (OBJCODE_ARR << 8)} , asEntryDesc0x8002 , aName0x8002 , &RTDVal_30x8002 , NULL , NULL , 0x0000 },
/* Object 0x8003 */
{NULL , NULL ,  0x8003 , {DEFTYPE_UNSIGNED32 , 25 | (OBJCODE_ARR << 8)} , asEntryDesc0x8003 , aName0x8003 , &RTDVal_40x8003 , NULL , NULL , 0x0000 },
/* Object 0x8004 */
{NULL , NULL ,  0x8004 , {DEFTYPE_UNSIGNED32 , 25 | (OBJCODE_ARR << 8)} , asEntryDesc0x8004 , aName0x8004 , &RTDVal_50x8004 , NULL , NULL , 0x0000 },
/* Object 0x8005 */
{NULL , NULL ,  0x8005 , {DEFTYPE_UNSIGNED32 , 25 | (OBJCODE_ARR << 8)} , asEntryDesc0x8005 , aName0x8005 , &RTDVal_60x8005 , NULL , NULL , 0x0000 },
/* Object 0x8006 */
{NULL , NULL ,  0x8006 , {DEFTYPE_UNSIGNED32 , 25 | (OBJCODE_ARR << 8)} , asEntryDesc0x8006 , aName0x8006 , &RTDVal_70x8006 , NULL , NULL , 0x0000 },
/* Object 0x8007 */
{NULL , NULL ,  0x8007 , {DEFTYPE_UNSIGNED32 , 25 | (OBJCODE_ARR << 8)} , asEntryDesc0x8007 , aName0x8007 , &RTDVal_80x8007 , NULL , NULL , 0x0000 },
/* Object 0x8008 */
{NULL , NULL ,  0x8008 , {DEFTYPE_UNSIGNED32 , 25 | (OBJCODE_ARR << 8)} , asEntryDesc0x8008 , aName0x8008 , &RTDVal_90x8008 , NULL , NULL , 0x0000 },
/* Object 0x8009 */
{NULL , NULL ,  0x8009 , {DEFTYPE_UNSIGNED32 , 25 | (OBJCODE_ARR << 8)} , asEntryDesc0x8009 , aName0x8009 , &RTDVal_100x8009 , NULL , NULL , 0x0000 },
/* Object 0x800A */
{NULL , NULL ,  0x800A , {DEFTYPE_UNSIGNED32 , 25 | (OBJCODE_ARR << 8)} , asEntryDesc0x800A , aName0x800A , &RTDVal_110x800A , NULL , NULL , 0x0000 },
/* Object 0x800B */
{NULL , NULL ,  0x800B , {DEFTYPE_UNSIGNED32 , 25 | (OBJCODE_ARR << 8)} , asEntryDesc0x800B , aName0x800B , &RTDVal_120x800B , NULL , NULL , 0x0000 },
/* Object 0x800C */
{NULL , NULL ,  0x800C , {DEFTYPE_UNSIGNED32 , 1 | (OBJCODE_ARR << 8)} , asEntryDesc0x800C , aName0x800C , &IMUVal_10x800C , NULL , NULL , 0x0000 },
{NULL,NULL, 0xFFFF, {0, 0}, NULL, NULL, NULL, NULL}};
#endif    //#ifdef _OBJD_

#undef PROTO

/** @}*/
#define _LAN9252_SPI_OBJECTS_H_
