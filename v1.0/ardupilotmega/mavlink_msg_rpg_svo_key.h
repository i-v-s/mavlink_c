// MESSAGE RPG_SVO_KEY PACKING

#define MAVLINK_MSG_ID_RPG_SVO_KEY 233

typedef struct __mavlink_rpg_svo_key_t
{
 char key; /*< Command key for rpg_svo node.*/
} mavlink_rpg_svo_key_t;

#define MAVLINK_MSG_ID_RPG_SVO_KEY_LEN 1
#define MAVLINK_MSG_ID_233_LEN 1

#define MAVLINK_MSG_ID_RPG_SVO_KEY_CRC 180
#define MAVLINK_MSG_ID_233_CRC 180



#define MAVLINK_MESSAGE_INFO_RPG_SVO_KEY { \
	"RPG_SVO_KEY", \
	1, \
	{  { "key", NULL, MAVLINK_TYPE_CHAR, 0, 0, offsetof(mavlink_rpg_svo_key_t, key) }, \
         } \
}


/**
 * @brief Pack a rpg_svo_key message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param key Command key for rpg_svo node.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rpg_svo_key_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       char key)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_RPG_SVO_KEY_LEN];
	_mav_put_char(buf, 0, key);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RPG_SVO_KEY_LEN);
#else
	mavlink_rpg_svo_key_t packet;
	packet.key = key;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RPG_SVO_KEY_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_RPG_SVO_KEY;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RPG_SVO_KEY_LEN, MAVLINK_MSG_ID_RPG_SVO_KEY_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RPG_SVO_KEY_LEN);
#endif
}

/**
 * @brief Pack a rpg_svo_key message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param key Command key for rpg_svo node.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rpg_svo_key_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           char key)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_RPG_SVO_KEY_LEN];
	_mav_put_char(buf, 0, key);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RPG_SVO_KEY_LEN);
#else
	mavlink_rpg_svo_key_t packet;
	packet.key = key;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RPG_SVO_KEY_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_RPG_SVO_KEY;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RPG_SVO_KEY_LEN, MAVLINK_MSG_ID_RPG_SVO_KEY_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RPG_SVO_KEY_LEN);
#endif
}

/**
 * @brief Encode a rpg_svo_key struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rpg_svo_key C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rpg_svo_key_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rpg_svo_key_t* rpg_svo_key)
{
	return mavlink_msg_rpg_svo_key_pack(system_id, component_id, msg, rpg_svo_key->key);
}

/**
 * @brief Encode a rpg_svo_key struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rpg_svo_key C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rpg_svo_key_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rpg_svo_key_t* rpg_svo_key)
{
	return mavlink_msg_rpg_svo_key_pack_chan(system_id, component_id, chan, msg, rpg_svo_key->key);
}

/**
 * @brief Send a rpg_svo_key message
 * @param chan MAVLink channel to send the message
 *
 * @param key Command key for rpg_svo node.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rpg_svo_key_send(mavlink_channel_t chan, char key)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_RPG_SVO_KEY_LEN];
	_mav_put_char(buf, 0, key);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RPG_SVO_KEY, buf, MAVLINK_MSG_ID_RPG_SVO_KEY_LEN, MAVLINK_MSG_ID_RPG_SVO_KEY_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RPG_SVO_KEY, buf, MAVLINK_MSG_ID_RPG_SVO_KEY_LEN);
#endif
#else
	mavlink_rpg_svo_key_t packet;
	packet.key = key;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RPG_SVO_KEY, (const char *)&packet, MAVLINK_MSG_ID_RPG_SVO_KEY_LEN, MAVLINK_MSG_ID_RPG_SVO_KEY_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RPG_SVO_KEY, (const char *)&packet, MAVLINK_MSG_ID_RPG_SVO_KEY_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_RPG_SVO_KEY_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rpg_svo_key_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  char key)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_char(buf, 0, key);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RPG_SVO_KEY, buf, MAVLINK_MSG_ID_RPG_SVO_KEY_LEN, MAVLINK_MSG_ID_RPG_SVO_KEY_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RPG_SVO_KEY, buf, MAVLINK_MSG_ID_RPG_SVO_KEY_LEN);
#endif
#else
	mavlink_rpg_svo_key_t *packet = (mavlink_rpg_svo_key_t *)msgbuf;
	packet->key = key;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RPG_SVO_KEY, (const char *)packet, MAVLINK_MSG_ID_RPG_SVO_KEY_LEN, MAVLINK_MSG_ID_RPG_SVO_KEY_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RPG_SVO_KEY, (const char *)packet, MAVLINK_MSG_ID_RPG_SVO_KEY_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE RPG_SVO_KEY UNPACKING


/**
 * @brief Get field key from rpg_svo_key message
 *
 * @return Command key for rpg_svo node.
 */
static inline char mavlink_msg_rpg_svo_key_get_key(const mavlink_message_t* msg)
{
	return _MAV_RETURN_char(msg,  0);
}

/**
 * @brief Decode a rpg_svo_key message into a struct
 *
 * @param msg The message to decode
 * @param rpg_svo_key C-struct to decode the message contents into
 */
static inline void mavlink_msg_rpg_svo_key_decode(const mavlink_message_t* msg, mavlink_rpg_svo_key_t* rpg_svo_key)
{
#if MAVLINK_NEED_BYTE_SWAP
	rpg_svo_key->key = mavlink_msg_rpg_svo_key_get_key(msg);
#else
	memcpy(rpg_svo_key, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_RPG_SVO_KEY_LEN);
#endif
}
