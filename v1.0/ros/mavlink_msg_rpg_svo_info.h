// MESSAGE RPG_SVO_INFO PACKING

#define MAVLINK_MSG_ID_RPG_SVO_INFO 232

typedef struct __mavlink_rpg_svo_info_t
{
 float processing_time; /*< Processing time*/
 uint16_t num_matches; /*< Number of matches*/
 uint16_t tracking_quality; /*< Tracking quality*/
 uint8_t stage; /*< Current stage of node*/
} mavlink_rpg_svo_info_t;

#define MAVLINK_MSG_ID_RPG_SVO_INFO_LEN 9
#define MAVLINK_MSG_ID_232_LEN 9

#define MAVLINK_MSG_ID_RPG_SVO_INFO_CRC 109
#define MAVLINK_MSG_ID_232_CRC 109



#define MAVLINK_MESSAGE_INFO_RPG_SVO_INFO { \
	"RPG_SVO_INFO", \
	4, \
	{  { "processing_time", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_rpg_svo_info_t, processing_time) }, \
         { "num_matches", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_rpg_svo_info_t, num_matches) }, \
         { "tracking_quality", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_rpg_svo_info_t, tracking_quality) }, \
         { "stage", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_rpg_svo_info_t, stage) }, \
         } \
}


/**
 * @brief Pack a rpg_svo_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param processing_time Processing time
 * @param num_matches Number of matches
 * @param tracking_quality Tracking quality
 * @param stage Current stage of node
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rpg_svo_info_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float processing_time, uint16_t num_matches, uint16_t tracking_quality, uint8_t stage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_RPG_SVO_INFO_LEN];
	_mav_put_float(buf, 0, processing_time);
	_mav_put_uint16_t(buf, 4, num_matches);
	_mav_put_uint16_t(buf, 6, tracking_quality);
	_mav_put_uint8_t(buf, 8, stage);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RPG_SVO_INFO_LEN);
#else
	mavlink_rpg_svo_info_t packet;
	packet.processing_time = processing_time;
	packet.num_matches = num_matches;
	packet.tracking_quality = tracking_quality;
	packet.stage = stage;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RPG_SVO_INFO_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_RPG_SVO_INFO;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RPG_SVO_INFO_LEN, MAVLINK_MSG_ID_RPG_SVO_INFO_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RPG_SVO_INFO_LEN);
#endif
}

/**
 * @brief Pack a rpg_svo_info message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param processing_time Processing time
 * @param num_matches Number of matches
 * @param tracking_quality Tracking quality
 * @param stage Current stage of node
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rpg_svo_info_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float processing_time,uint16_t num_matches,uint16_t tracking_quality,uint8_t stage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_RPG_SVO_INFO_LEN];
	_mav_put_float(buf, 0, processing_time);
	_mav_put_uint16_t(buf, 4, num_matches);
	_mav_put_uint16_t(buf, 6, tracking_quality);
	_mav_put_uint8_t(buf, 8, stage);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RPG_SVO_INFO_LEN);
#else
	mavlink_rpg_svo_info_t packet;
	packet.processing_time = processing_time;
	packet.num_matches = num_matches;
	packet.tracking_quality = tracking_quality;
	packet.stage = stage;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RPG_SVO_INFO_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_RPG_SVO_INFO;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RPG_SVO_INFO_LEN, MAVLINK_MSG_ID_RPG_SVO_INFO_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RPG_SVO_INFO_LEN);
#endif
}

/**
 * @brief Encode a rpg_svo_info struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rpg_svo_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rpg_svo_info_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rpg_svo_info_t* rpg_svo_info)
{
	return mavlink_msg_rpg_svo_info_pack(system_id, component_id, msg, rpg_svo_info->processing_time, rpg_svo_info->num_matches, rpg_svo_info->tracking_quality, rpg_svo_info->stage);
}

/**
 * @brief Encode a rpg_svo_info struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rpg_svo_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rpg_svo_info_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rpg_svo_info_t* rpg_svo_info)
{
	return mavlink_msg_rpg_svo_info_pack_chan(system_id, component_id, chan, msg, rpg_svo_info->processing_time, rpg_svo_info->num_matches, rpg_svo_info->tracking_quality, rpg_svo_info->stage);
}

/**
 * @brief Send a rpg_svo_info message
 * @param chan MAVLink channel to send the message
 *
 * @param processing_time Processing time
 * @param num_matches Number of matches
 * @param tracking_quality Tracking quality
 * @param stage Current stage of node
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rpg_svo_info_send(mavlink_channel_t chan, float processing_time, uint16_t num_matches, uint16_t tracking_quality, uint8_t stage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_RPG_SVO_INFO_LEN];
	_mav_put_float(buf, 0, processing_time);
	_mav_put_uint16_t(buf, 4, num_matches);
	_mav_put_uint16_t(buf, 6, tracking_quality);
	_mav_put_uint8_t(buf, 8, stage);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RPG_SVO_INFO, buf, MAVLINK_MSG_ID_RPG_SVO_INFO_LEN, MAVLINK_MSG_ID_RPG_SVO_INFO_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RPG_SVO_INFO, buf, MAVLINK_MSG_ID_RPG_SVO_INFO_LEN);
#endif
#else
	mavlink_rpg_svo_info_t packet;
	packet.processing_time = processing_time;
	packet.num_matches = num_matches;
	packet.tracking_quality = tracking_quality;
	packet.stage = stage;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RPG_SVO_INFO, (const char *)&packet, MAVLINK_MSG_ID_RPG_SVO_INFO_LEN, MAVLINK_MSG_ID_RPG_SVO_INFO_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RPG_SVO_INFO, (const char *)&packet, MAVLINK_MSG_ID_RPG_SVO_INFO_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_RPG_SVO_INFO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rpg_svo_info_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float processing_time, uint16_t num_matches, uint16_t tracking_quality, uint8_t stage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, processing_time);
	_mav_put_uint16_t(buf, 4, num_matches);
	_mav_put_uint16_t(buf, 6, tracking_quality);
	_mav_put_uint8_t(buf, 8, stage);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RPG_SVO_INFO, buf, MAVLINK_MSG_ID_RPG_SVO_INFO_LEN, MAVLINK_MSG_ID_RPG_SVO_INFO_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RPG_SVO_INFO, buf, MAVLINK_MSG_ID_RPG_SVO_INFO_LEN);
#endif
#else
	mavlink_rpg_svo_info_t *packet = (mavlink_rpg_svo_info_t *)msgbuf;
	packet->processing_time = processing_time;
	packet->num_matches = num_matches;
	packet->tracking_quality = tracking_quality;
	packet->stage = stage;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RPG_SVO_INFO, (const char *)packet, MAVLINK_MSG_ID_RPG_SVO_INFO_LEN, MAVLINK_MSG_ID_RPG_SVO_INFO_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RPG_SVO_INFO, (const char *)packet, MAVLINK_MSG_ID_RPG_SVO_INFO_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE RPG_SVO_INFO UNPACKING


/**
 * @brief Get field processing_time from rpg_svo_info message
 *
 * @return Processing time
 */
static inline float mavlink_msg_rpg_svo_info_get_processing_time(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field num_matches from rpg_svo_info message
 *
 * @return Number of matches
 */
static inline uint16_t mavlink_msg_rpg_svo_info_get_num_matches(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field tracking_quality from rpg_svo_info message
 *
 * @return Tracking quality
 */
static inline uint16_t mavlink_msg_rpg_svo_info_get_tracking_quality(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field stage from rpg_svo_info message
 *
 * @return Current stage of node
 */
static inline uint8_t mavlink_msg_rpg_svo_info_get_stage(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Decode a rpg_svo_info message into a struct
 *
 * @param msg The message to decode
 * @param rpg_svo_info C-struct to decode the message contents into
 */
static inline void mavlink_msg_rpg_svo_info_decode(const mavlink_message_t* msg, mavlink_rpg_svo_info_t* rpg_svo_info)
{
#if MAVLINK_NEED_BYTE_SWAP
	rpg_svo_info->processing_time = mavlink_msg_rpg_svo_info_get_processing_time(msg);
	rpg_svo_info->num_matches = mavlink_msg_rpg_svo_info_get_num_matches(msg);
	rpg_svo_info->tracking_quality = mavlink_msg_rpg_svo_info_get_tracking_quality(msg);
	rpg_svo_info->stage = mavlink_msg_rpg_svo_info_get_stage(msg);
#else
	memcpy(rpg_svo_info, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_RPG_SVO_INFO_LEN);
#endif
}
