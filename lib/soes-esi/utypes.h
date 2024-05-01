#ifndef __UTYPES_H__
#define __UTYPES_H__

/****************************************************************
 * Includes
 ****************************************************************/
#include "cc.h"


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
	/** TODO: rename the following fields (also in objectlist.c) */
	float val_2;
	float val_3;
	float val_4;
	float val_5;
	float val_6;
	float val_7;
	float val_8;
	float val_9;
	float val_10;
	float val_11;
	float val_12;
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
	/** TODO: rename the following fields (also in objectlist.c) */
	float val_1;
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
    struct rtd_t rtd[25]; //RTD sensor
    struct imu_t imu[1]; //IMU
    struct photo_t photo[4]; //Photo diode
    struct pyro_t pyro[2]; //Pyrometer
    struct led_t led[8]; //Led
    struct power_t power_24V[8]; //24V power supply
    struct power_t power_20V[8]; //20V power supply
    struct power_t power_5V[2]; //5V power supply
} _Objects;


/****************************************************************
 * Data
 ****************************************************************/
extern _Objects Obj;

#endif /* __UTYPES_H__ */
