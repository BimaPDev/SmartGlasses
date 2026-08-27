# Ring accessory — BLE bond / OTA / gesture

**Firmware:** `x_1.0.12.83/platform_tester.bin` (M55 / BEST1600 XIP **`0x2C000000`**)  
**Companion:** `best1600_watch_bth.bin` (BTH M33 @ `0x14000000`) — HOGPRH GATT server + ring bond/conn **resources**  
**.rodata alias:** `0x3C000000 + file_off` (same as other M55 leaves)

Star Air's finger ring ("Unicron") is a BLE HID-over-GATT peripheral. Glasses run a **split stack**:

| Layer | Image | Source paths (strings) |
|---|---|---|
| HOGPRH GATT host | BTH | `…/bt/hogprh/xr_app_hogprh_server.c`, `xr_hogprh_server.c` |
| Bond / conn resources | BTH | `…/ring_m33/ring_bond_res.c`, `ring_conn_res.c` |
| Scan / bond / conn FSM | M55 | `…/ring1/ring_m55/ring_{scan,bond,conn}.c` |
| HOGP client + key/batt | M55 | `…/unicron_ring/xr_hogprh_unicron.c` |
| Ring DFU | M55 | `…/ring1/ring_ota/ring_ota.c` |
| App manager | M55 | `…/RingManager/ring_manager.c`, `ring.c`, `ring_ota_journal.c` |
| LVGL UI / services | M55 | `…/Pages/Ring/**`, `RingService.cpp`, `RingOtaManager.cpp` |
| Gesture → input | M55 | `…/xjxr_input/xjxr_touchpad_unicron.c` |

**Readable reconstruction:** [`ring_reconstructed.c`](ring_reconstructed.c)  
**VA map:** [`manifest.json`](manifest.json)

---

## Evidence method

BES `TRACE` / hash logging means almost all C `__func__` / format strings in the early StarryNet cluster (`file 0x33E00`–`0x35200`) have **zero** absolute / MOVW-MOVT / `0x3C` litpool xrefs — same pathology as `STAR_AIR_DOSSIER.md` and leaf 1.3.2.  

Recovered **Thumb entry points** for the LVGL Ring page/service band by:

1. Scanning the image for `0x3C…` litpool words whose targets contain `ring` / `Ring` / `unicron`.
2. Walking back to `push {…,lr}` (`0xB5xx` / `0xE92D`).
3. Capstone disasm + Ghidra `Decomp.java` on those entries (cluster **`0x2C5C9xxx`–`0x2C5CDxxx`**).

StarryNet API surface (names, OTA enums, `[RING_STATE]` / `[RING_OTA]` / `[RING_BATT]` formats) is taken **only** from those rodata strings — Thumb VAs for `xr_ring_*` / `ring_ota_*` remain TRACE-opaque in this image (documented as such; not invented).

---

## Architecture

```
Ring (BLE Unicron)
        │  HOGP / custom FF10 NTF
        ▼
BTH  xr_hogprh_*_server  ──INTERSYS──►  M55  xr_hogprh_unicron_{data,wakeup}_handler
        │                                      │
        │  XR_RING_AUTO_CONN / bond_res         ├── key_event → xjxr_touchpad_unicron (bt_ring_event_cb)
        │                                      ├── batt     → [RING_BATT] → ring_battery_state_cb
        │                                      └── algo/ver → ring_algo_ready_cb / ring_version_cb
        ▼
M55 ring_m55:  scan → bond → connect / auto_conn
        │
        ▼
ring_manager.c  (IDLE|SCAN|CONNECTING|… msg pool + clients)
        │
        ├── RingService.cpp / RingOtaManager.cpp
        └── LVGL Pages/Ring/*  (GuideSearch → RingList → Connecting → ConnectedViewV1 …)
```

Cross-core edge (BTH string evidence):  
`%s send XR_RING_AUTO_CONN to M55.` in `ring_conn_res.c` (@ BTH `0x14135A58` for the token `XR_RING_AUTO_CONN`).

M55 TRACE sink used by Ring C++: **`bl 0x2C62C82C`** (level, tag, line, file, fmt…) — seen in Capstone at `ViewController` / `RingService` / `RingOtaManager` sites. Registry helper **`0x2C5E33F0`** appears on the `LV_RING_*` path (`ConnectedViewV1` @ `0x2C5CBC30`).

---

## Bond / connection FSM (`ring_bond.c` / `ring_conn.c`)

String-backed states and guards (M55 rodata `0x2C034C54`–`0x2C03502C` region):

| API / log | Role |
|---|---|
| `xr_ring_scan_{start,stop,result}` | BLE scan for Unicron (`ring_5648` success banner @ `0x2C02A5E4`) |
| `xr_ring_{set,get,init}_bond_device`, `xr_ring_get_bond_device_name` | Persist bonded BD_ADDR / name |
| `xr_ring_bond_state`, `xr_ring_remove_bond` | Bond query / unbond (`has not bond info…`) |
| `xr_ring_connect` / `disconnect` / `auto_conn` / `auto_conn_cancel` | Connection |
| `xr_ring_get_conn_state` / `xr_ring_connect_state` | Conn state publish |
| `set_ring_ready_state` + `ntf ring ready to ring app` | Algo-ready gate |
| `[RING_STATE] state[%d]->[%d]` | Conn FSM transition log |
| `current state is connecting/ubinding` | Re-entrancy guards |
| `power off charging or high temp, no need connect ring` | Power/temp veto (`xr_ring_set_temp_state`) |

`ring_manager.c` mirrors this for the UI: must be **IDLE** to start scan/connect; **SCAN** to select; rejects connect while connecting / unbinding; `ring_manager_remove_bond` → `ring remove bond failed` on error. Client callbacks: `ring_{scan,connect,bond,battery,modify_name,ready,algo_ready,version,ota_*}_cb`.

---

## OTA path (`ring_ota.c` + `RingOtaManager.cpp`)

### Protocol enums (string table @ `0x2C034560`–`0x2C0345B4`)

| Tag | Meaning |
|---|---|
| `ROPE_START` / `ROPE_ENABLE` / `RPOE_QUERY` | Request / part types |
| `ROSE_IDLE` → `ROSE_ENABLE` → `ROSE_QUERY` → `ROSE_PACKET` → `ROSE_RESET` | Local OTA FSM |
| `RORE_OTA_ENABLE_{FAIL,SUCCESS}` | Enable results |
| `RING_OTA_RESULT_{SUCESS,FAILE}` | Terminal results (typos in binary) |

Handlers named in-image: `ring_ota_{start,cancel,set_state,enable,query,packet,reset}_request`, `ring_ota_state_handle_{packet,query,reset}`, `ring_ota_result_handle[_query]`, `ring_ota_util_gen_crc{16,32}`, `ring_ota_{register,unregister}_cb`, `ring_ota_info_{init,clear}`, `ring_ota_notify`, `ring_ota_request_pre_check`.

Progress TRACE forms: `[RING_OTA] ota progress[%d%%]` / `[completed!]` / `[fail!]` / `[reset!]`; CRC compare `local bin crc32[%u], ring crc32[%u]`.

LVGL side: `RingOtaManager.cpp` logs package id **`com.upuphone.star.ring.ota`**; confirmed code @ **`0x2C5CC130`** (litpool → that string + path). Journal persistence: `ring_ota_journal_{read,write,clear,register}` (`NORFLASH_API_OK` assert). Phone/channel: `XRM_RING_OTA`, `iot_ring_ota`.

---

## Gesture / key path (`xr_hogprh_unicron.c` → `xjxr_touchpad_unicron.c`)

Unicron HOGP client (M55):

- `xr_hogprh_unicron_data_handler` / `xr_hogprh_unicron_wakeup_handler`
- Logs: `%s key_event val:`, `%s data_type[%d]`, `%s batt val[%d]`, `%s modify_name state[%d]`, `%s recv algo complete`, `%s recv version info`
- Battery gate: `[RING_BATT]` requires connected + algo ready + registered cb before `ntf batt to app!`
- Name rules: length **1…30**; reject if equal to current

Input bridge (`xjxr_touchpad_unicron.c`):

- `xjxr_touchpad_unicron_init.`
- `bt_ring_event_cb: [%x, %x, %x]` — validates BT ring key event
- Debounce: `bt ring key single tap is debounced after event single pressure.`
- Screen-off intercept: `current is screen off, and this event will be intercepted.`
- Related toast string (RingManager UI): `bt unicron pressure key event has processed.`

BTH HOGP server complements this with `xr_hogprh_{batt,report,device_info,user_ff10_data}_*` and `xr_hogprh_unicon_{connect,disconnect}` (note spelling `unicon` in BTH).

---

## Confirmed M55 Thumb VAs (LVGL Ring band)

| Semantic name | VA | Evidence |
|---|---|---|
| `ViewController_ring_connect_state_callback` | `0x2C5CA080` | Litpools: `ViewController::ring_connect_state_callback`, `ViewController.cpp`; TRACE lines `0x472`/`0x476`/`0x479` |
| `RingOtaManager_handle_ota_list` | `0x2C5CC130` | Litpools: `com.upuphone.star.ring.ota`, `RingOtaManager.cpp` line `0x64F` |
| `ConnectingView_connect_result` | `0x2C5CB758` | `ring connect succeed`, `ConnectingView → ConnectedViewV1`, `GuideSearchView.cpp` |
| `ConnectedViewV1_set_lv_ring_unconnect` | `0x2C5CBC30` | `set LV_RING_UNCONNECT` / `UNCONNECTED`; calls registry `0x2C5E33F0` with ids `0x1050`/`0x1051` |
| `RingService_sync_unicron_update_info` | `0x2C5CC710` | Litpools: `sync_unicron_update_info`, `check_unicron_update`, `RingService.cpp`, `onRingBatteryEventListener` |
| `RingService_onRingBondEventListener` | `0x2C5CD118` | `onRingBondEventListener`, `isSingleUnbound`, `updateRingMacAddr` |
| `Ring_stop_scan_on_disappear` | `0x2C531C44` | `ring app will disappear, stop scan` |

Ghidra export: `analysis/ghidra_decoder/decomp_ring_leaf.txt` (+ `decomp_ring_leaf2.txt`).

---

## Call-graph edges (evidence)

1. **LVGL → TRACE/RTOS:** Ring C++ methods `bl 0x2C62C82C` (TRACE) and `bl 0x2C5E33F0` (string registry) — Capstone @ `0x2C5CBC30`.
2. **StarryNet → app:** `ring_manager_*` + `ring_*_cb` names sit beside `xjxr_ring_get_bond_device = NULL` assert — manager wraps StarryNet `xr_ring_*` APIs (string adjacency + API naming; Thumb sites TRACE-opaque).
3. **BTH → M55:** `send XR_RING_AUTO_CONN to M55` / `BLE_MASTER[Ring]` — INTERSYS auto-reconnect kick from BTH `ring_conn_res.c`.

---

## Test / factory hooks (M55 strings)

`test_ring_{register,scan_start,scan_stop,conn,disconnect,remove_bond,get_version,auto_conn_cancel,get_conn_state,get_bond_device,modify_name}`, `test_xr_ring_ota`, `test_ring_ota_{cb,file_cb}`, `xr_hogprh_unicron_{battery,key_event,modify_name}_test`, `xjxr_ring_{scan_result,connect_state,bond_state,ready}_test`.

---

## Limits (honest)

- `xr_ring_*` / `ring_ota_*` / `ring_manager_*` **Thumb entry VAs** not bound: 0 abs / MOVW / `0x3C` litpool refs across `platform_tester.bin` (measured). Reconstruction uses API/FSM from strings + confirmed LVGL callers.
- HOGP ATT UUIDs beyond log token `FF10` not recovered from this leaf's evidence.
- Do not treat `__func__` string VAs (e.g. `0x2C034ACC` `ring_ota_start`) as code pointers.
