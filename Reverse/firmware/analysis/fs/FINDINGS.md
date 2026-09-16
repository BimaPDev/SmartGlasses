# The device filesystem: what it is, and what can be done to it

Every claim below is measured by a script in this directory. Nothing here is asserted
from reading code by eye.

```sh
node Reverse/firmware/analysis/fs/verify-lfs-readonly.mjs        # 11 checks
node Reverse/firmware/analysis/fs/verify-fs-drives.mjs           # 10
node Reverse/firmware/analysis/fs/verify-file-transfer.mjs       # 29
node Reverse/firmware/analysis/fs/verify-listing-reachable.mjs   #  8
node Reverse/firmware/analysis/fs/verify-filenames.mjs           #  5
```

## 1. The filesystem is READ-ONLY to the application

`lfs_adapt_flash.c` contains, literally:

```
error: Write is not supported!!!
```

The partition is loaded flash → PSRAM at startup (`lfs_flash_open1`, `lfs_flash_open2`,
`Load all data to psram start/end:%08x`) and served from RAM. **Nothing on the device
writes it through this adapter.** That single string is the most consequential finding
here: it closes "just push a replacement file" as an approach.

## 2. One drive, one file

Exactly one drive-qualified path exists in the whole image:

```
B:lv_font_air_full_cn_20_bpp1.bin
```

So the filesystem holds the Chinese font, loaded at runtime by `lv_font_loader.c`. The
LVGL LittleFS driver is complete — `lv_lfs_file_open`, `lv_lfs_dir_open`,
`lv_lfs_file_remove` all exist — but the firmware only ever asks it for that one file.

*Method note:* a loose `^[A-Z]:\S+$` matcher reported eleven drives, all of them random
binary (`D:Ds`, `H:.eJE`). The gate requires a plausible extension and NUL termination,
and carries a planted-path control.

## 3. There IS a file-push protocol — protobuf `ShareMessage` over BLE

15 operations:

```
DEFAULT  PULL  SIGNAL  CANCEL
SENDER_SYN  SENDER_DATA  SENDER_FINISH  SENDER_FAIL  SENDER_CANCEL
RECEIVER_ACK  RECEIVER_DATA_ACK  RECEIVER_FINISH  RECEIVER_FAIL  RECEIVER_CANCEL
RECEIVE_OTA_FINISH
```

Fields: `dirPath`, `taskId`, `fileInfos`, `fileName`, `md5`, `chunkData`, `chunkSize`,
`chunkStart`, `chunkEnd`, `totalSize`, `count`, `packageName`. Codec is protobuf-c
(`share_message__pack`), implementation in `file_transfer.c`.

It is a real, chunked, MD5-verified transfer with per-chunk acks — and a `PULL`, which
fetches a file **by name**.

## 4. No directory listing is reachable from the phone

None of the 15 operations is list-shaped. `lv_lfs_dir_open` exists but its name string
has exactly **one** reference — the driver's own callback table, not a dispatcher.

**Positive control:** the same detector, pointed at `REPLY_STREAM_TYPE`, finds
`GET_LIST`, `SEND_LIST`, `LIST_SUCCESS`, `BINDER_LIST` (those belong to the
notification-reply channel, not the filesystem). So the absence in the file-transfer
family is a measurement, not a failed search.

**Consequence:** you can fetch a file if you already know its name; you cannot ask what
is there.

## 5. No boot-logo file is referenced anywhere

Every NUL-terminated data filename in the image was enumerated. None matches
logo/splash/boot/brand/myvu/startup. The bth image references none either. Control: the
same filter finds a planted `boot_logo.bin`.

Combined with the image-registry scan in `../map/boot_logo.md` — 344 image descriptors
across every colour format, 329 named, none boot-related — the boot logo is not in the
OTA and is not a file this firmware knows about.

## Abandoned: the LittleFS geometry

`block_size` and `block_count` are read from a **runtime** `lfs_config`
(`ldrd r5,r3,[r4,#0x1c]` then `mul`, at file `0x52ADEE`); the flash base comes from
config fields `+0x4c`/`+0x50`. A scan of the entire PSRAM data region finds no static
`lfs_config`, with a planted-struct control proving the matcher works.

Recovering the geometry needs the device, not the binary. Recorded as a handoff in
`.unlazy/fs-probe/GATES.md`.

## What this means

| Want | Possible? |
|---|---|
| List the device's files | **No** — no listing operation exists |
| Fetch a file you can name | Probably — `PULL` exists, untested |
| Write a file to the filesystem | **No** — the adapter refuses writes |
| Replace the boot logo | **No** — not a file, not in the OTA |
| Put your own data on the device | Yes, but via the firmware image, not the filesystem |

The filesystem is a delivery mechanism the vendor uses for one font. It is not a
writable store, and it is not the way to reach the boot logo.
