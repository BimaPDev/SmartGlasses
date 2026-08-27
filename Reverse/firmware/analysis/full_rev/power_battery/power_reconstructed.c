/*
 * Star Air power / battery / PMU path — readable reconstruction
 *
 * Image: x_1.0.12.83/platform_tester.bin  XIP 0x2C000000
 * Sources (string evidence):
 *   battery_mgr.cpp, xjxr_battery_stats.cpp, cw221X-fuel-gauge.c,
 *   sc7288_charger.c, pmu_best1600.c, lv_power_manager.c,
 *   xjxr_system_sleep.cpp, wear_detection.cpp
 *
 * HUD SOC display / circle patch history: see
 *   Reverse/firmware/analysis/BATT_CIRCLE_POSTMORTEM.md (cite only).
 *
 * Pseudocode preserves Ghidra-recovered control flow. HAL/RTOS/LVGL
 * symbols are stubs named to match binary call sites.
 */

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

/* ── addresses (VA) ─────────────────────────────────────────────────── */

#define XIP_BASE                0x2C000000u

#define VA_SOC_GET              0x2C48A2C4u  /* FUN_2c48a2c4 */
#define VA_CHG_FLAG_GET         0x2C48A2B8u  /* FUN_2c48a2b8 */
#define VA_SOC_THUNK            0x2C5D68D8u  /* FUN_2c5d68d8 */
#define VA_ICON_PICK            0x2C5CFE2Cu  /* FUN_2c5cfe2c */
#define VA_BM_UPDATE            0x2C489BD0u  /* FUN_2c489bd0 */
#define VA_BM_REG_LISTENER      0x2C48A2D0u  /* FUN_2c48a2d0 */
#define VA_BM_REG_VMON          0x2C48A0C0u  /* FUN_2c48a0c0 */
#define VA_FG_CAPACITY          0x2C49D134u  /* FUN_2c49d134 */
#define VA_FG_VOLTAGE           0x2C49D108u  /* FUN_2c49d108 */
#define VA_FG_PROBE             0x2C49D6ACu  /* FUN_2c49d6ac — id 0xA0 */
#define VA_LV_POWER_HOOKS       0x2C642C66u  /* FUN_2c642c66 */

/* Cached SOC (u16, 0–100) — BATT_CIRCLE_POSTMORTEM + litpool @ 0x2C48A2CC */
#define SRAM_SOC_U16            0x3C408A6Eu
/* Charging / USB-plug present flag (u8) — litpool @ 0x2C48A2C0 */
#define SRAM_CHG_FLAG_U8        0x3D62A481u
/* Fuel-gauge device object — litpool in FG getters */
#define SRAM_FG_DEV             0x3C43BB10u

#define FG_READY_OFF            0x48
#define FG_CAP_CACHE_OFF        0x20
#define CW221X_CHIP_ID          0xA0

/* xrbm mailbox message types (thread loop @ ~0x2C489D94) */
#define XRBM_MSG_USB_PLUG       0x20
#define XRBM_MSG_BATT_POLL      0x40

/* ── types ──────────────────────────────────────────────────────────── */

typedef void (*bm_event_cb_t)(int charging, int level);
typedef void (*bm_vmon_cb_t)(int voltage_mv);

typedef struct {
    uint32_t ready;          /* +0x48 == 1 when FG online */
    int32_t  capacity_cache; /* +0x20 fallback */
    int32_t  voltage_mv;     /* +0x14 after refresh */
    int32_t  current_ma;     /* +0x2c */
    /* … additional cw221X fields omitted */
} fg_dev_t;

/* ── external stubs ─────────────────────────────────────────────────── */

void TRACE(int level, unsigned line, const void *file, const void *tag, ...);
int  osSemaphoreAcquire(void *sem, uint32_t timeout);   /* FUN_2c644044 */
void osSemaphoreRelease(void *sem);                     /* FUN_2c644080 */
int  osMessageQueueGet(void *out, void *q, uint32_t to);/* FUN_2c644324 */
int  osMessageQueueRelease(void *q, void *msg);         /* FUN_2c644388 */
void *lv_timer_create(void (*cb)(void *), uint32_t period_ms, void *user);
void  lv_timer_set_repeat_count(void *t, int n);        /* FUN_2c62be70 */
void *osMutexCreate(const void *attr);                  /* FUN_2c64419c */

int  fg_i2c_read(fg_dev_t *dev, uint8_t reg, uint8_t *out, int n); /* FUN_2c49c6a0 */
int  fg_refresh_voltage(fg_dev_t *dev);                 /* FUN_2c49ce4c */
int  chg_read_plugin_status(int *out_status);           /* FUN_2c49b954 */
void bm_notify_voltage_listeners(uint32_t voltage_mv);
void bm_notify_event_listeners(int charging, int level);

extern volatile uint16_t * const g_soc_u16;     /* -> SRAM_SOC_U16 */
extern volatile uint8_t  * const g_chg_flag;    /* -> SRAM_CHG_FLAG_U8 */
extern fg_dev_t          * const g_fg;          /* -> SRAM_FG_DEV */
extern void              *       g_bm_mutex;
extern volatile int              g_bm_voltage_mv;
extern volatile uint8_t          g_bm_inited;
extern void              *       g_xrbm_mailbox;

/* ── HUD-facing getters (tiny Thumb leafs) ──────────────────────────── */

/* FUN_2c48a2c4 — unique site used by Time+Battery widget thunk */
uint16_t battery_soc_get(void)
{
    return *g_soc_u16; /* ldrh from 0x3C408A6E */
}

/* FUN_2c48a2b8 */
uint8_t battery_charging_flag_get(void)
{
    return *g_chg_flag; /* ldrb from 0x3D62A481 */
}

/* FUN_2c5d68d8 — veneer so BL sites stay in range */
uint16_t battery_soc_get_thunk(void)
{
    return battery_soc_get();
}

/*
 * FUN_2c5cfe2c — map SOC percent to battery icon asset.
 * Thresholds (decimal): 90, 80, 70, 60, 50, 40, 30, 20, 10, else empty.
 */
void *battery_icon_src_for_soc(int soc)
{
    /* Returns DAT_* image descriptors via FUN_2c5e2e8c — stubbed here. */
    static const int bands[] = { 90, 80, 70, 60, 50, 40, 30, 20, 10 };
    (void)bands;
    (void)soc;
    return NULL;
}

/* ── Fuel gauge (cw221X) ────────────────────────────────────────────── */

/* Cached signed SOC cell used by FG getter (SRAM 0x3C43BCF0) */
extern volatile int32_t * const g_fg_soc_cell;

/* FUN_2c49d134 */
int cw221x_get_capacity_percent(void)
{
    if (*(uint32_t *)((uint8_t *)g_fg + FG_READY_OFF) != 1)
        return 0x14; /* stub when FG not ready */

    int cap = *g_fg_soc_cell;
    if (cap < 0)
        return *(int32_t *)((uint8_t *)g_fg + FG_CAP_CACHE_OFF);
    return cap;
}

/* FUN_2c49d108 — return positive cache, else refresh and read +0x14 */
int cw221x_get_voltage_mv(void)
{
    extern volatile int32_t * const g_fg_volt_cell; /* 0x3C43BD00 */
    if (*(uint32_t *)((uint8_t *)g_fg + FG_READY_OFF) != 1)
        return -1;
    if (*g_fg_volt_cell > 0)
        return *g_fg_volt_cell;
    fg_refresh_voltage(g_fg);
    return *(int32_t *)((uint8_t *)g_fg + 0x14);
}

/* FUN_2c49d6ac — probe: reg0 must be 0xA0 */
int cw221x_probe(void)
{
    uint8_t id = 0;
    int ret = fg_i2c_read(g_fg, 0, &id, 1);
    if (ret < 0)
        return ret;
    if (id != CW221X_CHIP_ID) {
        TRACE(4, 0x4e2, /*file*/NULL, /*tag*/NULL); /* "not cw221X" path */
        return -1;
    }
    /* FUN_2c49d4c8 dumps volt/curr/cap averages + TRACE [SFG] */
    return 0;
}

/* ── battery_mgr update + listeners ─────────────────────────────────── */

static int clamp_u0_100(int v)
{
    if (v > 100) v = 100;
    if (v < 0)   v = 0;
    return v;
}

/* FUN_2c489b5c — notify event listeners after SOC change */
void battery_mgr_notify_level_listeners(void);

/* FUN_2c489bd0 — mailbox 0x40 worker.
 * Ghidra marks TRACE noreturn and drops the strh; Capstone keeps it:
 *   strh r4, [r6] ; r6 = 0x3C408A6E
 *   bl   FUN_2c489b5c
 */
void battery_mgr_poll_level_voltage(void)
{
    osSemaphoreAcquire(g_bm_mutex, 0xffffffffu);

    int soc = clamp_u0_100(cw221x_get_capacity_percent());
    if ((uint16_t)soc != *g_soc_u16) {
        /* TRACE: "get new battery level: %d" (battery_mgr.cpp ~line 0xc3) */
        TRACE(4, 0xc3, NULL, NULL, soc);
        *g_soc_u16 = (uint16_t)soc;          /* strh */
        battery_mgr_notify_level_listeners();
    }

    int volt = cw221x_get_voltage_mv();
    if (volt < 0)
        volt = 0;
    if ((uint32_t)volt != (uint32_t)g_bm_voltage_mv) {
        g_bm_voltage_mv = volt;              /* str [voltage cache] */
        if (g_bm_inited)
            bm_notify_voltage_listeners((uint32_t)volt);
        else
            TRACE(4, 0xf9, NULL, NULL);      /* list not inited */
    }

    osSemaphoreRelease(g_bm_mutex);
}

/* FUN_2c48a2d0 */
int register_xr_battery_event_listener(bm_event_cb_t cb)
{
    if (!cb) {
        TRACE(4, 0x1e2, NULL, NULL); /* "null battery event listener" */
        return -1;
    }
    if (!g_bm_inited) {
        TRACE(4, 0x1e6, NULL, NULL); /* "bm not inited…" */
        return -1;
    }
    /* list insert via FUN_2c4858f0 / FUN_2c4857c8 — omitted */
    (void)cb;
    return 0;
}

/* FUN_2c48a0c0 */
int register_xr_battery_voltage_monitor(bm_vmon_cb_t cb)
{
    if (!cb) {
        TRACE(4, 0x19e, NULL, NULL); /* "null battery voltage monitor" */
        return -1;
    }
    (void)cb;
    return 0;
}

/* ── xrbm thread (mailbox loop) ─────────────────────────────────────── */

typedef struct {
    uint32_t id;
    uint8_t  payload[12];
} xrbm_msg_t;

void xrbm_thread_main(void)
{
    /* Strings: "xrbm thread running", "on usb plug in/out event" */
    for (;;) {
        xrbm_msg_t msg;
        if (osMessageQueueGet(&msg, g_xrbm_mailbox, 10000) < 0)
            continue;

        if (msg.id == XRBM_MSG_USB_PLUG) {
            int st = -1;
            chg_read_plugin_status(&st);
            *g_chg_flag = (st != 0);
            bm_notify_event_listeners(*g_chg_flag, battery_soc_get());
            osMessageQueueRelease(g_xrbm_mailbox, &msg);
        } else if (msg.id == XRBM_MSG_BATT_POLL) {
            battery_mgr_poll_level_voltage();
        }
    }
}

/* ── lv_power_manager hooks ─────────────────────────────────────────── */

static void lv_power_temp_timer_cb(void *user)
{
    (void)user;
    /* temp_monitor_timer_cb / voltage_monitor policy in lv_power_manager.c */
}

/* FUN_2c642c66 — called during power-on UI bring-up */
void lv_power_manager_register_battery_hooks(void)
{
    register_xr_battery_voltage_monitor(/* internal */ NULL);
    register_xr_battery_event_listener(/* internal */ NULL);

    void *t = lv_timer_create(lv_power_temp_timer_cb, 5000, NULL);
    lv_timer_set_repeat_count(t, -1);

    /*
     * State machine (strings @ 0x2C425Dxx):
     *   POWER_ON / POWER_OFF / POWER_OFF_CHARING / POWER_ON_CHARGING / POWER_REBOOT
     * Events:
     *   EVENT_CHARGING_ON/OFF, EVENT_USER_POWER_ON/OFF,
     *   EVENT_LOW_BATTERY_POWER_OFF, EVENT_USER_POWER_REBOOT
     * While charging, voltage_monitor ignores undervoltage shutdown.
     */
}

/* ── Wear-gated system sleep (policy from strings) ──────────────────── */

typedef enum {
    SLEEP_SHALLOW = 1,
    SLEEP_DEEP    = 2,
} sleep_kind_t;

int xjxr_system_sleep_allowed(sleep_kind_t kind, int wearing, int screen_on)
{
    if (battery_charging_flag_get())
        return 0; /* "%s is battery charging" */
    if (screen_on)
        return 0; /* "%s error,is screen on" */
    /* Also blocked when A2DP/SCO or OTA active — checked elsewhere. */

    if (kind == SLEEP_DEEP && wearing)
        return 0; /* "deep sleep need not wearing" */
    if (kind == SLEEP_SHALLOW && !wearing)
        return 0; /* "shollow sleep need wearing" */
    return 1;
}

/* ── PMU / sc7288 surface (driver-level; not fully inlined) ─────────── */

void pmu_charger_irq_handler(void);           /* pmu_best1600.c */
void pmu_charger_pluginout_debounce_handler(void);
int  sc7288_detect_device(void);
int  sc7288_init_device(void);
int  sc7288_set_chargevolt(int mv);           /* string @ 0x2C042FFC */

/*
 * Integration summary used by HUD:
 *   soc = battery_soc_get_thunk();          // 0x2C5D68D8
 *   icon = battery_icon_src_for_soc(soc);   // 0x2C5CFE2C
 *   lv_img_set_src(battery_img, icon);
 */
