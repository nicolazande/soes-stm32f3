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
  {0x0, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x00001389, NULL},
};

const _objd SDO1001[] =
{
  {0x0, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0, &Obj.Error_register},
};

const _objd SDO1008[] =
{
  {0x0, DTYPE_VISIBLE_STRING, 88, ATYPE_RO, acNameDefault, 0, "lan9252_spi"},
};

const _objd SDO1009[] =
{
  {0x0, DTYPE_VISIBLE_STRING, 24, ATYPE_RO, acNameDefault, 0, "1.0"},
};

const _objd SDO100A[] =
{
  {0x0, DTYPE_VISIBLE_STRING, 40, ATYPE_RO, acNameDefault, 0, "3.0.0"},
};

const _objd SDO1018[] =
{
  {0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 4, NULL},
  {0x01, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0xEE1, NULL},
  {0x02, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x00009252, NULL},
  {0x03, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 1, NULL},
  {0x04, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 1, NULL},
};

const _objd SDO10F1[] =
{
  {0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 2, NULL},
  {0x01, DTYPE_UNSIGNED32, 32, ATYPE_RW, acNameDefault, 0, &Obj.ErrorSettings.Local_Error_Reaction},
  {0x02, DTYPE_UNSIGNED16, 16, ATYPE_RW, acNameDefault, 4, &Obj.ErrorSettings.SyncErrorCounterLimit},
};

const _objd SDO10F8[] =
{
  {0x0, DTYPE_UNSIGNED64, 64, ATYPE_RW, acNameDefault, 0, NULL},
};

const _objd SDO1600[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x1A, NULL},
    {0x01, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70000108, NULL}, //LED state [0] RX
	{0x02, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70000208, NULL}, //LED state [1] RX
	{0x03, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70000308, NULL}, //LED state [2] RX
	{0x04, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70000408, NULL}, //LED state [3] RX
	{0x05, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70000508, NULL}, //LED state [4] RX
	{0x06, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70000608, NULL}, //LED state [5] RX
	{0x07, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70000708, NULL}, //LED state [6] RX
	{0x08, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70000808, NULL}, //LED state [7] RX
    {0x09, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70010108, NULL}, //24V power supply state [0] RX
	{0x0A, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70010208, NULL}, //24V power supply state [1] RX
	{0x0B, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70010308, NULL}, //24V power supply state [2] RX
	{0x0C, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70010408, NULL}, //24V power supply state [3] RX
	{0x0D, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70010508, NULL}, //24V power supply state [4] RX
	{0x0E, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70010608, NULL}, //24V power supply state [5] RX
	{0x0F, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70010708, NULL}, //24V power supply state [6] RX
	{0x10, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70010808, NULL}, //24V power supply state [7] RX
    {0x11, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70020108, NULL}, //20V power supply state [0] RX
	{0x12, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70020208, NULL}, //20V power supply state [1] RX
	{0x13, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70020308, NULL}, //20V power supply state [2] RX
	{0x14, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70020408, NULL}, //20V power supply state [3] RX
	{0x15, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70020508, NULL}, //20V power supply state [4] RX
	{0x16, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70020608, NULL}, //20V power supply state [5] RX
	{0x17, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70020708, NULL}, //20V power supply state [6] RX
	{0x18, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70020808, NULL}, //20V power supply state [7] RX
    {0x19, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70030108, NULL}, //5V power supply state [0] RX
	{0x1A, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x70030208, NULL}, //5V power supply state [1] RX
};

const _objd SDO1A00[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 0x58, NULL},
	{0x01, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000120, NULL}, //RTD temperature [0]
	{0x02, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000220, NULL}, //RTD temperature [1]
	{0x03, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000320, NULL}, //RTD temperature [2]
	{0x04, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000420, NULL}, //RTD temperature [3]
	{0x05, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000520, NULL}, //RTD temperature [4]
	{0x06, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000620, NULL}, //RTD temperature [5]
	{0x07, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000720, NULL}, //RTD temperature [6]
	{0x08, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000820, NULL}, //RTD temperature [7]
	{0x09, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000920, NULL}, //RTD temperature [8]
	{0x0A, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000A20, NULL}, //RTD temperature [9]
	{0x0B, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000B20, NULL}, //RTD temperature [10]
	{0x0C, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000C20, NULL}, //RTD temperature [11]
	{0x0D, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000D20, NULL}, //RTD temperature [12]
	{0x0E, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000E20, NULL}, //RTD temperature [13]
	{0x0F, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60000F20, NULL}, //RTD temperature [14]
	{0x10, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60001020, NULL}, //RTD temperature [15]
	{0x11, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60001120, NULL}, //RTD temperature [16]
	{0x12, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60001220, NULL}, //RTD temperature [17]
	{0x13, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60001320, NULL}, //RTD temperature [18]
	{0x14, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60001420, NULL}, //RTD temperature [19]
	{0x15, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60001520, NULL}, //RTD temperature [20]
	{0x16, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60001620, NULL}, //RTD temperature [21]
	{0x17, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60001720, NULL}, //RTD temperature [22]
	{0x18, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60001820, NULL}, //RTD temperature [23]
	{0x19, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60001920, NULL}, //RTD temperature [24]
	{0x1A, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010110, NULL}, //RTD fault status [0]
	{0x1B, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010210, NULL}, //RTD fault status [1]
	{0x1C, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010310, NULL}, //RTD fault status [2]
	{0x1D, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010410, NULL}, //RTD fault status [3]
	{0x1E, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010510, NULL}, //RTD fault status [4]
	{0x1F, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010610, NULL}, //RTD fault status [5]
    {0x20, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010710, NULL}, //RTD fault status [6]
    {0x21, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010810, NULL}, //RTD fault status [7]
    {0x22, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010910, NULL}, //RTD fault status [8]
    {0x23, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010A10, NULL}, //RTD fault status [9]
    {0x24, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010B10, NULL}, //RTD fault status [10]
    {0x25, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010C10, NULL}, //RTD fault status [11]
    {0x26, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010D10, NULL}, //RTD fault status [12]
    {0x27, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010E10, NULL}, //RTD fault status [13]
    {0x28, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60010F10, NULL}, //RTD fault status [14]
    {0x29, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60011010, NULL}, //RTD fault status [15]
    {0x2A, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60011110, NULL}, //RTD fault status [16]
    {0x2B, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60011210, NULL}, //RTD fault status [17]
    {0x2C, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60011310, NULL}, //RTD fault status [18]
    {0x2D, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60011410, NULL}, //RTD fault status [19]
    {0x2E, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60011510, NULL}, //RTD fault status [20]
    {0x2F, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60011610, NULL}, //RTD fault status [21]
    {0x30, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60011710, NULL}, //RTD fault status [22]
    {0x31, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60011810, NULL}, //RTD fault status [23]
    {0x32, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60011910, NULL}, //RTD fault status [24]
    {0x33, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60020120, NULL}, //IMU ax [0]
	{0x34, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60030120, NULL}, //IMU ay [0]
	{0x35, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60040120, NULL}, //IMU az [0]
	{0x36, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60050120, NULL}, //IMU wx [0]
	{0x37, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60060120, NULL}, //IMU wx [0]
	{0x38, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60070120, NULL}, //IMU wz [0]
    {0x39, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60080110, NULL}, //Photo millivolts [0]
	{0x3A, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60080210, NULL}, //Photo millivolts [1]
	{0x3B, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60080310, NULL}, //Photo millivolts [2]
	{0x3C, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60080410, NULL}, //Photo millivolts [3]
    {0x3D, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60090120, NULL}, //Pyrometer temperature [0]
	{0x3E, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x60090220, NULL}, //Pyrometer temperature [1]
	{0x3F, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600A0108, NULL}, //LED state [0] TX
	{0x40, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600A0208, NULL}, //LED state [1] TX
	{0x41, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600A0308, NULL}, //LED state [2] TX
	{0x42, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600A0408, NULL}, //LED state [3] TX
	{0x43, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600A0508, NULL}, //LED state [4] TX
	{0x44, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600A0608, NULL}, //LED state [5] TX
	{0x45, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600A0708, NULL}, //LED state [6] TX
	{0x46, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600A0808, NULL}, //LED state [7] TX
	{0x47, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600B0108, NULL}, //24V power supply state [0] TX
	{0x48, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600B0208, NULL}, //24V power supply state [1] TX
	{0x49, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600B0308, NULL}, //24V power supply state [2] TX
	{0x4A, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600B0408, NULL}, //24V power supply state [3] TX
	{0x4B, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600B0508, NULL}, //24V power supply state [4] TX
	{0x4C, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600B0608, NULL}, //24V power supply state [5] TX
	{0x4D, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600B0708, NULL}, //24V power supply state [6] TX
	{0x4E, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600B0808, NULL}, //24V power supply state [7] TX
	{0x4F, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600C0108, NULL}, //20V power supply state [0] TX
	{0x50, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600C0208, NULL}, //20V power supply state [1] TX
	{0x51, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600C0308, NULL}, //20V power supply state [2] TX
	{0x52, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600C0408, NULL}, //20V power supply state [3] TX
	{0x53, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600C0508, NULL}, //20V power supply state [4] TX
	{0x54, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600C0608, NULL}, //20V power supply state [5] TX
	{0x55, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600C0708, NULL}, //20V power supply state [6] TX
	{0x56, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600C0808, NULL}, //20V power supply state [7] TX
	{0x57, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600D0108, NULL}, //5V power supply state [0] TX
	{0x58, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0x600D0208, NULL}, //5V power supply state [1] TX
};

const _objd SDO1C00[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 4, NULL},
	{0x01, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 1, NULL},
	{0x02, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 2, NULL},
	{0x03, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 3, NULL},
	{0x04, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 4, NULL},
};

const _objd SDO1C12[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 1, NULL},
	{0x01, DTYPE_UNSIGNED16, 16, ATYPE_RO, acNameDefault, 0x1600, NULL}, //SM2 to RXPDO 0x1600 mapping
};

const _objd SDO1C13[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 1, NULL},
	{0x01, DTYPE_UNSIGNED16, 16, ATYPE_RO, acNameDefault, 0x1A00, NULL}, //SM3 to TXPDO 0x1A00 mapping
};

const _objd SDO1C32[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 32, NULL},
	{0x01, DTYPE_UNSIGNED16, 16, ATYPE_RWpre, acNameDefault, 1, &Obj.Sync_Manager_2_Parameters.Sync_mode},
	{0x02, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_2_Parameters.CycleTime},
	{0x03, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_2_Parameters.ShiftTime},
	{0x04, DTYPE_UNSIGNED16, 16, ATYPE_RO, acNameDefault, 6, &Obj.Sync_Manager_2_Parameters.Sync_modes_supported},
	{0x05, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 1000000, &Obj.Sync_Manager_2_Parameters.Minimum_Cycle_Time},
	{0x06, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_2_Parameters.Calc_and_Copy_Time},
	{0x07, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_2_Parameters.Minimum_Delay_Time},
	{0x08, DTYPE_UNSIGNED16, 16, ATYPE_RW, acNameDefault, 0, &Obj.Sync_Manager_2_Parameters.GetCycleTime},
	{0x09, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_2_Parameters.DelayTime},
	{0x0A, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_2_Parameters.Sync0CycleTime},
	{0x0B, DTYPE_UNSIGNED16, 16, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_2_Parameters.SM_event_missed_counter},
	{0x0C, DTYPE_UNSIGNED16, 16, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_2_Parameters.CycleTimeTooSmallCnt},
	{0x0D, DTYPE_UNSIGNED16, 16, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_2_Parameters.Shift_too_short_counter},
	{0x0E, DTYPE_UNSIGNED16, 16, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_2_Parameters.RxPDOToggleFailed},
	{0x0F, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_2_Parameters.Minimum_Cycle_Distance},
	{0x10, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_2_Parameters.Maximum_Cycle_Distance},
	{0x11, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_2_Parameters.Minimum_SM_Sync_Distance},
	{0x12, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_2_Parameters.Maximum_SM_Sync_Distance},
	{0x13, 0, 0},
	{0x14, 0, 0},
	{0x15, 0, 0},
	{0x16, 0, 0},
	{0x17, 0, 0},
	{0x18, 0, 0},
	{0x19, 0, 0},
	{0x1A, 0, 0},
	{0x1B, 0, 0},
	{0x1C, 0, 0},
	{0x1D, 0, 0},
	{0x1E, 0, 0},
	{0x1F, 0, 0},
	{0x20, DTYPE_BOOLEAN, 1, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_2_Parameters.SyncError},
};

const _objd SDO1C33[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 32, NULL},
	{0x01, DTYPE_UNSIGNED16, 16, ATYPE_RWpre, acNameDefault, 1, &Obj.Sync_Manager_3_Parameters.Sync_mode},
	{0x02, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_3_Parameters.CycleTime},
	{0x03, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_3_Parameters.ShiftTime},
	{0x04, DTYPE_UNSIGNED16, 16, ATYPE_RO, acNameDefault, 6, &Obj.Sync_Manager_3_Parameters.Sync_modes_supported},
	{0x05, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 1000000, &Obj.Sync_Manager_3_Parameters.Minimum_Cycle_Time},
	{0x06, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_3_Parameters.Calc_and_Copy_Time},
	{0x07, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_3_Parameters.Minimum_Delay_Time},
	{0x08, DTYPE_UNSIGNED16, 16, ATYPE_RW, acNameDefault, 0, &Obj.Sync_Manager_3_Parameters.GetCycleTime},
	{0x09, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_3_Parameters.DelayTime},
	{0x0A, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_3_Parameters.Sync0CycleTime},
	{0x0B, DTYPE_UNSIGNED16, 16, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_3_Parameters.SM_event_missed_counter},
	{0x0C, DTYPE_UNSIGNED16, 16, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_3_Parameters.CycleTimeTooSmallCnt},
	{0x0D, DTYPE_UNSIGNED16, 16, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_3_Parameters.Shift_too_short_counter},
	{0x0E, DTYPE_UNSIGNED16, 16, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_3_Parameters.RxPDOToggleFailed},
	{0x0F, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_3_Parameters.Minimum_Cycle_Distance},
	{0x10, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_3_Parameters.Maximum_Cycle_Distance},
	{0x11, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_3_Parameters.Minimum_SM_Sync_Distance},
	{0x12, DTYPE_UNSIGNED32, 32, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_3_Parameters.Maximum_SM_Sync_Distance},
	{0x13, 0, 0},
	{0x14, 0, 0},
	{0x15, 0, 0},
	{0x16, 0, 0},
	{0x17, 0, 0},
	{0x18, 0, 0},
	{0x19, 0, 0},
	{0x1A, 0, 0},
	{0x1B, 0, 0},
	{0x1C, 0, 0},
	{0x1D, 0, 0},
	{0x1E, 0, 0},
	{0x1F, 0, 0},
	{0x20, DTYPE_BOOLEAN, 1, ATYPE_RO, acNameDefault, 0, &Obj.Sync_Manager_3_Parameters.SyncError},
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

const _objd SDO6002[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 1, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.imu[0].ax}
};

const _objd SDO6003[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 1, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.imu[0].ay}
};

const _objd SDO6004[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 1, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.imu[0].az}
};

const _objd SDO6005[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 1, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.imu[0].wx}
};

const _objd SDO6006[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 1, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.imu[0].wy}
};

const _objd SDO6007[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 1, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.imu[0].wz}
};

const _objd SDO6008[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 4, NULL},
	{0x01, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.photo[0].millivolts},
	{0x02, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.photo[1].millivolts},
	{0x03, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.photo[2].millivolts},
	{0x04, DTYPE_UNSIGNED16, 16, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.photo[3].millivolts},
};

const _objd SDO6009[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 2, NULL},
	{0x01, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.pyro[0].temperature},
	{0x02, DTYPE_REAL32, 32, ATYPE_RO | ATYPE_TXPDO, acNameDefault, 0, &Obj.pyro[1].temperature}
};

const _objd SDO600A[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 8, NULL},
	{0x01, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.led[0].state},
	{0x02, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.led[1].state},
	{0x03, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.led[2].state},
	{0x04, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.led[3].state},
	{0x05, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.led[4].state},
	{0x06, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.led[5].state},
	{0x07, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.led[6].state},
	{0x08, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.led[7].state}
};

const _objd SDO600B[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 8, NULL},
	{0x01, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.power_24V[0].state},
	{0x02, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.power_24V[1].state},
	{0x03, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.power_24V[2].state},
	{0x04, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.power_24V[3].state},
	{0x05, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.power_24V[4].state},
	{0x06, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.power_24V[5].state},
	{0x07, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.power_24V[6].state},
	{0x08, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.power_24V[7].state}
};

const _objd SDO600C[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 8, NULL},
	{0x01, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.power_20V[0].state},
	{0x02, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.power_20V[1].state},
	{0x03, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.power_20V[2].state},
	{0x04, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.power_20V[3].state},
	{0x05, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.power_20V[4].state},
	{0x06, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.power_20V[5].state},
	{0x07, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.power_20V[6].state},
	{0x08, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.power_20V[7].state}
};

const _objd SDO600D[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 2, NULL},
	{0x01, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.power_5V[0].state},
	{0x02, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_TXPDO, acNameDefault, 0, &Obj.power_5V[1].state},
};

const _objd SDO7000[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 8, NULL},
	{0x01, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_RXPDO, acNameDefault, 0, &Obj.led[0].state},
	{0x02, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_RXPDO, acNameDefault, 0, &Obj.led[1].state},
	{0x03, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_RXPDO, acNameDefault, 0, &Obj.led[2].state},
	{0x04, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_RXPDO, acNameDefault, 0, &Obj.led[3].state},
	{0x05, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_RXPDO, acNameDefault, 0, &Obj.led[4].state},
	{0x06, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_RXPDO, acNameDefault, 0, &Obj.led[5].state},
	{0x07, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_RXPDO, acNameDefault, 0, &Obj.led[6].state},
	{0x08, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_RXPDO, acNameDefault, 0, &Obj.led[7].state}
};

const _objd SDO7001[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 8, NULL},
	{0x01, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_24V[0].state},
	{0x02, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_24V[1].state},
	{0x03, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_24V[2].state},
	{0x04, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_24V[3].state},
	{0x05, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_24V[4].state},
	{0x06, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_24V[5].state},
	{0x07, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_24V[6].state},
	{0x08, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_24V[7].state}
};

const _objd SDO7002[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 8, NULL},
	{0x01, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_20V[0].state},
	{0x02, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_20V[1].state},
	{0x03, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_20V[2].state},
	{0x04, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_20V[3].state},
	{0x05, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_20V[4].state},
	{0x06, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_20V[5].state},
	{0x07, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_20V[6].state},
	{0x08, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_20V[7].state}
};

const _objd SDO7003[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 2, NULL},
	{0x01, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_5V[0].state},
	{0x02, DTYPE_UNSIGNED8, 8, ATYPE_RW | ATYPE_RXPDO, acNameDefault, 0, &Obj.power_5V[1].state},
};

const _objd SDO8000[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 1, NULL},
	{0x01, DTYPE_UNSIGNED8, 8, ATYPE_RW, acNameDefault, 0, &Obj.rtd_filter},
};

const _objd SDO8001[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 1, NULL},
	{0x01, DTYPE_UNSIGNED16, 16, ATYPE_RW, acNameDefault, 0, &Obj.rtd_high_thresh},
};

const _objd SDO8002[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 1, NULL},
	{0x01, DTYPE_UNSIGNED16, 16, ATYPE_RW, acNameDefault, 0, &Obj.rtd_low_thresh},
};

const _objd SDO8003[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 1, NULL},
	{0x01, DTYPE_UNSIGNED8, 8, ATYPE_RW, acNameDefault, 0, &Obj.imu_odr},
};

const _objd SDO8004[] =
{
	{0x00, DTYPE_UNSIGNED8, 8, ATYPE_RO, acNameDefault, 1, NULL},
	{0x01, DTYPE_UNSIGNED8, 8, ATYPE_RW, acNameDefault, 0, &Obj.imu_full_scale},
};


/****************************************************************
 * Object dictionary list
 ****************************************************************/

const _objectlist SDOobjects[] =
{
	{0x1000, OTYPE_VAR, 0, 0, "Device Type", SDO1000},
	{0x1001, OTYPE_VAR, 0, 0, "Error register", SDO1001},
	{0x1008, OTYPE_VAR, 0, 0, "Device Name", SDO1008},
	{0x1009, OTYPE_VAR, 0, 0, "Hardware Version", SDO1009},
	{0x100A, OTYPE_VAR, 0, 0, "Software Version", SDO100A},
	{0x1018, OTYPE_RECORD, 4, 0, "Identity Object", SDO1018},
	{0x10F1, OTYPE_RECORD, 2, 0, "ErrorSettings", SDO10F1},
	{0x10F8, OTYPE_VAR, 0, 0, "Timestamp Object", SDO10F8},
	{0x1600, OTYPE_RECORD, 0x1A, 0, "0x1600 PDO", SDO1600},
	{0x1A00, OTYPE_RECORD, 0x58, 0, "0x1A00 PDO", SDO1A00},
	{0x1C00, OTYPE_ARRAY, 4, 0, "Sync Manager Communication Type", SDO1C00},
	{0x1C12, OTYPE_ARRAY, 1, 0, "Sync Manager 2 PDO Assignment", SDO1C12}, //SM2 to RXPDO mapping
	{0x1C13, OTYPE_ARRAY, 1, 0, "Sync Manager 3 PDO Assignment", SDO1C13}, //SM3 to TXPDO mapping
	{0x1C32, OTYPE_RECORD, 0x20, 0, "Sync Manager 2 Parameters", SDO1C32},
	{0x1C33, OTYPE_RECORD, 0x20, 0, "Sync Manager 3 Parameters", SDO1C33},
	{0x6000, OTYPE_RECORD, 0x19, 0, "RTD temperature", SDO6000}, //RTD temperature
	{0x6001, OTYPE_RECORD, 0x19, 0, "RTD fault status", SDO6001}, //RTD fault status
	{0x6002, OTYPE_RECORD, 1, 0, "IMU ax", SDO6002}, //IMU ax
	{0x6003, OTYPE_RECORD, 1, 0, "IMU ay", SDO6003}, //IMU ay
	{0x6004, OTYPE_RECORD, 1, 0, "IMU az", SDO6004}, //IMU az
	{0x6005, OTYPE_RECORD, 1, 0, "IMU wx", SDO6005}, //IMU wx
	{0x6006, OTYPE_RECORD, 1, 0, "IMU wy", SDO6006}, //IMU wy
	{0x6007, OTYPE_RECORD, 1, 0, "IMU wz", SDO6007}, //IMU wz
	{0x6008, OTYPE_RECORD, 4, 0, "Photo millivolts", SDO6008}, //Photo millivolts
	{0x6009, OTYPE_RECORD, 2, 0, "Pyro temperature", SDO6009}, //Pyro temperature
	{0x600A, OTYPE_RECORD, 8, 0, "LED state TX", SDO600A}, //LED state TX
	{0x600B, OTYPE_RECORD, 8, 0, "Power 24V state TX", SDO600B}, //Power 24V state TX
	{0x600C, OTYPE_RECORD, 8, 0, "Power 20V state TX", SDO600C}, //Power 20V state TX
	{0x600D, OTYPE_RECORD, 2, 0, "Power 5V state TX", SDO600D}, //Power 5V state TX
	{0x7000, OTYPE_RECORD, 8, 0, "LED state RX", SDO7000}, //LED state RX
	{0x7001, OTYPE_RECORD, 8, 0, "Power 24V state RX", SDO7001}, //Power 24V state RX
	{0x7002, OTYPE_RECORD, 8, 0, "Power 20V state RX", SDO7002}, //Power 20V state RX
	{0x7003, OTYPE_RECORD, 2, 0, "Power 5V state RX", SDO7003}, //Power 5V state RX
	{0x8000, OTYPE_RECORD, 1, 0, "RTD 50/60 Hz Filter", SDO8000}, //RTD filter
	{0x8001, OTYPE_RECORD, 1, 0, "RTD High Threshold", SDO8001}, //RTD High Threshold
	{0x8002, OTYPE_RECORD, 1, 0, "RTD Low Threshold", SDO8002}, //RTD Low Threshold
	{0x8003, OTYPE_RECORD, 1, 0, "IMU Data Rate", SDO8003}, //IMU odr
	{0x8004, OTYPE_RECORD, 1, 0, "IMU Full Scale", SDO8004}, //IMU Resolution
	{0xffff, 0xff, 0xff, 0xff, NULL, NULL}
};
