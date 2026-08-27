# BTH M33 — Star Air Bluetooth / power MCU image

**Firmware:** `x_1.0.12.83/best1600_watch_bth.bin`  
**Load base:** `0x14000000` (BinaryLoader, see `Reverse/firmware/ghidra/import_bth.sh`)  
**Processor:** `ARM:LE:32:v8-m` (Cortex-M33 on BES2700 / Best1600 BTH core)  
**Image size:** `0x1476BC` (1,341,116 bytes)  
**Ghidra project:** `Reverse/firmware/ghidra/project/StarAirBth` → `/best1600_watch_bth.bin`

This leaf owns the **BTH** (Bluetooth + power / factory) M33 image — the companion to the M55 `platform_tester.bin` (HUD / LVGL / JBD). Cross-core traffic uses the BES **INTERSYS** mailbox; M55 names `BTH_TO_M55_FACTORY_TEST_MODE` while this image exposes `send_bth_to_m55_msg` and factory/MMI entry strings.

**Readable reconstruction:** [`bth_reconstructed.c`](bth_reconstructed.c)  
**VA map:** [`manifest.json`](manifest.json)  
**Prior notes:** `analysis/bth_factory_key_entry.md`, `ghidra_export_bth.txt`, `ghidra_bth_fullcover.txt`

---

## Image layout

| Region | VA range | Notes |
|---|---|---|
| Code / data mix | `0x14000010`–`~0x1410FB86` | ForceDisBth + ExportAll: **3101** functions |
| Mega blob | `FUN_140f12fe` @ `0x140F12FE` (≈94 KB) | Oversized Ghidra function — treat contents cautiously |
| `.rodata` strings | `~0x140E5F00`–`0x141476BC` | Factory / GATT / ANCC / PMU / INTERSYS labels (no direct code xrefs) |

Import recipe (load base **`0x14000000`**):

```bash
Reverse/firmware/ghidra/import_bth.sh
# -loader-baseAddr 0x14000000 -processor ARM:LE:32:v8-m
```

ForceDis coverage (`ghidra_bth_fullcover.txt`): greedy disassemble calls ≈96432, funcs after = 3101, range `0x14000010`–`0x141476BC`.

---

## Architecture (BTH side)

```
Power / GPIO key scan
        │
        ▼
hal_key_*  (strings @ 0x140E60xx) ──► LONGPRESS_500 / 3000 / 5000_MS
        │
        ▼
app_poweron_key_init / app_factorymode_*   (.rodata names @ 0x14132xxx)
        │
        ├── BT_DUT_MODE / ENGINEER_MODE / "To enter test mode!!!"
        └── send_bth_to_m55_msg ──INTERSYS──► M55 BTH_TO_M55_FACTORY_TEST_MODE

BLE host (BES bthost)
        ├── app_gatt / app_ble_gatt_*_handler
        └── app_ancc_*  + stack ancc_task  (Apple ANCS client)
                └── ancs_bth_intersys_receive_handler ──► M55 ANCS bridge

PMU (best1600)
        └── pmu_best1600.c / pmu_charger_irq_handler / pmu_wdt_irq_handle
```

BES `TRACE(level, hash, …)` at **`FUN_1402a6e8` (`0x1402A6E8`)** means almost all `app_*` / `hal_*` name strings have **0 absolute xrefs**. Names in `.rodata` are labels for crash/trace tooling, not Thumb entry points — do not create functions at the string VAs.

---

## Factory / power-on key path

### String anchors (file_off = VA − `0x14000000`)

| String | VA | Role |
|---|---|---|
| `hal_key_boot_handler` | `0x140E63B0` | Boot key HAL symbol |
| `HAL_KEY_EVENT_LONGPRESS_500_MS` | `0x140E623B` | 500 ms long-press event name (`%s …` form @ `0x140E6238`) |
| `HAL_KEY_EVENT_LONGPRESS_3000_MS` | `0x140E625F` | 3000 ms |
| `HAL_KEY_EVENT_LONGPRESS_5000_MS` | `0x140E6283` | 5000 ms |
| `app_factorymode_enter` | `0x14132494` | Factory mode entry |
| `app_factorymode_key_init` | `0x141324AC` | Factory key table init |
| `app_factorymode_test_key_init` | `0x141324C8` | Test-mode keys |
| `app_factorymode_init mode:` | `0x141324E8` | Init log format |
| `app_poweron_key_init` | `0x141379A8` | Power-on key init |
| `To enter test mode!!!` | `0x141378D8` | Test-mode banner |
| `power on case:%d` | `0x14137A20` | Boot case switch log |
| `BT_DUT_MODE` | `0x1411648C` | DUT / RF test mode |
| `!!!!!ENGINEER_MODE!!!!!` | `0x141376BC` | Engineer mode banner |
| `send_bth_to_m55_msg` | `0x141316D8` | BTH→M55 mailbox helper name |

Source paths in-image:

- `../../apps/factory/app_factory.cpp` @ `0x1413240C`
- `../../apps/factory/app_factory_bt.cpp` @ `0x14131B98`
- `../../platform/hal/hal_key.c` @ `0x140E6014`

### What does *not* work

Scanning for immediates `500` / `3000` / `5000` (`0x1F4` / `0xBB8` / `0x1388`) hits **HFP / call-timer** state machines (`FUN_1404A374`, `FUN_1404C4F8`, …) that tail-call the veneer at **`0x140E5378`** (10-byte `bx ip` stub). Those paths are **not** the boot-key classifier — see Capstone follow-up in `bth_factory_key_entry.md`.

### Working anchors for further GUI work

1. Bookmarks category `factory-key` (script `FactoryKeyEntry.java`).
2. Walk callers of the INTERSYS TX that M55 handles as `BTH_TO_M55_FACTORY_TEST_MODE`.
3. Candidate dense event-switch: **`FUN_14041F98` (`0x14041F98`)** — compares many small event IDs and emits TRACE hash `0x5A8`.

M55-only companion strings (not in this BIN): `BTH_TO_M55_FACTORY_TEST_MODE`, `enter MMI mode!`.

---

## GATT / ANCC stubs

| String / artifact | VA | Role |
|---|---|---|
| `BT_GATT` | `0x140E6700` | GATT subsystem tag |
| `app_gatt.c` path | `0x14111FA4` | BES `app_gatt` |
| `app_ble_gatt_dflt_handler` | `0x1411203C` | Default GATT event handler name |
| `app_ble_gatt_cmp_evt_handle` | `0x14112058` | Complete-event handler |
| `app_ble_gatt_req_ind_evt_handler` | `0x14112074` | Request-ind handler |
| `app_ancc.c` path | `0x14111A18` | ANCC app |
| `app_ancc_init_info` | `0x14111D64` | Notification slot init |
| `ancc_task.c` (stack) | `0x1411B910` | Profile task |
| ANCS service UUID (LE) | `0x1411BE04` | `7905F431-B5CE-4E99-A40F-4B1E122D00D0` |
| ANCS Notification Source UUID | `0x1411BF40` | `9FBF120D-6301-42D9-8C58-25E699A21DBD` |
| `ancs_bth_intersys_receive_handler` | `0x14135F84` | M33↔M55 ANCS bridge |
| `ancs_intersys_m33.c` path | `0x14135F03` | Vendor ANCS intersys |

GATT server product tags also present: `GATT_SVC_DEVICE_INFO`, `GATT_SVC_BATTERY_SERVICE`, `GATT_SVC_HID`, `XR_GATT_SERVER_*`.

ANCC log surface (`[ANCC]Subscribe Notification Source`, NS/DS/CP handle dumps) confirms a full **Apple ANCS client** on BTH that forwards parsed notifications toward M55 via intersys — not a stub empty profile.

---

## PMU (Best1600)

| String | VA | Role |
|---|---|---|
| `pmu_best1600.c` path | `0x140E7688` | Analog / PMU driver |
| `Error: pmu wdt reboot failed!` | `0x140E76E5` | WDT reboot failure |
| `Error: pmu shutdown failed!` | `0x140E7705` | Shutdown failure |
| `Start pmu %s` | `0x140E772C` | PMU bring-up log |
| `pmu_charger_irq_handler` | `0x140E7748` | Charger IRQ |
| `pmu_wdt_irq_handle` | `0x14137F80` | WDT IRQ |
| `%s,metal id=%d,PMU id=%d` | `0x14108EC8` | Chip / PMU id print |

PMU lives on this M33 image (charger + watchdog), while fine-grained battery UI / fuel-gauge UX is on M55.

---

## INTERSYS

| String | VA |
|---|---|
| `INTERSYS-RX: Invalid msg type: %d` | `0x140E5F64` |
| `INTERSYS-RX: Handler missing` | `0x140E5F88` |
| `INTERSYS-TX: Invalid msg type: %d` | `0x140E5FA8` |
| `Failed to open intersys` | `0x140E7AC8` |
| `xjxr_intersys_bth.c` path | `0x14135BA4` |

---

## Key Ghidra / Capstone VAs (code)

| Semantic role | VA | Evidence |
|---|---|---|
| BES TRACE | `0x1402A6E8` | `FUN_1402a6e8` — hashed log |
| Abort / assert helper | `0x1402B0F8` | Called on bad event IDs |
| Event-switch candidate | `0x14041F98` | Dense `cmp` on small IDs + TRACE `0x5A8` |
| Timer veneer (HFP false positive) | `0x140E5378` | 10-byte `bx ip` stub |
| Export TRACE-ish size | 3101 funcs | `ghidra_export_bth.txt` DONE line |

---

## Method / four-pass notes

1. **Inventory** — confirmed load base, size, ForceDis cover, string tables for factory / GATT / ANCC / PMU / INTERSYS.  
2. **Bind** — UUID blobs + TRACE/veneer/event-switch code VAs; rejected duration-immediate factory hypothesis.  
3. **Reconstruct** — API-level C stubs named from `.rodata`, marked where Thumb entry is still unbound.  
4. **Verify** — `node …/verify-leaf.mjs 1.3.2`.

### Open (honest gaps)

- Exact Thumb entry for `app_factorymode_enter` / `app_poweron_key_init` still **unbound** (trace-hash).  
- `FUN_140f12fe` mega-function needs re-split before trusting high-VA decomp.  
- Numeric INTERSYS opcode for factory test mode must be taken from M55 enum, then matched in BTH TX.
