#ifndef CONFIG_H_INCLUDED
#define CONFIG_H_INCLUDED

/**************************************
* Data logging/streaming out
**************************************/
#define ENABLE_DATA_OUT 0
#define STREAM_BAUDRATE 115200
#define STREAM_FORMAT FORMAT_TEXT
#define ENABLE_DATA_CACHE 1
#define MAX_CACHE_SIZE 256
#define USE_FRIENDLY_PID_NAME 1

/**************************************
* GPRS/network settings
**************************************/
#define APN "connect"
#define HOST_URL "http://live.freematics.com.au"

/**************************************
* MEMS sensors
**************************************/
#define USE_MPU6050 1
#define ACC_DATA_RATIO 172
#define GYRO_DATA_RATIO 256
#define COMPASS_DATA_RATIO 8

/**************************************
* GPS
**************************************/
#define USE_GPS 1
#define GPS_SERIAL_BAUDRATE 115200L

/**************************************
* Other options
**************************************/
#define OBD_CONN_TIMEOUT 5000 /* ms */
#define MAX_CONN_ERRORS 3
#define MAX_CONN_TIME 10000 /* ms */

#define SD_CS_PIN 10

#endif // CONFIG_H_INCLUDED
