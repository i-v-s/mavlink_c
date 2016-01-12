// MESSAGE ROS_STATE PACKING

#define MAVLINK_MSG_ID_ROS_STATE 230

typedef struct __mavlink_ros_state_t
{
 uint8_t state; /*< State of the ROS system*/
 uint8_t node_count; /*< Total count of nodes*/
} mavlink_ros_state_t;

#define MAVLINK_MSG_ID_ROS_STATE_LEN 2
#define MAVLINK_MSG_ID_230_LEN 2

#define MAVLINK_MSG_ID_ROS_STATE_CRC 90
#define MAVLINK_MSG_ID_230_CRC 90



#define MAVLINK_MESSAGE_INFO_ROS_STATE { \
	"ROS_STATE", \
	2, \
	{  { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_ros_state_t, state) }, \
         { "node_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_ros_state_t, node_count) }, \
         } \
}


/**
 * @brief Pack a ros_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param state State of the ROS system
 * @param node_count Total count of nodes
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ros_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t state, uint8_t node_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROS_STATE_LEN];
	_mav_put_uint8_t(buf, 0, state);
	_mav_put_uint8_t(buf, 1, node_count);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROS_STATE_LEN);
#else
	mavlink_ros_state_t packet;
	packet.state = state;
	packet.node_count = node_count;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROS_STATE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROS_STATE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROS_STATE_LEN, MAVLINK_MSG_ID_ROS_STATE_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROS_STATE_LEN);
#endif
}

/**
 * @brief Pack a ros_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param state State of the ROS system
 * @param node_count Total count of nodes
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ros_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t state,uint8_t node_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROS_STATE_LEN];
	_mav_put_uint8_t(buf, 0, state);
	_mav_put_uint8_t(buf, 1, node_count);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROS_STATE_LEN);
#else
	mavlink_ros_state_t packet;
	packet.state = state;
	packet.node_count = node_count;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROS_STATE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROS_STATE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROS_STATE_LEN, MAVLINK_MSG_ID_ROS_STATE_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROS_STATE_LEN);
#endif
}

/**
 * @brief Encode a ros_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ros_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ros_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ros_state_t* ros_state)
{
	return mavlink_msg_ros_state_pack(system_id, component_id, msg, ros_state->state, ros_state->node_count);
}

/**
 * @brief Encode a ros_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ros_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ros_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ros_state_t* ros_state)
{
	return mavlink_msg_ros_state_pack_chan(system_id, component_id, chan, msg, ros_state->state, ros_state->node_count);
}

/**
 * @brief Send a ros_state message
 * @param chan MAVLink channel to send the message
 *
 * @param state State of the ROS system
 * @param node_count Total count of nodes
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ros_state_send(mavlink_channel_t chan, uint8_t state, uint8_t node_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROS_STATE_LEN];
	_mav_put_uint8_t(buf, 0, state);
	_mav_put_uint8_t(buf, 1, node_count);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_STATE, buf, MAVLINK_MSG_ID_ROS_STATE_LEN, MAVLINK_MSG_ID_ROS_STATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_STATE, buf, MAVLINK_MSG_ID_ROS_STATE_LEN);
#endif
#else
	mavlink_ros_state_t packet;
	packet.state = state;
	packet.node_count = node_count;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_STATE, (const char *)&packet, MAVLINK_MSG_ID_ROS_STATE_LEN, MAVLINK_MSG_ID_ROS_STATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_STATE, (const char *)&packet, MAVLINK_MSG_ID_ROS_STATE_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_ROS_STATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ros_state_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t state, uint8_t node_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint8_t(buf, 0, state);
	_mav_put_uint8_t(buf, 1, node_count);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_STATE, buf, MAVLINK_MSG_ID_ROS_STATE_LEN, MAVLINK_MSG_ID_ROS_STATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_STATE, buf, MAVLINK_MSG_ID_ROS_STATE_LEN);
#endif
#else
	mavlink_ros_state_t *packet = (mavlink_ros_state_t *)msgbuf;
	packet->state = state;
	packet->node_count = node_count;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_STATE, (const char *)packet, MAVLINK_MSG_ID_ROS_STATE_LEN, MAVLINK_MSG_ID_ROS_STATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_STATE, (const char *)packet, MAVLINK_MSG_ID_ROS_STATE_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE ROS_STATE UNPACKING


/**
 * @brief Get field state from ros_state message
 *
 * @return State of the ROS system
 */
static inline uint8_t mavlink_msg_ros_state_get_state(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field node_count from ros_state message
 *
 * @return Total count of nodes
 */
static inline uint8_t mavlink_msg_ros_state_get_node_count(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a ros_state message into a struct
 *
 * @param msg The message to decode
 * @param ros_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_ros_state_decode(const mavlink_message_t* msg, mavlink_ros_state_t* ros_state)
{
#if MAVLINK_NEED_BYTE_SWAP
	ros_state->state = mavlink_msg_ros_state_get_state(msg);
	ros_state->node_count = mavlink_msg_ros_state_get_node_count(msg);
#else
	memcpy(ros_state, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_ROS_STATE_LEN);
#endif
}
