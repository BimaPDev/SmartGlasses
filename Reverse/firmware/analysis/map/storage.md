# Storage, NV/config and OTA — MYVU 1.0.11.53

Build pinned: `Reverse/firmware/x_1.0.11.53/platform_tester.bin`
size 7,042,632 · sha256 `1bde4643cfc0d25dcf6b738adecdf941995332c55e19ff038600a5a5f9abfd61`

Address model (PLAN): code `VA = file + 0x2C010000` · data `file = VA - 0x3BFD7CB0`.
Every offset below is a **file offset in that binary** unless written as "VA".

Oracle: `node Reverse/firmware/analysis/map/verify-storage.mjs` → `storage verification passed`.

---

## 0. Controls (stated first, per PLAN method rule)

| Control | Result |
|---|---|
| POSITIVE — SHA-256 round-constant K table (LE) | **present**, file `0x37744` (`982f8a42 91443771 cffbc0b5 a5dbb5e9`) |
| POSITIVE — AES S-box | **present**, file `0x2ba24` |
| POSITIVE — MD5 T table (LE) | **present** twice: `0x4acf28`, `0x5338d0` |
| NEGATIVE — asymmetric/PKI tokens (`RSA`, `ecdsa`, `ed25519`, `secp`, `mbedtls`, `x509`, `signature`, `PUBLIC KEY`) | **zero occurrences** |
| NEGATIVE — BL-scanner sanity: scan for calls to an off-by-one target | **0 sites** (scanner does not match noise) |

So: hash and symmetric primitives ARE detectable in this image by the same method that
finds nothing for signature verification. The absence of a signature gate is a measured
absence, not a failed search.

---

## 1. Flash layout — what the M55 image itself registers

The OTA "user" table is built in `ota_config.cpp`. Registration helper at file `0x534878`;
it bounds-checks `user <= 5` (`cmp r2,#5` at `0x53487e`, error string
`"OTA user number exceeds"` at `0x176a4c`) and copies a 24-byte descriptor into
`userInfo[user]` (stride 24 = `r*3<<3` at `0x534884`). Descriptor layout, proved by the
helper's own accesses: `+0` u8 user, `+1` u8 flash/type id, `+4` u32 startAddr
(fed to `app_flash_get_dev_id_by_addr` at `0x5348f2`), `+8` u32 length
(`ldrd r2,r3,[r5,#4]` at `0x53492e` passes start+len to the norflash register call).

Registrations made by this image (function at `0x5349c0`-`0x534a4e`):

| user | name string | startAddr (VA) | length | evidence |
|---|---|---|---|---|
| 5 | `_register_littlefs_user` @`0x176b44` | `0x28100000` | `0x180000` (1.5 MB) | literal `0x534a70`; `mov.w r3,#0x180000` @`0x5349ca` |
| 3 | `_register_m55_package_user` @`0x176b5c` | `0x2C010000` | literal `0xFC0F0000` | literals `0x534a7c` / `0x534a78` |
| 1 | `_register_m55_bootinfo_user` @`0x176b78` | `0x2C00C000` | computed at runtime | literal `0x534a84` |

Users 0/2/4 are not registered here — they belong to the BTH/M33 core
(`best1600_watch_bth.bin`), which this leaf did not disassemble.

Honesty note: `0xFC0F0000` is the literal stored as the M55-package *length*. As a byte
count it exceeds the address space, so its semantics are **not established**; it behaves
as "unbounded / rest of device" rather than a real bound. Do not quote it as a size.

### The two M55 banks (A/B)

`init_m55_ota_flash_start_addr` — file `0x53432c`:

```
0x534346  bl  read_boot_info(user=1, off=0, buf=sp+0x14, len=0x20)
0x53434a  ldr r2,[sp,#0x1c]          ; boot_word = bootinfo[+0x08]
0x53434e  cmp.w r2,#0xAAAAAAAA  -> 0x5343a0: StartAddr = 0x2C730000
0x534354  cmp.w r2,#0xBBBBBBBB  ->          StartAddr = 0x2C010000
          result stored at VA 0x3C46953C   (literal 0x5343b0)
```

| bank | boot word | M55 image base (VA) | file offset of the literal |
|---|---|---|---|
| A (default) | `0xBBBBBBBB` | `0x2C010000` | `0x5343b4` |
| B (OTA)     | `0xAAAAAAAA` | `0x2C730000` | `0x5343d0` |

**Bank stride = 0x730000 - 0x010000 = 0x720000 = 7,471,104 B = 7.125 MB**, which is the
"~7.12 MB per bank" figure, now derived rather than assumed. The image itself is
0x6B7648 = 6.71 MB, so ~0.41 MB of each bank is slack.

The combined word `0xAAAABBBB` (literal `0x5342e4`) is the paired boot-word value written
by `update_ota_boot_info`.

Resulting 16 MB picture (the parts this binary proves):

```
flash dev 0 (XIP window 0x2Cxxxxxx)     flash dev 1 (XIP window 0x28xxxxxx)
  below 0x2C00C000         reserved / bootloader
  0x2C00C000                boot info  (OTA user 1)
  0x2C010000 .. 0x2C72FFFF  bank A  (7.125 MB)     0x28100000 .. 0x2827FFFF  LittleFS
  0x2C730000 .. 0x2CE4FFFF  bank B  (7.125 MB)        (OTA user 5, 1.5 MB)
```

TIER: **CODE** for the layout itself (changing partition bounds means new instructions in
the register function). Nothing here is customisable without flashing.

### LittleFS

Real mbed/littlefs, not a stub: `../../services/fs/mbed/littlefs/lfs/lfs.c` at `0x172fcc`,
adapter `lfs_adapt_flash.c` at `0x17336c`, full `LFS_ERR_*` table `0x173170`-`0x17325f`,
`lfs_file_open/close`, `lfs_dir_open/read` at `0x173268`-`0x1732a5`. The adapter caches the
image in PSRAM (`lfs_flash_open1,already loaded:psram:%p,flash:%08x` at `0x1733d8`).
TIER: **DATA** — the filesystem contents live outside the OTA image; a file swap needs a
writer path (BLE file transfer or a flash programmer), not a firmware rebuild.

---

## 2. NV / preference store — the CONFIG tier

`../../thirdparty/star_air_lvgl/app/Persistence/lv_preference.c` (`0x41a9d8`).
This is the whole persistent-settings mechanism for the LVGL side.

### Record format (read out of the code, not guessed)

RAM image base **VA `0x3D653768`** (literals `0x6245bc`, and reloaded at `0x6242d6`).

| field | offset | evidence |
|---|---|---|
| `magic_number` | `+0x000` = `0xCAFEBABE` | literals `0x6243a4`, `0x6245c0`; compare at `0x62432c` |
| entry array | `+0x008`, stride **0x10** | `ldrsb [r3,#8]` @`0x6244d0`, `adds r3,#0x10` @`0x6244da` |
| entry.key | int8 (**signed byte**) | `ldrsb.w` — key space is −128..127 |
| entry.value | int64 at entry+8 | `ldrd r2,r3,[lr,#8]` @`0x6244e0`, logged as `%lld` |
| `count` | `+0x7C8` | `ldr.w r4,[r3,#0x7c8]` @`0x6244c2` |
| mirror/committed count, magic | `+0x7D0`, `+0x7D4` | consistency check @`0x624332`-`0x624344` |
| blob size | `0x7D8` | `mov.w r0,#0x7d8` @`0x6242e2` (logged at init) |
| load/copy size | `0x800` | `mov.w r2,#0x800` @`0x624300` |

**Capacity = (0x7C8 − 8) / 0x10 = 124 entries.** On a magic mismatch
(`"%s bad magic_number, preference->magic_number = %d"` @`0x41ab2c`) the store is reset,
not repaired — `count = 0`, magic rewritten, flush (`0x62435a`-`0x624376`).

API (file offsets): `get(key,&out)` `0x6244bc` · `put(key,value,…)` `0x6243b0` with wrapper
`0x6244a4` · `remove(key)` `0x6244fc` · `clear()` `0x624564` · `init()` `0x6242c4`.

### Key inventory

Keys are integers, not strings. The verifier re-derives this list at run time by scanning
every BL to `0x6244bc`/`0x6244a4` and taking the immediate moved into `r0` — it is a
*method*, so it cannot silently agree with a stale manifest.

78 call sites to `get`, 7 to the `put` wrapper. Distinct key ids observed:

```
1 2 3 4 5 7 10 11 12 13 14 15 16 19 21 22 23 24 28 30 31 37 39 42 43 45 47 48 49 50
52 53 54 55 56 59 60 61 63 71 110 111 112 113 114 115 116 117 118 119 120 121 122
```

Named by the log string in the same basic block:

| key | meaning | site | source file |
|---|---|---|---|
| 1 | `KEY_NOTIFY_ON_SCREEN` (pairs with 2) | `0x5ffbf0` | SmartLife `SceneManager.cpp` |
| 2 | `KEY_NOTIFY_VOICE_BROADCAST` | `0x5fd6c2` | `"get preference KEY_NOTIFY_VOICE_BROADCAST fail"` `0x19fcb8` |
| 16 | low-power wake-word with screen off | `0x57fdd8` | `setLowPowerWakeupScreenOff` |
| 21, 22 | flash self-test scratch keys | `0x4a6fc0`, `0x4a6f36` | `xjxr_starrynet_test_m55.c` |
| 24 | TTS state gate | `0x55bba4` | `ai_speech_tts_api.c` |
| 54 | glass-active record time | `0x60cb04` | `MessageModel::sendGlassActiveInfoMsg` |
| 111–122 | 13 consecutive avatar/hint counters | `0x592856`–`0x592b36` | `app/avatar/Hint.cpp` |

Related but string-named (same store, wrapped by the Assistant/Launcher layers):
`lpWakeupEnable` `0x1893d0`, `asrOnscreenEnable` `0x1893f8`, `continueDialogEnable`
`0x189424`, `isAsrResultScreenEnable` `0x189eb0`, `isChatGptTTSPlayEnable` `0x189ec8`,
`isChatGptCardDisplayEnable` `0x189ee0`, `isContinuousDialogueEnable` `0x189efc`,
`isLowPowerWakeupEnable` `0x189f18`, `isLowPowerWakeupScreenOffEnable` `0x189f30`,
`wearInputEnable` `0x180fd8`, `isCardEnable` `0x18e524`,
`KEY_LAUNCHER_STANDBY_MOVE_HINT_COUNT` `0x1a8dd4`, display brightness `0x45631c`.

### Who can write it

- **Phone → glasses:** `Starry.WriteSwitchKey` / `Starry__WriteSwitchKey` (`0x2fea8`,
  `0x2fec0`), handler `handleWriteSwitchKey` (`0x33068`), ack `ack_remote_switch_key`
  (`0x33050`); read side `Starry.ReadSwitchKey` (`0x2fed8`). Exact wire encoding is
  leaf-1.4's surface.
- **Console:** `lv_preference_command` (`0x41ab84`) — documented sub-commands are only
  `open_dump` / `close_dump` (`0x41aa4c`), plus `lv_preference_dump` and
  `lv_preference_clear`.

TIER: **CONFIG.** These 50-odd keys are the entire no-flash customisation surface:
64-bit values, 124 slots, reset-on-corruption, writable over BLE. This is where to start
for any behaviour change. Nothing here requires touching the image.

---

## 3. OTA mechanism

### Package

Two files per release, as shipped: `best1600_watch_bth.bin` (BTH/M33, 1,340,040 B) and
`platform_tester.bin` (M55 app, 7,042,632 B). The transfer layer keys files by name to a
per-file MD5: `binMd5Map cannot find md5 for: %s` (`0x195c2c`), `get update file md5: %s`
(`0x195bbc`), `file md5 is not match: %s` (`0x195d14`).

### What is checked

1. **Transfer MD5** — `confirm_received_file_md5` (`0x353f8`), `"transfer check md5 failed"`
   (`0x2a224`), `"ota failed to check transfer file md5"` (`0x19520c`).
2. **Written-flash MD5 read-back** — `checkWrittenFlashMd5` (`0x19537c`),
   `"ota failed to check written flash md5"` (`0x195114`), `"final md5 check failed: %s"`
   (`0x1953e4`) / `"final md5 check succeed"` (`0x195a74`), helper `isMd5Equal` (`0x195a68`).
3. **Program-and-compare** — `ota_flash_program` (`0x1764bc`) with
   `"needFlush == 1, read and cmp failed"` (`0x176520`).
4. **Boot-info update** — `update_ota_boot_info` (`0x176644`),
   `app_update_magic_number_of_user_image` (`0x1765e4`).

### What is NOT checked

No signature, no certificate, no public key, no asymmetric primitive of any kind — see the
control table in §0. The only integrity mechanism on the OTA path is MD5, an unkeyed hash
that the uploader supplies alongside the image. Anyone who can drive the transfer can
compute a matching MD5 for arbitrary content.

**Inherited claim "no signature gate: MD5 + A/B only" — VERIFIED for 1.0.11.53**, against a
positive control proving the search would have found crypto had it been there.

### The BLE/ring side

A second OTA path exists for the paired ring: `ring_ota.c` (`0x2adbc`), state machine
`ring_ota_state_handle_packet` (`0x2b5b4`), CRC16/CRC32 (`0x2b5d4`, `0x2b658`) — note it
uses CRC, weaker still, and it targets the ring, not the glasses.

TIER: **DATA** for anything inside the image that can be byte-patched and re-MD5'd (fonts,
images, strings, style operands); **CODE** for anything needing new instructions. The OTA
transport imposes no additional barrier on either.

---

## 4. A/B rollback — is there one?

There is a rollback function, and it runs from the **application**, not from a bootloader
watchdog. `besair_main.c`, file `0x4c2ca8`-`0x4c2d5e`:

```
r4 = bes_ota_m55_init()                     ; 0x4c2ca8 -> 0x534440
if (r4 != 0) skip the whole A/B block       ; 0x4c2cb0
TRACE "AB/BA boot"                          ; str @0x3cb00, line 0x2c2
r5 = get_boot_ext_repeat_num()              ; 0x4c2cc4 -> 0x53449c
TRACE "get ext repeat num: %u"              ; str @0x3cb0c
cmp r5, #1                                  ; 0x4c2cde  (bytes 01 2d)
beq -> 0x4c2d48 : TRACE "do ota rollback"   ; str @0x3cb64
                  do_ota_rollback()         ; 0x4c2d5a -> 0x534568
                  on 0 -> "failed to do ota rollback" (0x3cb74)
else  -> TRACE "set ext repeat num to 1"    ; str @0x3cb24
         set_boot_ext_repeat_num(1)         ; 0x4c2cf6 -> 0x5344f8
```

And `do_ota_rollback` itself short-circuits: `"%s normal type, do nothing"` (`0x3c14e590`,
branch at `0x53462c`). It only rewrites boot info when the running boot type is the OTA
type — `"failed to update boot info of flash 1"` / `"flash 0"` (`0x53466a`, `0x534654`),
matching the `update_boot_type_to_normal` helper (`0x1769ac`).

The other half of the handshake is `xjxr_ota_checker.cpp` (`0x28368`):
`ota_check_and_change_boot_type` (`0x284a4` / `0x284d0`) flips the new bank to "normal"
once a business-level check passes (`_on_business_check_succeed` `0x28488`), and
`_on_ota_check_failed` (`0x28350`) reboots (`"reboot system"` `0x283b8`).

**So, honestly:**

- Rollback is **not** a bootloader-level automatic revert that this image can demonstrate.
  It is application code, reached only if the new image executes as far as `besair_main`
  line ~0x2c2, and it is a **no-op once boot type has been marked normal**.
- A new image that faults *before* that point never runs it. The v5/v6 incident
  (crash during LVGL splash object creation, per `BOOTLOOP_EXPLAINED.md`) is consistent
  with that, and this code path is the mechanism that explains why the pair was not
  rescued — but the bootloader half lives in the BTH image / boot ROM, which this leaf did
  **not** read. Treat "there is no automatic rollback" as *strongly supported by the M55
  side, not proven end-to-end*.
- Practical rule for flashing: **assume you get no free undo.** The boot-time execution
  order risk named in CLAUDE.md is the real risk, and A/B does not cover it.

---

## 5. Customisation tier summary

| Surface | Tier | Why |
|---|---|---|
| ~50 `lv_preference` keys, int64 values, 124 slots | **CONFIG** | writable over BLE via `Starry.WriteSwitchKey`; no flash |
| `lv_preference_command open_dump/close_dump`, `clear` | **CONFIG** | console command, reversible |
| LittleFS contents at `0x28100000`, 1.5 MB | **DATA** | outside the OTA image; needs a writer, not a rebuild |
| Image payload bytes (fonts/images/strings/operands) | **DATA** | OTA accepts any content whose MD5 matches |
| Partition bounds, bank bases, register table | **CODE** | literals inside instruction streams |
| Rollback / boot-type policy | **CODE** | and unrecoverable if it faults early — see §4 |

## 6. Not established

- Semantics of the `0xFC0F0000` M55-package length literal.
- Which flash device/partition backs `lv_preference` (the flush callee `0x4bc8bc` was not
  traced to a norflash user or an `lfs_` path).
- OTA users 0, 2, 4 — registered by the BTH image, not read here.
- The bootloader side of the A/B decision (boot ROM / `best1600_watch_bth.bin`).
- Names for the 40-odd numeric preference keys that have no adjacent log string.
