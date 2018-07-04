#pragma once
// MESSAGE VPY_TEST_1 PACKING

#define MAVLINK_MSG_ID_VPY_TEST_1 237

MAVPACKED(
typedef struct __mavlink_vpy_test_1_t {
 int16_t vpy_test_1; /*< VPY Test*/
}) mavlink_vpy_test_1_t;

#define MAVLINK_MSG_ID_VPY_TEST_1_LEN 2
#define MAVLINK_MSG_ID_VPY_TEST_1_MIN_LEN 2
#define MAVLINK_MSG_ID_237_LEN 2
#define MAVLINK_MSG_ID_237_MIN_LEN 2

#define MAVLINK_MSG_ID_VPY_TEST_1_CRC 139
#define MAVLINK_MSG_ID_237_CRC 139



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VPY_TEST_1 { \
    237, \
    "VPY_TEST_1", \
    1, \
    {  { "vpy_test_1", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_vpy_test_1_t, vpy_test_1) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VPY_TEST_1 { \
    "VPY_TEST_1", \
    1, \
    {  { "vpy_test_1", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_vpy_test_1_t, vpy_test_1) }, \
         } \
}
#endif

/**
 * @brief Pack a vpy_test_1 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param vpy_test_1 VPY Test
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vpy_test_1_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t vpy_test_1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VPY_TEST_1_LEN];
    _mav_put_int16_t(buf, 0, vpy_test_1);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VPY_TEST_1_LEN);
#else
    mavlink_vpy_test_1_t packet;
    packet.vpy_test_1 = vpy_test_1;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VPY_TEST_1_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VPY_TEST_1;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VPY_TEST_1_MIN_LEN, MAVLINK_MSG_ID_VPY_TEST_1_LEN, MAVLINK_MSG_ID_VPY_TEST_1_CRC);
}

/**
 * @brief Pack a vpy_test_1 message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param vpy_test_1 VPY Test
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vpy_test_1_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t vpy_test_1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VPY_TEST_1_LEN];
    _mav_put_int16_t(buf, 0, vpy_test_1);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VPY_TEST_1_LEN);
#else
    mavlink_vpy_test_1_t packet;
    packet.vpy_test_1 = vpy_test_1;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VPY_TEST_1_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VPY_TEST_1;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VPY_TEST_1_MIN_LEN, MAVLINK_MSG_ID_VPY_TEST_1_LEN, MAVLINK_MSG_ID_VPY_TEST_1_CRC);
}

/**
 * @brief Encode a vpy_test_1 struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param vpy_test_1 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vpy_test_1_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_vpy_test_1_t* vpy_test_1)
{
    return mavlink_msg_vpy_test_1_pack(system_id, component_id, msg, vpy_test_1->vpy_test_1);
}

/**
 * @brief Encode a vpy_test_1 struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param vpy_test_1 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vpy_test_1_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_vpy_test_1_t* vpy_test_1)
{
    return mavlink_msg_vpy_test_1_pack_chan(system_id, component_id, chan, msg, vpy_test_1->vpy_test_1);
}

/**
 * @brief Send a vpy_test_1 message
 * @param chan MAVLink channel to send the message
 *
 * @param vpy_test_1 VPY Test
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_vpy_test_1_send(mavlink_channel_t chan, int16_t vpy_test_1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VPY_TEST_1_LEN];
    _mav_put_int16_t(buf, 0, vpy_test_1);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VPY_TEST_1, buf, MAVLINK_MSG_ID_VPY_TEST_1_MIN_LEN, MAVLINK_MSG_ID_VPY_TEST_1_LEN, MAVLINK_MSG_ID_VPY_TEST_1_CRC);
#else
    mavlink_vpy_test_1_t packet;
    packet.vpy_test_1 = vpy_test_1;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VPY_TEST_1, (const char *)&packet, MAVLINK_MSG_ID_VPY_TEST_1_MIN_LEN, MAVLINK_MSG_ID_VPY_TEST_1_LEN, MAVLINK_MSG_ID_VPY_TEST_1_CRC);
#endif
}

/**
 * @brief Send a vpy_test_1 message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_vpy_test_1_send_struct(mavlink_channel_t chan, const mavlink_vpy_test_1_t* vpy_test_1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_vpy_test_1_send(chan, vpy_test_1->vpy_test_1);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VPY_TEST_1, (const char *)vpy_test_1, MAVLINK_MSG_ID_VPY_TEST_1_MIN_LEN, MAVLINK_MSG_ID_VPY_TEST_1_LEN, MAVLINK_MSG_ID_VPY_TEST_1_CRC);
#endif
}

#if MAVLINK_MSG_ID_VPY_TEST_1_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_vpy_test_1_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t vpy_test_1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, vpy_test_1);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VPY_TEST_1, buf, MAVLINK_MSG_ID_VPY_TEST_1_MIN_LEN, MAVLINK_MSG_ID_VPY_TEST_1_LEN, MAVLINK_MSG_ID_VPY_TEST_1_CRC);
#else
    mavlink_vpy_test_1_t *packet = (mavlink_vpy_test_1_t *)msgbuf;
    packet->vpy_test_1 = vpy_test_1;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VPY_TEST_1, (const char *)packet, MAVLINK_MSG_ID_VPY_TEST_1_MIN_LEN, MAVLINK_MSG_ID_VPY_TEST_1_LEN, MAVLINK_MSG_ID_VPY_TEST_1_CRC);
#endif
}
#endif

#endif

// MESSAGE VPY_TEST_1 UNPACKING


/**
 * @brief Get field vpy_test_1 from vpy_test_1 message
 *
 * @return VPY Test
 */
static inline int16_t mavlink_msg_vpy_test_1_get_vpy_test_1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Decode a vpy_test_1 message into a struct
 *
 * @param msg The message to decode
 * @param vpy_test_1 C-struct to decode the message contents into
 */
static inline void mavlink_msg_vpy_test_1_decode(const mavlink_message_t* msg, mavlink_vpy_test_1_t* vpy_test_1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    vpy_test_1->vpy_test_1 = mavlink_msg_vpy_test_1_get_vpy_test_1(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_VPY_TEST_1_LEN? msg->len : MAVLINK_MSG_ID_VPY_TEST_1_LEN;
        memset(vpy_test_1, 0, MAVLINK_MSG_ID_VPY_TEST_1_LEN);
    memcpy(vpy_test_1, _MAV_PAYLOAD(msg), len);
#endif
}
