# Meizu MYVU Star Air (XGA010C) — a complete reverse-engineering write-up

This is a standalone public account of everything reverse-engineered on one pair of Meizu MYVU Star Air glasses: silicon, temple PCB, dual microLED HUD, Bestechnic firmware, companion-cloud OTA, the StarryNet BLE protocol, factory/MMI, and an unofficial iOS SDK that actually drives the lens apps. It is written to be read, not as a dump of lab notes. Deep dives, Ghidra reconstructions, and packed-string walks live in the files listed under Sources; this document is the toe-to-toe story those notes were gathered to support.

The unit under study advertises as **MYVU 0F35**, model **XGA010C**, serial `1001160244J0008Q`. It is running Flyme XR **1.0.12.88**. The closest published OTA image is **1.0.12.83**. Those two builds are the same generation of handlers and fonts; they are **not a byte-identical** dump of the live glasses. Treat every virtual address in this write-up as belonging to 1.0.12.83 unless a sentence names the installed ROM.

Unofficial and unaffiliated. MYVU and Meizu are trademarks of their owners. Protocol and hardware details were recovered for interoperability and research. Behaviour can change with any firmware update. Individual `fac_cmd` Thumb handlers remain **unrecovered**; this document does not invent bus addresses, GPIO pinouts, I2C 7-bit addresses, or protocol bytes beyond what captures and images already attest.

---

## Thanks

Three people outside this tree made the work possible, and they deserve to be named with the help they actually gave.

**ogDTC** produced the physical **Breakdown** of the temple PCB and the reference pictures that live in `board_picture/`. Those JPEGs — SoC top-mark, Type-C power cluster, audio/touch island, annotated D+/D− overlay, annotated UART-candidate overlay — are how a firmware map became a board map. Without that Breakdown, USB routing and the UART hunt would still be a cartoon of HAL calls.

**u/Conscious_Phrase_138** aka **ToasterBus** provided old firmware to double-check the live reverse against earlier images: **1.0.7** / **1.0.11.53** vs **1.0.12.83**. The in-tree mid-generation pack **1.0.11.53**, together with the CN `checkV2` packs **1.0.7.83** and **1.0.12.83**, is how font glyph counts, ASCII `gid_start`, and `handleSystemMsg` handler evolution were shown to be real firmware history rather than a one-zip artefact.

**u/Old-Corner-3833** aka **Panny777** published the reverse-engineered Android SDK **Meizu-Myvu-SDK** and the sibling client **Meizu-Myvu-Client** on GitHub. The iOS port in this repository is that wire-format lineage — BLE packet types, ECDH bond, LinkProtocol, RunAsOne, AuthBean, heartbeat, RFCOMM magic, HFP-gate diagnosis, JSON action shapes — not a second independent recovery of the same protocol. The Swift products `MyvuCore`, `MyvuNav`, `MyvuAI`, and `MyvuWeather` map 1:1 onto those Android modules.

---

## Device identity

Confirmed over BLE and on the glasses’ own About screen:

| Field | Value |
| --- | --- |
| Product | Meizu MYVU Star Air |
| Model / subModel | Star Air / **XGA010C** |
| Advertised BLE name | **MYVU 0F35** |
| Bluetooth address | `2C:6F:4E:01:0F:35` |
| Serial | `1001160244J0008Q` |
| Running firmware | Flyme XR `1.0.12.88.20250217_Air_FR` |
| Build type | `user` (production; Settings → About shows Factory reset, not a root toggle) |
| Encrypted `deviceId` | `3207e755e085c6af233233bc504a78a9b0d1e4403a2453cc06fb81cd01aa461f` = SHA-256 hex of `"RhdNS"` + backtick + `"Z?"` + serial |
| FCC ID | **`2BHGZ-XGA010C`** |

The glasses are Bluetooth-only. FCC ID `2BHGZ-XGA010C` certifies Bluetooth BR+EDR+BLE at 2400–2483.5 MHz. There is no 802.11 MAC on the glasses. Companion APIs named `Starry.Wifi*` / `toggleWifi` toggle the *phone’s* radio, not a glasses Wi-Fi stack. Packed BLE actions have no `toggle_wifi` / `set_wifi`.

The CN production OTA table’s newest pack is **1.0.12.83** (`Flyme XR 1.0.12.83`, zip dated `20241231_Air_FR_dvt_user`). That pack’s eligibility window is `supportFrom` **1.0.7.83** through `supportTo` **1.0.12.23**. Installed **1.0.12.88** sits above that ceiling, so a correctly signed `checkV2` that reports the real installed version always returns `existsUpdate:false` / `packLink:null`. **1.0.12.88 was never published** on any tried channel. This investigation did not download it. Dumped 1.0.12.83 is the last CN generation before the installed ROM — a working hypothesis for handlers and fonts, **not** a flash of the live unit.

Each CN OTA zip is about 4.3–4.5 MB. Inside, after a 16-byte BES header, sit two unencrypted Thumb-2 images:

| Image | Load | Role | 1.0.12.83 size |
| --- | --- | --- | --- |
| `platform_tester.bin` | FLASH XIP `0x2C000000` (`.rodata` alias `0x3C000000`) | Cortex-M55 HUD / LVGL / drivers / StarryNet | 6,771,708 B |
| `best1600_watch_bth.bin` | `0x14000000` | BTH **M33** Bluetooth / power-key / factory companion | 1,341,116 B |

Factory NV prints `__factory_start=0x28FFF000`. A sensor-hub banner inside the M55 image advertises a third subsys: `CHIP_SUBSYS=sensor_hub`, `FLASH_BASE=0x34000000`, `FLASH_SIZE=0x100000`, `KERNEL=RTX5`. That is a BEST1600 subsys image loaded by the M55, not a fourth branded SoC.

---

## Hardware

### SoC: firmware CHIP versus package top-mark

The firmware tree is unambiguously Bestechnic **BES1600** (`CHIP=best1600`, `platform/hal/best1600/`, `platform/drivers/ana/best1600/`). FCC withheld the block diagram as confidential; the HAL paths are what pinned the part.

The package on the temple PCB is laser-marked **`BES2700BP-W`**, lot `F4125013002Z6611` (`board_picture/t9c895t926lh1.jpeg`, `board_picture/ANNOTATED_uart_candidates.png`). Ghidra notes also title the GPU path “BES2700” and call the BTH core “Cortex-M33 on BES2700 / Best1600”. Report both names: **firmware CHIP = best1600 / BES1600**; **top-mark = BES2700BP-W**. Those two labels name one package, not a second SoC on the board.

On-die blocks recovered from the images:

| Block | What it is | Evidence |
| --- | --- | --- |
| Application | ARM **Cortex-M55** | `platform_tester.bin` XIP `0x2C000000`; MyvuOS / LVGL (`thirdparty/star_air_lvgl`); littlefs |
| Bluetooth / power MCU | ARM Cortex-M33 (BTH image) | `best1600_watch_bth.bin` @ `0x14000000`; INTERSYS mailbox (`send_bth_to_m55_msg`, `BTH_TO_M55_FACTORY_TEST_MODE`) |
| Audio DSP | Cadence Tensilica **HiFi4** | `HIFI4_ITCM`, `dsp_loader.c`, `rpc_m55_dsp.c` |
| 2D GPU | Vivante / VeriSilicon **VGLite** | `vg_lite_*`, `lv_draw_vglite_*`, `lv_draw_bes_img_decoded` |
| PMU | On-die BES PMU | `pmu_best1600.c`, `pmu_charger_irq_handler` — not an external PMIC |
| Audio codec | On-die | `codec_best1600.c` — no external codec IC |
| Bluetooth | Dual-mode BR/EDR + BLE, BES IBRT | A2DP / AVRCP / HFP / ANCS on the BTH stack |

VGLite silicon ID recovered at `vg_lite_init` `FUN_2c4ae2f8` (`0x2C4AE2F8`): CHIPID `0x265`, REV `0x1001`, CID `0x40C`. Tessellation is `vg_lite_init(640, 480)` from `gpu_port` `0x2C4B4938`.

Sensor Hub IPC channel names: `xjxr_m552sns` (M55→hub) and `xjxr_sns2m55` (hub→M55). Mapped M55 glue: `xjxr_mcu_sensor_msg_dispatch` `0x2C52680C`, bridge locked send `0x2C526A40`. Numeric `msg_id` enum table was not recovered.

Honesty that applies to every later VA: PIC plus interned TRACE means absolute string xrefs are often empty. Do not invent bus addresses or handler Thumb entries without binary evidence. That method note is the spine of `FULL_FIRMWARE_MAP.md`. Prior `fac_cmd` VAs `0x2C5AA114` / `0x2C5AAB48` / `0x2C606A28` are **rejected LVGL false positives**, not factory handlers.

### Bill of materials

Every firmware-backed row is a driver path or a log string in `platform_tester.bin`. Board top-marks are photographic (ogDTC) plus guesses recorded in `usb_enable/board_routing.json`. Confidence: **Confirmed** = named in firmware; **Photo** = readable marking; **Guess** = top-mark → public P/N in the JSON, not a datasheet match on this unit; **Present · unnamed** = function proven, vendor/P/N not in strings.

**Compute and graphics.** Bestechnic BES1600 in a BES2700BP-W package; on-die HiFi4 and VGLite. Confirmed in firmware, photographed on the temple.

**Display.** Jade Bird **JBD013** / **JBD4010** dual µLED, left and right, SPI, **640×480**. Source paths `lcd/jbd013_api.c`, thread name `jbd4010_display`. Not MIPI DCS. Command `0x62` is the SPI set-window (not CASET/RASET). An earlier reading of “SC7288 lcd on” as a panel IC is wrong: that string is charger LCD-on derate.

**Audio.** Awinic **AW883**xx Smart Class-D PA, stereo, I2C + I2S, PID `0x2049`. `aw883xx_init` `0x2C4A8FCC` retries `reg0` until id `0x2049`; dual `g_aw883xx[0/1]`. Board mark `TYND ACK8` is a photo guess for the pair. MEMS mics are PDM (`audio_pdm_loopback`, `vad_*`, `hal_iomux_set_sys_dig_mic`); gold cans marked `4250 TWMF` on photos are present and unnamed in firmware. The AW883 I2C 7-bit address is logged (`smartpa init, i2c addr=0x%x`) but the **board constant was not recovered as a lone immediate** — nearby `0x34` in a profile blob is the low byte of a `0x3C……` pointer, not claimed as the bus address. Volume UI 0..16 maps to `vol_value` max `0x2D0` into **reg 5**. Profiles named Mmi / Music / Receiver sit at/near `0x2C4651A4`. Sample rates accepted: 8 kHz / 16 kHz / 44.1 kHz / 48 kHz.

**Sensors.** Sensortek **STK5115** / 51155 / 51158 capacitive temple touch plus `stk_gesture_lib`. `stk_probe_pid` `0x2C49D6AC` reads register 0, requires PID `0xA0`. Board mark `515 PS43` is a photo guess. Sensortek **STK501**xx is SAR proximity / wear (`sensor/sar/stk501xx.c`; wear FSM `stk_wear_thresh_sm` `0x2C4C1044`; BLE `set_wear_detection_mode`). A 6-axis IMU (accel+gyro, plus a software AGM layer) talks through the `xjxr` hub (`accel_gyro.cpp`, `accel_gyro_s.cpp`, `imu cal crc error`). There is **no** `BMI` / `LSM6` / `ICM` string. Do not guess a die from photos.

Touch I2C helpers `stk_i2c_write8` `0x2C49B2C0` / `stk_i2c_read8` `0x2C49C6A0` share `hal_i2c_*` `0x2C4BD438` / `0x2C4BD450` with the SmartPA. Gestures named in UI strings: Click, Double Click, Long Press 800 ms, Slide Up/Down. LVGL bridge `xjxr_touchpad*` / `lv_indev_xjxr` is TRACE-opaque; no Thumb entries are claimed for it.

`POWER_BATTERY.md` also claims FG probe id `0xA0` at `FUN_2c49D6AC` — that is the **same VA** the touch leaf maps as `stk_probe_pid`. Treat STK PID `0xA0` @ `0x2C49D6AC` as the touch reconstruction; treat CW221 identity from `cw221X-fuel-gauge.c` / `[SFG]` / `not cw221X` strings and FG capacity getter `0x2C49D134`. Do not use one function as exclusive proof of both dies.

**Power.** CellWise **CW221**x fuel gauge (coulomb counter), I2C (`fuelgauge/cw221X-fuel-gauge.c`). SOC SRAM **`0x3C408A6E`** via getter `0x2C48A2C4`. Board mark `2215 BAAC LY36` is a photo guess for CW2215. Southchip **SC7288** single-cell linear charger, VBUS / power-path, I2C (`charger/sc7288_charger.c`); package `SOUTHCHIP SC7288` is readable on `3xy77nh926lh1.jpeg`. On-die BES PMU handles LDO/DCDC, charger IRQ, and the power key. Charging **blocks sleep**. Deep sleep requires not wearing; shallow sleep requires wearing. HUD idle chrome is `customTimeAndBatteryWidget` (battery `lv_img` at `this+0x50`, set_size 26×24). The battery-circle veneer work in `BATT_CIRCLE_POSTMORTEM.md` bootlooped and is not shipping UI.

**Storage.** GigaDevice GD25 / XTX **XT25**Q08B external SPI NOR, 8 Mbit class (`hal_norflash.c`, `_bp_init_xt25q08b`). OTA zips are code images, not a dump of the whole NOR. LittleFS media (full CJK font, AAC) lives on-device, not in the zip.

**USB-neighborhood ICs (photo / JSON only — not firmware-named).** From `board_routing.json`, these are guesses: `3240 VC19` (Microchip USB3740B-class mux; JSON notes the top-mark is **not** in the Microchip datasheet), `8105 ZE01` / `8105 2E01` (D+/D− ESD/TVS or tiny analog switch), `HVTW AAB1` (unidentified analog pair inland of SC7288), `5641 07EW` (WillSemi ESD5641D07-class VBUS TVS). USB-C shell marked `2308017021`. Silkscreen `BB:V2.1` / `ZB002A`. Flex marked **421P**. JSON: D+/D− stay on this temple PCB; they do not need the flex to reach the SoC.

Exact I2C 7-bit addresses for STK, AW883, CW221, and SC7288 are **not published here**.

### Bus map

Inferred from each driver’s HAL calls. Exact pin mapping is not asserted.

```
STK5115 temple TP ──┐                         ┌── JBD013 µLED L   (SPI, CS const 0x21)
STK501xx SAR      ──┤                         ├── JBD013 µLED R   (SPI, CS const 0x4F)
6-axis IMU (hub)  ──┼──── I²C ──┐    ┌─ SPI ──┤
CW221x FG         ──┤           │    │        └── SPI NOR GD25/XT25
SC7288 charger    ──┘           │    │
AW883xx SmartPA   ── I²C ───────┤    │
                            ┌───┴────┴───┐
                            │  BES1600   │
                            │ M55 · M33  │──── I²S ──── AW883xx ×2 (speakers)
                            │ HiFi4 GPU  │
                            │ PMU codec  │──── PDM ──── MEMS mics (+ VAD)
                            │ BT         │
                            └─────┬──────┘
                                  └──────── BR/EDR + BLE antenna
```

Firmware CS select constants for the two JBD panels are `0x21` (left) and `0x4F` (right) in `jbd013_reconstructed.c`. Those are driver constants, **not** measured GPIO pin numbers. IMU traffic is not a named I2C client on M55: M55 talks `xjxr_m552sns` IPC to the sensor hub. Named IOMUX setters in the string table are `hal_iomux_set_sys_dig_mic` and `hal_iomux_set_sens_i2c3` only. There is **no** `hal_iomux_set_uart0/1/2`. SPI NOR is a separate SPI from the JBD panels.

### Physical board (`board_picture/`) — ogDTC

Credit **ogDTC** for the teardown breakdown and these reference pictures. Filenames are Reddit-style hashes plus two annotated overlays produced in-repo.

| File | What it shows |
| --- | --- |
| `ANNOTATED_dplus_dminus.png` | USB-C `2308017021`. D+/D− are the **middle pair of the tongue contact row**. Twelve gold tongue contacts boxed; pin1/pin12 labeled GND on the ends. Filter/ESD SMD row sits immediately inland of the shell. No extra pin numbers invented beyond that overlay. |
| `ANNOTATED_uart_candidates.png` / `.jpg` | SoC `BES2700BP-W`. Overlay **states UART is not confirmable from the photo**. Red box: four small pads, “CANDIDATE test pads sweep each for boot burst”. Green: screw-ring GND ref. Footer: UART is a SoC signal, so its test point should be on this board. Crystal `YL240` left of SoC; `8105` pair to the right. |
| `t9c895t926lh1.jpeg` | Same SoC, unannotated. U.FL-class RF jack and spring fingers toward the temple edge. |
| `3xy77nh926lh1.jpeg` | Type-C cluster: SOUTHCHIP SC7288, `3240 VC19`, `8105 ZE01` pair, VBUS TVS `5641 07EW`. |
| `uds5cxz926lh1.jpeg` / `4w1ekzm926lh1.jpeg` | Same power neighborhood: SC7288, `3240`, `HVTW AAB1` twins, `2215 BAAC` FG. |
| `kcumfab926lh1.jpeg` / `af5dhu5a26lh1.jpeg` / `9jahw5z826lh1.jpeg` | Audio/touch island: dual `TYND ACK8` SmartPA, `515 PS43` touch, gold `4250 TWMF` MEMS can, B2B for flex. |
| `5136g16926lh1.jpeg` | USB-C + silkscreen `BB:V2.1` / `ZB002A`, B2B 421P, extra gold B2B near the connector. |

The D+/D− overlay’s claim is geometric (center pair of the 12-pin tongue), not a USB-IF pin-number table. Combined with `operator_asserts_dplus_dminus_connected: true` in `board_routing.json`, this **updates** an earlier “no data lines” wording: the contacts exist and are believed wired through a mux. The host still sees **charge-only** because the **user image has no gadget**. JSON routing summary: Type-C center-tongue D+/D− → ~12-part filter/ESD row → `8105` pair → `3240` mux beside SC7288 → SoC-side `8105` pair beside BES2700BP-W. Mux `OE_N`/`S` can still Hi-Z or park the pair on a charger/BC1.2 tap. That is a hardware maybe, not a firmware gadget.

### USB-C is charge-only on the user image; `en_usb` is a stub

USB-C is **charge-only** on a Mac in every tried mode. MMI classifies the port as 充电/Charging. No ADB. A MediaTek **BROM** watch (VID `0x0E8D`) was empty — this is not an MTK part. Companion HID (`VuGlassesHidManager`) is for Vu/View VID `0x2A45` PID `0x2050`, not XGA010C. StarryNet USB accessory path is ICCOA CarLink AOA, not glasses.

M55 and BTH string surveys (`usb_enable/stack.json`):

- **Present:** `en_usb` file `0x1605E8`, help `enable usb` `0x1605F0` (fac_cmd packed name/help); `[CHG] vbus usb_enable:%d disable_reason:0x%x` (`sc7288_charger.c`); TRACE tag `DRVUSB`.
- **Absent** as ASCII and UTF-16: `hal_usb`, `analog_usb`, `usbphy`, `usb_phy`, `CDC_ACM`, `dwc2`, `UsbDevice`, `gadget`, `TinyUSB`, `usb_open`, `hal_cmu_usb`, `USB_DP`, `USB_DN`, `CHIP_HAS_USB`, `usb_serial`.
- 11 `tusb` hits are `launcher_statusbar_*`, **not** TinyUSB.
- No USB device descriptor with VID `0xBE57` / `0x2b0e` / `0x0a12`.
- Remaining `usb` strings are charger VBUS / `power_supply` USB temperature, not a protocol stack.

Wired Type-C D+/D− **cannot enumerate from these 1.0.12.83 images**. Residue is SC7288 VBUS telemetry, TRACE `DRVUSB`, and fac_cmd `en_usb`. A factory name cannot bring up a USB protocol stack that was never linked. `en_usb` handler status is **unrecovered**; `handler_va` is null. Classification: `charger_vbus`. Sibling `enable_path.json`: `user_gadget_stack: false`.

Public BES2700BP docs describe UART-or-USB downloading on package balls USB_DP / USB_DN (datasheet names J17/H17; **not** probed on this PCB). Catch a ROM window at RESET/PWRON **before** a valid user image jumps to the app. VID/PID unknown. After that window, 1.0.12.83 **never enumerates**. ENGINEER_MODE key-hold is MMI in the running app, not ROM USB.

### UART / eshell needs test points, not Type-C

Prompt: **`eshell >`** @ VA `0x2C4274E2`. Platform TU: `eshell_platform.c`; log `eshell_paltform_init open=%d` (typo in source). Core: `hal_uart.c`, `Invalid UART ID: %d`, `debug_i2c` (rebind the same shell over I2C), `utest_uart`. Which `HAL_UART_ID` and which pads `hal_uart_open` uses are **not** recoverable from strings or 32-bit pointers. Finding the pad still needs a board-photo sweep (ogDTC annotated candidates, **unconfirmed**) or recursive descent of `eshell_platform.c`. Type-C being charge-only does not expose eshell.

MMI / factory UI can come from a power-on 3 s or 5 s key hold (BTH `HAL_KEY_EVENT_LONGPRESS_3000_MS` / `_5000_MS`; mailbox `BTH_TO_M55_FACTORY_TEST_MODE`). That is not UART. Full `md` / `mw` / `xmodem` is a wire-level tier. Public silicon docs also mention UART download on GPIO_P0_0 / GPIO_P0_1 or a one-wire UART — that is datasheet, not a pad found on this board.

---

## Display

### JBD013 / JBD4010, SPI, 640×480

Driver cluster `0x2C497000`–`0x2C4AA000` in `platform_tester.bin`, located by matching ESD immediates `0x05`, `0x35`, `0x47`, `0x63`, `0xC1` to `jbd_esd_check` @ `0x2C498FE0`. Paths: `lcd/jbd013_api.c`, `lcd/panel_driver.c`, `lcd/hal_driver.c`. Dual panels, device 0 left, device 1 right. SPI micro-LED, not MIPI DCS.

```
LVGL flush / display_mgr
        │
        ▼
jbd_display_image_post (0x2C4993D0)  ──► RTOS queue
        │
        ▼
jbd4010_display_thread (0x2C499270)  thread name "jbd4010_display"
        ├── jbd_display_image (0x2C497BB0)   SPI window + pixel blast
        ├── jbd_panel_init (0x2C49807C)
        ├── jbd_esd_check (0x2C498FE0)
        └── set_jbd_brightness (0x2C499B04)
```

RTOS names at file `0x424B0`: `jbd_thread`, `JBD_TIMER`, `jbd4010_display`, `jbd_mailbox`. SPI helpers: `jbd_spi_write_reg` `0x2C4975BC` (CS 0x21/0x4F toggle + byte), `jbd_spi_write_buf` `0x2C497644`, `jbd_spi_read` `0x2C497684`, `jbd_spi_write_byte` `0x2C497518` → `hal_spi` `FUN_2c673fb8`. Window command **`0x62`**, packed x/y, end marker `0xFF`. Full-screen origin (0,0) takes `gpu_fill(640, 480)`; else `gpu_blit`. Framebuffer size in reconstruction: `0x25800` (153,600 bytes). Dual-panel ESD: `jbd_panel_esd_check_both` `0x2C49921C`.

ESD expect: reg `0x05` byte0 `0x10`; `0x63` nonzero and not `0xFFFFFF`; `0x35` equal `0x42000424`; `0x47` nonzero; `0xC1` equal `0x82040A0C`. Brightness `set_jbd_brightness` `0x2C499B04` (BLE `set_disp_bri`): input 0–7109 (`0x1BC5`), special `0x1C03`, both panels via `jbd_set_panel_current`. SPI regs `0xA9`, `0xA3`, `0x97` for enable/disable sequencing. Factory names: `get_jbd_brightness`, `check_esd`, `panel_id`, `panel_bri_cali`.

`JBD013_DECOMP.md` also names a PWM aux `jbd_pwm_set_level` at `0x2C4A9F58`. That VA sits in the **JBD/AW883 cluster overlap**; `AUDIO_SMARTPA.md` maps the same address as `aw883xx_set_volume_reg` (PA reg 5). Prefer AW883 labels for `0x2C4A9xxx` per the integration map. Do not treat `0x2C4A9F58` as a unique JBD PWM entry.

Display thread: wait forever on queue; handle msg type `0x20`; skip if panel not ready; ~1.9 s watchdog (`0x76C`) outside factory/test; FPS throttle if more than 80 frames queued. TRACE-interned strings (same PIC issue as VGLite). MMI patterns in the OTA (`img_cross_h/v`, checkerboard, `AA_Pattern_640_480_*`) are panel characterisation art, not a second display controller.

Idle HUD is a **2-circle** time+battery widget; launcher dock is **4** tiles (time, weather, date, Flyme) sharing factory `FUN_2c508910`. Clock digits and battery icon live in that 640×480 green field. Do not confuse dock factory hooks with the JBD SPI path.

### GPU: VGLite tessellates 640×480; IDX4 expands before the GPU

`lv_draw_bes_img_decoded` is `FUN_2c609aec` @ `0x2C609AEC`, identified by unique TRACE line 267 matching `vglite img decode error, img width=%d, height=%d, decode width=%d, height=%d`. **It never sees IDX4.** It blits **BGRA8888**, `stride = width * 4`. Indexed cf=9 is unpacked first by `lv_draw_img` `0x2C614A3C`: 64-byte BGRA palette, then high-nibble-first 4bpp, then `ctx->draw_img_decoded(..., cf=5 TRUECOLOR)`.

VGLite: `vg_lite_init` `0x2C4AE2F8`, CHIPID `0x265` / REV `0x1001` / CID `0x40C`. `gpu_port` `0x2C4B4938` calls `vg_lite_init(0x280, 0x1E0)` — tessellation **640×480**. Inside init, `tess_w = (param_1 + 0xf) & ~0xf` → 640. Buffer setup requires 64-byte pointer alignment; format `0x100` BGRA8888; field `0x1F00` linear (not 4×4 tiled). Identity blit does **not** force 64-byte stride. Gate `0x2C60A358`: skip GPU if min dim ≤ 49 (`0x31`) — **not 112**. Software fallback `lv_draw_sw_img_decoded` `0x2C6116AC`. `FUN_2c609aec` has zero `BL` sites (vtable only).

On-flash cf=9 blobs are **112 px vertical strips** (build-time packing). **112 (`0x70`) is not hardcoded and not computed** in VGLite img-decoded / blit / `vg_lite_init`. Firmware walk is plain row-major. Remainder-strip shear for `w % 112` is still unresolved in code; it is **not** a GPU decode transform. `lv_port_disp_speedup_bgra8888.c` flush copies already-composited BGRA8888; it does not decode IDX4.

A boot-logo *descriptor* at VA `0x2C3AF594` has header `0x12263C09` (cf9, 399×145) pointing at `0x3C3871C0`. That payload is the **media-player atlas** (dial + music notes), **not** a MYVU wordmark. 16×16 tile brute force does not produce a MYVU wordmark either. The reboot **MYVU** mark is not a PNG and not an IDX4 wordmark in this OTA. `app_startup_myvuapp` / `mmi_logo` are names/handlers whose bitmap lives in a separate ~0x3c3 **resource partition**, not in `platform_tester.bin`.

### Fonts, glyphs, and the MYVU logo

The launcher draws M-Y-V-U with the compiled-in LVGL **`fmt_txt` bitmap font** (green-on-black HUD). No TTF in the OTA. Three faces sit in `platform_tester.bin` (extractor `Reverse/firmware/extract_lvgl_fonts.py`):

| Face | bpp | Role strings | 1.0.12.83 dsc / bitmap (file off) | Glyphs | ASCII `gid_start` |
| --- | --- | --- | --- | --- | --- |
| small | 1 | `FONT_DUMMY_16` / `FONT_CN_16_NORMAL` | `0x31DBC4` / `0x2FD681` (~129 KiB) | 6032 | 1 |
| medium | 4 AA | `FONT_DUMMY_20` / `FONT_CN_20_NORMAL` | `0x2E2DC8` / `0x20160E` (~902 KiB) | 6032 | 1 |
| large | 1 | `FONT_DUMMY_24` / `FONT_CN_24_NORMAL` | `0x1E610C` / `0x19D105` (~292 KiB) | 6032 | 1 |

1.0.11.53 bitmaps **MD5-match** 1.0.12.83. **1.0.7.83** has **4347** glyphs and `gid_start=0` (space is glyph 0). Applying the 1.0.11/12 cmap (`gid = 1 + codepoint - 0x20`) to 1.0.7 draws **MYVU as NZWV**. Named but **not** these three blobs: `FONT_CN_32_NORMAL`, `FONT_CN_36_BOLD`, `FONT_EN_32_NORMAL`, `FONT_EN_36_BOLD`. Descriptor layout: `lv_font_fmt_txt_glyph_dsc_t` = `bitmap_index`, `adv_w` in 1/16 px, `box_w`, `box_h`, `ofs_x`, `ofs_y`. Placement matches LVGL 8.3: `gpos.y = pos.y + (line_height - base_line) - box_h - ofs_y`. OTA faces are runtime `lv_font_mgr_get_font` (`FONT_CN_16/20/24`); there are **no** flash `lv_font_t` pointers to those glyph_dsc offsets (PIC).

### LittleFS versus the OTA zip versus the resource partition

The zip is the **code image**. LittleFS payloads are **not** in the OTA:

| Kind | In OTA zip | On device |
| --- | --- | --- |
| HUD GIFs (12 GIF89a, 13×15 … 178×16 and 160×40) | yes (1.0.12 offsets start `0x3730B4`) | same |
| 3 compiled Latin/CJK-subset faces | yes | yes |
| Full CJK `B:lv_font_air_full_cn_20_bpp1.bin` | **no** (path only) | **LittleFS** |
| UI AAC `audio/*.aac` (21 names: `click.aac`, `screenshot.aac`, `*_wozai.aac`, …) | paths only | **LittleFS** |
| EN/ZH UI copy | yes | yes |
| KWS models | not in these bins | device |

A separate **resource partition** holds LVGL image pixels for ~380 descriptors in `platform_tester.bin`, all pointing at `0x3c30fd40`–`0x3c3fd540` (~950 KB). The OTA zip does **not** contain or write that region. Boot wordmark pixels live there; flashing `platform_tester.bin` alone cannot change them (the BIMA experiment learned this the hard way). That partition is distinct from LittleFS. Pulling the full CJK face or AAC files requires on-device LittleFS (UART eshell / factory), not the OTA zip. `file_sys_check` exists as a fac_cmd token; there is no USB MSC to copy the filesystem off.

Factory compiled LVGL bitmaps (not separate files): `img_cross_h/v`, `img_hh`, `img_vv`, `img_crossAll`, `img_rec_50`, `img_ghosts`, `img_xjmz` (MMI LCD patterns).

---

## Firmware

The firmware reverse is indexed in `Reverse/firmware/analysis/full_rev/FULL_FIRMWARE_MAP.md` (C1–C11). Images under discussion are 1.0.12.83 unless a ROM is named. File offset on M55 = VA − `0x2C000000`. Some literal pools store string pointers as `0x3C000000 + file_off`. SRAM / relocated data also appears as `0x3Dxxxxxx` (charging flag `0x3D62A481`, dock color `0x3D6940D0`). TRACE sink recovered on M55: `0x2C62C82C`. TRACE sink on BTH: `0x1402A6E8`. Do not treat `__func__` / path-string VAs as Thumb entries.

Hardware-driver clusters sit mostly in `0x2C49B000`–`0x2C4C2000` (touch/FG) and `0x2C4A8020`–`0x2C4B1338` (AW883), sensor bridge around `0x2C526xxx`, battery_mgr / LVGL power hooks higher. JBD013 cluster `0x2C497000`–`0x2C4AA000` **overlaps** the low AW883 range — documented tensions, not a third invented VA.

### C1 Touch — STK5115 / STK501xx, wear FSM

Chip: STK5115 / STK501xx I2C temple pad (compiled SKUs also STK51155 / STK51158 / 4pad). Probe: `stk_probe_pid` `0x2C49D6AC` reads register 0, requires PID `0xA0`. Board init `stk5115_board_init` `0x2C4C1688`: `stk_reg_table_init` `0x2C49BC4C` → `stk501xx_init_client` `0x2C49DA14` (retries, 250+100 ms) → `stk_post_init_irqs` `0x2C4C0EB4`. Wear FSM `stk_wear_thresh_sm` `0x2C4C1044` compares live sample vs high/low watermarks and drives **attr `0x1B`** through `stk_set_attr`. BLE packed names `set_wear_detection_mode` / `get_wear_detection_mode`. Gesture class `stk_alg_work` `0x2C49B970` (magnitude bands → classes 0..3). UI strings: `TWS_EventGesture:Click|Double Click|Long Press 800ms|Slide Up|Slide Down`. `FUN_2c49E3B0` is a BE32 read helper in the TP/panel neighborhood — **not** the SOC getter.

Regs evidenced as immediates only (not a datasheet): `0x00` PID `0xA0`; `0x08` IRQ nibble; `0x0B` flag; `0x10`–`0x1C` init stream; `0x1D` IRQ/enable; `0x30`–`0x32` post-init; `0xA4` 16-bit raw/CADC; `0xA6` calib; `0xAB` phase/prox. `stk_set_attr` `0x2C49C0CC` is also cited by the power leaf as a charger property switch. Same neighborhood; do not invent a second mux VA.

### C2 Audio — AW883xx chip-id `0x2049`

Cluster `0x2C4A8020`–`0x2C4B1338`, found by Capstone chip-id `0x2049`, not string xrefs. `aw883xx_init` `0x2C4A8FCC`: retry `reg_read(dev, 0, &id)` until `id == 0x2049`. `pid_2049_dev_init` `0x2C4AA018` fills PID-2049 ops; volume max at device `+0x19C` is `0x2D0`. Dual PA: volume/cali walk **dev 0 then 1**. `smartpa_set_volume` `0x2C4A9894` accepts UI `param ∈ [0, 16]`; `vol_value = (param == 0) ? 0x2D0 : (param - 1) * (-0x18) + 0x168` (level 0 → 720; level 1 → 360; step −24). Encode/decode **reg 5**. Cali `aw883xx_cali_re_f0` `0x2C4A92BA` logs `re[0]/re[1]`, `f0[0]/f0[1]` — and that VA is the same overlap the JBD decomp once labeled `jbd_mailbox_send`. Prefer AW883. Edges: `xjxr_audio_volume.cpp` / A2DP `xjxr_audio_a2dp.c` / HFP `xjxr_audio_hfp.cpp` / `audioflinger.c` remain TRACE-opaque; SmartPA is the amplified output stage.

### C3 Sensors — `xjxr_m552sns` mailbox

No IMU die ASCII. Software AGM layer only (`g_ag_init` / `g_ag_reg` / `g_m_init` / `g_m_reg` / `amg_type`). Two images: M55 HUD (`m55_sensor_mgr.cpp`, `accel_gyro.cpp`, `xjxr_mcu_sensor_communicate.cpp`) and Sensor Hub MCU (`CHIP_SUBSYS=sensor_hub`, `FLASH_BASE=0x34000000`, `KERNEL=RTX5`, `REV_INFO=422729f-dirty:sensor_hub`). IPC: **`xjxr_m552sns`** (M55 → hub), **`xjxr_sns2m55`** (hub → M55). Code: `xjxr_mcu_sensor_msg_dispatch` `0x2C52680C`; bridge locked send `0x2C526A40` (`xjxr_ms_mutex`). Bring-up (string-ordered): load hub simple image (`sensor_hub_open`) → `hal_mcu2sens_open` / `hal_mcu2sens_start_recv` → hub ping `sns_ping_mcu` until `sns_ready`/`mcu_ready` → `notify_mcu_sensorhub_ready` → `init_xr_snshub_sensor_mgr` + `accel_gyro_s` callback → M55 `init_xr_m55_sensor_mgr` + `register_accel_gyro_listner` (typo in binary) over `xjxr_sns2m55`. Factory `fac_cmd_sensor`: `enable_sensor` / `sensor_cali` / `imu cal crc error`. Wear SAR sibling `wear_detection_s.cpp` is owned by the touch leaf.

### C4 Power — CW221 + SC7288, SOC SRAM `0x3C408A6E`

External FG is cw221X; charger is sc7288; on-die PMU is `pmu_best1600.c`. SOC is **not** PMU ADC alone. HUD getter `0x2C48A2C4` = `ldrh r0, [0x3C408A6E]`. Cached SOC u16 at SRAM **`0x3C408A6E`**. Charging/plug byte `ldrb` from `0x3D62A481` via `0x2C48A2B8`. UI thunk `0x2C5D68D8`. Icon band picker `0x2C5CFE2C` (SOC thresholds 10/20/…/90 → LVGL img src). BM poll `0x2C489BD0`: clamp 0–100, `strh` into `0x3C408A6E`, notify. FG capacity `0x2C49D134` (requires FG object `+0x48 == 1`, else stub `0x14` = 20%). FG object base `0x3C43BB10`. xrbm mailbox (~`0x2C489D94`): msg `0x20` USB plug; msg `0x40` refresh SOC/voltage. Init strings: `start xrbm thread`, `get new battery level: %d`.

sc7288: `sc7288_detect_device` / `sc7288_init_device`; `[CHG] sc7288 probe successfully, Chip id:0x%x`. Vbus enable/disable, JEITA FV/FCC, LCD on/off charge derate. `[CHG] Sc7288 lcd on` is charger + backlight, not the JBD panel. LVGL power manager `FUN_2c642C66`: register vmon + battery listener, create 5 s `lv_timer`, sample powered-on/charging. States: `POWER_ON`, `POWER_OFF`, `POWER_OFF_CHARING`, `POWER_ON_CHARGING`, `POWER_REBOOT`. Policy: ignore voltage events while charging; mainboard/battery temp ≥58 °C in off-charging forces shutdown. Wear-gated sleep (`xjxr_system_sleep.cpp`): abort sleep if charging, A2DP/SCO active, screen on, or OTA in progress. **Deep sleep requires not wearing. Shallow sleep requires wearing. Charging blocks sleep.** Idle HUD widget ctor `FUN_2c5d931c` contains unique getter BL at `0x2C5D9426` → thunk `0x2C5D68D8` → getter `0x2C48A2C4`.

### C5 StarryNet — `handleSystemMsg`, 27 packed actions, no `set_demo_mode`

Stack `xjxr_starrynet` (snif, protobuf `StarryNetMessageData` BUSINESS/NOTIFY, `starry_link_encrypt.pb-c.c`). Register: `register_starry_net` `0x2C189990`. Test/eshell code: `FUN_2c0282ee` @ `0x2C0282EE`. JSON contract inside a BUSINESS payload:

```json
{"action":"<top-level model>","data":{"action":"<inner handler key>","value":<number|string|object|array>}}
```

Top-level `action` selects a MessageModel (or sibling) method. Inner `data.action` is matched against a **packed C-string table**. Weather is the exception: `{"action":"weather","data":{…ArWeatherModel…}}` has **no** nested `data.action`. Name tag **`handleSystemMsg` @ `0x2C194D54`** is a **string VA**, not a Thumb function. Packed window file `0x194BCC`–`0x194F68`. Miss path: `[Launcher]MessageModel handleSystemMsg no handler for action %s` @ `0x2C194F68`.

BES compiles almost no C-string as a 32-bit pointer. PIC plus TRACE-hash means `getReferencesTo` on action names is empty. Raw MOVW/MOVT scan: 1142 pairs, **zero** targeting `0x2C19xxxx` / `0x3C19xxxx` action strings. Linear Capstone of ~1.1M insns: no `ldr [pc]` to `handleSystemMsg`, `get_glass_screenshot`, `en_usb`, or `eshell >`. Handlers are recovered from **positional packed strings + TRACE text**, not classical xrefs. The packed blob **is** the dispatch list: a name absent from the image was never compiled.

**27 packed inner actions** (authoritative walk; 9 get + 18 set/notify/sync):

Gets: `get_standby_widget_lists`, `get_device_info`, `get_language`, `get_zen_mode`, `get_volume`, `get_wear_detection_mode`, `get_standby_position`, `get_volume_stream_type`, `get_music_tp_control_mode`.

Sets/notifies/sync: `change_dock_items`, `set_standby_position`, `set_wear_detection_mode`, `set_glass_sound_effect_mode`, `set_hear_impairment_mode`, `set_app_fast_open`, `set_music_tp_control_mode`, `set_image_stabilization_mode`, `set_image_adjustment_mode`, `set_language`, `set_font_mode`, `set_standby_widget_lists`, `set_device_name`, `set_brightness_finish`, `set_volume`, `notify_privacy_expired`, `notify_statement_change`, `sync_clone_data`.

Method-adjacent (not in the packed miss-path list): `get_glass_sound_effect_mode`, `do_recovery`, `open_app`, `set_zen_mode`, `setScreenBrightness`, `setScreenOffTime`. Device-info keys near `sendDeviceInfoMsg`: `system_mode`, `brand`, `serial_number`, `wifi_mac`, `bluetooth_addr`, `total_storage`, `available_storage`. `wifi_mac` as a field name is not a Wi-Fi stack.

Screenshot: top `screenshot` / inner `get_glass_screenshot` → ShareAbility `SENDER_SYN`→ack→`SENDER_DATA`; refuses screen off / business app / UUID/malloc/encode fail; `audio/screenshot.aac` in-image. Log: top `user_feedback` / inner `get_glass_log` → `user_feed_back.log` ASL. **`screen_record` / `get_glass_screen_record` absent. `toggle_wifi` / `set_wifi` absent.**

**Demo:** `set_demo_mode` / `get_demo_mode` **absent** ASCII and UTF-16LE in 1.0.12 M55 (and prior: 1.0.7 + BTH). Companion still sends `system`/`set_demo_mode` (About-glass 5× tap on ROM version; Android UI gate is `isAirPro()` but the BLE send is not model-gated). Air hits `handleSystemMsg no handler for action %s`. What *did* land in 1.0.12 is a **local** StandByView flag `launcher_standby_demo_mode` @ `0x2C197A50` plus UI “Demo Mode Open” — a standby clock demo, **not** the shop-demo BLE API.

ANCS (`AncsManager.cpp`, `QUERY_ANCS_SERVICE_STATE`, `SYNC_SMART_REMINDER_CONFIG`) is StarryNet-adjacent (iOS notification bridge), not in the packed `handleSystemMsg` table. Two payload shapes, mixing them is a silent no-op: **flat** (`set_volume` value as **string**, plus `streamType`) vs **nested** (`set_zen_mode` → `value:{zen_mode:bool}`). Companion `set_brightness` is a flat string 0–10; packed firmware has `set_brightness_finish` (notify) and method-adjacent `setScreenBrightness` (TRACE range 0–100). Do not collapse those three names or the two scales.

### C6 Factory / eshell — handlers unrecovered

Prompt **`eshell >`** @ `0x2C4274E2`. Factory commands from `fac_cmd/fac_cmd*.c` are registered as the **`fac_cmd`** family. Packed names/help occupy file `0x15FDBC`–`0x1606B0` (VA `0x2C15FDBC`…). Entry to MMI is **not** a BLE `handleSystemMsg` action: the BTH boot-key can raise `BTH_TO_M55_FACTORY_TEST_MODE` (M55 string `0x2C16457C`); M55 logs `enter MMI mode!`. Full `md`/`mw`/`xmodem` needs UART / `debug_i2c`. Type-C charge-only does **not** expose this REPL. Packed families include identity/BT, power/sleep (`goto_sleep`, `close_eshell`, `en_usb`), touch, display/JBD/ESD, audio/PA, charger/FG, sensors, MMI (`mmi_run`, `exit_mmi`), `sys_reset`, `file_sys_check`, `lcd_id`, `get_board_id`. Factory NV `__factory_start=0x28FFF000`.

The firmware-map honesty is the point of this leaf: exhaustive pointer / MOVW / ADR / pool scans find **zero** xrefs to mid-blob names (`en_usb`, `close_eshell`, prompt `eshell >`, `fac_cmd_trd`). Dispatch is a **positional blob walk** plus a parallel handler array **not** present as `{name, help, Thumb}`. **Individual `fac_cmd` handler VAs = unrecovered.** Rejected misbinds (do not use): `0x2C5AA114`, `0x2C5AAB48`, `0x2C5AAB80`, `0x2C606A28` — LVGL, not `fac_cmd.c`. The named command surface is expanded under Factory.

### C7 OTA — A/B MD5, `do_ota_rollback`

Official CN zip is **two** BEST1600 images only. Phone delivers over StarryNet (`RECEIVE_OTA_FINISH`), not USB/ADB. Dual-bank A/B norflash + **transfer MD5** + **post-write flash MD5** + boot-info/magic + `ota_check_and_change_boot_type`. Failure → **`do_ota_rollback`**. **No RSA/ECDSA/image-signature string** next to the apply path. **`TrustZone` ASCII absent**; **`SecureFault`** present via pretty-printer `FUN_2c48c450`. SecureFault ≠ signed-OTA proof. Signature absence is **string-negative**, not formal proof that BES ROM has none.

A/B logs: `[XR_FLASH] a_ver:%u b_ver:%u`, `magicA`/`magicB`, `first ota 2 A/B flash, read A, next write B`, `AB/BA boot`. Repeat-count / ext-repeat fields gate failed boots before rollback preference flips. MD5 fails: `ota failed to check transfer file md5`; `transfer check md5 failed`; `ota failed to check written flash md5`. Pipeline: `ota_flash_program` → `app_update_magic_number_of_user_image` → `update_ota_boot_info` / `update_boot_type` → `ota_check_and_change_boot_type` (then StarryNet inform). BTH compare: `ota write bth flash cmp failed`.

**Rollback:** symbol `do_ota_rollback` string `0x3C1658B4`; **code entry `0x2C5B9E10`** (Capstone `push.w {r4–fp,lr}`; `sub sp,#0xAC`). Logs `do ota rollback` / `failed to do ota rollback` / `do ota rollback succeed`. Rewrites boot info on previous bank; restores normal M33/M55 boot type. **Does not run** when a successfully written image later panics in LVGL (BATT_CIRCLE v5/v6). Post-boot `xjxr_ota_checker.cpp` waits on a semaphore, runs business checks, then confirms boot type or reboots / rolls back. UART eshell `mw`/`xmodem` have **no** rollback net. Resource partition `0x3C3xxxxx` UI bitmaps are **not** in the OTA zip. 1.0.12 adds silent-OTA pause/resume and splits `OtaMsgModel` out of `LauncherModel`. Launcher: `current in ota or starrynetApp, not call backHome`.

### C8 Launcher — Pages/Launcher, DockviewV2, Domain graph

LVGL tree `thirdparty/star_air_lvgl/app/Pages/`. Two hosts: **Launcher** (StandBy widgets + DockviewV2) and **Assistant** (NLU Domain graph). PageManager names: `Pages/StarryNetApp` (shown when not bonded), **`Pages/Launcher`**, `Pages/SmartLife`, `Pages/Navigation`, `Pages/Translation`, `Pages/Phone`, `Pages/AirMusic`, `Pages/Ota`, `Pages/Ring`, `Pages/Settings`, `Pages/Assistant`, `Pages/MMIPage`, `Pages/Prompt`, `Pages/Transcribe`, `Pages/StartupGuide`, `Pages/SimuTranslation`.

`LauncherProvider::startAppByPageName` TRACE `0x2C190DB4`. `backHome` `0x2C191094`. **`DockviewV2::onClick` `0x2C196C00`**. Path `DockviewV2.cpp` `0x2C196A64`. Other Dock TRACE: `init`, `onVuiEvent`, **`onRingEvent`** (scroll / sports inject), `leftMove`/`rightMove`. Pkgs: `com.upuphone.star.launcher`; `.music_player` → AirMusic; `.setting`; `.sports` (`changeAppPos add Sports app when ring connect`); `.ring.single_unbound`. StarryNet `change_dock_items` mutates dock seq. Theme: `launcher_theme_init` `0x2C5046BA`. Dock/standby 1×1 tile width **140** (`FUN_2c508910` `movs r1,#0x8c`) — **do not hook this factory** (BATT_CIRCLE: Settings tofu).

**21 `Domain*.cpp` files** (`DomainRuntime.cpp` is the registry, not one of the 21): Domain, NoDomain, General, Application, Fallback, SystemSetting, Weather, Alarm, Schedule, Helping, GPT, Wechat, Todo, **NavigationDomain**, Global, NluError, VspError, Translate, FreeChat, STKS, InnerStk. Shared handlers `onNLUResultMessage` / `onNLUResultMessageCMD`. NavigationDomain → `Pages/Navigation` + `SplashView.cpp`. Thumb Domain methods TRACE-opaque. Force-upgrade ignores most pages (`need backhome`).

### C9 BTH M33 — `0x14000000`, INTERSYS mailbox

Image `best1600_watch_bth.bin` load `0x14000000`, ARM:LE:32:v8-m Cortex-M33, 3101 Ghidra functions after ForceDis, range `0x14000010`–`0x141476BC`. Mega blob `FUN_140f12fe` @ `0x140F12FE` (~94 KB) — treat cautiously.

**INTERSYS:** `INTERSYS-RX: Invalid msg type: %d`; `Handler missing`; `INTERSYS-TX: Invalid msg type: %d`; `Failed to open intersys`; `xjxr_intersys_bth.c`. Helper name **`send_bth_to_m55_msg` `0x141316D8`**. M55 counterpart string `BTH_TO_M55_FACTORY_TEST_MODE`. Numeric INTERSYS opcode for factory test **must be taken from M55 enum then matched in BTH TX — not recovered here.**

Factory/power-on **strings** (Thumb entries **unbound**): `hal_key_boot_handler` `0x140E63B0`; `HAL_KEY_EVENT_LONGPRESS_500/3000/5000_MS`; `app_factorymode_enter` `0x14132494`; `app_poweron_key_init` `0x141379A8`; `To enter test mode!!!`; `BT_DUT_MODE`; `!!!!!ENGINEER_MODE!!!!!`. Immediates 500/3000/5000 hit **HFP timers**, not boot-key (`FUN_1404A374`). Duration-constant scanning is a dead end. Candidate event-switch `FUN_14041F98` (TRACE hash `0x5A8`).

GATT/ANCC: Apple ANCS service UUID (LE) `7905F431-B5CE-4E99-A40F-4B1E122D00D0`; Notification Source `9FBF120D-6301-42D9-8C58-25E699A21DBD`; `ancs_bth_intersys_receive_handler`. Full Apple ANCS client, not an empty stub. Also `GATT_SVC_DEVICE_INFO` / `GATT_SVC_BATTERY_SERVICE` / `GATT_SVC_HID` / `XR_GATT_SERVER_*`. PMU on this image: `pmu_best1600.c`, `pmu_charger_irq_handler`, `pmu_wdt_irq_handle`. Fine-grained FG UX is M55. `.rodata` strings `~0x140E5F00`–`0x141476BC` have **no direct code xrefs**.

### C10 Ring — HOGPRH, RingOtaManager, ConnectingView

Finger ring “Unicron”: BLE HID-over-GATT. Split stack: BTH **HOGPRH** GATT server (`xr_app_hogprh_server.c`, `xr_hogprh_server.c`, `ring_bond_res.c`, `ring_conn_res.c`); M55 scan/bond/conn (`ring_m55`), HOGP client `xr_hogprh_unicron.c`, DFU `ring_ota.c`, `RingManager`, LVGL `Pages/Ring/**`, **`RingOtaManager.cpp`**, gesture `xjxr_touchpad_unicron.c`.

BTH → M55: `%s send XR_RING_AUTO_CONN to M55.` token `XR_RING_AUTO_CONN` @ BTH `0x14135A58`. Confirmed M55 Thumb (litpool-backed): ring connect callback `ViewController_ring_connect_state_callback` `0x2C5CA080`; **`RingOtaManager_handle_ota_list` `0x2C5CC130`** (`com.upuphone.star.ring.ota`); **`ConnectingView_connect_result` `0x2C5CB758`** (`ring connect succeed`); `ConnectedViewV1_set_lv_ring_unconnect`; `RingService_sync_unicron_update_info`; `RingService_onRingBondEventListener`; `Ring_stop_scan_on_disappear`. DockviewV2 `onRingEvent` injects sports app.

OTA FSM strings: `ROPE_START`/`ROPE_ENABLE`/`RPOE_QUERY`; `ROSE_IDLE`→`ENABLE`→`QUERY`→`PACKET`→`RESET`; `[RING_OTA] ota progress[%d%%]`; CRC16/32. `xr_ring_*` / `ring_ota_*` **Thumb VAs unbound**. Power veto: `power off charging or high temp, no need connect ring`. Scan banner `ring_5648`. Name length 1…30. HOGP log token `FF10`; full ATT UUIDs beyond that **not recovered**. BTH spelling **`unicon`** vs M55 **`unicron`**. Ring firmware is a **separate** Nordic DFU path after the same OTA API download — not the BES zip.

### C11 JBD / GPU cite

The integration map cites `jbd013/` and `ghidra_decoder/` rather than re-owning them. See Display above. Manifest VA spans for the ten leaf directories are tabulated in `FULL_FIRMWARE_MAP.md`; factory_eshell’s max includes documented LVGL false-positive VAs kept as rejected evidence.

### BIMA patches — same-length only; do not remap glyphs

Same-length swap **`MYVU` → `BIMA`** in unpacked OTA bins. The boot mark is **not** those ASCII strings and **not** the compiled Latin glyphs — remapping M/Y/V/U turned HUD copy into **BIBA/ByvuiOS** and left splash unchanged. **Do not remap glyph slots.**

What changed: `platform_tester.bin` — UI copy + `displayName`. 1.0.12.83 only: theme `radius = 12` → `0`, six `LV_RADIUS_CIRCLE` (`0x7FFF`) → `0`, three `outline_width = 1` → `0` (drop grey box). Disconnect canary `…the HUD3`. Idle HUD time `"HH:MM NN"` (SOC digits, no `%` glyph) via TimeModel snprintf hook. Dock factory / Settings stay stock. `best1600_watch_bth.bin`: `MYVU ble` → `BIMA ble`. Left alone: `myvu` / `Myvu` (e.g. `handleMyvuLoginStatus`).

Pre-flash sandbox is **not** a SoC emulator (no public QEMU for BES2700BP M55+M33+HiFi4+VGLite+JBD+BLE+PMU). Allowed: same-length strings, theme immediates, veneers that only call stock helpers and write an existing buffer. Forbidden until glasses are healthy: `lv_*_create`, `add_style`, new timers, new dock circles, clock constructor hooks. What bricked v5/v6 was creating LVGL objects during early dock/clock init.

### Battery-circle postmortem — veneer bootlooped; frozen

Goal: live numeric battery percent on HUD without the phone, keep icon, **new 140 px circle** next to clock — **not** on the clock circle. Circle work is **frozen**. **Do not flash another object-creating veneer** until the unit boots.

Two stock UIs: idle HUD (2 circles: time+icon, phone-disconnect) via `customTimeAndBatteryWidget` + TimeModel; launcher main (4 circles: time, weather, date, Flyme) via dock factory `FUN_2c508910` / `FUN_2c508c10`. Settings reuses the dock factory — hooking it garbles Settings (`km` / tofu). Cave: file `0x12F2E4` / VA `0x2C12F2E4`, ~5.9 KB zeros. Same-length in-place patch only.

SOC (reconfirmed): getter `0x2C48A2C4` → SRAM **`0x3C408A6E`**; thunk `0x2C5D68D8`; icon pick `0x2C5CFE2C`. TimeModel `FUN_2c5cdde8` unique snprintf file `0x5CDE2A`. Widget ctor `FUN_2c5d931c`; unique getter BL file `0x5D9426`. `lv_obj_create` `0x2C606A10`. **Do not use `FUN_2c49E3B0`.**

Versions: v1 dock day/night (clipped). v2 hooked dock HH:MM + shared tail `0x508A98` → Settings garbled, idle unchanged. v3 TimeModel `"%02d:%02d %d%%"` → tofu (`%` parsed as format). **v4 last known-good:** hook only `0x5CDE2A`; append `" NN"`; no `%`; no new objects; photos `18:46 80` / `19:23 68` on launcher 4-circle; idle 2-circle percent **never photographed**. v5: hook `0x5D9426` to cave; `lv_obj_create` sibling 140×140; splash hang, watchdog, sometimes A/B back to v4. v6: defer create to `lv_timer_create` 100 ms; still **hard bootloop**, BLE never usable — **current brick**. `do_ota_rollback` does not undo a successfully applied crashing image. Engineer/MMI is in the **running** app. v4 restore zip on phone only; cannot OTA while bootlooped.

Safe if ever retried: TimeModel digits (v4). Unsafe: any create/timer in `FUN_2c5d931c`; dock `0x508A98`; `%` in TimeModel; `0x3Dxxxxxx` color loads during boot UI.

---

## OTA acquisition, cloud APIs, and companion apps

### Installed 1.0.12.88 is newer than the public ceiling

The glasses run **1.0.12.88**. The newest package the CN production OTA table will hand out is **1.0.12.83**. That pack’s eligibility window ends at **`supportTo` 1.0.12.23**. `1.0.12.88` sits *above* that ceiling. FIRMWARE_FINDINGS and WRITEUP treat `.88` as a factory / retired build, not a missed public rollout. There is no `packLink` for it.

Early probes that used the glasses’ real version all came back `existsUpdate:false`. That produced a false premise: the OTA server gates on whether a rollout *record* exists for the model, not on the client’s version — so sweeping versions is pointless. **Reality:** the server **does** gate on version. Each published update carries a **`supportFrom`–`supportTo`** window — the range of *currently-installed* versions eligible for that pack (`inspectionScope: interval`). The device was not too obscure to serve. It was **too new**. Claiming `version=1.0.10.0` lands inside the 1.0.12.83 window; `version=1.0.1.0` lands inside the 1.0.7.83 window.

```
1.0.0        1.0.7.83     1.0.12.23                    1.0.12.88
  |------[ win → 1.0.7.83 ]---[ win → 1.0.12.83 ]----------|
                              ^claim 1.0.10.0  (inside)     ^real 1.0.12.88 (above ceiling)
```

The server matches the newest update whose `supportFrom`…`supportTo` range contains the claimed current version. `packLink` is a **pre-signed Aliyun OSS object URL** (`Expires` stamped for year 2066 — effectively permanent). The same bucket refuses anonymous listing (`AccessDenied` on `?prefix=ar-ota/`); only the object GET with query-string auth works. That is why “browse the bucket” failed and a signed `checkV2` succeeded. Both CN packs reported `updateType:0`, `userScope:all`.

### Request signing (`SignUtils`, HMAC-SHA256)

`checkV2` looks like an unsigned form POST. It is not. An unsigned probe returns **`9100001` / `签名校验不通过`**. The FOTA library does **not** use the rest of the app’s header-based `appSign` scheme (`MD5(appId + signId + reqTime)`). Glasses OTA signs a **body field** `sign`.

Signer: `com.upuphone.star.httplib.SignUtils` (decompiled from intl 2.40.51). Working clients: `Reverse/tools/probe_ota2.py`, `Reverse/download_ota.sh`.

```
sign     = HMAC-SHA256 hex( sorted "k=v" joined by "&" , key )
key      = UTF-8 / raw ASCII of  wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI=
deviceId = SHA256 hex( "RhdNS`Z?" + serialNumber )
```

**The HMAC key is the raw ASCII of that base64-looking string. It is NOT base64-decoded.** `probe_ota2.py` sets `KEY = b"wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI="` and feeds those bytes to `hmac.new`. The key is hardcoded and **shared across devices**; a valid signature is fully reproducible offline. No per-device secret. The key is **not** present verbatim in the inspectable Flutter AOT; it lives in the Ijiami-encrypted Java payload. 2.49.24 still authenticates with the **same** HMAC key (verified: old key works; bad key → `9100001`).

Canonical `checkV2` fields (`CheckGlassUpdateParamV2`): `deviceType`, `deviceId`, `version`, `deviceModel`, `buildType`, `versionType`, `timestamp`, `lang`, `appVersion`, `depDeviceType`, `depDeviceVersion` (mandatory for rings), `deviceIdEncrypted`, `os`, plus `sign`. Air (XGA010C) path from Flutter: `deviceType=Star Air`, `deviceModel=XGA010C`. Working download script also sends `buildType=user`, `versionType=release`, `appVersion=2.40.51`, `lang=zh_CN`. For this unit’s serial: `deviceId` = `3207e755e085c6af233233bc504a78a9b0d1e4403a2453cc06fb81cd01aa461f`, sent with `deviceIdEncrypted=true`.

Related paths on the same `sArOta` host: `POST /client/v1/arupgrade/check` (v1), `POST /client/v1/arupgrade/notify` (report result), `POST /client/v1/super-app/latest-version/v2` (phone **APK** update, same sign scheme — not glasses firmware).

### CN versus intl — this unit is CN

| Environment | `sArOta` base |
| --- | --- |
| China prod | `https://xr-nbs.myvu.cn/ar-ota` |
| China UAT | `https://xr-nbs-uat.myvu.cn/ar-ota` |
| Intl prod | `https://xr-nbs-global.myvu.cn/ar-ota` |
| Intl UAT | `https://xr-nbs-global-uat.myvu.cn/ar-ota` |

Glasses firmware check: `POST {sArOta}/client/v1/arupgrade/checkV2`. **This unit is CN-provisioned.** Intl `checkV2` for XGA010C / this `deviceId` returns success with an **empty** update (`existsUpdate:false`, `packLink`/`packLink2` null). Both regions *accept* a correctly signed request; intl simply has **no pack** for this identity. Do not confuse “empty rollout” with “dead host.” Hitting china_prod + intl_prod with the exact ROM `Flyme XR 1.0.12.88.20250217_Air_FR` also got `existsUpdate:false` — expected, because `.88` is above `supportTo`.

### Packages obtained

CN `checkV2` (signed, in-window claimed version) produced two OSS zips, md5-verified against the server `digest`:

| Zip on disk | Bytes | md5 | `versionFullName` | Window (`supportFrom`–`supportTo`) | Elicit with |
| --- | --- | --- | --- | --- | --- |
| `ota_star-air_1.0.12.83.20241231_Air_FR_dvt_user.zip` | 4,541,685 | `fb7de159644754786df2b1049d9088ca` | Flyme XR **1.0.12.83** | **1.0.7.83** – **1.0.12.23** | `version=1.0.10.0` |
| `ota_star-air_1.0.7.83.20240612_Air_FR_dvt_user.zip` | 4,292,940 | `6e81dc3ac194f802bdce38e7299d7cdb` | Flyme AR **1.0.7.83** | 1.0.0.42 – 1.0.5.3 | `version=1.0.1.0` |

A **third** pack is in the tree as `firmware_1.0.11.53.zip` (4,521,387 B, local md5 `21450880b194c10c9eae0c775b20a468`). It is **not** named like the OSS `ota_star-air_…` objects, and the CN download tables list only the two checkV2 zips. No server `digest` is recorded for it. It unpacks to the same two-bin layout and was used as a mid-generation cross-check — credit **ToasterBus** / **Conscious_Phrase_138**. **None of these is `1.0.12.88`.**

Each zip is **not** an Android system image. Members: `platform_tester.bin` (M55) and `best1600_watch_bth.bin` (M33). Extracted sizes:

| Version | `platform_tester.bin` | `best1600_watch_bth.bin` |
| --- | --- | --- |
| 1.0.7.83 | 6,307,384 | 1,337,720 |
| 1.0.11.53 | 7,042,632 | 1,340,040 |
| 1.0.12.83 | 6,771,708 | 1,341,116 |

16-byte BES OTA header, then Thumb-2. M55 FLASH XIP base `0x2C000000`, entry `0x2C010014`. Zip *members* are complete bins (not a parsed sparse-delta format); the *archive* is smaller because those bins zlib-compress well. TEARDOWN.md’s “likely delta/incremental” is a size guess from the ~4.5 MB archive, not a confirmed vendor delta encoding. The zip is still not a full NOR dump. The OSS object names contain `dvt_user`. That is a **filename token**. The channel sweep’s `buildType=dvt` returned `existsUpdate:false`. The pack that succeeded was requested as `versionType=release` + `buildType=user`.

### Channel sweep (~1500) — only `release` / `user` succeeded

`ota_channel_sweep.sh` and parallel `ota_channel_sweep_mt.sh`: **15 `versionType` × 10 `buildType` × 5 claimed versions × 2 regions = 1,500** signed `checkV2` requests. Claimed versions included `1.0.12.87` (a deliberate shot at a hypothetical `.83→.88` window), `1.0.12.23`, `1.0.12.0`, `1.0.1.0`, `0.0.0.0`. Hosts: `https://xr-nbs.myvu.cn/ar-ota` and `https://xr-nbs-global.myvu.cn/ar-ota`.

**Only `versionType=release` / `buildType=user` ever returned a pack.** Every alternate channel (`beta`/`gray`/`dev`/`eng`/`dvt`/`evt`/`pvt`/`mp`/`factory`/`internal`/`uat`/…) returned `existsUpdate:false`. **1.0.12.83 is the hard ceiling on every channel.** `.88` is not retrievable via `checkV2` by any versionType/buildType/version/region combination tried. That closes “maybe `.88` is staged on beta/gray.”

### Diff 1.0.7.83 → 1.0.12.83 (ToasterBus cross-check)

Unique strings ~51k → ~55k (`+14223` / `-9956`, lots of compiler noise). Fonts: 1.0.7.83 has **4347** glyphs, ASCII `gid_start=0`. **1.0.11.53** and **1.0.12.83** have **6032** glyphs, `gid_start=1`. Bitmap MD5s are **identical** between 1.0.11.53 and 1.0.12.83. Handlers: `set_demo_mode` / `get_demo_mode` absent in 1.0.7, 1.0.12, and BTH. Screenshot (`get_glass_screenshot`) and `get_glass_log` already exist in 1.0.7. 1.0.12 adds `launcher_standby_demo_mode` / “Demo Mode Open”, splits OTA into `OtaMsgModel` + `OtaChecker`, transfer/written-flash MD5 fail strings, silent-OTA, wear-detection MMI, `sensor_debug_switch`.

### Companion apps — intl 2.40.51 readable; CN 2.49.24 Ijiami-packed

There is **no static firmware URL** in either APK. Firmware URLs appear only in a live `checkV2` `packLink` while a rollout is eligible.

**Intl 2.40.51** — source of the readable Java/Kotlin surface. Package `com.upuphone.star.launcher.intl`, versionName **2.40.51** (versionCode 2040051), minSdk 29 / targetSdk 34. Flutter AOT `libapp.so` / `libflutter.so`, HERE `libheresdk.so`, ONNX, opus, PAG, MMKV, Bugly. Flutter module string: `com.xjmz.myvu:flutter_release:2.40.0-SNAPSHOT`. Main activity: `com.upuphone.xr.sapp.superconnect.ui.SplashActivity`. 8 DEX, jadx-readable. `SignUtils`, `GlassUpdateApiManager`, `AirGlassOtaApiImpl`, `VuGlassUpdateHelper` recovered from DEX. `deviceType` constants: `View` hardcoded in `VuGlassUpdateHelper`; Ring requires `depDevice*` or the server rejects; Air/XGA010C checks from Flutter.

**CN 2.49.24** — reinforced APK `MYVU_phoneThird_2.49.24_STARV_MP12_…-reinforced.apk`. Package `com.upuphone.star.launcher`, label MYVU, version **2.49.24** (versionCode 2049024), minSdk 29 / targetSdk 33. APK 506,242,348 bytes, MD5 `53f0ca2e99132319c6a0d81944cdeec0` (matches the app-update API `digest` — this is the **phone APK**, not glasses firmware). **Ijiami**-packed: top-level DEX is a 13,316-byte `s.h.e.l.l.*` loader; `AppComponentFactory` → `s.h.e.l.l.A`; `com.ijm.dataencryption.DETool`; `assets/ijiami.dat` (~19 MB) + `assets/ijiami.ajm` (~8.2 MB); `assets/ijm_lib/*/libexec.so`. JADX of the shell shows the packer, not app logic. Original application class `com.upuphone.xr.sapp.MainApplication`.

**Flutter AOT is not packed the same way.** `libapp.so` strings still expose models, Dart paths, `checkV2` / `notify` routes, `ota/query_file`, `ota/upload_file`. No `checkV3`. Pigeon/Flutter OTA: `AirGlassOtaFlutterApi.glassOtaUpdate` / `startUpdateFile` / `otaIsNeedShowRedPoint`. `file_transfer.proto` `RECEIVE_OTA_FINISH = 13` — the phone **transfers the zip to the glasses over StarryNet**, it does not install an Android image on the phone. Super-app latest-version/v2 on `https://xr-nbs.myvu.cn/ar-ota` currently serves this 2.49.24 APK from OSS. Extra model strings vs 2.40.51: `XGZ030C` (Snap), `XGG010C` (View). `XGA010C` remains Star Air. Small bundled `.bin` files are calibration/models, not a flashable glasses image. TEARDOWN.md also notes Ijiami plus certificate-pinned binding traffic on the CN app; the **intl** build is what made `SignUtils` statically recoverable. Exported debug: `SuperAppDebugActivity` (env switch china/intl prod/uat, `requestGlassLog`). Env stored in SharedPreferences `net_config` / `env`.

### Cloud map

On startup the app reads env (`intl_prod` default on intl builds, `china_prod` otherwise) and **GETs a service directory from the config gateway**. Live hosts come from that response; a full hardcoded fallback (`NetConfig.e` / `defaultNetConfig`) ships in the APK.

| env | config gateway |
| --- | --- |
| china_prod | `https://gw.myvu.cn/config/` |
| china_uat | `https://gw-uat.myvu.cn/config/` |
| intl_prod | `https://gw-global.myvu.cn/config/` |
| intl_uat | `https://gw-global-uat.myvu.cn/config/` |

**china_prod fallback hosts (abbrev.):** nbs `https://xr-nbs.myvu.cn`; **ar-ota** `https://xr-nbs.myvu.cn/ar-ota`; **account**-service `https://xr-nbs.myvu.cn/account-service`; **auth** `https://gw.myvu.cn/auth`; **ASR** websocket `wss://km.myvu.cn/auth/central-manager/ws`; **weather** / xr-weather; xr-menu, xr-datatrack, cloud-adapter, myvu-config on nbs; feedback/record/file on `gw.myvu.cn`; mixture (AI) `https://mixture.myvu.cn`; km `https://km.myvu.cn`; survey `https://survey.myvu.cn`; aiRecord `https://airecords.myvu.cn`; policy `https://policy.flyme.com`.

**intl_prod:** nbs `https://xr-nbs-global.myvu.cn`; ar-ota `https://xr-nbs-global.myvu.cn/ar-ota`; km `https://kmglobal.myvu.cn`; mixture-global; airecords-global; auth `https://gw-global.myvu.cn/auth`. International **feedback and record still hit China `gw.myvu.cn`**, not consistently `gw-global`. Account deletion pages: `https://account.flyme.cn/user/cancel` / `https://account.in.meizu.com/usercancel`. Flyme OAuth: `i.in.meizu.com`.

App-level nbs credentials: china_prod `appId=IKSoISndT` `ak=myvu-android`; intl_prod `appId=elS8JURA` `ak=myvu-android`. Header signing (non-FOTA): `appSign = MD5_hex(appId + signId + reqTime)`. Credential pairs selected by **device type**. **XGA010C = AIR** (`GLASS_AIR`), not VIEW. Do not mix AIR and VIEW pairs when talking to nbs. Other notables: StarryNet config CDN `https://safe-apk.mzres.com/pack/cdnresource/starrynet/st_configs.json`; app download page `https://www.myvu.cn/app-get/download.html`; WeChat appid in the intl APK; HERE maps; Tencent Bugly; 2.49.24 Sentry `2.49.24@2049024`.

### On-glass apply (integrity / bank)

Phone sends the two BES bins over StarryNet file transfer (`SENDER_DATA` / `RECEIVE_OTA_FINISH`). M55: parse file-info (`fileName`, size, md5) → receive payload → **transfer MD5** → `ota_flash_program` (M55 + BTH) → **written-flash MD5** → update magic + boot info → `ota_check_and_change_boot_type` → inform StarryNet. Fail / bad boot: **`do_ota_rollback`**. Official-image brick risk is low because of A/B + rollback. UART `xmodem` / `mw` has **no rollback net**. Do not flash a package based only on a guessed model name — the response can scope by serial, hardware model, current-version range, and `childRoms`.

Repo tooling: `Reverse/tools/probe_ota2.py` (HMAC `checkV2`, KEY as raw ASCII bytes); `probe_real.py` (this serial + exact `1.0.12.88` ROM string, CN+intl); `download_ota.sh`; `ota_channel_sweep.sh` / `_mt.sh`; `watch_ota.py` / `appupdate3.py`.

---

## Protocol

The glasses expect **two Bluetooth links at once**, in this order:

1. **BLE first.** The classic radio does not answer a page until BLE has woken it. A cold Android `createBond` without BLE times out (~13 s, no ACL). BLE carries version negotiation, the **ECDH** bond, the 3 s heartbeat, the ability handshake, and the **only** announcement of where the app relay lives (a per-session RFCOMM UUID, `CMD_SPP_SERVER_UUID_SYNC` = 70).
2. **Classic BR/EDR second.** On Android / Windows the phone, as master, pages the glasses' **MAC** and opens **HFP**, **A2DP**, and the RFCOMM relay at that UUID. Classic bonding is **non-persistent** (re-pairs every session). The glasses do **not** answer a classic inquiry scan — only a directed page works.

App JSON after the bond rides a RunAsOne relay. Android prefers RFCOMM once it is up and falls back to BLE `0x2021`. iOS **cannot open RFCOMM**: `ExternalAccessory` is MFi-only; XGA010C is **not MFi**; there is no public API to open SPP to an arbitrary UUID. BLE therefore carries the application traffic on iOS.

Glasses-native apps (`open_app` / `com.upuphone.ar.tici` teleprompter, `com.upuphone.ar.navi.glass` navigation, music) additionally require a live classic **audio** link (**HFP** + **A2DP**). The lens card "Please Connect to the mobile first" / 请连接手机 is that gate, not DRM and not account activation. `system_account` / `system_glass_active` / `req_active_state` in the init burst are analytics; asserting `value:true` is rejected and the glasses keep answering `value:false`. BLE-only (launcher already running) is enough for notifications, brightness, volume, zen mode, screen timeout, `set_language`, trackpad (`phonepad`), queries, clock sync, weather. Opening `tici` from the on-lens launcher still shows the card until HFP/A2DP exists.

RFCOMM framing (Android capture; iOS cannot open this channel): magic `ea ca 93 53`, 4-byte BE length, prefix `00 02`, then the same relay/StreamReq bytes as BLE, unfragmented. Channel is a **random 16-bit UUID per session**; captured payload `21 91 00 00` is little-endian short UUID `0x9121`.

### `IOS_CONNECT_BT` (cmd 32) — the iOS-wall overturn

`INVESTIGATION.md` §6/§7 and TEARDOWN.md §6 (“The iOS wall — why half the features won't work on iPhone”) concluded that iOS cannot provide HFP/A2DP on this non-MFi model. **Those sections are stale.** `SESSION_LOG.md` is authoritative: glasses apps work on iOS after `IOS_CONNECT_BT`. `starry_link_encrypt.proto` defines iOS-specific LinkProtocol commands the original SDK port never wired (it jumped from cmd 19 to cmd 70):

| cmd | name | payload |
| --- | --- | --- |
| 32 | `IOS_CONNECT_BT` | `IOSConnectBt { deviceName(1), isFirstConnect(2), timeout(3), cycleCount(4) }` |
| 33 | `IOS_DISCONNECT_BT` | disconnect |
| 34 | `BT_STATE_CHANGE` | `BTConnectStatus { btStatus(1) }` reply |
| 35 | `REQUEST_STATUS_BT` | status poll |
| 40 | `SYNC_THIRD_MAC` | third-MAC sync |

iOS apps cannot open classic BT themselves and hide the phone's own MAC. **`IOS_CONNECT_BT` flips the roles:** the phone sends its **Bluetooth name** over BLE `0x2020`; the **glasses page the phone** and drive HFP/A2DP. No MFi, no phone MAC. Hardware-verified: iPhone Bluetooth name `Testing1`, discoverable (Settings → Bluetooth open). Empty payload or `UIDevice.current.name` ("iPhone") stayed at `BTSTATUS` 8 (`NO_CONNECTED_BT`). Correct name moved off 8; keepalive held state **9 (`EXIST_CONNECTED_BT`)**. Then `open_app` `com.upuphone.ar.tici` and `com.upuphone.ar.navi.glass` both ran on the lens.

Keepalive (`startIosBtKeepAlive`): re-issue `IOS_CONNECT_BT` at 2 s while down (`isFirstConnect=true`) and 6 s while up (`isFirstConnect=false`). Do **not** tick on every state-8 ACK (~60 ms) — that storms BLE. Treat status **9 as already up**; treating 9 as down re-issues `firstConnect=true` every 2 s and drops the link (`LinkCommands.isClassicLinkUp`).

`BTSTATUS`: 0 DEFAULT, 1 BOND, 2 BONDING, 3 NOBOND, 4 CONNECTED_ACL, 5 CONNECTED_HFP, 6 CONNECTED_A2DP, 7 DISCONNECTED, 8 NO_CONNECTED_BT, 9 EXIST_CONNECTED_BT, 10 CONNECT_FAIL, 11 BOND_CANCEL_OR_TIMEOUT.

**Still true after the overturn:** iOS still cannot open the RFCOMM relay. App JSON stays on BLE. What changed is the **audio** link, which is what the launcher actually gates on. RFCOMM/SPP on iOS is still closed. Not MFi.

### Discovery

Confirmed on XGA010C by dumping every advertisement. The advert carries **no local name and no service UUIDs** — manufacturer data only:

```
mfg=d10b03000100021003caf0feb190d30400052001a0100002    (advert)
    d20b13094d59565520304633350f001601                  (scan response)
```

- `d10b` / `d20b` = LE company IDs **`0x0BD1`** / `0x0BD2` (same `0x0bdx` family as the GATT service). Advert and scan response use different IDs; CoreBluetooth concatenates them.
- `4d5956552030463335` = ASCII **`MYVU 0F35`** in the **scan-response** half — absent from the first advertisement packet.
- Remaining manufacturer bytes are not decoded. Six bytes `caf0feb190d3` also appear in `0x2020` link frames of the same session; they are a per-device identifier, **not** the pairing MAC (`2C:6F:4E:01:0F:35` on this unit).

Consequence: `scanForPeripherals(withServices:)` never reports these glasses. Matching `CBAdvertisementDataLocalNameKey` or `peripheral.name` discards them (`peripheral.name` is nil until connected once). `BleCentral.isMyvuManufacturerData` keys on company ID (`0x0BD1` / `0x0BD2` / `0x0BD3`) with the `MYVU` ASCII marker as a second signal. Some builds advertise GATT-adjacent service **`0x0BD3`** (official-app scan filter); both `0x0BD1` and `0x0BD3` are matched.

### GATT StarryNet

`makeUUID(i)` = `0000{i:04x}-0000-1000-8000-00805f9b34fb`.

| Role | 16-bit | Notes |
| --- | --- | --- |
| Service | **`0x0BD1`** | `makeUUID(3025)`, name **StarryNet**. Some firmware advertises `0x0BD3` instead. |
| Internal | **`0x2020`** | Link / pairing: version negotiation + ECDH + LinkProtocol cmds (SPP UUID, `IOS_CONNECT_BT`). Write-without-response + notify. |
| External / app | **`0x2021`** | Application data: RunAsOne / SuperMessage / JSON actions. Write-without-response + notify. |
| Urgent | **`0x2022`** | Heartbeat + high-priority. Write-without-response + notify. |
| Glass write | `0x2023` | Present on Air family. |
| V2 family | `0x2010` / `0x2011` / `0x2012` | Internal / app / urgent on other generations. Client probes Air triple first, then V2. |
| CCCD | `0x2902` | iOS: `setNotifyValue` owns this; do not write it by hand. |

Heartbeat (capture-attested): `00 00 09 10 00` written to **`0x2022`** every **3 s**. Without it the glasses' watchdog drops the link.

BLE packet transport (little-endian). Every packet starts with 2-byte `sn`: `sn == 0` → control (`type` at `[2]`, `pkgType` at `[3]`); `sn != 0` → data fragment. Control types: 0 CTR, 1 ACK, 2 SINGLE, 3 SINGLE_ACK, 4 MNG, 5 MNG_ACK, 6 FAST_CTR, 7 FAST_ACK, 8 MIX_CTR, 9 SINGLE_NO_ACK. Package types: 0 COMMON_DATA (app), 16 STARRY_DATA (pairing), 17 STARRY_DATA_INIT. ACK: 0 SUCCESS, 1 READY, 2 BUSY, 3 TIMEOUT, 4 CANCEL, 5 SYNC.

Transport constraints (not extra protocol bytes): Android SDK negotiates MTU 517 and uses `DMTU = MTU − 5`. iOS never exposes MTU (CoreBluetooth negotiates at connect); `BleTransport` uses `DMTU = maximumWriteValueLength(.withoutResponse) − 2` and re-reads at handshake phase boundaries. All protocol writes are write-without-response and on iOS are **silently dropped** while `canSendWriteWithoutResponse` is false — a dropped MIX_CTR fragment corrupts the 1..N run with no error; `BleWriteQueue` drains on the readiness callback plus a 30 ms re-drain. Peripherals are identified by UUID, never MAC.

### ECDH wraps pairing only

Bond rides **`0x2020`** only. After the bond, app JSON / protobuf on **`0x2021`** is **plaintext**. Crypto does not wrap StarryNet BUSINESS messages.

Sequence:

1. **Version negotiation** — FAST_CTR, pkgType 17, JSON `{"i":ownIdHex,"v":3,"e":5,"m":512,"b":2,"c":"9999"}`. Reply `"e"` selects AES: 1 = CBC/PKCS5, 2 = CTR/NoPadding, else GCM. Hardware session used CBC (`e:1`).
2. **WRITE_SWITCH_KEY (cmd 11)** — phone SPKI public key + 6-byte MAC.
3. **← WRITE_SWITCH_KEY** — glasses SPKI ‖ 16-byte IV, plus `AES(their DeviceInfo)`. Derive shared secret, decrypt DeviceInfo.
4. **WRITE_SWITCH_INFO (cmd 13)** — phone **double-encrypted** DeviceInfo. Bond established.

Crypto: EC **P-256 (secp256r1)**; raw 32-byte X coordinate used **directly** as AES-256 key (no KDF). IV = first 16 ASCII chars of a **lowercase** UUID4 — the hex characters themselves are key material. Public keys are X.509 SubjectPublicKeyInfo DER (91 bytes). **No certificate or signature check** — any correct speaker is accepted.

`device_id = dealDeviceId(mac)` = reverse the 6 MAC bytes **and** bitwise-NOT each (verified: `7ca375d094f1 → 0e6b2f8a5c83`). iOS has no phone MAC; identity sent is synthetic `AA:BB:CC:DD:EE:FF`. Android has returned a placeholder from `BluetoothAdapter.getAddress()` since Android 6, so the reference SDK does the same. Glasses use it only to key the session.

`LinkProtocol { 1: device_id (bytes), 2: cmd (varint), 3: data (bytes) }`. Other cmds on this channel: INIT 0, ENSURE 1, UNBONDED 2, READ_SWITCH_KEY 10, READ_SWITCH_INFO 12, BOND_MSG_CHANGE 14, AUTH_STATUE 18 (proto spelling), AUTH_MESSAGE 19, then 32–35 / 40 as above, then SPP 70–73. `DeviceInfo { 1:btMac, 2:companyId, 3:categoryId, 4:modelId, 5:name, 6:battery, 7:btStatus }`.

After the bond the glasses stay on "Open MYVU AR App" until **AUTH (type 0)** — AuthBean JSON advertising `["abilityRelay","abilityRelayBypass","abilityAir","abilityShare"]`, `version:"2.40.51"`, `weight:233333`, airMapping `com.upuphone.star.launcher` — then **AUTH_SUCCESS (type 12)**. Without AUTH_SUCCESS the glasses ACK data but never engage the app layer. StreamReq/AUTH class byte is `0x02`. Glasses send the ability reply more than once; answering each copy starts a second init burst and breaks the 1..N `msgId` run — latch `authConfirmed`.

Relay SuperMessage: TlvBox big-endian `[tag:1][len:2 BE][value]`. Tags 100 MSG_TYPE, 101 MSG_ID, 103 NEED_CALLBACK, 105 MSG_BODY, 109 APP_UNITE_CODE, 112 CATEGORY, 113 PAYLOAD. Frame prefix `0x01`, category 3. `msgId` starts at 1 with **no gaps**; out-of-order ids are buffered and never delivered. StMessage `{ 2:sourcePkg, 3:targetPkg, 4:action_json, 6:msgId }` (msgId base 5001). Default src/dst `com.upuphone.star.launcher`. Init burst (`captured_init.txt`) with fresh 1..N ids, 200 ms apart, dropping captured ACKs and stale `SyncOffSetTime` / `sync_clone_data`, is required on every transport.

Firmware stack (`xjxr_starrynet`): snif / `message_manager.c` / `receive_channel.c` → protobuf `Starry.StarryNetMessageData { senderPkg, receiverPkg, message, messageType }` with `messageType ∈ { BUSINESS, NOTIFY }` → Launcher `Pages/Launcher/model/MessageModel.cpp`. Bond telemetry: `[STARRYNET_LOG] ble_bonded = %d, starry_net_bonded = %d`. Top-level models: `system` → `handleSystemMsg`; `screenshot` → `handleScreenShotMsg`; `user_feedback` → `handleGetLogMsg`; `brightness_model` → `handleAutoBrightnessMsg`; `sport`; `system_glass_active` → `handleGlassActive`; `system_account` → `handleMyvuLoginStatus`; `feature_list`; plus TRACE-named `handlePhonePadMsg`, `handleHealthMsg`, `handleStartAppMsg`/`open_app`, `handleVersionNoMatchMsg`, `handleEventTracking`/`sync_event_rule`. Weather uses `WeatherModel::handleAppMsg`. `set_language` is hardware-confirmed on XGA010C: `{"language":"zh","country":"CN"}` → send `en`/`US` → `{"language":"en","country":"US"}`, persistent. Attested pairs: `en`/`US` and `zh`/`CN`. Launcher package in the init burst is `com.upuphone.star.launcher.intl`.

### ShareAbility — screenshot, log, OTA file transfer

On BLE, share frames are **not** SuperMessage-wrapped: outer TLV category 5, payload = protobuf (`share_api.proto` `ShareApi.Message`). Unanswered `SENDER_SYN` makes the glasses dump chunks until the watchdog drops the link. Types: 1 PULL, 4 SENDER_SYN, 5 RECEIVER_ACK, 6 SENDER_DATA, 7 SENDER_FINISH, 8 RECEIVER_FINISH, 9 SENDER_FAIL, 10 SENDER_CANCEL, 11 RECEIVER_CANCEL, 12 RECEIVER_FAIL, **13 RECEIVE_OTA_FINISH**, 14 RECEIVER_DATA_ACK. Protobuf fields used include type, dirPath, taskId, packageName, chunkSize, chunkData, totalSize, count, beginStart, chunkStart, order, **md5**, fileName, chunkEnd. Preferred phone ACK chunk 4096; glasses have asked 8 KiB on some builds. OTA `SENDER_SYN` dirPath the official Air sender uses: `/sdcard/Android/data/com.upuphone.star.launcher/files` (label; glasses write the bins themselves). iOS SDK now ACKs and receives (`ShareReceiver.swift`). There is **no screen-record command**. `RECORD_STATE_*` / "Make a Record" are Quick Notes / meeting assistant, not a framebuffer recorder.

Panny777’s **Meizu-Myvu-SDK** (JitPack `com.github.Panny777.Meizu-Myvu-SDK:myvu-core:v0.3.0`, MIT) and **Meizu-Myvu-Client** established the two-link order, “not account/server-gated … there is no DRM,” Android `BrEdrMasterManager.connectBrEdr()`, Windows WinRT RFCOMM-by-UUID plus a minimal HFP AG (`hfp.py`, `AT+BRSF=767` → `+BRSF: 3943`), and a byte-level protocol test suite. This tree added manufacturer-data discovery (`0x0BD1`/`0x0BD2`), iOS write-queue / MTU, and the **`IOS_CONNECT_BT`** port the SDK never implemented.

---

## Factory

Factory is **not** a BLE `handleSystemMsg` action. USB-C is charge-only. Full `md`/`mw`/`xmodem` needs UART or `debug_i2c` test points.

### Entry — power-on key hold, no password

M33 BTH image (`best1600_watch_bth.bin`) decides at boot from a physical key, then mailboxes the M55: `BTH_TO_M55_FACTORY_TEST_MODE` (M55 string `0x2C16457C`) → log `enter MMI mode!` (`0x2C167EB8`). UI: "MMI mode has been opened." BTH: `!!!!!ENGINEER_MODE!!!!!`.

Named BTH strings (all **0 xrefs** — TRACE-hash; these are `.rodata` labels, not Thumb functions): `hal_key_boot_handler`, `app_factorymode_enter`, `app_factorymode_key_init`, `app_poweron_key_init`, `To enter test mode!!!`, `PWR KEY DITHER!`, `power on case:`, `ENGINEER_MODE`, `BT_DUT_MODE`. Hold-event strings in `hal_key.c`: `HAL_KEY_EVENT_LONGPRESS_500_MS`, **`HAL_KEY_EVENT_LONGPRESS_3000_MS` (3 s)**, **`HAL_KEY_EVENT_LONGPRESS_5000_MS` (5 s)**. The MMI trigger is almost certainly the **3 s or 5 s** long-press on the power key **at power-on**. Which exact pair is **not** recoverable from string xrefs. Capstone follow-up: 3000/5000 immediates in `FUN_1404A374` / `FUN_1404C4F8` are **HFP / three-way-call timers**, not the boot-key classifier. Safe on-device check (nothing flashed; reboot exits): power off, power on while holding the button — try **3 s, then 5 s**.

### eshell prompt

Prompt **`eshell >`** @ `0x2C4274E2` (`../../utils/eshell/eshell.c`). TRACE: `eshell_execute:cmds_count=%d`, `eshell : argc_num=%d, exe_cmd=%s, help_info=%s`, `eshell_paltform_init open=%d` (typo in source), `eshell cmd is not exist.` Core commands (names in image; handlers **unrecovered**): `md`/`md16`/`md32`, `mw`/`mw16`/`mw32`, `comp`/`comp16`/`comp32`, `xmodem`, `panic`, `dump_all_threads`, `show_threads_usage`, `debug_i2c`, `gpioset`/`gpioget`, `pmugpioset`/`pmugpioget`, `pmu_read`/`pmu_write`, `pll_autocalib`, `msleep`/`shell_sleep`, `utest_{uart,ram,dma,i2c,rtc,gpio,wdt}`. Bare `md\0` is absent in the name band; usage is `md addr`.

Product CLIs on the same shell: `xjxr_starrynet_test` (`0x2C02920C`; Ghidra **code** `FUN_2C0282EE` @ `0x2C0282EE`), `xmonkey`, `xtest`, `xr_asl`, `xr_sensor_eshell`, `xjxr_audio_test`, `xjxr_graphic`, `xjxr_input_test`, `xjxr_fps_collect`, `xjxr_power_test`.

### `fac_cmd` packed blob — Thumb handlers unrecovered

Factory commands compiled from `../../factory/fac_cmd/fac_cmd*.c`, registered as the **`fac_cmd`** family. Packed walk file `0x15FDBC`–`0x1606C0` (through `get_board_id` help), then `fac_cmd.c` `__FILE__` @ `0x16071C`. Layout: dense `C-string\0C-string\0…`, predominantly **name then help**. RTOS names: `cmd_mutex`, `fac_cmd_pool`, `fac_cmd`, `fac_cmd_trd`. Fail: `RETURN:NOT_SUPPORTED`, `cmd_handler trd not start.`

**Identity / BT:** `set_sn`/`get_sn`, `set_bsn`/`get_bsn`, space-form `set bt name` (underscore `set_bt_name` is in the `fac_cmd_bt.c` TRACE band, not at that packed index), `set_bt_mac`, `get_bt_name`, `get_bt_mac`, `set_bt_discover`, `get_default_bt_name`, `get_version`, `bt_test`.

**Power / sleep:** `goto_sleep`, `bth_goto_sleep` (pre-table), `set_gpio`, `get_sysfreq`, `set_sysfreq`, `close_eshell`, **`en_usb`** (`0x2C1605E8` / help `enable usb` `0x2C1605F0`).

**Touch / display / JBD:** `check_tp`, `get_tp_status`, `set_tp_sensitivity`, `get_jbd_brightness`, `check_esd`, `check_esd_switch`, `set_lcd_clk`, `set_lreg_creg`, `panel_check`, `panel_bri_cali`, `panel_id`, `set_always_on`, `show_pic`, `exit_show_pic`, `lcd_id`, `set_disp_bri`, `get_disp_bri`, `get_board_id`.

**Audio:** `audio_player`, `audio_loopback`, `audio_pdm_loopback`, `audio_info`, `pa_cali`, `set_audio_vol`, `set_mic`/`get_mic`.

**Charger / FG:** `check_charger`, `charger_status`, `charger_ship_mode`, `charger_enable`, `charger_dump`, `check_coulomb_l`/`check_coulomb_r`, `battery_info`, `battery_capacity`, `set_battery`/`get_battery`, `charge_threshold`.

**Sensors:** `sensor_loglevel`, `sensor_self_test`, `sensor_info`, `sensor_debug_switch`, `get_sensor_data`, `stop_sensor_data`, `enable_sensor`, `disable_sensor`, `sensor_cali`.

**MMI runner:** `mmi_help`, `mmi_run`, `mmi_run_item`, `mmi_result_clear`, `switch_page`, `exit_mmi`. Also `file_sys_check`, `sys_reset`, `soc_info`, `build_date`, `flash_info`, `read_cache`, `read_temp`, `set_cmd`.

Blob anomalies (do not "fix" into a tidy table): `get_bt_name`/`get_bt_mac` adjacent with no help; four tokens `set_gpio`/`get_sysfreq`/`set_sysfreq`/`close_eshell` then help-shaped `set brightness`; `check_coulomb_r` has no help; `lcd_id` help followed by orphan `check ready` before `file_sys_check`. Full sequential dump: `fac_cmd_map.md`.

Dispatch is a **positional blob walk** plus a parallel handler array that is **not** present as a recoverable `{name_ptr, help_ptr, Thumb}` `.rodata` table. Exhaustive pointer / MOVW/MOVT / ADR / literal-pool scans (Ghidra 13 815 functions + Capstone leftovers) find **zero** references to mid-blob names such as `en_usb`, `close_eshell`, prompt `eshell >`, or RTOS name `fac_cmd_trd`. **Therefore: individual `fac_cmd` handler function VAs = unrecovered.** Binding needs interactive hunt for BES `nc_cmd`/eshell registration, or on-device UART/`debug_i2c` trace. Do not invent those VAs.

Prior VAs rejected as LVGL false positives: `0x2C5AA114` (claimed `set_sn` handler — LVGL Model method, registry IDs `0x5059`/`0x5060`); `0x2C5AAB48` (claimed `en_usb` — LVGL TRACE of intern slices `le usb` / `age.` / `w_pic`, then invalidate `0x2C606A28`); `0x2C5AAB80` (claimed `lcd_id`); `0x2C606A28` (claimed “shared fac_cmd helper” — LVGL object flag/invalidate). Only absolute pointer hit for a fac name: alias `0x3C15FDBC` (`set_sn`) at file `0x5AA10C`, owned by LVGL event `FUN_2C5AA01C`. First-pass ForceDis under-coverage (~4993 functions) produced the misattribution; force-disassembly to 13 815 functions placed `0x2C5AAxxx` in **OtaMsgModel / Pages**, not `fac_cmd.c`.

`en_usb` name/help exist; handler unrecovered. M55 image has **no** USB gadget/PHY. `en_usb` cannot enumerate a stack that was never linked, and does not prove Type-C D+/D− are wired on retail boards.

---

## iOS SDK, keepalive, and the stale wall

The unofficial Swift package (`Package.swift` products **MyvuCore** / **MyvuNav** / **MyvuAI** / **MyvuWeather**, demo `Examples/MyvuDemo`) is a port of Panny777’s Android wire format, not a new protocol invented for iPhone. Package name **MyvuSDK**. `swift-tools-version: 6.0`, but every target is Swift 5 language mode — the protocol layer is **queue-confined** rather than actor-isolated, a faithful port of the Android SDK’s single “conn thread”. Platforms: **iOS 15** and **macOS 12** (macOS so the byte-level protocol test suite runs without a device). Root `LICENSE` is MIT, dual copyright: “MYVU iOS SDK contributors” and “Panny777 (original Android SDK),” both 2026.

| Product | Role |
| --- | --- |
| `MyvuCore` | BLE, StarryNet ECDH bond, RunAsOne relay, init burst, notifications, settings, teleprompter, weather wire format, trackpad, queries, ShareAbility, Air OTA, `IOS_CONNECT_BT` |
| `MyvuNav` | `open_app` / `navi_info` HUD, OSRM, `MapsLink`, `NavSession` |
| `MyvuAI` | Glasses-mic Opus path + typed `ask`; pluggable STT/LLM/TTS |
| `MyvuWeather` | Open-Meteo `WeatherSync` (no API key) |

`MyvuCore` bundles `Resources/captured_init.txt` (replayed init burst). `MyvuClient` reconnects with exponential backoff 2 s..60 s when `autoReconnect` is true. Persist `connectedGlassesId`; the glasses accept **one** central at a time — force-quit the official MYVU app before connecting.

### Source honesty — STALE versus authoritative

Three documents in the repo still carry the **pre-breakthrough** conclusion that iOS can never provide the classic-Bluetooth audio link that clears the launcher gate:

| Document | Status on iOS classic-BT / app launch |
| --- | --- |
| `SESSION_LOG.md` (2026-08-20 → 21) | **Authoritative for iOS success.** Headline: glasses now fully work on iOS; teleprompter and turn-by-turn HUD run on the lens via `IOS_CONNECT_BT`. Explicitly says the earlier “impossible on iOS” conclusion was wrong. |
| `INVESTIGATION.md` | **STALE on iOS capability.** Written the same session, **before** the proto commands were wired. TL;DR still says “iOS cannot provide that link for this non-MFi model… not a fixable bug.” Treat it as the trail of wrong theories, dead ends, and BLE-only confirmations — not as the final iOS verdict. |
| `PROTOCOL.md` | **Mixed.** Advertisement format, GATT, ECDH, relay, weather, language, and “no account DRM” remain useful. The opening “iOS cannot open step 2 at all” is still true **for RFCOMM/SPP**. The later section “Why iOS cannot clear it (XGA010C)” is **STALE** for the audio-link gate. |
| `TEARDOWN.md` §6 | **STALE on the iOS wall.** §5 (manufacturer-data discovery; plaintext app layer; `system_glass_active` analytics; hardcoded account `1304198482`) is still correct. §6 and the §0 bullet “iOS can't open [HFP+A2DP] to this non-MFi device” are the pre-breakthrough wall. §8 closed routes (USB, BROM, Ijiami, no root) are still correct and independent of the BT breakthrough. |

Do not collapse these. Quote `SESSION_LOG.md` for “iOS works.” Mark `INVESTIGATION.md` / `TEARDOWN.md` §6 / `PROTOCOL.md` audio-wall paragraphs as superseded, not delete them as if they were never believed.

**Not claimed:** MFi / ExternalAccessory membership for XGA010C. The breakthrough does **not** make the glasses MFi. iOS apps still cannot open an arbitrary RFCOMM channel. The working path is: BLE app traffic (as before) **plus** glasses-initiated classic HFP/A2DP toward the phone’s Bluetooth **name**. **Not claimed:** that the official Meizu iOS app now supports XGA010C. It rejected this unit (“Please use the mainland Chinese version of glasses with the MYVU App”) — a **red herring** layered on the activation misdiagnosis, not a requirement for the unofficial SDK.

### No account DRM

Panny777: there is **no DRM**, license, or activation system on the connect path. The iOS investigation independently confirmed this after a long wrong turn (China-account / seller `代激活` / mitmproxy), then corrected it. Init burst (`captured_init.txt`, 29 replayable data messages after dropping `SyncOffSetTime` and `sync_clone_data`; sourced from `com.upuphone.star.launcher.intl`):

- `system_account` / `account_state` with **`accountId":"1304198482"`** and `value:true` — a **stranger’s Flyme account from the original reverse-engineering capture**, replayed on every connect. Cosmetic / analytics, wrong identity, still unscrubbed.
- `system_glass_active` / `req_active_state` with empty `accountId` and `value:false`. Glasses reply `value:false`. Asserting `value:true` (four variants, real accountId, correct source package, even with `btStatus` reported as HFP or ACL) was **rejected**. Those messages **do not** open the audio link and **do not** activate the device.

Python README of Meizu-Myvu-Client states explicitly that nothing here “bypasses any account, license, or DRM system **(there isn't one)**.” `do_recovery` and `user_feedback` are deliberately not implemented in the Swift SDK.

### “Please connect to the mobile first” = missing HFP/A2DP

The lens card is the **glasses app launcher** refusing to open its own packages until a classic-Bluetooth **audio** link exists. BLE-only `open_app` of teleprompter **`com.upuphone.ar.tici`** → card. Content-only (`teleprompterContentOnly`) and on-lens launcher open of the prompter still show the card until audio is up. With HFP (+ relay on Android/Windows; + glasses-paged HFP/A2DP on iOS after the breakthrough) the same `open_app` succeeds. Classic bonding is non-persistent. You cannot pre-pair on Android and inherit the audio link on iOS. `LinkProtocol.swift` still logs SPP cmds 70–73; iOS **does not connect** the relay.

### Hardware sequence (`SESSION_LOG.md` §8–9)

1. Empty payload → `BT_STATE_CHANGE` **8** (`NO_CONNECTED_BT`).
2. Wrong name `UIDevice.current.name` (generic **“iPhone”**) → still **8**. iOS 16+ hides the real classic name from apps; the demo stores it in `@AppStorage("iosBtName")`.
3. Real name **`Testing1`**, phone discoverable → state moved off 8; a **7** (`DISCONNECTED`) appeared, proving a classic connection had formed and then dropped.
4. Keepalive re-issues `IOS_CONNECT_BT`: **2 s** retry while down, **6 s** gentle keepalive while up, timeout 60 / cycleCount 5 on the tick. Do **not** re-issue on every state-8 ACK.
5. Steady state **9 (`EXIST_CONNECTED_BT`)**. The glasses report “phone found” as 9, **not** as 5/6 HFP/A2DP. `LinkCommands.isClassicLinkUp` therefore treats 4, 5, 6, **and 9** as up.

With keepalive holding `EXIST_CONNECTED_BT`:

```
-> open_app pkg=com.upuphone.ar.tici
<- glass_tici_started
-> send_content
<- send_content_reply
<- open_result_v2 {fileKey:"1/Script"}

-> open_app pkg=com.upuphone.ar.navi.glass
<- navi_start_rsp "1"
-> navi_info: ic:2, "College View Drive", next turn 26m …
navigation started (hud): 3992m, 8 min, 11 steps
```

Two messages ~400 ms apart (`Teleprompter.openToContentDelay`): `open_app` then content. `sourcePkg = com.upuphone.ar.tici`; `ext` / `value` are JSON **strings**, not nested objects. Navigation routing: `open_app` / start → **launcher** (`com.upuphone.star.launcher`); `navi_info` / `navi_event` → **nav app** directly; both sourced from `com.upuphone.ar.navi.lite`. Mixing targets is a silent no-op. Short keys: `ic`, `pd`, `prd`, `prt`, `nrn`, `nrd`, `ns` (speed as **string**), `rdd`, `gs`, `hsr`, `bts`, `ack`. Glasses launch-app request type:11 must be answered type:12 (`InboundRouter`). `SESSION_LOG.md`: “Both native apps run on the lens. **The device is fully usable on iOS.**” This write-up does **not** additionally claim the on-glass **music** app was proven in that session.

Capture `Captures/session-2026-08-21-ios-BREAKTHROUGH-tici-nav-working.log` (159,381 bytes) is the working session. `session-2026-08-21_051929-ios-connect-bt.log` is **523 bytes** — a stub `devicectl` launch with no `IOS_CONNECT_BT` / `Testing1` / `EXIST_CONNECTED_BT` lines. Do not treat that stub as proof of the breakthrough. Narrative of empty payload / wrong name / Testing1 / keepalive holding 9 lives in **`SESSION_LOG.md`**.

### BLE-only features that always worked

These push to the **already-running launcher** and never needed HFP: notifications (`SHOW_NOTIFICATION` / `DISMISS_NOTIFICATION`; id format `phone-<package>-<numericId>` — a raw iOS `UNNotificationRequest.identifier` is unsafe; Android platform keys **rebooted** the glasses); brightness (0–10, string value); volume (0–15, string + `streamType` 3); zen mode; screen timeout; air/minimal mode; wear detection; music touch-panel mode; standby position 0–3; device name; **language** `set_language`; trackpad / `phonepad` (Android KeyEvent swipe codes 19–22); clock sync; weather push (`{"action":"weather","data":{…ArWeatherModel…}}`); device queries. Lens-card substitutes (`LensCards` / `LensScript`, `NavSession(surface: .lensCard)`) were built **during** the wall period so iPhone could still show script/guidance without `open_app`. They remain valid BLE fallbacks; they are not the breakthrough path.

### Optional modules and the demo

**MyvuNav.** iOS cannot read another app’s live navigation. `MapsLink` parses Apple/Google/Waze share URLs into `"lat,lon"` or a Nominatim place name. `NavSession`: OSRM public demo + Nominatim; HUD or lens-card surface; `IcMap` is a **provisional** HERE ManeuverAction-style guess. Demo `Info.plist` sets real `UIBackgroundModes`: `bluetooth-central` + `location`. `CoreLocationSource(allowsBackgroundUpdates: true)` so backgrounding does not SIGKILL the heartbeat / nav.

**MyvuAI.** Glasses stream mic as **code:109** Opus (field 5 = 2-byte BE length + frame, SILK WB 16 kHz). iOS has **no** system Opus decoder; `AiSession` takes injected `OpusDecoding`. Without a decoder, microphone path is unavailable; `ask(_:)` typed questions still run the on-glasses LLM-card protocol. Demo Assistant tab passes `decoder: nil`. Do not send official-app-forbidden 106 VR TTS states 3/4 or `VR_MULTI_WAKEUP`.

**MyvuWeather.** `WeatherSync` pushes on connect, every 30 minutes, retries at 30 s, answers `syncWeather`. Open-Meteo, no API key.

Demo host: `MyvuDemoApp` (`dev.myvu.demo`). Tabs: Connect, Controls, Assistant, Navigate, Log. Wire logging from launch: `SdkLog.minimumLevel = .trace`; `LogStore` 5000-line buffer; every BLE write/notification hex-logged. Controls section “iOS classic-BT (experimental)”: TextField for iPhone Bluetooth name (default **Testing1**), Toggle “Auto-connect + keep alive”, “iOS Connect BT — retry 30s”, “Request BT status (cmd 35)”, “iOS Disconnect BT (cmd 33)”. Current `GlassesModel.observe`, on `.ready`: if `iosBtAutoConnect` { `startIosBtKeepAlive(deviceName: iosBtName)` }. Leftover **pre-breakthrough UI copy** still exists in `NavView` / Controls footers; behaviour and `SESSION_LOG.md` supersede that copy. Bundled OTA zip `ota_star-air_1.0.12.83_BIMA.zip` over BLE Air OTA is a demo surface, not a recommendation to flash a crashing image.

Byte-level tests run on macOS 12 **without glasses**: `AdvertisementMatchTests`, `InitBurstTests` (29 replayable msgs, stale-state filter, gapless 1..N), `LinkProtocolTests` (SPP UUID little-endian `21910000` → `00009121-…`), `CryptoTests`, `BlePacketsTests`, `ShareAbilityTests`, `TeleprompterTests`, `MapsLinkTests`, `AiProtocolTests`, `OpenMeteoTests`, and the rest listed in `Tests/`.

---

## Dead ends

These routes were chased and closed. They remain true after `IOS_CONNECT_BT`.

**USB-C is charge-only.** Nothing enumerates on a Mac in normal mode, MMI, or replug. MMI classifies the port 充电/Charging. No ADB, no gadget serial, no MSC. `en_usb` is a stub; the user image never linked a USB protocol stack. D+/D− contacts exist on the tongue and are believed muxed; that does not enumerate a gadget from 1.0.12.83.

**mtkclient BROM empty.** Watched VID `0x0E8D` across three button-hold + plug attempts (60/90/120 s). Empty USB bus. Non-invasive dump route dead. This is not an MTK part. Firmware was later obtained via OTA `checkV2` version spoof, not a wired dump.

**Companion CN app is Ijiami-packed** (`ijiami.dat` ~19 MB + `ijiami.ajm` ~8.2 MB, single loader DEX) plus Flutter AOT; binding HTTP is **certificate-pinned**. Binding/activation client is not statically recoverable. Irrelevant once DRM-on-connect was ruled out, but it burned calendar time. Intl 2.40.51 is the readable Java surface.

**No root / no dev options.** `buildType: user`. Settings → About shows Factory reset only.

**Official iOS app rejects XGA010C** (region/model mismatch). Red herring; unofficial SDK does not need it.

**OTA `existsUpdate:false` for running 1.0.12.88** until a **lower** claimed version is sent. `.88` is not on any public channel. Installed ROM is newer than dumped 1.0.12.83 and **not a byte-identical** match.

**`set_demo_mode` on Air.** Absent ASCII and UTF-16 in 1.0.7, 1.0.12, and BTH. The About 5× tap still sends it; firmware has no handler. Local `launcher_standby_demo_mode` is a standby clock demo, not the shop-demo API.

**Screen record.** No `screen_record` / `get_glass_screen_record` command.

**Wi-Fi on the glasses.** No stack in this image. Companion `toggleWifi` still emits JSON; Air firmware has no handler.

**iOS RFCOMM/SPP.** Still unreachable after `IOS_CONNECT_BT`. Not MFi. App JSON stays on BLE `0x2021`.

**PIC + interned TRACE.** Ghidra xrefs on action names, `eshell >`, `en_usb`, `handleSystemMsg` are empty. Classical string-xref reversing is a dead end on this BES build. Packed blobs and Capstone immediates are the working method.

**Rejected `fac_cmd` VAs.** `0x2C5AA114` / `0x2C5AAB48` / `0x2C606A28` are LVGL, not factory handlers.

**BTH 3 s / 5 s immediates as MMI.** Those constants in `FUN_1404A374` are HFP timers. Duration-constant scanning is a dead end.

**BIMA glyph remap.** Remapping M/Y/V/U turned HUD copy into BIBA/ByvuiOS and left splash unchanged. Boot mark is not those ASCII strings and not the compiled Latin glyphs.

**Battery-circle veneer.** v5/v6 **bootloop**. Creating LVGL objects during early dock/clock init bricks the running app. `do_ota_rollback` does not undo a successfully applied crashing image. Work is **frozen**. Current unit is bootlooped on v6.

**IDX4 remainder geometry.** `w % 112` still shears. Remainder-first ordering was later rejected. 16×16 tile brute force does not produce a MYVU wordmark. MYVU boot wordmark is not an IDX4 in this OTA.

**UART pads from the JPEG.** Annotated candidates in `board_picture/ANNOTATED_uart_candidates.*` are a sweep list, not a pinout. Overlay itself refuses to name TX/RX.

**`3240 VC19` as USB3740B.** JSON guess; top-mark is not in the Microchip datasheet.

**TrustZone signed OTA.** Literal `TrustZone` absent. SecureFault pretty-printer ≠ signed OTA.

**Account activation / 代激活 / official global iOS app.** Misdiagnosis. `system_glass_active` is analytics. Hardcoded burst account `1304198482` is a stranger’s Flyme id from the original capture.

---

## Open questions

- **IMU vendor unknown.** 6-axis accel+gyro is present behind `xjxr_m552sns` / `accel_gyro.cpp` / hub `accel_gyro_s.cpp`. No part-number string. Could be narrowed with a hub-side I²C WHOAMI **once that bus is probed**; do not guess BMI/LSM/ICM from photos. Numeric `msg_id` enum table not recovered.
- **MEMS mic P/N unnamed.** `4250 TWMF` is a top-mark, not a firmware string.
- **UART pads unconfirmed.** `HAL_UART_ID` unknown. No `hal_iomux_set_uart*`. Annotated candidates are a sweep list.
- **USB mux top-mark vs datasheet.** `3240 VC19` is a guess. Mux `OE_N`/`S` not traced. `en_usb` handler Thumb entry **unrecovered**.
- **BES1600 vs BES2700BP-W naming** is a documentation split (firmware CHIP vs package top-mark), not a second SoC.
- **Installed 1.0.12.88 versus dumped 1.0.12.83.** Same generation is a working hypothesis; byte identity is still open. Maps above are `.83`. **1.0.12.88 was not downloaded.**
- **I2C addresses** for STK, AW883, CW221, SC7288: not published (AW883 explicitly unrecovered; others not given as immediates in the cited leaves).
- **IDX4 remainder-strip geometry** (`w % 112`) still shears; not a VGLite runtime transform. Remainder geometry unresolved.
- **Battery-circle veneer** frozen (v5/v6 bootloop). Shipping HUD is stock icon + time widget, SOC at `0x3C408A6E`. Idle 2-circle percent was never photographed even on v4. Unit currently bootlooped; cannot OTA while bootlooped.
- **`fac_cmd` Thumb handlers unrecovered.** Prior `0x2C5AAxxx` set rejected as LVGL. Binding needs interactive hunt or on-device UART/`debug_i2c` trace.
- **Exact 3 s vs 5 s MMI mapping** — not recovered from BTH xrefs. Try on a healthy unit; reboot exits.
- **RSA/ECDSA on OTA apply** — not observed next to the apply path; not proven absent from ROM. TrustZone world switch for OTA — literal absent.
- **INTERSYS factory opcode** — not recovered; must be taken from M55 enum then matched in BTH TX.
- **BTH `app_factorymode_enter` Thumb** unbound. `xr_ring_*` / `ring_ota_*` Thumb VAs unbound. Full ring ATT UUIDs beyond HOGP `FF10` not recovered.
- **On-device LittleFS** (full CJK `B:lv_font_air_full_cn_20_bpp1.bin`, AAC payloads, KWS models) not pulled. `file_sys_check` is a name, not a USB MSC.
- **Resource-partition pixels** (`0x3c30fd40`–`0x3c3fd540`) not in the OTA zip; boot wordmark lives there.
- **Docs still stale:** `INVESTIGATION.md` and `PROTOCOL.md` audio-wall paragraphs, `TEARDOWN.md` §6, leftover MyvuDemo UI copy that still hedges cmd 32.
- **Init burst account `1304198482`.** Still in `captured_init.txt`. Harmless analytics, wrong identity.
- **Demo arrow-calibration button** sends `navi_info` without opening the nav app first. Breakthrough log shows `Calibration` frames mixed with real HUD.
- **On-glass music app** not claimed as proven in the iOS breakthrough session (teleprompter and navigation were).
- **Cluster-overlap tensions** (cite both, no third VA): (1) `0x2C49D6AC` = `stk_probe_pid` in FULL_FIRMWARE_MAP / TOUCH_INPUT; POWER_BATTERY also cites it as cw221X id `0xA0`. (2) `0x2C49C0CC` = `stk_set_attr` (touch) and charger property switch (power). (3) `0x2C4A92BA` / `0x2C4A9F58` (and JBD jump `0x2C4A9270`) AW883 vs JBD013_DECOMP overlap. Integration authority: **`FULL_FIRMWARE_MAP.md`**.
- **Cmd 40 `SYNC_THIRD_MAC`** exists in the Swift enum; not part of the documented success path. Do not invent a use.
- **Perfect 4bpp last-row / 1bpp wrap** without heuristics in font previews. LVGL packed bitstream is correct; converter leftover bits are ugly in PNGs.

---

## Sources

Compose-from list for this write-up. Cite these; do not treat this article as a substitute for the packed-string walks and reconstructions.

| Path | What it is |
| --- | --- |
| `.unlazy/full-writeup/notes/hardware.md` | Hardware / BOM / board / USB / UART digest |
| `.unlazy/full-writeup/notes/ota-cloud.md` | OTA acquisition / cloud APIs / companion APK digest |
| `.unlazy/full-writeup/notes/protocol.md` | BLE / StarryNet / factory / on-glass OTA digest |
| `.unlazy/full-writeup/notes/firmware.md` | Full firmware-rev C1–C11 + JBD/GPU/fonts/BIMA/bootloop |
| `.unlazy/full-writeup/notes/sdk-ios.md` | iOS SDK / demo / stale-doc / `IOS_CONNECT_BT` digest |
| `TEARDOWN.md` | Identity, FCC, BOM, bus cartoon, charge-only observation; **§6 iOS-wall is stale** |
| `PROTOCOL.md` | Two-link order, GATT, ECDH, heartbeat; RFCOMM iOS limit still true; audio-wall paragraphs stale |
| `SESSION_LOG.md` | **Authoritative** iOS success; `IOS_CONNECT_BT` keepalive; tici / navi.glass on lens |
| `INVESTIGATION.md` | Trail of wrong theories; **stale** on iOS capability |
| `Reverse/STAR_AIR_WRITEUP.md` | Earlier readable summary: fonts, MYVU-as-font, GIFs, LittleFS vs OTA |
| `Reverse/firmware/analysis/full_rev/FULL_FIRMWARE_MAP.md` | VA index, M55/M33 images, PIC/TRACE honesty, C1–C11 checklist |
| `Reverse/firmware/analysis/jbd013/JBD013_DECOMP.md` + `jbd013_reconstructed.c` | JBD4010 thread, SPI, ESD, brightness, 640×480, CS 0x21/0x4F |
| `Reverse/firmware/analysis/ghidra_decoder/GPU_DECODE.md` + `DECODER_FORMAT.md` | VGLite init, IDX4 expand-before-GPU, CHIPID |
| `Reverse/firmware/analysis/BATT_CIRCLE_POSTMORTEM.md` | HUD SOC getter, widget sizes, frozen veneer, bootloop |
| `Reverse/firmware/analysis/usb_enable/` | `stack.json`, `en_usb.json`, `board_routing.json`, `enable_path.json`, `rom_download.json` |
| `board_picture/` | ogDTC photos; `ANNOTATED_dplus_dminus.png`; `ANNOTATED_uart_candidates.png` |
| `Reverse/firmware/analysis/full_rev/touch_input/TOUCH_INPUT.md` | STK5115 / STK501 / wear FSM |
| `Reverse/firmware/analysis/full_rev/audio_smartpa/AUDIO_SMARTPA.md` | AW883 PID `0x2049`, volume map |
| `Reverse/firmware/analysis/full_rev/sensors_imu/SENSORS_IMU.md` | `xjxr_m552sns` hub IPC |
| `Reverse/firmware/analysis/full_rev/power_battery/POWER_BATTERY.md` | CW221 + SC7288, SOC `0x3C408A6E` |
| `Reverse/firmware/analysis/full_rev/ble_starrynet/BLE_STARRYNET.md` | Packed `handleSystemMsg` table |
| `Reverse/firmware/analysis/full_rev/factory_eshell/FACTORY_ESHELL.md` | eshell / `fac_cmd` honesty |
| `Reverse/firmware/analysis/full_rev/ota_security/OTA_SECURITY.md` | A/B MD5, `do_ota_rollback` `0x2C5B9E10` |
| `Reverse/firmware/analysis/full_rev/launcher_ui/LAUNCHER_UI.md` | DockviewV2, Domain graph |
| `Reverse/firmware/analysis/full_rev/bth_m33/BTH_M33.md` | INTERSYS, ANCS, unbound factory strings |
| `Reverse/firmware/analysis/full_rev/ring_accessory/RING.md` | HOGPRH, RingOtaManager |
| `Reverse/FIRMWARE_FINDINGS.md` | Lab notebook: OTA sweep, eshell, `en_usb` correction |
| `Reverse/FINDINGS.md` / `Reverse/FINDINGS_2.49.24.md` | Companion APK / `checkV2` / Ijiami |
| `Reverse/MYVU_cloud_API_map.md` | Cloud hosts and signing |
| `Reverse/WRITEUP.md` | OTA false-premise retraction |
| `Reference/Meizu-Myvu-SDK/` | Panny777 Android SDK (wire-format lineage) |
| `Reference/Meizu-Myvu-Client/` | Panny777 client (Android + Python/Windows) |
| `Sources/MyvuCore/` | Unofficial Swift SDK (`LinkProtocol.swift` cmds 32–35, `ShareAbility.swift`) |
| `Examples/MyvuDemo/` | Demo with keepalive toggle |
| `Captures/session-2026-08-21-ios-BREAKTHROUGH-tici-nav-working.log` | Working tici + navi.glass session |
| `Reverse/firmware/x_1.0.{7.83,11.53,12.83}/` | Unpacked OTA bins |
| `Reverse/firmware/extract_lvgl_fonts.py` / `extract_firmware_map.py` | Font carver / GIF/string map |
| `Reverse/tools/probe_ota2.py` / `download_ota.sh` / `ota_channel_sweep.sh` | HMAC `checkV2` clients |

C1–C11 checklist, for the map: C1 touch STK5115; C2 AW883; C3 sensors `xjxr_m552sns`; C4 power cw221X+sc7288 + `0x3C408A6E`; C5 StarryNet `handleSystemMsg`; C6 factory `eshell` / `fac_cmd`; C7 `do_ota_rollback`; C8 launcher DockviewV2; C9 BTH INTERSYS; C10 ring HOGPRH / RingOtaManager; C11 this map + JBD013/GPU cite in `FULL_FIRMWARE_MAP.md`.
