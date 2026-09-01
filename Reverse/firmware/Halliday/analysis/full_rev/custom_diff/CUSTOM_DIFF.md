# Halliday official vs HomeBuddy custom — `app.bin` diff

Leaf **1.6** · load base **`0x10000000`** · VA = `0x10000000 + file_offset`

## Scope

| Input | Path | MD5 |
|---|---|---|
| Official `app.bin` | `Reverse/firmware/Halliday/export/official/layer3/app.bin` | `32f7cdc25818cdcb853d04702687fc8a` |
| Custom `app.bin` | `Reverse/firmware/Halliday/export/custom/layer3/app.bin` | `9dc263a12606e06231bbd41fd09bdb18` |

Both images are **1,662,592 bytes**. Outer OTA (`HallidayOfficialOTA.bin` vs `HomeBuddyHallidayCustomOTA.bin`) differs only in the inner **`app.bin`** payload; layer1/layer2/sdfs partitions are byte-identical per export manifests.

## Version parity

Both builds advertise the **same version string**:

```
build_ver=1.00_2601211113
platform_id=ats3089_dev_watch
```

`summary.json` confirms identical platform metadata and partition layout; only `app_bin_md5` and a handful of string-count deltas (+1 ascii, −1 source_files, −1 ble_bluetooth, −1 lvgl_ui, +1 halliday) change between official and custom.

## Diff totals

| Metric | Value |
|---|---|
| Contiguous diff runs | **114** |
| Total changed bytes | **1216** |
| Unchanged bytes | 1,661,376 (99.93%) |

Machine-readable run list: [`diff_regions.json`](diff_regions.json) (114 entries, each with hex previews and nearby strings).

## Region map (29 clusters, gap ≤ 64 B)

### 1. Image header — `0x1c` (8 B)

First divergence is at offset **0x1c** inside the `ACTHHTCAu` Actions image header. Both builds share identical magic, build stamp, and size fields through 0x1b; bytes **0x1c–0x23** differ (likely checksum/CRC over the image body). Any post-link patch to `app.bin` would require updating this field.

### 2. Early/mid code patches — `0x18062` … `0x7b5ac` (38 runs, 84 B)

Small Thumb patches scattered through executable regions:

- **4-byte aligned** changes at `0x18062`, `0x180a2`, `0x1e8c2`, `0x3d0a4`, `0x3d2ea`, `0x413a4`, `0x45f44`, `0x7b5ac` — decode as Thumb32 `BL`/`B.W` or `LDR` literal pools with retargeted immediates.
- **Single-byte** tweaks at `0x20c94`–`0x20cd4` (e.g. `0x2f→0x0d`, `0x51→0x41`) — register/immediate nudges in a tight instruction sequence.
- **2-byte** changes at `0x1d4b4`, `0x2fffa`, `0x3d354` — halfword operand fixes.

**Hypothesis:** collateral link-time relocation after **837 bytes** of new code were inserted (see §4). Patches point into the injected stub arena rather than rewriting large functions in place.

### 3. High-code byte ladder — `0x13f9f4` (7 B)

Seven consecutive single-byte edits forming a descending then scrambled sequence (`0x8a→0x87→…→0x33→0x89→0x8a`). Looks like a compact jump table or encoded opcode row adjusted after code movement.

### 4. Injected Thumb code — `0x1407f4` … `0x144ab8` (58 runs, **837 B**)

Largest cluster. Official bytes are **zero-filled padding**; custom fills the gap with **ARM Thumb-2 machine code** (visible as `10b5`, `4bf6`, `f7ff`, `bd10` prologue/epilogue patterns in hex previews).

Sub-clusters:

| Span (offset) | Diff bytes | Notes |
|---|---|---|
| `0x1407f4` | 28 | Reordered 28-byte block (data or inline literal pool) |
| `0x14456c`–`0x144624` | 164 | Primary stub entry; official all `0x00` |
| `0x1446d8`–`0x144750` | 110 | Continuation stubs |
| `0x144808`–`0x144ab8` | 535 | Largest stub bundle; ends near `aacd`/`aped` rodata |

Nearby custom-only disassembly fingerprints (`"pGpG"`, `Bx!*`, `L$hD`) are mis-aligned ASCII from raw instruction bytes, not source strings.

**Hypothesis:** HomeBuddy author injected helper/hook functions into a padding cave and rewired ~7 branch sites (§2) to call them—likely to override clock rendering or notification filtering without recompiling the full Zephyr tree.

### 5. Clock view string — `0x14d439` (58 B)

| Build | VA `0x1014d439` | Content |
|---|---|---|
| Official | source path | `WEST_TOPDIR/application/bt_watch/src/launcher/clock_view.c` |
| Custom | format string | `HomeBuddy-v3  %s %02u/%02u` |

The adjacent `_clock_view_select` symbol (`0x14d4a5`) is **unchanged** in both builds. Official used the `.c` path as a compile-path breadcrumb; custom repurposes the same rodata slot for a **HUD watermark** (`HomeBuddy-v3` + date/time format).

This is the sole `halliday.txt` string addition in the custom export.

### 6. Notification app-ID whitelist — `0x15030d` … `0x15047d` (16 runs, 229 B)

Null-terminated bundle-ID table (immediately before `global_appid` / `Notify_SetEnable` strings). Same layout and slot count; **values swapped**:

| Official bundle ID | Custom replacement |
|---|---|
| `com.amazon.mShop.android.shopping` | `com.google.Gmail` |
| `com.amazon.Amazon` | *(removed / NUL pad)* |
| `com.ebay.mobile` | `com.fpirpilidis.clearviewapp` |
| `com.ebay.iphone` | *(removed)* |
| `com.dd.doordash` | `com.tplink.tapo` |
| `doordash.DoorDashConsumer` | *(removed)* |
| `com.paypal.android.p2pmobile` | `com.viber` |
| `com.yourcompany.PPClient` | `com.apple.AppStoreConnect` |
| `com.venmo` / `net.kortina.labs.Venmo` | `com.xiaomi.mihome` |
| `com.ubercab.eats` / `com.ubercab.UberEats` | `com.google.Maps` |
| `com.squareup.cash` | *(removed)* |

Unchanged entries include Reddit, Discord/Lark/Slack block above the table, and calendar apps below (`com.google.android.calendar`, Apple Calendar, etc.).

**Hypothesis:** `Notify_EnableInit` walks this table to seed default notification sources for `notify_list_view.c` (`0x15148b`). Custom build prioritizes HomeBuddy ecosystem apps (ClearView, Tapo smart home, Mi Home, Gmail, Maps) over shopping/payment apps present in retail firmware.

## What did *not* change

- All `xs_app` source path strings except the clock-view slot above.
- BLE/Halliday service names (`Halliday Glasses`, `Halliday SPP`).
- LVGL framework, view_manager, launcher_app scaffolding.
- `Notify_SetEnable` / `Notify_EnableInit` API strings (only upstream ID table differs).

## Reverse-engineering next steps

1. **Disassemble** custom-only region `0x1014456c`–`0x10144ab8` and map cross-references from the seven 4-byte branch patches.
2. **Xref** `_clock_view_select` to find where `0x1014d439` format string is loaded; confirm HUD overlay path.
3. **Trace** `Notify_EnableInit` → package table at `0x1015030d` to learn filter semantics (allow-list vs icon mapping).
4. **Recompute** header checksum at `0x1000001c` after any further `app.bin` patch to produce bootable OTAs.

## Related artifacts

- [`manifest.json`](manifest.json) — function anchors + patch_regions
- [`diff_regions.json`](diff_regions.json) — all 114 runs with hex previews
- Export catalog: `Reverse/firmware/Halliday/export/README.md`, `summary.json`
