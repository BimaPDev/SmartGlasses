# Star Air OTA security surface (1.0.12.83)

**Leaf:** 1.2.3  
**Binary:** `Reverse/firmware/x_1.0.12.83/platform_tester.bin` (M55, FLASH XIP `0x2c000000`)  
**Rodata alias:** string VAs = `0x3c000000 + file_offset` (see `platform_tester_1.0.12.83_disasm.md`)  
**Sources:** `bes_ota_api.cpp`, `ota_config.cpp`, `ota_*.cpp`, `xjxr_ota_checker.cpp`, LVGL `OtaMsgModel.cpp`, prior `FIRMWARE_FINDINGS.md` §4

## Verdict

On-device OTA is **dual-bank A/B norflash** with **transfer MD5** and **post-write flash MD5**, then **boot-info / magic** updates and **`ota_check_and_change_boot_type`**. Failure paths call **`do_ota_rollback`**. Strings show **no RSA/ECDSA/image-signature** verifier next to the OTA apply path — integrity is hash + bank switch, not a public-key gate (still unproven that none exists deeper in BES ROM).

ARMv8-M **`SecureFault`** diagnostic strings are present in the fault pretty-printer; the literal **`TrustZone`** token is **absent**. Treat SecureFault as evidence the Secure extension is compiled in, not as proof of a signed-OTA TrustZone world switch.

## Pack layout (phone → glasses)

Official CN OTA zip is two BEST1600 images only:

| Member | Role |
|---|---|
| `platform_tester.bin` | M55 app (this leaf) |
| `best1600_watch_bth.bin` | M33 BTH |

16-byte BES OTA header then Thumb-2; M55 loads at `0x2c000000`. Phone delivers both bins over **StarryNet** file transfer (`RECEIVE_OTA_FINISH` / `SHARE_STREAM_TYPE__RECEIVE_OTA_FINISH` at string VA `0x3c02cf0c` / `0x3c02d10c`), not USB/ADB.

## A/B banks

User-data / XR flash layer logs dual versions and dual magics:

| String (file off → rodata VA) | Meaning |
|---|---|
| `[XR_FLASH] a_ver:%u b_ver:%u. %s` (`0x2b4a8` → `0x3c02b4a8`) | Active A/B version pair |
| `[XR_FLASH] magicA:%u magicB:%u. %s` (`0x2b4cc` → `0x3c02b4cc`) | Per-bank magic |
| `[XR_FLASH] first ota 2 A/B flash, read A, next write B. %s` (`0x2b4f0` → `0x3c02b4f0`) | First OTA: read A, program B |
| `[XR_FLASH] a_ver:%u b_ver:%u write B beg. %s` / `write A beg` | Bank-targeted program |
| `AB/BA boot` (`0x3d194` → `0x3c03d194`) | Boot-side AB/BA mode label |

`bes_ota_api.cpp` mirrors this with boot-info helpers (`is_normal_boot`, `get_boot_repeat_num`, `get_boot_ext_repeat_num`, `set_boot_ext_repeat_num`, `update_boot_type`, `update_ota_boot_info`, `update_boot_type_to_normal`) clustered at file `0x165610`–`0x165990` (rodata `0x3c165610`+). Repeat-count / ext-repeat fields gate how many failed boots occur before rollback preference flips.

**Call-graph edge (code):** `FUN_2c5b8bfc` @ `0x2c5b8bfc` TRACE-null-checks with `__func__` literal `is_normal_boot` (`0x3c1656d4` in its pool at `0x2c5b92ec`) — boot-type query sits in the bes_ota object path that also touches LVGL alloc (`lv_mem_alloc`) and string builders.

## MD5 verify (two stages)

| Stage | Fail string | Rodata VA |
|---|---|---|
| Transfer / download | `ota failed to check transfer file md5` | `0x3c182fec` |
| Transfer (StarryNet helper) | `transfer check md5 failed` | `0x3c02a620` |
| Generic file MD5 | `md5 check fail!` / `md5 check success!` | `0x3c0337fb` / `0x3c03380f` |
| Confirm helper name | `confirm_received_file_md5` | `0x3c0338f4` |
| Written flash | `ota failed to check written flash md5` | `0x3c182ef4` |

Apply also logs `failed to ota_flash_program for: %s` (`0x3c183c5c`) and BTH compare `bth flash cmp ret` / `ota write bth flash cmp failed` (`0x3c165580` / `0x3c165598`). Size / name gates: `ota unsupported file name` (`0x3c182ea0`).

## Program + magic + boot type

Pipeline after MD5 (strings in `bes_ota_api.cpp` / Ota pages):

1. **`ota_flash_program`** — name at `0x3c1654a0`; programs M55 + BTH user images with size checks.
2. **`app_update_magic_number_of_user_image`** — `0x3c1655c8`; fail path `ota failed to update magic number` (`0x3c182f1c`).
3. **`update_ota_boot_info` / `update_boot_type`** — `0x3c165628` / `0x3c165610`; success log `ota_update_ota_boot_info success = %d` (`0x3c183594`).
4. **`ota_check_and_change_boot_type`** — success/fail logs in `xjxr_ota_checker.cpp` (`0x3c028548` / `0x3c028574`); on success informs StarryNet (`%s ota boot inform starrynet %d` @ `0x3c0286c0`).

`init_m55_ota_flash_start_addr` is TRACE-named at code pool `0x2c5b8900` → string `0x3c16567c`.

## Rollback

| Evidence | VA / location |
|---|---|
| Symbol / `__func__` `do_ota_rollback` | string `0x3c1658b4` |
| Literal pool uses `do_ota_rollback+4` (`ta_rollback`) | `0x2c5ba100`, also `0x2c5be0cc` |
| **Code entry (Ghidra undersized)** | **`0x2c5b9e10`** — Capstone: `push.w {r4–fp,lr}`; `sub sp,#0xac`; early TRACE line `0x17e`; continues through norflash protect/erase/write fail strings in trailing pool |
| Log `do ota rollback` / `failed to do ota rollback` | `0x3c03d1f8` / `0x3c03d208` |
| Log `do ota rollback succeed` | `0x3c165978` |
| Flash-1 / flash-0 boot-info fail strings | `0x3c165900`, `0x3c16594c` |
| `update_boot_type_to_normal` | string `0x3c165990`; pool `0x2c5ba544` beside `FUN_2c5ba26c` / `FUN_2c5ba550` |

Rollback rewrites boot info on the **previous** bank (flash 0/1 messages) and restores **normal** boot type for M33/M55 (`failed to update m33/m55 boot type`). Ext-repeat is forced toward recovery (`failed to set boot ext repeat num to 1` near `AB/BA boot`).

## Post-boot checker (`xjxr_ota_checker.cpp`)

Source path string: `0x3c02840c`. Thread/`ota_checker` + mutex names at `0x3c0287c8` / `0x3c0287d4`.

| API / log | Rodata VA |
|---|---|
| `init_xjxr_ota_checker` | `0x3c028660` |
| `handle_ota_checker_message` | `0x3c0284b8` |
| `notify_ota_check_result` | `0x3c028728` |
| `_on_ota_check_failed` | `0x3c0283f4` |
| `ota check all business succeed!` | `0x3c028604` |
| `normal boot, donnot need ota checker!` | `0x3c028694` |
| `reboot system` (fail path) | `0x3c02845c` |

On OTA boot the checker waits on a semaphore (`wait for ota checker sema!` / timeout), runs business checks, then either confirms boot type or reboots / rolls back.

## LVGL / StarryNet UI edge

`OtaMsgModel.cpp` path `0x3c18261c`. Exported event stub **`OtaMsgModel_event_TRACE_set_sn` @ `0x2c5aa01c`** (decomp in export) calls TRACE helper `0x2c62c82c` then LVGL-facing helpers — **call-graph edge into LVGL/TRACE**, not fac_cmd.

UI method logs (string VAs): `onHandleOtaConfirm`, `sendAirOtaInfo`, `startOtaApp`, `showOtaNotification`, `cancelOtaNotification` (`0x3c18265c`–`0x3c1828f0`). Silent-OTA pause/resume: `notify silent ota can doing` / `need pause` (`0x3c041574` / `0x3c041708`). StarryNet cmd enum `STARRY__MSG__CMD__OTA` @ `0x3c030330`.

## SecureFault / TrustZone notes

| Item | Evidence |
|---|---|
| `(SecureFault)` label | `0x3c014f21` (and duplicate fault table `0x3c145e79`) |
| Sibling faults | `(HardFault)` `0x3c014f00`, `(UsageFault)` `0x3c014f10`, MemFault variants |
| Pretty-printer code | **`FUN_2c48c450` @ `0x2c48c450`** (size 166); literal pool `0x2c48c804` → `0x3c014f04` HardFault suffix, `0x2c48c808` → `0x3c014f28` `Fault)` covering SecureFault line |
| `TrustZone` ASCII | **not present** in `m55_ascii.txt` |
| Image signature / RSA next to OTA | **not observed** in OTA string neighborhood |

SecureFault implies the M55 image is built with ARMv8-M Security Extension awareness (fault decode). It does **not** by itself prove SAU-gated OTA or signed secure-world updates.

## Security implications (evidence-bound)

- **Official OTA brick risk:** low — A/B + `do_ota_rollback` + boot-type restore.
- **Modified image:** MD5-only apply (from strings) means a correctly hashed custom bin can flash if StarryNet accept path is reached; signature absence is **string-negative**, not formal proof.
- **Bypass surfaces outside OTA:** UART `eshell` `mw`/`xmodem` have **no** rollback net (other leaves).
- **Resource partition** (`0x3c3xxxxx` UI bitmaps) is **not** in the OTA zip — OTA cannot rebrand boot pixels.

## TRACE / evidence path (G3)

1. String `../../services/ota/bes_ota/src/bes_ota_api.cpp` @ `0x3c165470`.
2. Code `0x2c5b9e10` (`do_ota_rollback`) → `bl 0x2c62c82c` (shared TRACE).
3. LVGL: `0x2c5aa01c` → same TRACE helper → Page/Model band `0x2c5aaxxx`.
4. StarryNet: finish stream type + `STARRY__MSG__CMD__OTA` strings; checker informs StarryNet after boot-type change.

## Related artifacts

- Detail path: `ota_verify_path.md`
- VA index: `manifest.json`
- Prior summary: `Reverse/FIRMWARE_FINDINGS.md` §4, `Reverse/WRITEUP.md` §06
