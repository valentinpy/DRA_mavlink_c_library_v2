#pragma once
// MESSAGE VPY_TEST PACKING

#define MAVLINK_MSG_ID_VPY_TEST 239

MAVPACKED(
typedef struct __mavlink_vpy_test_t {
 int16_t vpy_test; /*< VPY Test*/
}) mavlink_vpy_test_t;

#define MAVLINK_MSG_ID_VPY_TEST_LEN 2
#define MAVLINK_MSG_ID_VPY_TEST_MIN_LEN 2
#define MAVLINK_MSG_ID_239_LEN 2
#define MAVLINK_MSG_ID_239_MIN_LEN 2

#define MAVLINK_MSG_ID_VPY_TEST_CRC 83
#define MAVLINK_MSG_ID_239_CRC 83



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VPY_TEST { \
    239, \
    "VPY_TEST", \
    1, \
    {  { "vpy_test", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_vpy_test_t, vpy_test) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VPY_TEST { \
    "VPY_TEST", \
    1, \
    {  { "vpy_test", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_vpy_test_t, vpy_test) }, \
         } \
}
#endif

/**
 * @brief Pack a vpy_test message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param vpy_test VPY Test
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vpy_test_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t vpy_test)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VPY_TEST_LEN];
    _mav_put_int16_t(buf, 0, vpy_test);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VPY_TEST_LEN);
#else
    mavlink_vpy_test_t packet;
    packet.vpy_test = vpy_test;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VPY_TEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VPY_TEST;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VPY_TEST_MIN_LEN, MAVLINK_MSG_ID_VPY_TEST_LEN, MAVLINK_MSG_ID_VPY_TEST_CRC);
}

/**
 * @brief Pack a vpy_test message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param vpy_test VPY Test
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vpy_test_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t vpy_test)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VPY_TEST_LEN];
    _mav_put_int16_t(buf, 0, vpy_test);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VPY_TEST_LEN);
#else
    mavlink_vpy_test_t packet;
    packet.vpy_test = vpy_test;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VPY_TEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VPY_TEST;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VPY_TEST_MIN_LEN, MAVLINK_MSG_ID_VPY_TEST_LEN, MAVLINK_MSG_ID_VPY_TEST_CRC);
}

/**
 * @brief Encode a vpy_test struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param vpy_test C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vpy_test_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_vpy_test_t* vpy_test)
{
    return mavlink_msg_vpy_test_pack(system_id, component_id, msg, vpy_test->vpy_test);
}

/**
 * @brief Encode a vpy_test struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param vpy_test C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vpy_test_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_vpy_test_t* vpy_test)
{
    return mavlink_msg_vpy_test_pack_chan(system_id, component_id, chan, msg, vpy_test->vpy_test);
}

/**
 * @brief Send a vpy_test message
 * @param chan MAVLink channel to send the message
 *
 * @param vpy_test VPY Test
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_vpy_test_send(mavlink_channel_t chan, int16_t vpy_test)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VPY_TEST_LEN];
    _mav_put_int16_t(buf, 0, vpy_test);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VPY_TEST, buf, MAVLINK_MSG_ID_VPY_TEST_MIN_LEN, MAVLINK_MSG_ID_VPY_TEST_LEN, MAVLINK_MSG_ID_VPY_TEST_CRC);
#else
    mavlink_vpy_test_t packet;
    packet.vpy_test = vpy_test;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VPY_TEST, (const char *)&packet, MAVLINK_MSG_ID_VPY_TEST_MIN_LEN, MAVLINK_MSG_ID_VPY_TEST_LEN, MAVLINK_MSG_ID_VPY_TEST_CRC);
#endif
}

/**
 * @brief Send a vpy_test message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_vpy_test_send_struct(mavlink_channel_t chan, const mavlink_vpy_test_t* vpy_test)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_vpy_test_send(chan, vpy_test->vpy_test);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VPY_TEST, (const char *)vpy_test, MAVLINK_MSG_ID_VPY_TEST_MIN_LEN, MAVLINK_MSG_ID_VPY_TEST_LEN, MAVLINK_MSG_ID_VPY_TEST_CRC);
#endif
}

#if MAVLINK_MSG_ID_VPY_TEST_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_vpy_test_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t vpy_test)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, vpy_test);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VPY_TEST, buf, MAVLINK_MSG_ID_VPY_TEST_MIN_LEN, MAVLINK_MSG_ID_VPY_TEST_LEN, MAVLINK_MSG_ID_VPY_TEST_CRC);
#else
    mavlink_vpy_test_t *packet = (mavlink_vpy_test_t *)msgbuf;
    packet->vpy_test = vpy_test;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VPY_TEST, (const char *)packet, MAVLINK_MSG_ID_VPY_TEST_MIN_LEN, MAVLINK_MSG_ID_VPY_TEST_LEN, MAVLINK_MSG_ID_VPY_TEST_CRC);
#endif
}
#endif

#endif

// MESSAGE VPY_TEST UNPACKING


/**
 * @brief Get field vpy_test from vpy_test message
 *
 * @return VPY Test
 */
static inline int16_t mavlink_msg_vpy_test_get_vpy_test(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Decode a vpy_test message into a struct
 *
 * @param msg The message to decode
 * @param vpy_test C-struct to decode the message contents into
 */
static inline void mavlink_msg_vpy_test_decode(const mavlink_message_t* msg, mavlink_vpy_test_t* vpy_test)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    vpy_test->vpy_test = mavlink_msg_vpy_test_get_vpy_test(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_VPY_TEST_LEN? msg->len : MAVLINK_MSG_ID_VPY_TEST_LEN;
        memset(vpy_test, 0, MAVLINK_MSG_ID_VPY_TEST_LEN);
    memcpy(vpy_test, _MAV_PAYLOAD(msg), len);
#endif
}
