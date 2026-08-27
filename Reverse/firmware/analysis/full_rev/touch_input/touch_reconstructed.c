/*
 * STK5115 / STK501xx capacitive touch + wear — readable reconstruction
 *
 * Reverse-engineered from Star Air firmware 1.0.12.83 (platform_tester.bin).
 * Code cluster ~0x2C49B000–0x2C4C2000 (I2C driver + board init + wear FSM).
 * Source paths: stk50xx.c / stk501xx.c / stk51158.c / wear_detection.cpp /
 * xjxr_touchpad*.c (LVGL bridge is TRACE-opaque; hooks noted only).
 *
 * Pseudocode preserves logic Ghidra + Capstone recovered. HAL / RTOS are stubs.
 * Register list is limited to immediates present in the binary — not a datasheet.
 *
 * Hardware (evidence-backed):
 *   - Capacitive TP IC, I2C via hal_i2c_* (FUN_2c4bd450 / FUN_2c4bd438)
 *   - Chip ID reg 0x00 == 0xA0
 *   - Wear/prox threshold FSM toggles attr 0x1B
 */

#include <stdint.h>
#include <stddef.h>
#include <string.h>

/* ── confirmed register / magic immediates ───────────────────────────── */

#define STK_REG_PID             0x00
#define STK_PID_EXPECT          0xA0
#define STK_REG_IRQ_NIBBLE      0x08
#define STK_REG_FLAG_0B         0x0B
#define STK_REG_IRQ_ENABLE      0x1D
#define STK_REG_RAW16           0xA4
#define STK_REG_CALIB_A6        0xA6
#define STK_REG_PHASE_AB        0xAB

#define STK_ATTR_WEAR_GATE      0x1B
#define STK_CMD_SENS_PACK       0x3D
#define STK_CMD_TIMER_MODE      0x3E

/* ── types ───────────────────────────────────────────────────────────── */

typedef struct {
    uint8_t  bus_id;       /* *(dev+4) passed to HAL */
    uint16_t i2c_addr;     /* *(dev+8) */
    uint32_t err_sticky;   /* *(dev+0x44) */
    uint32_t phase_ab;     /* *(dev+0x38) last 0xAB */
    uint32_t raw_shift;    /* *(dev+0x30) from 0xA4 >> 4 */
    uint32_t ready;        /* *(dev+0x48) == 1 when online */
    uint32_t reserved[16];
} stk_dev_t;

typedef enum {
    STK_CLASS_NONE = 0,
    STK_CLASS_LIGHT = 1,
    STK_CLASS_MED   = 2,
    STK_CLASS_HEAVY = 3,
} stk_strength_class_t;

/* ── HAL / RTOS stubs ────────────────────────────────────────────────── */

int  hal_i2c_write(uint8_t bus, uint16_t addr, const uint8_t *buf, int len); /* FUN_2c4bd438 */
int  hal_i2c_read(uint8_t bus, uint16_t addr,
                  const uint8_t *reg, int reg_len,
                  uint8_t *out, int out_len); /* FUN_2c4bd450 */
void osDelayMs(int ms);                       /* FUN_2c6444fc */
void TRACE(int level, int line, ...);         /* FUN_2c673d88 — interned IDs */
void event_notify(void *tag, ...);            /* FUN_2c648600 */

extern stk_dev_t *g_stk_dev;
extern int (*g_wear_sample_cb)(void);         /* FUN_2c49d154 path */
extern int g_wear_hi, g_wear_lo;
extern int g_wear_near;                       /* latched near/far */

/* ── I2C primitives (STK501XX_REG_* ) ────────────────────────────────── */

/* FUN_2c49b2c0 — write {reg, val}, up to 3 attempts */
int stk_i2c_write8(uint8_t reg, uint8_t val)
{
    uint8_t buf[2] = { reg, val };
    int tries = 3;
    int err = -1;
    while (tries--) {
        err = hal_i2c_write(g_stk_dev->bus_id, g_stk_dev->i2c_addr, buf, 2);
        if (err == 0)
            return 0;
        osDelayMs(1);
    }
    return err;
}

/* FUN_2c49c6a0 — read one byte after reg select */
int stk_i2c_read8(stk_dev_t *dev, uint8_t reg, uint8_t *out)
{
    uint8_t r = reg;
    int err = hal_i2c_read(dev->bus_id, dev->i2c_addr, &r, 1, out, 1);
    if (err == 0) {
        dev->err_sticky = 0;
        return 0;
    }
    TRACE(4, 0xDF /* line */, /* file/func/fmt IDs */, reg, err);
    return err;
}

/* FUN_2c49c9e8 — 16-bit read with optional double-check */
int stk_i2c_read16(stk_dev_t *dev, uint8_t reg, uint8_t out[2])
{
    uint8_t r = reg;
    uint8_t a[2] = {0}, b[2] = {0};
    int err = hal_i2c_read(dev->bus_id, dev->i2c_addr, &r, 1, a, 2);
    if (err) {
        TRACE(4, 0x107, /*...*/, reg, err);
        return err;
    }
    osDelayMs(4);
    err = hal_i2c_read(dev->bus_id, dev->i2c_addr, &r, 1, b, 2);
    if (err) {
        TRACE(4, 0x115, /*...*/, reg, err);
        return err;
    }
    if ((a[0] | (a[1] << 8)) != (b[0] | (b[1] << 8))) {
        osDelayMs(4);
        err = hal_i2c_read(dev->bus_id, dev->i2c_addr, &r, 1, b, 2);
        if (err) {
            TRACE(4, 0x124, /*...*/, reg, err);
            return err;
        }
    }
    out[0] = b[0];
    out[1] = b[1];
    dev->err_sticky = 0;
    return 0;
}

/* FUN_2c49b35c — read-modify-write masked bits */
void stk_i2c_update_bits(uint8_t reg, uint8_t mask, uint8_t value)
{
    uint8_t cur = 0;
    if (stk_i2c_read8(g_stk_dev, reg, &cur) != 0)
        return;
    if ((mask & (cur ^ value)) == 0)
        return;
    cur = (uint8_t)((cur & ~mask) | (value & mask));
    stk_i2c_write8(reg, cur);
}

/* ── probe / init ────────────────────────────────────────────────────── */

/* FUN_2c49d6ac — PID + status table check ("Start Initial stk501xx") */
int stk_probe_pid(void)
{
    uint8_t pid = 0, st = 0, fl = 0;
    stk_dev_t *dev = g_stk_dev;

    if (stk_i2c_read8(dev, STK_REG_PID, &pid) < 0)
        return -1;
    dev->reserved[0] = pid;
    if (pid != STK_PID_EXPECT) {
        TRACE(4, 0x4E2, /* stk_get_pid error */);
        return -1;
    }
    /* further IRQ nibble / flag checks (regs 0x08, 0x0B, 0x50+i vs table) */
    if (stk_i2c_read8(dev, STK_REG_IRQ_NIBBLE, &st) < 0)
        return -1;
    if ((st & 0xF0) != 0) {
        TRACE(4, 0x471, /* IRQ state unexpected */, 8, st);
        return -1;
    }
    if (stk_i2c_read8(dev, STK_REG_FLAG_0B, &fl) < 0)
        return -1;
    if ((int8_t)fl >= 0) {
        TRACE(4, 0x47A, /* flag sign */, 0x0B, fl, fl | 0x80);
        return -1;
    }
    return 0;
}

/* FUN_2c49bc4c — register initialization write stream (excerpt of immediates) */
int stk_reg_table_init(void)
{
    /* After bus/GPIO prep (hal open path uses pin/id 0x58 in this TU): */
    static const struct { uint8_t reg, val; } kInit[] = {
        { 0x10, 0x7F }, { 0x11, 0x9F }, { 0x12, 0x08 }, { 0x13, 0xCF },
        { 0x14, 0x04 }, { 0x15, 0x59 }, { 0x18, 0x60 }, { 0x19, 0xFF },
        { 0x1B, 0xAB }, { 0x1C, 0x00 },
    };
    for (size_t i = 0; i < sizeof(kInit) / sizeof(kInit[0]); i++) {
        if (stk_i2c_write8(kInit[i].reg, kInit[i].val) != 0)
            return -1;
    }
    /* readback 0x30..0x32 then TRACE line 0x30B with the three bytes */
    uint8_t b0 = 0, b1 = 0, b2 = 0;
    stk_i2c_read8(g_stk_dev, 0x30, &b0);
    stk_i2c_read8(g_stk_dev, 0x31, &b1);
    stk_i2c_read8(g_stk_dev, 0x32, &b2);
    TRACE(4, 0x30B, /*...*/, b0, b1, b2);
    return 0;
}

/* FUN_2c49da14 — init_client with up to 4 probe attempts */
int stk501xx_init_client(void)
{
    for (int attempt = 0; attempt < 4; attempt++) {
        if (stk_probe_pid() == 0)
            break;
        osDelayMs(0xFA);
        osDelayMs(100);
        if (attempt == 3)
            return -1;
    }
    uint8_t phase = 0;
    if (stk_i2c_read8(g_stk_dev, STK_REG_PHASE_AB, &phase) >= 0) {
        g_stk_dev->phase_ab = phase;
        /* FUN_2c49cec0 refreshes raw/cadc side data */
    }
    g_stk_dev->ready = 1;
    return 0;
}

/* FUN_2c4c1688 — board-level stk5115_init */
int stk5115_board_init(void)
{
    stk_reg_table_init();           /* 0x2C49BC4C */
    stk501xx_init_client();         /* 0x2C49DA14 */
    /* FUN_2c4c0eb4: install IRQ / notify channels */
    int v = /* post-check metric */ 0;
    if (v > 0x36) {
        TRACE(4, 0x20D, /*...*/, v, 0x37);
        /* noreturn on hard fail */
    }
    return 0;
}

/* ── attributes / sensitivity / wear ─────────────────────────────────── */

/* FUN_2c49c0cc — large attr switch (enable, thresholds, …) */
int stk_set_attr(int attr, uint32_t value)
{
    if (!g_stk_dev || g_stk_dev->ready != 1)
        return -1;
    switch (attr) {
    case 0x14: case 0x15:
        /* store sensitivity scalars */
        break;
    case 0x17: case 0x18: case 0x19:
        /* map value → register field via stk_i2c_update_bits(0x10 / 0x1D, …) */
        break;
    case STK_ATTR_WEAR_GATE:
        /* wear FSM uses this to arm/disarm phase */
        stk_i2c_update_bits(STK_REG_IRQ_ENABLE, 0xFF, (uint8_t)value);
        break;
    default:
        break;
    }
    return 0;
}

/* FUN_2c49de50 — get prox / phase / raw attrs */
int stk_get_attr(int attr, uint32_t *out)
{
    uint8_t raw[2] = {0};
    if (!g_stk_dev || g_stk_dev->ready != 1)
        return 0xFFFFFFFF;
    *out = 0;
    switch (attr) {
    case 4:
        if (stk_i2c_read16(g_stk_dev, STK_REG_RAW16, raw) < 0) {
            *out = g_stk_dev->raw_shift;
        } else {
            uint32_t v = raw[0] * 0x100u + raw[1];
            *out = v >> 4;
            g_stk_dev->raw_shift = *out;
        }
        break;
    case 0x2A:
        {
            uint8_t ph = 0;
            if (stk_i2c_read8(g_stk_dev, STK_REG_PHASE_AB, &ph) >= 0)
                g_stk_dev->phase_ab = ph;
        }
        break;
    default:
        break;
    }
    return 0;
}

/* FUN_2c4c1044 — wear / proximity threshold state machine */
void stk_wear_thresh_sm(void)
{
    int sample = g_wear_sample_cb ? g_wear_sample_cb() : 0;
    if (g_wear_near == 0) {
        if (sample >= g_wear_hi) {
            g_wear_near = 1;
            stk_set_attr(STK_ATTR_WEAR_GATE, 0);
            TRACE(4, 0x18D, /* enter near */, sample, g_wear_hi);
        }
    } else {
        int release = g_wear_lo;
        if (release == 0) {
            /* hysteresis shrink of high watermark */
            release = (g_wear_hi < 0xB) ? (g_wear_hi >> 1) : (g_wear_hi - 2);
        }
        if (sample <= release) {
            g_wear_near = 0;
            stk_set_attr(STK_ATTR_WEAR_GATE, 1);
            TRACE(4, 0x194, /* enter far */, sample, release);
        }
    }
}

/* FUN_2c4c16fe — higher-level dispatch (sensitivity pack, timers, …) */
int stk_attr_dispatch(uint32_t cmd, uint32_t arg)
{
    if (cmd < 0x3C) {
        stk_set_attr((int)cmd, arg);
        return 0;
    }
    if (cmd == STK_CMD_SENS_PACK) {
        /* unpack bytes of arg into hi/mid/lo sensitivity slots, then refresh FSM */
        stk_wear_thresh_sm();
        return 0;
    }
    if (cmd == STK_CMD_TIMER_MODE) {
        /* factory / self-test timer path (5000 ms when mode==1) */
        return 0;
    }
    return 0;
}

/* ── gesture / algorithm hook ────────────────────────────────────────── */

/* FUN_2c49b970 — magnitude bands → class (feeds TWS_EventGesture path) */
stk_strength_class_t stk_alg_classify(int magnitude)
{
    if (magnitude < 0x1E)
        return STK_CLASS_HEAVY;   /* firmware uses 3 for weakest band in one path */
    if (magnitude < 0x6F)
        return STK_CLASS_NONE;
    if (magnitude <= 0x1B8)
        return STK_CLASS_LIGHT;
    if ((uint32_t)(magnitude - 0x1B9) < 0x82)
        return STK_CLASS_MED;
    return STK_CLASS_HEAVY;
}

/* LVGL / xjxr_touchpad_* — TRACE-opaque; call sites publish Click / Slide /
 * LongPress-800ms strings. Ring HOGP uses xjxr_touchpad_unicron separately. */

void stk_gesture_publish(stk_strength_class_t c)
{
    (void)c;
    /* event_notify → UI / StarryNet KEY_EVENT / music_tp_control_mode */
}
