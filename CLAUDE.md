# SmartGlasses — agent orientation

Reverse engineering of Meizu **MYVU / Star Air** smart glasses (SoC **BES2700BP-W**)
plus a Swift SDK (`Sources/`) and demo app (`Examples/MyvuDemo/`).

## READ THIS FIRST — corrected facts

Several long-standing docs in this repo are **wrong**, and the errors are the kind that
silently corrupt downstream work. All of the following are enforced by a runnable oracle:

```sh
node Reverse/firmware/analysis/scripts/verify-audit-2026-09-03.mjs "$PWD"
# -> "audit-2026-09-03 verification passed"   (93 checks)
```

**Full detail: [`Reverse/firmware/analysis/AUDIT_2026-09-03.md`](Reverse/firmware/analysis/AUDIT_2026-09-03.md)**

### Address model (`platform_tester.bin`, 1.0.12.83)

Three regions, not one flat base:

| File range | Runtime | Contents |
|---|---|---|
| `0x000000`–`0x0283F4` | XIP `0x2C010000`+ | early boot |
| `0x0283F4`–`0x469954` | **PSRAM `0x3C000000`** | all rodata/strings/assets/sub-images |
| `0x469954`–`0x6753FC` | XIP `0x2C479954`+ | bulk of `.text` |

- **Code:** `VA = file + 0x2C010000` — **NOT** `0x2C000000`. `ADDRESS_AUDIT.md`'s headline
  rule is `0x10000` low; its vtable footnote is the correct one.
- **Data:** `file = VA − 0x3BFD7C0C`. That constant is the PSRAM copy delta (`0x283F4`),
  not a "TRACE quirk". Never use `VA − 0x3C000000`.

### Known-bad artifacts — do not trust

| Artifact | Problem |
|---|---|
| `export/1.0.12.83/functions/m55/` | labels `0x10000` low; **1,502 of 12,068 "functions" are not code** |
| `rtos/m55/THREADS.md` | entry VAs below `0x2C479954` are suspect (`af_thread` is garbage) |
| `ADDRESS_AUDIT.md` sensor_hub | size is `0x16734`, not `0x100000`; ~10,524 strings misattributed |
| `analysis/tile_crack/**`, `extracted_images/` | "112 px strip tiling" was a wrong-offset artifact |
| `extract_lvgl_fonts.py` + fonts manifest | `bitmap_off` off by 1–2 B; `row_shift` heuristics exist only to hide it |
| `STAR_AIR_*` writeups | claim AAC payloads aren't in the OTA — they are, at `0x431a64`–`0x463b46` |

Superseded by: `analysis/images_v2/`, `analysis/fonts_v2/`, `extract_lvgl_fonts_v2.py`.

### Practical

- **OTA has no signature gate** (MD5 + A/B only) — modified images flash and boot; v4 is proven.
  The brick risk is **boot-time execution order** (LVGL objects created during splash), not signing.
- **Assistant domains are reached via `NLU_RESULT` / `CONNECT_DATA`, not `code:102`.**
  Four probe runs sent VUI `code:102` and got silence; the messages never reached
  `DomainRuntime`'s matcher, so the silence said nothing about the domain. Namespace
  table at `0x192144` (11.53): freechat, INNER_STKS, application, VSP_ERROR, alarm,
  todo, systemsetting. A worked envelope sits at `0x192664`.
- **`STKS` is voice shortcuts, not stocks.** There is no stock feature in the firmware
  (negative control: zero hits for ticker/NASDAQ/portfolio/equity/NYSE).
- **Todo is a domain, not an app.** The page registry at `0x176b94` has **13** `Pages/X`
  entries and no `Pages/Todo`; a new app needs a 14th entry **plus** a delegate class.
- **Sub-image bounds are CONTRADICTORY.** DSP `0x04E9B4`–`0x143F14` and sensor_hub
  `0x134070`–`0x14A7A4` overlap by 65,188 bytes, which is impossible. The DSP *end* is
  the suspect number: `0x143ef8`/`0x143f13` hold M55 rodata (`best1600_dsp`,
  `dsp_loader.c`) inside the claimed DSP range. **Treat the union
  `[0x04E9B4, 0x14A7A4)` as forbidden** until resolved by byte evidence.
- **`LV_STYLE_TEXT_COLOR`/`TEXT_FONT` are 85/87**, not 79/80. Style setters are 12-byte
  thunks at `0x64a43c`–`0x64a64c`; radius 11, border_color 48, border_opa 49,
  border_width 50.
- **Two DATA-tier patches are hardware-confirmed:** the big-clock font, and no-rings
  (`border_opa 92→0` at `0x61b7f8`). Both changed only operands — no instruction added,
  removed, or resized. That is the low-risk pattern.
- **Wake word:** the model is **not** in the firmware. It is `kws_model.nn`
  (`STAR_NN V0.1.0` / DFSMN / float32 / 1.4 MB) in the Android app. Branding differs per
  firmware version (7.83 Xiaoxi → 11.53 Hey Aicy → 12.83 Xiaoxi) — **confirm which build is
  flashed before quoting any offset.**

## Where things are

| Path | What |
|---|---|
| `Reverse/firmware/analysis/AUDIT_2026-09-03.md` | **canonical corrected findings** |
| `Reverse/firmware/analysis/scripts/verify-audit-2026-09-03.mjs` | the oracle (93 checks) |
| `Reverse/firmware/analysis/fonts_v2/` | 3 faces, correct bases, samples + raw |
| `Reverse/firmware/analysis/images_v2/` | 387 images + resource-name manifest + gallery |
| `Reverse/firmware/analysis/ADDRESS_AUDIT.md` | prior audit — read **with** the corrections above |
| `Reverse/firmware/analysis/BOOTLOOP_EXPLAINED.md`, `BATT_CIRCLE_POSTMORTEM.md` | why v5/v6 bricked |
| `Reverse/firmware/analysis/full_rev/` | per-subsystem leaves + `verify*.mjs` |
| `Reverse/firmware/analysis/map/` | **full subsystem map** — 8 leaves + oracles; start at `INDEX.md` |
| `Reverse/firmware/analysis/domain_routing/` | domain routing, app registry, phone→glasses text surfaces (27 gates) |
| `PROTOCOL.md` | BLE/StarryNet protocol (wake = bare `code:7`, line 327) |
| `Reverse/extracted/base/assets/fsp/res/` | the real NN models (KWS/VAD/CWR/NS) |
| `.unlazy/` | gate ledgers per work scope (see `.agents/skills/unlazy/SKILL.md`) |

## Working style

- **Read bytes; don't infer structure from statistics.** Three errors in the 2026-09-03 audit
  came from coarse block statistics reported before checking the actual data.
- **A gate that cannot fail proves nothing.** Do not verify a value against a manifest
  generated from the same assumption — that circularity is how the base error survived a
  full prior audit. Prefer semantic checks (render a glyph of known shape) and controls.
- Verifiers live beside their data as `verify*.mjs`. Run them before trusting a doc.
