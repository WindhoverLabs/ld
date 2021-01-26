/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.6 at Wed Oct 26 00:46:17 2016. */

#ifndef PB_VEHICLE_ATTITUDE_PB_H_INCLUDED
#define PB_VEHICLE_ATTITUDE_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _px4_vehicle_attitude_pb {
    uint64_t timestamp;
    float roll;
    float pitch;
    float yaw;
    float rollspeed;
    float pitchspeed;
    float yawspeed;
    float rollacc;
    float pitchacc;
    float yawacc;
    float rate_vibration;
    float accel_vibration;
    float mag_vibration;
    pb_size_t rate_offsets_count;
    float rate_offsets[3];
    pb_size_t R_count;
    float R[9];
    pb_size_t q_count;
    float q[4];
    pb_size_t g_comp_count;
    float g_comp[3];
    bool R_valid;
    bool q_valid;
/* @@protoc_insertion_point(struct:px4_vehicle_attitude_pb) */
} px4_vehicle_attitude_pb;

/* Default values for struct fields */

/* Initializer values for message structs */
#define px4_vehicle_attitude_pb_init_default     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, {0, 0, 0}, 0, {0, 0, 0, 0, 0, 0, 0, 0, 0}, 0, {0, 0, 0, 0}, 0, {0, 0, 0}, 0, 0}
#define px4_vehicle_attitude_pb_init_zero        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, {0, 0, 0}, 0, {0, 0, 0, 0, 0, 0, 0, 0, 0}, 0, {0, 0, 0, 0}, 0, {0, 0, 0}, 0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define px4_vehicle_attitude_pb_timestamp_tag    1
#define px4_vehicle_attitude_pb_roll_tag         2
#define px4_vehicle_attitude_pb_pitch_tag        3
#define px4_vehicle_attitude_pb_yaw_tag          4
#define px4_vehicle_attitude_pb_rollspeed_tag    5
#define px4_vehicle_attitude_pb_pitchspeed_tag   6
#define px4_vehicle_attitude_pb_yawspeed_tag     7
#define px4_vehicle_attitude_pb_rollacc_tag      8
#define px4_vehicle_attitude_pb_pitchacc_tag     9
#define px4_vehicle_attitude_pb_yawacc_tag       10
#define px4_vehicle_attitude_pb_rate_vibration_tag 11
#define px4_vehicle_attitude_pb_accel_vibration_tag 12
#define px4_vehicle_attitude_pb_mag_vibration_tag 13
#define px4_vehicle_attitude_pb_rate_offsets_tag 14
#define px4_vehicle_attitude_pb_R_tag            15
#define px4_vehicle_attitude_pb_q_tag            16
#define px4_vehicle_attitude_pb_g_comp_tag       17
#define px4_vehicle_attitude_pb_R_valid_tag      18
#define px4_vehicle_attitude_pb_q_valid_tag      19

/* Struct field encoding specification for nanopb */
extern const pb_field_t px4_vehicle_attitude_pb_fields[20];

/* Maximum encoded size of messages (where known) */
#define px4_vehicle_attitude_pb_size             179

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define VEHICLE_ATTITUDE_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
