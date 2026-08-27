# Star Air HUD image decode — Ghidra tiling result

**Date:** 2026-08-23  
**Image:** `firmware/x_1.0.12.83/platform_tester.bin` (M55, XIP `0x2C000000`)  
**Project:** `Reverse/firmware/analysis/ghidra_proj/star_air3` (`-noanalysis`, not re-imported)  
**Hunt:** `analyzeHeadless … -postScript ImgDecoderHunt.java`  
**Report:** `Reverse/firmware/analysis/img_decoder_hunt.txt`

## Verdict

**Standard LVGL linear 4bpp. There is no 16×N tile walk in the decoder or `lv_img_buf` pixel accessors.**

`cf=9` (`LV_IMG_CF_INDEXED_4BIT`) is unpacked as packed row-major nibbles after a 16-color palette. If a HUD bitmap shears in 16-pixel columns, that packing is in **storage** (the payload behind `lv_img_dsc_t.data`) *before* LVGL sees it. Empirical untiling of that payload is the right fix; do not retile inside the decoder.

Vendor `open` for an in-RAM descriptor does **not** memcpy or untile: it aliases `dsc->data` as the decoded buffer.

TRACE strings (`lv_img_decoder.c`, `lv_img_decoder_built_in_open`, OOM) have **zero instruction xrefs**. Same interned-ID TRACE model as the `en_usb` hunt. Identification is from header-unpack immediates + `cf` switch + TRACE line numbers (`0x15d` / `0x189` / `0x195`).

## Function map (M55 / `0x2C`)

| VA | Role (LVGL 8 names) |
|---|---|
| `0x2C6127FC` | `lv_img_decoder_built_in_init` — registers info/open/read_line/close |
| `0x2C612110` | `lv_img_decoder_built_in_info` — copies `cf`/`w`/`h` from 32-bit header |
| **`0x2C612220`** | **`lv_img_decoder_built_in_open`** — palette load for indexed; OOM TRACE |
| **`0x2C612468`** | **`lv_img_decoder_built_in_read_line`** — **indexed 4bpp decode path** |
| `0x2C6121EC` | `lv_img_decoder_built_in_close` |
| `0x2C612838` | `lv_img_decoder_get_info` (walk decoder list) |
| `0x2C612898` | `lv_img_decoder_open` |
| `0x2C611E18` | `lv_img_buf_set_px_color` (same linear 4bpp addressing) |
| `0x2C611C18` | `lv_img_buf_get_px_alpha` |
| `0x2C611D2C` | `lv_img_buf_set_px_alpha` |
| `0x2C614F2C` | `lv_img_cf_get_px_size` |
| `0x2C612A20` / `0x2C614A3C` | `lv_draw_img` path (consumes decoder lines) |

Literal pool at `0x2C612828` is the built-in decoder vtable (Thumb pointers `info`/`open`/`read_line`/`close`).

`vg_lite` is present (`NOT match vg_lite_options.h …` @ file `0x133768`) as a GPU driver. It is **not** the LVGL indexed decoder and does not sit in front of `lv_img_dsc` pixel data.

## Exact INDEXED_4BIT traversal

Header word `hdr` (also `dsc->header` / `src->header`):

```
cf =  hdr        & 0x1F        // 9 = INDEXED_4BIT
w  = (hdr >> 10) & 0x7FF       // decomp: (hdr & 0x1fffff) >> 10
h  = (hdr >> 21) & 0x7FF       // decomp: (hdr << 0xb) >> 0x15
```

**Palette**

- 16 entries, `1 << px_size` with `px_size=4` → 16 colors.
- `open` allocates `4 << 4 = 64` bytes of `lv_color32` plus a 16-byte alpha table.
- Payload prefix is **64 bytes (`0x40`)**: each entry is `B, G, R, A` as stored; `open` copies BGR into the color table with RGB `A=0xFF` and keeps the fourth byte in the alpha table.
- 1-bit palette is `+8`, 2-bit `+0x10`, 8-bit `+0x400`. Same as upstream LVGL.

**Pixel order (no tiles)**

- Tile width/height: **none** (full image width × 1 scanline).
- Tile order: **N/A** — row-major scanlines, `y` from the `read_line` `y` argument, `x` left → right.
- Bytes/row: `stride = (w + 1) >> 1`.
- Byte address: `data + 0x40 + y * stride + (x >> 1)`.
- Nibble order: **high nibble = even `x` (left pixel of the pair), low nibble = odd `x`**.
  - even `x`: shift `4`
  - odd `x`: shift `0`
- After each pixel, shift `-= 4`; when it goes negative, advance `data++` and reset shift to `8 - 4 = 4`.

**`read_line` then** looks up `palette[index]` into the output `lv_color_t` buffer (one pixel per iteration along `len`).

The `TILE16_AND_CF` tags in the hunt log on `FUN_2c611e18` are false positives: immediates `16`/`15` are the 2-bit palette size `0x10` and the 4-bit mask `0xF`, not a 16-pixel tile.

## Quoted decomp

### `lv_img_decoder_built_in_read_line` @ `0x2C612468` — `cf==9`

From `img_decoder_hunt.txt` (identical to `export/1.0.12.83/functions/m55/decomp/2c612468_FUN_2c612468.c`):

```c
case 9:
  if ((param_3 & 1) == 0) {   /* x even */
    uVar7 = 4;                /* high nibble */
  } else {
    uVar7 = 0;                /* low nibble */
  }
  /* stride = (w + 1) / 2 */
  uVar9 = (int)(((*(uint *)(param_2 + 0x14) & 0x1fffff) >> 10) + 1) >> 1;
  /* offset = y * stride + x/2 + 64-byte palette */
  local_50 = uVar9 * param_4 + ((int)param_3 >> 1) + 0x40;
  break;
```

VARIABLE (`src_type==0`) then:

```c
pbVar6 = (byte *)(*(int *)(*(int *)(param_2 + 4) + 8) + local_50);
```

i.e. `dsc->data + offset` — **no copy, no tile remap**. Then a left-to-right nibble loop:

```c
uVar7 = (int)(uint)*pbVar6 >> (uVar7 & 0xff) & (1 << bVar2) - 1;
*puVar8 = *(undefined4 *)(*(int *)(iVar11 + 0xc) + uVar7 * 4);  /* palette RGB */
*(undefined1 *)((int)puVar14 + 7) = *(undefined1 *)(*(int *)(iVar11 + 0x10) + uVar7); /* A */
if ((int)uVar9 < 0) { pbVar6 = pbVar6 + 1; uVar7 = 8 - bVar2; }
```

### `lv_img_buf_set_px_color` @ `0x2C611E18` — same layout

```c
if (bVar6 != 9) { /* … INDEXED_8BIT at +0x400 … */ }
param_4 = param_4 & 0xf;
iVar2 = 0xf;
iVar7 = param_3 * ((int)(((*param_1 & 0x1fffff) >> 10) + 1) >> 1)
      + ((int)param_2 >> 1) + 0x40;
uVar4 = (param_2 & 1) * -4 + 4;   /* even x → 4, odd x → 0 */
```

### `lv_img_decoder_built_in_open` @ `0x2C612220`

Indexed branch is `uVar6 - 7 < 4` (cf 7..10). Palette count `1 << px_bits`. OOM is TRACE file/func/msg with **line `0x15d` / `0x189` / `0x195`**, matching `lv_img_decoder.c` in star_air LVGL. For VARIABLE true-color it does:

```c
*(int *)(param_2 + 0x18) = iVar5;  /* decoded.data = dsc->data */
```

No untiling memcpy.

## Implication for `tile_crack`

Treat the HUD `INDEXED_4BIT` blob as:

1. 64-byte palette (`16 × BGRA`)
2. packed 4bpp, **row-major, high-nibble-first**, stride `(w+1)//2`

If the carved payload still shears, the shear is **upstream of `lv_img_dsc`** (asset converter / flash packing). Sweep 16×N (and friends) on the payload only; the runtime decoder will not undo it.
