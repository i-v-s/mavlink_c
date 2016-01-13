// MESSAGE ROS_CMD_LAUNCH PACKING

#define MAVLINK_MSG_ID_ROS_CMD_LAUNCH 234

typedef struct __mavlink_ros_cmd_launch_t
{
 char launch_file[32]; /*< Name of the .launch file.*/
} mavlink_ros_cmd_launch_t;

#define MAVLINK_MSG_ID_ROS_CMD_LAUNCH_LEN 32
#define MAVLINK_MSG_ID_234_LEN 32

#define MAVLINK_MSG_ID_ROS_CMD_LAUNCH_CRC 67
#define MAVLINK_MSG_ID_234_CRC 67

#define MAVLINK_MSG_ROS_CMD_LAUNCH_FIELD_LAUNCH_FILE_LEN 32

#define MAVLINK_MESSAGE_INFO_ROS_CMD_LAUNCH { \
	"ROS_CMD_LAUNCH", \
	1, \
	{  { "launch_file", NULL, MAVLINK_TYPE_CHAR, 32, 0, offsetof(mavlink_ros_cmd_launch_t, launch_file) }, \
         } \
}


/**
 * @brief Pack a ros_cmd_launch message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param launch_file Name of the .launch file.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ros_cmd_launch_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       const char *launch_file)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROS_CMD_LAUNCH_LEN];

	_mav_put_char_array(buf, 0, launch_file, 32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROS_CMD_LAUNCH_LEN);
#else
	mavlink_ros_cmd_launch_t packet;

	mav_array_memcpy(packet.launch_file, launch_file, sizeof(char)*32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROS_CMD_LAUNCH_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROS_CMD_LAUNCH;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROS_CMD_LAUNCH_LEN, MAVLINK_MSG_ID_ROS_CMD_LAUNCH_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROS_CMD_LAUNCH_LEN);
#endif
}

/**
 * @brief Pack a ros_cmd_launch message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param launch_file Name of the .launch file.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ros_cmd_launch_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           const char *launch_file)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROS_CMD_LAUNCH_LEN];

	_mav_put_char_array(buf, 0, launch_file, 32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROS_CMD_LAUNCH_LEN);
#else
	mavlink_ros_cmd_launch_t packet;

	mav_array_memcpy(packet.launch_file, launch_file, sizeof(char)*32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROS_CMD_LAUNCH_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROS_CMD_LAUNCH;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROS_CMD_LAUNCH_LEN, MAVLINK_MSG_ID_ROS_CMD_LAUNCH_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROS_CMD_LAUNCH_LEN);
#endif
}

/**
 * @brief Encode a ros_cmd_launch struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ros_cmd_launch C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ros_cmd_launch_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ros_cmd_launch_t* ros_cmd_launch)
{
	return mavlink_msg_ros_cmd_launch_pack(system_id, component_id, msg, ros_cmd_launch->launch_file);
}

/**
 * @brief Encode a ros_cmd_launch struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ros_cmd_launch C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ros_cmd_launch_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ros_cmd_launch_t* ros_cmd_launch)
{
	return mavlink_msg_ros_cmd_launch_pack_chan(system_id, component_id, chan, msg, ros_cmd_launch->launch_file);
}

/**
 * @brief Send a ros_cmd_launch message
 * @param chan MAVLink channel to send the message
 *
 * @param launch_file Name of the .launch file.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ros_cmd_launch_send(mavlink_channel_t chan, const char *launch_file)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROS_CMD_LAUNCH_LEN];

	_mav_put_char_array(buf, 0, launch_file, 32);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_CMD_LAUNCH, buf, MAVLINK_MSG_ID_ROS_CMD_LAUNCH_LEN, MAVLINK_MSG_ID_ROS_CMD_LAUNCH_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_CMD_LAUNCH, buf, MAVLINK_MSG_ID_ROS_CMD_LAUNCH_LEN);
#endif
#else
	mavlink_ros_cmd_launch_t packet;

	mav_array_memcpy(packet.launch_file, launch_file, sizeof(char)*32);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_CMD_LAUNCH, (const char *)&packet, MAVLINK_MSG_ID_ROS_CMD_LAUNCH_LEN, MAVLINK_MSG_ID_ROS_CMD_LAUNCH_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_CMD_LAUNCH, (const char *)&packet, MAVLINK_MSG_ID_ROS_CMD_LAUNCH_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_ROS_CMD_LAUNCH_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ros_cmd_launch_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *launch_file)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;

	_mav_put_char_array(buf, 0, launch_file, 32);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_CMD_LAUNCH, buf, MAVLINK_MSG_ID_ROS_CMD_LAUNCH_LEN, MAVLINK_MSG_ID_ROS_CMD_LAUNCH_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_CMD_LAUNCH, buf, MAVLINK_MSG_ID_ROS_CMD_LAUNCH_LEN);
#endif
#else
	mavlink_ros_cmd_launch_t *packet = (mavlink_ros_cmd_launch_t *)msgbuf;

	mav_array_memcpy(packet->launch_file, launch_file, sizeof(char)*32);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_CMD_LAUNCH, (const char *)packet, MAVLINK_MSG_ID_ROS_CMD_LAUNCH_LEN, MAVLINK_MSG_ID_ROS_CMD_LAUNCH_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_CMD_LAUNCH, (const char *)packet, MAVLINK_MSG_ID_ROS_CMD_LAUNCH_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE ROS_CMD_LAUNCH UNPACKING


/**
 * @brief Get field launch_file from ros_cmd_launch message
 *
 * @return Name of the .launch file.
 */
static inline uint16_t mavlink_msg_ros_cmd_launch_get_launch_file(const mavlink_message_t* msg, char *launch_file)
{
	return _MAV_RETURN_char_array(msg, launch_file, 32,  0);
}

/**
 * @brief Decode a ros_cmd_launch message into a struct
 *
 * @param msg The message to decode
 * @param ros_cmd_launch C-struct to decode the message contents into
 */
static inline void mavlink_msg_ros_cmd_launch_decode(const mavlink_message_t* msg, mavlink_ros_cmd_launch_t* ros_cmd_launch)
{
#if MAVLINK_NEED_BYTE_SWAP
	mavlink_msg_ros_cmd_launch_get_launch_file(msg, ros_cmd_launch->launch_file);
#else
	memcpy(ros_cmd_launch, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_ROS_CMD_LAUNCH_LEN);
#endif
}
