# BLE / StarryNet command surface — Star Air 1.0.12.83

Leaf `1.2.1` ownership: `Reverse/firmware/analysis/full_rev/ble_starrynet/**`.

This note maps the **complete StarryNet JSON action surface** on the M55
`platform_tester.bin` image: top-level `action` models, inner `data.action`
handlers, ShareAbility file transfer, ANCS / SmartLife adjacency, and confirmed
absences. Companion tables with every VA: `starrynet_handlers.md`. Symbol
manifest: `manifest.json`.

## 1. Image and addressing

| Item | Value |
|---|---|
| Binary | `Reverse/firmware/x_1.0.12.83/platform_tester.bin` |
| Size | 6,771,708 bytes |
| XIP base | `0x2c000000` (BEST1600 M55 FLASH) |
| `.rodata` alias | `0x3c000000 + file_off` (some literal pools) |
| Primary source | `…/Launcher/model/MessageModel.cpp` @ string `0x2c192dc0` |
| Stack | `xjxr_starrynet` (snif, message channels, protobuf, file transfer) |

Ghidra export: `Reverse/firmware/export/1.0.12.83/functions/m55/`. Prior
write-ups: `Reverse/FIRMWARE_FINDINGS.md` §2 / §8.5, `Reverse/STAR_AIR_WRITEUP.md` §3,
`Reverse/tools/fw_*.py`.

## 2. End-to-end call graph (evidence edges)

```
Phone / ring companion
  │  BLE SPP / StarryNet BUSINESS message
  ▼
xjxr_starrynet  (snif_core.c, message_manager.c, receive_channel.c)
  │  protobuf StarryNetMessageData { senderPkg, receiverPkg, message, messageType }
  │  messageType ∈ { BUSINESS, NOTIFY }
  ▼
Launcher MessageModel  (LVGL app page model — RTOS thread context)
  │  parse JSON {"action","data":{"action","value"}}
  ├─ action → model method   (handleSystemMsg, handleScreenShotMsg, …)
  └─ data.action → packed strcmp / positional walk
        ▼
   LVGL UI / prefs / ShareAbility / AncsManager / domain models
```

**Call-graph edge into StarryNet/LVGL/RTOS (required):** JSON arrives on the
StarryNet message channel (`xjxr_starrynet/.../message_manager.c`,
`receive_channel.c`); `register_starry_net` (`0x2c189990`) ties the stack into
launcher adapters; MessageModel lives under LVGL
`Pages/Launcher/model/MessageModel.cpp` and TRACE-logs with `[Launcher]` before
mutating LVGL prefs / views. Eshell/RTOS test surface:
`xjxr_starrynet_test` → Ghidra **code** `FUN_2c0282ee` @ `0x2c0282ee`.

**TRACE / string evidence path (required):** miss path
`[Launcher]MessageModel handleSystemMsg no handler for action %s` @
`0x2c194f68` (file `0x194f68`), immediately after the packed action blob.

## 3. JSON contract

StarryNet delivers a UTF-8 JSON object inside a BUSINESS payload:

```json
{
  "action": "<top-level model>",
  "data": {
    "action": "<inner handler key>",
    "value": <number|string|object|array>
  }
}
```

- Top-level `action` selects a **MessageModel** (or sibling model) method.
- Inner `data.action` is matched against a **packed C-string table** for
  `handleSystemMsg`, or a smaller per-model list (`get_glass_screenshot`, …).
- BES TRACE-hash means almost no 32-bit pointer xrefs to those strings
  (verified: zero abs / MOVW+MOVT hits into `0x194000–0x198000`). The packed
  blob remains the authoritative dispatch list for `system`.

## 4. Top-level models

Recovered from the MessageModel string cluster (`0x2c192d50+`) and TRACE names:

| Top-level token | Routes to | Notes |
|---|---|---|
| `system` | `handleSystemMsg` | Packed inner table §5; phone About demo uses this |
| `screenshot` | `handleScreenShotMsg` | Inner `get_glass_screenshot` |
| `user_feedback` | `handleGetLogMsg` | Official glass-log path |
| `brightness_model` | `handleAutoBrightnessMsg` | Sunrise/sunset / auto bri |
| `sport` | sport model | Token adjacent in same cluster |
| `system_glass_active` | `handleGlassActive` | Activation / active_time |
| `system_account` | `handleMyvuLoginStatus` | accountId / login |
| `feature_list` | feature advertise | Token in cluster |
| (unnamed phone-pad) | `handlePhonePadMsg` | TP / gestureMode |
| (health) | `handleHealthMsg` | calories / health JSON |
| (start app) | `handleStartAppMsg` | `open_app` + pkg + launchMode |
| (version) | `handleVersionNoMatchMsg` | Force-upgrade UI |
| (tracking) | `handleEventTracking` | `sync_event_rule` |

Weather uses `WeatherModel::handleAppMsg` (same launcher TRACE family, not
MessageModel).

## 5. `handleSystemMsg` packed inner actions

File window `0x194bcc`–`0x194f68`, VA `0x2c194bcc`–`0x2c194f68`.
Name tag `handleSystemMsg` @ `0x2c194d54`.

**Gets (9 packed):**
`get_device_info`, `get_language`, `get_zen_mode`, `get_volume`,
`get_wear_detection_mode`, `get_standby_position`, `get_volume_stream_type`,
`get_music_tp_control_mode`, `get_standby_widget_lists`
(+ method-adjacent `get_glass_sound_effect_mode` @ `0x2c193974`, **not** in
the packed miss-path list).

**Sets / notifies / sync (18 packed):**
`set_device_name`, `set_volume`, `set_language`, `set_font_mode`,
`set_standby_position`, `set_wear_detection_mode`, `set_glass_sound_effect_mode`,
`set_hear_impairment_mode`, `set_app_fast_open`, `set_music_tp_control_mode`,
`set_image_stabilization_mode`, `set_image_adjustment_mode`,
`set_standby_widget_lists`, `change_dock_items`, `set_brightness_finish`,
`notify_privacy_expired`, `notify_statement_change`, `sync_clone_data`.

**Method-adjacent (may be matched via other strcmp sites / helpers):**
`do_recovery`, `open_app`, `set_zen_mode`, `setScreenBrightness`,
`setScreenOffTime`, `system_glass_active`, `system_account`, `feature_list`.

Full offset table: `starrynet_handlers.md` §2–3.

### Device-info fields (response keys near `sendDeviceInfoMsg`)

`system_mode`, `brand`, `serial_number`, `wifi_mac`, `bluetooth_addr`,
`total_storage`, `available_storage` — string anchors around `0x2c193684`.

## 6. Screenshot and glass log

### Screenshot — implemented

```
{"action":"screenshot","data":{"action":"get_glass_screenshot",…}}
  → handleScreenShotMsg → handleScreenShot
```

Refuse paths (TRACE @ `0x2c194fec+`): screen off, business app running, UUID
alloc fail, malloc / encode fail. Success encodes framebuffer, then rides
ShareAbility (`SENDER_SYN` → ack → `SENDER_DATA`). UI copy + `audio/screenshot.aac`
are in-image. Result callback: `show_screenshot_save_result` /
`handleScreenShotResult`.

### Glass log — implemented

```
{"action":"user_feedback","data":{"action":"get_glass_log",…}}
  → handleGetLogMsg → handleGetLog → user_feed_back.log (ASL flash)
```

Same ShareAbility split. Phone debug panel gates on companion privilege.

## 7. Absences — do not invent

| Claim | Binary fact |
|---|---|
| `set_demo_mode` / `get_demo_mode` | **Absent** ASCII and UTF-16LE in 1.0.12 M55 (and prior findings: 1.0.7 + BTH) |
| Shop-demo BLE API | Companion still *sends* `system`/`set_demo_mode`; Air hits **no handler** |
| Local “Demo Mode Open” | `launcher_standby_demo_mode` @ `0x2c197a50` — StandByView flag only |
| `screen_record` / `get_glass_screen_record` | **Absent** |
| `toggle_wifi` / `set_wifi` | **Absent** (no Wi-Fi stack in this image) |

## 8. AncsManager (iOS notifications)

Source: `Pages/SmartLife/manager/AncsManager.cpp` (`0x2c18ed1f`).
Symbols: `registerAncs`, `QUERY_ANCS_SERVICE_STATE`, `handleAncsAddMessage`,
`handleAncsRemoveMessage`, `handleAncsNameMessage`, `handleAncsDetailMessage`,
`handleBleConnectedMessage`, `handleConfigMessage`, `handleNotificationMessage`.
Filters TRACE for iOS call / WhatsApp / Telegram call spam. Smart reminder
config token: `SYNC_SMART_REMINDER_CONFIG` @ `0x2c18df48`.

ANCS is StarryNet-adjacent (phone ↔ glasses notification bridge), not part of
the `handleSystemMsg` packed table.

## 9. StarryNet stack beyond JSON actions

| Layer | Evidence |
|---|---|
| Protobuf | `Starry.StarryNetMessageData`, MessageType BUSINESS/NOTIFY |
| Encrypt | `starry_link_encrypt.pb-c.c`, `xr_starry_encrypt_helper.c` |
| Channels | `message_channel.c`, `spp_channel.c`, `send_channel.c`, `receive_channel.c` |
| File / OTA share | `file_transfer.c`, `SHARE_STREAM_TYPE__*` enums @ `0x2c02cf6c` |
| UI | `StarryNetApp.cpp`, `StarryNetAppService.cpp`, `StarryNetViewHandler.cpp`, `ConnectGuideViewV2.cpp` |
| Adapters | `StarryNetAppAdapter`, music `StarryNetAdapter`, navi `StarryNetManager` |
| Test / eshell | `xjxr_starrynet_test`, `enable_starry_net_log`, bond/SPP helpers; code `0x2c0282ee` |
| Bond telemetry | `[STARRYNET_LOG] ble_bonded = %d, starry_net_bonded = %d` |

OTA of the two BES bins also rides StarryNet file transfer (see leaf 1.2.3);
this leaf only pins the share-stream enum surface.

## 10. Why Thumb method VAs are missing

Raw MOVW/MOVT scan (`fw_movw_raw.py`): 1142 pairs, **zero** targeting
`0x2c19xxxx` / `0x3c19xxxx` action strings. Absolute LE32 pointer hunt: empty.
Ghidra `getReferencesTo` on `handleSystemMsg` / miss path: empty.
Handlers are recovered from **positional packed strings + TRACE text**, not
from classical xrefs. Manifest entries therefore use **string VAs** as stable
anchors, plus one recovered **code** VA for the StarryNet test function.

## 11. Practical probe notes

1. Any unknown `system` / `data.action` → expect TRACE
   `handleSystemMsg no handler for action %s`.
2. Do not expect `set_demo_mode` to flip shop demo on Air / XGA010C.
3. Screenshot and log need a ShareAbility receiver on the phone/SDK side.
4. Factory / MMI is **not** reachable via this BLE table (BTH key hold →
   mailbox); see leaf 1.2.2.

## 12. Artifacts produced by this leaf

| File | Role |
|---|---|
| `BLE_STARRYNET.md` | This overview |
| `starrynet_handlers.md` | Action tables with VA evidence |
| `manifest.json` | ≥3 `{va,name,role}` MessageModel / StarryNet anchors |
| `GATES.md` | Leaf acceptance ledger mirror |

## 13. Pass record

1. **Implement** — extracted packed blob, MessageModel TRACE set, Ancs/StarryNet
   stack strings, absences.
2. **Expert pass** — separated packed vs method-adjacent; flagged
   `get_glass_sound_effect_mode` as non-packed; kept `set_demo_mode` absent.
3. **Defect hunt** — verified zero code xrefs; aligned counts with
   `ble_actions_extracted.md` (27 packed); cross-checked FIRMWARE_FINDINGS §8.5.
4. **Polish** — call-graph edge + TRACE path explicit for G3; manifest roles;
   link ShareAbility enums to file_transfer.c.
