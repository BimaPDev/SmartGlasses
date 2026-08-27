# StarryNet handler / action evidence table

Firmware: `Reverse/firmware/x_1.0.12.83/platform_tester.bin` (M55 XIP `0x2c000000`).
All VAs are **string / symbol anchors** unless marked `code`. Thumb xrefs to the packed blob are empty (BES TRACE-hash); see `FIRMWARE_FINDINGS.md` §8.5.

## Legend

| Evidence | Meaning |
|---|---|
| packed | C-string in `handleSystemMsg` dispatch blob `0x194bcc`–`0x194f68` |
| TRACE | `[Launcher]MessageModel…` / method TRACE next to name |
| top | Adjacent top-level `action` token near MessageModel.cpp |
| abs | Confirmed absent in ASCII and UTF-16LE |

---

## 1. Top-level `action` → MessageModel handler

| top-level `action` | Handler (TRACE / name) | String VA | Evidence |
|---|---|---|---|
| `system` (implied; phone JSON) | `handleSystemMsg` | `0x2c194d54` | TRACE miss + packed blob; prior docs / companion JSON |
| `screenshot` | `handleScreenShotMsg` → `handleScreenShot` | `0x2c192d6c` / `0x2c195220` / `0x2c194fa8` | top + TRACE |
| `user_feedback` (official log path) | `handleGetLogMsg` → `handleGetLog` | `0x2c195498` / `0x2c195360` | TRACE + `get_glass_log` |
| `brightness_model` | `handleAutoBrightnessMsg` | `0x2c192d50` / `0x2c1943b8` | top + TRACE |
| `sport` | (sport model; adjacent token) | `0x2c192d64` | top cluster |
| `system_glass_active` | `handleGlassActive` | `0x2c192d78` / `0x2c194934` | top + TRACE |
| `system_account` | `handleMyvuLoginStatus` | `0x2c192d8c` / `0x2c19320c` | top + TRACE |
| `feature_list` | (capability advertise) | `0x2c192d9c` | top cluster |
| (phone-pad / TP) | `handlePhonePadMsg` | `0x2c192dac` | TRACE |
| (health) | `handleHealthMsg` | `0x2c192ffc` | TRACE |
| (start / open app) | `handleStartAppMsg` / `open_app` | `0x2c1933a4` / `0x2c193564` | TRACE |
| (version mismatch UI) | `handleVersionNoMatchMsg` | `0x2c1930f0` | TRACE |
| (telemetry rules) | `handleEventTracking` / `sync_event_rule` | `0x2c1932cc` / `0x2c1932b0` | TRACE |
| (weather app msg) | `WeatherModel::handleAppMsg` | `0x2c192b8c` | TRACE (not MessageModel) |

JSON shape (all paths):

```json
{"action":"<top>","data":{"action":"<inner>","value":…}}
```

---

## 2. `handleSystemMsg` packed inner `data.action` (authoritative)

Miss path: `[Launcher]MessageModel handleSystemMsg no handler for action %s` @ `0x2c194f68` (file `0x194f68`).

| data.action | file off | VA | kind |
|---|---|---|---|
| `change_dock_items` | `0x194bcc` | `0x2c194bcc` | set |
| `set_standby_position` | `0x194be0` | `0x2c194be0` | set |
| `set_wear_detection_mode` | `0x194bf8` | `0x2c194bf8` | set |
| `set_glass_sound_effect_mode` | `0x194c10` | `0x2c194c10` | set |
| `set_hear_impairment_mode` | `0x194c2c` | `0x2c194c2c` | set |
| `set_app_fast_open` | `0x194c48` | `0x2c194c48` | set |
| `set_music_tp_control_mode` | `0x194c5c` | `0x2c194c5c` | set |
| `set_image_stabilization_mode` | `0x194c78` | `0x2c194c78` | set |
| `set_image_adjustment_mode` | `0x194c98` | `0x2c194c98` | set |
| `set_language` | `0x194cb4` | `0x2c194cb4` | set |
| `set_font_mode` | `0x194cc4` | `0x2c194cc4` | set |
| `get_standby_widget_lists` | `0x194cd4` | `0x2c194cd4` | get |
| `set_standby_widget_lists` | `0x194cf8` | `0x2c194cf8` | set |
| `get_device_info` | `0x194e54` | `0x2c194e54` | get |
| `get_language` | `0x194e64` | `0x2c194e64` | get |
| `get_zen_mode` | `0x194e74` | `0x2c194e74` | get |
| `set_device_name` | `0x194e84` | `0x2c194e84` | set |
| `set_brightness_finish` | `0x194e94` | `0x2c194e94` | set/notify |
| `get_volume` | `0x194eac` | `0x2c194eac` | get |
| `set_volume` | `0x194eb8` | `0x2c194eb8` | set |
| `get_wear_detection_mode` | `0x194ec4` | `0x2c194ec4` | get |
| `get_standby_position` | `0x194edc` | `0x2c194edc` | get |
| `get_volume_stream_type` | `0x194ef4` | `0x2c194ef4` | get |
| `get_music_tp_control_mode` | `0x194f0c` | `0x2c194f0c` | get |
| `notify_privacy_expired` | `0x194f28` | `0x2c194f28` | notify |
| `notify_statement_change` | `0x194f40` | `0x2c194f40` | notify |
| `sync_clone_data` | `0x194f58` | `0x2c194f58` | sync |

**Count: 27 packed actions.** Name string `handleSystemMsg` sits inside the same band @ `0x2c194d54` with TRACE helpers (`data is null`, `action is %s`, …).

---

## 3. Method-adjacent tokens (not all in packed blob)

| Token / method | VA | Notes |
|---|---|---|
| `do_recovery` | `0x2c193720` | TRACE `MessageModel::doRecovery called` |
| `open_app` | `0x2c193564` | Used by `handleStartAppMsg` |
| `set_zen_mode` | `0x2c18a3ec` | Also NaviPage system-msg path; `setZenMode` TRACE @ `0x2c193898` |
| `get_glass_sound_effect_mode` | `0x2c193974` | Method TRACE adjacent; **not** in packed `0x194bcc–0x194f68` list |
| `setScreenBrightness` | `0x2c193bc4` | TRACE validation 0–100 |
| `setScreenOffTime` | `0x2c193a8c` | TRACE |
| `handleStandbyWidgetsChange` | `0x2c194d14` | Between widget get/set strings |
| `handleSyncCloneData` | `0x2c194af8` | Implements `sync_clone_data` |
| `handlePrivacyExpire` | `0x2c194710` | Implements `notify_privacy_expired` (`myvu_pp` / `glass_pp`) |
| `handleStatementChange` | `0x2c194a60` | Implements `notify_statement_change` |
| `req_active_state` / `req_active_info` / `active_time` | `0x2c194920`… | Glass activation queries near `handleGlassActive` |
| `privacy_agreement` / `transmission_agreement` | `0x2c194a34` / `0x2c194a48` | Statement change payloads |

---

## 4. Screenshot / log models (non-`system`)

| Inner action | Top-level | Handler | VA |
|---|---|---|---|
| `get_glass_screenshot` | `screenshot` | `handleScreenShot` | `0x2c194580` |
| `show_screenshot_save_result` | `screenshot` | `handleScreenShotResult` | `0x2c1952f8` / `0x2c194620` |
| `get_user_feedback` | (feedback) | prep for log send | `0x2c1945ac` |
| `get_glass_log` | `user_feedback` | `handleGetLog` | `0x2c195528` |

ShareAbility transfer enums (zip payload): `SENDER_SYN` `0x2c02cf58`, `SENDER_DATA` `0x2c02cf30`, `SHARE_STREAM_TYPE__*` @ `0x2c02cf6c+`. Source: `xjxr_starrynet/.../file_transfer.c`.

---

## 5. Absences (do not claim)

| Needle | Result |
|---|---|
| `set_demo_mode` | **abs** ASCII + UTF-16LE |
| `get_demo_mode` | **abs** |
| `screen_record` / `get_glass_screen_record` | **abs** |
| `toggle_wifi` / `set_wifi` | **abs** (no Wi-Fi stack) |

Present but **not** the shop-demo BLE API: `launcher_standby_demo_mode` @ `0x2c197a50` (local StandByView flag).

Companion About easter egg still *sends* `set_demo_mode`; Air falls through to the miss path above.

---

## 6. AncsManager / SmartLife (StarryNet-adjacent)

| Symbol | VA | Role |
|---|---|---|
| `AncsManager.cpp` | `0x2c18ed1f` | Source path |
| `AncsManager` / `~AncsManager` | `0x2c18f2d8` | Ctor/dtor TRACE tags |
| `registerAncs` | `0x2c18ee08` | Bond / service register |
| `QUERY_ANCS_SERVICE_STATE` | `0x2c18ee2c` | Phone query action token |
| `handleAncsAddMessage` | `0x2c18f564` | Notification add |
| `handleAncsRemoveMessage` | `0x2c18f4f0` | Notification remove |
| `handleAncsNameMessage` | `0x2c18f5e0` | App name resolve |
| `handleAncsDetailMessage` | `0x2c18f7b4` | Title/body update |
| `SYNC_SMART_REMINDER_CONFIG` | `0x2c18df48` | Smart reminder config sync |

---

## 7. StarryNet stack surface (non-JSON)

| Symbol / path | VA / note |
|---|---|
| `register_starry_net` | `0x2c189990` |
| `Starry.StarryNetMessageData` | `0x2c0309c8` — protobuf envelope |
| MessageType `BUSINESS` / `NOTIFY` | `0x2c030a84` / `0x2c030ac8` |
| `StarryNetApp.cpp` | `0x2c16def2` — LVGL connect UI |
| `xjxr_starrynet_interface.c` | BLE/SPP SDK glue |
| `message_manager.c` / `receive_channel.c` / `send_channel.c` | Payload channels |
| `FUN_2c0282ee` | **code** VA — `xjxr_starrynet_test` eshell body (Ghidra decomp) |

---

## 8. Evidence sources

1. Direct C-string scan of `platform_tester.bin` (this leaf).
2. `Reverse/FIRMWARE_FINDINGS.md` §2 / §8.5; `Reverse/STAR_AIR_WRITEUP.md` §3.
3. `Reverse/tools/fw_disasm.py`, `fw_leftovers2.py`, `fw_movw_raw.py` (zero MOVW into action blob).
4. `Reverse/firmware/export/1.0.12.83/strings/categorized/ble_actions.txt`.
5. Ghidra decomp `functions/m55/decomp/2c0282ee_FUN_2c0282ee.c` for StarryNet test code VA.
