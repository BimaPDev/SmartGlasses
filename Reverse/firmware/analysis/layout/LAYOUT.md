# What determines where things are drawn

Three different mechanisms. Knowing which one owns a given element decides whether moving
it is a data edit, a config message, or a code patch.

Verifier: `verify.mjs` (run from repo root). Address model: code VA = file + `0x2C010000`;
data file = VA − (build's data base: 12.83 `0x3BFD7C0C`, **11.53 `0x3BFD7CB0`**, 7.83 `0x3BFD7D04`).

---

## 1. Glyphs inside a text run — FONT DATA (safe)

Position comes entirely from the 16-byte glyph descriptor:

| field | effect |
|---|---|
| `ofs_x`, `ofs_y` | bearing; nudges the glyph relative to pen position / baseline |
| `adv_w` | pen advance after drawing, in **1/16 px** |
| `box_w`, `box_h` | the bitmap's own extent |

Editable with `Tools/fwbuilder` or `patch_glyph.py`. Pure data — nothing executes differently.

**Gotcha, learned the hard way:** keeping a wide glyph's original `adv_w` when substituting a
narrow icon leaves a huge gap (U+FDFD's 244.2 px advance behind a 27 px icon). The patcher
now sets `adv_w = (width + 1) * 16`.

Vertical clipping is bounded by the face's `line_height` (see `hud_custom/fonts/`):
large 33 / **medium 27** / small 22; the digit face 52.

---

## 2. LVGL objects on screen — CODE IMMEDIATES (riskier)

**Not a table.** Each widget constructor calls LVGL with coordinates as inline constants.

### Recognising it

`LV_SIZE_CONTENT` is the giveaway: **`0x27D1`** (LVGL v8 `LV_COORD_SET_SPEC(2001)` = `0x2000 | 2001`),
loaded with `movw r2, #0x27d1`. Find that and the align call is a few instructions later.

Canonical shape, from the standby clock:

```
ldr  r0, ='FONT_DUMMY_20'      ; font name literal
bl   <getFont>
movs r2, #0
bl   <lv_obj_set_style_text_font>
movw r2, #0x27d1               ; LV_SIZE_CONTENT
bl   <lv_obj_set_size>
movs r3, #0x0b                 ; y
movs r2, #0x00                 ; x
movs r1, #0x02                 ; align  (LV_ALIGN_TOP_MID)
bl   <lv_obj_align>
```

### The immediates are ONE BYTE each

`MOVS Rd, #imm8` is a 2-byte Thumb instruction, `imm8` in the low byte:

| 11.53 file off | bytes | meaning |
|---|---|---|
| `0x61b15e` | `0b 23` | `MOVS r3,#11` — clock **y offset** |
| `0x61b160` | `00 22` | `MOVS r2,#0` — clock **x offset** |
| `0x61b162` | `02 21` | `MOVS r1,#2` — **align mode** |
| `0x61b1a0` | `18 22` | `MOVS r2,#24` — battery element height |
| `0x61b1a2` | `0c 21` | `MOVS r1,#12` — battery element width |

Move the clock to y=40: write `0x28` at `0x61b15e`. One byte, no length change.

Cross-check that confirms the reading: the 12×24 matches
`launcher_standby_battery_charge_lightning`, which really is 12×24.

### LVGL v8 align enum (values seen in this firmware)

`0` DEFAULT · `1` TOP_LEFT · `2` TOP_MID · `3` TOP_RIGHT · `4` BOTTOM_LEFT ·
`5` BOTTOM_MID · `6` BOTTOM_RIGHT · `7` LEFT_MID · `8` RIGHT_MID · `9` CENTER
(2 and 5 are the two observed in the clock ctor; the rest are the standard order and are
**UNVERIFIED against this build**.)

### Locating it in ANY build (do not hardcode)

1. Find the string `customTimeAndBatteryWidget`; its pool reference sits in the clock ctor.
2. In that ctor find the pool word for `FONT_DUMMY_20` — exactly one instruction loads it.
3. Immediately after the font call: `movw #0x27d1` (set_size), then three `MOVS` then `bl` —
   that `bl` is `lv_obj_align`, and the three MOVS are align/x/y in **r1/r2/r3**.

---

## 3. The standby widget grid — CONFIG (safest)

Standby widgets are **not** individually positioned. `adjustFlexPadColumn` lays them out from
a 4-slot flex grid, so order and membership are configuration, not coordinates:

```json
{"action":"set_standby_widget_lists","data":{"widgets":["time","weekday","weather_1x2"]}}
```

Six names: `time`(1) `weather_1x1`(2) `weather_1x2`(3, costs 2 slots) `steps`(4)
`weekday`(5) `aiBall`(6). See `hud_custom/widgets/`.

---

## Risk tiers

| Layer | Change type | Risk |
|---|---|---|
| 3 widget grid | BLE config message | none — reversible by resending |
| 1 glyph metrics | font data | very low — passive data, fixed length |
| 2 object coords | **code immediate** | low-but-real |

Layer 2 is in the widget constructor — the subsystem that bootlooped v5/v6. But that failure
was *creating objects and a timer during boot*; changing an immediate adds no objects, no
timer, and leaves instruction count and timing identical. Still code, so prove a recovery
path first.

---

## Stale artifact warning

`analysis/hud_map/layout_tables.json` declares `"va_base": "0x2C000000"`. That is the OLD,
wrong base — every VA in that file is `0x10000` low. Re-base before using it.
