# Halliday factory mode & Zephyr shell (1.00_2601211113)

**Leaf:** 1.10  
**Binary:** `Reverse/firmware/Halliday/HallidayOfficialOTA.bin` → inner `app.bin` (1 662 592 B)  
**Load base:** `0x10000000` (Thumb XIP; string VA = `0x10000000 + app.bin file_off`)  
**Sources:** `export/official/strings/categorized/{factory,zephyr}.txt`, `strings/app_ascii.txt`

## Verdict

Halliday ships a **Zephyr interactive shell** on UART (`shell.shell_uart`) plus a large **application shell command group** used for factory bring-up, device test, and field debug. Factory behavior spans three surfaces:

1. **UART shell** — stock Zephyr shell subsystem (`shell.c`, history, echo, coredump/actlog backends) plus Halliday-specific handlers (`shell_set_*`, `shell_device_*`, BT test commands).
2. **Factory config partition labels** — rodata strings `Factory Config`, `Factory RW`, and sibling `User Config` imply separate factory vs user NVRAM/config stores (exact mount path not string-proven; likely under `/NAND:/SYSTEM`).
3. **Power-key factory reset** — `key_power_to_factory_reset_handle` implements a timed multi-press gate; UI path `comfirm_reset_glass` / `reset_glass_data` clears persisted glass state on `/NAND:/SYSTEM/*`.

No Ghidra function export exists yet; anchors below are **string VAs** only (same rule as leaves 1.4–1.6).

---

## Zephyr shell stack

Standard Actions/Zephyr shell is linked in. Source paths recovered from `__FILE__` strings:

| Module | File off → VA | Role |
|---|---|---|
| Core | `0x15fd29` → `0x1015fd29` | `WEST_TOPDIR/zephyr/subsys/shell/shell.c` — thread, ctx/iface asserts |
| Utils | `0x1601e5` → `0x101601e5` | `shell_utils.c` |
| Ops | `0x16022e` → `0x1016022e` | `shell_ops.c` — command dispatch |
| UART backend | `0x160288` → `0x10160288` | `shell_uart.c`; devicetree label `shell.shell_uart` @ `0x1602b5` |
| History | `0x16071e` → `0x1016071e` | Command history |
| Debug | `0x160c77` → `0x10160c77` | `shell_dbg.c` |

Built-in Zephyr shell UX strings confirm interactive use: meta-key help, echo toggle, delete-as-backspace, logger statistics. Runtime guard strings (`Shell thread error`, inactive-backend warning) indicate a dedicated shell thread distinct from the UI server.

**Platform extras** in the same neighborhood:

| Command / symbol | VA | Notes |
|---|---|---|
| `shell_dvfs` | `0x10160980` | DVFS set/unset (`usage: dvfs set/unset level`) |
| RTC set | `0x101609c7` | `rtc set time successfully` |
| MPU helper | `0x10160933` | `usage: mpu_set mem_base size ro[no/rw/ro]` |
| Coredump backend | `0x101662a1` | `Print stored coredump to shell` |
| Actlog backend | `0x1017dbff` | `Print stored actlog to shell` |

---

## Application shell commands

The **`Application shell commands`** group @ `0x1014aff4` registers Halliday/bt_watch debug handlers. User-visible subcommand names (help strings) map to C handlers:

| Help name | Handler (`__func__` string) | VA | Purpose |
|---|---|---|---|
| `set_config` | `shell_set_config` | `0x1014b088` | `set system config`; logs `set config %s : %s ok` / `unknown parameter` |
| *(LED)* | `shell_set_led` | `0x1014b099` | `led event`, `led breath`, `led blink` format strings @ `0x14aee2`–`0x14af08` |
| *(motor)* | `shell_set_vibration` | `0x1014b0a7` | `vibration event = %d` @ `0x14aecd`; help `motor` @ `0x14b067` |
| `shell_set_volume` | `shell_set_volume` / `shell_get_volume` | `0x1014b0cd` / `0x1014ae57` | Audio volume get/set by type |
| `shell_device_test` | `shell_device_test` | `0x1014b0bb` | Factory device test entry |
| `shell_device_info` | `shell_device_info` | `0x1014b0de` | Dump device identity / build info |
| `adv2` | `shell_set_dualble_adv_connected` | `0x1014b0f0` | `dualble adv connected`; `%d` connected state |
| `monkey` | — | `0x14b043` | `monkey test` — input/key fuzz |
| `btinfo` | — | `0x14b057` | `dump bt info` |
| `input key event` | — | `0x14b03c` | Inject key events |

Extended handlers (second cluster, likely audio/BT factory):

| Handler | VA | Help / log |
|---|---|---|
| `shell_set_effect_config` | `0x1017ce29` | Audio effect tuning |
| `shell_set_voice_effect_config` | `0x1017ce41` | Voice effect tuning |
| `shell_dump_meminfo` | `0x1017ce5f` | Memory stats |
| `shell_cmd_br_test` | `0x1018428e` | `br_test` — `br power test` |
| `shell_cmd_ble_test` | `0x101842a0` | `ble_test` — `ble power test` |
| `shell_cmd_set_ble_speed` | `0x101842b3` | `ble_speed` — `Set ble speed` |
| `shell_cmd_send_hfp_cmd` | `0x101842cb` | `send hfp cmd` |

Group banner: **`Bluetooth manager commands`** @ `0x1018420e` sits adjacent to the BT shell cluster.

Disk introspection near app shell: `diskcapacity total %d remain: %d Kb` @ `0x14aea8` with `/NAND:` prefix @ `0x14aea1`.

---

## Factory config storage

Three partition-style labels appear late in rodata (high file offset ~`0x193xxx`):

| Label | File off → VA | Interpretation |
|---|---|---|
| **Factory Config** | `0x1932b8` → `0x101932b8` | Read-only or default factory calibration / test flags |
| **Factory RW** | `0x1932f0` → `0x101932f0` | Writable factory field data (SN, test results, MAC overrides) |
| **User Config** | `0x193328` → `0x10193328` | End-user settings (paired with factory stores) |

These strings sit ~2.5 KB from EOF in `app.bin` and are **unique to factory/NVRAM UI** — not generic LVGL assets. They likely name flash/NVRAM regions or file headers accessed during `shell_set_config` and `shell_device_test`. Persisted user data paths cluster under `/NAND:/SYSTEM/*` (BT name, weather, navi, message libs @ `0x14e345`+).

**OTA factory gate:** `ota_type %d, is not factory?` @ `0x1014c019` — libota rejects or warns when upgrade type is not factory mode (pairs with OTA leaf 1.5; prevents consumer OTA paths from overwriting factory builds).

---

## `key_power_to_factory_reset_handle`

Power-key factory reset is a dedicated handler, not the generic long-press menu:

| Symbol / log | File off → VA |
|---|---|
| `key_power_to_factory_reset_handle` | `0x159396` → **`0x10159396`** |
| Debug log | `0x1592b5` → `0x101592b5` — `key_event 0x%x time_diff %d cnt %d` |
| Duplicate refs | `0x1594e3` → `0x101594e3` (second call site or tail log) |

**Sibling key-power symbols** (same module):

| Symbol | VA | Role |
|---|---|---|
| `key_power_press_style handle` | `0x10159267` | Press pattern/style state machine |
| `key_power_press_event` | `0x101594bd` | Short press |
| `key_power_long_press_event` | `0x10159505` | Long press (distinct from factory reset) |
| `key_power_press_has_other_event` | `0x1015949d` | Suppress factory reset if other keys active |
| `++key_power_press_event` | `0x1015929d` | Counter / dedup |

The **`time_diff`** and **`cnt`** fields in the factory-reset log imply a **multi-tap or hold-duration counter** (e.g. N presses within T ms) before triggering reset — not a single long press. `key_power_press_has_other_event` suggests factory reset is cancelled if touch/secondary keys fire during the sequence.

---

## User-facing reset flow (UI + data wipe)

Separate from the power-key factory path, settings UI can reset glasses data:

| Phase | String | VA |
|---|---|---|
| Banner | `*********reset_glass_data*********` | `0x1014e38a` |
| API | `reset_glass_data` / `glasses_reset` | `0x1014ed09` / `0x1014e3ad` |
| Flag | `IS_RESET_FLAG` | `0x1014e3ca` |
| UI confirm | `comfirm reset glasses` | `0x1015c2a5` |
| View handler | `comfirm_reset_glass` | `0x1015c2f8` |
| Execute | `reset glasses view now`, `reset!!` | `0x1015c2bc`, `0x1015c2e0` |
| Timer | `reset_timer_cb` | `0x1015c2e9` |

`reset_glass_data` neighbors `xs_app_init` @ `0x14e328` and `/NAND:/SYSTEM` @ `0x14e345`, plus keys like `MODE_IDX`, `ALARM_DATA`, `NAVI_HISTORY`, `LOCAL_PROMP` — the wipe likely clears these persisted blobs under `/NAND:/SYSTEM/*`, not the firmware image.

---

## Factory vs normal power down

Power-off logging distinguishes factory test power-down from consumer shutdown:

| Log | VA | Context |
|---|---|---|
| `system power down!WKEN_CTL=0x%x` | `0x1015ede4` | Normal shutdown — WKEN (wake enable) register snapshot |
| **`factory power down WKEN_CTL=0x%x`** | **`0x1015ee22`** | Factory-mode / test power off |
| `dev power off` / `dev power end` | `0x1015edc6` / `0x1015edd5` | Device PM teardown |
| `poweroff fail, need reboot!` | `0x1015ee05` | Failed power-off recovery |

Factory power-down is invoked from factory test or shell paths (`shell_device_test`), not from the launcher idle suspend path (see power leaf 1.9).

---

## Access model (inferred)

| Surface | When active | Risk |
|---|---|---|
| UART shell | Debug UART connected; likely always compiled in | Full device control: BT tests, config write, monkey input |
| `shell_device_test` | Factory build or factory OTA type | Hardware test loops, LED/vibration/motor |
| Power-key factory reset | Hidden multi-press sequence | Wipes user `/NAND:/SYSTEM` state |
| Settings reset UI | User navigates reset view | Confirmed wipe via `comfirm_reset_glass` timer |

**Security note:** No shell authentication strings were found in `factory.txt` — protection appears to be **physical UART access** and ** obscured key sequence**, not credentials.

---

## Anchor summary

| Name | VA | Evidence type |
|---|---|---|
| `Application shell commands` | `0x1014aff4` | Shell command group registration |
| `shell_set_config` | `0x1014b088` | Factory/user config write |
| `shell_device_test` | `0x1014b0bb` | Factory hardware test |
| `key_power_to_factory_reset_handle` | `0x10159396` | Power-key factory reset FSM |
| `reset_glass_data` | `0x1014ed09` | NAND user-data wipe |
| `Factory Config` / `Factory RW` | `0x101932b8` / `0x101932f0` | Factory NVRAM labels |
| `shell.c` (Zephyr) | `0x1015fd29` | Core shell subsystem |
| `factory power down` | `0x1015ee22` | Factory PM path |

See `manifest.json` for the full anchor list used by integration verify.

---

## Variant note

Official and HomeBuddy custom OTA images share **identical factory/shell string offsets** in export (`factory.txt` line-for-line match). Factory shell surface is platform stock, not HomeBuddy-specific customization.
