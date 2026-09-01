# Audio / display — Halliday ATS3089 (official OTA)

Leaf **1.7** ownership: `Reverse/firmware/Halliday/analysis/full_rev/audio_display/**`.

This note maps the **Halliday smart-glasses display and audio stack** on the Actions Semi
**ATS3089** Zephyr `bt_watch` image: Actions `libdisplay` / `ui_service`, LVGL virtual
display, FreeType + bitmap font caches, Zephyr ACTS audio HAL, framework `audio_track` /
`audio_record`, and classic **A2DP** playback bridged through `bt_manager`.

**Recovery honesty:** Unlike Star Air `full_rev/audio_smartpa` (AW883xx SmartPA with Ghidra
Thumb VAs), Halliday has **no `functions.csv` export** yet
(`Reverse/firmware/Halliday/export/functions/app/functions.csv` absent). Everything below is
recovered from `Reverse/firmware/Halliday/export/official/strings/` — primarily
`categorized/audio_display.txt` and targeted greps of `app_ascii.txt`. Symbol names are
**log-string / WEST_TOPDIR anchors**, not confirmed function entry points unless noted.

Symbol manifest: [`manifest.json`](manifest.json).

---

## 1. Image and addressing

| Item | Value |
|---|---|
| Binary | `Reverse/firmware/Halliday/export/official/layer3/app.bin` |
| Source OTA | `Reverse/firmware/Halliday/HallidayOfficialOTA.bin` |
| Size | 1,662,592 bytes |
| Platform | `ats3089_dev_watch`, build `1.00_2601211113` |
| XIP base | **`0x10000000`** (export `load_hint`; entry PC cluster `0x10068xxx`) |
| String offsets | File offsets in export; runtime VA = **`0x10000000 + offset`** |
| Primary strings | `export/official/strings/categorized/audio_display.txt` (362 hits) |
| OTA version tags | `version_code=0x10000` / `version_res=0x10000` in container metadata |

Re-run export: `python3 Reverse/firmware/Halliday/tools/export_halliday.py`.

**VA anchor rule:** Tables show export file offset (short form). Add **`0x10000000`** for
runtime rodata VA (e.g. `view_manager_init` @ `0x146c2c` → VA **`0x10146c2c`**).

---

## 2. Source paths (from `audio_display.txt` / `source_files.txt`)

| Path token | Role |
|---|---|
| `framework/display/libdisplay/ui_service/view_manager.c` | View lifecycle, focus, repaint |
| `framework/display/libdisplay/ui_service/input_dispatcher.c` | Touch/key routing into views |
| `framework/display/ui_service/view_cache.c` | View cache / stack restore |
| `framework/display/ui_service/msgbox_cache_lvgl.c` | Modal / msgbox LVGL layer |
| `framework/display/lvgl/lvgl_virtual_display.c` | LVGL flush bridge to composer |
| `zephyr/drivers/display/panel/panel_device.c` | LCD panel device |
| `zephyr/framework/display/composer/display_composer.c` | Vsync, post, PM notify |
| `zephyr/framework/audio/audioout_hal.c` | Audio-out HAL wrapper |
| `zephyr/framework/audio/audioin_hal.c` | Audio-in (ADC) HAL wrapper |
| `framework/audio/audio_track.c` | Playback track API |
| `framework/bluetooth/bt_stack/libbt_stack/a2dp.c` | Zephyr-style A2DP stack TU |

Named APIs in the string table (not Thumb-symbolized): `view_manager_init`, `freetype_font_init`,
`lvgl_freetype_font_init`, `audio_track_create`, `acts_audio_out_write`, `btsrv_a2dp_init`,
`_bt_manager_a2dp_callback`, `prompter_display_page`, `audio_memo_start`.

---

## 3. Display architecture (libdisplay → LVGL → panel)

```
BLE / keys / touch
       │
       ▼
input_dispatcher.c @ 0x146cc8
       │
       ▼
view_manager.c @ 0x146648          ui_service @ 0x1464a0
  view_manager_init @ 0x146c2c     _ui_service_start @ 0x18d44a
  view_create / view_input         _ui_service_stop  @ 0x18d45c
  view %u repaint display @ 0x146994
       │
       ├── view_cache.c @ 0x18fb65
       └── msgbox_cache_lvgl.c @ 0x18fd82
       │
       ▼
lvgl_virtual_display.c @ 0x18e1e2
  lvgl_virtual_display_create @ 0x18e2f1
  _lvgl_flush_cb (implied by TU name)
       │
       ▼
display_composer.c @ 0x16521a
  display_composer_init @ 0x1654be
  display_composer_post @ 0x16555f
       │
       ▼
panel_device.c @ 0x16270b  +  lcdc_leopard.c @ 0x167ea5
```

**libdisplay version banner:** `libdisplay: version %s, release time: %s:%s` @ `0x146458`.

**Display PM / brightness:** `display set_brightness %u` @ `0x16240d`, `display blanking on/off`
@ `0x1624c9` / `0x16247d`, `screen_display_turn_off` @ `0x159ce4`. Launcher early-suspend
path calls `launcher_suspend_player` @ `0x14d3cd` before display blanking — audio and display
power management are coupled at the app layer.

**Halliday text surfaces:** Prompter (`prompter_display_page` @ `0x155c1e`) and Audio Memo
(`audio_memo_view` @ `0x1575cd`) are xs_app views that depend on the font + layout stack below.

---

## 4. Font stack (FreeType + bitmap + LVGL)

Halliday ships **three font backends** on SPI NAND:

| Asset | Path (rodata) | Offset |
|---|---|---|
| Sans 28 px bitmap | `/NAND:C/sans28.font` | `0x14b3b1` |
| Sans 32 px bitmap | `/NAND:C/sans32.font` | `0x14b3c5` |
| Emoji 28 px bitmap | `/NAND:C/emoji28.font` | `0x14b3d9` |
| FreeType TTF | `/NAND:C/xs_font.ttf` | `0x14ed27` |

### 4.1 FreeType cache (libdisplay)

Init chain (string-proven):

```
FT_Init_FreeType          @ 0x1470f0 (error path)
freetype_font_init        @ 0x1475a0
_freetype_cache_init      @ 0x1475cc
freetype_font_open        @ 0x147654
freetype_font_get_bitmap  @ 0x147668
freetype_font_get_glyph_dsc @ 0x1476d4
```

LVGL glue: `lvgl_freetype_font_init` @ `0x18e199`, `lvgl_freetype_font_open` @ `0x18e1b1`,
`lvgl_freetype_font_close` @ `0x18e1c9`, callback `freetype_font_get_glyph_bitmap_cb` @
`0x18e177`.

App entry: `ui_font_open` @ `0x14ed58`; miss logs `error:font size %d not found` @ `0x14ed3b`.

### 4.2 Bitmap + emoji cache

Parallel path for pre-baked `.font` blobs:

- `bitmap_font_init` @ `0x18d88a` / `0x18d943`
- `bitmap_font_cache_init` @ `0x18d481`
- `bitmap_font_get_emoji_bitmap` @ `0x18d8ec`
- `bitmap_font_get_emoji_glyph_dsc` @ `0x18d923`

### 4.3 Prompter font/layout coupling

Prompter is the richest **display + font** integration in xs_app:

| API / log | Offset | Notes |
|---|---|---|
| `prompter_get_font_params` | `0x156764` | Per-size layout metrics |
| `prompter_config_update_font` | `0x156748` | Settings → config |
| `prompter_content_smart_reload_on_font_change` | `0x1567a0` | Deferred reload |
| `prompter_view_reload_content_after_font_change` | `0x155ca9` | View-level refresh |
| `Forced LVGL refresh after font change` | `0x155ad7` | Explicit LVGL invalidate |

Logs prove dynamic layout: `Using new layout system: font=%d, lines=%d, chars_per_line=%d`
@ `0x1548d9`; `Calculated max_display_lines` @ `0x1559e4`.

---

## 5. Audio architecture (HAL → track/record → policy)

Unlike Star Air's AW883xx SmartPA cluster, Halliday routes through **Actions Zephyr audio
drivers** and the framework **`audio_track` / `audio_record`** layer. No `aw883xx_*` or
`smartpa_*` symbols appear in the export.

```
App / launcher / xs_app views
  AUDIO_STREAM_MUSIC @ 0x159697
  AUDIO_STREAM_LOCAL_MUSIC @ 0x1596ab
        │
        ▼
audio_track.c @ 0x17e3cc
  audio_track_create @ 0x17e65f
  audio_track_start / write / stop
  audio_system_register_track @ 0x17e2cf
        │
        ▼
acts_audio_out_* (audioout_hal.c @ 0x164786)
  acts_audio_out_open  @ 0x16a21e
  acts_audio_out_write @ 0x16a28b
  acts_audio_out_start @ 0x16a276
  audio_out_enable_i2stx @ 0x16a1bd
        │
        ▼
SoC audio-out (I2S TX, DMA, AUDIOPLL0)
  ACTS-AUDIO OUT initialized @ 0x169e87
  CMUA_AUDIOPLL0_CTL @ 0x16a983
```

**Capture path (Audio Memo):**

```
audio_memo_start / stop / pause / mark  @ 0x15b7a1…0x15b805
audio_record_create @ 0x17e14b
acts_audio_in_* (audioin_hal.c @ 0x164698)
  acts_audio_in_open @ 0x16a688
  audio_in_enable_adc @ 0x16a62d
```

Global events: `gl_audio_memo_recording_started` @ `0x15e24c` through
`gl_audio_memo_recording_interrupted` @ `0x15e2c5`.

**Factory / QA hooks:** `audio_manager_asqt_start` / `_stop` @ `0x14bfbb` / `0x14bfd4`;
`audio_data_play_test_start` @ `0x14bc3b`.

---

## 6. A2DP playback path (classic BT → audio_track)

Phone music enters through the **Actions BT service** and **`bt_manager`** A2DP shim, not a
separate `xjxr_audio_a2dp.c` TU (Star Air pattern).

```
Phone (A2DP source)
       │
       ▼
bt_stack/libbt_stack/a2dp.c @ 0x18b9c3
  bt_a2dp @ 0x18ba43
  btsrv_a2dp_init @ 0x18a72b
  btsrv_a2dp_process @ 0x18a781
  _btsrv_a2dp_media_handler_cb @ 0x18a68b
       │
       ▼
bt_manager
  _bt_manager_a2dp_callback @ 0x182b40
  bt_manager_a2dp_get_codecid @ 0x182b5a
  bt_manager_a2dp_get_sample_rate @ 0x182b76
       │
       ▼
Launcher integration
  check a2dp state @ 0x14b427
  a2dp_enable @ 0x1583a4
  BT A2DP CONNECTION @ 0x158dd4
  bt_connection_event_handle a2dp is enable %d @ 0x158de7
       │
       ▼
audio_track (stream_type AUDIO_STREAM_MUSIC)
  tws_observer %p audio_track %p @ 0x17deb0
```

**Media state strings:** `A2DP_MEDIA_STATE_START` @ `0x18d337`, `A2dp start` / `A2dp suspend`
@ `0x18d37c` / `0x18d362`, codec log `a2dp:fl%d,fn%d,bp%d,mtu%d` @ `0x18d3f3`.

**PM edge:** `launcher_suspend_player` @ `0x14d3cd` pauses local/A2DP playback when the
launcher early-suspends — display blanking and audio duck/stop share the suspend graph.

---

## 7. Key string anchors (VA = 0x10000000 + offset)

| Semantic name | File off | VA | Evidence |
|---|---|---|---|
| `libdisplay` version | `0x146458` | `0x10146458` | Framework banner |
| `view_manager.c` | `0x146648` | `0x10146648` | WEST_TOPDIR path |
| `view_manager_init` | `0x146c2c` | `0x10146c2c` | Init log |
| `ui_service` | `0x1464a0` | `0x101464a0` | Subsystem tag |
| `freetype_font_init` | `0x1475a0` | `0x101475a0` | FreeType bring-up |
| `lvgl_freetype_font_init` | `0x18e199` | `0x1018e199` | LVGL font bridge |
| `display_composer_init` | `0x1654be` | `0x101654be` | Composer start |
| `audio_track_create` | `0x17e65f` | `0x1017e65f` | Playback track alloc |
| `acts_audio_out_write` | `0x16a28b` | `0x1016a28b` | HAL write path |
| `_bt_manager_a2dp_callback` | `0x182b40` | `0x10182b40` | A2DP → manager |
| `btsrv_a2dp_init` | `0x18a72b` | `0x1018a72b` | BT service A2DP |
| `prompter_display_page` | `0x155c1e` | `0x10155c1e` | Text HUD view |
| `audio_memo_start` | `0x15b7a1` | `0x1015b7a1` | Mic capture view |

---

## 8. Comparison to Star Air `audio_smartpa` leaf

| Aspect | Star Air (BES M55) | Halliday (ATS3089) |
|---|---|---|
| Amplifier | AW883xx SmartPA, PID `0x2049`, I2C regs | **Not present** — ACTS SoC DAC / I2S out |
| Decomp VAs | Ghidra Thumb cluster `0x2C4A8020`… | **String anchors only** (`0x10000000` base) |
| A2DP TU | `xjxr_audio_a2dp.c` | `a2dp.c` + `btsrv_a2dp_*` + `_bt_manager_a2dp_callback` |
| Display | Separate UI leaf | **libdisplay** + LVGL virtual display + composer |
| Fonts | (not in audio_smartpa leaf) | FreeType + bitmap `.font` on `/NAND:C/` |

Next recovery step: import `app.bin` @ **`0x10000000`** into Ghidra, xref from the anchors
above, and populate `export/functions/app/functions.csv` — then promote string labels to Thumb
entry VAs the way Star Air's SmartPA leaf does.
