# Custom icons as font glyphs

Turn unused glyph slots into artwork, so the **phone can draw custom graphics by putting
a character in a string** — no firmware code change, no new LVGL objects, no bootloop class.

Tool: [`../../patch_glyph.py`](../../patch_glyph.py)

## Why this works

A glyph and an IDX4 image are the same thing on this device: an alpha mask on the 16-level
green ramp. But a glyph is drawn by the existing text renderer, triggered by a codepoint.
So a patched glyph is reachable from any text the phone already sends (e.g. a notification),
whereas a patched image asset needs code that already references it.

Font data is passive. Nothing new executes. This cannot reproduce the v5/v6 bootloop, which
came from creating LVGL objects during boot.

## Space available

Non-Latin glyphs (gid 96+), per face:

| face | bpp | reclaimable | note |
|---|---|---|---|
| medium | **4** | 917,565 B | **use this one** — 16 grey levels |
| large | 1 | 297,030 B | 1-bit, stencil look |
| small | 1 | 131,510 B | 1-bit |

**1,346,105 B total** (~1.28 MB) = ~657 icons at 64x64, or ~164 at 128x128.

## Best slots (medium, bpp4)

The largest single slots are **Arabic presentation-form ligatures**, not CJK — huge glyphs
you will never legitimately render:

| gid | codepoint | budget | max square |
|---|---|---|---|
| 5876 | **U+FDFD** | 979 B | ~44x44 |
| 1118 | U+102A | 682 B | ~36x36 |
| 5833 | U+FDAB | 441 B | ~29x29 |
| 5860 | U+FDC6 | 400 B | ~28x28 |
| 5832 | U+FDAA | 400 B | ~28x28 |

`python3 patch_glyph.py <fw.bin> U+0000 art.png --list-slots 20` prints the current list.

Merging 16 consecutive slots (gid 5824-5839) yields **4,682 B -> ~96x96**, but requires
rewriting the intervening `bitmap_index` values.

## SIZE LIMIT — respect line_height

The `lv_font_t` for the medium face declares **line_height 27, base_line 6**. An icon taller
than that risks being clipped by the label's bounds (the standby clock label is
`LV_SIZE_CONTENT`). **UNVERIFIED whether LVGL clips or overdraws** — test one glyph before
committing to a set.

Safe square icon for medium: **27x27 bpp4 = 364 B**, which fits most large slots.
The 44x44 demo below exceeds line_height deliberately, to be the thing that gets tested first.

Line heights: large 33 / medium 27 / small 22; clock face (U+FDxx digits) 52.

## Verified demo

`patch_glyph.py x_1.0.12.83/platform_tester.bin U+FDFD checkbox.png out.bin`

- artwork fitted 44x44 bpp4 = 968 B into the 979 B slot
- **599 bytes changed**, all inside the bitmap slot + its 16-byte descriptor
- file length identical
- decoded back from the patched image and rendered correctly:
  ![demo](demo_checkbox_44x44_in_UFDFD.png)

## Usage

```
python3 patch_glyph.py <fw.bin> <codepoint> <art.png> [out.bin] [--face medium] [--dry-run]
python3 patch_glyph.py <fw.bin> U+0000 x.png --list-slots 20
```

Codepoint accepts `U+FDFD`, `0xFDFD`, or a single character. The target must be in the
face's cmap — private-use codepoints are not mapped and will be rejected.

The tool derives the data base per build (validated against the font structs) and locates
faces by struct pattern, so it is not tied to 1.0.12.83 offsets. In-place only: the new
bitmap must fit the slot's existing byte budget, and the file length never changes.
