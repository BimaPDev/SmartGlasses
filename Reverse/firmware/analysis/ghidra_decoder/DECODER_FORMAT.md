# BES2700 platform_tester.bin — LVGL image decoder format (disassembly)

Tooling: **Ghidra 12.1.3 headless** (`/opt/homebrew/Cellar/ghidra/12.1.3`) for
disassembly/decompilation, **capstone/numpy/PIL** for verification renders.
Image: `x_1.0.12.83/platform_tester.bin`, XIP load base **0x2C000000**
(file offset X ↔ VA 0x2C000000+X). Flash byte-alias base **0x3C000000** used by
stored data pointers (file offset = ptr − 0x3C000000).

All addresses below are VA; subtract 0x2C000000 for the file offset.

---

## TL;DR

1. **The firmware's own LVGL software decoder is plain row‑major IDX4** — I fully
   recovered it (functions + formula below). It reads pixels *directly from XIP
   flash*, row‑major, high‑nibble‑first, with a 64‑byte BGRA palette prefix.
2. **The stored pixel blobs do NOT match that row‑major format.** Rendering *any*
   cf=9 image (boot logo 399×145 and the 377 UI icons) with the exact decoder
   formula produces scattered noise. So the on‑flash pixels are **swizzled/tiled
   relative to the software decoder's layout** — universally, not just the logo.
3. The swizzle is **not present in the software decode path** (it reads flash
   linearly). Ghidra of the GPU blit (`GPU_DECODE.md`) shows **VGLite never sees
   IDX4** and **never untiles 112 px strips**. The packing is therefore
   **build‑time / on‑flash** (or a separate `display_image` / JBD SPI path), not
   `lv_draw_bes_img_decoded`. Empirically the 399×145 asset has a hard **56‑byte**
   storage period, incompatible with a 200‑byte row stride (see §5).

Confidence: software IDX4 format **HIGH**; "stored data is 112‑strip vs row‑major"
**HIGH**; "112 is not runtime VGLite" **HIGH**; remainder-strip geometry **UNRESOLVED**.

---

## 1. lv_img_dsc header (confirmed by decoder code)

`lv_img_dsc_t = { uint32 header; uint32 data_size; void* data; }` (12 bytes).
Header bitfield (matches the decompiled shifts, §3):

| field | bits | extract in code |
|-------|------|-----------------|
| cf    | [4:0]   | `header & 0x1f` |
| w     | [20:10] | `(header & 0x1fffff) >> 10`  (== `(header>>10)&0x7ff`) |
| h     | [31:21] | `(header << 0xb) >> 0x15`    (== `(header>>21)&0x7ff`) |

cf enum (LVGL): 6=TRUE_COLOR family, **7/8/9/10 = INDEXED 1/2/4/8 bit**,
11/12/13/14 = ALPHA 1/2/4/8 bit. Our assets are **cf=9 → INDEXED_4BIT**.

Boot logo descriptor: **VA 0x2C3AF594** (file 0x3AF594):
`header=0x12263C09` (cf9, w=399, h=145), `data_size=0x7188=29064`,
`data=0x3C3871C0` (file 0x3871C0). Note `29064 = 64 + ((399+1)/2)*145 =
64 + 200*145` — palette(64) + row‑padded 4bpp exactly.
377 further valid cf=9 descriptors exist (26×24, 44×44, 48×48, 64×64 … UI icons).

There are **no absolute pointers** to descriptors, name strings, or the rodata
tables anywhere in the image (verified by raw scans across the 0x2C/0x3C/0x28
aliases). The firmware is fully position‑independent; descriptors are reached
through a runtime resource registry, and the decoder callbacks are installed as
**function pointers** (no static xref to read_line/open). This is why string‑xref
and pointer‑xref location both return nothing and functions had to be found
structurally.

---

## 2. Function map (the star_air_lvgl built‑in decoder)

Source path string present at file 0x41B4F0:
`arty/star_air_lvgl/src/draw/lv_img_decoder.c`.

| VA | file | role |
|----|------|------|
| **0x2C612220** | 0x612220 | `lv_img_decoder_built_in_open` — allocates & fills palette LUTs |
| **0x2C612468** | 0x612468 | `lv_img_decoder_built_in_read_line` — per‑line pixel decode |
| 0x2C614F2C | 0x614F2C | `cf → bpp` lookup (`bpp = tbl[cf-4]`, tbl ptr `DAT_2C614F40`) |
| 0x2C611D2C | 0x611D2C | `lv_img_buf_set_px_alpha` (row‑major addressing) |
| 0x2C611E18 | 0x611E18 | `lv_img_buf_set_px_color` (row‑major addressing) |

Rodata tables (no xrefs — PC‑relative/computed access): 4bpp opacity‑expand
table `00 11 22 … FF` at file 0x41B324/0x41B4E0/0x41B55C; bpp bitmask
`01 02 04 08` at file 0x41B597. (These are LVGL A1/A2/A4 alpha‑expand tables; the
INDEXED path does not use them.)

---

## 3. INDEXED_4BIT (cf=9) — exact software layout

### Palette (from `open`, FUN_2C612220)
For indexed cf (`cf-7 < 4`) it allocates a **color LUT** of `4<<bpp` bytes at
`state+0xC` and an **alpha LUT** of `1<<bpp` bytes at `state+0x10`
(bpp=4 → 64‑byte color LUT / 16‑byte alpha LUT), then, for the XIP case
(`state+0x10 flag == 0`), fills them from the **first `1<<bpp` entries at the
start of the image data** (`*(data+... ) `). Each source palette entry is 4 bytes
**B,G,R,A**:

```
color_LUT[i] = { B, G, R, 0xFF }   // 2 bytes (B,G) + R + forced 0xFF
alpha_LUT[i] =   A                  // alpha kept separately
```

So: **palette = 16 × 4 bytes BGRA at data offset 0 (0x40 bytes total)**, alpha is
split into its own LUT (LV_COLOR_DEPTH=32; color is stored BGRA, alpha applied
separately). Verified: the boot‑logo's first 64 bytes are a clean BGRA palette
(`FF FF F5 00 | 00 00 00 00 | … | 00 5F FF C1 | 6F FF FF FF …`).

### Pixel addressing (from `read_line`, FUN_2C612468, `case 9`)
```c
// param_3 = x, param_4 = y
if ((x & 1) == 0) shift = 4;  else shift = 0;          // EVEN x -> HIGH nibble
stride  = ((w & 0x1fffff)>>10 + 1) >> 1;               // = (w+1)/2 bytes/row
byte_off = stride*y + (x>>1) + 0x40;                   // +0x40 = 64-byte palette
idx      = (data[byte_off] >> shift) & 0x0F;           // 4bpp index
color    = color_LUT[idx];   alpha = alpha_LUT[idx];
```
For the XIP path the source pointer is the raw flash data
(`*(*(state+4)+8) + byte_off`) — **read straight from norflash, row‑major, no
de‑swizzle stage.**

Other cf handled the same way in read_line (evidence that this is the generic
LVGL decoder): cf7 `stride=(w+7)/8`, cf8 `(w+3)/4`, cf10 `stride=w` (+0x400
palette = 256×4). ALPHA cf11‑14 in the sibling branch.

**Summary of the software‑intended format for cf9:**
`[64B BGRA palette][row 0][row 1]…`, `row = ceil(w/2)` bytes, **pixel(2k)=high
nibble, pixel(2k+1)=low nibble**, index → BGRA via the palette, alpha per‑index.

---

## 4. The stored data does NOT match §3 (the swizzle)

Rendering with the **exact** §3 algorithm:
- Boot logo 399×145 → garbled diagonal streaks (`logo_CODE.png`).
- 64×64 / 48×48 / 70×70 icons → scattered colored dots, no recognizable icon
  (`ic_64.png`, `ic_48.png`).

This holds for every cf=9 asset tested, so the reordering is a **fixed universal
swizzle**, and `data_size` being exactly `64 + ceil(w/2)*h` proves it is a *pure
permutation* of the row‑major 4bpp buffer (no compression, no extra bytes).

Because the software `read_line`/`open` read flash **linearly** (§3), the
permutation is **not** performed in software — it must be applied when the pixels
reach the panel: a **BES hal_lcdc / 2‑D DMA transform or the build‑time asset
packer** targeting the **column‑scanned** display. Supporting strings: `dsi_pll_
calib` (MIPI‑DSI), `Sc7288 lcd on` (SC7288 panel IC), `AA_Pattern_640_480_*`
(640×480 test canvas), plus the asset set being display **test patterns**
(`pattern_ChecherBoard`, `pattern_LinePairH/V`, `img_cross_h/v`, `img_hh/vv`,
`Gamma_*`) — i.e. a panel‑characterisation tool whose images are stored in the
panel's native transfer order.

---

## 5. Empirical fingerprint of the swizzle (for the brute‑forcer)

Boot‑logo pixel region (file 0x387200 = data+0x40), byte‑stream autocorrelation:

```
lag :  56    112   168   224   280   336   392  (all multiples of 56)
corr: 0.60  0.50  0.47  0.40  0.36  0.33  0.30
lag 200 (the row stride implied by w=399): corr = 0.08  (≈ uncorrelated)
```

So the **physical storage period is 56 bytes**, and the 200‑byte row stride is
NOT a real boundary → the buffer is a 2‑D tile layout, not row‑major. 56 does not
divide 29000, so 56 bytes is a *tile row*, not a full stride (tiles arranged 2‑D).
gcd(200,56)=8 ⇒ 8‑byte (=16‑px) granule is plausible. A 64×64 icon shows only a
weak `ac[32]≈0.13` (sparse content), so use the **logo** to solve geometry.

Constraints to feed the solver:
- It is a permutation of `[16×BGRA palette][ceil(w/2)·h row‑major 4bpp,
  high‑nibble‑first]`. Palette (first 64 bytes) is *not* swizzled (it decodes
  cleanly); only the pixel region is reordered.
- Dominant granule 56 bytes (=112 px) for the 399×145 image; the 80×80 case the
  other agent measured peaks at lag 16.
- Simple rectangular tilings of a 400‑wide (200‑byte) canvas (tested
  8/16/20/25/40/50/100‑px widths × 1/5/8/16/29/145 heights, both traversal and
  intra‑tile orders) did **not** reduce total‑variation below plain row‑major →
  the tile is tied to the **panel geometry / DMA burst**, likely column‑major
  within a fixed‑width vertical strip. Recommend solving against the LCDC write
  window rather than the LVGL w/h.

---

## 6. What remains unknown / next step

The exact tile dimensions, traversal, and intra‑tile pixel order are **not
recoverable from the software image decoder** (it is row‑major and never sees the
swizzle). To finish definitively, trace the **display flush / hal_lcdc DMA**: find
the LCDC framebuffer‑transfer descriptor setup (DSI/SC7288 path) and read its
tile/stride/scan‑direction registers. That code, like everything else here, uses
runtime‑computed addresses (no static xrefs), so it must be found by the
peripheral register base it writes, not by string/pointer xref.

---

## Files in this directory
- `gscripts/FindHeaderUnpack.java` — locates header‑bitfield UBFX (found the decoder family).
- `gscripts/Decomp.java`, `gscripts/Callers.java`, `gscripts/FindDecoder.java` — decompile / xref helpers.
- `decomp_open.txt`, `decomp_cluster.txt`, `decomp_main.txt` — decompilations (open, read_line, set_px, font decoder).
- `import_m55.sh` — Ghidra headless import at 0x2C000000 (project in `gproj/`).
- `logo_CODE.png`, `ic_64.png`, `ic_48.png` — §3 algorithm renders (garbled ⇒ swizzle).
- `LOGO_gray56_top.png`, `logo_raw_w56.png` — raw‑byte views showing 56‑byte structure.

---

# Hardware tile geometry (resolved empirically; HW path identified)

Follow-up to §4–§6. The empirical agent's 112 px strip finding is confirmed and
the intra-strip order pinned. The display stack was identified from strings; the
register-level trace remains blocked (see "Why blocked" below), so the geometry
is proven from the stored data (byte-exact) plus visual decode of known content.

## 7. The display stack (string evidence)

| component | source path / string (file off) | role |
|-----------|-------------------------------|------|
| **JBD013 micro-LED microdisplay** | `platform/drivers/graphic/lcd/jbd013_api.c` (0x41de0), `panel_driver.c` (0x41f08), `hal_driver.c` (0x41ce8) | the actual panel (JBD = Jade Bird Display µLED) |
| **Vivante VGLite 2-D GPU** | `star_air_lvgl/src/draw/bes/vglite/*` (0x41b1ac), `lv_gpu_bes.c` (0x41b108), `gpu/gpu_port.c` (0x133b2c), `vg_lite_options.h CHIPID…` (0x133768) | composits/blits LVGL layers |
| **GPU image blit** | **`lv_draw_bes_img_decoded` = `FUN_2c609aec`** (file `0x609AEC`) + error string at 0x41b144 | blits **BGRA8888** (stride = width×4). `decode_width` = `img_w - src_x` of the **clip**, not a strip/align size. See `GPU_DECODE.md`. |
| flush | `star_air_lvgl/src/porting/lv_port_disp_speedup_bgra8888.c` (0x41de6c) | `lv_disp` flush_cb (BGRA8888 ⇒ LV_COLOR_DEPTH 32) |
| ~~SC7288~~ | `sc7288_charger.c` (0x429d0), `"[CHG] Sc7288 lcd on"` | **charger + backlight IC only — NOT the panel** (earlier red herring) |

VGLite does **not** consume IDX4. `lv_draw_img` (`FUN_2c614a3c`) expands cf=9
row-major to BGRA, then `FUN_2c609aec` blits that linear buffer. Tessellation is
`vg_lite_init(640, 480)`. **112 is not hardcoded or computed in this path.**
On-flash 112 px strips are a **build-time packing**; firmware never untiles them.

## 8. Confirmed pixel layout — vertical strips, 112 px wide

For a cf=9 (IDX4) `lv_img_dsc` of logical size w×h:

```
data = [ 16 * BGRA palette (64 bytes) ] [ strip 0 ] [ strip 1 ] ... [ last strip ]
```
- The image is cut into **vertical, full-height strips 112 px wide**, left→right.
  Number of strips = ceil(w / 112); the last strip is the remainder (w mod 112).
- Each strip is stored **contiguously, row-major, top→bottom**, `ceil(strip_w/2)`
  bytes per row (× h rows). Strip 0 is 56 bytes/row (112 px).
- Intra-byte nibble order = **high nibble is the even/left pixel**, low nibble the
  odd/right pixel — *identical to the software decoder* (§3, read_line case 9,
  even x → shift 4). Verified `hf` gives clean art; `lf` does not.
- Palette applied exactly as §3 (BGRA, 4th byte = alpha).

**Byte-exact proof** (sum of per-strip strides + 64 == data_size), holds for every
confirmed image:

| asset | dsc VA | w×h | data (file) | data_size | Σ⌈stripw/2⌉·h + 64 |
|-------|--------|-----|-------------|-----------|--------------------|
| media atlas (dial + ♫ notes) | 0x2C3AF594 | 399×145 | 0x3871C0 | 29064 | **29064 ✓** |
| location **pin** | 0x2C3953F4 | 146×146 | 0x36D040 | 10722 | **10722 ✓** |
| dial **disc** | 0x2C3BCFFC | 280×280 | 0x394C40 | 39264 | **39264 ✓** |

Visual confirmation: `atlas_final_112.png` (dial + music notes), `img146_sw112.png`
(clean black map-pin on strip 0), `img280_sw112.png` (clean gray disc on strip 0).

### Strip width is a FIXED 112 px (not width-derived)
Byte-autocorrelation of the pixel region peaks at a **56-byte period (= 112 px)**
for three different widths — 146, 280, and 399 — and the map-pin/disc decode
cleanly at exactly 112 and **shear at 110** (`s110_r36`). So 112 is a **constant
on-flash strip width** (0x70). It is **not** VGLite tessellation (that is 640×480)
and is **not** `decode_width`. 56 bytes is the strip byte-stride.

## 9. Remainder strip and multi-strip — status

- **Full strips (112 px) decode pixel-perfect** (strip 0 always clean; the 399
  atlas' large features are continuous across the x=112/224 seams).
- The **remainder strip** (w mod 112) and the finer strips of some *detailed*
  images are **not yet pixel-perfect**. The remainder's bytes are valid smooth
  image data, and its size is exactly `⌈rem_w/2⌉·h` (byte-accounting above), but
  plain row-major `hf` inside it produces a diagonal shear. Tested and **rejected**
  for the remainder: `lf` nibble order, column-major (⌈h/2⌉ bytes/col, 2 vertical
  px/byte), nibble-planar halves, remainder-first ordering, and
  **serpentine/boustrophedon** (alt strips bottom-to-top) — none clean
  (`rem_variants.png`, `rem_more.png`, `serpentine_test.png`).
- This residual is **not** in `lv_draw_bes_img_decoded` (Ghidra: no remainder pad,
  no intra-strip tile, BGRA linear blit only). Ranked packer permutations also
  failed (`tile_crack/remainder/remainder_findings.md`). Hunt: asset packer /
  `display_image` / JBD SPI. GPU `decode_width` alignment is a dead end.

## 10. Why the register-level trace is blocked

The whole image is **position-independent with static-base rodata addressing**:
a raw scan finds **zero absolute pointers** to any of the display strings/tables
across the 0x2C / 0x3C / 0x28 aliases, and Ghidra's analyzer produces **zero
xrefs** to `lv_draw_bes_img_decoded`, `jbd013_api.c`, the vglite strings, etc.
Log strings are additionally **TRACE-interned** (no runtime pointer). Functions
were still recovered by TRACE arity + `draw_ctx` vtable + VGLite CHIPID:
`lv_draw_bes_img_decoded` is `FUN_2c609aec`; `decode_width` is clip math (see
`GPU_DECODE.md`). JBD `display_image` remains PIC with no pointer xrefs. Remainder
geometry is still empirical.

## 11. MYVU wordmark

No text-wordmark IDX4 descriptor was found in this OTA. The 0x3871C0 asset is the
**media-player atlas** (dial control + music notes), confirmed. Wide/short cf9
candidates were checked and are not wordmarks: 290×14 @0x2C4067F0 (near-empty),
144×36 @0x2C3F8FB4, 72×20 @0x2C3D1514. Consistent with the earlier project finding
that **the boot logo / all UI bitmaps live in a separate ~0x3c3 resource
partition, not in the OTA image** — so the "MYVU" boot wordmark is not in
`platform_tester.bin`. `app_startup_myvuapp` (0x37318) / `mmi_logo` (0x161bbc) are
present as *names/handlers*, but their bitmap lives in that resource partition.

## 12. Practical decoder (confirmed part)
```
palette[16]  = BGRA at data[0..63]            # color=BGR, alpha=4th byte
pix          = data + 64
for sx in range(0, w, 112):                   # strips left->right
    sw = min(112, w-sx); sb = (sw+1)//2
    for y in range(h):
        for xi in range(sw):
            b = pix[y*sb + (xi>>1)]
            idx = (b>>4) if (xi&1)==0 else (b&0xF)   # high nibble = left pixel
            put(sx+xi, y, palette[idx])
    pix += sb*h
# NOTE: exact for full 112px strips; the final (w%112) strip still shears.
# Not a VGLite transform (GPU_DECODE.md).
```

## Evidence files added
`atlas_final_112.png`, `img146_sw112.png`, `img280_sw112.png` (clean strip decodes);
`rem_variants.png`, `rem_more.png`, `serpentine_test.png` (remainder attempts);
`small_rowmajor.png` (false-positive struct-table "descriptors").
