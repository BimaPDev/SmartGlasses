# The boot logo — where it is, and why the OTA cannot reach it

**Confirmed on hardware 2026-09-15:** after flashing the BIMA rebrand, the **power-off**
screen shows BIMA and the **boot** screen still shows MYVU. They are two different
assets. The boot one is not in the OTA.

## What the OTA contains, exhaustively

| Check | Result |
|---|---|
| Image descriptors of **every** colour format in `platform_tester.bin` | 344; only 2 non-`cf9`, neither logo-sized |
| **Named** images, whole-file scan (not one registration block) | 329 — **none** boot/splash/startup |
| Pointer references to the MYVU wordmark descriptor | exactly 1, the resource registry |
| References to the `"power_off"` name string | 3 — one registers, two look up, **both shutdown** |
| Images in `best1600_watch_bth.bin` | **zero**, any format |
| Image-like data in early boot (`0x0`–`0x28350`) | none; every 4 KB block is code-like (entropy 6–7) |

The one MYVU image is named `power_off`, and its only consumers are
`LauncherProvider::shutDownWithAnim` and `lv_power_ui.c`'s `play_shutdown_animation`.

**Method note:** the first pass missed this because it enumerated only `cf=9` images and
read only ONE registration block — 104 pairs out of 342 images. Both gaps were pointed
out and closed. Enumerate by format AND scan the whole file before concluding absence.

## There IS a filesystem, and a way to write to it

This is the part that might still lead somewhere.

```
/mbed/littlefs/lfs/lfs.c              LittleFS
/extra/libs/fsdrv/lv_fs_lfs.c         LVGL's LittleFS driver
/src/font/lv_font_loader.c            fonts loaded from FILES at runtime
B:lv_font_air_full_cn_20_bpp1.bin     drive letter is B:
```

So assets already live outside the firmware image — the CN font is a file, not compiled
in. A boot logo could be too.

And `xjxr_starrynet/service_m55/file_transfer/file_transfer.c` is a **chunked,
MD5-verified, bidirectional file transfer over BLE**, with a destination directory:

```
storage_dir:%s     name:%s     md5:%s; size:%d
starrynet_send_file        receive_file_transfer_message
process_syn_message        process_chunk_data
send_receiver_ack_message  confirm_received_file_md5
```

## Status

- **Fixable and fixed:** power-off logo, 179 UI strings, standby rings.
- **Not reachable by OTA:** the boot logo. It is loaded before the LVGL app exists, by
  the bootloader, from a partition or file the update never carries.
- **Open lead:** whether the boot logo is a file on `B:`, and whether the file-transfer
  service will write there. `lfs_dir_open` / `lfs_dir_read` exist, and there is an
  `eshell` (`/utils/eshell/`, `/apps/app_eshell/`) — if either can be reached over a
  transport, the filesystem could be listed and the question answered directly.

Until then: **boot stays MYVU** without physical flash access.
