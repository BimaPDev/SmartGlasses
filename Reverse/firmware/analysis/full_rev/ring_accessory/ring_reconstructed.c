/*
 * Star Air Unicron ring — bond / OTA / gesture reconstruction
 *
 * Evidence: platform_tester.bin 1.0.12.83 (M55 XIP 0x2C000000) + BTH HOGPRH
 * strings in best1600_watch_bth.bin. Pseudocode: HAL/RTOS/BLE stack are stubs.
 *
 * Confirmed Thumb sites (LVGL Ring band, Capstone + litpools):
 *   ViewController_ring_connect_state_callback  @ 0x2C5CA080
 *   RingOtaManager_handle_ota_list              @ 0x2C5CC130
 *   ConnectingView_connect_result               @ 0x2C5CB758
 *   ConnectedViewV1_set_lv_ring_unconnect       @ 0x2C5CBC30
 *   RingService_sync_unicron_update_info        @ 0x2C5CC710
 *   RingService_onRingBondEventListener         @ 0x2C5CD118
 *
 * StarryNet xr_ring_* / ring_ota_* entry VAs are TRACE-opaque (0 static xrefs);
 * FSM and API names below are from rodata only.
 */

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

/* ── OTA enums (strings @ 0x2C034560–0x2C0345B4) ─────────────────────── */

typedef enum {
    ROSE_IDLE = 0,
    ROSE_ENABLE,
    ROSE_QUERY,
    ROSE_PACKET,
    ROSE_RESET,
} ring_ota_state_t;

typedef enum {
    ROPE_START = 0,
    ROPE_ENABLE,
    RPOE_QUERY, /* spelling from binary */
} ring_ota_part_t;

typedef enum {
    RING_OTA_RESULT_SUCESS = 0, /* typo in binary */
    RING_OTA_RESULT_FAILE,
    RORE_OTA_ENABLE_FAIL,
    RORE_OTA_ENABLE_SUCCESS,
} ring_ota_result_t;

/* ── Conn / manager states (from [RING_STATE] + ring_manager logs) ───── */

typedef enum {
    RING_CONN_IDLE = 0,
    RING_CONN_SCANNING,
    RING_CONN_CONNECTING,
    RING_CONN_CONNECTED,
    RING_CONN_DISCONNECTING,
    RING_CONN_UNBINDING,
} ring_conn_state_t;

#define RING_NAME_MIN 1
#define RING_NAME_MAX 30

/* ── Types ───────────────────────────────────────────────────────────── */

typedef struct {
    uint8_t  addr[6];
    uint8_t  addr_type;
    char     name[RING_NAME_MAX + 1];
    uint8_t  has_bond;
} ring_bond_info_t;

typedef struct {
    ring_ota_state_t state;
    uint32_t         ota_offset;
    uint32_t         bin_size;
    uint32_t         send_size;
    uint32_t         local_crc32;
    uint32_t         ring_crc32;
    void           (*progress_cb)(int pct);
    void           (*result_cb)(ring_ota_result_t r);
} ring_ota_ctx_t;

typedef struct {
    ring_conn_state_t conn;
    int               algo_ready;
    int               batt_pct; /* -1 invalid */
    void            (*batt_cb)(unsigned pct);
    void            (*key_cb)(unsigned code, unsigned type, unsigned flags);
} ring_unicron_runtime_t;

/* ── External stubs (elsewhere in firmware) ──────────────────────────── */

int  bes_trace(int level, const void *tag, int line, const char *file, ...);
/* M55 TRACE site used by Ring C++: bl 0x2C62C82C */
int  registry_lookup(uint16_t id); /* 0x2C5E33F0 */
void intersys_to_bth(uint32_t msg, const void *payload, size_t n);
int  ble_scan_start(void);
int  ble_scan_stop(void);
int  ble_gap_connect(const uint8_t addr[6], uint8_t addr_type);
int  ble_gap_disconnect(void);
int  hogp_write_ff10(const uint8_t *data, size_t n);
int  norflash_journal_rw(int op, void *buf, size_t n);

/* ── StarryNet-facing API (names from ring_{scan,bond,conn,ota}.c) ───── */

static ring_bond_info_t      g_bond;
static ring_ota_ctx_t        g_ota;
static ring_unicron_runtime_t g_rt;
static ring_conn_state_t     g_conn_state;

int xr_ring_scan_start(void)
{
    if (g_conn_state == RING_CONN_CONNECTING)
        return -1; /* "[RING_STATE] current state is connecting" */
    g_conn_state = RING_CONN_SCANNING;
    return ble_scan_start();
}

int xr_ring_scan_stop(void)
{
    return ble_scan_stop();
}

/* Banner string: "############### %s find ring_5648 success! ###############" */
void xr_ring_scan_result(const char *adv_name, const uint8_t addr[6], uint8_t at)
{
    (void)adv_name;
    (void)addr;
    (void)at;
}

int xr_ring_set_bond_device(const ring_bond_info_t *info)
{
    if (!info)
        return -1;
    g_bond = *info;
    g_bond.has_bond = 1;
    return 0;
}

int xr_ring_get_bond_device(ring_bond_info_t *out)
{
    if (!out || !g_bond.has_bond)
        return -1;
    *out = g_bond;
    return 0;
}

int xr_ring_remove_bond(void)
{
    if (!g_bond.has_bond)
        return -1; /* "has not bond info, can not remove bond!" */
    if (g_conn_state == RING_CONN_CONNECTING)
        return -1;
    g_conn_state = RING_CONN_UNBINDING;
    g_bond.has_bond = 0;
    g_conn_state = RING_CONN_IDLE;
    return 0;
}

int xr_ring_connect(void)
{
    /* "The power is in power off charging or high temp, no need connect ring" */
    if (g_conn_state == RING_CONN_UNBINDING)
        return -1;
    if (!g_bond.has_bond)
        return -1;
    g_conn_state = RING_CONN_CONNECTING;
    if (ble_gap_connect(g_bond.addr, g_bond.addr_type) != 0) {
        g_conn_state = RING_CONN_IDLE;
        return -1;
    }
    g_conn_state = RING_CONN_CONNECTED;
    return 0;
}

int xr_ring_disconnect(void)
{
    g_conn_state = RING_CONN_DISCONNECTING;
    ble_gap_disconnect();
    g_conn_state = RING_CONN_IDLE;
    g_rt.algo_ready = 0;
    return 0;
}

int xr_ring_auto_conn(void)
{
    /* BTH may send XR_RING_AUTO_CONN over INTERSYS when bond exists */
    return xr_ring_connect();
}

void set_ring_ready_state(int ready)
{
    g_rt.algo_ready = ready;
    /* "ntf ring ready to ring app !" */
}

ring_conn_state_t xr_ring_get_conn_state(void)
{
    return g_conn_state;
}

/* ── HOGP Unicron client (xr_hogprh_unicron.c) ───────────────────────── */

void xr_hogprh_unicron_wakeup_handler(void)
{
    /* resume after BLE wake */
}

void xr_hogprh_unicron_data_handler(int data_type, const uint8_t *val, size_t n)
{
    /* logs: "%s data_type[%d]", "%s key_event val:", "%s batt val[%d]" */
    if (data_type == /* key */ 1 && n >= 3) {
        if (g_rt.key_cb)
            g_rt.key_cb(val[0], val[1], val[2]);
        /* → xjxr_touchpad_unicron bt_ring_event_cb */
    } else if (data_type == /* batt */ 2 && n >= 1) {
        g_rt.batt_pct = val[0];
        if (g_conn_state != RING_CONN_CONNECTED)
            return; /* "[RING_BATT] the ring has not connected" */
        if (!g_rt.algo_ready)
            return; /* "[RING_BATT] the ring algo has not ready" */
        if (!g_rt.batt_cb)
            return; /* "[RING_BATT] the ring batt callback has not register" */
        if (g_rt.batt_pct <= 0 || g_rt.batt_pct > 100)
            return; /* invalid */
        g_rt.batt_cb((unsigned)g_rt.batt_pct); /* "ntf batt to app!" */
    } else if (data_type == /* algo complete */ 3) {
        set_ring_ready_state(1);
    }
}

int xr_ring_modify_name(const char *name)
{
    size_t len = 0;
    if (!name)
        return -1;
    while (name[len])
        len++;
    if (len < RING_NAME_MIN || len > RING_NAME_MAX)
        return -1; /* "the ring name len illegal! max_len[30] min_len[1]" */
    if (g_conn_state != RING_CONN_CONNECTED || !g_rt.algo_ready)
        return -1; /* "has not connected or ring algo is not ready!" */
    /* reject if equal to curr_name — string in binary */
    return hogp_write_ff10((const uint8_t *)name, len);
}

/* ── OTA FSM (ring_ota.c) ────────────────────────────────────────────── */

static void ring_ota_set_state(ring_ota_state_t next)
{
    /* "[RING_OTA] %s state[%d][%s]->[%d][%s]" */
    g_ota.state = next;
}

int ring_ota_request_pre_check(void)
{
    /* "[RING_OTA] %s ring channel has not ready!" */
    return (g_conn_state == RING_CONN_CONNECTED && g_rt.algo_ready) ? 0 : -1;
}

int ring_ota_start(uint32_t bin_size, uint32_t crc32)
{
    if (ring_ota_request_pre_check() != 0)
        return -1;
    g_ota.bin_size = bin_size;
    g_ota.local_crc32 = crc32;
    g_ota.send_size = 0;
    g_ota.ota_offset = 0;
    ring_ota_set_state(ROSE_ENABLE);
    /* enable → query → packet → reset */
    return 0;
}

int ring_ota_enable_request(void)
{
    if (g_ota.state != ROSE_ENABLE)
        return -1; /* fatal state/part mismatch */
    ring_ota_set_state(ROSE_QUERY);
    return 0;
}

int ring_ota_query_request(void)
{
    if (g_ota.state != ROSE_QUERY)
        return -1;
    ring_ota_set_state(ROSE_PACKET);
    return 0;
}

int ring_ota_packet_request(const uint8_t *body, uint32_t body_size)
{
    if (g_ota.state != ROSE_PACKET)
        return -1;
    /* "[RING_OTA] %s otaOffset =%d, body size = %d" */
    g_ota.ota_offset += body_size;
    g_ota.send_size += body_size;
    if (g_ota.progress_cb && g_ota.bin_size)
        g_ota.progress_cb((int)((g_ota.send_size * 100u) / g_ota.bin_size));
    return 0;
}

int ring_ota_reset_request(void)
{
    ring_ota_set_state(ROSE_RESET);
    /* compare local vs ring crc32 */
    if (g_ota.local_crc32 == g_ota.ring_crc32) {
        if (g_ota.result_cb)
            g_ota.result_cb(RING_OTA_RESULT_SUCESS);
        ring_ota_set_state(ROSE_IDLE);
        return 0;
    }
    if (g_ota.result_cb)
        g_ota.result_cb(RING_OTA_RESULT_FAILE);
    ring_ota_set_state(ROSE_IDLE);
    return -1;
}

int ring_ota_cancel(void)
{
    ring_ota_set_state(ROSE_IDLE);
    return 0;
}

/* ── Gesture bridge (xjxr_touchpad_unicron.c) ────────────────────────── */

static int g_screen_off;
static int g_pressure_armed;

void xjxr_touchpad_unicron_init(void)
{
    g_rt.key_cb = NULL; /* registered by input framework */
    /* log: "xjxr_touchpad_unicron_init." */
}

void bt_ring_event_cb(unsigned a, unsigned b, unsigned c)
{
    /* "bt_ring_event_cb: [%x, %x, %x]" */
    if (/* not a correct bt ring key event */ (a | b | c) == 0)
        return;
    if (g_screen_off)
        return; /* intercepted when screen off */
    if (/* single pressure */ b == 1)
        g_pressure_armed = 1;
    if (/* single tap */ b == 2 && g_pressure_armed) {
        g_pressure_armed = 0;
        /* "single tap is debounced after event single pressure" */
        return;
    }
    /* forward into LVGL/input queue */
}

/* ── Confirmed LVGL / service veneers (real VAs) ─────────────────────── */

/* FUN_2c5ca080 — ViewController::ring_connect_state_callback */
void ViewController_ring_connect_state_callback(void *msg)
{
    (void)msg;
    /* Capstone: JSON field parse + TRACE line 0x479 then UI update helpers
     * 0x2C5C6CC4 / 0x2C5C7664 */
}

/* FUN_2c5cc130 — RingOtaManager OTA package list handler */
void RingOtaManager_handle_ota_list(void *json)
{
    (void)json;
    /* TRACE "com.upuphone.star.ring.ota" @ RingOtaManager.cpp:0x64F */
}

/* FUN_2c5cb758 — ConnectingView connect result */
void ConnectingView_connect_result(int ok)
{
    if (ok) {
        /* "ring connect succeed" → ConnectedViewV1 if bound */
    } else {
        /* "ring connect failed" / ignore if already succeeded */
    }
}

/* FUN_2c5cbc30 — set LV_RING_UNCONNECT / UNCONNECTED */
void ConnectedViewV1_set_lv_ring_unconnect(int connected)
{
    uint16_t id = connected ? 0x1051 : 0x1050;
    registry_lookup(id); /* bl 0x2C5E33F0 */
}

/* FUN_2c5cc710 — RingService sync_unicron_update_info / check_unicron_update */
void RingService_sync_unicron_update_info(void *svc, int force)
{
    (void)svc;
    (void)force;
    /* litpools: sync_unicron_update_info, check_unicron_update, Failed/Success */
}

/* FUN_2c5cd118 — onRingBondEventListener */
void RingService_onRingBondEventListener(void *svc, const char *mac, int single_unbound)
{
    (void)svc;
    (void)mac;
    (void)single_unbound;
    /* "onRingBondEventListener isSingleUnbound: %d", updateRingMacAddr */
}

/* FUN_2c531c44 — stop scan when ring app disappears */
void Ring_stop_scan_on_disappear(void *app, void *msg, unsigned kind)
{
    (void)app;
    (void)msg;
    (void)kind;
    /* "ring app will disappear, stop scan" */
    xr_ring_scan_stop();
}
