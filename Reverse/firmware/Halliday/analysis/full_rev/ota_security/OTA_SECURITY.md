# Halliday ATS3089 OTA security surface (1.00_2601211113)

**Leaf:** 1.5  
**Binary:** `Reverse/firmware/Halliday/HallidayOfficialOTA.bin` → inner `app.bin` (1662592 B)  
**Load base:** `0x10000000` (Thumb XIP; string VA = `0x10000000 + app.bin file_off`)  
**Sources:** `Reverse/firmware/Halliday/tools/export_halliday.py`, outer/inner `ota.xml`, `Reverse/firmware/Halliday/export/official/strings/categorized/ota.txt`, `strings/app_ascii.txt`

## Verdict

Halliday OTA is **Actions Semi libota** on **Zephyr ATS3089** (`ats3089_dev_watch`): phone delivers an **outer AOTA** capsule, device stages to **NAND temp** (`/NAND:/ota.bin`, partition `fw0_temp`), verifies **CRC32** at container, manifest, and per-chunk levels, then flashes **SYSTEM/DATA** partitions. Integrity is **checksum/CRC**, not image signing — **no RSA/ECDSA/secure-boot strings** appear in the OTA apply neighborhood (BLE SMP “encryption” strings are link-layer only).

**Resume / recovery:** breakpoint file (`OTA_BP`), `OTA_UPG_FLAG` / `REC_OTA_FLAG`, and a **`RECOVERY`** boot path. Failed verify triggers **retry** (`OTA upgrade retry after verify failed`). Unlike Star Air dual-bank rollback, this stack emphasizes **temp-partition staging + manifest gates**; explicit rollback API names were **not** observed in OTA strings.

## Pack layout (phone → glasses)

Three nested containers (see `Reverse/firmware/Halliday/tools/export_halliday.py`):

```
HallidayOfficialOTA.bin
└── [outer AOTA]  magic "AOTA", FAT @ +512, per-file CRC32
    ├── ota.xml          firmware_version + partition table
    ├── TEMP.bin         type TEMP, file_id 254 → fw0_temp
    ├── res.bin          LZMA-compressed resources (orig > file_size)
    └── sdfs_k.bin       compressed SDFS payload
        TEMP.bin:
        └── ACTHHTCA header (40 B) + boot_stub + LZMA chunks ("LZMA\x10\x00\x00\x00")
            └── [inner AOTA] → app.bin (SYSTEM fw0_sys) + sdfs.bin + inner ota.xml
```

| Layer | Path | Members | Role |
|---|---|---|---|
| L1 outer AOTA | `official/layer1/` | `ota.xml`, `TEMP.bin`, `res.bin`, `sdfs_k.bin` | OTA package delivered over BLE/SD |
| L2 TEMP decode | `official/layer2/` | `actions_boot_header.bin`, `boot_stub.bin`, `inner_aota_container.bin` | Bootloader wrapper + LZMA expand |
| L3 inner AOTA | `official/layer3/` | `app.bin`, `sdfs.bin`, `ota.xml` | Main Zephyr+LVGL app + on-flash SDFS |

Outer AOTA header fields: `magic`, container checksum, `file_count`, `fat_offset`; each FAT entry holds 16-byte name, offset, size, **CRC32** (validated by export tool via `zlib.crc32`). Example: `TEMP.bin` stored CRC `0xf81cb243` matches payload (`TEMP.bin.meta.json`).

## Manifest gates (`ota.xml`)

Both outer and inner manifests declare the same version block:

| Field | Value (official) |
|---|---|
| `version_code` / `version_res` | `0x10000` |
| `version_name` | `1.00_2601211113` |
| **`board_name`** | **`ats3089_dev_watch`** |

Partition checksums (CRC32 in XML, checked by `ota_manifest_check_data` / `ota_verify_file`):

| Layer | Partition | File | `checksum` |
|---|---|---|---|
| Outer | TEMP / `fw0_temp` | `TEMP.bin` | `0xf81cb243` |
| Outer | DATA / `res_a` | `res.bin` | `0xd68fa36f` |
| Outer | DATA / `fw0_sdfs` | `sdfs_k.bin` | `0x95026401` |
| Inner | SYSTEM / `fw0_sys` | `app.bin` | `0xe0362806` |
| Inner | DATA / `fw0_sdfs` | `sdfs.bin` | `0xedd8b93b` |

`orig_size` > `file_size` on compressed outer DATA parts → device must **decompress then CRC** against manifest.

## CRC / checksum pipeline

| Stage | Symbol / log | File off → VA |
|---|---|---|
| AOTA member CRC | export `parse_aota_container` | tool-side `zlib.crc32` vs FAT CRC |
| Image header CRC | `ota_image_check_head_crc` | `0x181b39` → `0x10181b39` |
| Image payload CRC | `ota_image_calc_crc` | `0x181b26` → `0x10181b26` |
| Full image check | `ota_image_check` / `ota_image_check_data` | `0x181b67` / `0x181b52` |
| Storage file CRC | `ota_caculate_storage_file_crc` | `0x181638` → `0x10181638` |
| Post-write verify | `ota_verify_file` / `ota_write_and_verify_file` | `0x181656` / `0x181696` |
| Progress verify | `ota_upgrade_verify_along` | `0x1816b0` → `0x101816b0` |
| Fail logs | `check file %s: crc_orig 0x%x, crc_calc 0x%x` | `0x181211` → `0x10181211` |
| Fail logs | `bad data crc` / `file %s, verify failed` | `0x1812f3` / `0x18123d` |
| Pass log | `file %s, verify pass` | `0x181254` → `0x10181254` |
| BLE chunk CRC | `psn%d: crc check error, orig 0x%x != 0x%x` | `0x180172` → `0x10180172` |

Retry path: `OTA upgrade retry after verify failed` (`0x181269` → `0x10181269`).

## Board name + version gate

Before flash, `ota_is_need_upgrade` compares running firmware to manifest (`ota fw version:` / `OTA new fw version:` logs):

| String | VA | Behavior |
|---|---|---|
| `cur_ver->board_name: %s, img_ver->board_name: %s` | `0x10181389` | Logs both board strings |
| **`unmatched board name, skip ota, not return`** | **`0x101813ba`** | Hard gate — wrong platform skips upgrade |
| `ota image is same or older, skip ota` | `0x101813e5` | Downgrade / same-version skip |
| `cannot found tag <board_name>` | `0x10181cc8` | Manifest parse failure |

Official OTA and export `platform_id` both read **`ats3089_dev_watch`**. Custom HomeBuddy OTA uses the same board string (same version block) — gate passes; differentiation is **content hash**, not board_name.

## FSM: `ota_app` (UI + transport orchestration)

Entry from main app when upgrade is requested (`upgrade request: param_size %d`, `ota type: 0x%x`):

| Phase | Symbols / logs | VA band |
|---|---|---|
| Init | `ota_app_init` → `ota_app_init_bluetooth` / `ota_app_init_sdcard` | `0x1014c262` |
| Main loop | `ota_app_main` | `0x1014c286` |
| Start/stop | `ota_app_start` / `ota_app_stop` | `0x1014c1e1` / `0x1014c1ef` |
| Backend hook | `ota_app_backend_callback` | `0x1014c1fc` |
| Type guard | `ota_type_process_allow`, `ota_type %d, is not factory?` | `0x1014c26f` |
| UI | `ota_view_init`, `_ota_view_handler`, `ota_view` | `0x1014c315`+ |
| BLE state | `ble_to_app_ota_state state: %d` | `0x1015a313` |
| UX lock | `OTA is running, ignore key event` | `0x101593ce` |
| Call block | `btcall unsupport ota, skip...` | `0x1014c08a` |

Backends: **`ota_backend_bt_*`** (BLE OTA protocol) and **`ota_backend_sdcard_*`** (local `/NAND:/ota.bin`). Header path: `WEST_TOPDIR/framework/ota/include/ota_backend.h` (`0x10180a0b`).

## FSM: `ota_rx` (receive thread)

Dedicated RX worker decouples transport from flash writer:

```
ota_rx_init → ota_rx thread started → [ota_rx wait rbuf] → write ota_storage_* → ota_rx thread exited
```

| Item | Evidence | VA |
|---|---|---|
| Thread | `ota_rx_thread` / `ota_rx` | `0x10181666` / `0x10181041` |
| BLE cmds | `ota_cmd_h2d_request_upgrade`, `ota_cmd_h2d_connect_negotiation`, `ota_cmd_h2d_send_image_data`, `ota_cmd_d2h_report_image_valid` | `0x10180375`–`0x10180407` |
| Tunables | `ota_unit_size %d, interval %d, ack_enable %d` | `0x101800a3` |
| NAND path | `/NAND:/ota.bin` | `0x1014c1aa` |
| Storage | `ota_storage_write_sd_nand`, `ota_storage_erase`, `ota_storage_is_clean` | `0x1018086d` band |

## FSM: `ota_upgrade` (apply engine)

Core upgrade state machine (`ota state: %d->%d`, `upadte ota state: %d`):

| State / flag | String | VA |
|---|---|---|
| Init wait | `ota state <%d> is not OTA_INIT, skip upgrade` | `0x1018129e` |
| Resume | `ota status -> OTA_INIT, wait for upgrading resume!` | `0x101814eb` |
| Upgrade flag | `OTA_UPG_FLAG` | `0x1014c04c` |
| Recovery flag | `REC_OTA_FLAG` | `0x1014c062` |

Apply sequence (symbol order from strings):

1. **`ota_upgrade_init`** / **`ota_upgrade_check`** — attach backend (`ota_upgrade_attach_backend`).
2. **`ota_image_open`** → **`ota_manifest_parse_partitions`** / **`ota_manifest_parse_file`**.
3. **`ota_image_check`** (head + data CRC via **`ota_image_calc_crc`**).
4. **`ota_is_need_upgrade`** — board_name + version gate.
5. **`ota_partition_update_prepare`** → **`ota_partition_erase_part`** (skips non-temp parts if upgrade pending).
6. **`ota_write_file_normal`** / **`ota_write_and_verify_file`** with **`ota_upgrade_verify_along`**.
7. **`ota_update_fw_version`** / **`ota_update_state`** → **`upgrade successfully!`** or **`upgrade failed, err %d`**.

Breakpoint resume: `ota_breakpoint_save/load`, `cannot found OTA_BP`, per-file state in `ota_breakpoint_*` (`0x101821a7` band). Temp partition guard: `part[%d]: file_id %d not ota temp partition, skip erase` (`0x10180b3f`).

## Recovery path

| Evidence | VA | Notes |
|---|---|---|
| `RECOVERY` | `0x10182005` | Recovery boot mode label |
| `invalid flag_is_recovery_app` | `0x101815ac` | Recovery app flag check |
| `recovery alarm: after %d ms` | `0x1016f718` | Timer-driven recovery |
| `reboot ota` | `0x1015ec7a` | OTA-triggered reboot |

Recovery OTA likely uses **`REC_OTA_FLAG`** distinct from normal **`OTA_UPG_FLAG`**; exact bank swap policy not string-documented.

## Security implications (evidence-bound)

- **Integrity model:** CRC32 at AOTA FAT, `ota.xml` partition checksums, streaming BLE chunk CRC, and post-write `ota_verify_file`. **No image signature verifier** observed in libota string set.
- **Platform lock:** `board_name` must match (`ats3089_dev_watch`); prevents cross-SoC packages but **not** authorship proof.
- **Version lock:** same-or-older images skipped — blocks casual downgrade, not repacked same-version malware if CRC matches.
- **Custom firmware:** HomeBuddy custom OTA passes same `board_name`/version metadata; a CRC-correct repack can flash if the phone app accepts the file (transport auth is outside this leaf).
- **Temp staging:** failed upgrades may leave partial data in `fw0_temp` / NAND; breakpoint resume reduces re-download cost but increases stale-state exposure until erase completes.
- **UI denial:** active OTA blocks key events and defers other UI — availability, not integrity.

## libota provenance

`libota: version %s ,release time: %s:%s` @ `0x1018227a` — Actions framework OTA library on Zephyr (`WEST_TOPDIR/framework/ota/`).

## Related artifacts

- Export layout: `Reverse/firmware/Halliday/export/README.md`
- Container tool: `Reverse/firmware/Halliday/tools/export_halliday.py`
- VA index: `manifest.json` (this leaf)
- String buckets: `Reverse/firmware/Halliday/export/official/strings/categorized/ota.txt`
