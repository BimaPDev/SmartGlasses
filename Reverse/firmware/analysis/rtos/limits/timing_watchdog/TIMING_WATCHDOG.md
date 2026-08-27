# Timing, watchdogs, delays, and timeouts (M55 + BTH skim)

**Leaf:** `leaf-1.2.1` (scope `rtos-limits`)  
**Primary binary:** `Reverse/firmware/x_1.0.12.83/platform_tester.bin` (M55, XIP `0x2C000000`)  
**Companion skim:** `best1600_watch_bth.bin` (BTH / BEST1600)  
**Inventory:** [`timing_inventory.json`](timing_inventory.json) · extractor [`extract_timing.py`](extract_timing.py)

This leaf catalogs recoverable **named** timing constraints (timeout / WDT / watchdog / timer strings), Capstone-backed period immediates where found, and delay APIs. Periods that remain only as runtime `%d` arguments are marked **UNRECOVERED** rather than invented.

---

## Hard-limit summary

| Name | Category | Value | Unit | Confidence | Evidence (short) |
|---|---|---|---|---|---|
| `jbd4010_display_thread_watchdog` | display | **1900** (`0x76C`) | ms | high | Capstone `movw r0,#0x76c` @ `0x49933C` → frame-path watchdog |
| `jbd4010_display_fps_throttle_queued_frames` | display | **80** (`0x50`) | frames | high | `cmp r2,#0x50` in display thread; throttle when queue depth > 80 |
| `jbd4010_display_esd_reinit_delay` | display | **200** (`0xC8`) | ms | high | `movs r0,#0xc8; bl osDelayMs` @ `0x49932A` |
| `music_loading_timeout_timer` | audio | **4000** | ms | high | Log text `loadingTimerCallback: 4s later …` |
| `music_check_status_timer` | audio | **2000** | ms | high | Log text `checkMusicStatusTimer: 2s later …` |
| `STK501XX_WEAR_DAEMON_TIMER` | sensor | **100** (`0x64`) | ms | high | `movs r1,#0x64; bl` timer-start @ `0x5296CC` |
| `timer_helper_period_60000` | protocol | **60000** (`0xEA60`) | ms | medium | `movw r1,#0xea60` + timer helper @ `0x479DBC` |
| `osTimerStart_period_60000_site` | ui | **60000** (`0xEA60`) | ms | medium | `movw r1,#0xea60` → `0x2C6448B4` @ `0x485CD6` |
| `timer_helper_period_6000` | sensor | **6000** (`0x1770`) | ms | medium | `movw r1,#0x1770` timer-start @ `0x5CF852` |
| `movw_period_3000_cluster` | protocol | **3000** | ms | low | Multiple `movw #0xBB8` sites (binding unnamed) |
| `movw_period_5000_cluster` | protocol | **5000** | ms | low | Multiple `movw #0x1388` sites |
| `movw_period_10000_cluster` | protocol | **10000** | ms | low | Multiple `movw #0x2710` sites |
| `app_watchdog` / `wdt_ping_timer` | system_wdt | UNRECOVERED | ms | high | Named feed path; ping period not isolated |
| `utest_wdt` | factory | parameterized | s / ms | high | `timeout(s)` + `delaytime(ms)` CLI args |
| `screen_off_timeout_change` | display | phone-set | s | medium | JSON `timeout_value` — default UNRECOVERED |
| `OTA_TRANSFER_TIMEOUT_TIMER` | protocol | UNRECOVERED | ms | medium | Named OTA transfer watchdog timer |
| `ios_wait_bt_connect_timeout` | protocol | runtime `%d` | ms | medium | StarryNet iOS BT wait callback |
| `StateContext_Fallback_timeout` | ui | UNRECOVERED | ms | high | Fallback / wakeup timeout strings |
| `ASR_ERROR_TIMEOUT` / TTS `mute_timeout` | audio | UNRECOVERED | ms | medium | Speech path named timeouts |
| `Drain_timeout` | power | UNRECOVERED | ms | high | Drain timeout log with level/status |
| BTH `APP_FAST_BLE_ADV_TIMEOUT_TIMER` et al. | protocol | skim only | ms | low | Present in `best1600_watch_bth.bin` |

---

## Category counts

From `timing_inventory.json` (regenerate with `python3 extract_timing.py`):

| Category | Count | Role |
|---|---:|---|
| `system_wdt` | 4 | App/PMU watchdog feed + BTH twin |
| `protocol` | 30 | StarryNet / OTA / SPP / ACK / bridge / period clusters |
| `ui` | 14 | Assistant, PhonePage, Launcher, Navi, fallbacks |
| `sensor` | 16 | SAR/STK timers, wear daemon, sensing WDT, hub ping |
| `audio` | 13 | Music/TTS/ASR, AW883 DSP WDT, ANC, A2DP (BTH) |
| `display` | 8 | JBD watchdog/FPS, LVGL tick, screen-off, display FWK |
| `power` | 8 | Battery timers, sleep-again, drain, wakelock, temp |
| `factory` | 9 | `utest_wdt`, `msleep`/`shell_sleep`, eshell sleep, CPU usage |
| **Total** | **≥40 (102)** | |

---

## System watchdog (`system_wdt`)

### App + PMU WDT

- Source path `../../apps/common/app_watchdog.c` with strings `feed watchdog`, `wdt_ping_timer`, `watchdog start timer error`, `app_wdt_irq_handle`, `pmu_wdt_irq_handle`.
- Same `app_watchdog.c` / `wdt_ping_timer` strings appear on **BTH**.
- Hardware PMU path: `Error: pmu wdt reboot failed!`.
- **Ping period:** not recovered as a lone immediate next to the timer name (string refs often via `0x3C……` SRAM alias / TRACE intern; Capstone near one pool was noisy). Treat period as **UNRECOVERED**.

### Factory WDT test

- `utest_wdt delaytime(ms) timeout(s) cnt` under `../../apps/app_eshell/unittest/wdt.c`.
- Opens WDT with `timeout:%ds`; wait logs use `%dms`. Values are **CLI parameters**, not fixed firmware constants.

---

## Display

### JBD4010 display thread (~1.9 s + FPS throttle)

Confirmed in Capstone at VA `0x2C499270` (file `0x499270`), matching `jbd4010_display_thread.c`:

1. Block forever on queue (`timeout = -1`).
2. Outside factory/test flags: `movw r0,#0x76c` (**1900**) then `bl 0x2C498DB4` — display-path watchdog / elapsed check.
3. If either panel’s queued frame counter `> 0x50` (**80**), enter throttle (`bl 0x2C66B4B8`, then `r1=#0x14`).
4. ESD failure path: `movs r0,#0xc8` (**200 ms**) via `0x2C6444FC` (`osDelayMs`).

Also named: `JBD_TIMER`, `lvgl_os_tick_timer` (+ `lvgl tick Timeout: tick_elaps: %d`), FWK `display_notify_timer_handler` / `input_timer_handler` / `display_restore_timer_handler`, `screen_off_timeout_change` + JSON `timeout_value`.

---

## Protocol / StarryNet / OTA

Named M55 timers (periods mostly UNRECOVERED):

| Object | Notes |
|---|---|
| `OTA_TRANSFER_TIMEOUT_TIMER` | `ota_start/stop_transfer_timeout_timer`, `file transfer timeout` |
| `APP_PING_BTH_CONN_TIMER` | `sys ping bth timeout:%d` |
| `IOS_CTKD_BOND_TIMER` | `ios_ctkd_bond_timeout_handler`, `bond timeout timer take effect` |
| `WAIT_EMERGENCY_MSG_ACK_TIMER` / `WAIT_EXTERNAL_MSG_ACK_TIMER` | ACK wait |
| `CHANNEL_RECV/SEND_WAIT_MSG_ACK_TIMER` | Channel ACK |
| `SPP_CNANNEL_CONN_TIMER` / `SPP_CNANNEL_MSG_RECV_TIMER` | SPP (typo `CNANNEL`) |
| `UPDATE_ADV_DATA_TIMER` | ADV refresh |
| `PING_CIRCLE_JSON_TIMER` | Circle JSON ping |
| `APP_MSG_NEG_FALLBACK_TIMER` | Negotiated fallback |
| `BOND_CANCEL_OR_TIMEOUT` | Status enum string |

iOS wait-BT: `iosSetConnectBtTimeOut`, `handleIosWaitBtTimeOut`, `iosWaitBtConnectCallBack timeOut = %d` — **argument**, not fixed immediate.

Bridge / MCPP: `app_mcu_to_bth_bridge_wait_rsp_timeout`, `mcpp_cmd_wait_rsp_timeout`.

**Recovered period immediates (binding soft):** `0xEA60` (60 s), `0xBB8` (3 s), `0x1388` (5 s), `0x2710` (10 s) appear as `movw` clusters; only 60 s sites are called out with file offsets in the inventory.

### BTH skim

`best1600_watch_bth.bin` adds BLE/BT stack timers, including:

- `APP_FAST_BLE_ADV_TIMEOUT_TIMER`
- `APP_CUSTOM_CMD_RSP_SUPERVISION_TIMER`
- `APP_BLE_UPDATE_CI_TIMEOUT`
- `BT_DEVICE_CONNECT_TIMER0` / `BT_PROFILE_CONNECT_TIMER0`
- `BT_SCO_RECOV_TIMER`
- A2DP/AVRCP reconnect / stream-trigger timers
- `GAPC_TIMER` / HCI cmd wait-complete timeout
- Shared `wdt_ping_timer` / `app_watchdog.c`

Periods for BTH objects were **not** Capstone-extracted in this leaf (string presence only).

---

## Sensor

- **Sensing WDT:** `sensing wdt trigger` (STK5115 family) and `[SAR5]: sar sensing wdt trigger` (STK501xx).
- **Named timers:** `stk5115_wdt_timer`, `stk5115_{stk,phase,alg}_timer`, `SAR_TIMER`, `SAR_TIMER_51155`, `SAR_TIMER_51158`, `SAR_TIMER_51155_4pad`, `STK501XX_{WEAR_DAEMON,FAR_CHECK,TRACE_DATA}_TIMER`.
- **Wear daemon period:** **100 ms** (`movs r1,#0x64` near timer start using `STK501XX_WEAR_DAEMON_TIMER` literal).
- **Hub:** `sensor_hub_ping_mcu_timer` / `app_sensor_hub_core_timer_init`.
- **FWK wear:** `not_wearing_timer_handler`, `xjxr_wear_unknown_timer_handler`.
- Additional **6 s** timer-start immediate @ `0x5CF852`.

---

## Audio / speech

| Item | Value | Notes |
|---|---|---|
| Music `loading_timeout_timer` | **4 s** | Explicit log wording |
| `checkMusicStatusTimer` | **2 s** | Explicit log wording |
| `heart_beat_timer` | UNRECOVERED | `onHeartBeatTimerCallBack` |
| `checkSendPolicyTimeOut` | UNRECOVERED | AirMusic policy |
| TTS `mute_timeout` | UNRECOVERED | `mute_timeout_callback` |
| `ASR_ERROR_TIMEOUT` | UNRECOVERED | + `STATE_ERROR_TIMEOUT` |
| AW883 `dsp wdt` | status only | `[Awinic] … dsp wdt status error=%d` |
| ANC gain/switch hwtimers | UNRECOVERED | alloc-fail strings |
| `XJXRAudioAdapter timer timeout` | UNRECOVERED | |
| `[audio_finish] timeout.` | UNRECOVERED | |

---

## UI / assistant

- `StateContext Fallback timeout reached.` / `wakeup Fallback timeout reached.` with `resetTimeoutTimer` / `cancelTimeoutTimer` / `startWakeupTimer`.
- `prompt_timeout`, `waitForReplyTimeout`, `onRecordingTimeout`, `onWearTimeout`.
- PhonePage: `startAnswerTimer`, `startHangupTimer`, reset out/hangup timers.
- `[RMoveTimer]` auto-move-right refresh.
- `show connect timer timeout!`
- Private chat `timer interval:%d` (three cases) — runtime.
- Message clear: `single message timeout and needs to be cleared` + `timer_message_{ext,min,max}_callback`.
- Launcher dock hide timer; NaviPage `autoScrollTimerCb`.

---

## Power

- `%s: Drain timeout: level=%u status=0x%08X`
- `battery_info_timer`, `BATTERSTATS_TIMER`, `dump_battery_info_timer`
- `SYSTEM_SLEEP_AGAIN_TIMER` / `xjxr_sleep_confirm_timer`
- `pmu_pwrkey_check_timer`
- `gra_wakelock_timeout`
- `temp_monitor_timer_cb` (+ panel “stop read temp timer”)

---

## Delay / sleep APIs (`factory` bucket for tooling)

| API | Unit | Notes |
|---|---|---|
| `osDelay` / `osDelayUntil` | ticks | CMSIS-RTOS2 (FreeRTOS 10.4.1 stack) |
| `msleep` | ms | Eshell `Usage: msleep delay_ms` |
| `shell_sleep` | ms | Eshell alias |
| `ESHELL_SLEEP_TIMER` | ms | Named timer id |
| `cpu_usage_timer` | ms | `show_threads_usage` periodic |
| Key debounce hwtimer | ms | `hal_key_debounce_timer_restart` |

Tick rate itself is owned by `leaf-1.1.1` (FreeRTOS config), not duplicated here.

---

## Extraction method

1. Scan printable strings for `timeout` / `watchdog` / `wdt` / `timer` / `osDelay` / `msleep`.
2. Capstone Thumb-2 on known display thread and on `movw` encodings of common millisecond periods (`0x76C`, `0xEA60`, `0x1770`, `0xBB8`, …).
3. Resolve selected string→code refs via **SRAM alias** pointers (`0x3C000000 + file_off`) when XIP literals are absent (common for TRACE-heavy UI).
4. Skim BTH for parallel WDT + BLE stack timer names.
5. Prefer **UNRECOVERED** over guessing phone-side docs (e.g. 2 s / 6 s iOS keepalive) when the M55 immediate is not proven.

Re-run:

```bash
python3 Reverse/firmware/analysis/rtos/limits/timing_watchdog/extract_timing.py
node Reverse/firmware/analysis/rtos/limits/scripts/verify-leaf.mjs leaf-1.2.1
```

---

## Honest gaps

- Most named `osTimer` objects have **no recovered period** (attr name without nearby `movw`).
- `wdt_ping_timer` period still UNRECOVERED despite high-confidence existence.
- iOS BT wait / OTA transfer / StateContext fallback / ASR / mute timeouts: named, values runtime or opaque.
- BTH entries are **presence skim only**.
- Low-confidence `movw` period clusters may serve non-timer math; do not treat as named hard limits without a binding.
