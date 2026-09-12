# Display & UI stack — MYVU 1.0.11.53

**Target:** `Reverse/firmware/x_1.0.11.53/platform_tester.bin` (7,042,632 bytes)
**Address model:** code `VA = file + 0x2C010000` · data `file = VA − 0x3BFD7CB0`
(the `0x2C000000` base is KNOWN-BAD; the naive `VA − 0x3C000000` data rule is also wrong).
**Verifier:** `node Reverse/firmware/analysis/map/verify-display.mjs` → `display verification passed`.

Every offset below is 1.0.11.53 and was read out of that binary in this pass. Where a prior
doc is contradicted, the contradiction is called out.

---

## 0. Customization tier — summary

| Surface | Tier | Reversible? | Where |
|---|---|---|---|
| Standby widget set/order | **CONFIG** | yes, resend | `set_standby_widget_lists` @`0x1a6430` |
| Panel brightness | **CONFIG** | yes | `set_disp_bri` @`0x171094` / `get_disp_bri` @`0x1710bc` |
| UI language (zh/en) | **CONFIG** | yes | shell cmd `language_switch` @`0x451dc0` |
| Icon / image pixels + palette | **DATA** | flash, fixed length | 348 IDX4 blobs, `0x349690`–`0x459b42` |
| Glyph bitmaps & metrics | **DATA** | flash, fixed length | 9 `lv_font_t` @`0x491ccc`+ |
| Downloadable CN font | **DATA (filesystem)** | yes, no flash | `B:lv_font_air_full_cn_20_bpp1.bin` |
| Resource *name* strings | **DATA** | in-place ≤ capacity | registry @`0x622810` pool |
| Widget x/y/align/size | **CODE** (1-byte immediates) | needs reflash | e.g. clock y @`0x61b15e` |
| Which style property is set | **CODE** (BL retarget) | needs reflash | thunk table `0x64a43c` |
| UI colour `0xFF00FF00` | **CODE** (MOV.W imm) | needs reflash | 246 sites |
| New widgets / new pages | **CODE** (new instructions) | **bricked v5/v6** | — |

---

## 1. LVGL integration

The UI is a **vendor fork of LVGL v8** vendored as `thirdparty/star_air_lvgl`. **53 distinct
source-file paths** survive in `__FILE__` strings (`0x44f000`–`0x45a7ff` is the main pool).

Evidence the fork is v8, not v7 or v9:
* `lv_style_set_prop_internal` / `lv_style_register_prop` / "No more custom property IDs
  available" @`0x450fdc` — the v8.3 custom-property allocator.
* `LV_SIZE_CONTENT == 0x27D1` (`LV_COORD_SET_SPEC(2001)`) used as `movw r2,#0x27d1`.
* Style property ids 48/49/50 = border color/opa/width and 85/87 = text color/font — the v8 numbering.
* `lv_obj_t` tree API (`lv_obj_move_to_index`, `lv_obj_add_event_cb`).

**No version string is embedded.** `grep` for `8.3.`, `v8.`, `lv_conf` returns nothing —
so "v8" here is inferred from ABI, not read from a banner. Stated as such deliberately.

### Modules actually linked (from the 53 paths)

| Group | Files |
|---|---|
| core | `lv_obj.c`, `lv_obj_pos.c`, `lv_obj_tree.c`, `lv_refr.c`, `lv_event.c`, **`lv_indev_xjxr.c`** |
| draw | `draw/bes/lv_gpu_bes.c`, `draw/bes/vglite/lv_draw_vglite_line.c`, `draw/sw/lv_draw_sw_layer.c`, `draw/sw/lv_draw_sw_line.c`, `lv_img_decoder.c` |
| widgets | **only** `lv_label.c`, `lv_bar.c`, `lv_line.c`, `extra/widgets/span/lv_span.c` |
| font | `lv_font_loader.c`, `lv_font_utils.c`, **`font_manager/lv_font_air_binary.c`** |
| fs | `misc/lv_fs.c`, `extra/libs/fsdrv/lv_fs_lfs.c` (littlefs) |
| porting | `lv_app.c`, `lv_port_disp_speedup_bgra8888.c`, `lv_port_indev.c`, `lv_to_async_ipc.c`, `lv_async_handler_thread.c`, `lv_fps_test.c`, `lv_app_test.c` |
| vendor add-ons | `ipc/lv_ipc.c`, `key/lv_key_manager.c`, `power/lv_power_manager.c` + `power/ui/lv_power_ui.c`, `vol_brightness/**` (volume bar + brightness bar UI), `xjxr_input/**` (7 touchpad variants), `extra/lv_system.c`, `extra/libs/bmp/lv_argb2bmp.c`, `xjxr_trace_wrapper` |

**Not linked:** `lv_arc`, `lv_chart`, `lv_slider`, `lv_table`, `lv_meter`, `lv_canvas`,
`lv_keyboard`, `lv_textarea`, `lv_dropdown`, `lv_theme*`, `lv_anim` as a named module, `lv_gif`,
`lv_qrcode` — all absent from the image (searched as strings; see verifier `NEG` gate).
Practical consequence: **you cannot ask this firmware to draw an arc, a chart or a QR code.**
Anything new must be built from label + bar + line + img.

`extra/lv_system.c` enforces a UI thread: `assert_lvgl_ui_thread` / "curr:%s, id:%d, only
permited in:%s". Every LVGL call must run on the `lvgl_ui` thread; `lv_to_async_ipc.c` is
the mailbox other threads use to get there. This is the boot-order trap that bricked v5/v6.

### Vendor app layer

Above LVGL sits `thirdparty/star_air_lvgl/app/Pages/<Name>/ui/...` (e.g. `app/Pages/Ring/ui`
@`0x17d130`). Page registry and per-app detail belong to leaf-1.2/1.8; what matters here is
that the app layer is C++ view classes that construct LVGL objects with **inline coordinate
immediates** (section 6), not a declarative layout table.

**Tier: CODE.** Adding a module or widget type means new `.text`. Do not attempt.

---

## 2. The panel and the pixel path

```
app view (C++)  ->  LVGL v8 fork  ->  lv_port_disp_speedup_bgra8888.c : disp_flush_area
                                   ->  GPU (VeriSilicon vg_lite) or sw draw
                                   ->  jbd_display_image_post -> jbd4010_display thread
                                   ->  SPI -> JBD4010 microLED, L and R panels
```

* **Driver:** `platform/drivers/graphic/lcd/jbd013_api.c` (`0x415b4`), `panel_driver.c`
  (`0x416dc`), `hal_driver.c` (`0x414c0`). Thread `jbd4010_display` @`0x41ce4`, worker
  `jbd_thread` @`0x41c84`, `JBD_TIMER` @`0x41c90`.
* **Two panels.** `[panel]jbd panel esd check start`, and `left:%d` / `right:%d` @`0x4197c`/`0x41984`,
  `device:left ID:%x,device:right ID:%x` — stereo, addressed as device 0/1.
* **Resolution 640×480.** In 11.53 the geometry is *not* a `movw #640` immediate (searched the
  whole `.text` region `0x469954`–`0x6b7000`: zero `movw` of 640 or 480). The evidence is the
  factory pattern names `AA_Pattern_640_480_R32` / `_R40` @`0x172800`/`0x172818`, and a
  `u16{640,480}` literal pair @`0x671594`. The 12.83 decomp (`analysis/jbd013/`) shows
  `jbd_panel_init` and `vg_lite_init(640,480)` hardcoding the same. **Flagged: in 11.53 this is
  string + literal evidence, not a decoded init sequence.**
* **Framebuffer colour format: BGRA8888** — from the porting file name
  `lv_port_disp_speedup_bgra8888.c` (`0x451e90`) and from `lv_argb2bmp.c` (the screenshot path
  writes 32-bit BMP). 32 bpp in RAM, even though the panel emits one colour.
* **The green ramp.** The panel is monochrome green. It shows in two places:
  1. **Code:** every UI colour constant is `MOV.W Rd, #0xFF00FF00` (ARGB: opaque, R=0, G=255,
     B=0). The exact 4-byte encoding for `r1` (`4f f0 ff 21`) appears at **246** half-word-aligned
     sites. Confirmed instances: text colour @`0x61b138`, ring border colour @`0x61b7e2`.
  2. **Data:** IDX4 palettes are a 16-step *alpha* ramp of one colour. Of 348 images, **248**
     have a non-decreasing alpha ramp starting at 0, and **189** have all 15 non-transparent
     palette entries sharing a single BGR triple — **186 of those are `(B=0,G=255,R=0)`**, pure
     green; 3 are black. Palette entry order is **B,G,R,A**.
* **Brightness** is a calibrated panel current, not a framebuffer scale:
  `[panel]set cali_creg:device left,cali creg:%d`, `[panel]cali:%d,%d,%d,nvbri:%d,%d,rate:%d`,
  `[panel]invalid brightness level`, `[panel]Set brightness from user failed, use default
  brightness 50`. `nvbri` = the value is held in NV.
* **ESD watchdog:** registers `0x05 / 0x63 / 0x35 / 0x47 / 0xC1` read back periodically
  (`0x41860`–`0x41920`). A panel that fails ESD gets re-initialised; do not confuse an ESD
  reset with your patch failing.
* **GPU:** VeriSilicon vg_lite, `platform/drivers/graphic/gpu/gpu_port.c` @`0x144524`, with a
  chip-ID guard "NOT match vg_lite_options.h CHIPID…" @`0x144160`. Only the **line/bezier**
  and **image-decode** paths are wired into LVGL (`lv_gpu_bes.c`, `lv_draw_vglite_line.c`); there
  is an explicit sw fallback "Cannot use sw draw bezier curve, its a fake!" @`0x44f4b4`.

**Tier:**
* brightness = **CONFIG** (`set_disp_bri`, NV-backed).
* colour = **CODE** (MOV.W immediates) *and* **DATA** (palettes) — but changing it is cosmetic
  only, since the emitter is a green microLED.
* resolution, driver, ESD = **CODE**. Do not touch.

---

## 3. Fonts

### 3.1 The FONT_* name registry — 10 names, 8 objects

A single initialiser at **`0x622810`** fills two name→pointer maps by repeated calls to a
3-arg register function at **`0x61e46c`** (`r0`=map, `r1`=name, `r2`=value). The initialiser
is a 5-function tail-call chain: `0x622810 → 0x622d2c → 0x623244 → 0x623760 → 0x623c7c`,
**357 register calls** in total (verified twice: by walking the chain, and by a raw
`.text` scan for `BL 0x61e46c`). The maps are RAM globals:

| map | VA | entries |
|---|---|---|
| font registry | `0x3D653748` | **10** |
| resource (image) registry | `0x3D653758` | **347** |

`0x624188` is the font lookup (`getFontByName`) — the clock constructor calls it with the
`FONT_DUMMY_20` literal and feeds the result straight to the `text_font` style setter.

| name | string @ | → `lv_font_t` @ | face |
|---|---|---|---|
| `FONT_CN_32_NORMAL` | `0x41a290` | `0x491d1c` | 40 px, 4 bpp, digits+punct only |
| `FONT_EN_32_NORMAL` | `0x41a2a4` | `0x491d1c` | same object |
| `FONT_CN_36_BOLD`  | `0x180c40` | `0x491ccc` | 52 px, 4 bpp, digits+punct only |
| `FONT_EN_36_BOLD`  | `0x41a2b8` | `0x491ccc` | same object |
| `FONT_CN_16_NORMAL`| `0x41a2c8` | `0x491e0c` | 22 px full CN |
| `FONT_CN_20_NORMAL`| `0x41a2dc` | `0x491d94` | 27 px full CN |
| `FONT_CN_24_NORMAL`| `0x41a2f0` | `0x491cf4` | 33 px full CN |
| `FONT_DUMMY_16`    | `0x17796c` | `0x491d44` | stub → fallback `0x491e0c` |
| `FONT_DUMMY_20`    | `0x177b0c` | `0x491de4` | stub → fallback `0x491d94` |
| `FONT_DUMMY_24`    | `0x178c48` | `0x491dbc` | stub → fallback `0x491cf4` |

**The `FONT_DUMMY_*` faces are empty.** Each has one cmap covering U+0000..U+0000 and a
2-glyph table; all real rendering happens through `lv_font_t.fallback`. `FONT_DUMMY_20` is
by far the most-used font name in the image (110 pool references vs 63 for `FONT_DUMMY_16`),
so **the single highest-leverage font change is repointing `0x491de4`'s fallback word at
`0x491df8`** — 4 bytes, no length change, switches the whole UI's body text face.

### 3.2 The `lv_font_t` objects — 9, stride 0x28, `0x491ccc`–`0x491e33`

Layout confirmed field-by-field (LVGL v8 `lv_font_t`):

| off | field | value in every object |
|---|---|---|
| +0 | `get_glyph_bitmap` | `0x2C67B659` (file `0x66b658`, Thumb) |
| +4 | `get_glyph_dsc` | `0x2C67B5F1` (file `0x66b5f0`) |
| +8 | `line_height` u16 | see table |
| +10 | `base_line` u16 | see table |
| +12..15 | `subpx`, `underline_position`, `underline_thickness` | |
| +16 | `dsc` → `lv_font_fmt_txt_dsc_t` | |
| +20 | `fallback` → `lv_font_t` | |
| +24 | `user_data` | 0 |

| obj | line_h | base_l | ul pos/thk | dsc | bpp | cmaps | glyphs | fallback |
|---|---|---|---|---|---|---|---|---|
| `0x491ccc` | 52 | 12 | −5/2 | `0x1ad8ec` | 4 | 1 | 14 | `0x491d6c` |
| `0x491cf4` | 33 | 7 | −3/1 | `0x1ae61c` | 1 | 34 | **6032** | – |
| `0x491d1c` | 40 | 2 | −5/2 | `0x211ba8` | 4 | 1 | 13 | – |
| `0x491d44` | 22 | 6 | −2/1 | `0x212490` | 1 | 1 | 2 | `0x491e0c` |
| `0x491d6c` | 52 | 12 | −5/2 | `0x2124e0` | 1 | 1 | 10 | – |
| `0x491d94` | 27 | 6 | −2/1 | `0x212b24` | **4** | 34 | **6032** | – |
| `0x491dbc` | 33 | 7 | −3/1 | `0x30e864` | 1 | 1 | 2 | `0x491cf4` |
| `0x491de4` | 26 | 6 | −2/1 | `0x30e8b4` | 1 | 1 | 2 | `0x491d94` |
| `0x491e0c` | 22 | 6 | −2/1 | `0x30eb98` | 1 | 34 | **6032** | – |

The three **full CJK faces** — 22 px (`0x491e0c`), 27 px (`0x491d94`), 33 px (`0x491cf4`) —
each carry **6032 glyphs** across **34 cmap ranges** spanning U+0020 … U+10F00 (ASCII, Latin-1,
Latin Extended, Greek, Cyrillic, CJK 0x4E00 block, CJK compat, halfwidth/fullwidth forms,
Arabic presentation forms). That count and structure match `analysis/fonts_v2/manifest_v2.json`
for 12.83, so the face set is stable across builds; **the offsets are not.**

`line_height` 52/33/27/22 reproduces `analysis/layout/LAYOUT.md`'s "large 33 / medium 27 /
small 22, digit face 52". The 40 px face (`0x491d1c`, 13 glyphs, U+002E..U+003A) is the
**clock digit face** — `.` `/` `0`–`9` `:` exactly, nothing else.

### 3.3 `lv_font_fmt_txt_dsc_t` and the glyph descriptor

`dsc` layout (20 B + cache ptr):
`+0 glyph_bitmap` · `+4 glyph_dsc` · `+8 cmaps` · `+12 kern_dsc` · `+16 kern_scale u16` ·
`+18 bitfield u16 {cmap_num:9, bpp:4, kern_classes:1, bitmap_format:2}` · `+20 cache ptr (RAM 0x3D6537xx)`.

cmap entry is **20 bytes**: `range_start u32, range_length u16, glyph_id_start u16,
unicode_list u32, glyph_id_ofs_list u32, list_length u16, type u8`.

**The glyph descriptor is 16 bytes, not LVGL's packed 8.** The vendor widened it:

| off | field | note |
|---|---|---|
| +0 | `bitmap_index` u32 | byte offset into `glyph_bitmap` |
| +4 | `adv_w` u32 | **1/16 px** |
| +8 | `box_w` u16 | |
| +10 | `box_h` u16 | |
| +12 | `ofs_x` i16 | |
| +14 | `ofs_y` i16 | |

Cross-checked against `Tools/fwbuilder/fwcore.js:glyphDsc` (stride 16) — an independently
written parser that the on-hardware glyph patcher already uses.

**Positive control, run by the verifier:** face `0x491d94` (27 px, 4 bpp), `'A'` = gid 34
(cmap 0: `range_start 0x20, len 95, gid_start 1, type 2` ⇒ gid = 1 + 0x41 − 0x20).
Descriptor: `bitmap_index 1853, adv_w 217 (13.56 px), box 14×14, ofs 0,0`. Decoded row-major
4 bpp at `glyph_bitmap 0x212b3c + 1853` it renders a legible capital A: ink profile per row
`[2,3,4,3,3,3,4,4,8,9,4,4,3,4]`, apex at x∈{6,7} on row 0, crossbar row 9, and the bottom row
split into two legs at x∈{1,2} and x∈{11,12}. Total ink 58 px. **Shifting the bitmap base by
one byte destroys the apex-centring test** — that is the verifier's negative control.

### 3.4 The 1-bpp faces are **not** compressed — corrected

An earlier pass in this file claimed the 1-bpp faces were compressed, on the grounds that
`0x491e0c` `'A'` is `box 10x12` with only a 15 B budget while "a 1-bpp bitmap needs 24 B".
**That arithmetic assumed byte-aligned rows, and it is wrong.** LVGL's `lv_font_fmt_txt`
bitmaps are a *continuous* bit stream: no per-row padding. `ceil(10*12/8) = 15` — the budget
matches exactly. Same for `0x491cf4` `'A'`, `box 15x17`, `ceil(15*17/8) = 32`, budget 32.

Decoded that way both render legibly (verifier checks the shape, not the size):

```
0x491e0c 'A' 10x12          0x491cf4 'A' 15x17
....##....                  ......##.......
....###...                  .....####......
....#.#...                  .....####......
...##.#...                  .....##.##.....
...##.##..                  ....##..##.....
...#...#..                  ....##..##.....
..##...#..                  ....##...##....
..##...##.                  ...##....##....
..#######.                  ...##....##....
.##.....##                  ..##......##...
.#......##                  ..##########...
.#.......#                  ..###########..
                            .##........##..
                            .##........##..
                            .##.........##.
                            ##..........##.
                            ##..........##.
```

So **`bitmap_format` really is 0 (plain), for 1 bpp and 4 bpp alike**, and the 1-bpp faces —
including the three full CJK faces — are ordinary in-place patch targets, same rules as the
4-bpp ones: MSB-first, row-major, continuous, must fit the existing byte budget.

### 3.5 Fonts that live in a filesystem, not in flash

`font_manager/lv_font_air_binary.c` (`0x45a4d0`) loads LVGL binary fonts from a **littlefs
"font" volume** mounted as drive `B:`:

* `B:lv_font_air_full_cn_20_bpp1.bin` @`0x45a580` — the only filename in the image.
* `misc/lv_fs.c` carries `init font littlefs` / `font lfs first mount error = %d, to format...`
  / `lfs ota check` / `deinit font littlefs` (`0x451390`–`0x4514e0`).
* API: `lv_font_do_load_font`, `lv_font_load_from_file`, `lv_font_mgr_get_file`,
  `lv_font_mgr_get_font`, `lv_font_air_mgr_load_all`, `lv_font_free_font_file`.
* Logical name `FONT_20`, logged as `FONT_20 Already loaded` / `FONT_20 Succ`.
* `font/lv_font_loader.c` is the LVGL `lv_font_load()` binary-format parser.

**Tier: DATA, and uniquely, DATA *outside* the flash image.** A replacement CN face can be
written as an `lv_font_conv` binary into the font littlefs volume without touching
`platform_tester.bin` at all. This is the lowest-risk font change available and the one worth
pursuing first. (Where that volume lives on the partition map is leaf-1.7's.)

### 3.6 Font customization, by tier

| Change | Tier | How | Risk |
|---|---|---|---|
| Replace the loadable CN face | DATA (fs) | write `B:lv_font_air_full_cn_20_bpp1.bin` | low, no flash |
| Retarget a whole UI face | **DATA** | 4-byte `fallback` ptr, e.g. `0x491df8` | low; passive pointer |
| Nudge a glyph (bearing/advance) | DATA | `glyph_dsc` 16-B entry, `adv_w` in 1/16 px | very low |
| Repaint a 4-bpp glyph | DATA | in-place, **must fit the byte budget** | very low |
| Repaint a 1-bpp glyph | **DATA** | continuous MSB-first bits, must fit the byte budget (§3.4) | very low |
| Change `line_height` | DATA | u16 at obj+8 | low; reflows text |
| Bind a *new* FONT_ name | CODE | new register call in the `0x622810` chain | high |

---

## 4. Images

### 4.1 Format — IDX4 only

Every image in the firmware is an LVGL `lv_img_dsc_t` with **`cf = 9`
(`LV_IMG_CF_INDEXED_4BIT`)**. Header word: `cf:5 | always_zero:3 | w:11 | h:11`, then
`data_size u32`, then `data` pointer.

```
data_size == 64 + ceil(w/2) * h        // 16 × BGRA palette, then 4-bit indices
```

Storage is **flat row-major**, one nibble per pixel, **even x = high nibble**. There is **no
112-px strip tiling** — that claim in `analysis/tile_crack/**` was a wrong-base artifact and
is confirmed dead here: all 348 descriptors satisfy the flat size formula exactly, with no
remainder-strip padding term.

### 4.2 How many, and where

Scanning the whole file for `cf==9 && always_zero==0 && data_size == 64+ceil(w/2)*h &&
data ptr resolves in-file` yields **348** descriptors. The name registry at `0x3D653758` holds
**347** entries. The two numbers come from independent methods (structural scan vs.
disassembled initialiser) and they reconcile, they are not equal — see §4.3.

* descriptor range `0x34964c` … `0x459a90`
* pixel-data range `0x349690` … `0x459b42`
* **693,599 bytes = 9.85 %** of the image is IDX4 pixel data
* 72 distinct sizes; commonest 48×48 (50), 80×80 (50), 32×32 (39), 24×24 (33), 26×24 (21)
* largest dimensions seen: width 399, height 280
* descriptor and its data are **not adjacent** — the gap is usually 64, 32, 56 or 72 bytes,
  so a scan that assumes `data == dsc+12` finds only 4 of the 348. (It did, on the first try.)

### 4.3 The resource-name registry

Same initialiser chain as the fonts, second map. Names are plain `snake_case` C strings in
the `0x3c3f1f...`/`0x18....` pools. Distribution by prefix:

(recovered names, 346 of 347) `here_*` 57 · `launcher_*` 52 · `smartlife_*` 46 · `weather_*` 23 · `ring_*` 19 ·
`setting_*` 15 · `qqmusic_*` 13 · `navigation_*` 13 · `indicator_*` 13 · `music_*` 11 ·
`assistant_*` 10 · `starrynet_*` 6 · `play_*`/`connect_*`/`phone_*` 4 each · rest singletons.

**17 of the 347 registry values are not `lv_img_dsc_t`** — they are animation objects
(`next_play_anim`, `previous_anim`, `music_play_to_pause_v3`, `music_puase_to_play_v3`,
`qqmusic_playlist_loading`, …). So the registry is **329 named static images + 17 named
animations**, and of the 348 IDX4 descriptors, **19 carry no name at all** — they are
reachable only as animation frames. (One of the 347 register calls loads its operands from
behind a literal pool and is counted but not classified; 329 + 17 = 346 recovered names.) (`puase` is the vendor's
spelling; it is load-bearing — do not "fix" it.)

Lookup is by **string**, at runtime, through `0x61e46c`'s map. That means a resource-name
string can be edited in place up to its NUL capacity and the icon binding changes with it.

### 4.4 Image customization, by tier

| Change | Tier | How | Risk |
|---|---|---|---|
| Recolour an icon | **DATA** | rewrite 16 BGRA palette entries at `data` | none; fixed length |
| Repaint an icon | **DATA** | rewrite `ceil(w/2)*h` nibbles | none; fixed length |
| Resize an icon | **DATA**, constrained | must keep `data_size` ≤ original allocation | medium |
| Swap which icon a widget shows | **DATA** | edit the registry name string in place | low |
| Add a new image | **CODE** | new register call + new blob | high |

**Proven precedent:** `analysis/images_v2/` (12.83) extracted 387 images with this exact
model and the MYVU wordmark decoded correctly at `power_off`, 144×36. The model transfers;
the offsets do not.

---

## 5. Styles

### 5.1 The setter thunk table — `0x64a43c` … `0x64a657`

**45 thunks, 12 bytes each, contiguous.** Every one is the identical shape:

```
mov  ip, r1          ; value
mov  r3, r2          ; selector
movs r1, #<prop>     ; <-- the ONLY byte that differs, at thunk+4
mov  r2, ip
b.w  0x2C658404      ; file 0x648404 = lv_obj_set_local_style_prop
```

So `lv_obj_set_style_<X>(obj, value, selector)` is a one-byte-parameterised trampoline, and
`thunk+4` is a **property id you can read directly out of the binary**.

Property ids present, in table order:
`1 2 3 4 5 6 7 8 9 · 108 109 110 111 · 16 17 18 19 20 21 · 32 33 · 40 · 48 49 50 51 · 53 54 55 ·
70 · 78 · 80 81 82 83 · 85 86 87 · 89 90 91 · 11 · 96 · 10 · 22`

**Semantically confirmed in this build** (a call site whose behaviour is known):

| thunk | prop | meaning | evidence |
|---|---|---|---|
| `0x64a628` | 11 | `radius` | `0x61b7dc`, arg = `height/2` (computed by `asrs r1,r1,#1` on `[r4,#0x40]`) — a pill |
| `0x64a544` | 48 | `border_color` | `0x61b7e8`, arg `0xFF00FF00` |
| `0x64a550` | 49 | `border_opa` | BL @`0x61b7fc`, arg `92` (`movs r1,#0x5c` @`0x61b7f8`); **setting it to 0 removed the ring on hardware** |
| `0x64a55c` | 50 | `border_width` | BL @`0x61b7f2`, arg `2` (`movs r1,#2` @`0x61b7ee`) |
| `0x64a5e0` | 85 | `text_color` | `0x61b13e`, arg `0xFF00FF00`, on the clock label |
| `0x64a5f8` | 87 | `text_font` | `0x61b14e`, arg = return of `getFontByName("FONT_DUMMY_20")` |

85/87 are the **positive control** for the id decode: a wrong table would not put the font
pointer through prop 87. The other 39 ids match LVGL v8's numbering but have **not** been
individually tied to a call site in this build, and are reported as ids only.

### 5.2 How a style reaches the screen

Views call the thunks directly on a widget with selector `r2 = 0` (`LV_PART_MAIN |
LV_STATE_DEFAULT`); there is **no `lv_theme`** and no shared `lv_style_t` table — styling is
per-object, inline, at construction. `lv_style.c` is linked for the local-style machinery only.

### 5.3 Style customization, by tier

| Change | Tier | How | Risk |
|---|---|---|---|
| A style *value* (opa, width, radius, colour) | **CODE**, 1–4 byte immediate | patch the `MOVS`/`MOV.W` before the `BL` | **low-but-real** — proven on hardware |
| *Which* property a site sets | **CODE**, retarget the `BL` | rewrite the BL offset to another thunk | medium |
| Add a style call | **CODE** | new instructions | high |

The no-rings patch (`Tools/fwbuilder/verify-no-rings.mjs`) is the worked example: **one byte**
at `0x61b7f8`, `92 → 0`, nothing else changed, and the device booted.

---

## 6. Layout — the three mechanisms, and how to tell which applies

### 6.1 Glyph metrics — **DATA**

Intra-run positioning is entirely `ofs_x`, `ofs_y`, `adv_w` in the 16-byte glyph descriptor
(§3.3). `adv_w` is 1/16 px. Vertical extent is bounded by the face `line_height` (52/33/27/22/40).
Nothing executes differently; this is the safest positioning change there is.

*Gotcha carried forward from `analysis/layout/LAYOUT.md`:* substituting a narrow icon into a
wide glyph without rewriting `adv_w` leaves a huge gap. Set `adv_w = (box_w + 1) * 16`.

### 6.2 LVGL object coordinates — **CODE**, one-byte immediates

Not a table. Every widget constructor passes coordinates as inline `MOVS Rd,#imm8`
(2-byte Thumb, immediate in the low byte). The recogniser is `movw r2,#0x27d1`
(`LV_SIZE_CONTENT`); `lv_obj_align(obj, align, x, y)` follows a few instructions later with
align/x/y in **r1/r2/r3**.

Verbatim from the standby clock/battery constructor (`customTimeAndBatteryWidget`, name string
`0x1aaf48`):

```
61b138  mov.w r1, #0xFF00FF00
61b13e  bl    0x64a5e0          ; text_color  (prop 85)
61b142  ldr   r0, ='FONT_DUMMY_20'   (pool -> 0x177b0c)
61b144  bl    0x624188          ; getFontByName
61b14e  bl    0x64a5f8          ; text_font   (prop 87)
61b152  movw  r2, #0x27d1       ; LV_SIZE_CONTENT
61b15a  bl    0x6440c4          ; lv_obj_set_size
61b15e  movs  r3, #0x0b         ; y      = 11
61b160  movs  r2, #0x00         ; x      = 0
61b162  movs  r1, #0x02         ; align  = LV_ALIGN_TOP_MID
61b166  bl    0x644338          ; lv_obj_align
...
61b188  mvn   r3, #8            ; y = -9   (battery row uses MVN, not MOVS)
61b18e  movs  r1, #0x05         ; align = LV_ALIGN_BOTTOM_MID
61b1a0  movs  r2, #0x18         ; h = 24
61b1a2  movs  r1, #0x0c         ; w = 12
61b1a6  bl    0x6440c4          ; lv_obj_set_size
```

| file off | bytes | meaning |
|---|---|---|
| `0x61b15e` | `0b 23` | clock **y** = 11 |
| `0x61b160` | `00 22` | clock **x** = 0 |
| `0x61b162` | `02 21` | clock **align** = TOP_MID |
| `0x61b1a0` | `18 22` | battery element **height** = 24 |
| `0x61b1a2` | `0c 21` | battery element **width** = 12 |

Move the clock to y = 40: write `0x28` at `0x61b15e`. One byte, no length change, instruction
count and timing unchanged. Cross-check that the reading is right: 12×24 is exactly the size
of `launcher_standby_battery_charge_lightning`.

**Correction to `analysis/layout/LAYOUT.md`:** negative offsets are *not* MOVS — `0x61b188`
uses `mvn r3,#8` (= −9). A tool that only rewrites `MOVS` immediates cannot express a
negative coordinate and must not silently truncate one.

Helper offsets: `lv_obj_set_size` = `0x6440c4`, `lv_obj_align` = `0x644338`,
`getFontByName` = `0x624188`.

**Locating this in any build** (do not hardcode): find `customTimeAndBatteryWidget`; its pool
reference sits in the ctor; in that ctor find the single `LDR` of the `FONT_DUMMY_20` pool
word; the `movw #0x27d1` follows, then three immediates, then the `BL` to `lv_obj_align`.

### 6.3 The standby widget grid — **CONFIG**

Standby widgets are not individually positioned; membership and order come over BLE:

```json
{"action":"set_standby_widget_lists","data":{"widgets":["time","weekday","weather_1x2"]}}
```

Strings in 11.53: `get_standby_widget_lists` `0x1a640c`, `set_standby_widget_lists` `0x1a6430`,
`handleStandbyWidgetsChange` `0x1a644c`, `changeStandbyWidgetSeq` `0x1ab408`. Widget names
around `0x1aae5c`: `weather_1x2`, `aiBall` (+ `time`, `weather_1x1`, `steps`, `weekday`).
Flex machinery: `createFlexRootView` `0x1a8550`, `createFlexContent` `0x1a8514`,
`restoreFlexLayout` `0x1a8958`, `onFlexScrollBegCb` `0x178f64`.

**Correction to `analysis/layout/LAYOUT.md`:** `adjustFlexPadColumn` **does not exist in
11.53** — searched the whole image, zero hits, and the only `*Flex*` symbols are the four
above. Cite `restoreFlexLayout` / `createFlexContent` instead.

### 6.4 Deciding which mechanism owns an element

1. Is it a glyph inside a text run? → §6.1, DATA.
2. Is it a standby widget with a name in the `time / weather_1x1 / weather_1x2 / steps /
   weekday / aiBall` set? → §6.3, CONFIG. Try this first; it is free and reversible.
3. Otherwise it is an LVGL object built by a view constructor → §6.2, CODE immediate. Find the
   ctor by its `__FILE__`/debug string, then the `movw #0x27d1` landmark.

---

## 7. What I could not establish

* **Panel resolution as a decoded immediate in 11.53.** String and literal-pool evidence only
  (§2); no `movw #640`/`#480` exists anywhere in `.text`.
* **39 of the 45 style property ids** are LVGL-v8-consistent but not individually tied to a
  call site in this build.
* **LVGL patch version.** No banner string; "v8" is inferred from ABI.
* **The align enum beyond 2 and 5.** Only `LV_ALIGN_TOP_MID`(2) and `BOTTOM_MID`(5) are
  observed at real call sites here. The rest of the standard order is unverified.
* **Where the font littlefs volume sits on flash** — leaf-1.7's territory.

## 8. Safety

No patch proposed in this document writes inside the HiFi4 DSP sub-image
(`0x04E9B4`–`0x143F14`) or the sensor_hub sub-image (`0x134070`–`0x14A7A4`). Every offset
cited as a patch target is ≥ `0x17796c` (data pool) or ≥ `0x61b138` (`.text`).
