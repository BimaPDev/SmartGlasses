# BES2700 GPU / VGLite image decode — Ghidra result

Image: `x_1.0.12.83/platform_tester.bin` (6,771,708 B). XIP VA = `0x2C000000 + file_off`.
Ghidra: project `gproj`, program `M55`. TRACE is `FUN_2c62c82c(level, file, line, func, fmt, ...)`.
String VAs have **zero** absolute / `ldr [pc]` / MOVW+MOVT hits (PIC + interned TRACE). Functions were found by TRACE arity + `draw_ctx` vtable + VGLite CHIPID.

---

## TL;DR

1. **`lv_draw_bes_img_decoded` is `FUN_2c609aec` (file `0x609AEC`)**. Identified by the unique 4-int TRACE at source line `0x10B` = 267 matching
   `"vglite img decode error, img width=%d, height=%d, decode width=%d, height=%d"`.
2. **This function never sees IDX4.** It blits a **BGRA8888** buffer (`stride = width * 4`). Indexed images are expanded first by `lv_draw_img` (`FUN_2c614a3c`).
3. **`decode_width` is not a GPU strip/align width.** It is `img_w - src_x` of the clipped blit (same for height). The error fires if that source origin is outside the image.
4. **112 (`0x70`) is not hardcoded and not computed** anywhere in the VGLite img-decoded / blit / `vg_lite_init` path. Tessellation is **`vg_lite_init(640, 480)`**. The only size gate is “skip GPU blit if min dimension ≤ 49 (`0x31`)”.
5. **Remainder-strip shear is not a GPU decode transform.** Firmware IDX4 walk is plain row-major. 112 px vertical strips are a **build-time / on-flash packing**, not a runtime GPU formula.

---

## 1. Function map (VA → file offset = VA − `0x2C000000`)

| role | VA | file | notes |
|------|----|------|-------|
| **`lv_draw_bes_img_decoded`** | **`0x2C609AEC`** | `0x609AEC` | GPU img callback; TRACE line `0x10B` |
| GPU blend (likely `lv_draw_bes_blend`) | `0x2C609970` | `0x609970` | fallback `FUN_2c60d5dc` (sw blend, 8.4 KB) |
| `lv_draw_bes` `draw_ctx_init` | `0x2C609DDC` | `0x609DDC` | `lv_draw_sw_init_ctx` then overlay 3 fptrs |
| `lv_draw_sw_init_ctx` | `0x2C60FB10` | `0x60FB10` | `memset(ctx, 0x58)`; `draw_img_decoded` slot = `ctx+0x14` |
| sw `lv_draw_sw_img_decoded` fallback | `0x2C6116AC` | `0x6116AC` | called from `FUN_2c609aec` when GPU blit skipped |
| **`lv_draw_img`** (IDX4 → BGRA) | **`0x2C614A3C`** | `0x614A3C` | cf==9 unpack then `ctx->draw_img_decoded` |
| `vg_lite_buffer` fill | `0x2C609E04` | `0x609E04` | format `0x100`, tiled/quality `0x1F00` |
| GPU blit (identity) | `0x2C609E64` | `0x609E64` | unlabeled in export; reconstructed |
| GPU blit (transform) | `0x2C609EF8` | `0x609EF8` | unlabeled; `vg_lite_blit` `FUN_2c4af844` |
| blit gate (area > 49 px) | `0x2C60A358` | `0x60A358` | `if (n > 0x31) blit; else fail` |
| `vg_lite_blit` (driver) | `0x2C4AEB30` | `0x4AEB30` | blend immediate `0x2003` from caller |
| `vg_lite_blit` + matrix | `0x2C4AF844` | `0x4AF844` | |
| `vg_lite_flush` / finish | `0x2C4AE4D8` | `0x4AE4D8` | kernel op 5 |
| **`vg_lite_init`** | **`0x2C4AE2F8`** | `0x4AE2F8` | CHIPID `0x265`, REV `0x1001`, CID `0x40C` |
| `gpu_port` init | `0x2C4B4938` | `0x4B4938` | **`vg_lite_init(0x280, 0x1E0)` = 640×480** |
| TRACE | `0x2C62C82C` | `0x62C82C` | strlen-walks `file` for basename |

`FUN_2c609aec` has **zero** `BL` sites (vtable callback only) — expected for `draw_ctx->draw_img_decoded`.

---

## 2. `decode_width` vs `img_width`

From `FUN_2c609aec` (coords = `param_3`, clip result `sStack_90`, `buf_area` = `param_1[1]`, pixels = `param_4`):

```c
img_w     = coords.x2 - coords.x1 + 1;          // sStack_80
img_h     = coords.y2 - coords.y1 + 1;          // sVar3
src_x     = (clip.x1 - coords.x1) + buf_area.x1; // sStack_84
src_y     = (clip.y1 - coords.y1) + buf_area.y1; // sStack_82
decode_w  = img_w - src_x;                      // sStack_7c  = TRACE arg 3
decode_h  = img_h - src_y;                      // sStack_7a  = TRACE arg 4
src_ptr   = map_p + (img_w * src_y + src_x) * 4; // BGRA
src_stride = img_w * 4;
```

Abort TRACE (`line 0x10B`) if `decode_w < 0 || decode_h < 0 || img_w < decode_w || img_h < decode_h`
(i.e. `src_x`/`src_y` outside the image). **Not an alignment check.**

There is **no** `(w+15)&~15` or `(w+7)&~7` on the *image* width in this function.

---

## 3. VGLite buffer / stride / tiles

### `FUN_2c609e04` — `vg_lite_buffer` setup

```c
// param_2=width, param_3=height, param_4=stride_bytes, param_5=ptr, param_6=align_stride?
if ((ptr & 0x3f) != 0) return 0;                 // 64-byte address alignment REQUIRED
if (param_6 && (stride & 0x3f) != 0) return 0;    // optional 64-byte stride alignment
buf->width  = width;
buf->height = height;
buf->stride = stride;
*(uint16*)(buf + 3)     = 0x0100;   // VG_LITE_BGRA8888 (this tree)
*(uint16*)(buf + 0x14)  = 0x1F00;   // linear / quality field (not 4x4 tiled)
buf->memory = buf->address = ptr;
```

No INDEX_4, no CLUT, no 4×4 / 8×8 / 16×N walk.

For BGRA, `stride = w*4`. 64-byte stride ⇒ **`w` multiple of 16** — only if the align-stride flag is set. Identity blit (`FUN_2c609e64`) passes flag `0`, so **image width is used as-is**.

### `vg_lite_init` — tessellation, not strip width

```c
// FUN_2c4b4938 (gpu_port.c)
FUN_2c4ae2f8(0x280, 0x1e0);   // vg_lite_init(640, 480)

// inside FUN_2c4ae2f8:
tess_w = (param_1 + 0xf) & 0xfffffff0;   // (640+15)&~15 = 640
```

CHIPID check: `0x265 / 0x1001 / 0x40C` matches the `"NOT match vg_lite_options.h CHIPID…"` string.

### Blit gate

`FUN_2c60a358`: compute some metric via `FUN_2c62a64c(info+0x18)`; if `> 0x31` (49) call `FUN_2c609e64`, else return 0 (caller falls back to software). **Not 112.**

---

## 4. How IDX4 actually reaches the GPU

`lv_draw_img` `FUN_2c614a3c`, cf==9 branch (`LAB_2c614da4`):

```c
palette[16]  = BGRA words at dsc->data[0..63];     // 64-byte prefix
row_bytes    = (area_w & 1) ? (area_w>>1)+1 : (area_w>>1);  // ceil(area_w/2)
src          = dsc->data + 0x40;
for (y = 0; y < area_h; y++) {
    for (i = 0; i < row_bytes; i++) {
        b = src[i];
        dst[2*i]   = palette[b >> 4];   // even x = HIGH nibble
        dst[2*i+1] = palette[b & 0xF];  // odd  x = LOW  nibble
    }
    src += row_bytes;                   // stride = ceil(drawn_w/2), NOT image w
}
ctx->draw_img_decoded(ctx, dsc, coords, dst, /*cf=*/5);  // TRUECOLOR
```

- **Nibble order:** even-x = high nibble (same as software `read_line`).
- **No 112-strip, no remainder pad, no intra-strip tile.**
- Drawn as a full image, this is **plain row-major IDX4**. That is why on-flash 112-strip blobs look like noise through the firmware decoder.

---

## 5. Remainder strip / 112

| question | answer |
|----------|--------|
| Is 112 hardcoded (`# 0x70` / `cmp #112`)? | **No** in GPU img / blit / init. |
| Is 112 computed (`(w+15)&~15`, 7×16, …)? | **No.** Tessellation is 640×480. |
| Remainder pad to 16 / 8 / 112? | **Not in this path.** Storage `data_size` already equals `64 + Σ ceil(strip_w/2)·h` with last `strip_w = w % 112` unpadded. |
| 4×4 / 8×8 / 16×N inside a strip? | **Not in GPU or `lv_draw_img` unpack.** `vg_lite_buffer` field `0x1F00` is linear. |
| What *is* 112 then? | **On-flash packing only** (empirical, byte-exact). Firmware never untiles it. Likely the asset converter / panel `display_image` path, not VGLite. |

JBD013 is a **SPI** micro-LED (`jbd spi err`, ESD regs `0x05,0x63,0x35,0x47,0xC1`), not MIPI DCS. There is **no CASET/RASET** in this binary. Panel upload is `display_image` (`"display_image conflict panel_status=%d, bri_flag=%d,use=%d"` @ file `0x41E6C`) — also PIC/TRACE, not located by pointer xref. Display size used by GPU init is **640×480**.

`lv_port_disp_speedup_bgra8888.c` / `disp_flush_area`: flush copies the already-composited **BGRA8888** layer; it does not decode IDX4.

---

## 6. Copy-paste pixel-index formula

### A. What the firmware GPU path assumes (row-major IDX4 → BGRA, then blit)

Use this only if the blob is actually row-major (it is **not**, for the cf=9 assets):

```
palette[i] = BGRA at data[4*i : 4*i+4]          # i=0..15
byte = data[64 + y * ceil(w/2) + (x>>1)]
idx  = (byte >> 4) if (x&1)==0 else (byte & 0xF)
pixel(x,y) = palette[idx]
```

### B. What is actually on flash (empirical; GPU code does not implement this)

```
STRIP = 112                                    # NOT in firmware; constant from data_size
palette[i] = BGRA at data[4*i : 4*i+4]
pix = data + 64
for sx in range(0, w, STRIP):                  # left → right vertical strips
    sw = min(STRIP, w - sx)
    sb = (sw + 1) // 2                         # bytes/row in this strip
    for y in range(h):                         # row-major inside strip
        for xi in range(sw):
            b = pix[y*sb + (xi >> 1)]
            idx = (b >> 4) if (xi & 1) == 0 else (b & 0xF)
            put(sx + xi, y, palette[idx])
    pix += sb * h

# last strip (w % 112): same walk; bytes are valid but this linear order shears.
# Firmware VGLite path does not describe a remainder tile/pad. Still unsolved in code.
```

Index of nibble for pixel `(x,y)` in a **full 112 px strip** `s = x // 112` (and `x < (w//112)*112`):

```
s      = x // 112
xi     = x % 112
sb     = 56                                    # 112/2
off    = 64 + s * (56 * h) + y * 56 + (xi >> 1)
idx    = (data[off] >> 4) if (xi & 1) == 0 else (data[off] & 0xF)
```

---

## 7. Decompilation excerpts

### `lv_draw_bes_img_decoded` @ `0x2C609AEC` — TRACE + BGRA blit

```c
sStack_80 = (param_3[2] + 1) - *param_3;          /* img_w */
uVar7 = (uint)sStack_80;
iVar5 = uVar7 << 2;                               /* stride = img_w * 4 */
sStack_84 = (sStack_90 - *param_3) + buf_area.x1; /* src_x */
sStack_82 = (sStack_8e - param_3[1]) + buf_area.y1;
sVar3 = (param_3[3] + 1) - param_3[1];            /* img_h */
iStack_88 = param_4 + (uVar7 * sStack_82 + sStack_84) * 4;
sStack_7c = sStack_80 - sStack_84;                 /* decode_w */
sStack_7a = sVar3 - sStack_82;                     /* decode_h */
if (decode_w < 0 || decode_h < 0 || img_w < decode_w || img_h < decode_h)
    FUN_2c62c82c(3, file, 0x10b, func, fmt, img_w, img_h, decode_w, decode_h);
func_0x2c60a358(&iStack_88);                       /* GPU blit if area > 49 */
/* else */ FUN_2c6116ac(...);                      /* software fallback */
```

### `vg_lite_buffer` @ `0x2C609E04`

```c
if ((param_5 & 0x3f) == 0) {
    if (param_6 == 0 || (param_4 & 0x3f) == 0) {
        *param_1 = param_2;          /* width */
        param_1[1] = param_3;        /* height */
        param_1[2] = param_4;        /* stride */
        *(uint16*)(param_1 + 3) = 0x100;
        *(uint16*)(param_1 + 0x14) = 0x1f00;
        param_1[5] = param_1[6] = param_5;  /* memory */
        return 1;
    }
}
return 0;
```

### `gpu_port` init @ `0x2C4B4938`

```c
FUN_2c4ae2f8(0x280, 0x1e0);   /* vg_lite_init(640, 480) */
```

### Identity blit @ `0x2C609E64` (capstone; Ghidra had no function)

Src/dst `vg_lite_buffer` from a blit-info struct, `vg_lite_identity`, `vg_lite_blit(..., 0x2003)`, `vg_lite_flush`. Width/height taken as `int16` fields; **no strip split**.

---

## 8. Why string hunting found nothing

- TRACE `FUN_2c62c82c` takes interned IDs loaded from literal pools as `0x3C3Fxxxx`-class words, **not** `0x2C41B144`.
- Format/file/func name strings in `.rodata` are for the TRACE decoder, not for `printf` xrefs.
- `draw_img_decoded` is installed as a **function pointer** (`ctx+0x14`); the GPU function has zero `BL`s.

Peripheral hunt that *did* work: VGLite CHIPID compare `0x265/0x1001/0x40C` in `FUN_2c4ae2f8`, then callers → `gpu_port` → BES draw cluster at `0x2C609xxx`.
