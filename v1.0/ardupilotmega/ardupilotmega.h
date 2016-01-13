/** @file
 *	@brief MAVLink comm protocol generated from ardupilotmega.xml
 *	@see http://mavlink.org
 */
#ifndef MAVLINK_ARDUPILOTMEGA_H
#define MAVLINK_ARDUPILOTMEGA_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_ARDUPILOTMEGA.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 8, 4, 12, 15, 13, 6, 15, 14, 0, 12, 3, 8, 28, 44, 3, 9, 22, 12, 18, 34, 66, 98, 8, 48, 19, 3, 20, 24, 29, 45, 4, 40, 2, 206, 7, 29, 0, 0, 0, 0, 27, 44, 22, 25, 0, 0, 0, 0, 0, 42, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 3, 3, 6, 7, 2, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 219, 208, 188, 84, 22, 19, 21, 134, 0, 78, 68, 189, 127, 154, 21, 21, 144, 1, 234, 73, 181, 22, 83, 167, 138, 234, 240, 47, 189, 52, 174, 229, 85, 159, 186, 72, 0, 0, 0, 0, 92, 36, 71, 98, 0, 0, 0, 0, 0, 134, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 101, 50, 202, 17, 162, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#endif

#ifndef MAVLINK_MESSAGE_INFO
#define MAVLINK_MESSAGE_INFO {{"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_SENSOR_OFFSETS, MAVLINK_MESSAGE_INFO_SET_MAG_OFFSETS, MAVLINK_MESSAGE_INFO_MEMINFO, MAVLINK_MESSAGE_INFO_AP_ADC, MAVLINK_MESSAGE_INFO_DIGICAM_CONFIGURE, MAVLINK_MESSAGE_INFO_DIGICAM_CONTROL, MAVLINK_MESSAGE_INFO_MOUNT_CONFIGURE, MAVLINK_MESSAGE_INFO_MOUNT_CONTROL, MAVLINK_MESSAGE_INFO_MOUNT_STATUS, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_FENCE_POINT, MAVLINK_MESSAGE_INFO_FENCE_FETCH_POINT, MAVLINK_MESSAGE_INFO_FENCE_STATUS, MAVLINK_MESSAGE_INFO_AHRS, MAVLINK_MESSAGE_INFO_SIMSTATE, MAVLINK_MESSAGE_INFO_HWSTATUS, MAVLINK_MESSAGE_INFO_RADIO, MAVLINK_MESSAGE_INFO_LIMITS_STATUS, MAVLINK_MESSAGE_INFO_WIND, MAVLINK_MESSAGE_INFO_DATA16, MAVLINK_MESSAGE_INFO_DATA32, MAVLINK_MESSAGE_INFO_DATA64, MAVLINK_MESSAGE_INFO_DATA96, MAVLINK_MESSAGE_INFO_RANGEFINDER, MAVLINK_MESSAGE_INFO_AIRSPEED_AUTOCAL, MAVLINK_MESSAGE_INFO_RALLY_POINT, MAVLINK_MESSAGE_INFO_RALLY_FETCH_POINT, MAVLINK_MESSAGE_INFO_COMPASSMOT_STATUS, MAVLINK_MESSAGE_INFO_AHRS2, MAVLINK_MESSAGE_INFO_CAMERA_STATUS, MAVLINK_MESSAGE_INFO_CAMERA_FEEDBACK, MAVLINK_MESSAGE_INFO_BATTERY2, MAVLINK_MESSAGE_INFO_AHRS3, MAVLINK_MESSAGE_INFO_AUTOPILOT_VERSION_REQUEST, MAVLINK_MESSAGE_INFO_REMOTE_LOG_DATA_BLOCK, MAVLINK_MESSAGE_INFO_REMOTE_LOG_BLOCK_STATUS, MAVLINK_MESSAGE_INFO_LED_CONTROL, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_MAG_CAL_PROGRESS, MAVLINK_MESSAGE_INFO_MAG_CAL_REPORT, MAVLINK_MESSAGE_INFO_EKF_STATUS_REPORT, MAVLINK_MESSAGE_INFO_PID_TUNING, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_GIMBAL_REPORT, MAVLINK_MESSAGE_INFO_GIMBAL_CONTROL, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_GIMBAL_TORQUE_CMD_REPORT, MAVLINK_MESSAGE_INFO_GOPRO_HEARTBEAT, MAVLINK_MESSAGE_INFO_GOPRO_GET_REQUEST, MAVLINK_MESSAGE_INFO_GOPRO_GET_RESPONSE, MAVLINK_MESSAGE_INFO_GOPRO_SET_REQUEST, MAVLINK_MESSAGE_INFO_GOPRO_SET_RESPONSE, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_RPM, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_ARDUPILOTMEGA

// ENUM DEFINITIONS


/** @brief  */
#ifndef HAVE_ENUM_MAV_CMD
#define HAVE_ENUM_MAV_CMD
typedef enum MAV_CMD
{
	MAV_CMD_NAV_ALTITUDE_WAIT=83, /* Mission command to wait for an altitude or downwards vertical speed. This is meant for high altitude balloon launches, allowing the aircraft to be idle until either an altitude is reached or a negative vertical speed is reached (indicating early balloon burst). The wiggle time is how often to wiggle the control surfaces to prevent them seizing up. |altitude (m)| descent speed (m/s)| Wiggle Time (s)| Empty| Empty| Empty| Empty|  */
	MAV_CMD_DO_MOTOR_TEST=209, /* Mission command to perform motor test |motor sequence number (a number from 1 to max number of motors on the vehicle)| throttle type (0=throttle percentage, 1=PWM, 2=pilot throttle channel pass-through. See MOTOR_TEST_THROTTLE_TYPE enum)| throttle| timeout (in seconds)| Empty| Empty| Empty|  */
	MAV_CMD_DO_GRIPPER=211, /* Mission command to operate EPM gripper |gripper number (a number from 1 to max number of grippers on the vehicle)| gripper action (0=release, 1=grab. See GRIPPER_ACTIONS enum)| Empty| Empty| Empty| Empty| Empty|  */
	MAV_CMD_DO_AUTOTUNE_ENABLE=212, /* Enable/disable autotune |enable (1: enable, 0:disable)| Empty| Empty| Empty| Empty| Empty| Empty|  */
	MAV_CMD_POWER_OFF_INITIATED=42000, /* A system wide power-off event has been initiated. |Empty| Empty| Empty| Empty| Empty| Empty| Empty|  */
	MAV_CMD_SOLO_BTN_FLY_CLICK=42001, /* FLY button has been clicked. |Empty| Empty| Empty| Empty| Empty| Empty| Empty|  */
	MAV_CMD_SOLO_BTN_FLY_HOLD=42002, /* FLY button has been held for 1.5 seconds. |Takeoff altitude| Empty| Empty| Empty| Empty| Empty| Empty|  */
	MAV_CMD_SOLO_BTN_PAUSE_CLICK=42003, /* PAUSE button has been clicked. |1 if Solo is in a shot mode, 0 otherwise| Empty| Empty| Empty| Empty| Empty| Empty|  */
	MAV_CMD_DO_START_MAG_CAL=42424, /* Initiate a magnetometer calibration |uint8_t bitmask of magnetometers (0 means all)| Automatically retry on failure (0=no retry, 1=retry).| Save without user input (0=require input, 1=autosave).| Delay (seconds)| Autoreboot (0=user reboot, 1=autoreboot)| Empty| Empty|  */
	MAV_CMD_DO_ACCEPT_MAG_CAL=42425, /* Initiate a magnetometer calibration |uint8_t bitmask of magnetometers (0 means all)| Empty| Empty| Empty| Empty| Empty| Empty|  */
	MAV_CMD_DO_CANCEL_MAG_CAL=42426, /* Cancel a running magnetometer calibration |uint8_t bitmask of magnetometers (0 means all)| Empty| Empty| Empty| Empty| Empty| Empty|  */
	MAV_CMD_SET_FACTORY_TEST_MODE=42427, /* Command autopilot to get into factory test/diagnostic mode |0 means get out of test mode, 1 means get into test mode| Empty| Empty| Empty| Empty| Empty| Empty|  */
	MAV_CMD_DO_SEND_BANNER=42428, /* Reply with the version banner |Empty| Empty| Empty| Empty| Empty| Empty| Empty|  */
	MAV_CMD_GIMBAL_RESET=42501, /* Causes the gimbal to reset and boot as if it was just powered on |Empty| Empty| Empty| Empty| Empty| Empty| Empty|  */
	MAV_CMD_GIMBAL_AXIS_CALIBRATION_STATUS=42502, /* Reports progress and success or failure of gimbal axis calibration procedure |Gimbal axis we're reporting calibration progress for| Current calibration progress for this axis, 0x64=100%| Status of the calibration| Empty| Empty| Empty| Empty|  */
	MAV_CMD_GIMBAL_REQUEST_AXIS_CALIBRATION=42503, /* Starts commutation calibration on the gimbal |Empty| Empty| Empty| Empty| Empty| Empty| Empty|  */
	MAV_CMD_GIMBAL_FULL_RESET=42505, /* Erases gimbal application and parameters |Magic number| Magic number| Magic number| Magic number| Magic number| Magic number| Magic number|  */
	MAV_CMD_ENUM_END=42506, /*  | */
} MAV_CMD;
#endif

/** @brief  */
#ifndef HAVE_ENUM_LIMITS_STATE
#define HAVE_ENUM_LIMITS_STATE
typedef enum LIMITS_STATE
{
	LIMITS_INIT=0, /* pre-initialization | */
	LIMITS_DISABLED=1, /* disabled | */
	LIMITS_ENABLED=2, /* checking limits | */
	LIMITS_TRIGGERED=3, /* a limit has been breached | */
	LIMITS_RECOVERING=4, /* taking action eg. RTL | */
	LIMITS_RECOVERED=5, /* we're no longer in breach of a limit | */
	LIMITS_STATE_ENUM_END=6, /*  | */
} LIMITS_STATE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_LIMIT_MODULE
#define HAVE_ENUM_LIMIT_MODULE
typedef enum LIMIT_MODULE
{
	LIMIT_GPSLOCK=1, /* pre-initialization | */
	LIMIT_GEOFENCE=2, /* disabled | */
	LIMIT_ALTITUDE=4, /* checking limits | */
	LIMIT_MODULE_ENUM_END=5, /*  | */
} LIMIT_MODULE;
#endif

/** @brief Flags in RALLY_POINT message */
#ifndef HAVE_ENUM_RALLY_FLAGS
#define HAVE_ENUM_RALLY_FLAGS
typedef enum RALLY_FLAGS
{
	FAVORABLE_WIND=1, /* Flag set when requiring favorable winds for landing. | */
	LAND_IMMEDIATELY=2, /* Flag set when plane is to immediately descend to break altitude and land without GCS intervention. Flag not set when plane is to loiter at Rally point until commanded to land. | */
	RALLY_FLAGS_ENUM_END=3, /*  | */
} RALLY_FLAGS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_PARACHUTE_ACTION
#define HAVE_ENUM_PARACHUTE_ACTION
typedef enum PARACHUTE_ACTION
{
	PARACHUTE_DISABLE=0, /* Disable parachute release | */
	PARACHUTE_ENABLE=1, /* Enable parachute release | */
	PARACHUTE_RELEASE=2, /* Release parachute | */
	PARACHUTE_ACTION_ENUM_END=3, /*  | */
} PARACHUTE_ACTION;
#endif

/** @brief  */
#ifndef HAVE_ENUM_MOTOR_TEST_THROTTLE_TYPE
#define HAVE_ENUM_MOTOR_TEST_THROTTLE_TYPE
typedef enum MOTOR_TEST_THROTTLE_TYPE
{
	MOTOR_TEST_THROTTLE_PERCENT=0, /* throttle as a percentage from 0 ~ 100 | */
	MOTOR_TEST_THROTTLE_PWM=1, /* throttle as an absolute PWM value (normally in range of 1000~2000) | */
	MOTOR_TEST_THROTTLE_PILOT=2, /* throttle pass-through from pilot's transmitter | */
	MOTOR_TEST_THROTTLE_TYPE_ENUM_END=3, /*  | */
} MOTOR_TEST_THROTTLE_TYPE;
#endif

/** @brief Gripper actions. */
#ifndef HAVE_ENUM_GRIPPER_ACTIONS
#define HAVE_ENUM_GRIPPER_ACTIONS
typedef enum GRIPPER_ACTIONS
{
	GRIPPER_ACTION_RELEASE=0, /* gripper release of cargo | */
	GRIPPER_ACTION_GRAB=1, /* gripper grabs onto cargo | */
	GRIPPER_ACTIONS_ENUM_END=2, /*  | */
} GRIPPER_ACTIONS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_CAMERA_STATUS_TYPES
#define HAVE_ENUM_CAMERA_STATUS_TYPES
typedef enum CAMERA_STATUS_TYPES
{
	CAMERA_STATUS_TYPE_HEARTBEAT=0, /* Camera heartbeat, announce camera component ID at 1hz | */
	CAMERA_STATUS_TYPE_TRIGGER=1, /* Camera image triggered | */
	CAMERA_STATUS_TYPE_DISCONNECT=2, /* Camera connection lost | */
	CAMERA_STATUS_TYPE_ERROR=3, /* Camera unknown error | */
	CAMERA_STATUS_TYPE_LOWBATT=4, /* Camera battery low. Parameter p1 shows reported voltage | */
	CAMERA_STATUS_TYPE_LOWSTORE=5, /* Camera storage low. Parameter p1 shows reported shots remaining | */
	CAMERA_STATUS_TYPE_LOWSTOREV=6, /* Camera storage low. Parameter p1 shows reported video minutes remaining | */
	CAMERA_STATUS_TYPES_ENUM_END=7, /*  | */
} CAMERA_STATUS_TYPES;
#endif

/** @brief  */
#ifndef HAVE_ENUM_CAMERA_FEEDBACK_FLAGS
#define HAVE_ENUM_CAMERA_FEEDBACK_FLAGS
typedef enum CAMERA_FEEDBACK_FLAGS
{
	CAMERA_FEEDBACK_PHOTO=0, /* Shooting photos, not video | */
	CAMERA_FEEDBACK_VIDEO=1, /* Shooting video, not stills | */
	CAMERA_FEEDBACK_BADEXPOSURE=2, /* Unable to achieve requested exposure (e.g. shutter speed too low) | */
	CAMERA_FEEDBACK_CLOSEDLOOP=3, /* Closed loop feedback from camera, we know for sure it has successfully taken a picture | */
	CAMERA_FEEDBACK_OPENLOOP=4, /* Open loop camera, an image trigger has been requested but we can't know for sure it has successfully taken a picture | */
	CAMERA_FEEDBACK_FLAGS_ENUM_END=5, /*  | */
} CAMERA_FEEDBACK_FLAGS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_MAV_MODE_GIMBAL
#define HAVE_ENUM_MAV_MODE_GIMBAL
typedef enum MAV_MODE_GIMBAL
{
	MAV_MODE_GIMBAL_UNINITIALIZED=0, /* Gimbal is powered on but has not started initializing yet | */
	MAV_MODE_GIMBAL_CALIBRATING_PITCH=1, /* Gimbal is currently running calibration on the pitch axis | */
	MAV_MODE_GIMBAL_CALIBRATING_ROLL=2, /* Gimbal is currently running calibration on the roll axis | */
	MAV_MODE_GIMBAL_CALIBRATING_YAW=3, /* Gimbal is currently running calibration on the yaw axis | */
	MAV_MODE_GIMBAL_INITIALIZED=4, /* Gimbal has finished calibrating and initializing, but is relaxed pending reception of first rate command from copter | */
	MAV_MODE_GIMBAL_ACTIVE=5, /* Gimbal is actively stabilizing | */
	MAV_MODE_GIMBAL_RATE_CMD_TIMEOUT=6, /* Gimbal is relaxed because it missed more than 10 expected rate command messages in a row. Gimbal will move back to active mode when it receives a new rate command | */
	MAV_MODE_GIMBAL_ENUM_END=7, /*  | */
} MAV_MODE_GIMBAL;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GIMBAL_AXIS
#define HAVE_ENUM_GIMBAL_AXIS
typedef enum GIMBAL_AXIS
{
	GIMBAL_AXIS_YAW=0, /* Gimbal yaw axis | */
	GIMBAL_AXIS_PITCH=1, /* Gimbal pitch axis | */
	GIMBAL_AXIS_ROLL=2, /* Gimbal roll axis | */
	GIMBAL_AXIS_ENUM_END=3, /*  | */
} GIMBAL_AXIS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GIMBAL_AXIS_CALIBRATION_STATUS
#define HAVE_ENUM_GIMBAL_AXIS_CALIBRATION_STATUS
typedef enum GIMBAL_AXIS_CALIBRATION_STATUS
{
	GIMBAL_AXIS_CALIBRATION_STATUS_IN_PROGRESS=0, /* Axis calibration is in progress | */
	GIMBAL_AXIS_CALIBRATION_STATUS_SUCCEEDED=1, /* Axis calibration succeeded | */
	GIMBAL_AXIS_CALIBRATION_STATUS_FAILED=2, /* Axis calibration failed | */
	GIMBAL_AXIS_CALIBRATION_STATUS_ENUM_END=3, /*  | */
} GIMBAL_AXIS_CALIBRATION_STATUS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GIMBAL_AXIS_CALIBRATION_REQUIRED
#define HAVE_ENUM_GIMBAL_AXIS_CALIBRATION_REQUIRED
typedef enum GIMBAL_AXIS_CALIBRATION_REQUIRED
{
	GIMBAL_AXIS_CALIBRATION_REQUIRED_UNKNOWN=0, /* Whether or not this axis requires calibration is unknown at this time | */
	GIMBAL_AXIS_CALIBRATION_REQUIRED_TRUE=1, /* This axis requires calibration | */
	GIMBAL_AXIS_CALIBRATION_REQUIRED_FALSE=2, /* This axis does not require calibration | */
	GIMBAL_AXIS_CALIBRATION_REQUIRED_ENUM_END=3, /*  | */
} GIMBAL_AXIS_CALIBRATION_REQUIRED;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_HEARTBEAT_STATUS
#define HAVE_ENUM_GOPRO_HEARTBEAT_STATUS
typedef enum GOPRO_HEARTBEAT_STATUS
{
	GOPRO_HEARTBEAT_STATUS_DISCONNECTED=0, /* No GoPro connected | */
	GOPRO_HEARTBEAT_STATUS_INCOMPATIBLE=1, /* The detected GoPro is not HeroBus compatible | */
	GOPRO_HEARTBEAT_STATUS_CONNECTED=2, /* A HeroBus compatible GoPro is connected | */
	GOPRO_HEARTBEAT_STATUS_ERROR=3, /* An unrecoverable error was encountered with the connected GoPro, it may require a power cycle | */
	GOPRO_HEARTBEAT_STATUS_ENUM_END=4, /*  | */
} GOPRO_HEARTBEAT_STATUS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_HEARTBEAT_FLAGS
#define HAVE_ENUM_GOPRO_HEARTBEAT_FLAGS
typedef enum GOPRO_HEARTBEAT_FLAGS
{
	GOPRO_FLAG_RECORDING=1, /* GoPro is currently recording | */
	GOPRO_HEARTBEAT_FLAGS_ENUM_END=2, /*  | */
} GOPRO_HEARTBEAT_FLAGS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_REQUEST_STATUS
#define HAVE_ENUM_GOPRO_REQUEST_STATUS
typedef enum GOPRO_REQUEST_STATUS
{
	GOPRO_REQUEST_SUCCESS=0, /* The write message with ID indicated succeeded | */
	GOPRO_REQUEST_FAILED=1, /* The write message with ID indicated failed | */
	GOPRO_REQUEST_STATUS_ENUM_END=2, /*  | */
} GOPRO_REQUEST_STATUS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_COMMAND
#define HAVE_ENUM_GOPRO_COMMAND
typedef enum GOPRO_COMMAND
{
	GOPRO_COMMAND_POWER=0, /* (Get/Set) | */
	GOPRO_COMMAND_CAPTURE_MODE=1, /* (Get/Set) | */
	GOPRO_COMMAND_SHUTTER=2, /* (___/Set) | */
	GOPRO_COMMAND_BATTERY=3, /* (Get/___) | */
	GOPRO_COMMAND_MODEL=4, /* (Get/___) | */
	GOPRO_COMMAND_VIDEO_SETTINGS=5, /* (Get/Set) | */
	GOPRO_COMMAND_LOW_LIGHT=6, /* (Get/Set) | */
	GOPRO_COMMAND_PHOTO_RESOLUTION=7, /* (Get/Set) | */
	GOPRO_COMMAND_PHOTO_BURST_RATE=8, /* (Get/Set) | */
	GOPRO_COMMAND_PROTUNE=9, /* (Get/Set) | */
	GOPRO_COMMAND_PROTUNE_WHITE_BALANCE=10, /* (Get/Set) Hero 3+ Only | */
	GOPRO_COMMAND_PROTUNE_COLOUR=11, /* (Get/Set) Hero 3+ Only | */
	GOPRO_COMMAND_PROTUNE_GAIN=12, /* (Get/Set) Hero 3+ Only | */
	GOPRO_COMMAND_PROTUNE_SHARPNESS=13, /* (Get/Set) Hero 3+ Only | */
	GOPRO_COMMAND_PROTUNE_EXPOSURE=14, /* (Get/Set) Hero 3+ Only | */
	GOPRO_COMMAND_TIME=15, /* (Get/Set) | */
	GOPRO_COMMAND_CHARGING=16, /* (Get/Set) | */
	GOPRO_COMMAND_ENUM_END=17, /*  | */
} GOPRO_COMMAND;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_CAPTURE_MODE
#define HAVE_ENUM_GOPRO_CAPTURE_MODE
typedef enum GOPRO_CAPTURE_MODE
{
	GOPRO_CAPTURE_MODE_VIDEO=0, /* Video mode | */
	GOPRO_CAPTURE_MODE_PHOTO=1, /* Photo mode | */
	GOPRO_CAPTURE_MODE_BURST=2, /* Burst mode, hero 3+ only | */
	GOPRO_CAPTURE_MODE_TIME_LAPSE=3, /* Time lapse mode, hero 3+ only | */
	GOPRO_CAPTURE_MODE_MULTI_SHOT=4, /* Multi shot mode, hero 4 only | */
	GOPRO_CAPTURE_MODE_PLAYBACK=5, /* Playback mode, hero 4 only, silver only except when LCD or HDMI is connected to black | */
	GOPRO_CAPTURE_MODE_SETUP=6, /* Playback mode, hero 4 only | */
	GOPRO_CAPTURE_MODE_UNKNOWN=255, /* Mode not yet known | */
	GOPRO_CAPTURE_MODE_ENUM_END=256, /*  | */
} GOPRO_CAPTURE_MODE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_RESOLUTION
#define HAVE_ENUM_GOPRO_RESOLUTION
typedef enum GOPRO_RESOLUTION
{
	GOPRO_RESOLUTION_480p=0, /* 848 x 480 (480p) | */
	GOPRO_RESOLUTION_720p=1, /* 1280 x 720 (720p) | */
	GOPRO_RESOLUTION_960p=2, /* 1280 x 960 (960p) | */
	GOPRO_RESOLUTION_1080p=3, /* 1920 x 1080 (1080p) | */
	GOPRO_RESOLUTION_1440p=4, /* 1920 x 1440 (1440p) | */
	GOPRO_RESOLUTION_2_7k_17_9=5, /* 2704 x 1440 (2.7k-17:9) | */
	GOPRO_RESOLUTION_2_7k_16_9=6, /* 2704 x 1524 (2.7k-16:9) | */
	GOPRO_RESOLUTION_2_7k_4_3=7, /* 2704 x 2028 (2.7k-4:3) | */
	GOPRO_RESOLUTION_4k_16_9=8, /* 3840 x 2160 (4k-16:9) | */
	GOPRO_RESOLUTION_4k_17_9=9, /* 4096 x 2160 (4k-17:9) | */
	GOPRO_RESOLUTION_720p_SUPERVIEW=10, /* 1280 x 720 (720p-SuperView) | */
	GOPRO_RESOLUTION_1080p_SUPERVIEW=11, /* 1920 x 1080 (1080p-SuperView) | */
	GOPRO_RESOLUTION_2_7k_SUPERVIEW=12, /* 2704 x 1520 (2.7k-SuperView) | */
	GOPRO_RESOLUTION_4k_SUPERVIEW=13, /* 3840 x 2160 (4k-SuperView) | */
	GOPRO_RESOLUTION_ENUM_END=14, /*  | */
} GOPRO_RESOLUTION;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_FRAME_RATE
#define HAVE_ENUM_GOPRO_FRAME_RATE
typedef enum GOPRO_FRAME_RATE
{
	GOPRO_FRAME_RATE_12=0, /* 12 FPS | */
	GOPRO_FRAME_RATE_15=1, /* 15 FPS | */
	GOPRO_FRAME_RATE_24=2, /* 24 FPS | */
	GOPRO_FRAME_RATE_25=3, /* 25 FPS | */
	GOPRO_FRAME_RATE_30=4, /* 30 FPS | */
	GOPRO_FRAME_RATE_48=5, /* 48 FPS | */
	GOPRO_FRAME_RATE_50=6, /* 50 FPS | */
	GOPRO_FRAME_RATE_60=7, /* 60 FPS | */
	GOPRO_FRAME_RATE_80=8, /* 80 FPS | */
	GOPRO_FRAME_RATE_90=9, /* 90 FPS | */
	GOPRO_FRAME_RATE_100=10, /* 100 FPS | */
	GOPRO_FRAME_RATE_120=11, /* 120 FPS | */
	GOPRO_FRAME_RATE_240=12, /* 240 FPS | */
	GOPRO_FRAME_RATE_12_5=13, /* 12.5 FPS | */
	GOPRO_FRAME_RATE_ENUM_END=14, /*  | */
} GOPRO_FRAME_RATE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_FIELD_OF_VIEW
#define HAVE_ENUM_GOPRO_FIELD_OF_VIEW
typedef enum GOPRO_FIELD_OF_VIEW
{
	GOPRO_FIELD_OF_VIEW_WIDE=0, /* 0x00: Wide | */
	GOPRO_FIELD_OF_VIEW_MEDIUM=1, /* 0x01: Medium | */
	GOPRO_FIELD_OF_VIEW_NARROW=2, /* 0x02: Narrow | */
	GOPRO_FIELD_OF_VIEW_ENUM_END=3, /*  | */
} GOPRO_FIELD_OF_VIEW;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_VIDEO_SETTINGS_FLAGS
#define HAVE_ENUM_GOPRO_VIDEO_SETTINGS_FLAGS
typedef enum GOPRO_VIDEO_SETTINGS_FLAGS
{
	GOPRO_VIDEO_SETTINGS_TV_MODE=1, /* 0=NTSC, 1=PAL | */
	GOPRO_VIDEO_SETTINGS_FLAGS_ENUM_END=2, /*  | */
} GOPRO_VIDEO_SETTINGS_FLAGS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_PHOTO_RESOLUTION
#define HAVE_ENUM_GOPRO_PHOTO_RESOLUTION
typedef enum GOPRO_PHOTO_RESOLUTION
{
	GOPRO_PHOTO_RESOLUTION_5MP_MEDIUM=0, /* 5MP Medium | */
	GOPRO_PHOTO_RESOLUTION_7MP_MEDIUM=1, /* 7MP Medium | */
	GOPRO_PHOTO_RESOLUTION_7MP_WIDE=2, /* 7MP Wide | */
	GOPRO_PHOTO_RESOLUTION_10MP_WIDE=3, /* 10MP Wide | */
	GOPRO_PHOTO_RESOLUTION_12MP_WIDE=4, /* 12MP Wide | */
	GOPRO_PHOTO_RESOLUTION_ENUM_END=5, /*  | */
} GOPRO_PHOTO_RESOLUTION;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_PROTUNE_WHITE_BALANCE
#define HAVE_ENUM_GOPRO_PROTUNE_WHITE_BALANCE
typedef enum GOPRO_PROTUNE_WHITE_BALANCE
{
	GOPRO_PROTUNE_WHITE_BALANCE_AUTO=0, /* Auto | */
	GOPRO_PROTUNE_WHITE_BALANCE_3000K=1, /* 3000K | */
	GOPRO_PROTUNE_WHITE_BALANCE_5500K=2, /* 5500K | */
	GOPRO_PROTUNE_WHITE_BALANCE_6500K=3, /* 6500K | */
	GOPRO_PROTUNE_WHITE_BALANCE_RAW=4, /* Camera Raw | */
	GOPRO_PROTUNE_WHITE_BALANCE_ENUM_END=5, /*  | */
} GOPRO_PROTUNE_WHITE_BALANCE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_PROTUNE_COLOUR
#define HAVE_ENUM_GOPRO_PROTUNE_COLOUR
typedef enum GOPRO_PROTUNE_COLOUR
{
	GOPRO_PROTUNE_COLOUR_STANDARD=0, /* Auto | */
	GOPRO_PROTUNE_COLOUR_NEUTRAL=1, /* Neutral | */
	GOPRO_PROTUNE_COLOUR_ENUM_END=2, /*  | */
} GOPRO_PROTUNE_COLOUR;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_PROTUNE_GAIN
#define HAVE_ENUM_GOPRO_PROTUNE_GAIN
typedef enum GOPRO_PROTUNE_GAIN
{
	GOPRO_PROTUNE_GAIN_400=0, /* ISO 400 | */
	GOPRO_PROTUNE_GAIN_800=1, /* ISO 800 (Only Hero 4) | */
	GOPRO_PROTUNE_GAIN_1600=2, /* ISO 1600 | */
	GOPRO_PROTUNE_GAIN_3200=3, /* ISO 3200 (Only Hero 4) | */
	GOPRO_PROTUNE_GAIN_6400=4, /* ISO 6400 | */
	GOPRO_PROTUNE_GAIN_ENUM_END=5, /*  | */
} GOPRO_PROTUNE_GAIN;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_PROTUNE_SHARPNESS
#define HAVE_ENUM_GOPRO_PROTUNE_SHARPNESS
typedef enum GOPRO_PROTUNE_SHARPNESS
{
	GOPRO_PROTUNE_SHARPNESS_LOW=0, /* Low Sharpness | */
	GOPRO_PROTUNE_SHARPNESS_MEDIUM=1, /* Medium Sharpness | */
	GOPRO_PROTUNE_SHARPNESS_HIGH=2, /* High Sharpness | */
	GOPRO_PROTUNE_SHARPNESS_ENUM_END=3, /*  | */
} GOPRO_PROTUNE_SHARPNESS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_PROTUNE_EXPOSURE
#define HAVE_ENUM_GOPRO_PROTUNE_EXPOSURE
typedef enum GOPRO_PROTUNE_EXPOSURE
{
	GOPRO_PROTUNE_EXPOSURE_NEG_5_0=0, /* -5.0 EV (Hero 3+ Only) | */
	GOPRO_PROTUNE_EXPOSURE_NEG_4_5=1, /* -4.5 EV (Hero 3+ Only) | */
	GOPRO_PROTUNE_EXPOSURE_NEG_4_0=2, /* -4.0 EV (Hero 3+ Only) | */
	GOPRO_PROTUNE_EXPOSURE_NEG_3_5=3, /* -3.5 EV (Hero 3+ Only) | */
	GOPRO_PROTUNE_EXPOSURE_NEG_3_0=4, /* -3.0 EV (Hero 3+ Only) | */
	GOPRO_PROTUNE_EXPOSURE_NEG_2_5=5, /* -2.5 EV (Hero 3+ Only) | */
	GOPRO_PROTUNE_EXPOSURE_NEG_2_0=6, /* -2.0 EV | */
	GOPRO_PROTUNE_EXPOSURE_NEG_1_5=7, /* -1.5 EV | */
	GOPRO_PROTUNE_EXPOSURE_NEG_1_0=8, /* -1.0 EV | */
	GOPRO_PROTUNE_EXPOSURE_NEG_0_5=9, /* -0.5 EV | */
	GOPRO_PROTUNE_EXPOSURE_ZERO=10, /* 0.0 EV | */
	GOPRO_PROTUNE_EXPOSURE_POS_0_5=11, /* +0.5 EV | */
	GOPRO_PROTUNE_EXPOSURE_POS_1_0=12, /* +1.0 EV | */
	GOPRO_PROTUNE_EXPOSURE_POS_1_5=13, /* +1.5 EV | */
	GOPRO_PROTUNE_EXPOSURE_POS_2_0=14, /* +2.0 EV | */
	GOPRO_PROTUNE_EXPOSURE_POS_2_5=15, /* +2.5 EV (Hero 3+ Only) | */
	GOPRO_PROTUNE_EXPOSURE_POS_3_0=16, /* +3.0 EV (Hero 3+ Only) | */
	GOPRO_PROTUNE_EXPOSURE_POS_3_5=17, /* +3.5 EV (Hero 3+ Only) | */
	GOPRO_PROTUNE_EXPOSURE_POS_4_0=18, /* +4.0 EV (Hero 3+ Only) | */
	GOPRO_PROTUNE_EXPOSURE_POS_4_5=19, /* +4.5 EV (Hero 3+ Only) | */
	GOPRO_PROTUNE_EXPOSURE_POS_5_0=20, /* +5.0 EV (Hero 3+ Only) | */
	GOPRO_PROTUNE_EXPOSURE_ENUM_END=21, /*  | */
} GOPRO_PROTUNE_EXPOSURE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_CHARGING
#define HAVE_ENUM_GOPRO_CHARGING
typedef enum GOPRO_CHARGING
{
	GOPRO_CHARGING_DISABLED=0, /* Charging disabled | */
	GOPRO_CHARGING_ENABLED=1, /* Charging enabled | */
	GOPRO_CHARGING_ENUM_END=2, /*  | */
} GOPRO_CHARGING;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_MODEL
#define HAVE_ENUM_GOPRO_MODEL
typedef enum GOPRO_MODEL
{
	GOPRO_MODEL_UNKNOWN=0, /* Unknown gopro model | */
	GOPRO_MODEL_HERO_3_PLUS_SILVER=1, /* Hero 3+ Silver (HeroBus not supported by GoPro) | */
	GOPRO_MODEL_HERO_3_PLUS_BLACK=2, /* Hero 3+ Black | */
	GOPRO_MODEL_HERO_4_SILVER=3, /* Hero 4 Silver | */
	GOPRO_MODEL_HERO_4_BLACK=4, /* Hero 4 Black | */
	GOPRO_MODEL_ENUM_END=5, /*  | */
} GOPRO_MODEL;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_BURST_RATE
#define HAVE_ENUM_GOPRO_BURST_RATE
typedef enum GOPRO_BURST_RATE
{
	GOPRO_BURST_RATE_3_IN_1_SECOND=0, /* 3 Shots / 1 Second | */
	GOPRO_BURST_RATE_5_IN_1_SECOND=1, /* 5 Shots / 1 Second | */
	GOPRO_BURST_RATE_10_IN_1_SECOND=2, /* 10 Shots / 1 Second | */
	GOPRO_BURST_RATE_10_IN_2_SECOND=3, /* 10 Shots / 2 Second | */
	GOPRO_BURST_RATE_10_IN_3_SECOND=4, /* 10 Shots / 3 Second (Hero 4 Only) | */
	GOPRO_BURST_RATE_30_IN_1_SECOND=5, /* 30 Shots / 1 Second | */
	GOPRO_BURST_RATE_30_IN_2_SECOND=6, /* 30 Shots / 2 Second | */
	GOPRO_BURST_RATE_30_IN_3_SECOND=7, /* 30 Shots / 3 Second | */
	GOPRO_BURST_RATE_30_IN_6_SECOND=8, /* 30 Shots / 6 Second | */
	GOPRO_BURST_RATE_ENUM_END=9, /*  | */
} GOPRO_BURST_RATE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_LED_CONTROL_PATTERN
#define HAVE_ENUM_LED_CONTROL_PATTERN
typedef enum LED_CONTROL_PATTERN
{
	LED_CONTROL_PATTERN_OFF=0, /* LED patterns off (return control to regular vehicle control) | */
	LED_CONTROL_PATTERN_FIRMWAREUPDATE=1, /* LEDs show pattern during firmware update | */
	LED_CONTROL_PATTERN_CUSTOM=255, /* Custom Pattern using custom bytes fields | */
	LED_CONTROL_PATTERN_ENUM_END=256, /*  | */
} LED_CONTROL_PATTERN;
#endif

/** @brief Flags in EKF_STATUS message */
#ifndef HAVE_ENUM_EKF_STATUS_FLAGS
#define HAVE_ENUM_EKF_STATUS_FLAGS
typedef enum EKF_STATUS_FLAGS
{
	EKF_ATTITUDE=1, /* set if EKF's attitude estimate is good | */
	EKF_VELOCITY_HORIZ=2, /* set if EKF's horizontal velocity estimate is good | */
	EKF_VELOCITY_VERT=4, /* set if EKF's vertical velocity estimate is good | */
	EKF_POS_HORIZ_REL=8, /* set if EKF's horizontal position (relative) estimate is good | */
	EKF_POS_HORIZ_ABS=16, /* set if EKF's horizontal position (absolute) estimate is good | */
	EKF_POS_VERT_ABS=32, /* set if EKF's vertical position (absolute) estimate is good | */
	EKF_POS_VERT_AGL=64, /* set if EKF's vertical position (above ground) estimate is good | */
	EKF_CONST_POS_MODE=128, /* EKF is in constant position mode and does not know it's absolute or relative position | */
	EKF_PRED_POS_HORIZ_REL=256, /* set if EKF's predicted horizontal position (relative) estimate is good | */
	EKF_PRED_POS_HORIZ_ABS=512, /* set if EKF's predicted horizontal position (absolute) estimate is good | */
	EKF_STATUS_FLAGS_ENUM_END=513, /*  | */
} EKF_STATUS_FLAGS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_PID_TUNING_AXIS
#define HAVE_ENUM_PID_TUNING_AXIS
typedef enum PID_TUNING_AXIS
{
	PID_TUNING_ROLL=1, /*  | */
	PID_TUNING_PITCH=2, /*  | */
	PID_TUNING_YAW=3, /*  | */
	PID_TUNING_ACCZ=4, /*  | */
	PID_TUNING_STEER=5, /*  | */
	PID_TUNING_AXIS_ENUM_END=6, /*  | */
} PID_TUNING_AXIS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_MAG_CAL_STATUS
#define HAVE_ENUM_MAG_CAL_STATUS
typedef enum MAG_CAL_STATUS
{
	MAG_CAL_NOT_STARTED=0, /*  | */
	MAG_CAL_WAITING_TO_START=1, /*  | */
	MAG_CAL_RUNNING_STEP_ONE=2, /*  | */
	MAG_CAL_RUNNING_STEP_TWO=3, /*  | */
	MAG_CAL_SUCCESS=4, /*  | */
	MAG_CAL_FAILED=5, /*  | */
	MAG_CAL_STATUS_ENUM_END=6, /*  | */
} MAG_CAL_STATUS;
#endif

/** @brief Special ACK block numbers control activation of dataflash log streaming */
#ifndef HAVE_ENUM_MAV_REMOTE_LOG_DATA_BLOCK_COMMANDS
#define HAVE_ENUM_MAV_REMOTE_LOG_DATA_BLOCK_COMMANDS
typedef enum MAV_REMOTE_LOG_DATA_BLOCK_COMMANDS
{
	MAV_REMOTE_LOG_DATA_BLOCK_STOP=2147483645, /* UAV to stop sending DataFlash blocks | */
	MAV_REMOTE_LOG_DATA_BLOCK_START=2147483646, /* UAV to start sending DataFlash blocks | */
	MAV_REMOTE_LOG_DATA_BLOCK_COMMANDS_ENUM_END=2147483647, /*  | */
} MAV_REMOTE_LOG_DATA_BLOCK_COMMANDS;
#endif

/** @brief Possible remote log data block statuses */
#ifndef HAVE_ENUM_MAV_REMOTE_LOG_DATA_BLOCK_STATUSES
#define HAVE_ENUM_MAV_REMOTE_LOG_DATA_BLOCK_STATUSES
typedef enum MAV_REMOTE_LOG_DATA_BLOCK_STATUSES
{
	MAV_REMOTE_LOG_DATA_BLOCK_NACK=0, /* This block has NOT been received | */
	MAV_REMOTE_LOG_DATA_BLOCK_ACK=1, /* This block has been received | */
	MAV_REMOTE_LOG_DATA_BLOCK_STATUSES_ENUM_END=2, /*  | */
} MAV_REMOTE_LOG_DATA_BLOCK_STATUSES;
#endif

#include "../common/common.h"

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_sensor_offsets.h"
#include "./mavlink_msg_set_mag_offsets.h"
#include "./mavlink_msg_meminfo.h"
#include "./mavlink_msg_ap_adc.h"
#include "./mavlink_msg_digicam_configure.h"
#include "./mavlink_msg_digicam_control.h"
#include "./mavlink_msg_mount_configure.h"
#include "./mavlink_msg_mount_control.h"
#include "./mavlink_msg_mount_status.h"
#include "./mavlink_msg_fence_point.h"
#include "./mavlink_msg_fence_fetch_point.h"
#include "./mavlink_msg_fence_status.h"
#include "./mavlink_msg_ahrs.h"
#include "./mavlink_msg_simstate.h"
#include "./mavlink_msg_hwstatus.h"
#include "./mavlink_msg_radio.h"
#include "./mavlink_msg_limits_status.h"
#include "./mavlink_msg_wind.h"
#include "./mavlink_msg_data16.h"
#include "./mavlink_msg_data32.h"
#include "./mavlink_msg_data64.h"
#include "./mavlink_msg_data96.h"
#include "./mavlink_msg_rangefinder.h"
#include "./mavlink_msg_airspeed_autocal.h"
#include "./mavlink_msg_rally_point.h"
#include "./mavlink_msg_rally_fetch_point.h"
#include "./mavlink_msg_compassmot_status.h"
#include "./mavlink_msg_ahrs2.h"
#include "./mavlink_msg_camera_status.h"
#include "./mavlink_msg_camera_feedback.h"
#include "./mavlink_msg_battery2.h"
#include "./mavlink_msg_ahrs3.h"
#include "./mavlink_msg_autopilot_version_request.h"
#include "./mavlink_msg_remote_log_data_block.h"
#include "./mavlink_msg_remote_log_block_status.h"
#include "./mavlink_msg_led_control.h"
#include "./mavlink_msg_mag_cal_progress.h"
#include "./mavlink_msg_mag_cal_report.h"
#include "./mavlink_msg_ekf_status_report.h"
#include "./mavlink_msg_pid_tuning.h"
#include "./mavlink_msg_gimbal_report.h"
#include "./mavlink_msg_gimbal_control.h"
#include "./mavlink_msg_gimbal_torque_cmd_report.h"
#include "./mavlink_msg_gopro_heartbeat.h"
#include "./mavlink_msg_gopro_get_request.h"
#include "./mavlink_msg_gopro_get_response.h"
#include "./mavlink_msg_gopro_set_request.h"
#include "./mavlink_msg_gopro_set_response.h"
#include "./mavlink_msg_rpm.h"

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_ARDUPILOTMEGA_H
