#ifndef __UTYPES_H__
#define __UTYPES_H__

/****************************************************************
 * Includes
 ****************************************************************/
#include "cc.h"


/****************************************************************
 * Defines
 ****************************************************************/
#define EC_NUM_RTR (25U)   //number of associated RTDs
#define EC_NUM_IMU (1U)    //number of associated IMUs
#define EC_NUM_PHOTO (1U)  //number of associated photo diodes
#define EC_NUM_PYRO (1U)   //number of associated pyrometers




/****************************************************************
 * Custom data
 ****************************************************************/
/** RTD sensor data */
struct rtd_t
{
	float temperature;
	uint16_t high_fault;
	uint16_t low_fault;
	uint16_t fault_status;
	uint8_t filter;
};

/** IMU data */
struct imu_t
{
	float ax;
	float ay;
	float az;
	float wx;
	float wy;
	float wz;
};

/** photo diode data */
struct photo_t
{
	uint16_t millivolts;
};

/** pyrometer data */
struct pyro_t
{
	float temperature;
};

/** led data */
struct led_t
{
	uint8_t state;
};

/** power supply data */
struct power_t
{
	uint8_t state;
};


/****************************************************************
 * Object dictionary
 ****************************************************************/
/** object dictionary storage */
typedef struct
{
	/** custom data */
    struct rtd_t rtd[EC_NUM_RTR]; //RTD sensor
    struct imu_t imu[EC_NUM_IMU]; //IMU
    struct photo_t photo[EC_NUM_PHOTO]; //Photo diode
    struct pyro_t pyro[2]; //Pyrometer
    struct led_t led[8]; //Led
    struct power_t power_24V[8]; //24V power supply
    struct power_t power_20V[8]; //20V power supply
    struct power_t power_5V[2]; //5V power supply
    /** standard data */
    uint8_t Error_register;
    struct
    {
        uint32_t Local_Error_Reaction;
        uint16_t SyncErrorCounterLimit;
    } ErrorSettings;
    struct
    {
        uint16_t Sync_mode;
        uint32_t CycleTime;
        uint32_t ShiftTime;
        uint16_t Sync_modes_supported;
        uint32_t Minimum_Cycle_Time;
        uint32_t Calc_and_Copy_Time;
        uint32_t Minimum_Delay_Time;
        uint16_t GetCycleTime;
        uint32_t DelayTime;
        uint32_t Sync0CycleTime;
        uint16_t SM_event_missed_counter;
        uint16_t CycleTimeTooSmallCnt;
        uint16_t Shift_too_short_counter;
        uint16_t RxPDOToggleFailed;
        uint32_t Minimum_Cycle_Distance;
        uint32_t Maximum_Cycle_Distance;
        uint32_t Minimum_SM_Sync_Distance;
        uint32_t Maximum_SM_Sync_Distance;
        uint8_t SyncError;
    } Sync_Manager_2_Parameters;
    struct
    {
        uint16_t Sync_mode;
        uint32_t CycleTime;
        uint32_t ShiftTime;
        uint16_t Sync_modes_supported;
        uint32_t Minimum_Cycle_Time;
        uint32_t Calc_and_Copy_Time;
        uint32_t Minimum_Delay_Time;
        uint16_t GetCycleTime;
        uint32_t DelayTime;
        uint32_t Sync0CycleTime;
        uint16_t SM_event_missed_counter;
        uint16_t CycleTimeTooSmallCnt;
        uint16_t Shift_too_short_counter;
        uint16_t RxPDOToggleFailed;
        uint32_t Minimum_Cycle_Distance;
        uint32_t Maximum_Cycle_Distance;
        uint32_t Minimum_SM_Sync_Distance;
        uint32_t Maximum_SM_Sync_Distance;
        uint8_t SyncError;
    } Sync_Manager_3_Parameters;
} _Objects;


/****************************************************************
 * Data
 ****************************************************************/
extern _Objects Obj;

#endif /* __UTYPES_H__ */
