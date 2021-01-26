/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.6 at Wed Oct 26 00:46:10 2016. */

#ifndef PB_ESC_STATUS_PB_H_INCLUDED
#define PB_ESC_STATUS_PB_H_INCLUDED
#include <pb.h>

#include "esc_report.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _px4_esc_status_pb_ESC_VENDOR {
    px4_esc_status_pb_ESC_VENDOR_ESC_VENDOR_GENERIC = 0,
    px4_esc_status_pb_ESC_VENDOR_ESC_VENDOR_MIKROKOPTER = 1,
    px4_esc_status_pb_ESC_VENDOR_ESC_VENDOR_GRAUPNER_HOTT = 2,
    px4_esc_status_pb_ESC_VENDOR_ESC_VENDOR_TAP = 3
} px4_esc_status_pb_ESC_VENDOR;
#define _px4_esc_status_pb_ESC_VENDOR_MIN px4_esc_status_pb_ESC_VENDOR_ESC_VENDOR_GENERIC
#define _px4_esc_status_pb_ESC_VENDOR_MAX px4_esc_status_pb_ESC_VENDOR_ESC_VENDOR_TAP
#define _px4_esc_status_pb_ESC_VENDOR_ARRAYSIZE ((px4_esc_status_pb_ESC_VENDOR)(px4_esc_status_pb_ESC_VENDOR_ESC_VENDOR_TAP+1))

typedef enum _px4_esc_status_pb_ESC_CONNECTIN_TYPE {
    px4_esc_status_pb_ESC_CONNECTIN_TYPE_ESC_CONNECTIN_TYPE_PPM = 0,
    px4_esc_status_pb_ESC_CONNECTIN_TYPE_ESC_CONNECTIN_TYPE_SERIAL = 1,
    px4_esc_status_pb_ESC_CONNECTIN_TYPE_ESC_CONNECTIN_TYPE_ONESHOOT = 2,
    px4_esc_status_pb_ESC_CONNECTIN_TYPE_ESC_CONNECTIN_TYPE_I2C = 3,
    px4_esc_status_pb_ESC_CONNECTIN_TYPE_ESC_CONNECTIN_TYPE_CAN = 4
} px4_esc_status_pb_ESC_CONNECTIN_TYPE;
#define _px4_esc_status_pb_ESC_CONNECTIN_TYPE_MIN px4_esc_status_pb_ESC_CONNECTIN_TYPE_ESC_CONNECTIN_TYPE_PPM
#define _px4_esc_status_pb_ESC_CONNECTIN_TYPE_MAX px4_esc_status_pb_ESC_CONNECTIN_TYPE_ESC_CONNECTIN_TYPE_CAN
#define _px4_esc_status_pb_ESC_CONNECTIN_TYPE_ARRAYSIZE ((px4_esc_status_pb_ESC_CONNECTIN_TYPE)(px4_esc_status_pb_ESC_CONNECTIN_TYPE_ESC_CONNECTIN_TYPE_CAN+1))

/* Struct definitions */
typedef struct _px4_esc_status_pb {
    uint64_t timestamp;
    uint32_t counter;
    uint32_t count;
    uint32_t connectiontype;
    pb_size_t esc_count;
    px4_esc_report_pb esc[8];
/* @@protoc_insertion_point(struct:px4_esc_status_pb) */
} px4_esc_status_pb;

/* Default values for struct fields */

/* Initializer values for message structs */
#define px4_esc_status_pb_init_default           {0, 0, 0, 0, 0, {px4_esc_report_pb_init_default, px4_esc_report_pb_init_default, px4_esc_report_pb_init_default, px4_esc_report_pb_init_default, px4_esc_report_pb_init_default, px4_esc_report_pb_init_default, px4_esc_report_pb_init_default, px4_esc_report_pb_init_default}}
#define px4_esc_status_pb_init_zero              {0, 0, 0, 0, 0, {px4_esc_report_pb_init_zero, px4_esc_report_pb_init_zero, px4_esc_report_pb_init_zero, px4_esc_report_pb_init_zero, px4_esc_report_pb_init_zero, px4_esc_report_pb_init_zero, px4_esc_report_pb_init_zero, px4_esc_report_pb_init_zero}}

/* Field tags (for use in manual encoding/decoding) */
#define px4_esc_status_pb_timestamp_tag          1
#define px4_esc_status_pb_counter_tag            2
#define px4_esc_status_pb_count_tag              3
#define px4_esc_status_pb_connectiontype_tag     4
#define px4_esc_status_pb_esc_tag                5

/* Struct field encoding specification for nanopb */
extern const pb_field_t px4_esc_status_pb_fields[6];

/* Maximum encoded size of messages (where known) */
#define px4_esc_status_pb_size                   (77 + 8*px4_esc_report_pb_size)

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define ESC_STATUS_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
