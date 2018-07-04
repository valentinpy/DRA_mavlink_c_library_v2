#pragma once
// MESSAGE DRA_RT_INFOS PACKING

#define MAVLINK_MSG_ID_DRA_RT_INFOS 240

MAVPACKED(
typedef struct __mavlink_dra_rt_infos_t {
 int32_t dra_val; /*< DRA DAS Avalanche Sensor Value from K64*/
 int8_t marked; /*< Indicate when a marker has been released (boolean)*/
}) mavlink_dra_rt_infos_t;

#define MAVLINK_MSG_ID_DRA_RT_INFOS_LEN 5
#define MAVLINK_MSG_ID_DRA_RT_INFOS_MIN_LEN 5
#define MAVLINK_MSG_ID_240_LEN 5
#define MAVLINK_MSG_ID_240_MIN_LEN 5

#define MAVLINK_MSG_ID_DRA_RT_INFOS_CRC 44
#define MAVLINK_MSG_ID_240_CRC 44



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_DRA_RT_INFOS { \
    240, \
    "DRA_RT_INFOS", \
    2, \
    {  { "dra_val", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_dra_rt_infos_t, dra_val) }, \
         { "marked", NULL, MAVLINK_TYPE_INT8_T, 0, 4, offsetof(mavlink_dra_rt_infos_t, marked) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_DRA_RT_INFOS { \
    "DRA_RT_INFOS", \
    2, \
    {  { "dra_val", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_dra_rt_infos_t, dra_val) }, \
         { "marked", NULL, MAVLINK_TYPE_INT8_T, 0, 4, offsetof(mavlink_dra_rt_infos_t, marked) }, \
         } \
}
#endif

/**
 * @brief Pack a dra_rt_infos message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param dra_val DRA DAS Avalanche Sensor Value from K64
 * @param marked Indicate when a marker has been released (boolean)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dra_rt_infos_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int32_t dra_val, int8_t marked)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DRA_RT_INFOS_LEN];
    _mav_put_int32_t(buf, 0, dra_val);
    _mav_put_int8_t(buf, 4, marked);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DRA_RT_INFOS_LEN);
#else
    mavlink_dra_rt_infos_t packet;
    packet.dra_val = dra_val;
    packet.marked = marked;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DRA_RT_INFOS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DRA_RT_INFOS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DRA_RT_INFOS_MIN_LEN, MAVLINK_MSG_ID_DRA_RT_INFOS_LEN, MAVLINK_MSG_ID_DRA_RT_INFOS_CRC);
}

/**
 * @brief Pack a dra_rt_infos message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param dra_val DRA DAS Avalanche Sensor Value from K64
 * @param marked Indicate when a marker has been released (boolean)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dra_rt_infos_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int32_t dra_val,int8_t marked)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DRA_RT_INFOS_LEN];
    _mav_put_int32_t(buf, 0, dra_val);
    _mav_put_int8_t(buf, 4, marked);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DRA_RT_INFOS_LEN);
#else
    mavlink_dra_rt_infos_t packet;
    packet.dra_val = dra_val;
    packet.marked = marked;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DRA_RT_INFOS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DRA_RT_INFOS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DRA_RT_INFOS_MIN_LEN, MAVLINK_MSG_ID_DRA_RT_INFOS_LEN, MAVLINK_MSG_ID_DRA_RT_INFOS_CRC);
}

/**
 * @brief Encode a dra_rt_infos struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param dra_rt_infos C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dra_rt_infos_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_dra_rt_infos_t* dra_rt_infos)
{
    return mavlink_msg_dra_rt_infos_pack(system_id, component_id, msg, dra_rt_infos->dra_val, dra_rt_infos->marked);
}

/**
 * @brief Encode a dra_rt_infos struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param dra_rt_infos C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dra_rt_infos_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_dra_rt_infos_t* dra_rt_infos)
{
    return mavlink_msg_dra_rt_infos_pack_chan(system_id, component_id, chan, msg, dra_rt_infos->dra_val, dra_rt_infos->marked);
}

/**
 * @brief Send a dra_rt_infos message
 * @param chan MAVLink channel to send the message
 *
 * @param dra_val DRA DAS Avalanche Sensor Value from K64
 * @param marked Indicate when a marker has been released (boolean)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_dra_rt_infos_send(mavlink_channel_t chan, int32_t dra_val, int8_t marked)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DRA_RT_INFOS_LEN];
    _mav_put_int32_t(buf, 0, dra_val);
    _mav_put_int8_t(buf, 4, marked);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRA_RT_INFOS, buf, MAVLINK_MSG_ID_DRA_RT_INFOS_MIN_LEN, MAVLINK_MSG_ID_DRA_RT_INFOS_LEN, MAVLINK_MSG_ID_DRA_RT_INFOS_CRC);
#else
    mavlink_dra_rt_infos_t packet;
    packet.dra_val = dra_val;
    packet.marked = marked;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRA_RT_INFOS, (const char *)&packet, MAVLINK_MSG_ID_DRA_RT_INFOS_MIN_LEN, MAVLINK_MSG_ID_DRA_RT_INFOS_LEN, MAVLINK_MSG_ID_DRA_RT_INFOS_CRC);
#endif
}

/**
 * @brief Send a dra_rt_infos message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_dra_rt_infos_send_struct(mavlink_channel_t chan, const mavlink_dra_rt_infos_t* dra_rt_infos)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_dra_rt_infos_send(chan, dra_rt_infos->dra_val, dra_rt_infos->marked);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRA_RT_INFOS, (const char *)dra_rt_infos, MAVLINK_MSG_ID_DRA_RT_INFOS_MIN_LEN, MAVLINK_MSG_ID_DRA_RT_INFOS_LEN, MAVLINK_MSG_ID_DRA_RT_INFOS_CRC);
#endif
}

#if MAVLINK_MSG_ID_DRA_RT_INFOS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_dra_rt_infos_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int32_t dra_val, int8_t marked)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, dra_val);
    _mav_put_int8_t(buf, 4, marked);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRA_RT_INFOS, buf, MAVLINK_MSG_ID_DRA_RT_INFOS_MIN_LEN, MAVLINK_MSG_ID_DRA_RT_INFOS_LEN, MAVLINK_MSG_ID_DRA_RT_INFOS_CRC);
#else
    mavlink_dra_rt_infos_t *packet = (mavlink_dra_rt_infos_t *)msgbuf;
    packet->dra_val = dra_val;
    packet->marked = marked;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRA_RT_INFOS, (const char *)packet, MAVLINK_MSG_ID_DRA_RT_INFOS_MIN_LEN, MAVLINK_MSG_ID_DRA_RT_INFOS_LEN, MAVLINK_MSG_ID_DRA_RT_INFOS_CRC);
#endif
}
#endif

#endif

// MESSAGE DRA_RT_INFOS UNPACKING


/**
 * @brief Get field dra_val from dra_rt_infos message
 *
 * @return DRA DAS Avalanche Sensor Value from K64
 */
static inline int32_t mavlink_msg_dra_rt_infos_get_dra_val(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field marked from dra_rt_infos message
 *
 * @return Indicate when a marker has been released (boolean)
 */
static inline int8_t mavlink_msg_dra_rt_infos_get_marked(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  4);
}

/**
 * @brief Decode a dra_rt_infos message into a struct
 *
 * @param msg The message to decode
 * @param dra_rt_infos C-struct to decode the message contents into
 */
static inline void mavlink_msg_dra_rt_infos_decode(const mavlink_message_t* msg, mavlink_dra_rt_infos_t* dra_rt_infos)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    dra_rt_infos->dra_val = mavlink_msg_dra_rt_infos_get_dra_val(msg);
    dra_rt_infos->marked = mavlink_msg_dra_rt_infos_get_marked(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_DRA_RT_INFOS_LEN? msg->len : MAVLINK_MSG_ID_DRA_RT_INFOS_LEN;
        memset(dra_rt_infos, 0, MAVLINK_MSG_ID_DRA_RT_INFOS_LEN);
    memcpy(dra_rt_infos, _MAV_PAYLOAD(msg), len);
#endif
}
