# Firmware Address Audit

**Date:** 2026-09-02
**Scope:** every hand-authored address claim under `Reverse/firmware/**`, ground-truthed against the actual binaries.
**Result:** CLEAN — all address claims accurate. One BTH banner offset error found and fixed.

---

## Why this audit exists (the bootloop root cause)

A firmware patch bricked the glasses (v5/v6 hard bootloop). Part of what masked the cause
was an **address-alias mistake**: a string was read off the wrong memory window.

The same bytes are reachable through two runtime windows, and they are **not** the same base:

- Naïve/wrong: treat a string as `0x3C000000 + file_off`.
- Correct: TRACE format strings remap to `file_off + 0x3BFD7C0C`.

The gap is `0x3C000000 − 0x3BFD7C0C = 0x283F4` (≈ 165 KB). Reading at the wrong base landed
on **unrelated ASCII** (the `0x3C` alias collides with Phone/StarryNet strings), which mislabeled
a boot-time widget constructor as "idle-HUD only." The veneer that created LVGL objects then ran
during splash/boot and bootlooped.

**One-line takeaway:** an address that was ~165 KB off, from using the wrong alias base, mislabeled
what the code did — so a function that runs at boot got hooked as if it only ran later.

See also: `hud_ready/splash_vs_idle/SPLASH_VS_IDLE.md` (address model) and
`BATT_CIRCLE_POSTMORTEM.md` (the LVGL-create mechanism).

---

## Canonical per-image address rules

For every image, **`file_off = VA − base`**. Read the actual bytes before trusting any label
(`dd if=<bin> bs=1 skip=$((0xOFF)) count=N | xxd`).

| Image | File | Size | Base / rule |
|---|---|---|---|
| **M55 app** | `x_1.0.12.83/platform_tester.bin` | `0x6753FC` | `.text`/`.rodata` XIP `0x2C000000` |
| ↳ vtable | | | `runtime = file_off + 0x2C010000 \| 1` |
| ↳ TRACE strings | | | `runtime VA = file_off + 0x3BFD7C0C` **(not `0x3C000000`)** |
| ↳ intern strings | | | at `intern_pool (0x198FFC) + intern_id`, **not** the site's `file_off` |
| ↳ `0x3C…` / `0x3D…` | | | **RAM / SRAM / BSS** runtime addresses — never a file offset |
| **BTH / M33** | `x_1.0.12.83/best1600_watch_bth.bin` | `0x1476BC` | `0x14000000`. FLASH_SIZE `0x400000` |
| **sensor_hub** | carved from `platform_tester.bin` | `0x100000` | carve @ file `0x134070`; runtime FLASH_BASE `0x34000000`. Doc offsets are **parent-file** offsets inside the carve window `0x134070–0x234070`. |
| **Halliday** | `Halliday/export/*/layer3/app.bin` | `0x195E80` | `0x10000000`. **Not** the raw `HallidayOfficialOTA.bin` (app.bin is LZMA-decompressed out of the OTA container chain). |

**The discipline that prevents the bug:** a doc citing a `0x3C…` address must mark it RAM
(`in_flash:false`) and give the real flash site separately (e.g. `literal_va = 0x2C…`).
`layout_tables.json` does this correctly today.

---

## What was checked and how

- **Existing verifiers:** all `Reverse/firmware/**/verify*.mjs` pass (leaf scripts take an id arg).
  The lone apparent failure `verify-time-widget.mjs` is a *documented negative result*
  (`"unique": false` — "no unique pin exists"), not a wrong address.
- **Central auditor** (`analysis/scripts/addr_audit.mjs`): structural JSON walk over 154 docs —
  192 byte/stock-hex claims, 32 code VAs, 897 markdown VA tokens, 3,524 `file_off↔va` pairs.
- **Three parallel sub-agents**, each ground-truthing one image with `dd`/`xxd` (not just prose):
  M55 bootloop-critical set, BTH+sensor_hub, Halliday.

### Results

| Check | Count | Result |
|---|---|---|
| Byte / stock-hex claims match binary | 192 | ✅ |
| Code VAs land on Thumb prologue | 32 | ✅ |
| Markdown VA tokens in-range | 897 | ✅ |
| `file_off ↔ va` deltas consistent | 3,524 | ✅ |
| Halliday anchors (0x10000000) | 90 | ✅ |
| BTH + sensor_hub string/offset claims | ~85 | ✅ (1 fixed, below) |
| `0x3C000000+file` string-alias misuse | — | **None** — bug does not recur |

Spot-checked bootloop-critical bytes: ctor `0x2c5d931c` = `2de9f0410d4682b0` ✓; cave `0x2c12f2e4`
= 0x1750 (5,968 B ≈ 5.9 KB) of zeros ✓; v4 hook `0x5cde2a` → stock snprintf `0x2c66b450` ✓;
getter BL `0x5d9426` = `fdf757fa` → `0x2c5d68d8` ✓. Data pointers `0x3D6940D0`, `0x3C408A6E`,
`0x3C3F2CAC` all confirmed from the literal pools.

---

## The one real error (fixed)

| File(s) | Field | Was | Actual bytes | Now |
|---|---|---|---|---|
| `rtos/limits/bth_hub_limits/BTH_HUB_LIMITS.md`, `bth_hub_limits.json`, `extract_bth_hub_limits.py` | BTH RTX5 version banner | `P RTX V5.5.1` @ `0xadd4` | `0xadd4` is mid-string (`RTX V5.5.1`); full string starts at `0xadd2` (`50 20 52 54 58…` = `"P RTX V5.5.1\0"`) | `0xadd2` / va `0x1400add2` |

Root cause: the generator searched for `RTX V5.5.1` (→ `0xadd4`) but labeled the hit `P RTX V5.5.1`.
Fixed the search string so offset and label agree; regenerating reproduces `0xadd2`; leaf verifier still passes.

---

## How to re-run next time

```sh
# central structural auditor (byte/mapping/prologue checks)
node Reverse/firmware/analysis/scripts/addr_audit.mjs "$PWD" "$PWD/Reverse/firmware"

# existing per-area verifiers (leaf ones print their id options if run with no arg)
find Reverse/firmware -name 'verify*.mjs'
```

**Known benign auditor false positives** (field semantics, not errors): factory_eshell `help_va`
vs `va`; `layout_tables.json` `0x3c…` RAM addresses (which correctly carry a separate `literal_va`).
