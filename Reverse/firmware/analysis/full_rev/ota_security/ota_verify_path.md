# OTA verify path — named stages and actions

Evidence from `platform_tester.bin` 1.0.12.83. String VAs use rodata alias `0x3c000000 + file_off`. Code VAs are M55 XIP `0x2c…`.

## End-to-end sequence

```
StarryNet file-info (name, size, md5)
        │
        ▼
SENDER_DATA / RECEIVE_OTA_FINISH
        │
        ▼
confirm_received_file_md5  ──fail──► transfer MD5 error / abort
        │
        ▼
ota_flash_program (M55 + BTH) ──fail──► failed to ota_flash_program / BTH cmp fail
        │
        ▼
written-flash MD5 ──fail──► ota failed to check written flash md5
        │
        ▼
app_update_magic_number_of_user_image ──fail──► ota failed to update magic number
        │
        ▼
update_ota_boot_info / update_boot_type
        │
        ▼
ota_check_and_change_boot_type ──► inform StarryNet
        │
        ├── success ──► normal boot / checker optional
        └── fail / bad boot ──► do_ota_rollback (+ reboot / checker fail)
```

## Named actions (≥10) with evidence

| # | Name | Role | Evidence |
|---|---|---|---|
| 1 | `RECEIVE_OTA_FINISH` | StarryNet stream end of OTA payload | str `0x3c02cf0c` |
| 2 | `confirm_received_file_md5` | Hash download buffer vs advertised md5 | str `0x3c0338f4`; fail `md5 check fail!` `0x3c0337fb` |
| 3 | transfer MD5 gate | Abort before program | `ota failed to check transfer file md5` `0x3c182fec`; `transfer check md5 failed` `0x3c02a620` |
| 4 | `ota_flash_program` | Program dual images into inactive bank | str `0x3c1654a0`; fail `0x3c183c5c` |
| 5 | BTH flash compare | Post-write M33 image check | `bth flash cmp ret` `0x3c165580` |
| 6 | written flash MD5 | Hash programmed norflash | `ota failed to check written flash md5` `0x3c182ef4` |
| 7 | `app_update_magic_number_of_user_image` | Stamp user-image magic | str `0x3c1655c8`; fail `0x3c182f1c` |
| 8 | `update_ota_boot_info` | Persist OTA boot record | str `0x3c165628`; ok log `0x3c183594` |
| 9 | `ota_check_and_change_boot_type` | Flip boot bank / type; notify stack | fail/ok `0x3c028548` / `0x3c028574` |
| 10 | `do_ota_rollback` | Restore previous bank boot info | code **`0x2c5b9e10`**; `__func__` `0x3c1658b4`; pool `0x2c5ba100` |
| 11 | `update_boot_type_to_normal` | Clear OTA-boot sticky state | str `0x3c165990`; pool `0x2c5ba544` |
| 12 | `init_xjxr_ota_checker` | Spawn post-OTA business checker | str `0x3c028660` |
| 13 | `handle_ota_checker_message` | Checker IPC | str `0x3c0284b8` |
| 14 | `notify_ota_check_result` | Publish checker outcome | str `0x3c028728` |
| 15 | A/B bank select | First OTA writes B while reading A | `[XR_FLASH] first ota 2 A/B flash…` `0x3c02b4f0` |
| 16 | `OtaMsgModel::startOtaApp` | LVGL/UI start apply | str `0x3c182764` |
| 17 | `OtaMsgModel::onHandleOtaConfirm` | User confirm dialog | str `0x3c18265c` |
| 18 | silent OTA pause/resume | Background OTA scheduling | `0x3c041574` / `0x3c041708` |
| 19 | `is_normal_boot` | Query boot mode before checker | code pool `0x2c5b92ec` → `0x3c1656d4`; owner band `FUN_2c5b8bfc` @ `0x2c5b8bfc` |
| 20 | `STARRY__MSG__CMD__OTA` | StarryNet OTA command id | str `0x3c030330` |

## Abort / error actions

| Name | Evidence |
|---|---|
| `ota unsupported file name` | `0x3c182ea0` |
| `ota unsupported error code` | `0x3c183044` |
| BLE disconnect / timeout | present per `FIRMWARE_FINDINGS.md` §4 (transfer abort) |
| `_on_ota_check_failed` → `reboot system` | `0x3c0283f4` / `0x3c02845c` |
| `failed to do ota rollback` | `0x3c03d208` |

## Code anchors (mapped)

| VA | Semantic name | Notes |
|---|---|---|
| `0x2c5b9e10` | `do_ota_rollback` | Ghidra listed size 38; Capstone shows full frame + norflash path; lit `do_ota_rollback+4` |
| `0x2c5b8bfc` | `is_normal_boot` (TRACE `__func__`) | Null-arg TRACE uses `is_normal_boot` literal |
| `0x2c5aa01c` | `OtaMsgModel_event_TRACE_set_sn` | Exported decomp; TRACE → LVGL event path |
| `0x2c48c450` | fault_cause_printer | Pool includes HardFault/SecureFault labels |
| `0x2c62c82c` | TRACE sink | Shared by OTA and OtaMsgModel |

## What is *not* in the verify path (negative)

- No `TrustZone` string; SecureFault is fault-decode only (`0x3c014f21`).
- No OTA-adjacent `RSA` / `ECDSA` / `image signature` strings observed.
- UI resource partition `0x3c3xxxxx` is outside this verify/program path.
