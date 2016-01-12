// MESSAGE ROS_NODE_STATE PACKING

#define MAVLINK_MSG_ID_ROS_NODE_STATE 231

typedef struct __mavlink_ros_node_state_t
{
 uint8_t node_id; /*< Number of node*/
 uint8_t state; /*< Current state of node*/
} mavlink_ros_node_state_t;

#define MAVLINK_MSG_ID_ROS_NODE_STATE_LEN 2
#define MAVLINK_MSG_ID_231_LEN 2

#define MAVLINK_MSG_ID_ROS_NODE_STATE_CRC 82
#define MAVLINK_MSG_ID_231_CRC 82



#define MAVLINK_MESSAGE_INFO_ROS_NODE_STATE { \
	"ROS_NODE_STATE", \
	2, \
	{  { "node_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_ros_node_state_t, node_id) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_ros_node_state_t, state) }, \
         } \
}


/**
 * @brief Pack a ros_node_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param node_id Number of node
 * @param state Current state of node
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ros_node_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t node_id, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROS_NODE_STATE_LEN];
	_mav_put_uint8_t(buf, 0, node_id);
	_mav_put_uint8_t(buf, 1, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROS_NODE_STATE_LEN);
#else
	mavlink_ros_node_state_t packet;
	packet.node_id = node_id;
	packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROS_NODE_STATE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROS_NODE_STATE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROS_NODE_STATE_LEN, MAVLINK_MSG_ID_ROS_NODE_STATE_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROS_NODE_STATE_LEN);
#endif
}

/**
 * @brief Pack a ros_node_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param node_id Number of node
 * @param state Current state of node
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ros_node_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t node_id,uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROS_NODE_STATE_LEN];
	_mav_put_uint8_t(buf, 0, node_id);
	_mav_put_uint8_t(buf, 1, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROS_NODE_STATE_LEN);
#else
	mavlink_ros_node_state_t packet;
	packet.node_id = node_id;
	packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROS_NODE_STATE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROS_NODE_STATE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROS_NODE_STATE_LEN, MAVLINK_MSG_ID_ROS_NODE_STATE_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROS_NODE_STATE_LEN);
#endif
}

/**
 * @brief Encode a ros_node_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ros_node_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ros_node_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ros_node_state_t* ros_node_state)
{
	return mavlink_msg_ros_node_state_pack(system_id, component_id, msg, ros_node_state->node_id, ros_node_state->state);
}

/**
 * @brief Encode a ros_node_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ros_node_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ros_node_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ros_node_state_t* ros_node_state)
{
	return mavlink_msg_ros_node_state_pack_chan(system_id, component_id, chan, msg, ros_node_state->node_id, ros_node_state->state);
}

/**
 * @brief Send a ros_node_state message
 * @param chan MAVLink channel to send the message
 *
 * @param node_id Number of node
 * @param state Current state of node
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ros_node_state_send(mavlink_channel_t chan, uint8_t node_id, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROS_NODE_STATE_LEN];
	_mav_put_uint8_t(buf, 0, node_id);
	_mav_put_uint8_t(buf, 1, state);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_NODE_STATE, buf, MAVLINK_MSG_ID_ROS_NODE_STATE_LEN, MAVLINK_MSG_ID_ROS_NODE_STATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_NODE_STATE, buf, MAVLINK_MSG_ID_ROS_NODE_STATE_LEN);
#endif
#else
	mavlink_ros_node_state_t packet;
	packet.node_id = node_id;
	packet.state = state;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_NODE_STATE, (const char *)&packet, MAVLINK_MSG_ID_ROS_NODE_STATE_LEN, MAVLINK_MSG_ID_ROS_NODE_STATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_NODE_STATE, (const char *)&packet, MAVLINK_MSG_ID_ROS_NODE_STATE_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_ROS_NODE_STATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ros_node_state_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t node_id, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint8_t(buf, 0, node_id);
	_mav_put_uint8_t(buf, 1, state);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_NODE_STATE, buf, MAVLINK_MSG_ID_ROS_NODE_STATE_LEN, MAVLINK_MSG_ID_ROS_NODE_STATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_NODE_STATE, buf, MAVLINK_MSG_ID_ROS_NODE_STATE_LEN);
#endif
#else
	mavlink_ros_node_state_t *packet = (mavlink_ros_node_state_t *)msgbuf;
	packet->node_id = node_id;
	packet->state = state;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_NODE_STATE, (const char *)packet, MAVLINK_MSG_ID_ROS_NODE_STATE_LEN, MAVLINK_MSG_ID_ROS_NODE_STATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROS_NODE_STATE, (const char *)packet, MAVLINK_MSG_ID_ROS_NODE_STATE_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE ROS_NODE_STATE UNPACKING


/**
 * @brief Get field node_id from ros_node_state message
 *
 * @return Number of node
 */
static inline uint8_t mavlink_msg_ros_node_state_get_node_id(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field state from ros_node_state message
 *
 * @return Current state of node
 */
static inline uint8_t mavlink_msg_ros_node_state_get_state(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a ros_node_state message into a struct
 *
 * @param msg The message to decode
 * @param ros_node_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_ros_node_state_decode(const mavlink_message_t* msg, mavlink_ros_node_state_t* ros_node_state)
{
#if MAVLINK_NEED_BYTE_SWAP
	ros_node_state->node_id = mavlink_msg_ros_node_state_get_node_id(msg);
	ros_node_state->state = mavlink_msg_ros_node_state_get_state(msg);
#else
	memcpy(ros_node_state, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_ROS_NODE_STATE_LEN);
#endif
}
