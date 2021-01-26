/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.6 at Wed Oct 26 00:46:17 2016. */

#ifndef PB_VEHICLE_LOCAL_POSITION_PB_H_INCLUDED
#define PB_VEHICLE_LOCAL_POSITION_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _px4_vehicle_local_position_pb {
    uint64_t timestamp;
    uint64_t ref_timestamp;
    double ref_lat;
    double ref_lon;
    uint64_t surface_bottom_timestamp;
    float x;
    float y;
    float z;
    float vx;
    float vy;
    float vz;
    float yaw;
    float ref_alt;
    float dist_bottom;
    float dist_bottom_rate;
    float eph;
    float epv;
    bool xy_valid;
    bool z_valid;
    bool v_xy_valid;
    bool v_z_valid;
    bool xy_global;
    bool z_global;
    bool dist_bottom_valid;
/* @@protoc_insertion_point(struct:px4_vehicle_local_position_pb) */
} px4_vehicle_local_position_pb;

/* Default values for struct fields */

/* Initializer values for message structs */
#define px4_vehicle_local_position_pb_init_default {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define px4_vehicle_local_position_pb_init_zero  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define px4_vehicle_local_position_pb_timestamp_tag 1
#define px4_vehicle_local_position_pb_ref_timestamp_tag 2
#define px4_vehicle_local_position_pb_ref_lat_tag 3
#define px4_vehicle_local_position_pb_ref_lon_tag 4
#define px4_vehicle_local_position_pb_surface_bottom_timestamp_tag 5
#define px4_vehicle_local_position_pb_x_tag      6
#define px4_vehicle_local_position_pb_y_tag      7
#define px4_vehicle_local_position_pb_z_tag      8
#define px4_vehicle_local_position_pb_vx_tag     9
#define px4_vehicle_local_position_pb_vy_tag     10
#define px4_vehicle_local_position_pb_vz_tag     11
#define px4_vehicle_local_position_pb_yaw_tag    12
#define px4_vehicle_local_position_pb_ref_alt_tag 13
#define px4_vehicle_local_position_pb_dist_bottom_tag 14
#define px4_vehicle_local_position_pb_dist_bottom_rate_tag 15
#define px4_vehicle_local_position_pb_eph_tag    16
#define px4_vehicle_local_position_pb_epv_tag    17
#define px4_vehicle_local_position_pb_xy_valid_tag 18
#define px4_vehicle_local_position_pb_z_valid_tag 19
#define px4_vehicle_local_position_pb_v_xy_valid_tag 20
#define px4_vehicle_local_position_pb_v_z_valid_tag 21
#define px4_vehicle_local_position_pb_xy_global_tag 22
#define px4_vehicle_local_position_pb_z_global_tag 23
#define px4_vehicle_local_position_pb_dist_bottom_valid_tag 24

/* Struct field encoding specification for nanopb */
extern const pb_field_t px4_vehicle_local_position_pb_fields[25];

/* Maximum encoded size of messages (where known) */
#define px4_vehicle_local_position_pb_size       134

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define VEHICLE_LOCAL_POSITION_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
