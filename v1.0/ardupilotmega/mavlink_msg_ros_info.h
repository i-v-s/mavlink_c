// MESSAGE ROS_INFO PACKING

#define MAVLINK_MSG_ID_ROS_INFO 230

typedef struct __mavlink_ros_info_t
{
 uint16_t host_id; /*< Id of the host*/
 uint8_t state; /*< State of the ROS*/
 char host[24]; /*< Name of the host*/
 uint8_t node_count; /*< Total count of nodes*/
} mavlink_ros_info_t;

#define MAVLINK_MSG_ID_ROS_INFO_LEN 28
#define MAVLINK_MSG_ID_230_LEN 28

#define MAVLINK_MSG_ID_ROS_INFO_CRC 58
#define MAVLINK_MSG_ID_230_CRC 58

#define MAVLINK_MSG_ROS_INFO_FIELD_HOST_LEN 24

#define MAVLINK_MESSAGE_INFO_ROS_INFO { \
	"ROS_INFO", \
	4, \
	{  { "host_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_ros_info_t, host_id) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_ros_info_t, state) }, \
         { "host", NULL, MAVLINK_TYPE_CHAR, 24, 3, offsetof(mavlink_ros_info_t, host) }, \
         { "node_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 27, offsetof(mavlink_ros_info_t, node_count) }, \
         } \
}


/**
 * @brief Pack a ros_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param host_id Id of the host
 * @param state State of the ROS
 * @param host Name of the host
 * @param node_count Total count of nodes
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ros_info_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint16_t host_id, uint8_t state, const char *host, uint8_t node_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROS_INFO_LEN];
	_mav_put_uint16_t(buf, 0, host_id);
	_mav_put_uint8_t(buf, 2, state);
	_mav_put_uint8_t(buf, 27, node_count);
	_mav_put_char_array(buf, 3, host, 24);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROS_INFO_LEN);
#else
	mavlink_ros_info_t packet;
	packet.host_id = host_id;
	packet.state = state;
	packet.node_count = node_count;
	mav_array_memcpy(packet.host, host, sizeof(char)*24);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROS_INFO_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROS_INFO;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROS_INFO_LEN, MAVLINK_MSG_ID_ROS_INFO_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROS_INFO_LEN);
#endif
}

/**
 * @brief Pack a ros_info message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param host_id Id of the host
 * @param state State of the ROS
 * @param host Name of the host
 * @param node_count Total count of nodes
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ros_info_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint16_t host_id,uint8_t state,const char *host,uint8_t node_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROS_INFO_LEN];
	_mav_put_uint16_t(buf, 0, host_id);
	_mav_put_uint8_t(buf, 2, state);
	_mav_put_uint8_t(buf, 27, node_count);
	_mav_put_char_array(buf, 3, host, 24);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROS_INFO_LEN);
#else
	mavlink_ros_info_t packet;
	packet.host_id = host_id;
	packet.state = state;
	packet.node_count = node_count;
	mav_array_memcpy(packet.host, host, sizeof(char)*24);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROS_INFO_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROS_INFO;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROS_INFO_LEN, MAVLINK_MSG_ID_ROS_INFO_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROS_INFO_LEN);
#endif
}

/**
 * @brief Encode a ros_info struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ros_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ros_info_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ros_info_t* ros_info)
{
	return mavlink_msg_ros_info_pack(system_id, component_id, msg, ros_info->host_id, ros_info->state, ros_info->host, ros_info->node_count);
}

/**
 * @brief Encode a ros_info struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ros_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ros_info_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ros_info_t* ros_info)
{
	return mavlink_msg_ros_info_pack_chan(system_id, component_id, chan, msg, ros_info->host_id, ros_info->state, ros_info->host, ros_info->node_count);
}

/**
 * @brief Send a ros_info message
 * @param chan MAVLink channel to send the message
 *
 * @param host_id Id of the host
 * @param state State of the ROS
 * @param host Name of the host
 * @param node_count Total count of nodes
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ros_info_send(mavlink_channel_t chan, uint16_t host_id, uint8_t state, const char *host, uint8_t node_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROS_INFO_LEN];
	_mav_put_uint16_t(buf, 0, host_id);
	_mav_put_uint8_t(buf, 2, state);
	_mav_put_uint8_t(buf, 27, node_count);
	_mav_put_char_array(buf, 3, host, 24);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_INFO, buf, MAVLINK_MSG_ID_ROS_INFO_LEN, MAVLINK_MSG_ID_ROS_INFO_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_INFO, buf, MAVLINK_MSG_ID_ROS_INFO_LEN);
#endif
#else
	mavlink_ros_info_t packet;
	packet.host_id = host_id;
	packet.state = state;
	packet.node_count = node_count;
	mav_array_memcpy(packet.host, host, sizeof(char)*24);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_INFO, (const char *)&packet, MAVLINK_MSG_ID_ROS_INFO_LEN, MAVLINK_MSG_ID_ROS_INFO_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_INFO, (const char *)&packet, MAVLINK_MSG_ID_ROS_INFO_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_ROS_INFO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ros_info_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t host_id, uint8_t state, const char *host, uint8_t node_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint16_t(buf, 0, host_id);
	_mav_put_uint8_t(buf, 2, state);
	_mav_put_uint8_t(buf, 27, node_count);
	_mav_put_char_array(buf, 3, host, 24);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_INFO, buf, MAVLINK_MSG_ID_ROS_INFO_LEN, MAVLINK_MSG_ID_ROS_INFO_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_INFO, buf, MAVLINK_MSG_ID_ROS_INFO_LEN);
#endif
#else
	mavlink_ros_info_t *packet = (mavlink_ros_info_t *)msgbuf;
	packet->host_id = host_id;
	packet->state = state;
	packet->node_count = node_count;
	mav_array_memcpy(packet->host, host, sizeof(char)*24);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_INFO, (const char *)packet, MAVLINK_MSG_ID_ROS_INFO_LEN, MAVLINK_MSG_ID_ROS_INFO_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_INFO, (const char *)packet, MAVLINK_MSG_ID_ROS_INFO_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE ROS_INFO UNPACKING


/**
 * @brief Get field host_id from ros_info message
 *
 * @return Id of the host
 */
static inline uint16_t mavlink_msg_ros_info_get_host_id(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field state from ros_info message
 *
 * @return State of the ROS
 */
static inline uint8_t mavlink_msg_ros_info_get_state(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field host from ros_info message
 *
 * @return Name of the host
 */
static inline uint16_t mavlink_msg_ros_info_get_host(const mavlink_message_t* msg, char *host)
{
	return _MAV_RETURN_char_array(msg, host, 24,  3);
}

/**
 * @brief Get field node_count from ros_info message
 *
 * @return Total count of nodes
 */
static inline uint8_t mavlink_msg_ros_info_get_node_count(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  27);
}

/**
 * @brief Decode a ros_info message into a struct
 *
 * @param msg The message to decode
 * @param ros_info C-struct to decode the message contents into
 */
static inline void mavlink_msg_ros_info_decode(const mavlink_message_t* msg, mavlink_ros_info_t* ros_info)
{
#if MAVLINK_NEED_BYTE_SWAP
	ros_info->host_id = mavlink_msg_ros_info_get_host_id(msg);
	ros_info->state = mavlink_msg_ros_info_get_state(msg);
	mavlink_msg_ros_info_get_host(msg, ros_info->host);
	ros_info->node_count = mavlink_msg_ros_info_get_node_count(msg);
#else
	memcpy(ros_info, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_ROS_INFO_LEN);
#endif
}
