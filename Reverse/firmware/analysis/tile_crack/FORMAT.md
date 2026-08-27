# BES2700 firmware image format — crack notes

Firmware: `x_1.0.12.83/platform_tester.bin` (M55 app image, 6,771,708 bytes).
All offsets are **file offsets**; `file_off = data_ptr - 0x3C000000`.

## 1. Container (fully confirmed)

`lv_img_dsc`-style 12-byte descriptor `{header u32, data_size u32, data_ptr u32}`:
`cf = hdr & 0x1F`, `w = (hdr>>10)&0x7FF`, `h = (hdr>>21)&0x7FF`.

Pixel blob layout (cf = 9, IDX4):

```
[ 64-byte palette ][ ceil(w/2)*h pixel bytes ]
```

* **4 bpp, 16-colour indexed.** even-x pixel = **high** nibble, odd-x = low nibble.
* Palette = 16 × 4 bytes, order **B, G, R, A**.
* `data_size == 64 + ceil(w/2)*h` holds **exactly** for all real images
  → there is **no compression**; the stored pixels are a pure **permutation** of
  the logical row-major buffer.
* The **palette is NOT permuted** — only the pixel region is. (Confirmed against
  the Ghidra software decoder, which reads the blob as plain row-major IDX4.)

A scan of the whole image finds 377 descriptors whose `data_size` matches the
IDX4 formula. **Not all are bitmaps** — several "matches" are actually 16-byte
record tables (e.g. `0x323f40` "80×80", the `0x333640` "32×44" series): their
bytes are `01 00 xx xx <ctr16> 00 00 00 01 00 00 0e 00 0e 00` with a counter that
increments ~0x17 per record. These are false positives of the `cf==9` bit pattern.

## 2. The hardware de-swizzle (empirical)

The pixel permutation is applied by the LCDC / 2-D DMA for a **column-scanned
panel PANEL = 112 px wide** (= 56 bytes at 4 bpp). Evidence:

* The stored pixel stream has a hard **56-byte autocorrelation period**
  (56 / 112 / 168 …). 56 bytes = 112 px.
* The two images that decode to clearly recognisable art (146×146 location pin,
  256×256 media-dial atlas) both show that same 56-byte peak; images ≤112 px wide
  do not need it.

**De-swizzle:** split the logical image into full-height vertical strips 112 px
wide, each strip stored **row-major**, strips concatenated left→right. When `w`
is not a multiple of 112 the **narrow remainder strip is stored first**.
Reverse that to recover the row-major buffer, then apply the palette.
Implemented in `decode.py` (`decode()` / `strip_widths()`).

### Smoothness scores (equal-neighbour fraction, higher = smoother)
Recovered-buffer coherence for the pin `0x36d040` (146×146):

| layout                                   | score |
|------------------------------------------|-------|
| **112-px strips, row-major (this crack)**| ~0.78 |
| plain row-major (no de-swizzle)          | noise |
| 112-px strips, column-major within strip | 0.59  |
| 56-px strips row-major (circle→ellipse)  | lower |

Byte-tile brute force on the boot atlas peaked at 56-byte-wide tiles
(0.69), consistent with the 112-px strip width.

## 3. What decodes recognisably

* `0x36d040` 146×146 → **location pin 📍** (gradient body + drop shadow). Cleanest result.
* `0x376600` 256×256 and `0x3871c0` ("boot" 399×145) → **media-player UI atlas**:
  circular play-button dials, concentric ring controls, **music notes ♫**.
  (`0x3871c0` is NOT a text wordmark — it is this media UI atlas.)

See `OUT_pin_color.png`, `OUT_pin_gray.png`, `OUT_media_dials.png`,
`OUT_boot_atlas_gray.png`, `OUT_boot_atlas_color.png`.

## 4. Not yet solved

* **Not pixel-perfect.** The 112-px full-height strips are clearly the dominant
  structure, but residual misalignment remains in (a) narrow remainder strips and
  (b) the top band of some images. So the exact intra-strip / strip-ordering
  geometry (possible 2-D tiling, boustrophedon, or a per-image panel width) is not
  fully pinned. Different large images preferred slightly different strip widths
  (112 vs 160), which may indicate the panel width is content/mode dependent.
* **No clean text wordmark located.** The offset given as the "boot logo" wordmark
  is a media-UI atlas; a horizontal orange-on-white wordmark was not found among
  the decoded regions.
* Most small (24–48 px) `cf==9` descriptors render as noise with this de-swizzle —
  unclear whether that is wrong geometry or non-bitmap data.

## Files
* `decode.py` — working decoder (`decode(fileoff,w,h) -> (idx, rgba)`), plus PNG helpers.
* `OUT_*.png` — showcase renders.
* `framework.py`, `sweep*.py`, `detile.py`, `bytetile.py`, `fullstrip.py`,
  `stripfix.py`, `phase.py`, `gallery.py` — exploration / brute-force scaffolding.
