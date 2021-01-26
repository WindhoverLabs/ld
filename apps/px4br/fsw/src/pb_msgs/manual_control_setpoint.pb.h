/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.6 at Wed Oct 26 00:46:13 2016. */

#ifndef PB_MANUAL_CONTROL_SETPOINT_PB_H_INCLUDED
#define PB_MANUAL_CONTROL_SETPOINT_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _px4_manual_control_setpoint_pb_SWITCH_POS {
    px4_manual_control_setpoint_pb_SWITCH_POS_SWITCH_POS_NONE = 0,
    px4_manual_control_setpoint_pb_SWITCH_POS_SWITCH_POS_ON = 1,
    px4_manual_control_setpoint_pb_SWITCH_POS_SWITCH_POS_MIDDLE = 2,
    px4_manual_control_setpoint_pb_SWITCH_POS_SWITCH_POS_OFF = 3
} px4_manual_control_setpoint_pb_SWITCH_POS;
#define _px4_manual_control_setpoint_pb_SWITCH_POS_MIN px4_manual_control_setpoint_pb_SWITCH_POS_SWITCH_POS_NONE
#define _px4_manual_control_setpoint_pb_SWITCH_POS_MAX px4_manual_control_setpoint_pb_SWITCH_POS_SWITCH_POS_OFF
#define _px4_manual_control_setpoint_pb_SWITCH_POS_ARRAYSIZE ((px4_manual_control_setpoint_pb_SWITCH_POS)(px4_manual_control_setpoint_pb_SWITCH_POS_SWITCH_POS_OFF+1))

typedef enum _px4_manual_control_setpoint_pb_MODE_SLOT {
    px4_manual_control_setpoint_pb_MODE_SLOT_MODE_SLOT_NONE = -1,
    px4_manual_control_setpoint_pb_MODE_SLOT_MODE_SLOT_1 = 0,
    px4_manual_control_setpoint_pb_MODE_SLOT_MODE_SLOT_2 = 1,
    px4_manual_control_setpoint_pb_MODE_SLOT_MODE_SLOT_3 = 2,
    px4_manual_control_setpoint_pb_MODE_SLOT_MODE_SLOT_4 = 3,
    px4_manual_control_setpoint_pb_MODE_SLOT_MODE_SLOT_5 = 4,
    px4_manual_control_setpoint_pb_MODE_SLOT_MODE_SLOT_6 = 5,
    px4_manual_control_setpoint_pb_MODE_SLOT_MODE_SLOT_MAX = 6
} px4_manual_control_setpoint_pb_MODE_SLOT;
#define _px4_manual_control_setpoint_pb_MODE_SLOT_MIN px4_manual_control_setpoint_pb_MODE_SLOT_MODE_SLOT_NONE
#define _px4_manual_control_setpoint_pb_MODE_SLOT_MAX px4_manual_control_setpoint_pb_MODE_SLOT_MODE_SLOT_MAX
#define _px4_manual_control_setpoint_pb_MODE_SLOT_ARRAYSIZE ((px4_manual_control_setpoint_pb_MODE_SLOT)(px4_manual_control_setpoint_pb_MODE_SLOT_MODE_SLOT_MAX+1))

/* Struct definitions */
typedef struct _px4_manual_control_setpoint_pb {
    uint64_t timestamp;
    float x;
    float y;
    float z;
    float r;
    float flaps;
    float aux1;
    float aux2;
    float aux3;
    float aux4;
    float aux5;
    uint32_t mode_switch;
    uint32_t return_switch;
    uint32_t rattitude_switch;
    uint32_t posctl_switch;
    uint32_t loiter_switch;
    uint32_t acro_switch;
    uint32_t offboard_switch;
    uint32_t kill_switch;
    uint32_t transition_switch;
    int32_t mode_slot;
/* @@protoc_insertion_point(struct:px4_manual_control_setpoint_pb) */
} px4_manual_control_setpoint_pb;

/* Default values for struct fields */

/* Initializer values for message structs */
#define px4_manual_control_setpoint_pb_init_default {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define px4_manual_control_setpoint_pb_init_zero {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define px4_manual_control_setpoint_pb_timestamp_tag 1
#define px4_manual_control_setpoint_pb_x_tag     2
#define px4_manual_control_setpoint_pb_y_tag     3
#define px4_manual_control_setpoint_pb_z_tag     4
#define px4_manual_control_setpoint_pb_r_tag     5
#define px4_manual_control_setpoint_pb_flaps_tag 6
#define px4_manual_control_setpoint_pb_aux1_tag  7
#define px4_manual_control_setpoint_pb_aux2_tag  8
#define px4_manual_control_setpoint_pb_aux3_tag  9
#define px4_manual_control_setpoint_pb_aux4_tag  10
#define px4_manual_control_setpoint_pb_aux5_tag  11
#define px4_manual_control_setpoint_pb_mode_switch_tag 12
#define px4_manual_control_setpoint_pb_return_switch_tag 13
#define px4_manual_control_setpoint_pb_rattitude_switch_tag 14
#define px4_manual_control_setpoint_pb_posctl_switch_tag 15
#define px4_manual_control_setpoint_pb_loiter_switch_tag 16
#define px4_manual_control_setpoint_pb_acro_switch_tag 17
#define px4_manual_control_setpoint_pb_offboard_switch_tag 18
#define px4_manual_control_setpoint_pb_kill_switch_tag 19
#define px4_manual_control_setpoint_pb_transition_switch_tag 20
#define px4_manual_control_setpoint_pb_mode_slot_tag 21

/* Struct field encoding specification for nanopb */
extern const pb_field_t px4_manual_control_setpoint_pb_fields[22];

/* Maximum encoded size of messages (where known) */
#define px4_manual_control_setpoint_pb_size      132

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define MANUAL_CONTROL_SETPOINT_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
