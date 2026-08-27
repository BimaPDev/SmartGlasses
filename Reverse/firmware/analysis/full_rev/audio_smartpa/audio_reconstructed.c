/*
 * Awinic AW883xx SmartPA + BES/xjxr audio path — readable reconstruction
 *
 * Reverse-engineered from Star Air firmware 1.0.12.83 (platform_tester.bin).
 * Code cluster ~0x2C4A8020–0x2C4B1338; source paths aw883xx*.c / bes_aw883xx.c /
 * xjxr_audio_volume.cpp / xjxr_audio_a2dp.c / xjxr_audio_hfp.cpp.
 *
 * Pseudocode preserves logic recovered from Ghidra decomp + Capstone. HAL /
 * RTOS / I2C callbacks are stubs — names match binary roles, not a public SDK.
 *
 * Hardware evidence:
 *   - Chip / PID word 0x2049 (init compare + pid_2049_dev_init gate)
 *   - Dual PA indices 0 and 1 via g_aw883xx[]
 *   - Profiles named Mmi / Music / Receiver in rodata near 0x2C4651A4
 *   - Volume UI levels 0..16 → vol_value (0x2D0 max)
 *
 * I2C 7-bit address is taken from board init_info (logged as
 * "smartpa init, i2c addr=0x%x"); this file does not invent a fixed map.
 */

#include <stdint.h>
#include <stddef.h>
#include <string.h>

/* ── constants from binary ─────────────────────────────────────────────── */

#define AW883XX_CHIP_ID         0x2049u
#define AW883XX_REG_ID          0x00u
#define AW883XX_REG_VOLUME      0x05u
#define AW883XX_REG_SYSCTRL     0x06u   /* sample-rate nibble observed */
#define AW883XX_REG_STATUS_45   0x45u

#define AW883XX_VOL_UI_MAX      16      /* cmp #0x10 inclusive */
#define AW883XX_VOL_VALUE_MAX   0x2D0   /* device+0x19C; UI level 0 */
#define AW883XX_VOL_VALUE_STEP  0x18    /* −24 per UI step after 0 */
#define AW883XX_VOL_VALUE_BASE  0x168   /* UI level 1 */

#define AW883XX_DEV_MAX         0x10    /* init rejects index > 0x0F */
#define AW883XX_PROF_NAME_LEN   0x32

#define AW883XX_DSP_IV_A        0x9CE2u
#define AW883XX_DSP_IV_B        0x9D71u
#define AW883XX_DSP_RATE        0x9F44u
#define AW883XX_DSP_FW_BASE     0x8C00u

/* ── types ─────────────────────────────────────────────────────────────── */

typedef struct aw883xx_ops aw883xx_ops_t;

typedef struct {
    uint8_t  dev_index;       /* +0x00  board slot 0..15 */
    uint8_t  i2c_addr;        /* +0x01  7-bit addr from board info */
    uint8_t  flags;           /* +0x02 */
    uint8_t  fade_en;         /* +0x03 */
    uint32_t fade_step;       /* +0x04 */
    uint32_t fade_frame;      /* +0x08 */
    uint8_t  unused_c;
    uint8_t  pad[3];
    void    *prof_blob;       /* +0x10 */
    int    (*i2c_read)(uint8_t addr, uint8_t reg, void *buf, size_t n);  /* +0x14 */
    int    (*i2c_write)(uint8_t addr, uint8_t reg, const void *buf, size_t n); /* +0x18 */
    void   (*reset_gpio)(int assert); /* +0x1C optional */
} aw883xx_init_info_t;

typedef struct {
    void              *dev;           /* +0x00 → large aw_device */
    uint32_t           chip_id;       /* +0x04 = 0x2049 after probe */
    aw883xx_init_info_t *info;        /* +0x08 */
    uint8_t            index;         /* +0x0C */
    uint8_t            i2c_addr;      /* +0x0D */
    uint8_t            phase;         /* +0x0E */
    uint8_t            _pad0;
    uint32_t           started;       /* +0x10 */
    uint8_t            running;       /* +0x15 */
    uint8_t            _pad1[2];
    int              (*i2c_read)(uint8_t, uint8_t, void *, size_t);  /* +0x18 */
    int              (*i2c_write)(uint8_t, uint8_t, const void *, size_t); /* +0x1C */
    void             (*reset_gpio)(int); /* +0x20 */
} aw883xx_wrap_t;

/* Large PID-2049 device object (offsets cited from FUN_2c4aa018) */
typedef struct {
    /* … truncated fields … */
    uint32_t  chip_id;        /* +0x9C */
    uint8_t   i2c_addr;       /* +0xA0 */
    uint32_t  fade_step;      /* +0xA4 */
    aw883xx_wrap_t *wrap;     /* +0xA8 */
    uint8_t   fade_en;        /* +0xAC */
    uint32_t  vol_min;        /* +0x198 */
    uint32_t  vol_max;        /* +0x19C = 0x2D0 */
    uint32_t  vol_cur;        /* +0x1A0 */
    uint8_t   dsp_addr_reg;   /* +0x1CC */
    uint8_t   dsp_data_reg;   /* +0x1D0 */
    uint8_t   dsp_dummy_reg;  /* +0x208 */
    int     (*reg_write_bits)(void *, uint8_t, uint16_t, uint16_t); /* +0x340 */
    int     (*set_volume)(void *, uint16_t);                        /* +0x350 */
    int     (*get_volume)(void *, uint16_t *);                      /* +0x354 */
    /* many more ops installed by pid_2049_dev_init */
} aw_device_t;

/* ── external HAL / RTOS (stubs) ───────────────────────────────────────── */

int  hal_i2c_write(int bus, uint8_t addr, const uint8_t *buf, size_t len); /* FUN_2c4bd438 */
int  hal_i2c_read(int bus, uint8_t addr, uint8_t *buf, size_t len);        /* FUN_2c4bd450 */
void osSemaphoreAcquire(void *sem, uint32_t timeout); /* FUN_2c644044 */
void osSemaphoreRelease(void *sem);                   /* FUN_2c644080 */
void osDelayMs(int ms);                               /* FUN_2c6444fc */
int  TRACE(int mod, int line, ...);                   /* FUN_2c673d88 — logs, returns */

void *aw_malloc(size_t n);                            /* FUN_2c4aa4ec */
void  aw_free(void *p);                               /* FUN_2c4aa540 */

int aw883xx_check_init_info(unsigned dev, void *prof); /* FUN_2c4aa790 */
int aw883xx_device_start(aw_device_t *d);              /* FUN_2c4aba70 */
int aw883xx_device_stop(aw_device_t *d);               /* FUN_2c4abfec */
int aw883xx_cali_prepare(aw_device_t *d);              /* FUN_2c4ad294 */
int aw883xx_cali_run_re(aw_device_t *d, int mode, int arg);
int aw883xx_cali_run_f0(aw_device_t *d, int mode, int arg);
aw883xx_wrap_t *g_aw883xx_get(unsigned dev);          /* FUN_2c4a8cac */

/* ── module state ──────────────────────────────────────────────────────── */

static aw883xx_wrap_t *g_aw883xx[AW883XX_DEV_MAX];    /* _LAB_2c4a9284 table */
static int             g_aw883xx_count;               /* *_LAB_2c4a9280 */
static int             g_smartpa_ready;               /* bes layer flag */
static void           *g_aw_i2c_mutex;                /* *DAT_2c4a94dc */

/* ── lock helpers ──────────────────────────────────────────────────────── */

static void aw_lock(void)   /* FUN_2c4a94d0 */
{
    osSemaphoreAcquire(g_aw_i2c_mutex, 0xffffffffu);
}

static void aw_unlock(void) /* FUN_2c4a94e0 */
{
    osSemaphoreRelease(g_aw_i2c_mutex);
}

/* ── low-level register I/O ────────────────────────────────────────────── */

/* FUN_2c4a8638 — 16-bit register read, swap to host endian */
int aw883xx_reg_read(aw883xx_wrap_t *w, uint8_t reg, uint16_t *out)
{
    uint16_t raw = 0;
    int err = w->i2c_read(w->i2c_addr, reg, &raw, 2);
    if (err < 0) {
        TRACE(4, 0x34, /* i2c addr=0x%x read reg=0x%02x error */ w->index, w->i2c_addr, reg);
        return err;
    }
    *out = (uint16_t)((raw << 8) | (raw >> 8));
    return err;
}

/* FUN_2c4a85ac — 16-bit register write, high byte first on wire */
int aw883xx_reg_write(aw883xx_wrap_t *w, uint8_t reg, uint16_t val)
{
    uint8_t be[2] = { (uint8_t)(val >> 8), (uint8_t)val };
    int err = w->i2c_write(w->i2c_addr, reg, be, 2);
    if (err < 0) {
        TRACE(4, 0x46, /* write fail reg/val */ w->index, reg, val, err);
    }
    return err;
}

/* FUN_2c4a8764 / FUN_2c4a8704 — locked wrappers */
int aw883xx_reg_read_locked(aw883xx_wrap_t *w, uint8_t reg, uint16_t *out)
{
    int err;
    aw_lock();
    err = aw883xx_reg_read(w, reg, out);
    if (err >= 0) {
        aw_unlock();
        return err;
    }
    TRACE(4, 0xa1, w->index, reg, *out, err);
    return err; /* TRACE path in firmware may not return */
}

int aw883xx_reg_write_locked(aw883xx_wrap_t *w, uint8_t reg, uint16_t val)
{
    int err;
    aw_lock();
    err = aw883xx_reg_write(w, reg, val);
    if (err >= 0) {
        aw_unlock();
        return err;
    }
    TRACE(4, 0x90, w->index, reg, val, err);
    return err;
}

/* FUN_2c4a87c4 — read-modify-write */
int aw883xx_reg_write_bits(aw883xx_wrap_t *w, uint8_t reg, uint16_t mask, uint16_t val)
{
    uint16_t cur = 0;
    int err;
    aw_lock();
    err = aw883xx_reg_read(w, reg, &cur);
    if (err < 0) {
        TRACE(4, 0x7a, w->index, err);
        return err;
    }
    cur = (uint16_t)((mask & val) | (~mask & cur));
    err = aw883xx_reg_write(w, reg, cur);
    if (err >= 0) {
        aw_unlock();
        return 0;
    }
    TRACE(4, 0x81, w->index, err);
    return err;
}

/* ── volume ────────────────────────────────────────────────────────────── */

/* Map UI level → Awinic vol_value (FUN_2c4a9894 Capstone) */
static int smartpa_ui_to_vol_value(unsigned level)
{
    if (level == 0)
        return AW883XX_VOL_VALUE_MAX; /* 0x2D0 */
    return (int)(level - 1) * (-AW883XX_VOL_VALUE_STEP) + AW883XX_VOL_VALUE_BASE;
}

/* FUN_2c4a9f58 — pack volume into register 5 (bitfield math from decomp) */
int aw883xx_set_volume_reg(aw_device_t *d, unsigned vol)
{
    aw883xx_wrap_t *w = d->wrap;
    uint16_t cur = 0;
    /* Decomp: q = (vol * DAT) >> 0x25; then blend with ±0x30 / <<6 fields */
    unsigned q = vol / 48u; /* equivalent intent of the multiply-high sequence */
    aw883xx_reg_read_locked(w, AW883XX_REG_VOLUME, &cur);
    cur = (uint16_t)((cur & 0x3F) |
                     ((uint16_t)(vol + q * -0x30 + (q << 6)) << 6));
    return aw883xx_reg_write_locked(w, AW883XX_REG_VOLUME, cur);
}

/* FUN_2c4a9b28 — decode register 5 (inverse of set; see decomp bit shifts) */
int aw883xx_get_volume_reg(aw_device_t *d, int16_t *out)
{
    aw883xx_wrap_t *w = d->wrap;
    uint16_t cur = 0;
    unsigned mid;
    aw883xx_reg_read_locked(w, AW883XX_REG_VOLUME, &cur);
    mid = (cur & 0xfffu) >> 6;
    *out = (int16_t)(((cur << 20) >> 26) + (int)(mid /* scaled */) +
                     (int)((cur >> 12) * 0x30));
    return 0;
}

/* FUN_2c4aaac0 — clamp, store, invoke device set_volume op */
int aw883xx_volume_ops(aw_device_t *d, uint32_t vol_value)
{
    if (vol_value > d->vol_max)
        return -1;
    d->vol_cur = vol_value;
    if (d->set_volume)
        return d->set_volume(d, (uint16_t)(d->vol_min + vol_value));
    return 0;
}

/* FUN_2c4a8d30 — per-device apply via g_aw883xx[] */
int aw883xx_volume_apply(unsigned dev, uint32_t vol_value)
{
    aw883xx_wrap_t *w;
    if (dev > 0x0F)
        return -0x16;
    w = g_aw883xx[dev];
    if (!w) {
        TRACE(4, 0x311, /* g_aw883xx[%d] is NULL */ dev);
        return -0x16;
    }
    return aw883xx_volume_ops((aw_device_t *)w->dev, vol_value);
}

/* FUN_2c4a9894 — bes "smartpa set volume" */
int smartpa_set_volume(unsigned ui_level)
{
    int vol;
    int err;

    if (!g_smartpa_ready) {
        TRACE(4, 0x166, /* smartpa NOT initialized */);
        return -1;
    }
    if (ui_level > AW883XX_VOL_UI_MAX)
        return -1;

    vol = smartpa_ui_to_vol_value(ui_level);
    TRACE(4, 0x173, /* smartpa set volume=%d, vol_value=%d */, ui_level, vol);

    err = aw883xx_volume_apply(0, (uint32_t)vol);
    if (err < 0)
        return err;
    return aw883xx_volume_apply(1, (uint32_t)vol);
}

/* ── init / chip-id ────────────────────────────────────────────────────── */

/* FUN_2c4aa018 — only accepts chip_id == 0x2049 */
int aw883xx_pid_2049_dev_init(aw883xx_wrap_t *w)
{
    aw_device_t *d;
    if (!w)
        return -1;
    if (w->chip_id != AW883XX_CHIP_ID)
        return (int)0xffffffea; /* -ENODEV style */

    d = (aw_device_t *)aw_malloc(0x3a0);
    if (!d) {
        TRACE(4, 0x179, /* calloc failed */);
        return -1;
    }
    memset(d, 0, 0x3a0);
    d->chip_id = AW883XX_CHIP_ID;
    d->i2c_addr = w->i2c_addr;
    d->wrap = w;
    d->vol_max = AW883XX_VOL_VALUE_MAX; /* 0x2D0 */
    d->fade_step = 0x30;
    /* installs function pointers at +0x32C…+0x380 from PID-2049 rodata pool */
    w->dev = d;
    /* profile bind + first reg kick omitted — see decomp 0x2c4aa018 */
    return 0;
}

/* FUN_2c4a8fcc — aw883xx_init / aw883xx_smartpa_init */
int aw883xx_init(aw883xx_init_info_t *info)
{
    aw883xx_wrap_t *w;
    uint16_t chip = 0;
    int tries = 5;
    int i, err;
    int (*ops)(aw883xx_wrap_t *);

    if (!info) {
        TRACE(4, 0x3de, /* aw_info is NULL */);
        return -1;
    }
    if (info->dev_index > 0x0F) {
        TRACE(4, 0x367, /* unsupported dev */ info->dev_index);
        return -1;
    }
    if (!info->i2c_read || !info->i2c_write) {
        TRACE(4, 0x36e, /* i2c funtion is NULL */);
        return -1;
    }

    /* FUN_2c4aa790 — validate profile table */
    if (aw883xx_check_init_info(info->dev_index, info->prof_blob) < 0)
        return -1;

    w = (aw883xx_wrap_t *)aw_malloc(0x24);
    if (!w) {
        TRACE(4, 0x37f, /* malloc aw883xx failed */);
        return -1;
    }
    memset(w, 0, 0x24);
    w->info = info;
    w->index = info->dev_index;
    w->i2c_addr = info->i2c_addr;
    w->i2c_read = info->i2c_read;
    w->i2c_write = info->i2c_write;
    w->reset_gpio = info->reset_gpio;
    w->started = 1;

    if (w->reset_gpio) {
        w->reset_gpio(0);
        osDelayMs(1);
        w->reset_gpio(1);
        osDelayMs(2);
    }

    /* chip-id retry — expect 0x2049 */
    while (1) {
        err = aw883xx_reg_read(w, AW883XX_REG_ID, &chip);
        if (err < 0) {
            TRACE(4, 0x3a5, /* failed to read REG_ID */ w->index);
            return err;
        }
        if (chip == AW883XX_CHIP_ID)
            break;
        osDelayMs(5);
        if (--tries == 0) {
            TRACE(4, 0x3f4, /* aw883xx_read_chipid failed */, w->index, (int)0xffffffea);
            aw_free(w);
            return (int)0xffffffea;
        }
    }
    w->chip_id = AW883XX_CHIP_ID;

    /* walk init_info->dev_init_ops[] until one returns 0 */
    for (i = 0; i < /* count at info */ 8; i++) {
        ops = /* info->dev_init_ops[i] */ aw883xx_pid_2049_dev_init;
        if (!ops) {
            TRACE(4, 0x3c4, /* dev_init_ops[%d] is null */, i);
            break;
        }
        err = ops(w);
        if (err == 0) {
            g_aw883xx[info->dev_index] = w;
            g_aw883xx_count++;
            TRACE(4, /* smartpa init succeeded, i2c addr=0x%x */, w->i2c_addr);
            return 0;
        }
        if (err >= 0)
            break;
    }
    aw_free(w);
    return err;
}

/* stub referenced above — FUN_2c4aa790 */
int aw883xx_check_init_info(unsigned dev, void *prof)
{
    (void)dev;
    if (!prof) {
        TRACE(4, 0x40, /* check prof failed */);
        return -1;
    }
    return 0;
}

/* ── start / stop / profile ────────────────────────────────────────────── */

/* FUN_2c4a8dce — ctrl_state / start_pa gate */
int aw883xx_ctrl_state(unsigned dev, int start)
{
    aw883xx_wrap_t *w = g_aw883xx[dev];
    if (!w)
        return -0x16;
    if (!start) {
        /* stop → FUN_2c4abfec device_stop */
        return aw883xx_device_stop((aw_device_t *)w->dev);
    }
    /* start → FUN_2c4ab5c8 / FUN_2c4aba70 device_start */
    return aw883xx_device_start((aw_device_t *)w->dev);
}

/* FUN_2c4a96fa — sample-rate gate before profile load */
int smartpa_set_profile_rate(uint16_t rate_hz, const char *name)
{
    const char *tag;
    if (!g_smartpa_ready)
        return -1;
    switch (rate_hz) {
    case 8000:  tag = "8k";  break;
    case 16000: tag = "16k"; break;
    case 44100: tag = "44.1k"; break;
    case 48000: tag = "48k"; break;
    default:
        TRACE(4, /* rate can not support, use default 48k */);
        return -1;
    }
    TRACE(4, 0x132, /* smartpa set profile, sample rate=%d, prof_name=%s */, rate_hz, name ? name : tag);
    (void)tag;
    return 0;
}

/* FUN_2c4a8f1e — set_profile_byname */
int aw883xx_set_profile_byname(unsigned dev, const char *name)
{
    aw883xx_wrap_t *w = g_aw883xx[dev];
    aw_device_t *d;
    if (!w) {
        TRACE(4, 0x34a, /* g_aw883xx NULL */, dev);
        return -1;
    }
    d = (aw_device_t *)w->dev;
    /* strncmp against profile list entries of length 0x32 / 0x4C stride */
    (void)d;
    (void)name;
    return 0;
}

/* ── calibration ───────────────────────────────────────────────────────── */

/* FUN_2c4a92ba — aw883xx_cali_re_f0 entry used by factory / bes */
int aw883xx_cali_re_f0(unsigned dev, int mode, int arg_a, int arg_b)
{
    aw883xx_wrap_t *w = g_aw883xx[dev];
    int err;
    if (!w)
        return -0x16;
    err = aw883xx_cali_prepare((aw_device_t *)w->dev); /* FUN_2c4ad294 */
    if (err < 0) {
        TRACE(4, 0x54e, /* cali re_f0 failed */, w->index);
        return err;
    }
    err = aw883xx_cali_run_re((aw_device_t *)w->dev, mode, arg_a);
    if (err < 0) {
        TRACE(4, 0x553, /* cali re failed */, w->index);
        return err;
    }
    err = aw883xx_cali_run_f0((aw_device_t *)w->dev, mode, arg_b);
    if (err < 0) {
        TRACE(4, 0x558, /* cali f0 failed */, w->index);
        return err;
    }
    return err;
}

/* FUN_2c4a99c8 — smartpa get factory re for both PAs */
int smartpa_get_factory_re(uint32_t out_re[2], uint16_t out_raw[2])
{
    int i;
    if (!g_smartpa_ready) {
        TRACE(4, 0x19a, /* smartpa NOT initialized */);
        return -1;
    }
    if (!out_re)
        return -1;
    for (i = 0; i < 2; i++) {
        aw883xx_wrap_t *w = g_aw883xx_get(i);
        uint16_t raw = 0;
        if (!w)
            continue;
        /* Decomp: out_re[i] = *(uint32_t *)(w + 4); then reg_read(w, 1, &raw) */
        out_re[i] = w->chip_id;
        aw883xx_reg_read_locked(w, 1, &raw);
        if (out_raw)
            out_raw[i] = raw;
    }
    TRACE(4, /* smartpa get factory re success=%d, re[0]=%d, re[1]=%d */,
          1, out_re[0], out_re[1]);
    return 0;
}

aw883xx_wrap_t *g_aw883xx_get(unsigned dev) /* FUN_2c4a8cac */
{
    if (dev >= AW883XX_DEV_MAX)
        return NULL;
    return g_aw883xx[dev];
}

/* ── xjxr / AF surface (string-level hooks) ─────────────────────────────── */

/*
 * xjxr_audio_set_volume / get_volume / mute live in xjxr_audio_volume.cpp.
 * A2DP: xjxr_audio_a2dp.c; HFP: xjxr_audio_hfp.cpp.
 * Those TUs are TRACE-opaque in this Ghidra export; they ultimately call into
 * bes_aw883xx → smartpa_set_volume / aw883xx_ctrl_state above.
 *
 * audioflinger.c owns af_thread / af_stream_set_chan_vol; algo_process_audio.c
 * owns playback_open/process/close — stream side before SmartPA amplify.
 */

void xjxr_audio_set_volume(int level)
{
    (void)smartpa_set_volume((unsigned)level);
}

void xjxr_audio_a2dp_on_start(uint32_t rate_hz)
{
    smartpa_set_profile_rate((uint16_t)rate_hz, "Music");
    aw883xx_ctrl_state(0, 1);
    aw883xx_ctrl_state(1, 1);
}

void xjxr_audio_hfp_on_call(uint32_t rate_hz)
{
    smartpa_set_profile_rate((uint16_t)rate_hz, "Receiver");
    aw883xx_ctrl_state(0, 1);
    aw883xx_ctrl_state(1, 1);
}
