/*
 * Star Air sensors / IMU / sensor-hub — readable reconstruction
 *
 * Firmware: platform_tester.bin 1.0.12.83, M55 XIP 0x2C000000.
 * Evidence: ASCII source paths + TRACE tags + Capstone literal pools at
 * 0x2C5267C0–0x2C526CB0 (xjxr_mcu_sensor_communicate) and
 * 0x2C5299C8–0x2C529BE4 (accel_gyro_s / AGM). See SENSORS_IMU.md.
 *
 * Pseudocode only. No invented IMU register map — chip part number is not
 * present as an ASCII string in this build.
 */

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

/* ── IPC channel names (strings @ file 0x41B74 / 0x146C9C) ───────────── */

#define XJXR_CH_M55_TO_SNS   "xjxr_m552sns"
#define XJXR_CH_SNS_TO_M55   "xjxr_sns2m55"
#define XJXR_MS_MUTEX_NAME   "xjxr_ms_mutex"

/* Sensor Hub flash (banner @ file 0x14A663) */
#define SENSOR_HUB_FLASH_BASE    0x34000000u
#define SENSOR_HUB_FLASH_NC_BASE 0x30000000u
#define SENSOR_HUB_FLASH_SIZE    0x00100000u

/* Dtype value that hits "Data type %d not supported" TRACE in FUN_2c527564 */
#define XJXR_DTYPE_UNSUPPORTED_TRACE  0x0Du

/* ── types ────────────────────────────────────────────────────────────── */

typedef enum {
    XJXR_ROUTE_M55_TO_SNS = 0,
    XJXR_ROUTE_SNS_TO_M55 = 1,
} xjxr_route_dir_t;

typedef struct {
    uint8_t  msg_id;
    uint8_t  _pad[3];
    uint16_t data_len;
    uint8_t  data[];          /* payload; logged as hex/ASCII in TRACE */
} xjxr_mcu_sensor_msg_t;

typedef void (*xjxr_rx_msg_handler_t)(const xjxr_mcu_sensor_msg_t *msg, void *ctx);

typedef struct {
    int                   cmd_id;
    xjxr_rx_msg_handler_t handler;
    void                 *ctx;
} xjxr_rx_handler_slot_t;

/* AGM software state — names from format string @ 0x148FC8 */
typedef struct {
    int amg_type;     /* product / sensor type id */
    int g_ag_init;    /* accel-gyro inited */
    int g_m_init;     /* mag (or secondary) inited */
    int en;           /* enabled */
    int g_ag_reg;     /* accel-gyro listener registry count/flag */
    int g_m_reg;      /* mag registry count/flag */
} agm_runtime_t;

typedef struct {
    int16_t ax, ay, az;
    int16_t gx, gy, gz;
    uint32_t timestamp_ms;
} agm_sample_t;

typedef void (*agm_listener_t)(const agm_sample_t *s, void *ctx);

/* ── external HAL / RTOS stubs ────────────────────────────────────────── */

int  hal_mcu2sens_open(void);                          /* fail → TRACE "hal_mcu2sens_open failed" */
int  hal_mcu2sens_start_recv(void);                    /* fail → TRACE @ 0x2c527144 */
int  sensor_hub_open(void);                            /* load simple subsys @ 0x34000000 */
int  hal_rmt_ipc_send_seq(const void *buf, int len);   /* string "hal_rmt_ipc_send_seq" */
void xjxr_ms_mutex_lock(void);
void xjxr_ms_mutex_unlock(void);
void TRACE(int level, int line, ...);                  /* FUN_2c62c82c family */
void *registry_lookup(unsigned id);                    /* LVGL / i18n registry */
void lv_obj_add_flag_invalidate(void *obj, int flag);  /* UI edge @ FUN_2c5282a0 */

/* ── M55 accel_gyro API surface (TRACE function-name tags @ 0x38D28+) ── */

/* init_xr_m55_sensor_mgr — TRACE tag @ 0x38D28 */
int init_xr_m55_sensor_mgr(void);

/* register_accel_gyro_listner — typo preserved from binary @ 0x38E9C */
int register_accel_gyro_listner(agm_listener_t cb, void *ctx);

/* unegister_accel_gyro_listner — typo preserved @ 0x38EE4 */
int unegister_accel_gyro_listner(agm_listener_t cb);

/* sensor_ag_poll_notify — @ 0x38D88 */
void sensor_ag_poll_notify(void);

/* sensor_factory_data_notify — @ 0x38E40 */
void sensor_factory_data_notify(const void *blob, int len);

/* ── communicate: mapped VAs ──────────────────────────────────────────── */

/*
 * FUN_2c5267c0 — TRACE helper after probing IPC vtable (+0xc0).
 * Pool: communicate.cpp path, rmt_ipc_send_seq.
 */
void xjxr_mcu_sensor_ipc_trace(void) /* VA 0x2c5267c0 */
{
    void *iface = /* sensor iface object */ NULL;
    int v = 0;
    /* firmware: FUN_2c525874(); iface = FUN_2c5259c0(); */
    if (iface) {
        /* call virtual @ +0xc0 */
        v = 0;
    }
    TRACE(4, 0x1f7 /* line */, /* file */ 0, /* func */ 0, v);
}

/*
 * Capstone entry 0x2c52680c — Ghidra did not emit a FUN_* for this body.
 * Literal pool proves membership in xjxr_mcu_sensor_communicate.cpp:
 *   msg_id format, demo_no_rsp_cmd_received_handler, "2sns" (m552sns),
 *   "unsupported message route direction", xjxr_register_rx_msg_handler.
 */
int xjxr_mcu_sensor_msg_dispatch(const xjxr_mcu_sensor_msg_t *msg,
                                 xjxr_route_dir_t dir) /* VA 0x2c52680c */
{
    if (!msg) {
        TRACE(4, /* line */, /* "msg_data: NULL" path */);
        return -1;
    }

    TRACE(4, /* line */,
          /* "msg_id: %02x, msg_data: %s, msg_data_len: %d" */,
          msg->msg_id, msg->data, msg->data_len);

    if (dir != XJXR_ROUTE_M55_TO_SNS && dir != XJXR_ROUTE_SNS_TO_M55) {
        TRACE(4, /* line */,
              /* "%s unsupported message route direction:" */,
              "xjxr_mcu_sensor_communicate");
        return -1;
    }

    /* Lookup registered handler; missing → "%s handler [%d 0x%p] not exist" */
    xjxr_rx_handler_slot_t *slot = NULL; /* table search omitted */
    if (!slot || !slot->handler) {
        TRACE(4, /* line */, /* handler not exist */, msg->msg_id, (void *)0);
        return -1;
    }

    slot->handler(msg, slot->ctx);
    return 0;
}

/*
 * FUN_2c526a40 — mutex-guarded bridge path.
 * Pool: xjxr_ms_mutex, "xjxr mcu_sensor communication".
 */
int xjxr_mcu_sensor_bridge_locked(int cmd, const void *payload, int len)
    /* VA 0x2c526a40 */
{
    xjxr_ms_mutex_lock();
    /* validate cmd entry / tx buf size — TRACE "rx buf size!", "wrong_cmdcode=%x" */
    int rc = hal_rmt_ipc_send_seq(payload, len);
    xjxr_ms_mutex_unlock();
    return rc;
}

int xjxr_register_rx_msg_handler(int cmd_id, xjxr_rx_msg_handler_t h, void *ctx)
{
    /* fail paths TRACE "already exist" / success stores slot */
    (void)cmd_id; (void)h; (void)ctx;
    return 0;
}

int xjxr_unregister_rx_msg_handler(int cmd_id)
{
    (void)cmd_id;
    return 0;
}

int xjxr_mcu_sensor_receive_message_no_rsp(const xjxr_mcu_sensor_msg_t *msg)
{
    return xjxr_mcu_sensor_msg_dispatch(msg, XJXR_ROUTE_SNS_TO_M55);
}

/* ── common sensor (hub) — mapped TRACE / guard VAs ───────────────────── */

/* FUN_2c52751c — init probe; TRACE into xjxr_common_sensor.c on failure */
int xjxr_common_sensor_init_guard(void) /* VA 0x2c52751c */
{
    /* FUN_2c525874(); if (FUN_2c5259c0() != 0) TRACE(... common_sensor.c); */
    return 0;
}

/*
 * FUN_2c527564 — decomp:
 *   FUN_2c602414();
 *   dt = FUN_2c602408(evt);
 *   if (dt != 0xd) return;
 *   FUN_2c602618(evt);
 *   TRACE(..., "sensor: Data type %d not supported", 0xd);
 * So 0xd is the dtype value that takes the unsupported TRACE path (not a
 * generic "only allow 0xd" filter).
 */
void xjxr_common_sensor_bad_dtype(void *evt) /* VA 0x2c527564 */
{
    int dt = 0; /* FUN_2c602408(evt) */
    if (dt != XJXR_DTYPE_UNSUPPORTED_TRACE) {
        return;
    }
    /* FUN_2c602618(evt); */
    TRACE(3, 0x102, 0, 0, 0, XJXR_DTYPE_UNSUPPORTED_TRACE);
}

/* submit_sensor_data_event — TRACE tag @ 0x1477E0 (body not fully recovered) */
int submit_sensor_data_event(int type, int dtype, const void *data, int len);

/* ── AGM / accel_gyro_s ───────────────────────────────────────────────── */

static agm_runtime_t g_agm; /* stands in for g_ag_* / g_m_* globals */

/*
 * FUN_2c5299c8 — noreturn TRACE for sensor_agm_event_callback.
 * Pool: accel_gyro_s.cpp path + "sensor_agm_event_callback", line imm 0x2c.
 */
void sensor_agm_event_callback_trace(void *ctx) /* VA 0x2c5299c8 */
{
    (void)ctx;
    TRACE(4, 0x2c, /* accel_gyro_s.cpp */, /* sensor_agm_event_callback */);
}

/* FUN_2c529b34 — factory data callback TRACE */
void sensor_factory_data_callback_trace(void *ctx) /* VA 0x2c529b34 */
{
    (void)ctx;
    TRACE(4, /* line */, /* "sensor_factory_data_callback" */);
}

/*
 * FUN_2c529be4 — builds ordered id/name table then dumps AGM registry.
 * Format fragments in pool resolve to amg_type / g_ag_init / g_m_reg string.
 */
int sensor_agm_registry_dump(void) /* VA 0x2c529be4 */
{
    /* firmware packs labels 0..8 then calls FUN_2c4fd9cc / FUN_2c66ee38 */
    TRACE(4, /* line */,
          /* "%s, amg_type=%d, g_ag_init=%d, g_m_init=%d, en=%d, g_ag_reg=%d, g_m_reg=%d" */,
          "agm",
          g_agm.amg_type, g_agm.g_ag_init, g_agm.g_m_init,
          g_agm.en, g_agm.g_ag_reg, g_agm.g_m_reg);
    return 0;
}

/* Hub-side callback name from string @ 0x148F78 */
void sensor_agm_event_callback(const agm_sample_t *s, void *ctx)
{
    (void)ctx;
    if (!s) {
        sensor_agm_event_callback_trace(NULL);
        return;
    }
    /* Forward toward M55 via xjxr_sns2m55 when listeners registered */
    g_agm.g_ag_reg = 1;
}

/* ── bring-up sketch (string-ordered, not a single recovered function) ── */

int sensors_imu_bringup(void)
{
    int rc;

    rc = sensor_hub_open();
    if (rc != 0) {
        TRACE(4, /* line */, /* "sensor_hub_open failed: %d" */, rc);
        return rc;
    }

    rc = hal_mcu2sens_open();
    if (rc != 0) {
        TRACE(4, /* line */, /* "hal_mcu2sens_open failed: %d" */, rc);
        return rc;
    }

    rc = hal_mcu2sens_start_recv();
    if (rc != 0) {
        /* VA 0x2c527144 */
        TRACE(4, 0x28e, /* "hal_mcu2sens_start_recv failed: %d" */, rc);
        return rc;
    }

    /* Hub: notify_mcu_sensorhub_ready / sns_ready handshake */
    /* VA 0x2c527494 TRACE stub references notify_mcu_sensorhub_ready */

    init_xr_m55_sensor_mgr();
    xjxr_common_sensor_init_guard();
    return 0;
}

/*
 * FUN_2c5282a0 — LVGL edge that resolves "sns_ready" via FUN_2c5e2e8c /
 * registry_lookup and invalidates widgets. Cited as UI integration edge.
 */
void ui_sns_ready_bind(void *view, int ready) /* VA 0x2c5282a0 */
{
    if (!view) {
        return;
    }
    if (ready) {
        void *label = registry_lookup(/* sns_ready */);
        (void)label;
        lv_obj_add_flag_invalidate(view, 1);
    }
}

/* ── factory (fac_cmd_sensor.c) — string surface only ─────────────────── */

int fac_enable_sensor(int type);
int fac_disable_sensor(int type);
int fac_get_sensor_data(int type, void *out, int out_len);
int fac_sensor_cali(int type, int *result6 /* six ints */);
/* On CRC fail of stored IMU cal blob: TRACE "imu cal crc error" @ 0x160DCC */
