# Factory + eshell surface — Star Air M55 (`platform_tester.bin`)

**Leaf:** `1.2.2`  
**Image:** `Reverse/firmware/x_1.0.12.83/platform_tester.bin` (6 771 708 B)  
**Load:** FLASH XIP `0x2C000000`; `.rodata` alias `0x3C000000` (same file bytes)  
**Method:** string / packed-blob extraction + prior Capstone/Ghidra xref negatives (`FIRMWARE_FINDINGS.md` §3/§8, `ghidra_en_usb_hunt.md`, `tools/fw_ghidra_leftovers.py`, `usb_enable/en_usb.json`)  
**Rule:** evidence only — no invented handler VAs.

---

## 1. What this surface is

On the M55 app image, factory MMI and the engineering console share one **eshell** REPL (prompt `eshell >`). Factory commands are compiled from `../../factory/fac_cmd/fac_cmd*.c` and registered into the shell as the `fac_cmd` family. Core memory/CPU tools live under `../../utils/eshell/eshell.c`, `eshell_platform.c`, and `../../apps/app_eshell/...`.

Entry to the privileged MMI UI is **not** a BLE `handleSystemMsg` action. BTH boot-key logic (separate image) can raise `BTH_TO_M55_FACTORY_TEST_MODE` (M55 string VA `0x2C16457C`); M55 then logs `enter MMI mode!` (`0x2C167EB8`). Full `md`/`mw`/`xmodem` still needs the UART / `debug_i2c` wire path — Type-C being charge-only does not expose this REPL.

---

## 2. Source TUs (string anchors)

| Path string (file off → VA) | Role |
|---|---|
| `0x16071C` → `0x2C16071C` `../../factory/fac_cmd/fac_cmd.c` | fac_cmd dispatcher / registration TU |
| `0x15FB00` → `0x2C15FB00` `../../factory/fac_cmd/fac_cmd_sys.c` | sys / sleep / gpio / freq |
| `0x15F798` → `0x2C15F798` `../../factory/fac_cmd/fac_cmd_bt.c` | BT identity cmds (+ `set_bt_name` TRACE @ `0x15F88C`) |
| `0x15F948` → `0x2C15F948` `fac_cmd_battery.c` | charger / FG |
| `0x15FA60` → `0x2C15FA60` `fac_cmd_audio.c` | audio / PA |
| `0x15FC74` → `0x2C15FC74` `fac_cmd_mmi.c` | MMI runner |
| `0x160940` → `0x2C160940` `fac_cmd_sensor.c` | sensors |
| `0x160A37` → `0x2C160A37` `fac_cmd_lcd.c` (leading `<` in blob) | panel / JBD / ESD |
| `0x160B40` → `0x2C160B40` `factory_impl.c` | factory impl |
| `0x160C30` → `0x2C160C30` `factory_impl_bth.c` | BTH-side factory bridge |
| `0x160C70` → `0x2C160C70` `factory_nv.c` | factory NV (`__factory_start=0x28FFF000`) |
| `0x161030` → `0x2C161030` `factory_list.c` | LVGL factory list |
| `0x1620AC` → `0x2C1620AC` `factory_test.c` | factory test |
| `0x427354` → `0x2C427354` `../../utils/eshell/eshell.c` | eshell core |
| `0x4275D4` → `0x2C4275D4` `eshell_platform.c` | UART/I2C platform open |
| `0x427E54` → `0x2C427E54` `../../apps/app_eshell/system/ps.c` | thread dump cmds |
| `0x171490` → `0x2C171490` `phone_eshell.c` | phone page eshell hooks |

RTOS / pool names packed just before the command blob: `cmd_mutex` `0x15FD7C`, `fac_cmd_pool` `0x15FD88`, `fac_cmd` `0x15FD98`, `fac_cmd_trd` `0x15FDB0`, `fac cmd test` `0x15FDA0`. Fail strings: `RETURN:NOT_SUPPORTED` `0x16076C`, `cmd_handler trd not start.` `0x160784`.

---

## 3. `fac_cmd` packed name/help blob

**Region:** file `0x15FDBC`–`0x1606C0` (through `get_board_id` help), trailer help/format at `0x1606D0`–`0x160714`, then `__FILE__` `fac_cmd.c` @ `0x16071C`.

**Layout:** dense `C-string\0C-string\0…` walk. Predominant pattern is **command token** then **human help**. Confirmed clean pairs include:

- `set_sn` @ `0x2C15FDBC` / `write sn cmd` @ `0x2C15FDC4`
- `en_usb` @ `0x2C1605E8` / `enable usb` @ `0x2C1605F0`
- `exit_mmi` @ `0x2C1605FC` / `exit mmi test` @ `0x2C160608`

**Anomalies (evidence, not speculation):**

1. After `get_bsn`/`read bsn cmd`, the next string is space-form `set bt name` (`0x15FE18`) — underscore `set_bt_name` lives earlier at `0x15F88C` (bt.c TRACE band), not in the packed walk at that index.
2. `get_bt_name` (`0x15FE3C`) and `get_bt_mac` (`0x15FE48`) sit adjacent with **no** intervening help.
3. `set_gpio` / `get_sysfreq` / `set_sysfreq` / `close_eshell` (`0x160064`–`0x160088`) are four tokens in a row; next string `set brightness` (`0x160098`) is help-shaped (also appears as standalone `set_brightness` elsewhere @ `0x38B98`).
4. After `check_coulomb_l`, `check_coulomb_r` has no help; then `battery_info` plus extra `get battery voltage/current/capacity` strings.
5. `lcd_id` help `get lcd id` is followed by orphan `check ready` before `file_sys_check`.

Full sequential dump with VAs: see `fac_cmd_map.md`.

**Command families (underscore tokens present in-image):** identity/BT, power/sleep (`goto_sleep`, `bth_goto_sleep`, `close_eshell`, **`en_usb`**), touch, display/JBD/panel/ESD, audio/PA, charger/FG/battery, sensors, MMI (`mmi_help`/`mmi_run`/`mmi_run_item`/`mmi_result_clear`/`exit_mmi`/`switch_page`), `sys_reset`, `file_sys_check`, `lcd_id`, `get_board_id`.

---

## 4. Handler VAs — what is and is not recovered

### 4.1 Not statically recovered

Exhaustive pointer / `MOVW`/`MOVT` / ADR / literal-pool scans (Ghidra 13 815 functions + Capstone leftovers script) find **zero** references to mid-blob names such as `en_usb`, `close_eshell`, prompt `eshell >`, or RTOS name `fac_cmd_trd`. Dispatch is a **positional blob walk** plus a parallel handler array that is **not** present as a recoverable `{name_ptr, help_ptr, Thumb}` `.rodata` table in this image.

Therefore: **individual `fac_cmd` handler function VAs = unrecovered** (need interactive structure hunt for BES `nc_cmd`/eshell registration, or on-device trace).

### 4.2 Rejected misattributions (do not use)

| VA | Prior claim | Evidence |
|---|---|---|
| `0x2C5AA114` | `set_sn` handler | LVGL Model method; registry IDs `0x5059`/`0x5060` |
| `0x2C5AAB48` | `en_usb` handler | LVGL TRACE of intern slices; calls invalidate `0x2C606A28` |
| `0x2C5AAB80` | `lcd_id` handler | same LVGL TRACE family |
| `0x2C606A28` | “shared fac_cmd helper” | LVGL object flag/invalidate |

Only absolute pointer hit for a fac name: alias `0x3C15FDBC` (`set_sn`) at file `0x5AA10C`, owned by LVGL event `FUN_2C5AA01C` (TRACE merge), not a command table.

### 4.3 `en_usb` operational bind

Name/help exist; handler unrecovered. Image has **no** USB gadget/PHY (`hal_usb`, `usbphy`, `CDC_ACM`, `dwc`, TinyUSB absent). Only related `usb_enable` semantics are SC7288 charger VBUS logs (`[CHG] vbus usb_enable:%d…` @ file `0x42AF8`). `en_usb` cannot enumerate a stack that was never linked.

---

## 5. Core `eshell` / `app_eshell` surface

| Symbol / string | File off | VA `0x2C…` | Notes |
|---|---|---|---|
| prompt `eshell >` | `0x4274E2` | `0x2C4274E2` | REPL prompt |
| `eshell_execute:cmds_count=%d` | `0x427370` | `0x2C427370` | dispatch TRACE |
| `eshell : argc_num=%d, exe_cmd=%s, help_info=%s` | `0x427390` | `0x2C427390` | argv dump |
| `eshell_paltform_init open=%d` | `0x427610` | `0x2C427610` | UART open result (typo in source) |
| `eshell_thread...` | `0x4275FC` | `0x2C4275FC` | thread |
| `debug_i2c` | `0x427824` | `0x2C427824` | re-open eshell over I2C |
| `xmodem` | `0x427B80` | `0x2C427B80` | raw download; usage @ `0x427A66` |
| `mw` / `mw16` / `mw32` | `0x42884C` / `814` / `7DC` | memory write |
| `md16` / `md32` | `0x4288A0` / `874` | memory dump |
| `md` help `dump memory or registers` | `0x4288CC` | bare `md\0` **absent** in this name band; usage `md addr` @ `0x427FA2` |
| `comp` / `comp16` / `comp32` | `0x4287B4` / `780` / `74C` | mem compare |
| `gpioset` / `gpioget` | `0x427A44` / `A28` | GPIO |
| `pmugpioset` / `pmugpioget` | `0x427A00` / `9E0` | PMU GPIO |
| `pmu_read` / `pmu_write` | `0x427870` / `858` | PMU |
| `panic` | `0x427888` | panic |
| `dump_all_threads` | `0x427F34` | RTOS dump |
| `show_threads_usage` | `0x427F10` | CPU usage |
| `pll_autocalib` | `0x427C94` | PLL |
| `msleep` / `shell_sleep` | `0x427D38` / `D10` | sleep |
| `utest_{uart,ram,dma,i2c,rtc,gpio,wdt}` | `0x429xxx` | unit tests |
| `eshell cmd is not exist.` | `0x02A898` | unknown cmd |

Same pointerless-TU pattern: core eshell command names also lack recoverable 32-bit name pointers; handlers unrecovered by the same static methods.

Pinmux: `hal_uart.c` / `Invalid UART ID: %d` present; **no** `hal_iomux_set_uart*` string. Numeric `HAL_UART_ID` and pads not string-recoverable.

---

## 6. Product test CLIs on the same shell

Exact `\0`-terminated tokens in this image:

| Cmd | VA |
|---|---|
| `xjxr_starrynet_test` | `0x2C02920C` |
| `xmonkey` | `0x2C0288F8` |
| `xtest` | `0x2C028C80` |
| `xr_asl` | `0x2C037F8C` |
| `xr_sensor_eshell` | `0x2C038AE8` |
| `xjxr_audio_test` | `0x2C040A20` |
| `xjxr_graphic` | `0x2C133D64` |
| `xjxr_input_test` | `0x2C41E6C8` |
| `xjxr_fps_collect` | `0x2C41DC94` |
| `xjxr_power_test` | `0x2C425CF0` |

---

## 7. Deliverables in this leaf

| File | Contents |
|---|---|
| `FACTORY_ESHELL.md` | this overview |
| `fac_cmd_map.md` | full packed walk + eshell token table |
| `manifest.json` | mapped VAs with roles (`fac_cmd_name_string`, `eshell_prompt_string`, `rejected_not_handler`, …) |

---

## 8. Reproduction

```bash
# packed fac_cmd walk
python3 -c "from pathlib import Path;b=Path('Reverse/firmware/x_1.0.12.83/platform_tester.bin').read_bytes();\
o=0x15FDBC
while o<0x160740:
  e=b.find(b'\\x00',o);s=b[o:e];
  print(hex(o),s);o=e+1
  if b'fac_cmd.c' in s: break"

node Reverse/firmware/analysis/full_rev/scripts/verify-leaf.mjs 1.2.2
```

**Open work (out of leaf):** locate BES registration site / parallel handler array, or dynamic UART/`debug_i2c` trace to bind `en_usb` and peers to Thumb functions.
