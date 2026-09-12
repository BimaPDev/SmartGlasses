# MYVU 1.0.11.53 — subsystem map

Eight leaves, each with a runnable oracle beside it. **Run the oracle before trusting
the doc** — six of the eight needed driver repairs, and almost every repair was a broken
*search*, not a wrong finding.

```sh
for f in display launcher assistant protocol audio input storage apps; do
  node Reverse/firmware/analysis/map/verify-$f.mjs || echo "FAILED: $f"
done
```

| Leaf | Doc | Covers |
|---|---|---|
| Display | [display.md](display.md) | LVGL layer, 9 font objects, 348 IDX4 images, style setters, panel geometry |
| Launcher | [launcher.md](launcher.md) | dock, standby row, page registry, the 29-action phone surface |
| Assistant | [assistant.md](assistant.md) | DomainRuntime, namespaces, intents, NLU/CONNECT_DATA routes, TTS, wake |
| Protocol | [protocol.md](protocol.md) | every action/code the phone can send or receive |
| Audio | [audio.md](audio.md) | codecs, A2DP/HFP, the HiFi4 boundary, **13 replaceable AAC clips** |
| Input | [input.md](input.md) | touchpad gestures, the LV_KEY enum, wear detect, the eshell table |
| Storage | [storage.md](storage.md) | partitions, LittleFS, ~55 NV keys, OTA and what it does not check |
| Apps | [apps.md](apps.md) | Translation, Navi, Phone, Music, SmartLife, Prompt, Transcribe, Ring |

## The three tiers

Every surface in every doc is labelled with what it costs to change it.

**CONFIG** — a BLE message or NV key. Reversible, no flash, no risk. The largest tier
and the one to exhaust first: 29 launcher actions, ~55 NV keys, a 42-entry eshell table,
the standby widget list, dock order, and the phone→glasses text pipes.

**DATA** — a byte patch. Proven twice on hardware (big-clock font; no-rings). Fonts,
images, strings, style operands, and the 13 AAC clips. Both confirmed patches changed
only *operands*, never the shape of the instruction stream — that is the pattern to keep.

**CODE** — new instructions. 1.0.11.53 has no XIP `.text` cave, and this is what bricked
the spare pair. Treat as blocked until UART recovery exists.

## Inherited facts this map CORRECTED

- **`LV_STYLE_TEXT_COLOR`/`TEXT_FONT` are 85/87, not 79/80.** Two leaves re-derived this
  independently. The wrong table came from me.
- **The 1-bpp font faces are NOT compressed.** The "compression" was inferred from
  `10×12 needs 24 B`, which assumes byte-aligned rows; LVGL packs a continuous bit
  stream, so `ceil(120/8) = 15` exactly. All three CJK faces are ordinary DATA targets.
- **The page registry holds 13 entries, not 12** — `Pages/Prompt` was missed.
- **The Hint NV block is 111–122, not 110–122.** Key 110 is unreachable at any window
  up to 160 bytes, and is now asserted *absent* so a future build using it will fire.
- **`adjustFlexPadColumn` does not exist in 1.0.11.53** (positive control:
  `createFlexContent` from the same source file does).
- **The standby tile is a hard 72×72** set by `movs r2,#0x48` at `0x61B79E`, which
  overrides `LV_SIZE_CONTENT`. That is why the 48px clock clipped.

## OPEN CONTRADICTION — sub-image bounds

`CLAUDE.md` and memory give **DSP `0x04E9B4`–`0x143F14`** and **sensor_hub
`0x134070`–`0x14A7A4`**. These **overlap by 65,188 bytes**, which is impossible, so at
least one bound is wrong.

Evidence that the **DSP end is the wrong number**: `0x143ef8` holds `best1600_dsp` and
`0x143f13` holds `../../platform/drivers/hifi4/dsp_loader.c` — M55 rodata, sitting
*inside* the claimed DSP range. Actual DSP content (`kws … sample_rate=`) is at
`0x0ad987`. So the DSP image ends somewhere between `0x0b29be` and `0x134070`.

**Until resolved, treat the union `[0x04E9B4, 0x14A7A4)` as forbidden.** That is what
every leaf's write-safety gate enforces, and it is safe under either reading. Do not
narrow it without byte evidence.
