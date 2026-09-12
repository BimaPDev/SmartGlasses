# Field notes — MYVU 1.0.11.53

Working reference so the same mistakes are not made twice. Everything here is either
**VERIFIED ON HARDWARE**, **verified by byte evidence**, or explicitly marked as an open
question. If a claim is not marked, assume it is byte-verified but never ran on a device.

**Every offset is build-specific to `1.0.11.53.20241126_Air_intl_FR`.** They are
meaningless against 12.83 or 7.83. Confirm the build before quoting any of them:

```sh
strings platform_tester.bin | grep '^Flyme XR'
```

---

## 0. Read this before touching firmware

Seven traps, each of which cost real time or a device.

| Trap | What happens | Avoid by |
|---|---|---|
| Using base `0x2C000000` | Every label off by `0x10000`; offsets look plausible, point at nothing | `VA = file + 0x2C010000` |
| Verifying the patch, not the outcome | Byte gates pass, screen breaks | Ask "what would prove this WORKS", not "did I write the byte I meant" |
| Trusting your own decoder | It agreed with me 3× while the panel disagreed | Resolve the way the **firmware** does; check against a face/build known to render |
| A gate that cannot fail | Decode→re-encode is the identity function. Passed 60/60, proved nothing | Every absence claim needs a positive control that fires |
| Changing a dimension like it's a colour | Fonts/opacity are self-contained; **sizes have dependents** | Find every reader of the value first |
| Version-mixing offsets | 12.83 constants applied to an 11.53 image | Pin the build string in every tool |
| `head -N` / naive substring greps | Three "findings" were tooling artefacts | Count first, then look |

---

## 1. Address model

Three regions, not one flat base.

| File range | Runtime | Contents |
|---|---|---|
| `0x000000`–`0x0283F4` | XIP `0x2C010000`+ | early boot |
| `0x0283F4`–`0x469954` | **PSRAM `0x3C000000`** | rodata, strings, assets, sub-images |
| `0x469954`–EOF | XIP `0x2C479954`+ | bulk of `.text` |

```
code:  VA   = file + 0x2C010000      NOT 0x2C000000
data:  file = VA   - 0x3BFD7CB0      per-build; 12.83 is 0x3BFD7C0C, 7.83 is 0x3BFD7D04
```

Independently confirmed by a real BusFault dump off the device: PC `0x2C67F10C`, LR
`0x2C67EDC9` and every backtrace entry decode into valid `.text` under this model.

Image length `7,042,632` bytes (`0x6B7648`).

### Forbidden regions — never write here

```
HiFi4 DSP    0x04E9B4 - 0x143F14
sensor_hub   0x134070 - 0x14A7A4
```

**OPEN CONTRADICTION:** these overlap by 65,188 bytes, which is impossible. The DSP end
is the suspect — `0x143ef8` holds `best1600_dsp` and `0x143f13` holds
`../../platform/drivers/hifi4/dsp_loader.c`, both M55 rodata sitting *inside* the claimed
DSP range, while actual DSP content (`kws … sample_rate=`) is at `0x0ad987`. Until
resolved, **treat the union `[0x04E9B4, 0x14A7A4)` as forbidden.** Correct either way.

### Free space

Exactly **one** usable zero run outside the forbidden union:

```
0x3EC950 - 0x3ED22E    2,270 bytes
```

Everything larger is inside the sub-images. This constraint, not taste, sets how big an
injected font can be.

---

## 2. Patches confirmed running on hardware

All four are **operand-only**: an instruction already executing loads a different number.
No instruction added, removed or resized, so nothing downstream shifts. This is the
low-risk patch class — stay in it.

| Offset | Stock bytes | Patched | Meaning |
|---|---|---|---|
| `0x61b7f8` | `5c 21` | `00 21` | `border_opa 92 → 0` — tile rings vanish |
| `0x61b79e` | `48 22` | `be 22` | `movs r2,#72 → #190` — tile size |
| `0x61b162` | `02 21` | `09 21` | align `TOP_MID(2) → CENTER(9)` |
| `0x61b15e` | `0b 23` | `00 23` | clock y offset `11 → 0` |

Plus a regenerated 46 px clock face in the `0x3EC950` hole, and the clock's `FONT_*` name
literal at `0x61b2c4` repointed `FONT_DUMMY_20 → FONT_EN_32_NORMAL`.

Result: 46 px clock (3.3× stock's 14 px), correct colon, no rings, centred in a 190 px tile.

---

## 3. LVGL fonts — the expensive lessons

### Face and object addresses

```
face structs (scan offset; real struct begins at +12):
  0x1ad8e0   27px  bpp4   13 codepoints  "- . 0-9 °"     temperature font, NO colon
  0x1ae610   17px  bpp1   39,554 cps     full text
  0x211b9c   24px  bpp4   12 codepoints  ". / 0-9"       date font, NO colon  <- the donor
  0x212b18   14px  bpp4   39,554 cps     full text       <- the stock clock
  0x30eb8c   12px  bpp1   39,554 cps     full text

lv_font_t objects:  0x491ccc 0x491cf4 0x491d1c 0x491d94 0x491e0c
  fields: +8 line_height (i16), +10 base_line (i16), +16 dsc*, +20 fallback*
```

The two largest faces are **numeric subsets with no colon**. You cannot get a big clock by
repointing to them — that was the first dead end.

### Glyph descriptor: 16 bytes, NOT LVGL's packed 8

```c
struct { u32 bitmap_index; u32 adv_w; u16 box_w, box_h; i16 ofs_x, ofs_y; }
```

`adv_w` is in 1/16 px — divide by 16. Verified against a device screenshot: predicted
55.2 px for `08:32`, measured 55 px.

### Bitmaps are a CONTINUOUS bitstream

MSB first, **no row padding**, `bit_index = row * box_w + col`. A 10×12 1-bpp glyph is
`ceil(120/8) = 15` bytes — not 24. The "these are compressed" belief came from assuming
byte-aligned rows.

### ⚠ The character map is NOT a dense range

**This is the one that cost four builds.** The cmap carries a `glyph_id_ofs_list` that
remaps codepoints. Reading only `range_start` / `glyph_id_start` gives the wrong glyph.

```
cmap struct (20 B):
  +0  u32 range_start      +4  u16 range_length    +6  u16 glyph_id_start
  +8  u32 unicode_list    +12  u32 glyph_id_ofs_list  +16 u16 list_length
 +18  u8  type            +19  u8  pad

donor face 0x211b9c: cmap @0x211b94, ofs_list @0x212410

  ofs_list = [0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1]
  char        .  /  0  1  2  3  4  5  6  7  8  9  :
  gid         1  1  2  3  4  5  6  7  8  9 10 11  2
```

So: **`.` and `/` share gid 1. `0` is gid 2, not 3. `:` collides with `0` at gid 2.**

Resolve like the firmware:

```python
gid = glyph_id_start + ofs_list[codepoint - range_start]
```

Ignoring this rendered `06:15` as `/6/15` — and the two wrong characters were identical
*because they resolved to the same gid*. The descriptors were verified correct several
times; they were correct for a mapping the firmware does not use.

**To add a glyph** (e.g. `:`), all three must change:
1. `range_length` 12 → 13
2. `list_length` 12 → 13  ← forgetting this loses the glyph entirely
3. `ofs_list[12]` → a free gid

### Alignment

All three tables must be **4-byte aligned**. A `glyph_dsc` at `0x3ed0cb` (align 3)
rendered every glyph sheared 1 px per row. Every stock face is aligned.

### Do NOT do these to a face

| Change | Result |
|---|---|
| `kern_dsc = NULL` | **device does not boot** — null deref on first text render |
| Relocate the cmap to a new pointer | **device does not boot** |
| Edit `range_length` in place | fine — stock does it, boots |

---

## 4. LVGL styles and layout

### Style setters — 12-byte thunks at `0x64a43c`–`0x64a64c`

Each loads a property id and tail-calls `lv_obj_set_local_style_prop` (`0x648404`):

```
mov ip,r1 / mov r3,r2 / movs r1,#PROP / mov r2,ip / b.w 0x658404
```

| Property | id | thunk |
|---|---|---|
| `radius` | 11 | `0x64a628` |
| `border_color` | 48 | `0x64a544` |
| `border_opa` | 49 | `0x64a550` |
| `border_width` | 50 | `0x64a55c` |
| `text_color` | **85** | `0x64a5e0` |
| `text_font` | **87** | `0x64a5f8` |

**`text_color` is 85 and `text_font` is 87** — not 79/80. Use these two as a control: if a
decode doesn't recover 85/87, the method is broken and nothing else it reports counts.

### Positioning

`LV_SIZE_CONTENT` = `0x27D1`, loaded with `movw r2,#0x27d1`. Find it and the align call is
a few instructions later. Align args are one-byte `MOVS Rd,#imm8`:

```
LV_ALIGN:  1 TOP_LEFT  2 TOP_MID  3 TOP_RIGHT  4 BOTTOM_LEFT  5 BOTTOM_MID
           6 BOTTOM_RIGHT  7 LEFT_MID  8 RIGHT_MID  9 CENTER
```

---

## 5. The standby row

```
0x61ca1c   row builder                    <- 13 callers
0x61b950   allocates 0x5c, dispatches     <- 6 callers, all in the row builder
0x61b784   sizes + styles the tile, THEN switches on widget type
  0x61b79e   movs r2,#72        tile size; mov r1,r2 -> tiles are SQUARE
  0x61b7ac   strh [r4,#0x40]    cached; the radius reads it back
  0x61b7c8   bl lv_obj_set_size OVERRIDES the label's LV_SIZE_CONTENT
  0x61b7dc   radius = height/2  <- why LV_RADIUS_CIRCLE (0x7FFF) appears NOWHERE
  0x61b7e8   border_color 0xFF00FF00
  0x61b7f2   border_width 2
  0x61b7fc   border_opa 92
0x61b110   customTimeAndBatteryWidget (clock ctor), reached from 0x61b888
  0x61b142   ldr r0, ='FONT_DUMMY_20'
  0x61b152   movw r2,#0x27d1 ; bl set_size
  0x61b15e   movs r3,#11 (y) / r2,#0 (x) / r1,#2 (align) ; bl lv_obj_align
  0x61b18e   battery element, align BOTTOM_MID
```

**Geometry facts:**
- Tile is a hard **72×72**; width and height share `r2`, so tiles cannot be non-square
  without CODE.
- The row's usable height is **~92 px** and does **not** grow with the tile. Derived from a
  screenshot: a top-aligned 48 px clock in a 190 px tile showed exactly 10 px of ink, and
  `rowH/2 − 36 = 10 → rowH = 92`.
- A tile larger than the row is **centred** in it, so its top sits above the visible area.
  A `TOP_MID` child then lands off-screen while a `CENTER` child is fine. That is why the
  aiBall rendered correctly beside a clipped clock — and that mismatch is what localised
  the fault.
- Row width budget: `n × tile + (n−1) × 10 ≤ 620`. At tile 190, three widgets fit (590 px);
  four do not (790 px).

### The row is a FLEX container — configured in StandByView, not in the row machinery

Nothing in `0x61ca1c` / `0x61b950` / `0x61b784` positions a tile because it does not have
to: the parent's flex layout computes every x at layout time. Setup is at **`0x6167bc`**
(one caller, `0x616fa0`), and every knob is a single-byte `MOVS`:

```
0x6167cc  movs r2,#0x50    row height = 80
0x6167d2  movw r1,#0x27d1  row width  = LV_SIZE_CONTENT
0x6167e0  movs r1,#0x10    radius 16
0x6167ea  movs r1,#4       flex_flow   = ROW_WRAP        <- the arrangement
0x6167f0  movs r3,#2       cross/track = CENTER
0x6167f6  movs r1,#0       main_place  = START
0x616804  movs r1,#0x0a    pad_column (gap) = 10
0x616810  movs r1,#2       pad_left
0x61681c  movs r1,#2       pad_right
```

Row object is stored at `StandByView+0x94` and handed to `StandByWidgetManager`
(`+0x98`) at `0x616844`; the manager keeps it at `manager+0`, which is the `[r7]` that
`createWidget` reads as the parent.

`LV_FLEX_FLOW`: `0` ROW · `1` COLUMN · `4` ROW_WRAP · `5` COLUMN_WRAP · `8`/`9` reversed.
`LV_FLEX_ALIGN`: `0` START · `1` END · `2` CENTER · `3` SPACE_EVENLY · `4` SPACE_AROUND ·
`5` SPACE_BETWEEN.

> **Trap:** `lv_obj_set_style_layout` (`0x64a640`) shows **zero** launcher callers, which
> once led to "the row is not a flex layout". Wrong — the launcher reaches it *through*
> `lv_obj_set_flex_flow` (`0x669b14`), which tail-calls it. Searching for callers of a
> low-level setter misses everything that goes via the API wrapping it.

### Per-widget positioning is NOT reachable without CODE

Two independent reasons, either sufficient:

1. **No per-widget coordinate exists to patch.** `StandByWidgetManager` issues zero
   align / size / style calls. Positive control: the same scan finds **42** such calls in
   the adjacent `StandByWidget.cpp`, so the absence is real, not a dead decoder.
2. **Flex overwrites child coordinates on every layout pass.** Escaping it needs
   `LV_OBJ_FLAG_IGNORE_LAYOUT` per child *plus* an `lv_obj_align` per child — both new
   calls, with no spare BL in the manager to host them.

So a Halliday-style layout (big clock centred, four small elements in four corners) is
**two-axis**, and this is **one flex line**. Corners need CODE.

### Widget ids for `set_standby_widget_lists`

```
1 time   2 weather_1x1   3 weather_1x2   4 steps   5 weekday   6 aiBall
```

`time` and `aiBall` are normally bracketed automatically. To send a bare `["time"]` you
must bypass the helper that adds them.

---

## 6. Registries

```
Page registry   0x176b90 - 0x176ce0   THIRTEEN Pages/X -> delegate pairs
```

`Pages/Launcher Assistant Translation Navigation Phone AirMusic Settings SmartLife
StarryNetApp Ring Ota MMIPage Prompt`

There is **no `Pages/Todo`**. The image holds 19 distinct `Pages/*` strings but only these
13 are registry entries — count inside the pool, not image-wide. A new app needs a 14th
entry **plus** a delegate class, i.e. CODE.

```
Domain namespaces  0x192144   freechat INNER_STKS application VSP_ERROR alarm todo systemsetting
Enum after registry 0x176cd8  SETTING NAVIGATE WECHAT ALARM SCHEDULE TODO
i18n labels        Translator 0x41eb88 (cap 10) · Listening trans 0x431e48 (15) · Transcribe 0x41b81c (10)
Dock icons         launcher_dock_{navi,trans,music,set,prompt,ring,weather,indicator}
Todo icons         assistant_todo_domian_done / _undone   (vendor's typo: "domian")
```

Card labels live in the **i18n pool, not the registry**, so patching them cannot break
page lookup.

---

## 7. Assistant domains

`DomainRuntime` accepts domain requests on **two** paths, and neither is `code:102`:

```
[%s] NLU_RESULT->data parse succeed. Domain Namespace %s
[%s] CONNECT_DATA->connectData parse succeed. Domain Namespace %s
```

Four probe runs sent `code:102` (VUI) and got silence. The messages never reached the
matcher, so that silence said nothing about the domain. **Absence of a reply was evidence
about the channel.**

A complete worked envelope sits at **`0x192664`**:

```json
{"header":{"namespace":"INNER_STKS","specialCmdInChatGptScene":false},
 "payload":{"data":{"intent":"Intent_Global_Confirm"},"text":"确定"}}
```

Note `payload.data.intent` — a field the early probes never sent. Field pools:
`clientinfo/recordresult/nluResult/requestsource/intentGroup` at `0x191db8`;
`connectData/connectType/guideWord` at `0x19161c`.

**`code:102` without a `code:2` preamble CRASHES the device** (BusFault in `lvgl_ui`).
`PROTOCOL.md:313` says why: `code:2` must enable `isChatGptCardDisplayEnable` and
`isContinuousDialogueEnable` or the LLM card scene is never configured. Drive VUI through
`AiSession`, which configures first.

**Todo / Schedule / multi-time Weather domains all exist on-device** with full intents and
icons. Nothing has opened one yet. Still open.

---

## 8. OTA

- **No signature gate.** MD5 + A/B only. Positive control: a SHA-256 K-table at `0x33acc`
  proves crypto primitives are detectable, so their absence from the OTA path is meaningful.
- **A/B rollback WORKS — VERIFIED ON HARDWARE.** An image that failed to boot was caught
  and the device fell back to the other bank unaided. Earlier docs inferred no rollback
  from the v5/v6 bricks; that inference was wrong. Failed flashes are cheap.
- **No version gate on this path.** `AirOta.files(fromZip:)` only unpacks; downgrades flash
  fine.
- Package is two files: `best1600_watch_bth.bin` + `platform_tester.bin`. Keep the BTH
  byte-identical unless you mean to change it.
- USB-C is charge-only — everything goes over BLE, and there is no cable recovery.

---

## 9. Retracted / corrected beliefs

| Was believed | Actually |
|---|---|
| Code base `0x2C000000` | `0x2C010000` |
| Domains open with `code:102` | `NLU_RESULT` / `CONNECT_DATA` |
| `STKS` = stocks | Voice-command shortcuts. **No stock feature exists** (negative control: zero hits for ticker/NASDAQ/portfolio/equity/NYSE) |
| Todo is an app | It's an Assistant *domain*; no `Pages/Todo` |
| Page registry has 12 entries | 13 — `Pages/Prompt` was missed |
| 1-bpp CJK faces are compressed | Plain. All three are ordinary DATA patch targets |
| `LV_STYLE_TEXT_COLOR` = 79 | 85. `TEXT_FONT` = 87 |
| `LV_RADIUS_CIRCLE` must be somewhere | Absent. Radius is computed as `height/2` |
| Hint NV block is 110–122 | 111–122 (twelve keys); 110 is unreachable |
| Wake-word model is in firmware | `kws_model.nn` (DFSMN, float32, 1.4 MB) in the Android app |
| Translation page translates | The **phone** translates; the glasses render pushed text |
| A failed flash bricks the device | A/B rollback recovers it |
| No XIP `.text` cave, so code is blocked | Still true for 11.53 — but the append route was never tested |

---

## 10. Method rules

Each of these was learned by losing a build to it.

1. **A gate that cannot fail proves nothing.** Decode→re-encode is the identity function.
   It passed 60/60 glyphs. Every absence claim needs a positive control showing the search
   *can* find the thing.
2. **Verify the outcome, not the patch.** "I changed the byte I meant to" is not "the
   screen works". Three builds passed every byte gate and broke the display.
3. **Your own renderer is not evidence.** Ours agreed three times while the panel
   disagreed. Resolve the way the *firmware* does.
4. **Use a controlled pair.** One image that boots and one that doesn't, differing in one
   thing, located a crash in minutes that static analysis had missed for hours.
5. **Extract the pixels.** Match the on-screen bitmap against the generated glyph. "Looks
   like a slash" is unfalsifiable; a bitmap identity match is not.
6. **Validate the decoder before reporting an absence.** Control: `movw r2,#0x27d1` at
   `0x61b152`; BL edge `0x61b888 → 0x61b110`.
7. **Declare every intentional byte.** Gates blocked two builds over undeclared bytes that
   were deliberate. Declare them by *derivation* (e.g. from the cmap pointer), never
   hardcoded, so a stray byte elsewhere in the same struct still fails.
8. **Dimensions have dependents; colours do not.** Before changing a size, find every
   reader of it.

---

## 11. Still open

- **Opening a Todo/Schedule/Weather domain.** Probe rebuilt on `code:103` business-data
  with a liveness control; never run.
- **The DSP / sensor_hub bounds contradiction.** Use the union.
- **Place-triggered lists and the full-panel text HUD** — built, never tested on hardware.
  Neither needs firmware.
- **The `.text` append route** for code injection — 418 KB of bank headroom, no length
  field to update, never attempted.

---

## Tooling

```sh
# the maps, with runnable oracles
Reverse/firmware/analysis/map/INDEX.md
for f in display launcher assistant protocol audio input storage apps; do
  node Reverse/firmware/analysis/map/verify-$f.mjs || echo "FAILED: $f"
done

# patchers — all refuse to run against the wrong build
Tools/fwbuilder/make_no_rings.py      border_opa 92 -> 0
Tools/fwbuilder/make_big_tile.py      tile size, refuses > 255 or a row that overflows
Tools/fwbuilder/make_center_clock.py  align TOP_MID -> CENTER
Tools/fwbuilder/make_clock_font.py    regenerate the clock face, sized to the 2,270 B hole
Tools/fwbuilder/verify-hud4.mjs       30 gates, primary control is an image that BOOTS

# previews, before flashing anything
Tools/fwbuilder/render_hud.py         the panel as the firmware would draw it
Tools/fwbuilder/render_standby.py     the widget row at any tile size
```
