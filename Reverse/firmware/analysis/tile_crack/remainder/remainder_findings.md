# Remainder-strip crack — on-flash packer permutation

Firmware: `x_1.0.12.83/platform_tester.bin`  
Work dir: `tile_crack/remainder/`  
GPU path: `ghidra_decoder/GPU_DECODE.md` (do **not** treat remainder shear as VGLite)

## Verdict

**No winning formula.** The leftover strip (`w % 112`) is byte-exact
`ceil(rem_w/2)·h`, but none of the size-preserving reorderings of those
bytes reconstructed a smooth right edge + drop shadow on the PIN
(`0x36d040`, 146×146, rem_w=34). `remainder_decode` is therefore the
identity reshape (row-major, high-nibble-first), same rule as a full
112-px strip.

`decode.py` stores strips **left → right, remainder last**. Full 112-px
strips stay row-major.

## What 112 is (and is not)

Ghidra of `lv_draw_bes_img_decoded` (`FUN_2c609aec`):

- That function blits **BGRA8888 only**. IDX4 is unpacked row-major by
  `lv_draw_img` first.
- `decode_width` = `img_w - src_x` (clip), not pad-to-16/32/64/112.
- Tessellation is `vg_lite_init(640, 480)`. **112 is not in the GPU path.**

112-px full-height strips are an **on-flash packer** layout (byte-exact:
`data_size == 64 + Σ ceil(strip_w_i/2)·h`). Firmware never untiles them.
Remainder shear is therefore a **packer permutation of the leftover
bytes**, not a GPU tile/align transform.

## Dead as GPU formulas (prompt A / C / E / G)

These add padding bytes or assume a GPU `decode_width`. They do not
match `data_size` unless the pad is not stored, in which case
row-major-of-valid-pixels ≡ linear remainder (already the baseline).

| id | claim | why dead |
|----|--------|----------|
| A | rem stored as if width padded to 16/32/48/64/112 | `decode_width` is clip, not align. Pad-to-N bytes fail `data_size` (pin pad-16→48: 24 vs 17 bytes/row). Skip-pad row-major = linear. |
| C | VGLite stride `(rem_w+31)//32*16` or `(rem_w+15)//16*8` | GPU buffer is BGRA `w*4`; IDX4 never reaches VGLite. Extra stride bytes fail `data_size`. |
| E | 16-px GPU tiles, last tile padded to 16 | 112 is not a GPU tile. 16+16+2 substrips are a valid *permutation* (tested) but visually fail. Last-tile pad-to-16 in storage needs 24 bytes/row. |
| G | whole pin `decode_w=160`, stride 80 bytes/row | `80*146+64=11744` vs actual `10722`. Rejected. |

Skip-pad walks over a padded canvas were still run as **pixel permutations**
of the existing remainder nibbles; they did not beat linear visually.

## PIN geometry (why “complete the right 34” is hard)

Strip 0 (112×146, row-major) is a **complete** white teardrop + hole,
left-aligned:

- Pin body ≈ **x=11..52**, y≈69..120 (both sides of the hole present).
- Seam columns x=96..111 are **index 0** through the pin body.
- Drop-shadow gray under the pin is also inside strip 0 (y≈130, x≈13..50).

The 34-px remainder is therefore mostly *canvas to the right of a
left-aligned glyph*, plus sheared mid-strip whites and solid index-8/9
bars at the top. Linear remainder already has long runs of solid 0
(y=125..145). A correct unswizzle should at minimum turn the sheared
whites into a smooth shadow/empty region, not a second pin body.

## Ranked packer failures (exact `17·146 = 2482` bytes)

Scores: neighbor-equality / body-row NE / total-variation / seam (col 111
vs rem col 0). Higher combo is smoother, **not** “looks like a pin.”
Full table: `pin_rank.txt`.

| rank | name | combo | visual |
|------|------|------:|--------|
| 1 | `bytecol_major_bup` | +0.825 | vertical grain; **not** a pin edge |
| 2 | `tile_4x4_row_row` | +0.749 | blocky noise |
| 3 | `tile_8x8_row_row` | +0.743 | blocky noise |
| 4 | `tile_4x4_row_{z4,morton}` | +0.728 | speckle |
| 5 | `tile_16x8_row_row` | +0.710 | speckle |
| 6 | **`linear`** (baseline) | +0.701 | classic **diagonal shear** (slope ≈ +2 px/row, wraps at 34) |
| 6= | `fold73x68_eo`, `nib292x17_eostack` | +0.701 | ≡ linear |
| | `rowgrp{8,16}_{rev,swap2,bitrev,viv_x}` | ≤0.68 | still shear/noise |
| | `vpair_xmaj1_*` (D, x-major) | +0.68 | noise |
| | `rot90_146x34_T` (146×34 then transpose) | +0.07 | vertical bars, **fails** |
| | `pixcol_major` | +0.07 | noise |
| | `vpair_xmaj0_*` (D, column of pairs) | +0.03 | noise |
| | `bytecol_major` | +0.36 | vertical streaks |

Previously rejected (still worse / already disproved): lf nibble order,
column-major **2-vertical-px/byte**, planar hi\|lo halves,
remainder-stored-first, serpentine odd strips.

### Tried this round (packer-only)

- **Byte-column major:** 17 full-height byte columns (2 px wide, horizontal
  nibble pair) — *not* the rejected vertical pairing. Numeric winner with
  bottom-up columns; visually still grain.
- **90° packer:** `34×73` bytes = 34 rows × 146 px, transpose → 146×34.
  Size-exact. Looks like vertical bars, not a pin.
- **Morton/Z 2×2, 4×4, 8×8, 16×8, 16×16** inside the 34×146 remainder.
- **D** vertical nibble pairing, x-major and y-major.
- **Row groups of 8/16:** reverse, even/odd swap, bit-reverse index,
  Vivante 2×2 x-swizzle.
- **2/4/8 byte-column groups** row-major and column-major.
- **Bit-reverse of x** (6-bit, skip invalid — a permutation of 34 columns).

### Strongest leftover clue (not a decoder)

Linear remainder whites around y=69..84 form **two parallel diagonals
with dx/dy = +2**, wrapping at width 34. That is a 1-byte (2-px) phase
slip per row *inside* the 17-byte row, but a global `np.roll(row, ±2*y)`
does not assemble a pin/shadow (still noise). It is a constraint on the
packer, not a finished inverse.

## Drop-in decoder

```python
PANEL = 112

def remainder_decode(nb, w, h):
    """nb = remainder nibble stream (hi-nibble-first already unpacked).
    rem_w = w % 112. Returns (h, rem_w). Identity until a permutation wins."""
    rem_w = w % PANEL
    if rem_w == 0:
        return np.zeros((h, 0), np.uint8)
    need = rem_w * h
    seg = np.asarray(nb, np.uint8).ravel()[:need]
    if len(seg) < need:
        seg = np.pad(seg, (0, need - len(seg)))
    return seg.reshape(h, rem_w)
```

Also in `remainder/remainder_decode.py` and wired from `decode.py` for
the last strip (odd `rem_w` drops the pad nibble per row before calling).

## PNGs

| file | what |
|------|------|
| `pin_strip0_gray.png` | 112-px strip only (complete teardrop) |
| `pin_linear_gray.png` | remainder-last + linear rem (shear) |
| `top8_sheet.png` | gallery of packer candidates |
| `00_bytecol_major_bup.png` | numeric #1 |
| `07_linear.png` / `01_linear_rm.png` | baseline shear |
| `04_tile_4x4_row_morton.png` | Morton inside rem |
| `10_rot90_146x34_T.png` | 90° packer |
| `14_vpair_xmaj1_hi1.png` | D |
| `disc_linear_gray.png` / `atlas_linear_gray.png` | same linear rem on the other GT images |

## Next (not GPU)

The firmware decoder will not name the remainder walk. The remaining
surface is the **asset converter / `display_image` SPI packer**
(JBD013), which is PIC/TRACE and was not located by pointer xref. Until
that lands, treat remainder as row-major and accept shear on `w % 112`.
