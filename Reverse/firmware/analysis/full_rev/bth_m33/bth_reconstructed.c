/*
 * BTH M33 (BES2700 / Best1600 watch_bth) — readable reconstruction
 *
 * Image: x_1.0.12.83/best1600_watch_bth.bin
 * Load base: 0x14000000  (ARM Cortex-M33, little-endian)
 *
 * Pseudocode preserves the BES / StarryNet API surface recovered from
 * .rodata strings and Capstone/Ghidra anchors. Many app_* names have
 * NO Thumb xrefs (hashed TRACE) — those entries are stubs keyed by
 * string VA until the call-graph bind lands.
 *
 * Cross-core: BTH M33 <-> M55 via INTERSYS (send_bth_to_m55_msg).
 */

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

/* ── load / image ─────────────────────────────────────────────────────── */

#define BTH_LOAD_BASE           0x14000000u
#define BTH_IMAGE_SIZE          0x1476BCu

/* ── known code VAs ───────────────────────────────────────────────────── */

#define VA_BES_TRACE            0x1402A6E8u   /* FUN_1402a6e8 */
#define VA_BES_ASSERT           0x1402B0F8u   /* FUN_1402b0f8 */
#define VA_KEY_EVENT_SWITCH     0x14041F98u   /* FUN_14041f98 candidate */
#define VA_TIMER_VENEER         0x140E5378u   /* HFP/timer bx-ip stub */

/* ── .rodata name / path VAs (not entry points) ───────────────────────── */

#define STR_HAL_KEY_C           0x140E6014u
#define STR_HAL_KEY_BOOT        0x140E63B0u
#define STR_LP_500_MS           0x140E623Bu  /* bare name; "%s …" @ 0x140E6238 */
#define STR_LP_3000_MS          0x140E625Fu
#define STR_LP_5000_MS          0x140E6283u
#define STR_PMU_BEST1600_C      0x140E7688u
#define STR_PMU_CHARGER_IRQ     0x140E7748u
#define STR_BT_GATT             0x140E6700u
#define STR_APP_GATT_C          0x14111FA4u
#define STR_GATT_DFLT_HANDLER   0x1411203Cu
#define STR_APP_ANCC_C          0x14111A18u
#define STR_ANCC_INIT_INFO      0x14111D64u
#define STR_ANCS_SVC_UUID       0x1411BE04u
#define STR_ANCS_NS_UUID        0x1411BF40u
#define STR_FACTORY_CPP         0x1413240Cu
#define STR_FACTORY_ENTER       0x14132494u
#define STR_FACTORY_KEY_INIT    0x141324ACu
#define STR_POWERON_KEY_INIT    0x141379A8u
#define STR_ENTER_TEST_MODE     0x141378D8u
#define STR_SEND_BTH_TO_M55     0x141316D8u
#define STR_ANCS_INTERSYS_RX    0x14135F84u

/* Long-press thresholds (ms) — names in .rodata; do NOT hunt code via these
 * immediates alone (HFP timers collide at 0x1F4/0xBB8/0x1388). */
#define HAL_KEY_LP_500_MS       500
#define HAL_KEY_LP_3000_MS      3000
#define HAL_KEY_LP_5000_MS      5000

/* ── types ────────────────────────────────────────────────────────────── */

typedef enum {
    HAL_KEY_EVENT_DOWN = 1,
    HAL_KEY_EVENT_FIRST_DOWN,
    HAL_KEY_EVENT_CONTINUED_DOWN,
    HAL_KEY_EVENT_UP,
    HAL_KEY_EVENT_UP_AFTER_LONGPRESS,
    HAL_KEY_EVENT_LONGPRESS,
    HAL_KEY_EVENT_LONGLONGPRESS,
    HAL_KEY_EVENT_CLICK,
    HAL_KEY_EVENT_DOUBLECLICK,
    HAL_KEY_EVENT_TRIPLECLICK,
    HAL_KEY_EVENT_LONGPRESS_500_MS = 0x10,   /* ordinal approximate */
    HAL_KEY_EVENT_LONGPRESS_3000_MS,
    HAL_KEY_EVENT_LONGPRESS_5000_MS,
} hal_key_event_t;

typedef enum {
    POWERON_CASE_NORMAL = 0,
    POWERON_CASE_FACTORY,
    POWERON_CASE_ENGINEER,
    POWERON_CASE_DUT,
    POWERON_CASE_TEST,
} poweron_case_t;

/* M55 mailbox — numeric id lives on M55; name only on M55 strings. */
#ifndef BTH_TO_M55_FACTORY_TEST_MODE
#define BTH_TO_M55_FACTORY_TEST_MODE  0  /* TODO: bind from M55 enum */
#endif

typedef struct {
    uint16_t start_hdl;
    uint16_t end_hdl;
} gatt_svc_range_t;

typedef struct {
    uint16_t ns_val;
    uint16_t ns_cfg;
    uint16_t ds_val;
    uint16_t ds_cfg;
    uint16_t cp_val;
} ancc_handles_t;

/* ── external / HAL stubs ─────────────────────────────────────────────── */

/* FUN_1402a6e8 — BES hashed TRACE(level, hash, file?, line?, …) */
void bes_trace(uint32_t level, uint32_t hash, ...);

/* FUN_1402b0f8 — fatal / assert path used by event switch */
void bes_assert_fail(const void *a, const void *b, ...);

/* Veneer @ 0x140E5378 — starts a one-shot / periodic timer (HFP uses 3s/5s). */
int  bes_timer_start(uint32_t ms, void *cb, void *arg);

int  intersys_open(void);
int  intersys_tx(uint32_t msg_type, const void *payload, uint32_t len);
int  send_bth_to_m55_msg(uint32_t msg_id, const void *data, uint32_t len);

void pmu_init(void);
void pmu_charger_irq_handler(void);
void pmu_wdt_irq_handle(void);
int  pmu_shutdown(void);
int  pmu_wdt_reboot(void);

/* ── factory / power-on (API from .rodata; Thumb entry unbound) ──────── */

void app_poweron_key_init(void);
void app_factorymode_key_init(void);
void app_factorymode_test_key_init(void);
void app_factorymode_enter(void);
void app_factorymode_init(uint32_t mode);
void app_enter_normal_mode(void);
void app_factorymode_status_indication(int status);

void hal_key_boot_handler(hal_key_event_t ev);

/* ── GATT / ANCC stubs ────────────────────────────────────────────────── */

void app_ble_gatt_dflt_handler(void *env, uint16_t event, void *param);
void app_ble_gatt_cmp_evt_handle(void *env, void *param);
void app_ble_gatt_req_ind_evt_handler(void *env, void *param);

void app_ancc_init_info(void);
int  app_ancc_get_free_info(void);
int  app_ancc_get_count(void);
void app_ancc_get_notification_info(int idx, void *out);
void app_ancc_get_app_info(int idx, void *out);
void app_ancc_parse_notification_info(const uint8_t *data, uint16_t len);
void ancs_bth_intersys_receive_handler(const void *msg, uint32_t len);

/* ── reconstruction bodies ────────────────────────────────────────────── */

/*
 * FUN_14041f98 — dense small-ID switch + TRACE(4, 0x5A8, …).
 * Treat as a BES connection/profile state validator (not proven factory
 * key path). Shows how TRACE hashes replace format strings.
 */
void bth_event_id_switch_candidate(uint32_t slot, uint32_t new_state)
{
    /* param bounds check; on failure -> bes_assert_fail @ 0x1402B0F8 */
    if (slot > 10u) {
        bes_assert_fail((const void *)(uintptr_t)0x1404209C,
                        (const void *)(uintptr_t)0x14042090,
                        slot, new_state);
        return;
    }

    /* Table-driven legal transitions (bitmasks recovered in decomp). */
    bes_trace(4, 0x5A8u,
              (void *)(uintptr_t)0x1404208C,
              (void *)(uintptr_t)0x14042088,
              (void *)(uintptr_t)0x14042084,
              slot, /* old */ 0, new_state);
}

/*
 * Power-on / factory entry — control flow from product strings + M55
 * mailbox name. Exact branch that sends FACTORY_TEST_MODE is still
 * unbound; this encodes the intended policy.
 */
poweron_case_t app_poweron_classify(hal_key_event_t boot_ev, bool key_held)
{
    if (!key_held) {
        return POWERON_CASE_NORMAL;
    }

    switch (boot_ev) {
    case HAL_KEY_EVENT_LONGPRESS_500_MS:
        /* short factory / MMI probe — confirm on device */
        return POWERON_CASE_TEST;
    case HAL_KEY_EVENT_LONGPRESS_3000_MS:
        return POWERON_CASE_FACTORY;
    case HAL_KEY_EVENT_LONGPRESS_5000_MS:
        return POWERON_CASE_ENGINEER;
    default:
        return POWERON_CASE_NORMAL;
    }
}

void app_poweron_dispatch(poweron_case_t c)
{
    /* Log shape: "power on case:%d" @ 0x14137A20 (via TRACE hash). */
    switch (c) {
    case POWERON_CASE_FACTORY:
        app_factorymode_key_init();
        app_factorymode_enter();
        /* Notify HUD core — id must match M55 BTH_TO_M55_FACTORY_TEST_MODE */
        send_bth_to_m55_msg(BTH_TO_M55_FACTORY_TEST_MODE, NULL, 0);
        break;
    case POWERON_CASE_ENGINEER:
        /* "!!!!!ENGINEER_MODE!!!!!" @ 0x141376BC */
        app_factorymode_init(0xEEu);
        break;
    case POWERON_CASE_DUT:
        /* "BT_DUT_MODE" @ 0x1411648C */
        break;
    case POWERON_CASE_TEST:
        /* "To enter test mode!!!" @ 0x141378D8 */
        app_factorymode_test_key_init();
        break;
    case POWERON_CASE_NORMAL:
    default:
        app_enter_normal_mode();
        break;
    }
}

void hal_key_boot_handler(hal_key_event_t ev)
{
    /* Symbol string @ STR_HAL_KEY_BOOT — GPIO / debounce feeds here. */
    static bool held;
    if (ev == HAL_KEY_EVENT_DOWN || ev == HAL_KEY_EVENT_FIRST_DOWN) {
        held = true;
    } else if (ev == HAL_KEY_EVENT_UP || ev == HAL_KEY_EVENT_UP_AFTER_LONGPRESS) {
        held = false;
    }

    poweron_case_t c = app_poweron_classify(ev, held);
    if (c != POWERON_CASE_NORMAL) {
        app_poweron_dispatch(c);
    }
}

void app_poweron_key_init(void)
{
    /* Registers boot handler; string @ STR_POWERON_KEY_INIT */
    (void)STR_POWERON_KEY_INIT;
}

void app_factorymode_key_init(void)
{
    (void)STR_FACTORY_KEY_INIT;
}

void app_factorymode_test_key_init(void) {}

void app_factorymode_enter(void)
{
    (void)STR_FACTORY_ENTER;
    /* BT factory helpers: xtalcalib, signalingtest, LE RX/TX tests exist
     * as sibling .rodata names under apps/factory/app_factory_bt.cpp. */
}

void app_factorymode_init(uint32_t mode)
{
    (void)mode;
}

void app_enter_normal_mode(void) {}
void app_factorymode_status_indication(int status) { (void)status; }

/* ── GATT default handlers (names @ 0x1411203C+) ──────────────────────── */

void app_ble_gatt_dflt_handler(void *env, uint16_t event, void *param)
{
    (void)env; (void)event; (void)param;
    (void)STR_GATT_DFLT_HANDLER;
}

void app_ble_gatt_cmp_evt_handle(void *env, void *param)
{
    (void)env; (void)param;
}

void app_ble_gatt_req_ind_evt_handler(void *env, void *param)
{
    (void)env; (void)param;
}

/* ── ANCC / ANCS client ───────────────────────────────────────────────── */

/* LE bytes @ STR_ANCS_SVC_UUID */
static const uint8_t k_ancs_svc_uuid[16] = {
    0xd0, 0x00, 0x2d, 0x12, 0x1e, 0x4b, 0x0f, 0xa4,
    0x99, 0x4e, 0xce, 0xb5, 0x31, 0xf4, 0x05, 0x79
};

void app_ancc_init_info(void)
{
    (void)k_ancs_svc_uuid;
    (void)STR_ANCC_INIT_INFO;
}

int app_ancc_get_free_info(void) { return -1; }
int app_ancc_get_count(void) { return 0; }

void app_ancc_get_notification_info(int idx, void *out)
{
    (void)idx; (void)out;
}

void app_ancc_get_app_info(int idx, void *out)
{
    (void)idx; (void)out;
}

void app_ancc_parse_notification_info(const uint8_t *data, uint16_t len)
{
    (void)data; (void)len;
    /* After parse, forward to M55 via ancs intersys. */
}

void ancs_bth_intersys_receive_handler(const void *msg, uint32_t len)
{
    (void)msg; (void)len;
    (void)STR_ANCS_INTERSYS_RX;
}

/* ── PMU ──────────────────────────────────────────────────────────────── */

void pmu_init(void)
{
    (void)STR_PMU_BEST1600_C;
    /* "Start pmu %s" */
}

void pmu_charger_irq_handler(void)
{
    (void)STR_PMU_CHARGER_IRQ;
}

void pmu_wdt_irq_handle(void) {}

int pmu_shutdown(void)
{
    /* On failure: "Error: pmu shutdown failed!" */
    return 0;
}

int pmu_wdt_reboot(void)
{
    /* On failure: "Error: pmu wdt reboot failed!" */
    return 0;
}

/* ── INTERSYS glue ────────────────────────────────────────────────────── */

int send_bth_to_m55_msg(uint32_t msg_id, const void *data, uint32_t len)
{
    (void)STR_SEND_BTH_TO_M55;
    if (intersys_open() != 0) {
        /* "Failed to open intersys" @ 0x140E7AC8 */
        return -1;
    }
    return intersys_tx(msg_id, data, len);
}

/* Weak stubs so this file is self-contained as documentation. */
__attribute__((weak)) void bes_trace(uint32_t level, uint32_t hash, ...)
{ (void)level; (void)hash; }
__attribute__((weak)) void bes_assert_fail(const void *a, const void *b, ...)
{ (void)a; (void)b; }
__attribute__((weak)) int bes_timer_start(uint32_t ms, void *cb, void *arg)
{ (void)ms; (void)cb; (void)arg; return 0; }
__attribute__((weak)) int intersys_open(void) { return 0; }
__attribute__((weak)) int intersys_tx(uint32_t msg_type, const void *payload, uint32_t len)
{ (void)msg_type; (void)payload; (void)len; return 0; }
