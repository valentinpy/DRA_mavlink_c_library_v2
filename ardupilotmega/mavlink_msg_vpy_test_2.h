#pragma once
// MESSAGE VPY_TEST_2 PACKING

#define MAVLINK_MSG_ID_VPY_TEST_2 238

MAVPACKED(
typedef struct __mavlink_vpy_test_2_t {
 int16_t vpy_test_2; /*< VPY Test*/
}) mavlink_vpy_test_2_t;

#define MAVLINK_MSG_ID_VPY_TEST_2_LEN 2
#define MAVLINK_MSG_ID_VPY_TEST_2_MIN_LEN 2
#define MAVLINK_MSG_ID_238_LEN 2
#define MAVLINK_MSG_ID_238_MIN_LEN 2

#define MAVLINK_MSG_ID_VPY_TEST_2_CRC 36
#define MAVLINK_MSG_ID_238_CRC 36



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VPY_TEST_2 { \
    238, \
    "VPY_TEST_2", \
    1, \
    {  { "vpy_test_2", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_vpy_test_2_t, vpy_test_2) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VPY_TEST_2 { \
    "VPY_TEST_2", \
    1, \
    {  { "vpy_test_2", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_vpy_test_2_t, vpy_test_2) }, \
         } \
}
#endif

/**
 * @brief Pack a vpy_test_2 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param vpy_test_2 VPY Test
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vpy_test_2_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t vpy_test_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VPY_TEST_2_LEN];
    _mav_put_int16_t(buf, 0, vpy_test_2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VPY_TEST_2_LEN);
#else
    mavlink_vpy_test_2_t packet;
    packet.vpy_test_2 = vpy_test_2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VPY_TEST_2_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VPY_TEST_2;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VPY_TEST_2_MIN_LEN, MAVLINK_MSG_ID_VPY_TEST_2_LEN, MAVLINK_MSG_ID_VPY_TEST_2_CRC);
}

/**
 * @brief Pack a vpy_test_2 message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param vpy_test_2 VPY Test
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vpy_test_2_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t vpy_test_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VPY_TEST_2_LEN];
    _mav_put_int16_t(buf, 0, vpy_test_2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VPY_TEST_2_LEN);
#else
    mavlink_vpy_test_2_t packet;
    packet.vpy_test_2 = vpy_test_2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VPY_TEST_2_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VPY_TEST_2;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VPY_TEST_2_MIN_LEN, MAVLINK_MSG_ID_VPY_TEST_2_LEN, MAVLINK_MSG_ID_VPY_TEST_2_CRC);
}

/**
 * @brief Encode a vpy_test_2 struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param vpy_test_2 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vpy_test_2_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_vpy_test_2_t* vpy_test_2)
{
    return mavlink_msg_vpy_test_2_pack(system_id, component_id, msg, vpy_test_2->vpy_test_2);
}

/**
 * @brief Encode a vpy_test_2 struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param vpy_test_2 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vpy_test_2_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_vpy_test_2_t* vpy_test_2)
{
    return mavlink_msg_vpy_test_2_pack_chan(system_id, component_id, chan, msg, vpy_test_2->vpy_test_2);
}

/**
 * @brief Send a vpy_test_2 message
 * @param chan MAVLink channel to send the message
 *
 * @param vpy_test_2 VPY Test
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_vpy_test_2_send(mavlink_channel_t chan, int16_t vpy_test_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VPY_TEST_2_LEN];
    _mav_put_int16_t(buf, 0, vpy_test_2);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VPY_TEST_2, buf, MAVLINK_MSG_ID_VPY_TEST_2_MIN_LEN, MAVLINK_MSG_ID_VPY_TEST_2_LEN, MAVLINK_MSG_ID_VPY_TEST_2_CRC);
#else
    mavlink_vpy_test_2_t packet;
    packet.vpy_test_2 = vpy_test_2;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VPY_TEST_2, (const char *)&packet, MAVLINK_MSG_ID_VPY_TEST_2_MIN_LEN, MAVLINK_MSG_ID_VPY_TEST_2_LEN, MAVLINK_MSG_ID_VPY_TEST_2_CRC);
#endif
}

/**
 * @brief Send a vpy_test_2 message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_vpy_test_2_send_struct(mavlink_channel_t chan, const mavlink_vpy_test_2_t* vpy_test_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_vpy_test_2_send(chan, vpy_test_2->vpy_test_2);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VPY_TEST_2, (const char *)vpy_test_2, MAVLINK_MSG_ID_VPY_TEST_2_MIN_LEN, MAVLINK_MSG_ID_VPY_TEST_2_LEN, MAVLINK_MSG_ID_VPY_TEST_2_CRC);
#endif
}

#if MAVLINK_MSG_ID_VPY_TEST_2_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_vpy_test_2_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t vpy_test_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, vpy_test_2);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VPY_TEST_2, buf, MAVLINK_MSG_ID_VPY_TEST_2_MIN_LEN, MAVLINK_MSG_ID_VPY_TEST_2_LEN, MAVLINK_MSG_ID_VPY_TEST_2_CRC);
#else
    mavlink_vpy_test_2_t *packet = (mavlink_vpy_test_2_t *)msgbuf;
    packet->vpy_test_2 = vpy_test_2;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VPY_TEST_2, (const char *)packet, MAVLINK_MSG_ID_VPY_TEST_2_MIN_LEN, MAVLINK_MSG_ID_VPY_TEST_2_LEN, MAVLINK_MSG_ID_VPY_TEST_2_CRC);
#endif
}
#endif

#endif

// MESSAGE VPY_TEST_2 UNPACKING


/**
 * @brief Get field vpy_test_2 from vpy_test_2 message
 *
 * @return VPY Test
 */
static inline int16_t mavlink_msg_vpy_test_2_get_vpy_test_2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Decode a vpy_test_2 message into a struct
 *
 * @param msg The message to decode
 * @param vpy_test_2 C-struct to decode the message contents into
 */
static inline void mavlink_msg_vpy_test_2_decode(const mavlink_message_t* msg, mavlink_vpy_test_2_t* vpy_test_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    vpy_test_2->vpy_test_2 = mavlink_msg_vpy_test_2_get_vpy_test_2(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_VPY_TEST_2_LEN? msg->len : MAVLINK_MSG_ID_VPY_TEST_2_LEN;
        memset(vpy_test_2, 0, MAVLINK_MSG_ID_VPY_TEST_2_LEN);
    memcpy(vpy_test_2, _MAV_PAYLOAD(msg), len);
#endif
}
