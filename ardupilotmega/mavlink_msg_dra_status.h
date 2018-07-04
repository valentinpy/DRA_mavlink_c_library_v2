#pragma once
// MESSAGE DRA_STATUS PACKING

#define MAVLINK_MSG_ID_DRA_STATUS 239

MAVPACKED(
typedef struct __mavlink_dra_status_t {
 uint32_t serial_number; /*< DRA Drone Serial Number*/
 uint32_t immatriculation; /*< DRA Drone Immatriculation*/
}) mavlink_dra_status_t;

#define MAVLINK_MSG_ID_DRA_STATUS_LEN 8
#define MAVLINK_MSG_ID_DRA_STATUS_MIN_LEN 8
#define MAVLINK_MSG_ID_239_LEN 8
#define MAVLINK_MSG_ID_239_MIN_LEN 8

#define MAVLINK_MSG_ID_DRA_STATUS_CRC 58
#define MAVLINK_MSG_ID_239_CRC 58



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_DRA_STATUS { \
    239, \
    "DRA_STATUS", \
    2, \
    {  { "serial_number", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_dra_status_t, serial_number) }, \
         { "immatriculation", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_dra_status_t, immatriculation) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_DRA_STATUS { \
    "DRA_STATUS", \
    2, \
    {  { "serial_number", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_dra_status_t, serial_number) }, \
         { "immatriculation", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_dra_status_t, immatriculation) }, \
         } \
}
#endif

/**
 * @brief Pack a dra_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param serial_number DRA Drone Serial Number
 * @param immatriculation DRA Drone Immatriculation
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dra_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t serial_number, uint32_t immatriculation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DRA_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, serial_number);
    _mav_put_uint32_t(buf, 4, immatriculation);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DRA_STATUS_LEN);
#else
    mavlink_dra_status_t packet;
    packet.serial_number = serial_number;
    packet.immatriculation = immatriculation;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DRA_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DRA_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DRA_STATUS_MIN_LEN, MAVLINK_MSG_ID_DRA_STATUS_LEN, MAVLINK_MSG_ID_DRA_STATUS_CRC);
}

/**
 * @brief Pack a dra_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param serial_number DRA Drone Serial Number
 * @param immatriculation DRA Drone Immatriculation
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dra_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t serial_number,uint32_t immatriculation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DRA_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, serial_number);
    _mav_put_uint32_t(buf, 4, immatriculation);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DRA_STATUS_LEN);
#else
    mavlink_dra_status_t packet;
    packet.serial_number = serial_number;
    packet.immatriculation = immatriculation;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DRA_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DRA_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DRA_STATUS_MIN_LEN, MAVLINK_MSG_ID_DRA_STATUS_LEN, MAVLINK_MSG_ID_DRA_STATUS_CRC);
}

/**
 * @brief Encode a dra_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param dra_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dra_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_dra_status_t* dra_status)
{
    return mavlink_msg_dra_status_pack(system_id, component_id, msg, dra_status->serial_number, dra_status->immatriculation);
}

/**
 * @brief Encode a dra_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param dra_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dra_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_dra_status_t* dra_status)
{
    return mavlink_msg_dra_status_pack_chan(system_id, component_id, chan, msg, dra_status->serial_number, dra_status->immatriculation);
}

/**
 * @brief Send a dra_status message
 * @param chan MAVLink channel to send the message
 *
 * @param serial_number DRA Drone Serial Number
 * @param immatriculation DRA Drone Immatriculation
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_dra_status_send(mavlink_channel_t chan, uint32_t serial_number, uint32_t immatriculation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DRA_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, serial_number);
    _mav_put_uint32_t(buf, 4, immatriculation);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRA_STATUS, buf, MAVLINK_MSG_ID_DRA_STATUS_MIN_LEN, MAVLINK_MSG_ID_DRA_STATUS_LEN, MAVLINK_MSG_ID_DRA_STATUS_CRC);
#else
    mavlink_dra_status_t packet;
    packet.serial_number = serial_number;
    packet.immatriculation = immatriculation;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRA_STATUS, (const char *)&packet, MAVLINK_MSG_ID_DRA_STATUS_MIN_LEN, MAVLINK_MSG_ID_DRA_STATUS_LEN, MAVLINK_MSG_ID_DRA_STATUS_CRC);
#endif
}

/**
 * @brief Send a dra_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_dra_status_send_struct(mavlink_channel_t chan, const mavlink_dra_status_t* dra_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_dra_status_send(chan, dra_status->serial_number, dra_status->immatriculation);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRA_STATUS, (const char *)dra_status, MAVLINK_MSG_ID_DRA_STATUS_MIN_LEN, MAVLINK_MSG_ID_DRA_STATUS_LEN, MAVLINK_MSG_ID_DRA_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_DRA_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_dra_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t serial_number, uint32_t immatriculation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, serial_number);
    _mav_put_uint32_t(buf, 4, immatriculation);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRA_STATUS, buf, MAVLINK_MSG_ID_DRA_STATUS_MIN_LEN, MAVLINK_MSG_ID_DRA_STATUS_LEN, MAVLINK_MSG_ID_DRA_STATUS_CRC);
#else
    mavlink_dra_status_t *packet = (mavlink_dra_status_t *)msgbuf;
    packet->serial_number = serial_number;
    packet->immatriculation = immatriculation;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRA_STATUS, (const char *)packet, MAVLINK_MSG_ID_DRA_STATUS_MIN_LEN, MAVLINK_MSG_ID_DRA_STATUS_LEN, MAVLINK_MSG_ID_DRA_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE DRA_STATUS UNPACKING


/**
 * @brief Get field serial_number from dra_status message
 *
 * @return DRA Drone Serial Number
 */
static inline uint32_t mavlink_msg_dra_status_get_serial_number(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field immatriculation from dra_status message
 *
 * @return DRA Drone Immatriculation
 */
static inline uint32_t mavlink_msg_dra_status_get_immatriculation(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Decode a dra_status message into a struct
 *
 * @param msg The message to decode
 * @param dra_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_dra_status_decode(const mavlink_message_t* msg, mavlink_dra_status_t* dra_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    dra_status->serial_number = mavlink_msg_dra_status_get_serial_number(msg);
    dra_status->immatriculation = mavlink_msg_dra_status_get_immatriculation(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_DRA_STATUS_LEN? msg->len : MAVLINK_MSG_ID_DRA_STATUS_LEN;
        memset(dra_status, 0, MAVLINK_MSG_ID_DRA_STATUS_LEN);
    memcpy(dra_status, _MAV_PAYLOAD(msg), len);
#endif
}
