# HUD fonts — `platform_tester.bin` 1.0.12.83 (LEAF 1.4)

Binary: `Reverse/firmware/x_1.0.12.83/platform_tester.bin` (6,771,708 B)
Address model: **CODE VA = file + `0x2C010000`**, **DATA file = VA − `0x3BFD7C0C`**.
Tools in this directory: `parse_fonts.py` (parser), `render_fonts.py` (renderer),
`manifest.json` (37 byte-level claims), `renders/` (every face).

---

## 0. TL;DR

* There are **nine `lv_font_t` objects**, in one contiguous 40-byte-stride table at
  `0x466f88`–`0x4670f0`. Eight are reachable by name; the ninth is reachable only as a
  fallback.
* There are **nine `lv_font_fmt_txt_dsc_t` faces**. The earlier scan found eight — it
  missed `0x200fb0`, which no name points at.
* **Ten `FONT_*` names map onto eight `lv_font_t`.** `FONT_CN_32_NORMAL`/`FONT_EN_32_NORMAL`
  are the same object; `FONT_CN_36_BOLD`/`FONT_EN_36_BOLD` are the same object.
* **`FONT_DUMMY_16/20/24` are deliberately empty faces** that delegate everything to
  `FONT_CN_16/20/24_NORMAL` through LVGL's `fallback` pointer. Almost the entire UI draws
  through the DUMMY names, not the CN names.
* **The standby clock uses `FONT_DUMMY_20` → `FONT_CN_20_NORMAL`** — the shared 6032-glyph
  UI face, digits only **11 × 14 px**. Traced through the disassembly; see §5.
* The two big antialiased digit faces (`36_BOLD` 19×26, `32_NORMAL` 18×24) are **not** used
  by the clock. `36_BOLD` draws the Starrynet pairing code and a navigation ETA.
* Swapping the clock onto the big face is a **4-byte literal patch** at file `0x5d94d0`.

---

## 1. The `lv_font_t` table — nine objects

Discovery method: every `lv_font_t` in this image begins with the same two function
pointers, `get_glyph_bitmap = 0x2c639aa5` and `get_glyph_dsc = 0x2c639a3d`
(`lv_font_get_bitmap_fmt_txt` / `lv_font_get_glyph_dsc_fmt_txt`). Scanning the whole
6.7 MB for that adjacent pair returns **exactly nine hits**, all inside one array.

Layout confirmed field by field (LVGL v8 `lv_font_t`, stride 0x28):

```
+0x00 get_glyph_bitmap   +0x08 uint16 line_height   +0x0C uint8  subpx
+0x04 get_glyph_dsc      +0x0A uint16 base_line     +0x0D int8   underline_position
+0x10 void *dsc          +0x14 lv_font_t *fallback  +0x0E int8   underline_thickness
+0x18..0x27 zero (user_data / padding)
```

| # | `lv_font_t` | registered name(s) | line_height | base_line | underline | dsc | fallback |
|---|---|---|---|---|---|---|---|
| 1 | `0x466f88` | `FONT_CN_36_BOLD`, `FONT_EN_36_BOLD` | **52** | 12 | −5 / 2 | `0x19c360` | `0x467028` |
| 2 | `0x466fb0` | `FONT_CN_24_NORMAL` | 33 | 7 | −3 / 1 | `0x19d0ec` | — |
| 3 | `0x466fd8` | `FONT_CN_32_NORMAL`, `FONT_EN_32_NORMAL` | **40** | 2 | −5 / 2 | `0x200678` | — |
| 4 | `0x467000` | `FONT_DUMMY_16` | 22 | 6 | −2 / 1 | `0x200f60` | `0x4670c8` |
| 5 | `0x467028` | *(none — fallback only)* | **52** | 12 | −5 / 2 | `0x200fb0` | — |
| 6 | `0x467050` | `FONT_CN_20_NORMAL` | 27 | 6 | −2 / 1 | `0x2015f4` | — |
| 7 | `0x467078` | `FONT_DUMMY_24` | 33 | 7 | −3 / 1 | `0x2fd334` | `0x466fb0` |
| 8 | `0x4670a0` | `FONT_DUMMY_20` | **26** | 6 | −2 / 1 | `0x2fd384` | `0x467050` |
| 9 | `0x4670c8` | `FONT_CN_16_NORMAL` | 22 | 6 | −2 / 1 | `0x2fd668` | — |

`line_height` and `base_line` are the two `uint16` at `lv_font_t + 8` and `+10`; they are
what LVGL uses for vertical layout, and each is a **2-byte in-place patch**.

Note the one asymmetry: `FONT_DUMMY_20` declares `line_height = 26` while the face it
actually renders from (`FONT_CN_20_NORMAL`) declares 27. Everything else in a DUMMY/CN pair
matches exactly.

### `lv_font_fmt_txt_dsc_t`

The struct is 20 bytes and lives 12 bytes **after** the address quoted in the earlier
inventory (that table's "struct" column was `dsc − 12`; the 12 bytes before are the tail of
the last `cmap` record):

```
+0x00 const uint8_t *glyph_bitmap
+0x04 const glyph_dsc_t *glyph_dsc
+0x08 const cmap_t *cmaps
+0x0C const void *kern_dsc
+0x10 uint16 kern_scale
+0x12 uint16 packed = cmap_num:9 | bpp:4 | kern_classes:1 | bitmap_format:2
```

| dsc | belongs to | bpp | cmaps | glyphs¹ | glyph_bitmap | glyph_dsc | kern |
|---|---|---|---|---|---|---|---|
| `0x19c360` | 36_BOLD | 4 | 1 | 15 | `0x19c378` | `0x19cd38` | — |
| `0x19d0ec` | CN_24 | 1 | 34 | 6032 | `0x19d104` | `0x1e610c` | — |
| `0x200678` | 32_NORMAL | 4 | 1 | 12 | `0x200690` | `0x200e20` | `0x200f40` |
| `0x200f60` | DUMMY_16 | 1 | 1 | 2 | `0x200f78` | `0x200f7c` | — |
| `0x200fb0` | fallback of 36_BOLD | 1 | 1 | 10 | `0x200fc8` | `0x201280` | `0x20132c` |
| `0x2015f4` | CN_20 | **4** | 34 | 6032 | `0x20160c` | `0x2e2dc8` | — |
| `0x2fd334` | DUMMY_24 | 1 | 1 | 2 | `0x2fd34c` | `0x2fd350` | — |
| `0x2fd384` | DUMMY_20 | 1 | 1 | 2 | `0x2fd39c` | `0x2fd3a0` | — |
| `0x2fd668` | CN_16 | 1 | 34 | 6032 | `0x2fd680` | `0x31dbc4` | — |

¹ including glyph 0, the not-found glyph (always `box 0×0`, `adv_w 0`).

All nine have `bitmap_format == 0` (PLAIN) and `kern_classes == 0`.

---

## 2. The three "unknown" 2-glyph faces — they are **empty stubs**

`0x200f60` (DUMMY_16), `0x2fd334` (DUMMY_24), `0x2fd384` (DUMMY_20) each have:

* one cmap, `type = FORMAT0_TINY`, `range_start = U+0000`, `range_length = 1`,
  `glyph_id_start = 1` — i.e. they map **only codepoint U+0000**;
* `glyph_dsc[0]` and `glyph_dsc[1]` are both `box_w = box_h = 0`;
* a **1-byte** glyph-bitmap blob, value `0x00`.

They draw nothing. The only real content is `glyph_dsc[1].adv_w`
(DUMMY_16 = 3.56 px, DUMMY_20 = 4.50 px, DUMMY_24 = 5.38 px) — a NUL advance width.

They are not placeholders, icons or a symbol font. Their whole job is to be a **named
`lv_font_t` identity whose `fallback` points at the real CJK face**, so that every glyph
request misses and is served by the fallback:

```
FONT_DUMMY_16 (0x467000) --fallback--> 0x4670c8  FONT_CN_16_NORMAL
FONT_DUMMY_20 (0x4670a0) --fallback--> 0x467050  FONT_CN_20_NORMAL
FONT_DUMMY_24 (0x467078) --fallback--> 0x466fb0  FONT_CN_24_NORMAL
```

`renders/EFFECTIVE_DUMMY_{16,20,24}_via_fallback.png` show what a label using each DUMMY
name actually puts on screen. The empty faces themselves have no render (nothing to draw).

**Why the indirection exists is inference, marked UNVERIFIED:** the image contains a
*second*, file-based font manager (`../../thirdparty/star_air_lvgl/src/font_manager/lv_font_air_binary.c`,
strings `FONT_20`, `lv_font_do_load_font`, `Error loading font file`, and the path
`B:lv_font_air_full_cn_20_bpp1.bin` on a LittleFS volume `B:`). The most likely purpose of
the DUMMY objects is a stable indirection whose `dsc`/`fallback` can be repointed at a
runtime-loaded font. I did **not** find the code that performs such a rewrite, so this is a
hypothesis, not a traced fact. What *is* traced is that `lv_font_air_binary` falls back to
`font@0x467050` (CN_20) when the file load fails, and that
`lv_font_air_full_cn_20_bpp1.bin` is **not present in this OTA** — the archive contains
only `best1600_watch_bth.bin` and `platform_tester.bin`.

---

## 3. The two large antialiased digit faces

Both are bpp4 (16 grey levels) and both are digit-only. Renders:
`renders/font_CN36BOLD_EN36BOLD_all.png`, `renders/font_CN32_EN32_NORMAL_all.png`,
`renders/SIZE_COMPARISON_1234.png`.

### `0x19c360` — `FONT_CN_36_BOLD` / `FONT_EN_36_BOLD` — **the larger one**

cmap `SPARSE_TINY`, `range_start = U+002D`, `list_length = 14`. Coverage confirmed as
exactly **`- . 0 1 2 3 4 5 6 7 8 9 : °`**:

| gid | cp | box | ofs | adv |
|---|---|---|---|---|
| 1 | `-` | 12×3 | (2,10) | 16.56 |
| 2 | `.` | 6×5 | (2,0) | 9.94 |
| 3–12 | `0`–`9` | 10..**20**×**26** | (1..2,0) | 16.75–23.12 |
| 13 | `:` | 6×19 | (2,0) | 9.94 |
| 14 | `°` | 13×12 | (2,15) | 16.38 |

Clean anti-aliased digits, `line_height 52`, `base_line 12`. This is **the largest text in
the firmware**. `renders/CLOCK_36BOLD_1234.png`, `renders/CLOCK_36BOLD_temp.png`.

**Its fallback, `0x200fb0`, is a 9-glyph bpp1 face containing `K N i n o w 在 现 現`**
(`renders/font_fallback_of_36BOLD_all.png`). Rendered together, the pair produces
`现在 12:34` / `Now 12:34` — see `renders/EFFECTIVE_36BOLD_via_fallback.png`. The i18n key
`0x4019` is `现在` (zh-CN, `0x401434`) / `Now` (en, `0x40415c`), and it sits in the
navigation string block (`Route refreshed`, `Home`, `Company`). `現` is the Traditional
form of `现` — no locale table in 1.0.12.83 uses it, so it is a leftover from a build that
shipped zh-TW. **UNVERIFIED:** I could not attribute `K`, `i` or `n` to any string; the
charset was probably over-specified when the face was generated. This face also carries the
only kerning table in the image (`kern_dsc = 0x20132c`, `kern_scale = 16`).

### `0x200678` — `FONT_CN_32_NORMAL` / `FONT_EN_32_NORMAL` — the smaller one

cmap `FORMAT0_FULL`, `range_start = U+002E`, `range_length = 12`, with a 12-byte
`glyph_id_ofs_list` at `0x200ee0` = `00 00 01 02 03 04 05 06 07 08 09 0a`. Because
`glyph_id_start = 1` and the offset for `/` is `0`, **`/` aliases onto the `.` glyph** —
i.e. the requested set was `.0123456789` (11 glyphs) and `/` merely fell inside the dense
range. Digits are **18×24**, `line_height 40`, `base_line 2`.

**It has no `:` glyph.** `renders/SIZE_COMPARISON_1234.png` shows `12:34` rendering as
`12 34` in this face. It is a decimal-number readout (`.` + digits, `base_line 2` = no
descender room), not a clock face. It also has a kern table (`0x200f40`, scale 16).

**Which is larger:** `36_BOLD` (26 px digit boxes, `lh 52`) is larger than `32_NORMAL`
(24 px, `lh 40`). **Which is plausibly a standby clock:** `36_BOLD` — it is the only large
face with `:`, and its `°` + `-` make it a clock/temperature face. `32_NORMAL` is the
smaller decimal readout. Neither is what the standby clock actually uses (§5).

---

## 4. `FONT_*` name → physical face

The registration function is at **`0x5e11dc`** (`push {r4,r5,r6,lr}`), literal pool
`0x5e14b8`–`0x5e1507`. It loads `r5 = fontMap @0x3d69a318` and issues ten
`map_put(map, name, font)` calls to `0x5dce38`, then reloads `r4 = resourceMap @0x3d69a328`
and continues with the 369-entry image table at `0x5e1508`. Two thin accessors:

* `0x5e2e80` — `getFont(name)` → `map_get(fontMap@0x3d69a318, name)`
* `0x5e2e8c` — `getImage(name)` → `map_get(resourceMap@0x3d69a328, name)`
* `0x5e2e64` — init: calls `0x5e11dc`, then installs **`font@0x467050` (CN_20) as the
  default font**.

| `FONT_*` name | string | `lv_font_t` | face | bpp | digit box | lh/bl |
|---|---|---|---|---|---|---|
| `FONT_CN_32_NORMAL` | `0x3ffdf4` | `0x466fd8` | `0x200678` | 4 | 18×24 | 40/2 |
| `FONT_EN_32_NORMAL` | `0x3ffe08` | `0x466fd8` | *same* | 4 | 18×24 | 40/2 |
| `FONT_CN_36_BOLD` | `0x16fc10` | `0x466f88` | `0x19c360` | 4 | 19×26 | 52/12 |
| `FONT_EN_36_BOLD` | `0x3ffe1c` | `0x466f88` | *same* | 4 | 19×26 | 52/12 |
| `FONT_CN_16_NORMAL` | `0x3ffe2c` | `0x4670c8` | `0x2fd668` | 1 | 8×12 | 22/6 |
| `FONT_CN_20_NORMAL` | `0x3ffe40` | `0x467050` | `0x2015f4` | 4 | 11×14 | 27/6 |
| `FONT_CN_24_NORMAL` | `0x3ffe54` | `0x466fb0` | `0x19d0ec` | 1 | 12×17 | 33/7 |
| `FONT_DUMMY_16` | `0x166950` | `0x467000` | empty → CN_16 | — | — | 22/6 |
| `FONT_DUMMY_20` | `0x166af0` | `0x4670a0` | empty → CN_20 | — | — | 26/6 |
| `FONT_DUMMY_24` | `0x167cbc` | `0x467078` | empty → CN_24 | — | — | 33/7 |

There are more names than faces because the CN/EN pairs are literally the same object —
**there is no separate Latin face**; the "EN" names are aliases of the digit faces.

**Which names the app actually looks up.** Counting 4-byte pointer references to each name string outside the registration pool
(`0x5e14b8`-`0x5e1507`):

| name | lookup sites |
|---|---|
| `FONT_DUMMY_20` | 111 |
| `FONT_DUMMY_16` | 64 |
| `FONT_DUMMY_24` | 9 |
| `FONT_CN_36_BOLD` | **3** (`0x52776c`, `0x59bc38`, `0x5b6324`) |
| `FONT_CN_32_NORMAL`, `FONT_EN_32_NORMAL`, `FONT_EN_36_BOLD`, `FONT_CN_16/20/24_NORMAL` | **0** |

So six of the ten registered names are dead: the whole UI draws through the three DUMMY
names plus `FONT_CN_36_BOLD`. The three `FONT_CN_36_BOLD` sites are:

* `0x52776c` — Starrynet connect view; same pool holds `"%06d"` and `starrynet_connect_bg`
  → **the 6-digit pairing code**.
* `0x5b6324` — Navigation page (pool neighbours `navi_lbs_*`, `landback_*`).
* `0x59bc38` — third site, in the same pool as `FONT_DUMMY_20`; I did not pin its page.

`FONT_20` is a different thing entirely: it belongs to the file-based manager
(`lv_font_air_binary.c`) and is loaded from `B:lv_font_air_full_cn_20_bpp1.bin`, which is
not in this OTA.

**`set_font_mode`** (string `0x194cc4`) is a BLE action name; its only pointer reference is
the literal at `0x5cc438`, loaded once at `0x5cc2b4`, inside the
`Launcher/model/MessageModel.cpp` block. The Settings UI carries the matching strings
`Font Size` (`0x405b10`), `Large Font Preview`, `Standard Font Preview`, `Standard Font`,
`Large Font` — i18n keys `0x12048`–`0x12052` in the table at `0x468d08`. **UNVERIFIED:** I
did not trace `set_font_mode` to any code that swaps a font object, and no `lv_font_t` field
is written by any code path I found. Given that the runtime "large font" file is absent from
the OTA, the most likely implementation is a scale/size setting applied elsewhere, but I did
not establish it.

---

## 5. What the standby clock actually uses — **traced**

`customTimeAndBatteryWidget` (string `0x199860`) is created by the `StandByWidget` factory
at `0x5d9c78`; its `tbb` dispatch case at `0x5d9d60` calls the implementation at
**`0x5d931c`**, and the neighbouring branch logs
`[Launcher]customTimeAndBatteryWidget failed, title is empty` (`0x19987c`, referenced from
the same pool at `0x5d9e3c`). Source file for the whole block:
`../../thirdparty/star_air_lvgl/app/Pages/Launcher/widget/StandByWidget.cpp` (`0x1994b0`).

The relevant body of `0x5d931c`:

```
5d9336  bl  0x637344                     ; create label container
5d933e  bl  0x638730                     ; lv_label_set_text(...)
5d934a  bl  0x606e20                     ; lv_obj_set_style_text_color(obj, 0xFF00FF00, 0)
5d934e  ldr r0, =0x3c13e6fc              ; lit@5d94d0 -> "FONT_DUMMY_20"   <<<<<<
5d9350  bl  0x5e2e80                     ; getFont(name)
5d935a  bl  0x606e38                     ; lv_obj_set_style_text_font(label, font, 0)
5d935e  movw r2, #0x27d1                 ; LV_SIZE_CONTENT
5d9366  bl  0x607048                     ; lv_obj_set_size(label, CONTENT, CONTENT)
5d9372  bl  0x6072bc                     ; lv_obj_align(label, LV_ALIGN_TOP_MID, 0, +11)
...     battery row: lv_obj_align(row, LV_ALIGN_BOTTOM_MID, 0, -9)
        lv_obj_set_size(icon, 12, 24); getImage("launcher_standby_battery_empty")
```

**The clock label's font is `FONT_DUMMY_20` → `FONT_CN_20_NORMAL` → dsc `0x2015f4`.**
Digits are **11 × 14 px, bpp4**, `line_height 26` (taken from the DUMMY_20 object, not the
CN_20 object). The text itself is `"%02d:%02d"` (`0x17c818`), formatted by
`Launcher/model/TimeModel.cpp` (`0x1955d8`, formatter pool at `0x5cded0`).

`renders/STANDBY_CLOCK_actual_CN20.png` and `renders/STANDBY_CLOCK_row.png` show the real
appearance. Compare with `renders/SIZE_COMPARISON_1234.png`: the clock is drawn at roughly
**half** the height of the unused `FONT_CN_36_BOLD` face.

That the same 6032-glyph face draws the clock, the battery percentage and every Chinese
label is the core constraint on any restyle.

---

## 6. Byte budget

Per face, measured (bitmap span = end of the last glyph's data; cmap "lists" = the
`unicode_list` / `glyph_id_ofs_list` blobs):

| face | glyph_bitmap range | bitmap B | glyph_dsc B | cmaps B | lists B | **total** |
|---|---|---|---|---|---|---|
| 36_BOLD `0x19c360` | `0x19c378`–`0x19cd37` | 2,495 | 240 | 20 | 28 | **2,783** |
| CN_24 `0x19d0ec` | `0x19d104`–`0x1e610b` | 299,015 | 96,512 | 680 | 7,642 | **403,849** |
| 32_NORMAL `0x200678` | `0x200690`–`0x200e1d` | 1,933 | 192 | 20 | 12 | **2,157** |
| DUMMY_16 `0x200f60` | `0x200f78` | 1 | 32 | 20 | 0 | **53** |
| FB-of-36 `0x200fb0` | `0x200fc8`–`0x20127e` | 694 | 160 | 20 | 18 | **892** |
| CN_20 `0x2015f4` | `0x20160c`–`0x2e2dc6` | **923,578** | 96,512 | 680 | 7,642 | **1,028,412** |
| DUMMY_24 `0x2fd334` | `0x2fd34c` | 1 | 32 | 20 | 0 | **53** |
| DUMMY_20 `0x2fd384` | `0x2fd39c` | 1 | 32 | 20 | 0 | **53** |
| CN_16 `0x2fd668` | `0x2fd680`–`0x31dbc3` | 132,419 | 96,512 | 680 | 7,642 | **237,253** |
| | | | | | **SUM** | **1,675,505** |

**24.7 % of the entire image is fonts.**

The three 6032-glyph faces share an identical 34-range cmap (95 ASCII, Latin-1/Latin-Ext,
Arabic, Thai, Myanmar, Kangxi radicals, kana, a 3,026-entry sparse CJK block from U+30E6, a
533-entry block from U+8D34, CJK compat, Arabic presentation forms, fullwidth):

| face | Latin/symbol glyphs | Latin bytes | CJK glyphs (≥ U+2E80) | **CJK bytes = reclaimable** |
|---|---|---|---|---|
| CN_24 (bpp1) | 1,261 | 31,275 | 4,770 | **267,740** |
| CN_20 (bpp4) | 1,261 | 94,592 | 4,770 | **828,986** |
| CN_16 (bpp1) | 1,261 | 14,332 | 4,770 | **118,087** |
| | | | | **1,214,813 total** |

Zeroing `box_w`/`box_h` alone frees nothing — the blob is addressed by explicit
`bitmap_index` per glyph, so you must also rewrite the 6,032 `bitmap_index` values to
compact the survivors to the front. Doing so leaves a contiguous free tail inside each
`glyph_bitmap` region; nothing outside the face moves, and every other pointer in the image
stays valid.

**Free space elsewhere is essentially nil.** A scan for zero runs ≥ 2,048 B over the whole
6.77 MB finds **three runs totalling 10,309 B**, and two of them (`0x12f2e4`, `0x1319b1`)
are inside the HiFi4 DSP sub-image and must not be touched. Any font enlargement therefore
has to be paid for out of the existing font bytes.

**Could a larger/heavier Latin set fit?** Comfortably.

* A full ASCII `U+0020`–`U+007E` (95 glyphs) at a heavy 40 × 56 px, bpp4, averages
  ~1,120 B/glyph → **~106 KB**. That is 13 % of the CJK bytes reclaimable from CN_20 alone.
* A clock-only set (`0-9 : . - ° %`, 15 glyphs) at 48 × 72 px bpp4 is
  15 × 1,728 = **~26 KB**.
* In-place, without relocating anything: `36_BOLD`'s blob is only 2,495 B and is immediately
  followed by its `glyph_dsc` at `0x19cd38`, so there is **zero** growth headroom there
  (14 glyphs at the current 19×26 max would already need 3,458 B). Redrawing the same 14
  glyphs at the *same* box dimensions is a straight 2,495-byte overwrite and is free.
  Growing them requires repointing `dsc+0x00` (`glyph_bitmap`) and `dsc+0x04` (`glyph_dsc`)
  — two 4-byte writes at `0x19c360` and `0x19c364` — into space recovered from CN_20.

---

## 7. Verdict — is the mockup's clock style reachable by swapping the digit face?

**Partly, and the cheap version is a 4-byte patch — but not by touching the digit face.**

The premise "replace the digit face" does not apply as stated, because **the clock is not
drawn with a digit face at all**. It is drawn with `FONT_CN_20_NORMAL`, the shared
6032-glyph UI font at 11 × 14 px. Editing that face's digits changes every number and every
Chinese label in the product simultaneously.

What the layout does *not* constrain (all traced in §5):

* the label is `lv_obj_set_size(LV_SIZE_CONTENT, LV_SIZE_CONTENT)` — **no fixed box**;
* it is positioned with `lv_obj_align(LV_ALIGN_TOP_MID, 0, +11)` — **anchor-relative**, so a
  taller label grows downward from a fixed top margin, it does not overflow a hard rect;
* the battery row below is independently anchored `LV_ALIGN_BOTTOM_MID, 0, −9`;
* the panel is 640 × 480 (`hal_gpu_fill_640x480`, `FUN_2c4bf3bc`), so a 52 px-tall clock is
  not close to any limit.

So **size and position are not hard-coded.** What *is* fixed is the font *selection*, and it
is fixed by one literal word.

### The minimal patch

| what | file offset | current | patch to |
|---|---|---|---|
| clock font-name literal | **`0x5d94d0`** | `fc e6 13 3c` (`FONT_DUMMY_20`) | `1c 78 14 3c` (`FONT_CN_36_BOLD`) |

Four bytes, same length, no code motion, no relocation. Verified safe in two respects:

* that literal word is loaded by **exactly one** instruction in the image
  (`ldr r0,[pc]` at `0x5d934e`, inside `customTimeAndBatteryWidget`) — confirmed by scanning
  both the T1 and T2 `LDR (literal)` encodings over the enclosing function;
* `FONT_CN_36_BOLD` covers `-.0123456789:°`, a strict superset of what `"%02d:%02d"`
  emits, so no glyph in the clock string falls through to the fallback face.

Effect: the standby clock jumps from 11 × 14 px to **19 × 26 px antialiased**, with
`line_height` 26 → 52 and `base_line` 6 → 12 taken from `font@0x466f88`.
`renders/CLOCK_36BOLD_1234.png` is exactly what would appear.

### Beyond that

* **Vertical placement / spacing** — patch `line_height` (`uint16` at `0x466f90`) and
  `base_line` (`0x466f92`) of `font@0x466f88`. Note this object is shared with the Starrynet
  pairing-code screen and the navigation ETA, which would move too.
* **A dedicated clock face** — the cleanest route is to build a new digit face, place its
  bitmap and `glyph_dsc` in space compacted out of CN_20 (§6), and point the clock at it.
  That needs a new `lv_font_t`; there is no spare slot in the table, but the unused
  `font@0x466fd8` (`FONT_CN_32_NORMAL`/`EN_32`) has **zero lookup sites** and can be
  repurposed wholesale — repoint its `dsc` (`0x466fe8`), set its `line_height`/`base_line`
  (`0x466fe0`/`0x466fe2`), and point the clock literal at `FONT_CN_32_NORMAL`'s string
  instead. Everything is passive data plus one literal word; no instruction lengths change.
* **What is genuinely blocked:** making the clock larger than ~26 px *without* relocating
  glyph data, and any style that needs glyphs the firmware does not contain (there is no
  Latin alphabet outside the 6032-glyph CJK faces and the 9-glyph `Know现在現` fallback).

### Honesty notes

* §1–§6 face inventory, the name→font map, and the clock's font selection are traced
  through disassembly and byte-level structure; every one is pinned in `manifest.json`.
* **UNVERIFIED:** why the DUMMY indirection exists; what `set_font_mode` / the Settings
  "Font Size" toggle actually changes; the page owning the third `FONT_CN_36_BOLD` site
  (`0x59bc38`); the provenance of `K`, `i`, `n` in the fallback face.
* The patch in §7 is derived statically and has **not** been flashed. `AUDIT_2026-09-03.md`
  §6 notes there is no signature gate but that boot-time execution order is the real brick
  risk; this patch changes only a font pointer inside a widget constructor that already runs
  after LVGL is up, so it is in the low-risk class — but that is an argument, not a test.
