#pragma once
// MESSAGE DRA_SENSOR PACKING

#define MAVLINK_MSG_ID_DRA_SENSOR 240

MAVPACKED(
typedef struct __mavlink_dra_sensor_t {
 int16_t dra_val; /*< DRA Sensor value (VPY)*/
}) mavlink_dra_sensor_t;

#define MAVLINK_MSG_ID_DRA_SENSOR_LEN 2
#define MAVLINK_MSG_ID_DRA_SENSOR_MIN_LEN 2
#define MAVLINK_MSG_ID_240_LEN 2
#define MAVLINK_MSG_ID_240_MIN_LEN 2

#define MAVLINK_MSG_ID_DRA_SENSOR_CRC 14
#define MAVLINK_MSG_ID_240_CRC 14



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_DRA_SENSOR { \
    240, \
    "DRA_SENSOR", \
    1, \
    {  { "dra_val", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_dra_sensor_t, dra_val) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_DRA_SENSOR { \
    "DRA_SENSOR", \
    1, \
    {  { "dra_val", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_dra_sensor_t, dra_val) }, \
         } \
}
#endif

/**
 * @brief Pack a dra_sensor message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param dra_val DRA Sensor value (VPY)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dra_sensor_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t dra_val)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DRA_SENSOR_LEN];
    _mav_put_int16_t(buf, 0, dra_val);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DRA_SENSOR_LEN);
#else
    mavlink_dra_sensor_t packet;
    packet.dra_val = dra_val;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DRA_SENSOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DRA_SENSOR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DRA_SENSOR_MIN_LEN, MAVLINK_MSG_ID_DRA_SENSOR_LEN, MAVLINK_MSG_ID_DRA_SENSOR_CRC);
}

/**
 * @brief Pack a dra_sensor message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param dra_val DRA Sensor value (VPY)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dra_sensor_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t dra_val)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DRA_SENSOR_LEN];
    _mav_put_int16_t(buf, 0, dra_val);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DRA_SENSOR_LEN);
#else
    mavlink_dra_sensor_t packet;
    packet.dra_val = dra_val;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DRA_SENSOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DRA_SENSOR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DRA_SENSOR_MIN_LEN, MAVLINK_MSG_ID_DRA_SENSOR_LEN, MAVLINK_MSG_ID_DRA_SENSOR_CRC);
}

/**
 * @brief Encode a dra_sensor struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param dra_sensor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dra_sensor_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_dra_sensor_t* dra_sensor)
{
    return mavlink_msg_dra_sensor_pack(system_id, component_id, msg, dra_sensor->dra_val);
}

/**
 * @brief Encode a dra_sensor struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param dra_sensor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dra_sensor_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_dra_sensor_t* dra_sensor)
{
    return mavlink_msg_dra_sensor_pack_chan(system_id, component_id, chan, msg, dra_sensor->dra_val);
}

/**
 * @brief Send a dra_sensor message
 * @param chan MAVLink channel to send the message
 *
 * @param dra_val DRA Sensor value (VPY)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_dra_sensor_send(mavlink_channel_t chan, int16_t dra_val)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DRA_SENSOR_LEN];
    _mav_put_int16_t(buf, 0, dra_val);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRA_SENSOR, buf, MAVLINK_MSG_ID_DRA_SENSOR_MIN_LEN, MAVLINK_MSG_ID_DRA_SENSOR_LEN, MAVLINK_MSG_ID_DRA_SENSOR_CRC);
#else
    mavlink_dra_sensor_t packet;
    packet.dra_val = dra_val;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRA_SENSOR, (const char *)&packet, MAVLINK_MSG_ID_DRA_SENSOR_MIN_LEN, MAVLINK_MSG_ID_DRA_SENSOR_LEN, MAVLINK_MSG_ID_DRA_SENSOR_CRC);
#endif
}

/**
 * @brief Send a dra_sensor message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_dra_sensor_send_struct(mavlink_channel_t chan, const mavlink_dra_sensor_t* dra_sensor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_dra_sensor_send(chan, dra_sensor->dra_val);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRA_SENSOR, (const char *)dra_sensor, MAVLINK_MSG_ID_DRA_SENSOR_MIN_LEN, MAVLINK_MSG_ID_DRA_SENSOR_LEN, MAVLINK_MSG_ID_DRA_SENSOR_CRC);
#endif
}

#if MAVLINK_MSG_ID_DRA_SENSOR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_dra_sensor_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t dra_val)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, dra_val);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRA_SENSOR, buf, MAVLINK_MSG_ID_DRA_SENSOR_MIN_LEN, MAVLINK_MSG_ID_DRA_SENSOR_LEN, MAVLINK_MSG_ID_DRA_SENSOR_CRC);
#else
    mavlink_dra_sensor_t *packet = (mavlink_dra_sensor_t *)msgbuf;
    packet->dra_val = dra_val;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRA_SENSOR, (const char *)packet, MAVLINK_MSG_ID_DRA_SENSOR_MIN_LEN, MAVLINK_MSG_ID_DRA_SENSOR_LEN, MAVLINK_MSG_ID_DRA_SENSOR_CRC);
#endif
}
#endif

#endif

// MESSAGE DRA_SENSOR UNPACKING


/**
 * @brief Get field dra_val from dra_sensor message
 *
 * @return DRA Sensor value (VPY)
 */
static inline int16_t mavlink_msg_dra_sensor_get_dra_val(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Decode a dra_sensor message into a struct
 *
 * @param msg The message to decode
 * @param dra_sensor C-struct to decode the message contents into
 */
static inline void mavlink_msg_dra_sensor_decode(const mavlink_message_t* msg, mavlink_dra_sensor_t* dra_sensor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    dra_sensor->dra_val = mavlink_msg_dra_sensor_get_dra_val(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_DRA_SENSOR_LEN? msg->len : MAVLINK_MSG_ID_DRA_SENSOR_LEN;
        memset(dra_sensor, 0, MAVLINK_MSG_ID_DRA_SENSOR_LEN);
    memcpy(dra_sensor, _MAV_PAYLOAD(msg), len);
#endif
}
