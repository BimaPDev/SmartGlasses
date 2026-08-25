# MYVU Star Air (XGA010C) — Reverse-Engineering Teardown

A full teardown of Meizu's **MYVU "Star Air" (model XGA010C)** AR glasses,
rebuilt from the OTA firmware images, BLE packet captures, and the FCC filing —
silicon, sensors, wire protocol, and every dead end on the way to the firmware.

> **Unofficial and unaffiliated.** "MYVU" / "Meizu" are trademarks of their
> respective owners. Protocol and hardware details were reverse-engineered for
> interoperability and research; behaviour may change with any firmware update.

**Findings compiled 2026-08-23.**

---

## Device identity

Confirmed over BLE and on the glasses' own About screen.

| Field | Value |
| --- | --- |
| Model / subModel | `Star Air` / `XGA010C` |
| Advertised name | `MYVU 0F35` |
| Bluetooth address | `2C:6F:4E:01:0F:35` |
| Serial number | `1001160244J0008Q` |
| Firmware (running) | `Flyme XR 1.0.12.88.20250217_Air_FR` |
| Build type | `user` (production; not rootable) |
| Encrypted device ID | `3207e755e085c6af233233bc504a78a9b0d1e4403a2453cc06fb81cd01aa461f` |
| — derivation | `sha256_hex("RhdNS" + backtick + "Z?" + serialNumber)` |
| FCC ID | `2BHGZ-XGA010C` |

---

## 0. Bottom line

Five things worth knowing before the detail. The glasses are healthy, open, and
Bluetooth-only — and their firmware, long thought unobtainable, turned out to be
downloadable.

- **Silicon — Bestechnic BES1600.** A BT-audio SoC: Cortex-M55 + HiFi4 DSP +
  Vivante VGLite GPU, with integrated PMU, codec, and Bluetooth. No separate
  Wi-Fi radio.
- **Not account-locked.** There is no activation gate or license check. The
  `system_glass_active` messages are analytics only — a red herring that cost
  days.
- **The real gate is audio.** Teleprompter / nav / music need a classic-BT
  HFP+A2DP link. iOS can't open one to this non-MFi device — a platform limit,
  not a bug.
- **Firmware is obtainable.** Spoofing a low version into the signed `checkV2`
  call lands inside an open rollout window and returns signed download URLs. Two
  builds pulled.
- **Companion accessory.** The firmware also manages a **MYVU Ring** — a separate
  BLE controller with its own battery and OTA path.

---

## 1. Silicon — the system-on-chip

The main processor is a **Bestechnic BES1600** (恒玄, the BES2600 audio-SoC
family). It is named unambiguously throughout the firmware — `CHIP=best1600`, and
HAL/driver trees under `platform/hal/best1600/` and
`platform/drivers/ana/best1600/`. The FCC filing withheld the block diagram as
confidential, so the firmware is what actually pinned the part.

It is a multi-core design, and the firmware ships as two images that map onto it:

- **Application core — ARM Cortex-M55.** Runs the MyvuOS launcher, the LVGL UI
  (`thirdparty/star_air_lvgl`) and a littlefs filesystem. Shipped as
  `platform_tester.bin` (~6.8 MB).
- **Audio DSP — Cadence Tensilica HiFi4.** Handles the speech/audio pipeline, AAC
  decode and VAD, with its own ITCM/DTCM and an M55↔HiFi4 RPC bridge
  (`rpc_m55_dsp.c`).
- **Bluetooth controller.** Dual-mode BR/EDR + BLE running the BES IBRT stack
  (A2DP / AVRCP / HFP / ANCS). Shipped as `best1600_watch_bth.bin` (~1.3 MB).
- **2D GPU — Vivante / VeriSilicon VGLite.** Vector graphics acceleration for
  LVGL (`lv_draw_vglite_*`, `vg_lite_*`).
- **Integrated PMU & audio codec.** On-die (`pmu_best1600.c`,
  `codec_best1600.c`) — no external PMIC or codec IC.

**Why "no Wi-Fi":** the `Starry.Wifi*` strings and the SDK's `toggleWifi` are the
*phone-side* protocol (toggling the phone's radio / Wi-Fi-Direct), not a radio in
the glasses. The FCC filing certifies **Bluetooth BR+EDR+BLE only** —
2400–2483.5 MHz, no 802.11 anywhere in 62 pages. The Air is Bluetooth-only.

---

## 2. Bill of materials

Every row is backed by a driver source path or a log string baked into the
binary. Confidence reflects how directly the part is named.

### Compute & graphics

| Part | Role | Evidence | Confidence |
| --- | --- | --- | --- |
| **Bestechnic BES1600** | Main SoC — M55 + HiFi4 DSP, integrated PMU / codec / BT | `CHIP=best1600`, `hal/best1600/*` | Confirmed |
| **Cadence HiFi4** | Audio/speech DSP core (on-die) | `HIFI4_ITCM`, `dsp_loader.c` | Confirmed |
| **Vivante VGLite** | 2D vector GPU for LVGL (on-die) | `vg_lite_*`, `lv_draw_vglite` | Confirmed |

### Display

| Part | Role | Evidence | Confidence |
| --- | --- | --- | --- |
| **JBD013 / JBD4010** | Jade Bird green microLED microdisplay (L + R), SPI-driven | `lcd/jbd013_api.c`, `jbd4010_work` | Confirmed |

### Audio

| Part | Role | Evidence | Confidence |
| --- | --- | --- | --- |
| **Awinic AW883xx** | Smart Class-D speaker amp with calibration (stereo, L + R) | `smartpa/aw883xx*.c`, `read_chipid` | Confirmed |
| **MEMS mics (PDM)** | Digital microphones + on-DSP VAD | `audio_pdm_loopback`, `vad_*` | Present · unnamed |

### Sensors

| Part | Role | Evidence | Confidence |
| --- | --- | --- | --- |
| **Sensortek STK5115 / 51155 / 51158** | Capacitive temple touchpad + gesture library (several SKUs) | `stk5115_tp/`, `stk_gesture_lib` | Confirmed |
| **Sensortek STK501xx** | SAR proximity / wear detection | `sensor/sar/stk501xx.c` | Confirmed |
| **6-axis IMU (accel + gyro)** | Motion sensing via `xjxr` sensor hub | `accel_gyro.cpp`, `imu cal crc` | Present · unnamed |

### Power

| Part | Role | Evidence | Confidence |
| --- | --- | --- | --- |
| **CellWise CW221x** | Battery fuel gauge (coulomb counter) | `fuelgauge/cw221X-fuel-gauge.c` | Confirmed |
| **Southchip SC7288** | Battery charger IC | `charger/sc7288_charger.c` | Confirmed |

### Storage

| Part | Role | Evidence | Confidence |
| --- | --- | --- | --- |
| **GigaDevice GD25 / XTX XT25Q08B** | External SPI NOR flash (8 Mbit class) | `hal_norflash.c`, `_bp_init_xt25q08b` | Confirmed |

---

## 3. Bus map

The BES1600 sits at the center; sensors and amps hang off I²C, the microdisplays
off SPI, the speakers off I²S, and the flash off its own SPI bus.

```
   STK touchpad ──┐                              ┌── JBD µLED L  (SPI)
   STK501xx SAR ──┤                              ├── JBD µLED R  (SPI)
      6-axis IMU ──┼──── I²C ──┐        ┌─ SPI ──┤
  CW221x+SC7288 ──┘           │        │        └── SPI NOR flash (GD25/XT25)
                          ┌───┴────────┴───┐
                          │    BES1600     │
                          │ M55 · HiFi4 ·  │──── I²S ──── AW883xx ×2 (speakers)
                          │ GPU · PMU ·    │
                          │ codec · BT     │──── PDM ──── MEMS mics (+ VAD)
                          └───────┬────────┘
                                  └──────────── BR/EDR + BLE antenna
```

Bus assignment is inferred from each driver's HAL calls (touch / SAR / gauge use
`hal_i2c`, panels use `hal_spi_open`, speakers use `hal_i2s`); exact pin mapping
is not asserted.

---

## 4. Firmware internals

Each OTA zip (~4.5 MB) unpacks to two **unencrypted, raw BES images**, extracted
to `Reverse/firmware/x_1.0.12.83` and `x_1.0.7.83`. Build `1.0.12.83` is dated
Dec 31 2024. The archives are small — likely delta/incremental OTA, not full
flash.

- **MyvuOS is LVGL-based.** The UI lives under `thirdparty/star_air_lvgl`,
  rendered through the VGLite GPU. Assets (fonts, GIFs, icons, prompts, audio)
  sit in a littlefs region and were carved into `extracted_assets/`.
- **Engineering surface is wide open.** An on-device CLI (`app_eshell`, over UART)
  and a full factory-test subsystem —
  `fac_cmd_{audio,battery,bt,lcd,mmi,sensor,sys}.c` plus an LVGL factory UI — are
  present in the shipping image.
- **Dual-bank OTA.** `is_ota_boot` with boot-info flash slots 0/1. A TrustZone
  SecureFault handler exists, but no obvious image-signature enforcement shows up
  in strings.

On-device apps (launcher intents) recovered from strings:

| Intent | Purpose |
| --- | --- |
| `com.upuphone.ar.tici` | Teleprompter |
| `com.upuphone.ar.navi.glass` | Navigation |
| `com.upuphone.ar.music.glass` | Music |
| `com.upuphone.ar.transcribe.glasses` | Live transcription |
| `com.upuphone.ai.assistant` | Voice assistant |
| `com.upuphone.ai.ttsengine` | Text-to-speech |
| `com.upuphone.ar.setting.glasses` | Settings |
| `com.upuphone.air.ring` | Companion ring |

---

## 5. Wire protocol — talking to the glasses over BLE

The link was reverse-engineered from packet captures and ported into an
unofficial iOS/Swift SDK. Two findings mattered most:

- **They advertise no name and no service UUIDs — only manufacturer data.**
  Company IDs `0x0BD1`/`0x0BD2`, with the ASCII marker `MYVU 0F35` hidden in the
  scan response. A filtered `scanForPeripherals(withServices:)` can *never* find
  them; you must match on manufacturer data.
- **The app layer is plaintext.** ECDH crypto wraps only the pairing bond; once
  bonded, the JSON/protobuf relay frames (channels `0x2020`/`0x2021`/`0x2022`)
  are directly readable in a capture.

**The account red herring.** The init burst carries `system_glass_active` /
`req_active_state` and the glasses reply `false`. This was misread for days as an
activation lock — a whole China-account theory. It's wrong: those messages are
**analytics only**. There is no DRM, license, or activation system. The init
burst even replays a stranger's hardcoded account ID (`1304198482`) from the
original capture, harmlessly, on every connect.

---

## 6. The iOS wall — why half the features won't work on iPhone

"Please connect to the mobile first" is not activation. It means the glasses have
no classic-Bluetooth audio link. The launcher refuses to open its own apps until
a phone holds an **HFP + A2DP** connection — and iOS cannot provide one for this
non-MFi model.

**Works over BLE alone:**

- Notification cards on the lens
- Brightness, volume, zen mode, screen timeout
- Display language (en/US ↔ zh/CN)
- Trackpad, clock sync, weather push
- Device queries (battery, device info)

**Blocked on iOS:**

- Teleprompter (`tici`)
- Turn-by-turn navigation HUD
- Music playback control
- Anything that launches a glasses app
- Voice mic without a supplied Opus decoder

**Root cause.** The real app pages the glasses by MAC as BR/EDR master (HFP +
A2DP + an RFCOMM relay on a freshly-synced UUID). iOS gives apps **no API to open
classic Bluetooth to an arbitrary device by MAC** — the only path is
ExternalAccessory, which is MFi-only, and the XGA010C is not MFi. The glasses
also never answer a classic inquiry, so they never appear in iOS Settings for
manual audio pairing. Full functionality needs **Android or Windows**, which can
be the classic-BT master — no account required there either.

---

## 7. Getting the firmware — the OTA that "didn't exist"

For a long stretch the firmware looked unobtainable: the OTA server returned
`existsUpdate:false` for every request, USB-C turned out to be charge-only (no
data lines — no ADB, no MediaTek BROM enumeration), and the companion Android app
is Ijiami-DRM-packed with certificate-pinned traffic. Four locked boxes.

The breakthrough was realizing `checkV2` gates on the client's **version**, via
each rollout's `supportFrom`/`supportTo` window. The running `1.0.12.88` is
*above* the newest published ceiling, so it always fell outside every window —
which looked like "no rollout exists." Claiming a **lower** version drops the
request inside an open window and returns a signed download URL.

**Method (verified working):**

1. **Sign the request.** `sign` = HMAC-SHA256 over alphabetically-sorted
   `k=v&k=v` params, key = the literal ASCII string
   `wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI=` (used raw, not base64-decoded).
2. **Derive the device ID.** `deviceId` = SHA256hex(`RhdNS` + backtick + `Z?` +
   serialNo). For this unit → `3207e755…01aa461f`.
3. **Spoof a low version.** POST `version=1.0.10.0` (or `1.0.1.0`) into `checkV2`
   at `xr-nbs.myvu.cn/ar-ota/client/v1/arupgrade/checkV2` (form-urlencoded) so it
   lands inside an open rollout window.
4. **Pull the signed URL.** The response carries a signed Aliyun OSS object URL
   (`Expires` = year 2066 — effectively permanent). Bucket listing is denied, but
   object GET works.

Params: `deviceType=Star Air`, `deviceModel=XGA010C`, `buildType=user`,
`versionType=release`, `deviceIdEncrypted=true`, `appVersion=2.40.51`,
`lang=zh_CN`, `version=<claimed low version>`.

**Packages obtained (CN production):**

| File | Size | md5 | Window | Elicit with |
| --- | --- | --- | --- | --- |
| `ota_star-air_1.0.12.83.20241231_Air_FR_dvt_user.zip` | 4,541,685 B | `fb7de159644754786df2b1049d9088ca` | 1.0.7.83 → 1.0.12.23 | `version=1.0.10.0` |
| `ota_star-air_1.0.7.83.20240612_Air_FR_dvt_user.zip` | 4,292,940 B | `6e81dc3ac194f802bdce38e7299d7cdb` | 1.0.0.42 → 1.0.5.3 | `version=1.0.1.0` |

Only the CN production endpoint serves this unit (INTL returns `false` for all —
this device is provisioned CN). The exact running `1.0.12.88` is newer than any
public rollout, so close builds are the best available. Both are `updateType:0`,
`userScope:all`.

---

## 8. Closed routes — dead ends, for the record

- **USB — charge-only port.** Nothing enumerates on a Mac in any mode; MMI test
  classifies the port as 充电/Charging. No ADB, no data lines.
- **BROM — no MediaTek entry.** Three button-hold + replug attempts with
  `mtkclient` watching VID `0x0E8D` — empty USB bus. Non-invasive route dead.
- **App — Ijiami-DRM packed.** 19 MB `ijiami.dat` + AOT Flutter + cert-pinned
  binding traffic. The HTTP client isn't statically readable.
- **Root — no dev mode.** `buildType: user`; Settings → About shows only Factory
  reset. Not rootable in the field.

---

## Open items

- **IMU part still unidentified.** A 6-axis accel+gyro is present but abstracted
  behind the `xjxr` sensor hub; the vendor/part is not exposed in strings.
  Could be narrowed via its I²C address / whoami register value.

---

## Sources

- OTA images `platform_tester.bin` + `best1600_watch_bth.bin` (v1.0.7.83 /
  1.0.11.53 / 1.0.12.83, in agreement), extracted under `Reverse/firmware/`.
- BLE packet captures (`Captures/`).
- FCC filing, ID `2BHGZ-XGA010C`.
- See also `INVESTIGATION.md`, `PROTOCOL.md`, and `README.md`.
