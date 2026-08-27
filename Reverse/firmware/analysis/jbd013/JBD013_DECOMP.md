# JBD013 / JBD4010 driver — Ghidra decompilation

**Firmware:** `x_1.0.12.83/platform_tester.bin`  
**XIP base:** `0x2C000000`  
**Source paths (from strings):** `lcd/jbd013_api.c`, `lcd/panel_driver.c`, `lcd/hal_driver.c`

The driver lives in a contiguous code cluster **`0x2C497000`–`0x2C4AA000`**. It was located by matching the five ESD status register immediates from debug strings (`0x05`, `0x35`, `0x47`, `0x63`, `0xC1`) against `jbd_esd_check` @ `0x2C498FE0`.

**Decomp output:** `decomp/` (303 functions, Ghidra 12.1.3 export). Key functions also have semantic filenames — see `manifest.json`.

**Readable reconstruction:** [`jbd013_reconstructed.c`](jbd013_reconstructed.c) — cleaned-up C with real names and comments (pseudocode; HAL/RTOS are stubs).

---

## Architecture

```
LVGL flush / display_mgr
        │
        ▼
jbd_display_image_post (0x2C4993D0)  ──► RTOS message queue
        │
        ▼
jbd4010_display_thread (0x2C499270)  ◄── thread name "jbd4010_display"
        │
        ├── jbd_display_image (0x2C497BB0)   SPI window + pixel blast
        ├── jbd_panel_init (0x2C49807C)      one-time panel setup
        ├── jbd_esd_check (0x2C498FE0)       register health readback
        └── set_jbd_brightness (0x2C499B04)  current / PWM control

SPI byte path:
  jbd_spi_write_reg (0x2C4975BC) → CS 0x21/0x4F toggle + jbd_spi_write_byte
  jbd_spi_write_buf (0x2C497644) → reg + payload bytes
  jbd_spi_read      (0x2C497684) → reg + read N bytes
  jbd_spi_write_byte(0x2C497518) → hal SPI TX (FUN_2c673fb8)
```

RTOS objects (string table @ file `0x424B0`):
- `jbd_thread` — worker
- `JBD_TIMER` — periodic timer
- `jbd4010_display` — main display thread (`jbd4010_display_thread`)
- `jbd_mailbox` — inter-task mailbox (`jbd_mailbox_send` / `jbd_mailbox_recv`)

Panel geometry hardcoded in init: **`640×480`** (`0x280 × 0x1E0`) — matches `vg_lite_init(640, 480)` in the GPU path.

---

## Key functions

| Semantic name | VA | File off | Role |
|---|---|---|---|
| **`jbd4010_display_thread`** | `0x2C499270` | `0x499270` | Main display thread loop — blocks on message queue, dispatches frames |
| **`jbd_display_image`** | `0x2C497BB0` | `0x497BB0` | Set SPI window (cmd `0x62`) + blast pixel buffer |
| **`jbd_display_image_post`** | `0x2C4993D0` | `0x4993D0` | Queue a frame (x, y, w, h, buf) to display thread |
| **`jbd_panel_init`** | `0x2C49807C` | `0x49807C` | Panel power-on register sequence |
| **`jbd_esd_check`** | `0x2C498FE0` | `0x498FE0` | Read ESD regs 5/0x63/0x35/0x47/0xC1, compare expected values |
| **`jbd_panel_esd_check_both`** | `0x2C49921C` | `0x49921C` | ESD check on device 0 and 1 (L/R panels) |
| **`set_jbd_brightness`** | `0x2C499B04` | `0x499B04` | BLE `set_disp_bri` handler — maps level → panel current |
| **`get_jbd_brightness`** | `0x2C499578` | `0x499578` | BLE `get_jbd_brightness` wrapper |
| **`jbd_spi_write_reg`** | `0x2C4975BC` | `0x4975BC` | Write one register byte over SPI |
| **`jbd_spi_read`** | `0x2C497684` | `0x497684` | Read N bytes after register select |
| **`jbd_mailbox_send`** | `0x2C4A92BA` | `0x4A92BA` | Mailbox IPC to panel subsystem |

---

## `jbd_esd_check` — register map confirmed

From `decomp/jbd_esd_check.c` @ `0x2C498FE0`:

```c
// device = param_1 (0=left, 1=right)
read(device, 0x05, &val, 4);  expect byte0 == 0x10
read(device, 0x63, &val, 4);  expect val != 0 && val != 0xFFFFFF
read(device, 0x35, &val, 4);  expect val == expected_35  // _LAB_2c4991f8 = 0x42000424
read(device, 0x47, &val, 4);  expect val != 0
read(device, 0xC1, &val, 4);  expect val == expected_c1    // _LAB_2c4991fc = 0x82040A0C
```

Matches firmware strings:
```
[panel]jbd esd check 0x5,device:%d,...
[panel]jbd esd check 0x63,device:%d,...
[panel]jbd esd check 0x35,device:%d,...
[panel]jbd esd check 0x47,device:%d,...
[panel]jbd esd check 0xc1,device:%d,...
```

---

## `jbd_display_image` — SPI window + blit

From `decomp/jbd_display_image.c` @ `0x2C497BB0`:

```c
// param_1=x, param_2=y, param_3=pixels, param_4=buf
window = (param_2 << 10) | (param_1 & 0x3FF);   // packed x/y
spi_write_reg(0x62);                             // CASET/RASET window cmd
spi_write_reg(window >> 16);
spi_write_reg((window & 0xFFFF | param_1 & 0x3FF) >> 8);
spi_write_reg(param_1 & 0xFF);
spi_write_reg(0xFF);                             // end marker
spi_flush();

if (param_1 == 0 && param_2 == 0)
    gpu_fill(640, 480);                          // full-screen clear path
else
    gpu_blit(param_4);                           // partial update

spi_write_reg(0);                                // end frame
// CS deassert + mailbox notify
```

Uses SPI command **`0x62`** for set-window (not MIPI DCS CASET/RASET — JBD013 is SPI micro-LED).

---

## `jbd4010_display_thread` — main loop

From `decomp/jbd4010_display_thread.c` @ `0x2C499270`:

```c
while (true) {
    osMessageQueueGet(queue, &msg, NULL, FOREVER);
    if (msg.type != 0x20) continue;
    if (!panel_ready()) continue;

    if (msg.payload == NULL || *msg.payload == 0) {
        TRACE(..., line 0x422, ...);   // "[panel]jbd4010_work" error path
        continue;
    }

    if (!factory_mode && !test_mode) {
        if (!jbd_os_delay_from_isr(0x76C))   // ~1.9s watchdog
            TRACE(..., line 0x40D, ...);
        // FPS throttle via trace ring if > 80 frames queued
    }
    osMessageQueueRelease(queue, msg);
}
```

Thread attrs in rodata @ file `0x42540`: stack `0x14`, priority `0x08`, entry via jump table → `0x2C4A9270` (veneer into this cluster).

---

## Brightness path

`set_jbd_brightness` @ `0x2C499B04`:
- Input range **0–7109** (`0x1BC5`), special case **`0x1C03`**
- Maps linear level → register value via fixed-point multiply (`DAT_2c499d84`)
- Applies to **both panels** via `jbd_set_panel_current(0, mA)` / `(1, mA)`
- Uses SPI regs **`0xA9`**, **`0xA3`**, **`0x97`** for enable/disable sequencing
- PWM aux path: `jbd_pwm_set_level` @ `0x2C4A9F58` (reg **`0x05`** on PWM controller)

---

## How this was found

1. String cluster @ file `0x041D00–0x042600` identifies source files and thread names.
2. ESD debug strings name registers `0x05/0x35/0x47/0x63/0xC1`.
3. Capstone scan for `cmp #5`, `#0x35`, `#0x47`, `#0x63`, `#0xC1` in same 4 KiB pages → cluster @ `0x2C498xxx`.
4. Ghidra bulk export already contained 112 functions in `0x497–0x4A9`; `jbd_esd_check` decomp matched string table exactly.

**Note:** TRACE format strings use interned IDs (`0x3C019xxx`), not direct rodata pointers — standard Ghidra string-xref search returns zero hits on this firmware (same PIC issue as the VGLite path in `ghidra_decoder/GPU_DECODE.md`).

---

## Regenerate / extend

```bash
# Re-export single function from Ghidra project (if re-imported):
SUP=/opt/homebrew/Cellar/ghidra/12.1.3/libexec/support
PROJ=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/ghidra_decoder/gproj
SCRIPTS=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/ghidra_decoder/gscripts
"$SUP/analyzeHeadless" "$PROJ" M55 -process platform_tester.bin -noanalysis \
  -scriptPath "$SCRIPTS" \
  -postScript Decomp.java jbd 0x2c498fe0 0x2c499270 0x2c497bb0
```

Existing full export: `Reverse/firmware/export/1.0.12.83/functions/m55/decomp/2c497*.c` … `2c4a9*.c`
