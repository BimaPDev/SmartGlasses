# Halliday xs_vendor BLE protocol — phone ↔ glasses (1.00_2601211113)

**Leaf:** 1.12  
**Owns:** `Reverse/firmware/Halliday/analysis/full_rev/xs_vendor/**`  
**Binary:** `HallidayOfficialOTA.bin` → inner `app.bin` (1,662,592 B)  
**Load base:** **`0x10000000`** (Thumb XIP; string VA = `0x10000000 + app.bin file_off`)  
**Primary sources:**  
- `export/official/strings/categorized/halliday.txt`  
- `export/official/strings/categorized/ble_bluetooth.txt`  
**Manifest:** `manifest.json`

## Verdict

Halliday’s companion-app channel is **not** StarryNet JSON. It is a proprietary **vendor BLE stream** implemented in `xs_app/xs_ble_service/xs_vendor_ble_stream.c`, framing every packet as **`CMD` + `KEY` + payload** with an **`0x5F` sync byte**, length, and **Modbus-style CRC-16 (`0xA001`)**. Phone → glasses traffic is parsed by `ble_rx_data` / `FUN_10050294`, dispatched through **`vendor_ble_rx_event_proc`** (`FUN_100449d8`), and glasses → phone replies go through **`ble_send_to_app`** / **`ble_send_to_app2`** (`FUN_100231e4` → `FUN_10050808`). A parallel **`ble_ring_stream.c`** LE service handles the ring accessory; bulk OTA/file work reuses the same stream with dedicated file-transfer helpers.

## 1. xs_app placement

| Item | File off → VA | Role |
|---|---|---|
| `xs_app_init` | `0x14e328` → `0x1014e328` | Halliday application bring-up |
| `xs_vendor_ble_stream.c` | `0x15caad` → `0x1015caad` | WEST_TOPDIR source path for vendor GATT/stream |
| `vendor_app_init ble_stream: %p` | `0x15c92b` → `0x1015c92b` | Binds vendor stream at init |
| `vendor app ble stream open success/failed` | `0x15c862` / `0x15c83d` | Connection lifecycle |
| `APP BLE connection/disconnection` | `0x15c8cf` / `0x15c8e9` | Link telemetry |
| `Halliday Glasses` | `0x182856` → `0x10182856` | Device branding (classic BT name family) |

`xs_app_init` sits above translate, msg/notify, remind, AI, prompter, password, and settings views — all of which can be driven remotely via vendor CMD/KEY handlers.

## 2. End-to-end architecture

```
iPhone / Android Halliday app
  │  GATT write/notify on vendor characteristic
  ▼
ble_stream_init / ble_stream_open          (xs_vendor_ble_stream.c)
  │  stream_ble_connect_cb, ble_add_stream, ble_data_read
  ▼
ble_rx_data  (FUN_10050294 @ 0x10050294)
  │  validate 0x5F header, length, CRC-16
  │  log: BLE RECV: CMD:0x%x, KEY:0x%x @ 0x15a332
  ▼
vendor_ble_rx_event_proc  (FUN_100449d8 @ 0x100449d8)
  │  switch(CMD) → _ble_rx_* handler
  ├─ settings: _ble_rx_set_command, language, time, password, zoom
  ├─ voice/AI: _ble_rx_voice_ai, _ble_rx_voice_transl, _ble_rx_stt_content
  ├─ nav/sensor: _ble_rx_navi_*, _ble_rx_sensor_command
  ├─ factory: _ble_rx_fctory_command, _ble_rx_shipping_mode_command
  └─ ring: _ble_rx_ring_command (CMD 0xFC)
  ▼
ble_send_to_app / ble_send_to_app2  (FUN_100231e4)
  │  FUN_10050808 builds 0x5F frame
  │  log: BLE SEND: CMD:0x%x(%d), KEY:0x%x(%d),len:%d @ 0x15ce75
  ▼
bt_manager_ble_send_data → phone
```

Classic **`Halliday SPP`** (`0x182867`) and **`sppble_stream`** handle OTA/bulk paths; vendor BLE is the **interactive command surface** for settings, AI, translate, prompter, navigation, notifications, and file sync.

## 3. Wire format (decomp-confirmed)

Recovered from `FUN_10050808` (TX) and `FUN_10050294` (RX):

| Offset | Field | Notes |
|---|---|---|
| 0 | sync | **`0x5F`** — invalid sync logs `Invalid BLE cmd` and drains RX |
| 1 | flags | Low nibble from internal message type; high bits encode transfer mode |
| 2–3 | length | Payload length (big-endian swap in firmware) |
| 4–5 | CRC-16 | **`FUN_100501c4`** — CRC-16/MODBUS polynomial **`0xA001`** |
| 6–7 | seq | Monotonic sequence (`0x04`/`0x08` types reset or increment) |
| 8+ | body | `[CMD:1][KEY:1][payload…]` passed to dispatch |

TX rejects frames with total size **≥ 0x7F9** bytes. RX reassembles multi-chunk writes into a **0x1000-byte** reassembly buffer before calling dispatch.

Logging anchors:

- **RX:** `BLE RECV: CMD:0x%x, KEY:0x%x` @ `0x15a332`
- **TX:** `BLE SEND: CMD:0x%x(%d), KEY:0x%x(%d),len:%d` @ `0x15ce75`
- **TX (msg path):** `BLE SEND: CMD:0x%x, KEY:0x%x` @ `0x150d8b` (`ble_send_to_app2` in `message_reply_view.c`)

## 4. CMD dispatch surface (`vendor_ble_rx_event_proc`)

`FUN_100449d8` switches on **`param_1[0]` (CMD)**. Recovered cases (partial — high CMD values are factory/extended):

| CMD | Handler / evidence | Domain |
|---|---|---|
| `0x02` | passthrough | Reserved / keepalive |
| `0x03` | `_ble_rx_navi_command` | Turn-by-turn navigation state/info |
| `0x0B` | screen/view control | Drives active `view_id` stack |
| `0x0C` | `_ble_rx_set_transfer` / file path | File push to NAND (`ble_start_write_file`) |
| `0x0D` | notify enable batch | `_ble_rx_set_notify_enable` |
| `0x0E` | query helper | `ble_to_query_app_connected_state` |
| `0x10` | ACK template | Empty-body response via `FUN_100506fc` |
| `0x11`–`0x14` | settings block | Language, pairing UID, password sync |
| `0x30`–`0x44` | `_ble_rx_set_command` subtree | System time, reminders, TP mode, guide, zoom |
| `0xFB` | `_ble_rx_voice_control_command` | Volume / voice shortcuts |
| `0xFC` | `_ble_rx_ring_command` | Ring pairing, battery, gesture config |
| `0xFD` | `_ble_rx_function_command` | Translate / prompter / PD adjust (`_ble_ctrl_*`) |
| `0xFE` | `_ble_rx_fctory_command` | Factory: BT name, PPT, TP enable, shipping mode |
| default | `Invalid BLE cmd = 0x%x` @ `0x15a34f` | Rejects unknown CMD |

Within CMD **`0xFD`**, KEY selects feature mode (translate `_ble_ctrl_translate`, prompter `_ble_ctrl_prompter`, pupillary-distance `_ble_ctrl_pd`). Voice subtree uses KEY-specific handlers: `_ble_rx_voice_record`, `_ble_rx_voice_transl`, `_ble_rx_voice_ai`, `_ble_rx_voice_assistant`, `_ble_rx_stt_content`, `_ble_rx_ai_loading_progress`.

## 5. Glasses → phone TX helpers

| Symbol | File off → VA | Role |
|---|---|---|
| `ble_send_to_app` | `0x15cf10` → `0x1015cf10` | Primary TX API |
| `ble_send_to_app2` | `0x1510c2` → `0x101510c2` | Message-reply path; checks `vendor_not_init` |
| `send_result` | `0x15cf04` → `0x1015cf04` | Structured result wrapper |
| `ble_send_message` | `0x15b6d0` → `0x1015b6d0` | SMS-style `number` + `msg` payload |
| `ble_to_app_ring_state` | `0x15b6e1` | Ring battery % / state upstream |
| `ble_to_app_translate_config` | `0x15b684` | Translate language config sync |
| `ble_ai_state` / `ble_ai_poke_to_app` | `0x15b6a0` / `0x15b4dc` | AI session lifecycle |
| `ble_to_app_ota_state` | `0x15a4a3` | OTA progress to companion |

`ble_send_to_app2` (`FUN_100231e4`) reads **CMD** from `param_1[0]`, **KEY** from `param_1[1]`, payload length from `param_1[8]`, verifies vendor stream readiness via `FUN_1004f6cc`, then calls `FUN_10050808`.

## 6. File transfer over vendor BLE

Same stream carries NAND file operations:

| Symbol | File off | Role |
|---|---|---|
| `ble_start_write_file` | `0x15d0bc` | Begin receive; logs `type`, `file_name`, `path`, `file_len` |
| `ble_end_write_file` | `0x15cf46` | Finalize; mutex/semaphore guarded |
| `ble_delete_file` / `ble_clear_files` | `0x15d2bb` / `0x15aaec` | Remote file management |
| `ble_file_rdwr` | `0x15d58d` | Read/write worker |
| `ble_file_mutex Deadlock` | `0x15cf70` | Concurrency guard |

Prompter and cheatsheet content can arrive via `_ble_rx_txt_promp`, `_ble_rx_local_promp`, `_ble_rx_sync_cheatsheet`, `_ble_rx_text_command`.

## 7. Ring accessory (separate LE stream)

`ble_ring_stream.c` @ `0x15d876` implements a **second** `ble_stream_*` stack:

- `ble_ring_service`, `ble_ring_read_thread`, `ring_bleq_cfg_changed`
- `ble_send_ring_state`, `ble_send_ring_info` (SN + MAC upstream)
- `_ble_rx_ring_command` (CMD **`0xFC`**) for phone-initiated ring ops

Connection summary string: `>>>ble:%s,bt:%s,ring:%d` @ `0x15838c`.

## 8. Related leaves and absences

| Leaf | Overlap |
|---|---|
| 1.4 `ble_connectivity` | Dual-BLE, ANCS/AMS, `bt_manager`, SPP — transport below xs_vendor |
| 1.8 `sensors_health` | `_ble_rx_sensor_command`, `_ble_rx_sensor_param`, `send_result` |
| 1.3 `ui_launcher` | Views driven by `_ble_rx_set_button_shortcut_view`, password, guide |

**Verified absences (this build):**

- No StarryNet / `handleSystemMsg` symbols
- No published GATT UUID table in strings — UUID recovery requires ATT capture
- CMD enum above is **decomp-partial**; companion APK may define additional CMD values

## 9. Next recovery steps

1. ATT/GATT capture during companion pairing — recover service/characteristic UUIDs for `xs_vendor_ble_stream`.
2. Complete CMD/KEY enum extraction from `FUN_100449d8` switch tables + companion APK decompile.
3. Correlate `_ble_rx_set_command cmd:0x%x` log sites with setting IDs in `setting_view_v330.c`.
4. Fuzz CRC/seq edge cases on `FUN_10050294` reassembly path (`----ble RX error----` @ `0x15ce3a`).
