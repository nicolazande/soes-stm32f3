/****************************************************************
 * Includes
 ****************************************************************/
#include "esc_coe.h"
#include "utypes.h"
#include <stddef.h>


/****************************************************************
 * Data
 ****************************************************************/
static const char acNameDefault[] = "object";


/****************************************************************
 * Object dictionary items
 ****************************************************************/
const _objd SDO1000[] =
{
  {0x0, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 5001, NULL},
};

const _objd SDO1008[] =
{
  {0x0, DTYPE_VISIBLE_STRING, 128, ATYPE_RO, acNameDefault, 0, "LAN9252 SPI"},
};

const _objd SDO1009[] =
{
  {0x0, DTYPE_VISIBLE_STRING, 40, ATYPE_RO, acNameDefault, 0, "0.0.1"},
};

const _objd SDO100A[] =
{
  {0x0, DTYPE_VISIBLE_STRING, 40, ATYPE_RO, acNameDefault, 0, "0.0.1"},
};

const _objd SDO1018[] =
{
  {0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 4, NULL},
  {0x01, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0, NULL},
  {0x02, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 700707, NULL},
  {0x03, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 1, NULL},
  {0x04, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 1, NULL},
};

const _objd SDO1600[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x08, NULL},
    {0x01, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70000108, NULL}, //LED state [0]
	{0x02, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70000208, NULL}, //LED state [1]
	{0x03, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70000308, NULL}, //LED state [2]
	{0x04, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70000408, NULL}, //LED state [3]
	{0x05, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70000508, NULL}, //LED state [4]
	{0x06, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70000608, NULL}, //LED state [5]
	{0x07, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70000708, NULL}, //LED state [6]
	{0x08, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70000808, NULL}, //LED state [7]
};

const _objd SDO1601[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x08, NULL},
    {0x01, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70010108, NULL}, //24V power supply state [0]
	{0x02, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70010208, NULL}, //24V power supply state [1]
	{0x03, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70010308, NULL}, //24V power supply state [2]
	{0x04, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70010408, NULL}, //24V power supply state [3]
	{0x05, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70010508, NULL}, //24V power supply state [4]
	{0x06, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70010608, NULL}, //24V power supply state [5]
	{0x07, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70010708, NULL}, //24V power supply state [6]
	{0x08, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70010808, NULL}, //24V power supply state [7]
};

const _objd SDO1602[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x08, NULL},
    {0x01, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70020108, NULL}, //20V power supply state [0]
	{0x02, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70020208, NULL}, //20V power supply state [1]
	{0x03, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70020308, NULL}, //20V power supply state [2]
	{0x04, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70020408, NULL}, //20V power supply state [3]
	{0x05, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70020508, NULL}, //20V power supply state [4]
	{0x06, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70020608, NULL}, //20V power supply state [5]
	{0x07, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70020708, NULL}, //20V power supply state [6]
	{0x08, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70020808, NULL}, //20V power supply state [7]
};

const _objd SDO1603[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x02, NULL},
    {0x01, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70030108, NULL}, //5V power supply state [0]
	{0x02, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70030208, NULL}, //5V power supply state [1]
};

const _objd SDO1A00[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x64, NULL},
	{0x01, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000120, NULL}, //RTR temperature [0]
	{0x02, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000220, NULL}, //RTR temperature [1]
	{0x03, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000310, NULL}, //RTR temperature [2]
	{0x04, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000420, NULL}, //RTR temperature [3]
	{0x05, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000520, NULL}, //RTR temperature [4]
	{0x06, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000620, NULL}, //RTR temperature [5]
	{0x07, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000720, NULL}, //RTR temperature [6]
	{0x08, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000820, NULL}, //RTR temperature [7]
	{0x09, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000920, NULL}, //RTR temperature [8]
	{0x0A, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000A20, NULL}, //RTR temperature [9]
	{0x0B, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000B20, NULL}, //RTR temperature [10]
	{0x0C, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000C20, NULL}, //RTR temperature [11]
	{0x0D, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000D20, NULL}, //RTR temperature [12]
	{0x0E, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000E20, NULL}, //RTR temperature [13]
	{0x0F, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000F20, NULL}, //RTR temperature [14]
	{0x10, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60001020, NULL}, //RTR temperature [15]
	{0x11, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60001120, NULL}, //RTR temperature [16]
	{0x12, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60001220, NULL}, //RTR temperature [17]
	{0x13, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60001320, NULL}, //RTR temperature [18]
	{0x14, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60001420, NULL}, //RTR temperature [19]
	{0x15, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60001520, NULL}, //RTR temperature [20]
	{0x16, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60001620, NULL}, //RTR temperature [21]
	{0x17, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60001720, NULL}, //RTR temperature [22]
	{0x18, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60001820, NULL}, //RTR temperature [23]
	{0x19, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60001920, NULL}, //RTR temperature [24]
	{0x1A, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010110, NULL}, //RTR high fault [0]
	{0x1B, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010210, NULL}, //RTR high fault [1]
	{0x1C, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010310, NULL}, //RTR high fault [2]
	{0x1D, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010410, NULL}, //RTR high fault [3]
	{0x1E, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010510, NULL}, //RTR high fault [4]
	{0x1F, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010610, NULL}, //RTR high fault [5]
	{0x20, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010710, NULL}, //RTR high fault [6]
	{0x21, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010810, NULL}, //RTR high fault [7]
	{0x22, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010910, NULL}, //RTR high fault [8]
	{0x23, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010A10, NULL}, //RTR high fault [9]
	{0x24, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010B10, NULL}, //RTR high fault [10]
	{0x25, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010C10, NULL}, //RTR high fault [11]
	{0x26, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010D10, NULL}, //RTR high fault [12]
	{0x27, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010E10, NULL}, //RTR high fault [13]
	{0x28, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010F10, NULL}, //RTR high fault [14]
	{0x29, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60011010, NULL}, //RTR high fault [15]
	{0x2A, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60011110, NULL}, //RTR high fault [16]
	{0x2B, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60011210, NULL}, //RTR high fault [17]
	{0x2C, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60011310, NULL}, //RTR high fault [18]
	{0x2D, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60011410, NULL}, //RTR high fault [19]
	{0x2E, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60011510, NULL}, //RTR high fault [20]
	{0x2F, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60011610, NULL}, //RTR high fault [21]
	{0x30, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60011710, NULL}, //RTR high fault [22]
	{0x31, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60011810, NULL}, //RTR high fault [23]
	{0x32, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60011910, NULL}, //RTR high fault [24]
	{0x33, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60020110, NULL}, //RTR low fault [0]
	{0x34, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60020210, NULL}, //RTR low fault [1]
	{0x35, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60020310, NULL}, //RTR low fault [2]
	{0x36, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60020410, NULL}, //RTR low fault [3]
	{0x37, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60020510, NULL}, //RTR low fault [4]
	{0x38, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60020610, NULL}, //RTR low fault [5]
    {0x39, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60020710, NULL}, //RTR low fault [6]
    {0x3A, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60020810, NULL}, //RTR low fault [7]
    {0x3B, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60020910, NULL}, //RTR low fault [8]
    {0x3C, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60020A10, NULL}, //RTR low fault [9]
    {0x3D, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60020B10, NULL}, //RTR low fault [10]
    {0x3E, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60020C10, NULL}, //RTR low fault [11]
    {0x3F, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60020D10, NULL}, //RTR low fault [12]
    {0x40, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60020E10, NULL}, //RTR low fault [13]
    {0x41, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60020F10, NULL}, //RTR low fault [14]
    {0x42, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60021010, NULL}, //RTR low fault [15]
    {0x43, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60021110, NULL}, //RTR low fault [16]
    {0x44, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60021210, NULL}, //RTR low fault [17]
    {0x45, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60021310, NULL}, //RTR low fault [18]
    {0x46, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60021410, NULL}, //RTR low fault [19]
    {0x47, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60021510, NULL}, //RTR low fault [20]
    {0x48, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60021610, NULL}, //RTR low fault [21]
    {0x49, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60021710, NULL}, //RTR low fault [22]
    {0x4A, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60021810, NULL}, //RTR low fault [23]
    {0x4B, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60021910, NULL}, //RTR low fault [24]
	{0x4C, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60030110, NULL}, //RTR fault status [0]
	{0x4D, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60030210, NULL}, //RTR fault status [1]
	{0x4E, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60030310, NULL}, //RTR fault status [2]
	{0x4F, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60030410, NULL}, //RTR fault status [3]
	{0x50, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60030510, NULL}, //RTR fault status [4]
	{0x51, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60030610, NULL}, //RTR fault status [5]
    {0x52, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60030710, NULL}, //RTR fault status [6]
    {0x53, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60030810, NULL}, //RTR fault status [7]
    {0x54, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60030910, NULL}, //RTR fault status [8]
    {0x55, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60030A10, NULL}, //RTR fault status [9]
    {0x56, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60030B10, NULL}, //RTR fault status [10]
    {0x57, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60030C10, NULL}, //RTR fault status [11]
    {0x58, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60030D10, NULL}, //RTR fault status [12]
    {0x59, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60030E10, NULL}, //RTR fault status [13]
    {0x5A, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60030F10, NULL}, //RTR fault status [14]
    {0x5B, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60031010, NULL}, //RTR fault status [15]
    {0x5C, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60031110, NULL}, //RTR fault status [16]
    {0x5D, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60031210, NULL}, //RTR fault status [17]
    {0x5E, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60031310, NULL}, //RTR fault status [18]
    {0x5F, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60031410, NULL}, //RTR fault status [19]
    {0x60, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60031510, NULL}, //RTR fault status [20]
    {0x61, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60031610, NULL}, //RTR fault status [21]
    {0x62, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60031710, NULL}, //RTR fault status [22]
    {0x63, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60031810, NULL}, //RTR fault status [23]
    {0x64, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60031910, NULL}, //RTR fault status [24]
};

const _objd SDO1A01[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x06, NULL},
    {0x01, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60040120, NULL}, //IMU ax [0]
	{0x02, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60050120, NULL}, //IMU ay [0]
	{0x03, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60060120, NULL}, //IMU az [0]
	{0x04, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60070120, NULL}, //IMU wx [0]
	{0x05, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60080120, NULL}, //IMU wx [0]
	{0x06, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60090120, NULL}, //IMU wz [0]
};

const _objd SDO1A02[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x04, NULL},
    {0x01, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600A0110, NULL}, //Photo millivolts [0]
	{0x02, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600A0210, NULL}, //Photo millivolts [1]
	{0x03, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600A0310, NULL}, //Photo millivolts [2]
	{0x04, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600A0410, NULL}, //Photo millivolts [3]
};

const _objd SDO1A03[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x02, NULL},
    {0x01, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600B0120, NULL}, //Pyrometer temperature [0]
	{0x02, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600B0220, NULL}, //Pyrometer temperature [1]
};

const _objd SDO1A04[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x08, NULL},
    {0x01, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70000108, NULL}, //LED state [0]
	{0x02, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70000208, NULL}, //LED state [1]
	{0x03, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70000308, NULL}, //LED state [2]
	{0x04, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70000408, NULL}, //LED state [3]
	{0x05, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70000508, NULL}, //LED state [4]
	{0x06, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70000608, NULL}, //LED state [5]
	{0x07, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70000708, NULL}, //LED state [6]
	{0x08, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70000808, NULL}, //LED state [7]
};

const _objd SDO1A05[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x08, NULL},
    {0x01, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70010108, NULL}, //24V power supply state [0]
	{0x02, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70010208, NULL}, //24V power supply state [1]
	{0x03, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70010308, NULL}, //24V power supply state [2]
	{0x04, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70010408, NULL}, //24V power supply state [3]
	{0x05, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70010508, NULL}, //24V power supply state [4]
	{0x06, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70010608, NULL}, //24V power supply state [5]
	{0x07, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70010708, NULL}, //24V power supply state [6]
	{0x08, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70010808, NULL}, //24V power supply state [7]
};

const _objd SDO1A06[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x08, NULL},
    {0x01, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70020108, NULL}, //20V power supply state [0]
	{0x02, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70020208, NULL}, //20V power supply state [1]
	{0x03, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70020308, NULL}, //20V power supply state [2]
	{0x04, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70020408, NULL}, //20V power supply state [3]
	{0x05, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70020508, NULL}, //20V power supply state [4]
	{0x06, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70020608, NULL}, //20V power supply state [5]
	{0x07, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70020708, NULL}, //20V power supply state [6]
	{0x08, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70020808, NULL}, //20V power supply state [7]
};

const _objd SDO1A07[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x02, NULL},
    {0x01, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70030108, NULL}, //5V power supply state [0]
	{0x02, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70030208, NULL}, //5V power supply state [1]
};

const _objd SDO1C00[] =
{
  {0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 4, NULL},
  {0x01, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 1, NULL}, //SM0: mailbox Receive (master to slave)
  {0x02, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 2, NULL}, //SM1: mailbox Send (slave to master)
  {0x03, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 3, NULL}, //SM2: process data output (master to slave)
  {0x04, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 4, NULL}, //SM3: process data input (slave to master)
};

const _objd SDO1C12[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 4, NULL},
	{0x01, DTYPE_UNSIGNED16, 16, ATYPE_RO, acNameDefault, 0x1600, NULL}, //SM2 to RXPDO 0x1600 mapping
	{0x02, DTYPE_UNSIGNED16, 16, ATYPE_RO, acNameDefault, 0x1601, NULL}, //SM2 to RXPDO 0x1601 mapping
	{0x03, DTYPE_UNSIGNED16, 16, ATYPE_RO, acNameDefault, 0x1602, NULL}, //SM2 to RXPDO 0x1602 mapping
	{0x04, DTYPE_UNSIGNED16, 16, ATYPE_RO, acNameDefault, 0x1603, NULL}, //SM2 to RXPDO 0x1603 mapping
};

const _objd SDO1C13[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 8, NULL},
	{0x01, DTYPE_UNSIGNED16, 16, ATYPE_RO, acNameDefault, 0x1A00, NULL}, //SM3 to TXPDO 0x1A00 mapping
	{0x02, DTYPE_UNSIGNED16, 16, ATYPE_RO, acNameDefault, 0x1A01, NULL}, //SM3 to TXPDO 0x1A01 mapping
	{0x03, DTYPE_UNSIGNED16, 16, ATYPE_RO, acNameDefault, 0x1A02, NULL}, //SM3 to TXPDO 0x1A02 mapping
	{0x04, DTYPE_UNSIGNED16, 16, ATYPE_RO, acNameDefault, 0x1A03, NULL}, //SM3 to TXPDO 0x1A03 mapping
	{0x05, DTYPE_UNSIGNED16, 16, ATYPE_RO, acNameDefault, 0x1A04, NULL}, //SM3 to TXPDO 0x1A04 mapping
	{0x06, DTYPE_UNSIGNED16, 16, ATYPE_RO, acNameDefault, 0x1A05, NULL}, //SM3 to TXPDO 0x1A05 mapping
	{0x07, DTYPE_UNSIGNED16, 16, ATYPE_RO, acNameDefault, 0x1A06, NULL}, //SM3 to TXPDO 0x1A06 mapping
	{0x08, DTYPE_UNSIGNED16, 16, ATYPE_RO, acNameDefault, 0x1A07, NULL}, //SM3 to TXPDO 0x1A07 mapping
};

const _objd SDO6000[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x19, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[0].temperature},
	{0x02, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[1].temperature},
	{0x03, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[2].temperature},
	{0x04, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[3].temperature},
	{0x05, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[4].temperature},
	{0x06, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[5].temperature},
	{0x07, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[6].temperature},
	{0x08, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[7].temperature},
	{0x09, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[8].temperature},
	{0x0A, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[9].temperature},
	{0x0B, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[10].temperature},
	{0x0C, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[11].temperature},
	{0x0D, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[12].temperature},
	{0x0E, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[13].temperature},
	{0x0F, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[14].temperature},
	{0x10, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[15].temperature},
	{0x11, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[16].temperature},
	{0x12, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[17].temperature},
	{0x13, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[18].temperature},
	{0x14, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[19].temperature},
	{0x15, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[20].temperature},
	{0x16, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[21].temperature},
	{0x17, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[22].temperature},
	{0x18, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[23].temperature},
	{0x19, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[24].temperature}
};

const _objd SDO6001[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x19, NULL},
	{0x01, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[0].high_fault},
	{0x02, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[1].high_fault},
	{0x03, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[2].high_fault},
	{0x04, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[3].high_fault},
	{0x05, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[4].high_fault},
	{0x06, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[5].high_fault},
	{0x07, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[6].high_fault},
	{0x08, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[7].high_fault},
	{0x09, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[8].high_fault},
	{0x0A, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[9].high_fault},
	{0x0B, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[10].high_fault},
	{0x0C, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[11].high_fault},
	{0x0D, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[12].high_fault},
	{0x0E, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[13].high_fault},
	{0x0F, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[14].high_fault},
	{0x10, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[15].high_fault},
	{0x11, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[16].high_fault},
	{0x12, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[17].high_fault},
	{0x13, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[18].high_fault},
	{0x14, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[19].high_fault},
	{0x15, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[20].high_fault},
	{0x16, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[21].high_fault},
	{0x17, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[22].high_fault},
	{0x18, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[23].high_fault},
	{0x19, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[24].high_fault}
};

const _objd SDO6002[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x19, NULL},
	{0x01, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[0].low_fault},
	{0x02, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[1].low_fault},
	{0x03, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[2].low_fault},
	{0x04, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[3].low_fault},
	{0x05, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[4].low_fault},
	{0x06, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[5].low_fault},
	{0x07, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[6].low_fault},
	{0x08, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[7].low_fault},
	{0x09, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[8].low_fault},
	{0x0A, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[9].low_fault},
	{0x0B, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[10].low_fault},
	{0x0C, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[11].low_fault},
	{0x0D, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[12].low_fault},
	{0x0E, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[13].low_fault},
	{0x0F, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[14].low_fault},
	{0x10, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[15].low_fault},
	{0x11, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[16].low_fault},
	{0x12, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[17].low_fault},
	{0x13, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[18].low_fault},
	{0x14, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[19].low_fault},
	{0x15, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[20].low_fault},
	{0x16, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[21].low_fault},
	{0x17, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[22].low_fault},
	{0x18, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[23].low_fault},
	{0x19, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[24].low_fault}
};

const _objd SDO6003[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x19, NULL},
	{0x01, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[0].fault_status},
	{0x02, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[1].fault_status},
	{0x03, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[2].fault_status},
	{0x04, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[3].fault_status},
	{0x05, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[4].fault_status},
	{0x06, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[5].fault_status},
	{0x07, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[6].fault_status},
	{0x08, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[7].fault_status},
	{0x09, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[8].fault_status},
	{0x0A, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[9].fault_status},
	{0x0B, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[10].fault_status},
	{0x0C, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[11].fault_status},
	{0x0D, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[12].fault_status},
	{0x0E, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[13].fault_status},
	{0x0F, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[14].fault_status},
	{0x10, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[15].fault_status},
	{0x11, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[16].fault_status},
	{0x12, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[17].fault_status},
	{0x13, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[18].fault_status},
	{0x14, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[19].fault_status},
	{0x15, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[20].fault_status},
	{0x16, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[21].fault_status},
	{0x17, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[22].fault_status},
	{0x18, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[23].fault_status},
	{0x19, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[24].fault_status}
};

const _objd SDO6004[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 1, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.imu[0].ax}
};

const _objd SDO6005[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 1, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.imu[0].ay}
};

const _objd SDO6006[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 1, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.imu[0].az}
};

const _objd SDO6007[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 1, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.imu[0].wx}
};

const _objd SDO6008[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 1, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.imu[0].wy}
};

const _objd SDO6009[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 1, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.imu[0].wz}
};

const _objd SDO600A[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 4, NULL},
	{0x01, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.photo[0].millivolts},
	{0x02, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.photo[1].millivolts},
	{0x03, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.photo[2].millivolts},
	{0x04, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.photo[3].millivolts},
};

const _objd SDO600B[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 2, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.pyro[0].temperature},
	{0x02, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.pyro[1].temperature}
};

const _objd SDO7000[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 8, NULL},
	{0x01, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO | ATYPE_RXPDO, acNameDefault, 0, &Obj.led[0].state},
	{0x02, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO | ATYPE_RXPDO, acNameDefault, 0, &Obj.led[1].state},
	{0x03, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO | ATYPE_RXPDO, acNameDefault, 0, &Obj.led[2].state},
	{0x04, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO | ATYPE_RXPDO, acNameDefault, 0, &Obj.led[3].state},
	{0x05, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO | ATYPE_RXPDO, acNameDefault, 0, &Obj.led[4].state},
	{0x06, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO | ATYPE_RXPDO, acNameDefault, 0, &Obj.led[5].state},
	{0x07, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO | ATYPE_RXPDO, acNameDefault, 0, &Obj.led[6].state},
	{0x08, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO | ATYPE_RXPDO, acNameDefault, 0, &Obj.led[7].state}
};

const _objd SDO7001[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 8, NULL},
	{0x01, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_24V[0].state},
	{0x02, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_24V[1].state},
	{0x03, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_24V[2].state},
	{0x04, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_24V[3].state},
	{0x05, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_24V[4].state},
	{0x06, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_24V[5].state},
	{0x07, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_24V[6].state},
	{0x08, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_24V[7].state}
};

const _objd SDO7002[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 8, NULL},
	{0x01, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_20V[0].state},
	{0x02, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_20V[1].state},
	{0x03, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_20V[2].state},
	{0x04, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_20V[3].state},
	{0x05, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_20V[4].state},
	{0x06, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_20V[5].state},
	{0x07, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_20V[6].state},
	{0x08, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_20V[7].state}
};

const _objd SDO7003[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 2, NULL},
	{0x01, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_5V[0].state},
	{0x02, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_5V[1].state},
};

const _objd SDO8000[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x19, NULL},
	{0x01, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[0].filter},
	{0x02, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[1].filter},
	{0x03, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[2].filter},
	{0x04, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[3].filter},
	{0x05, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[4].filter},
	{0x06, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[5].filter},
	{0x07, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[6].filter},
	{0x08, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[7].filter},
	{0x09, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[8].filter},
	{0x0A, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[9].filter},
	{0x0B, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[10].filter},
	{0x0C, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[11].filter},
	{0x0D, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[12].filter},
	{0x0E, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[13].filter},
	{0x0F, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[14].filter},
	{0x10, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[15].filter},
	{0x11, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[16].filter},
	{0x12, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[17].filter},
	{0x13, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[18].filter},
	{0x14, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[19].filter},
	{0x15, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[20].filter},
	{0x16, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[21].filter},
	{0x17, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[22].filter},
	{0x18, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[23].filter},
	{0x19, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[24].filter}
};

const _objd SDO8001[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x19, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[0].val_2},
	{0x02, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[1].val_2},
	{0x03, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[2].val_2},
	{0x04, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[3].val_2},
	{0x05, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[4].val_2},
	{0x06, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[5].val_2},
	{0x07, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[6].val_2},
	{0x08, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[7].val_2},
	{0x09, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[8].val_2},
	{0x0A, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[9].val_2},
	{0x0B, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[10].val_2},
	{0x0C, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[11].val_2},
	{0x0D, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[12].val_2},
	{0x0E, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[13].val_2},
	{0x0F, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[14].val_2},
	{0x10, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[15].val_2},
	{0x11, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[16].val_2},
	{0x12, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[17].val_2},
	{0x13, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[18].val_2},
	{0x14, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[19].val_2},
	{0x15, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[20].val_2},
	{0x16, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[21].val_2},
	{0x17, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[22].val_2},
	{0x18, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[23].val_2},
	{0x19, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[24].val_2}
};

const _objd SDO8002[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x19, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[0].val_3},
	{0x02, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[1].val_3},
	{0x03, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[2].val_3},
	{0x04, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[3].val_3},
	{0x05, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[4].val_3},
	{0x06, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[5].val_3},
	{0x07, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[6].val_3},
	{0x08, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[7].val_3},
	{0x09, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[8].val_3},
	{0x0A, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[9].val_3},
	{0x0B, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[10].val_3},
	{0x0C, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[11].val_3},
	{0x0D, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[12].val_3},
	{0x0E, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[13].val_3},
	{0x0F, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[14].val_3},
	{0x10, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[15].val_3},
	{0x11, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[16].val_3},
	{0x12, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[17].val_3},
	{0x13, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[18].val_3},
	{0x14, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[19].val_3},
	{0x15, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[20].val_3},
	{0x16, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[21].val_3},
	{0x17, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[22].val_3},
	{0x18, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[23].val_3},
	{0x19, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[24].val_3}
};

const _objd SDO8003[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x19, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[0].val_4},
	{0x02, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[1].val_4},
	{0x03, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[2].val_4},
	{0x04, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[3].val_4},
	{0x05, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[4].val_4},
	{0x06, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[5].val_4},
	{0x07, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[6].val_4},
	{0x08, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[7].val_4},
	{0x09, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[8].val_4},
	{0x0A, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[9].val_4},
	{0x0B, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[10].val_4},
	{0x0C, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[11].val_4},
	{0x0D, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[12].val_4},
	{0x0E, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[13].val_4},
	{0x0F, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[14].val_4},
	{0x10, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[15].val_4},
	{0x11, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[16].val_4},
	{0x12, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[17].val_4},
	{0x13, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[18].val_4},
	{0x14, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[19].val_4},
	{0x15, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[20].val_4},
	{0x16, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[21].val_4},
	{0x17, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[22].val_4},
	{0x18, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[23].val_4},
	{0x19, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[24].val_4}
};

const _objd SDO8004[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x19, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[0].val_5},
	{0x02, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[1].val_5},
	{0x03, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[2].val_5},
	{0x04, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[3].val_5},
	{0x05, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[4].val_5},
	{0x06, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[5].val_5},
	{0x07, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[6].val_5},
	{0x08, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[7].val_5},
	{0x09, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[8].val_5},
	{0x0A, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[9].val_5},
	{0x0B, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[10].val_5},
	{0x0C, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[11].val_5},
	{0x0D, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[12].val_5},
	{0x0E, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[13].val_5},
	{0x0F, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[14].val_5},
	{0x10, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[15].val_5},
	{0x11, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[16].val_5},
	{0x12, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[17].val_5},
	{0x13, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[18].val_5},
	{0x14, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[19].val_5},
	{0x15, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[20].val_5},
	{0x16, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[21].val_5},
	{0x17, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[22].val_5},
	{0x18, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[23].val_5},
	{0x19, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[24].val_5}
};

const _objd SDO8005[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x19, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[0].val_6},
	{0x02, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[1].val_6},
	{0x03, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[2].val_6},
	{0x04, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[3].val_6},
	{0x05, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[4].val_6},
	{0x06, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[5].val_6},
	{0x07, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[6].val_6},
	{0x08, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[7].val_6},
	{0x09, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[8].val_6},
	{0x0A, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[9].val_6},
	{0x0B, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[10].val_6},
	{0x0C, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[11].val_6},
	{0x0D, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[12].val_6},
	{0x0E, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[13].val_6},
	{0x0F, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[14].val_6},
	{0x10, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[15].val_6},
	{0x11, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[16].val_6},
	{0x12, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[17].val_6},
	{0x13, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[18].val_6},
	{0x14, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[19].val_6},
	{0x15, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[20].val_6},
	{0x16, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[21].val_6},
	{0x17, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[22].val_6},
	{0x18, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[23].val_6},
	{0x19, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[24].val_6}
};

const _objd SDO8006[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x19, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[0].val_7},
	{0x02, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[1].val_7},
	{0x03, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[2].val_7},
	{0x04, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[3].val_7},
	{0x05, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[4].val_7},
	{0x06, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[5].val_7},
	{0x07, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[6].val_7},
	{0x08, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[7].val_7},
	{0x09, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[8].val_7},
	{0x0A, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[9].val_7},
	{0x0B, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[10].val_7},
	{0x0C, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[11].val_7},
	{0x0D, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[12].val_7},
	{0x0E, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[13].val_7},
	{0x0F, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[14].val_7},
	{0x10, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[15].val_7},
	{0x11, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[16].val_7},
	{0x12, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[17].val_7},
	{0x13, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[18].val_7},
	{0x14, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[19].val_7},
	{0x15, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[20].val_7},
	{0x16, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[21].val_7},
	{0x17, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[22].val_7},
	{0x18, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[23].val_7},
	{0x19, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[24].val_7}
};

const _objd SDO8007[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x19, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[0].val_8},
	{0x02, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[1].val_8},
	{0x03, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[2].val_8},
	{0x04, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[3].val_8},
	{0x05, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[4].val_8},
	{0x06, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[5].val_8},
	{0x07, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[6].val_8},
	{0x08, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[7].val_8},
	{0x09, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[8].val_8},
	{0x0A, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[9].val_8},
	{0x0B, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[10].val_8},
	{0x0C, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[11].val_8},
	{0x0D, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[12].val_8},
	{0x0E, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[13].val_8},
	{0x0F, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[14].val_8},
	{0x10, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[15].val_8},
	{0x11, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[16].val_8},
	{0x12, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[17].val_8},
	{0x13, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[18].val_8},
	{0x14, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[19].val_8},
	{0x15, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[20].val_8},
	{0x16, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[21].val_8},
	{0x17, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[22].val_8},
	{0x18, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[23].val_8},
	{0x19, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[24].val_8}
};

const _objd SDO8008[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x19, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[0].val_9},
	{0x02, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[1].val_9},
	{0x03, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[2].val_9},
	{0x04, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[3].val_9},
	{0x05, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[4].val_9},
	{0x06, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[5].val_9},
	{0x07, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[6].val_9},
	{0x08, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[7].val_9},
	{0x09, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[8].val_9},
	{0x0A, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[9].val_9},
	{0x0B, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[10].val_9},
	{0x0C, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[11].val_9},
	{0x0D, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[12].val_9},
	{0x0E, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[13].val_9},
	{0x0F, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[14].val_9},
	{0x10, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[15].val_9},
	{0x11, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[16].val_9},
	{0x12, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[17].val_9},
	{0x13, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[18].val_9},
	{0x14, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[19].val_9},
	{0x15, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[20].val_9},
	{0x16, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[21].val_9},
	{0x17, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[22].val_9},
	{0x18, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[23].val_9},
	{0x19, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[24].val_9}
};

const _objd SDO8009[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x19, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[0].val_10},
	{0x02, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[1].val_10},
	{0x03, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[2].val_10},
	{0x04, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[3].val_10},
	{0x05, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[4].val_10},
	{0x06, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[5].val_10},
	{0x07, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[6].val_10},
	{0x08, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[7].val_10},
	{0x09, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[8].val_10},
	{0x0A, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[9].val_10},
	{0x0B, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[10].val_10},
	{0x0C, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[11].val_10},
	{0x0D, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[12].val_10},
	{0x0E, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[13].val_10},
	{0x0F, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[14].val_10},
	{0x10, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[15].val_10},
	{0x11, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[16].val_10},
	{0x12, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[17].val_10},
	{0x13, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[18].val_10},
	{0x14, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[19].val_10},
	{0x15, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[20].val_10},
	{0x16, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[21].val_10},
	{0x17, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[22].val_10},
	{0x18, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[23].val_10},
	{0x19, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[24].val_10}
};

const _objd SDO800A[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x19, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[0].val_11},
	{0x02, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[1].val_11},
	{0x03, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[2].val_11},
	{0x04, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[3].val_11},
	{0x05, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[4].val_11},
	{0x06, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[5].val_11},
	{0x07, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[6].val_11},
	{0x08, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[7].val_11},
	{0x09, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[8].val_11},
	{0x0A, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[9].val_11},
	{0x0B, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[10].val_11},
	{0x0C, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[11].val_11},
	{0x0D, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[12].val_11},
	{0x0E, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[13].val_11},
	{0x0F, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[14].val_11},
	{0x10, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[15].val_11},
	{0x11, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[16].val_11},
	{0x12, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[17].val_11},
	{0x13, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[18].val_11},
	{0x14, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[19].val_11},
	{0x15, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[20].val_11},
	{0x16, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[21].val_11},
	{0x17, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[22].val_11},
	{0x18, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[23].val_11},
	{0x19, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[24].val_11}
};

const _objd SDO800B[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x19, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[0].val_12},
	{0x02, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[1].val_12},
	{0x03, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[2].val_12},
	{0x04, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[3].val_12},
	{0x05, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[4].val_12},
	{0x06, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[5].val_12},
	{0x07, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[6].val_12},
	{0x08, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[7].val_12},
	{0x09, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[8].val_12},
	{0x0A, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[9].val_12},
	{0x0B, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[10].val_12},
	{0x0C, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[11].val_12},
	{0x0D, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[12].val_12},
	{0x0E, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[13].val_12},
	{0x0F, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[14].val_12},
	{0x10, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[15].val_12},
	{0x11, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[16].val_12},
	{0x12, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[17].val_12},
	{0x13, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[18].val_12},
	{0x14, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[19].val_12},
	{0x15, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[20].val_12},
	{0x16, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[21].val_12},
	{0x17, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[22].val_12},
	{0x18, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[23].val_12},
	{0x19, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.rtd[24].val_12}
};

const _objd SDO800C[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 1, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.imu[0].val_1}
};


/****************************************************************
 * Object dictionary list
 ****************************************************************/
const _objectlist SDOobjects[] =
{
	{0x1000, OTYPE_VAR, 0, 0, "Device Type", SDO1000},
	{0x1008, OTYPE_VAR, 0, 0, "Device Name", SDO1008},
	{0x1009, OTYPE_VAR, 0, 0, "Hardware Version", SDO1009},
	{0x100A, OTYPE_VAR, 0, 0, "Software Version", SDO100A},
	{0x1018, OTYPE_RECORD, 4, 0, "Identity Object", SDO1018},
	{0x1600, OTYPE_RECORD, 8, 0, "0x1600 PDO", SDO1600}, //LED state RXPDO
	{0x1601, OTYPE_RECORD, 8, 0, "0x1601 PDO", SDO1601}, //24V power supply RXPDO
	{0x1602, OTYPE_RECORD, 8, 0, "0x1602 PDO", SDO1602}, //20V power supply RXPDO
	{0x1603, OTYPE_RECORD, 2, 0, "0x1603 PDO", SDO1603}, //5V power supply RXPDO
	{0x1A00, OTYPE_RECORD, 0x64, 0, "0x1A00 PDO", SDO1A00}, //RTR TXPDO
	{0x1A01, OTYPE_RECORD, 6, 0, "0x1A01 PDO", SDO1A01}, //IMU TXPDO
	{0x1A02, OTYPE_RECORD, 4, 0, "0x1A02 PDO", SDO1A02}, //Photo millivolts TXPDO
	{0x1A03, OTYPE_RECORD, 2, 0, "0x1A03 PDO", SDO1A03}, //Pyrometer temperature TXPDO
	{0x1A04, OTYPE_RECORD, 8, 0, "0x1A04 PDO", SDO1A04}, //LED state TXPDO
	{0x1A05, OTYPE_RECORD, 8, 0, "0x1A05 PDO", SDO1A05}, //24V power supply TXPDO
	{0x1A06, OTYPE_RECORD, 8, 0, "0x1A06 PDO", SDO1A06}, //20V power supply TXPDO
	{0x1A07, OTYPE_RECORD, 2, 0, "0x1A07 PDO", SDO1A07}, //5V power supply TXPDO
	{0x1C00, OTYPE_ARRAY, 4, 0, "Sync Manager Communication Type", SDO1C00}, //SM configuration
	{0x1C12, OTYPE_ARRAY, 4, 0, "Sync Manager 2 PDO Assignment", SDO1C12}, //SM2 to RXPDO mapping
	{0x1C13, OTYPE_ARRAY, 8, 0, "Sync Manager 3 PDO Assignment", SDO1C13}, //SM3 to TXPDO mapping
	{0x6000, OTYPE_ARRAY, 0x19, 0, "RTR temperature", SDO6000}, //RTR temperature
	{0x6001, OTYPE_ARRAY, 0x19, 0, "RTR high fault", SDO6001}, //RTR high fault
	{0x6002, OTYPE_ARRAY, 0x19, 0, "RTR low fault", SDO6002}, //RTR low fault
	{0x6003, OTYPE_ARRAY, 0x19, 0, "RTR fault status", SDO6003}, //RTR fault status
	{0x6004, OTYPE_ARRAY, 1, 0, "IMU ax", SDO6004}, //IMU ax
	{0x6005, OTYPE_ARRAY, 1, 0, "IMU ay", SDO6005}, //IMU ay
	{0x6006, OTYPE_ARRAY, 1, 0, "IMU az", SDO6006}, //IMU az
	{0x6007, OTYPE_ARRAY, 1, 0, "IMU wx", SDO6007}, //IMU wx
	{0x6008, OTYPE_ARRAY, 1, 0, "IMU wy", SDO6008}, //IMU wy
	{0x6009, OTYPE_ARRAY, 1, 0, "IMU wz", SDO6009}, //IMU wz
	{0x600A, OTYPE_ARRAY, 4, 0, "Photo millivolts", SDO600A}, //Photo millivolts
	{0x600B, OTYPE_ARRAY, 2, 0, "Pyro temperature", SDO600B}, //Pyro temperature
	{0x7000, OTYPE_ARRAY, 8, 0, "LED state", SDO7000}, //LED state
	{0x7001, OTYPE_ARRAY, 8, 0, "Power 24V state", SDO7001}, //Power 24V state
	{0x7002, OTYPE_ARRAY, 8, 0, "Power 20V state", SDO7002}, //Power 20V state
	{0x7003, OTYPE_ARRAY, 2, 0, "Power 5V state", SDO7003}, //Power 5V state
	{0x8000, OTYPE_ARRAY, 0x19, 0, "RTR filter", SDO8000}, //RTR filter
	{0x8001, OTYPE_ARRAY, 0x19, 0, "RTR val_2", SDO8001}, //RTR val_2
	{0x8002, OTYPE_ARRAY, 0x19, 0, "RTR val_3", SDO8002}, //RTR val_s
	{0x8003, OTYPE_ARRAY, 0x19, 0, "RTR val_4", SDO8003}, //RTR val_4
	{0x8004, OTYPE_ARRAY, 0x19, 0, "RTR val_5", SDO8004}, //RTR val_5
	{0x8005, OTYPE_ARRAY, 0x19, 0, "RTR val_6", SDO8005}, //RTR val_6
	{0x8006, OTYPE_ARRAY, 0x19, 0, "RTR val_7", SDO8006}, //RTR val_7
	{0x8007, OTYPE_ARRAY, 0x19, 0, "RTR val_8", SDO8007}, //RTR val_8
	{0x8008, OTYPE_ARRAY, 0x19, 0, "RTR val_9", SDO8008}, //RTR val_9
	{0x8009, OTYPE_ARRAY, 0x19, 0, "RTR val_10", SDO8009}, //RTR val_10
	{0x800A, OTYPE_ARRAY, 0x19, 0, "RTR val_11", SDO800A}, //RTR val_11
	{0x800B, OTYPE_ARRAY, 0x19, 0, "RTR val_12", SDO800B}, //RTR val_12
	{0x800C, OTYPE_ARRAY, 1, 0, "IMU val_1", SDO800C}, //IMU val_1
	{0xffff, 0xff, 0xff, 0xff, NULL, NULL}
};
