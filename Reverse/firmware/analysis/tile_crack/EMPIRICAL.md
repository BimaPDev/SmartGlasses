# Star Air HUD — INDEXED_4BIT tile-order brute force

Firmware: `x_1.0.12.83/platform_tester.bin`  
`.rodata` alias: `file_off = VA - 0x3C000000`  
Script: `crack.py` (1200 configs). Scores: `scores.csv`. Renders: `out/`.

## Scan

`lv_img_dsc_t` at 4-byte alignment, `cf=9`, `always_zero=0`, `data_size == 64+((w+1)//2)*h`, `data_ptr` inside the file.

| Filter | Count |
|---|---|
| Unique matching payloads | 377 |
| Overlap small-font bitmap `0x2fd681–0x31dbc4` (skipped) | 46 |
| 16-byte incrementing tables (glyph-dsc shaped) | 65 |
| Remaining “real” payloads | 266 |

Non-font size histogram (top): 32×44 (82), 48×48 (48), 32×32 (39), 24×24 (32), **80×80 (21)**, 40×40 (16).

**19 of 21 80×80 icons are not pictures.** Data at `0x323f40` (and the next 18 blobs, stride `0xD00`) is a table of 16-byte records whose second `u32` increases by ~23–27 every record (194/204 records). That is a glyph-descriptor / kerning table that happens to be pointed at by a well-formed `lv_img_dsc_t`. Linear 4bpp of that table is what the stride-sweep read as “repeated sheared musical notes.”

The **two real 80×80** payloads are:

| desc | data | notes |
|---|---|---|
| `0x3dc2e8` | `0x3b3f00` | palette all-zero; 259 fg pixels (indices 1–7) |
| `0x424c44` | `0x3fc880` | gray-ish palette; mixed histogram |

Boot wordmark is real (not a table): desc `0x3af594`, data `0x3871c0`, 399×145, size 29064.

24×24: 33 headers, 32 kept after font overlap, **23 are table-like**, 9 look like image bytes. Example used: data `0x344dc0`.

## Search space

- `tile_w = 16` (required)
- `tile_h ∈ {1,2,4,8,16,32}`
- tile grid: row-major, column-major
- within-tile: row-major, column-major, Morton/Z, Hilbert (16×16 only), bottom-up rows
- nibble: high-first vs low-first
- palette skip: 0 / 32 / 64
- optional 64-byte pad between tiles, optional consume-full-tile (OOB pixels)

1200 configs × 5 targets. `th=1` + row-major tiles is **linear 80-wide** (baseline).

`pad64`+`full` on `th=1` was a **false winner**: 16×1 tiles are 8 bytes then 56 bytes of pad, so most of the bitmap is padding zeros → huge neighbor-agreement, fake CC bonus. Those configs are discarded below.

## Score table (plain: no pad, no full)

Higher `score` is better (neighbor agreement, run length, low pepper, CC bonus, −autocorr@16). **Do not treat the ranking as “this is a glyph”** — boot’s ~8.4 scores are the “2–6 large CCs” bonus firing on **repeated sheared fragments**, not on a readable wordmark.

| config | real80a | boot | wx24 | icon0 table | boot n_large |
|---|---:|---:|---:|---:|---:|
| `tw16 th1 trow irow hi pal64` (linear) | 5.11 | 8.39 | 3.60 | 0.99 | 5 |
| `tw16 th2 trow irow hi pal64` | 4.98 | 3.37 | 3.38 | 0.18 | 15 |
| `tw16 th8 trow irow hi pal64` | 5.02 | 3.84 | 3.50 | 0.09 | 10 |
| **`tw16 th16 trow irow hi pal64`** | 5.01 | 3.90 | 3.48 | 0.22 | 10 |
| `tw16 th16 trow icol hi pal64` | 4.37 | 4.10 | 2.80 | 0.16 | 7 |
| `tw16 th16 tcol irow hi pal64` | 4.99 | 8.60 | 3.46 | 0.24 | 5 |
| `tw16 th16 trow imorton hi pal64` | 4.19 | 8.39 | 3.31 | 0.92 | 5 |
| `tw16 th16 trow ihilbert hi pal64` | 4.69 | 3.94 | 3.44 | −0.39 | 11 |
| `tw16 th16 trow ibup hi pal64` | 5.01 | 3.39 | 3.43 | −0.02 | 15 |
| `tw16 th16 trow irow lo pal64` | 3.13 | 3.59 | 2.76 | 0.20 | 11 |
| `tw16 th16 trow irow hi pal0` | 5.06 | 3.69 | 3.33 | −0.14 | 12 |
| `tw16 th32 trow icol hi pal64` | 4.55 | 8.41 | 3.11 | 2.59 | 5 |

16×16 row-major, hi nibble, pal64 is **not** the best numeric score and **does not** assemble a single music-note.

## Does 16×16 row-major clean the music-note 80×80?

**No.**

1. Target `0x323f40` is a glyph-dsc table. Every 16×N ordering of it is still a striped table, not a HUD icon.
2. Real 80×80 at `0x3b3f00`: linear already shows ~3 diagonal bands of short dashes. 16×16 row-major (`out/80x80_tw16_th16_trow_irow_hi_pal64_g.png`) is still scattered dashes, not a centered note. Morton/Hilbert/column-intra rotate the speckle; they do not collapse it into one glyph.

## Does boot 399×145 become a readable MYVU wordmark?

**No.** Linear and every 16×N variant stay high-frequency green static with a strong horizontal repeat (letter-sized fragments duplicated across the width) plus solid bars. 16×16 row-major (`out/399x145_tw16_th16_trow_irow_hi_pal64_g.png`) is not a wordmark. Column-major tile grid and Morton inflate the numeric CC score but the ASCII still reads as periodic noise, not `MYVU`.

`data_size` is exactly linear packing (`64 + 200×145`). Full 16×16 tiles including OOB pixels would need ~32000 pixel bytes; the blob is 29000. So boot **cannot** be tightly packed full 16×16 tiles unless extra bytes are stolen from the next object (they are not: unique non-overlapping payloads).

## Extra finding (not in the 16×N grid): even/odd fields

A **40×40** at data `0x3508c0`, decoded **linear** (`th=1`), is two interlaced 40×20 pictures:

- Even rows: clean stadium / rounded-rect **outline** (HUD geometry, anti-aliased).
- Odd rows: clean filled **pill / chevron**.

Saved as:

- `out/40x20_even_field_hi_pal64_g.png`
- `out/40x20_odd_field_hi_pal64_g.png`
- `out/40x40_linear_hi_pal64_g.png` (striped composite)

A 24×24 at `0x344dc0` linear is horizontal bars that wrap (`#######` at EOL + `####` at next SOL) — classic wrong-stride / wrap, not a 16×16 reconstruct of a weather glyph.

## Winning config

**None of the 16×N orderings clearly wins.**

| | |
|---|---|
| Best *numeric* among plain configs | `th=1` linear and `th=16 tcol irow` (boot CC overfitting) |
| Hypothesized “16×16 tiles, raster within tile, row-major” | **Fails** known-shape tests |
| Nibble | High-nibble-first slightly better than low (`lo` drops real80a 5.01 → 3.13) |
| Palette skip | 64 matches `data_size`; pal0/32 do not suddenly reveal a wordmark |
| What actually looks like a HUD glyph | 40×40 **even/odd deinterlace** (not a 16×N tile order) |

Reported tuple for the hypothesized format that was tested and **rejected**:

`(tile_w=16, tile_h=16, tile_order=row, intra=row, nibble=hi, pal_skip=64)`

Closest *visual* extra: even/odd row fields, equivalent to packing two `h/2` frames in one `lv_img_dsc_t`.

## Best PNGs

1. `Reverse/firmware/analysis/tile_crack/out/40x20_even_field_hi_pal64_g.png` — clean stadium/outline
2. `Reverse/firmware/analysis/tile_crack/out/40x20_odd_field_hi_pal64_g.png` — clean pill/chevron
3. `Reverse/firmware/analysis/tile_crack/out/80x80_tw16_th16_trow_irow_hi_pal64_g.png` — 16×16 RM still speckle (real 80×80)
4. `Reverse/firmware/analysis/tile_crack/out/399x145_tw16_th16_trow_irow_hi_pal64_g.png` — boot still static
5. `Reverse/firmware/analysis/tile_crack/out/80x80_tw16_th1_trow_irow_hi_pal64_g.png` — linear baseline of the same 80×80

## Bulk extract

**Not done.** `extracted_assets/1.0.12.83/ui/lvgl_idx4/` is empty on purpose: no 16×N config produced clean HUD icons on the known-shape targets, so dumping 266 PNGs would just freeze the shear. Re-run `crack.py` and copy from `out/` once a layout actually reconstructs a note / wordmark / weather glyph.

## What the 80×80 “notes” actually were

The 16-byte period at `0x323f40`:

```
u32 a = 0xffff0001 or 0x00000001
u32 b = 0x5447, 0x5460, 0x5479, …  (Δ ≈ 23–27)
then 0001 0000 0e00 0e00
```

Rendered as 4bpp with width 80, that period is 32 pixels = two 16-pixel columns — exactly the “5 sheared columns of tiny notes” illusion.
