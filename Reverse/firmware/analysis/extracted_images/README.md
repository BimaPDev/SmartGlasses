# Extracted IDX4 images (`platform_tester.bin`)

Ghidra recovered the **software** path; pixels on flash are a **112 px strip** permutation of that layout.

## Firmware decode (Ghidra)

| VA | Role |
|----|------|
| `0x2C612220` | `lv_img_decoder_built_in_open` — 64-byte BGRA palette → color LUT + alpha LUT |
| `0x2C612468` | `lv_img_decoder_built_in_read_line` — IDX4: even-x = high nibble, stride = `(w+1)/2`, `+0x40` after palette |
| `0x2C614F2C` | `cf → bpp` |

Header: `cf = hdr & 0x1F`, `w = (hdr>>10)&0x7FF`, `h = (hdr>>21)&0x7FF`. **cf=9 = INDEXED_4BIT.**

The CPU decoder (`lv_draw_img` @ `0x2C614A3C`) expands IDX4 **row-major**. VGLite `lv_draw_bes_img_decoded` (`0x2C609AEC`) blits BGRA8888; its `decode_width` is **clip** (`img_w - src_x`), **not** a 112 px strip. Ghidra: **112 is not in the runtime GPU/IDX4 unpack**. On-flash pixels are still a **build-time 112 px strip** permutation (full strips byte-exact). Remainder strips (`w % 112`) are never untilled by this path — that is why they shear. Hunt: asset packer / `display_image` / JBD SPI, not VGLite.

`data_size == 64 + ceil(w/2)*h` exactly (no compression).

## Extractor

- `extract_all.py` (this folder) — 133 palette-sane assets
- `../extract_lvgl_idx4.py` — exhaustive 4-byte-aligned scan: 377 size-matched cf=9 descriptors, **131** unique payloads after false-positive filters (palette-as-records, lag-16 tables, flat nibbles). True-color cf=4/5/6: 2 size matches, 0 extracted.

Output:

- `png/` — palette color on dark gray
- `gray/` — index×17 grayscale
- `*_row.png` — row-major (w≤112 only)
- `gallery.png` — contact sheet
- `MANIFEST.csv`

Known-good (recognizable, not pixel-perfect on remainder strips):

- `png/146x146_36d040.png` — map pin
- `png/256x256_376600.png` — media dials / notes
- `png/399x145_3871c0.png` — media atlas (not the MYVU wordmark)

**Not solved:** last strip when `w % 112 != 0` still shears. Full 112 px strips are clean. The MYVU boot wordmark is not an IDX4 in this OTA.
