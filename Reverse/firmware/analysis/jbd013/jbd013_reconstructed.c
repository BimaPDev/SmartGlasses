/*
 * JBD013 / JBD4010 micro-LED panel driver — readable reconstruction
 *
 * Reverse-engineered from Star Air firmware 1.0.12.83 (platform_tester.bin).
 * Ghidra decomp cluster 0x2C497000–0x2C4AA000, source paths jbd013_api.c /
 * panel_driver.c / hal_driver.c.
 *
 * This is pseudocode that preserves the logic Ghidra recovered. HAL / RTOS /
 * GPU symbols are stubs — names and signatures match the binary, not a public SDK.
 *
 * Hardware:
 *   - Two panels: JBD_PANEL_LEFT (0), JBD_PANEL_RIGHT (1)
 *   - 640×480 monochrome green, SPI (not MIPI)
 *   - CS0 = 0x21 (left), CS1 = 0x4F (right)
 */

#include <stdint.h>
#include <stddef.h>
#include <string.h>

/* ── geometry ─────────────────────────────────────────────────────────── */

#define JBD_WIDTH           640
#define JBD_HEIGHT          480
#define JBD_FB_BYTES        0x25800   /* 153,600 — firmware framebuffer size */

#define JBD_PANEL_LEFT      0
#define JBD_PANEL_RIGHT     1

#define JBD_CS_LEFT         0x21
#define JBD_CS_RIGHT        0x4F

#define JBD_BRI_MAX         0x1BC5    /* 7109 — max BLE brightness level */
#define JBD_BRI_SPECIAL     0x1C03    /* factory / special mode level */

/* ESD check expected values (from rodata @ 0x2C4991F8 / 0x2C4991FC) */
#define JBD_ESD_EXPECT_35   0x42000424u
#define JBD_ESD_EXPECT_C1   0x82040A0Cu

/* RTOS message type handled by jbd4010_display thread */
#define JBD_MSG_SHOW_FRAME  0x20

/* ── types ────────────────────────────────────────────────────────────── */

typedef enum {
    JBD_CS_LEFT_SEL  = JBD_CS_LEFT,
    JBD_CS_RIGHT_SEL = JBD_CS_RIGHT,
} jbd_cs_t;

/* Queued by LVGL flush → picked up by jbd4010_display thread */
typedef struct {
    uint16_t x;
    uint16_t y;
    uint16_t width_bytes;   /* ceil(width_px / 2) for 4-bit packed pixels */
    uint16_t height;
    uint8_t  pending;       /* 1 = work item valid */
    uint8_t  _pad[3];
    /* pixel data follows in separate buffer pointer elsewhere in struct */
} jbd_frame_job_t;

/* ── external HAL / RTOS (stubs — implemented elsewhere in firmware) ─── */

void hal_spi_cs_assert(jbd_cs_t cs);      /* FUN_2c4c01d0 */
void hal_spi_cs_deassert(jbd_cs_t cs);    /* FUN_2c4c0158 */
int  hal_spi_write(const uint8_t *data, size_t len, int flags); /* FUN_2c673fb8 */
int  hal_spi_tx_idle(void);               /* FUN_2c673a78 — wait until TX empty */
void hal_spi_delay_units(int n);          /* FUN_2c673e08 — n×16 µs-ish */
void hal_panel_begin_frame(void);         /* FUN_2c497484 — prep DMA/SPI burst */
void hal_gpu_fill_640x480(void);          /* FUN_2c4bf3bc */
void hal_gpu_blit(const void *src);       /* FUN_2c4bf490 */
void hal_gpu_set_offset(int byte_off);    /* FUN_2c4bf454 */

int  osMessageQueueGet(void *out_status, void *queue, uint32_t timeout); /* FUN_2c644324 */
int  osMessageQueueRelease(void *queue, void *msg);                    /* FUN_2c644388 */
void osSemaphoreAcquire(void *sem, uint32_t timeout);  /* FUN_2c644044 */
void osSemaphoreRelease(void *sem);                    /* FUN_2c644080 */
void osThreadFlagsSet(void *thread, uint32_t flags);   /* FUN_2c64723c */
void osDelayMs(int ms);                                /* FUN_2c6444fc */
void osDelayTicks(int ticks);                          /* FUN_2c498db4 path */
void osMailboxNotify(uint32_t tag, int arg, int prio); /* FUN_2c674138 */

int  panel_read_reg_svc(int panel, uint8_t reg, void *buf, size_t len); /* FUN_2c498f54 */

/* ── module state (globals in .bss — addresses in firmware) ───────────── */

static volatile int  g_panel_busy;           /* DAT_2c497ccc — SPI in flight */
static void         *g_display_msg_queue;    /* _LAB_2c499390 */
static void         *g_display_thread;       /* _LAB_2c499450 */
static uint8_t       g_panel_ctx[];          /* _LAB_2c499394 — panel state block */
static int           g_frames_in_flight;     /* _LAB_2c4993c0 */

/* ── low-level SPI ────────────────────────────────────────────────────── */

static void jbd_spi_write_byte(uint8_t byte)
{
    int err = hal_spi_write(&byte, 1, 0);
    if (err != 0) {
        /* TRACE(4, line 0xB0, "jbd spi err:%d", err); */
        (void)err;
    }
    while (hal_spi_tx_idle() != 0) {
        /* spin until FIFO empty */
    }
}

void jbd_spi_delay(int units)
{
    hal_spi_delay_units(units << 4);
}

/* Write one register byte to whichever panel CS is currently selected. */
void jbd_spi_write_reg(uint8_t reg)
{
    hal_spi_cs_assert(JBD_CS_LEFT);
    hal_spi_cs_assert(JBD_CS_RIGHT);
    jbd_spi_write_byte(reg);
    hal_spi_cs_deassert(JBD_CS_LEFT);
    hal_spi_cs_deassert(JBD_CS_RIGHT);
    jbd_spi_delay(2);
}

/* reg + optional payload (used for multi-byte panel commands). */
void jbd_spi_write_buf(uint8_t reg, const uint8_t *data, size_t len)
{
    hal_spi_cs_assert(JBD_CS_LEFT);
    hal_spi_cs_assert(JBD_CS_RIGHT);
    jbd_spi_write_byte(reg);
    for (size_t i = 0; i < len; i++) {
        jbd_spi_write_byte(data[i]);
    }
    hal_spi_cs_deassert(JBD_CS_LEFT);
    hal_spi_cs_deassert(JBD_CS_RIGHT);
}

/* Select panel, write reg, read len bytes into buf. */
void jbd_spi_read(int panel, uint8_t reg, void *buf, size_t len)
{
    jbd_cs_t cs = (panel == JBD_PANEL_LEFT) ? JBD_CS_LEFT : JBD_CS_RIGHT;

    hal_spi_cs_assert(cs);
    jbd_spi_write_byte(reg);

    /* firmware builds a TX template then calls hal_spi_read — simplified here */
    hal_spi_cs_deassert(cs);

    (void)buf;
    (void)len;
}

/* Write reg + payload to a specific panel (used for per-eye current). */
void jbd_spi_write_panel(int panel, uint8_t reg, const void *data, size_t len)
{
    jbd_cs_t cs = (panel == JBD_PANEL_LEFT) ? JBD_CS_LEFT : JBD_CS_RIGHT;

    hal_spi_cs_assert(cs);
    jbd_spi_write_byte(reg);
    for (size_t i = 0; i < len; i++) {
        jbd_spi_write_byte(((const uint8_t *)data)[i]);
    }
    hal_spi_cs_deassert(cs);
}

/* ── panel register helpers ───────────────────────────────────────────── */

static void jbd_wait_not_busy(void)
{
    while (g_panel_busy) {
        osDelayMs(2);
    }
}

/* High-level register read used by ESD check (may SVC into driver context). */
static int jbd_panel_read_reg(int panel, uint8_t reg, uint32_t *value)
{
    uint32_t tmp = 0;
    int err;

    jbd_wait_not_busy();
    err = panel_read_reg_svc(panel, reg, &tmp, sizeof(tmp));
    if (err == 0) {
        *value = tmp;
    }
    return err;
}

/* Set drive current on one panel (reg 0x36, 16-bit LE value). */
void jbd_set_panel_current(int panel, uint16_t current)
{
    uint8_t le[2] = { (uint8_t)(current >> 8), (uint8_t)(current & 0xFF) };
    jbd_spi_write_panel(panel, 0x36, le, sizeof(le));
}

/* ── display path ─────────────────────────────────────────────────────── */

/*
 * Blast pixels to a rectangular window.
 *
 * x, y     — top-left corner (0..639, 0..479)
 * byte_len — size of pixel payload (firmware passes buffer length / span)
 * pixels   — source buffer (already in panel pixel format from GPU/LVGL)
 */
void jbd_display_image(uint16_t x, uint16_t y, uint32_t byte_len, const void *pixels)
{
    if (byte_len == 0) {
        /* TRACE: "display_image conflict..." */
        return;
    }

    /* Pack (y<<10 | x) into window address bytes — cmd 0x62 */
    uint32_t win = (y << 10) | (x & 0x3FF);

    hal_spi_cs_assert(JBD_CS_LEFT);
    hal_spi_cs_assert(JBD_CS_RIGHT);
    jbd_spi_write_byte(0x62);
    jbd_spi_write_byte((uint8_t)(win >> 16));
    jbd_spi_write_byte((uint8_t)((win & 0xFFFF) >> 8));
    jbd_spi_write_byte((uint8_t)(x & 0xFF));
    jbd_spi_write_byte(0xFF);   /* window end marker */
    hal_panel_begin_frame();

    if (x == 0 && y == 0) {
        hal_gpu_fill_640x480();
    } else {
        hal_gpu_blit(pixels);
    }

    /* byte offset into linear FB: y * 320 + x + byte_len (firmware formula) */
    hal_gpu_set_offset((int)(byte_len + x + y * 0x140));

    jbd_wait_not_busy();

    osMailboxNotify(0x04000003u, 8, 0);   /* notify display worker */
    jbd_spi_write_byte(0x00);             /* end-of-frame */
    hal_spi_cs_deassert(JBD_CS_LEFT);
    hal_spi_cs_deassert(JBD_CS_RIGHT);

    osMailboxNotify(0x08000003u, 8, 0);
}

/*
 * Clear full framebuffer and push black to both panels.
 * Called from panel_init after memset(fb, 0, JBD_FB_BYTES).
 */
void jbd_clear_framebuffer(uint16_t x, uint16_t y, void *fb, size_t len)
{
    (void)fb;
    g_panel_busy = 1;
    jbd_display_image(x, y, (uint32_t)len, NULL);
    jbd_spi_write_reg(0x97);
    jbd_spi_delay(1);
    g_panel_busy = 0;
}

/* LVGL / display_mgr calls this to queue a frame for the display thread. */
void jbd_display_image_post(uint16_t x, uint16_t y, uint16_t w_px, uint16_t h_px, void *buf)
{
    if (g_display_thread == NULL || w_px == 0 || h_px == 0 || buf == NULL) {
        return;
    }

    osSemaphoreAcquire(/* panel sem @ ctx+0x4b038 */, 0xFFFFFFFFu);

    uint16_t width_bytes = (uint16_t)((w_px + 1) / 2);   /* 4-bit packed */

    /* Firmware writes job fields at ctx+0x25800:
     *   x/2, y, width_bytes, height, pending=1 — then signals display thread */
    (void)x;
    (void)y;
    (void)width_bytes;
    (void)h_px;
    (void)buf;

    osSemaphoreRelease(/* panel sem */);
    osThreadFlagsSet(g_display_thread, 1);
}

/* Wake display thread (e.g. brightness change pending). */
void jbd_display_wake(uint8_t reason)
{
    if (g_display_thread == NULL) {
        return;
    }
    osSemaphoreAcquire(/* ctx+0x38 */, 0xFFFFFFFFu);
    /* ctx+0x46 = reason; ctx+0x45 = 1; */
    osSemaphoreRelease(/* ctx+0x38 */);
    osThreadFlagsSet(g_display_thread, 1);
}

/* ── panel init (run once at boot) ────────────────────────────────────── */

void jbd_panel_init(void)
{
    uint8_t b;
    uint8_t pair[2];
    void *fb = /* _LAB_2c4981f4 */;

    jbd_spi_write_reg(0x66);
    jbd_spi_write_reg(0x99);
    jbd_spi_delay(0x32);
    jbd_spi_write_reg(0x06);
    jbd_spi_delay(1);
    jbd_spi_write_reg(0xA9);
    jbd_spi_delay(1);

    /* Mirror / flip mode differs for single-panel vs dual-panel SKU */
    if (/* ctx+0x24 == 0 */ 1) {
        b = 0x10;
    } else {
        b = 0x38;
    }
    jbd_spi_write_buf(0x01, &b, 1);

    memset(fb, 0, JBD_FB_BYTES);
    jbd_clear_framebuffer(0, 0, fb, JBD_FB_BYTES);

    /* Timing / offset register block 0xC0 — four 2-byte pairs from init table */
    pair[0] = 0x00; pair[1] = 0x00;
    jbd_spi_write_buf(0xC0, pair, 2);
    jbd_spi_write_reg(0x97);
    jbd_spi_delay(1);

    pair[0] = 0x00; pair[1] = 0x14;
    jbd_spi_write_buf(0xC0, pair, 2);
    jbd_spi_write_reg(0x97);
    jbd_spi_delay(1);

    pair[0] = 0x18; pair[1] = 0x00;
    jbd_spi_write_buf(0xC0, pair, 2);
    jbd_spi_write_reg(0x97);
    jbd_spi_delay(1);

    pair[0] = 0x18; pair[1] = 0x14;
    jbd_spi_write_buf(0xC0, pair, 2);
    jbd_spi_write_reg(0x97);
    jbd_spi_delay(1);

    pair[0] = 0x0C; pair[1] = 10;
    jbd_spi_write_buf(0xC0, pair, 2);
    jbd_spi_write_reg(0x97);
    jbd_spi_delay(1);

    b = 0x3F;
    jbd_spi_write_buf(0x46, &b, 1);
    jbd_spi_delay(1);

    b = /* single panel ? 4 : 5 */;
    b = 4;
    jbd_spi_write_buf(0x31, &b, 1);
}

/* ── ESD health check ─────────────────────────────────────────────────── */

/*
 * Read five status registers and compare against expected values.
 * Returns 1 if panel healthy, 0 if any check fails (also TRACE-logged).
 */
int jbd_esd_check(int panel)
{
    uint32_t val;
    int err;

    /* reg 0x05 — expect low byte == 0x10 */
    err = jbd_panel_read_reg(panel, 0x05, &val);
    if (err == 0 && (val & 0xFF) != 0x10) {
        /* TRACE: "[panel]jbd esd check 0x5,device:%d,..." */
        return 0;
    }

    /* reg 0x63 — expect non-zero, not 0xFFFFFF */
    err = jbd_panel_read_reg(panel, 0x63, &val);
    if (err == 0 && (val == 0 || val == 0xFFFFFF)) {
        /* TRACE: esd check 0x63 */
        return 0;
    }

    /* reg 0x35 — expect exact magic */
    err = jbd_panel_read_reg(panel, 0x35, &val);
    if (err == 0 && val != JBD_ESD_EXPECT_35) {
        /* TRACE: esd check 0x35 */
        return 0;
    }

    /* reg 0x47 — expect non-zero */
    err = jbd_panel_read_reg(panel, 0x47, &val);
    if (err == 0 && val == 0) {
        /* TRACE: esd check 0x47 */
        return 0;
    }

    /* reg 0xC1 — expect exact magic */
    err = jbd_panel_read_reg(panel, 0xC1, &val);
    if (err == 0 && val != JBD_ESD_EXPECT_C1) {
        /* TRACE: esd check 0xc1 */
        return 0;
    }

    return 1;
}

int jbd_panel_esd_check_both(void)
{
    uint32_t t0 = /* osKernelGetTickCount() */;
    int ok_left  = jbd_esd_check(JBD_PANEL_LEFT);
    int ok_right = jbd_esd_check(JBD_PANEL_RIGHT);

    if (ok_left && ok_right) {
        uint32_t dt = /* osKernelGetTickCount() */ - t0;
        /* TRACE: "[panel]jbd panel esd check end" — duration dt ms */
        (void)dt;
        return 1;
    }
    return 0;
}

/* ── brightness ───────────────────────────────────────────────────────── */

/*
 * Map BLE level (0..7109) to a small integer register value (1..100 scale).
 * Uses fixed-point multiply baked into firmware rodata.
 */
static int jbd_level_to_register(uint32_t level)
{
    /* Approximation of: ((int64)MUL * level >> 32) + level) >> 6 */
    const int64_t MUL = /* DAT_2c499d84 — ~0x10624DD3-ish */ 0x10624DD3LL;
    int64_t wide = (MUL * (int64_t)level) >> 32;
    return (int)((wide + level) >> 6);
}

uint8_t jbd_read_brightness_reg(int panel, uint8_t reg)
{
    uint8_t raw[4];
    jbd_spi_read(panel, reg, raw, sizeof(raw));
    /* firmware TRACE-logs all four bytes on line 0x37 ("get jbd brightness") */
    return raw[0];
}

uint8_t get_jbd_brightness(void *out_for_right_panel)
{
    (void)jbd_read_brightness_reg(JBD_PANEL_LEFT, 0);
    return jbd_read_brightness_reg(JBD_PANEL_RIGHT, (uint8_t)(uintptr_t)out_for_right_panel);
}

/*
 * BLE handler for set_disp_bri / set_jbd_brightness.
 * level 0..7109 normal; 0x1C03 = special factory brightness.
 */
int set_jbd_brightness(uint32_t level)
{
    if (level > JBD_BRI_MAX && level != JBD_BRI_SPECIAL) {
        return -1;
    }

    int reg_val = jbd_level_to_register(level);
    if (reg_val == 0) {
        return -1;
    }

    if (/* factory_busy_flag */ 0) {
        return 0;
    }

    /* Three brightness modes tracked in *mode_state:
     *   1 = low  (< 0x2C6 → max current 2000)
     *   2 = high (≥ 0x2C6 → max current 0x1BC5)
     *   3 = special (0x1C03)
     */

    if (level < 0x2C6) {
        /* mode 1: clamp per-panel custom limits or default 2000 */
        jbd_spi_write_reg(0xA9);
        jbd_set_panel_current(JBD_PANEL_LEFT,  /* per-panel limit or 2000 */ 2000);
        jbd_set_panel_current(JBD_PANEL_RIGHT, /* per-panel limit or 2000 */ 2000);
        jbd_spi_write_reg(0xA3);
        jbd_spi_write_reg(0x97);
        jbd_spi_delay(1);
    } else if (level != JBD_BRI_SPECIAL) {
        /* mode 2: full-range current */
        jbd_spi_write_reg(0xA9);
        jbd_set_panel_current(JBD_PANEL_LEFT,  /* custom or 0x1BC5 */ JBD_BRI_MAX);
        jbd_set_panel_current(JBD_PANEL_RIGHT, /* custom or 0x1BC5 */ JBD_BRI_MAX);
        jbd_spi_write_reg(0xA3);
        jbd_spi_write_reg(0x97);
        jbd_spi_delay(1);
    } else {
        /* mode 3: special */
        jbd_spi_write_reg(0xA9);
        /* FUN_2c497fb8(0x1BC5) — global current limit register */
        jbd_spi_write_reg(0xA3);
        jbd_spi_write_reg(0x97);
        jbd_spi_delay(1);
    }

    /* jbd_apply_brightness_level(level) — writes LUT register via SPI */
    /* stored_level = level; busy = 0; */
    /* TRACE logs old/new/current for both panels */

    (void)reg_val;
    return 0;
}

/* ── RTOS display thread ("jbd4010_display") ──────────────────────────── */

void jbd4010_display_thread(void *arg)
{
    (void)arg;

    for (;;) {
        int msg_type = 0;
        void *payload = NULL;

        /* Block forever waiting for work */
        osMessageQueueGet(&msg_type, g_display_msg_queue, 0xFFFFFFFFu);
        /* payload extracted from queue item */

        if (msg_type != JBD_MSG_SHOW_FRAME) {
            continue;
        }

        /* panel_ctx+0x42 = ready, +0x43 == 1 = powered */
        if (g_panel_ctx[0x42] == 0 || g_panel_ctx[0x43] != 1) {
            continue;
        }

        if (payload == NULL || *(int *)payload == 0) {
            /* TRACE line 0x422 — "[panel]jbd4010_work" failure */
            continue;
        }

        if (/* !factory_mode && !test_mode */ 1) {
            /* ~1.9 s watchdog — panel must complete frame within 0x76C ticks */
            if (!osDelayTicks(0x76C)) {
                /* TRACE line 0x40D — frame timeout */
            }

            /* If >80 frames queued, dump trace ring for both panels */
            if (/* trace_ring[0] */ 0 > 0x50) { /* log left panel trace */ }
            if (/* trace_ring[1] */ 0 > 0x50) { /* log right panel trace */ }
        }

        if (osMessageQueueRelease(g_display_msg_queue, payload) == 0) {
            g_frames_in_flight--;
        }
    }
}
