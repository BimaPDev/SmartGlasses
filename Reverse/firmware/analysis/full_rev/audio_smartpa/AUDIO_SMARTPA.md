# Audio / AW883xx SmartPA — Ghidra + Capstone decompilation

**Firmware:** `x_1.0.12.83/platform_tester.bin`  
**XIP / code base:** `0x2C000000` (file offset = VA − `0x2C000000`)  
**`.rodata` alias seen in TRACE pools:** `0x3C000000` (interned TRACE IDs; absolute string pointer xrefs are empty — same model as JBD013 / touch leaf)

**Readable reconstruction:** [`audio_reconstructed.c`](audio_reconstructed.c)  
**VA map:** [`manifest.json`](manifest.json)

---

## Source paths (from `m55_ascii` / `source_files.txt`)

| Path token | Role |
|---|---|
| `platform/drivers/smartpa/aw883xx.c` | Awinic AW883xx core (init, volume, DSP R/W, I2C) |
| `platform/drivers/smartpa/aw883xx_calib.c` | Re / F0 calibration |
| `platform/drivers/smartpa/aw883xx_device.c` | Device start / FW / profile |
| `platform/drivers/smartpa/aw883xx_pid_2049_init.c` | **PID 0x2049** device ops table |
| `platform/drivers/smartpa/bes_aw883xx.c` | BES board glue (`smartpa i2c init`, start/stop/volume logs) |
| `xjxr_audio/m55/xjxr_audio_volume.cpp` | App volume API |
| `xjxr_audio/m55/xjxr_audio_a2dp.c` | A2DP playback path |
| `xjxr_audio/m55/xjxr_audio_hfp.cpp` | HFP call path |
| `services/audioflinger/audioflinger.c` | Stream / AF thread |
| `services/mcpp/.../algo_process_audio.c` | Playback algo open/process/ctl |

Named APIs in the string table (not Thumb-symbolized): `aw883xx_init`, `aw883xx_smartpa_init`, `aw883xx_set_volume`, `aw883xx_get_volume`, `aw883xx_start_pa`, `aw883xx_cali_re_f0`, `aw883xx_cali_re_store`, `xjxr_audio_set_volume`, `xjxr_audio_get_volume`, `xjxr_audio_volume_up/down/mute`.

---

## How the cluster was found

String MOVW/MOVT / absolute xrefs to `aw883xx_*` are **zero** (PIC + interned TRACE). Location method:

1. Capstone / decomp search for chip-id immediate **`0x2049`**.
2. Hit `FUN_2c4a8fcc`: retries `reg_read(…, 0, &id)` until `id == 0x2049`, then runs `dev_init_ops[]`.
3. Hit `FUN_2c4aa018`: `if (param_1[1] == 0x2049)` fills the large PID-2049 ops / register-descriptor block — matches `aw883xx_pid_2049_dev_init` / `aw883xx_pid_2049_init.c`.
4. Contiguous driver cluster **`0x2C4A8020`–`0x2C4B1338`** sits just after the JBD013 panel block; I2C helpers call shared HAL `FUN_2c4BD438` / `FUN_2c4BD450` (same as touch).
5. Board profile blobs at `0x2C4651A4` / neighbors embed **`0x2049`** plus profile names **`Mmi`**, **`Music`**, **`Receiver`**.

---

## Architecture

```
xjxr_audio_volume / A2DP / HFP / AirMusic (LVGL)
        │  (strings: xjxr_audio_set_volume, xjxr_audio_a2dp.c, xjxr_audio_hfp.cpp)
        ▼
bes_aw883xx glue  (smartpa start / set volume / cali logs)
        │
        ├── smartpa_set_volume     (0x2C4A9894)  UI 0..16 → vol_value; both PA indices
        ├── aw883xx_set_profile_*  (0x2C4A96FA / 0x2C4A8F1E)  8k/16k/44.1k/48k + name
        ├── aw883xx_start / stop   (0x2C4A8DCE / 0x2C4ABFEC path)
        └── aw883xx_cali_re_f0     (0x2C4A92BA)  dual-PA re[0]/re[1], f0[0]/f0[1]

aw883xx_init (0x2C4A8FCC)
        ├── check I2C ops non-NULL
        ├── aw883xx_check_init_info / profiles (0x2C4AA790)
        ├── malloc device wrapper (0x24 bytes)
        ├── aw883xx_read_chipid loop → expect 0x2049
        └── call init_info->dev_init_ops[i] → aw883xx_pid_2049_dev_init (0x2C4AA018)

I2C / register path:
  aw883xx_reg_write (0x2C4A85AC) → i2c_write cb → HAL
  aw883xx_reg_read  (0x2C4A8638) → i2c_read cb  → endian-swap 16-bit
  aw883xx_reg_write_bits (0x2C4A87C4)
  aw883xx_dsp_write / dsp_read (0x2C4A88C8 / 0x2C4A8A8C)
  mutex: 0x2C4A94D0 / 0x2C4A94E0 → osSemaphoreAcquire/Release
```

**Dual SmartPA:** `g_aw883xx[dev]` table (`FUN_2c4A8CAC` getter). Volume apply walks **dev 0 then 1**. Cali logs `re[0]/re[1]`, `f0[0]/f0[1]`.

**RTOS:** `osDelayMs` (`FUN_2c6444FC`) between chip-id retries and fade steps; semaphore lock around reg R/W.

**LVGL / media edge:** `Pages/AirMusic`, `AirMusicService.cpp`, intents `Intent_Music_Play|Pause|Stop|…` — volume changes from UI land in `xjxr_audio_*` then SmartPA (string/call-graph edge; C++ Thumb entries remain TRACE-opaque like other UI TUs).

---

## Key functions

| Semantic name | VA | File off | Role |
|---|---|---|---|
| **`aw883xx_init`** | `0x2C4A8FCC` | `0x4A8FCC` | Probe chip-id **0x2049**, install device into `g_aw883xx[]` |
| **`aw883xx_pid_2049_dev_init`** | `0x2C4AA018` | `0x4AA018` | PID-2049 descriptor + ops vtable (volume max `0x2D0`) |
| **`aw883xx_reg_read`** | `0x2C4A8638` | `0x4A8638` | 16-bit BE↔LE register read via board I2C cb |
| **`aw883xx_reg_write`** | `0x2C4A85AC` | `0x4A85AC` | 16-bit register write (high byte first on wire) |
| **`aw883xx_reg_write_bits`** | `0x2C4A87C4` | `0x4A87C4` | RMW: `(mask & val) \| (~mask & old)` |
| **`aw883xx_dsp_write`** | `0x2C4A88C8` | `0x4A88C8` | DSP addr/data via regs at device `+0x1CC` / `+0x1D0` |
| **`aw883xx_dsp_read`** | `0x2C4A8A8C` | `0x4A8A8C` | DSP 16/32-bit read |
| **`smartpa_set_volume`** | `0x2C4A9894` | `0x4A9894` | Map level→`vol_value`; apply to PA0+PA1 |
| **`aw883xx_volume_apply`** | `0x2C4A8D30` | `0x4A8D30` | `g_aw883xx[dev]` → fade/ops (`0x2C4AAAC0`) |
| **`aw883xx_volume_ops`** | `0x2C4AAAC0` | `0x4AAAC0` | Clamp vs `+0x19C`, store `+0x1A0`, call `+0x350` |
| **`aw883xx_set_volume_reg`** | `0x2C4A9F58` | `0x4A9F58` | Encode volume into **reg 5** |
| **`aw883xx_get_volume_reg`** | `0x2C4A9B28` | `0x4A9B28` | Decode volume from **reg 5** |
| **`aw883xx_set_profile_byname`** | `0x2C4A8F1E` | `0x4A8F1E` | Profile name match (`strncmp` len `0x32`) |
| **`smartpa_set_profile_rate`** | `0x2C4A96FA` | `0x4A96FA` | Accept 8000 / 16000 / 44100 / 48000 |
| **`aw883xx_ctrl_state` / start** | `0x2C4A8DCE` | `0x4A8DCE` | Start (`param_2!=0`) / stop path into device_start |
| **`aw883xx_device_stop`** | `0x2C4ABFEC` | `0x4ABFEC` | Power-down / mute sequence |
| **`aw883xx_cali_re_f0`** | `0x2C4A92BA` | `0x4A92BA` | Cali entry used by factory / bes glue |
| **`smartpa_get_factory_re`** | `0x2C4A99C8` | `0x4A99C8` | Read both devices’ factory Re |
| **`aw883xx_i2c_writes`** | `0x2C4A93EC` | `0x4A93EC` | `{reg}\|payload` → `hal_i2c_write` |
| **`g_aw883xx_get`** | `0x2C4A8CAC` | `0x4A8CAC` | Return `g_aw883xx[dev]` |

---

## Volume map (binary)

From `smartpa_set_volume` @ `0x2C4A9894` (Capstone):

- Reject if SmartPA not initialized (`*flag == 0` → TRACE `smartpa NOT initialized`).
- Accept UI level `param ∈ [0, 16]` (`cmp r0, #0x10` / `bhi`).
- `vol_value = (param == 0) ? 0x2D0 : (param - 1) * (-0x18) + 0x168`
  - level 0 → `0x2D0` (720) — matches PID init max at device `+0x19C`
  - level 1 → `0x168` (360); each step −24 (`0x18`)
- TRACE line `0x173` logs `smartpa set volume=%d, vol_value=%d`.
- Calls volume apply for **device 0 then 1**.

---

## Register / DSP evidence (from binary — not a full Awinic datasheet map)

| Access | Evidence |
|---|---|
| Chip ID word **`0x2049`** | Init compare + PID gate; board profile records |
| **Reg `0`** | Chip-id read in init loop (`FUN_2c4A8638(dev, 0, &id)`) |
| **Reg `5`** | Volume get/set encode/decode (`0x2C4A9B28` / `0x2C4A9F58`) |
| **Reg `6`** | Sample-rate / mode nibble → Hz table (`0x2C4A9B98`) then DSP `0x9F44` |
| **Reg `0x45`** | Status wait loop clears bit3 (`0x2C4A9C5C`) |
| DSP **`0x9CE2`**, **`0x9D71`** | IV / monitor flags (`0x2C4A9D10`) |
| DSP base **`0x8C00`** | Firmware verify walk (`0x2C4A9DF0`) |
| String-only (no VA map claimed) | “check reg **0x40** odd/even bit”, REG_ID format |

**I2C 7-bit address:** logged as `smartpa init, i2c addr=0x%x` from board init info byte (`wrapper+0x0D`). Exact board constant not recovered as a lone immediate (nearby `0x34` in profile data is the low byte of a `0x3C……` pointer — **not** claimed as the bus address).

---

## Calibration

Strings: `smartpa start cali`, `smartpa cali result=%d, re[0]=%d, re[1]=%d, f0[0]=%d, f0[1]=%d`, `smartpa set pa re success=…`, `PA cali stored…`, `aw883xx_cali_re_f0`, `aw883xx_cali_re_store`.

Code: `aw883xx_cali_re_f0` (`0x2C4A92BA`) → `FUN_2c4AD294` (mode 3 cali helpers) → store path `FUN_2c4A9A7A`. Dual-channel results match stereo / dual-PA hardware.

---

## A2DP / HFP / algo hooks (string evidence)

| Symbol / file | Notes |
|---|---|
| `xjxr_audio_a2dp.c` | A2DP TU on M55 |
| `xjxr_audio_hfp.cpp` | HFP + `xjxr_audio_register_call_state_callback` |
| `xjxr_audio_set_volume` / `get_*` / mute | Volume surface above SmartPA |
| `algo_process_audio_playback_*` | Open / cfg / process / close |
| `audioflinger.c` / `af_thread` | Stream thread; `af_stream_set_chan_vol` |

Precise Thumb VAs for C++ `xjxr_audio_*` remain TRACE-opaque in this export (same limitation as AirMusic / touchpad UI). The SmartPA cluster above is the amplified output stage those paths ultimately drive.

---

## Profiles (rodata)

At/near `0x2C4651A4`: chip **`0x2049`**, name **`Mmi`**. Sibling records name **`Music`** and **`Receiver`** — matches `smartpa set profile, sample rate=%d, prof_name=%s`.
