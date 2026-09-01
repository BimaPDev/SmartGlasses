# Halliday Launcher UI — LVGL, bt_watch, xs_app views

Firmware: **HallidayOfficialOTA** `app.bin` (Actions ATS3089 / Zephyr, `build_ver=1.00_2601211113`).
Leaf: **1.4** · OWNS: `Reverse/firmware/Halliday/analysis/full_rev/ui_launcher/**`.

Primary evidence: `Reverse/firmware/Halliday/export/official/strings/app_ascii.txt`,
`strings/categorized/{lvgl_ui,source_files,halliday}.txt`, `manifest.json` (`load_hint=0x10000000`).

VA rule: string anchors in export use **file offset** in `app.bin`; absolute VA =
`0x10000000 + off`. Tables below show **export offset** (short form); add `0x10000000` for runtime rodata VA.

Method: string clusters are stable rodata labels. `__FILE__` path strings sit beside
view handler / layout symbols in the same compilation unit — use them as module anchors
until Thumb `functions.csv` is recovered for this variant.

---

## 1. Architecture (display stack → view stack → pages)

Halliday glasses run the stock Actions **`bt_watch`** Zephyr application with a Halliday
overlay package **`xs_app`**. Rendering is **LVGL** on a virtual display bridged through
the Actions display framework.

| Layer | Source path (string VA) | Role |
|---|---|---|
| Panel / composer | `panel_device.c` @ `0x16270b`, `display_composer.c` @ `0x16521a` | LCD + vsync / post |
| LVGL core + GPU port | `lvgl/src/core/*`, `lvgl/porting/gpu/*` @ `0x1700f1`… | Widget tree, draw, timers |
| Virtual display | `lvgl_virtual_display.c` @ `0x18e1e2` | `_lvgl_flush_cb`, `_lvgl_view_init` |
| UI service | `view_manager.c` @ `0x146648`, `input_dispatcher.c` @ `0x146cc8` | View lifecycle, focus, anim |
| View cache / stack | `view_cache.c` @ `0x18fb65`, `view_stack` @ `0x18fafb` | Push/pop, restore, jump |
| App host | `launcher_app.c` @ `0x14d151` | Top-level **launcher** app loop |
| Halliday extensions | `xs_app/*` @ `0x14e328`… | Translate, msg, remind, AI, prompter |

```
  BLE / keys / touch
         │
         ▼
  input_dispatcher.c ──► view_manager.c (view_create, view_input, view_anim)
         │                        │
         │                        ▼
         │               view_stack / view_cache
         │                        │
         ▼                        ▼
  lvgl_virtual_display ◄── LVGL screens (per-view layout handlers)
         │
         ▼
  display_composer → panel (Leopard LCDC)
```

Boot resources: `/NAND:A/bt_watch.res`, `.sty`, `.zhC` @ `0x14b137`… — scene tables
(`SCENE_*`) back LVGL resource loads via `lvgl_res_load_scene` @ `0x18dd31`.

---

## 2. Framework: view_manager + ui_service

`view_manager.c` (`0x146648`) owns the registered view table. Log strings prove the state machine:

| Phase | String | Offset |
|---|---|---|
| Init | `view_manager_init` | `0x146c2c` |
| Create | `view_create`, `view %u created` | `0x146be8`, `0x146914` |
| Focus | `view %d focused`, `view %d defocused` | `0x146588`, `0x1465ac` |
| Layout | `view %d layout started/finished` | `0x1467f0`, `0x146868` |
| Paint | `view %u repaint display` | `0x146994` |
| Input | `view_input`, `view_gesture`, `view_anim` | `0x146d30`, `0x146e5c`, `0x146e00` |
| Delete | `view %d deleted` | `0x1467dc` |

`view_uisrv` @ `0x1464d0` tags the UI-server thread/workqueue.

**View stack** (`view_stack` @ `0x18fafb`): navigation is stack-based, not a single PageManager
name registry like Star Air. Key APIs (string-proven):

- `view_stack_pop` / `view_stack_clean` @ `0x18fb17`, `0x18fb06`
- `_view_stack_jump` @ `0x18fb39` — may clean stack or pop before push
- `view_stack_clean_and_return_launcher` @ `0x158935` — global escape to home
- `ui_jump_to_view` @ `0x1541f3` — explicit jump (warns on `view_stack_clean`)
- `view_op.get_top` @ `0x15a808` — introspect current view id

**View cache** (`view_cache.c` @ `0x18fb65`): optional preload/restore (`view_cache: restore view %d`).

**Msgbox layer**: `msgbox_cache_lvgl.c` @ `0x18fd82`; e.g. `BTCALL_VIEW_MSGBOX_ID` @ `0x159368`.

---

## 3. bt_watch launcher (`launcher_app.c`)

Source: `WEST_TOPDIR/application/bt_watch/src/launcher/launcher_app.c` @ **`0x14d151`**.

The launcher is the primary **bt_watch** application entry. Lifecycle strings:

| Event | String | Offset |
|---|---|---|
| Enter | `launcher enter` | `0x14d127` |
| Init loop | `_launcher_app_init`, `_launcher_app_loop` | `0x14d3f8`, `0x14d3e5` |
| Power | `launcher early-suspend` / `late-resume` / `suspend` / `resume` | `0x14d1c2`… |
| Exit | `launcher exit` | `0x14d2a6` |
| BT | `_launcher_bt_event_handle`, `_launcher_bt_mgr_event_handle` | `0x14d340`, `0x14d35a` |
| Media | `_launcher_opus_event_handle`, `_launcher_mp3_event_handle` | `0x1590be`, `0x1590da` |
| Alarm | `_launcher_alarm_event_handle` | `0x14d378` |
| Keys | `_launcher_key_event_handle` | `0x14d395` |

On early suspend, firmware may **`return to launcher view`** (`0x158818`) after reading
`view_stack_get_num()` — home is the recovery anchor when the stack drains.

### 3.1 Clock view (default launcher face)

`clock_view.c` @ **`0x14d439`** — selected when `view_id == CLOCK_VIEW` @ `0x14d423`.

- `_clock_view_select` @ `0x14d4a5`
- Scene resource: `SCENE_BP_VIEW` / clock scenes loaded via `lvgl_res_load_scene`; miss logs `SCENE_* not found`

### 3.2 Health sub-views (launcher gadget strip)

Vertical launcher layout references **`LAUNCHER_GADGET`** @ `0x14ef78` and
`lanucher_view_vertical_layout_focus` @ `0x14ef54` (sic spelling in firmware).

| View id constant | Source file | Offset | Handlers |
|---|---|---|---|
| `HEALTH_BP_VIEW` | `health/bp_view.c` @ `0x14d509` | `0x14d4ef` | `_bp_view_load_resource`, `_bp_view_layout`, `_bp_view_handler` |
| `HEALTH_SPO2_VIEW` | `health/spo2_view.c` @ `0x14d5e8` | `0x14d5cc` | `_spo2_view_load_resource`, `_spo2_view_layout`, `_spo2_view_handler` |

### 3.3 Launcher chrome view

`SCENE_LAUNCHER_VIEW` @ `0x157971` — `_launcher_view_handler` @ `0x1579da`,
`_launcher_view_layout_update` @ `0x1579f1`. This is the scrollable gadget/menu shell
around clock + health tiles, distinct from `launcher_app.c` process scope.

Ring shortcut: `ring_chlick_handler jump to launcher` @ `0x156a52`.

---

## 4. xs_app — Halliday-specific views

Init: `xs_app_init` / `_xs_app_init` @ `0x14e328` / `0x14ecfc`; font `@ /NAND:C/xs_font.ttf` @ `0x14ed27`.
Product strings: `Halliday Glasses` @ `0x182856`, `Halliday SPP` @ `0x182867`.

Event hub: `xs_event_handle` @ `0x1591a0`, `_xs_key_event_handle` @ `0x159537`; BLE streams under
`xs_vendor_ble_stream.c` @ `0x15caad`, `ble_ring_stream.c` @ `0x15d876`.

### 4.1 Translate (`xs_translate`)

| Item | Offset |
|---|---|
| Source | `translate_language_select_view_332.c` @ **`0x14f078`** |
| Entry | `tran_view_start` @ `0x14f33d`, `tran_to_start_translate` @ `0x14f208` |
| UI | `translate_view_init_show`, `translate_view_update`, `translate_view_delete` |
| BLE state | `ble_translate_state %d` @ `0x14f39f` |
| Config | `translate_config_init`, `translate_config_set_language` @ `0x14fe27`… |

Flow: language select → connect view → live translate; retry via `tran_view_start retry_connect_timer_cb`.
Error surface: `tran_error_view_show` @ `0x14f3ce`; credits gate: `_tran_language_advanced_translate_no_credits_view_event_cb`.

### 4.2 Messages / notify (`xs_msg`)

| Item | Offset |
|---|---|
| `message_reply_view.c` | **`0x150583`** — `message_reply_main_view_create` @ `0x15062e` |
| `notify_list_view.c` | **`0x15148b`** — list/focus/update perf logs |
| Detail | `notify_detail_view_create` / `_delete` @ `0x15129b`… |
| Touch | `message_list_view_tp_handler` @ `0x151561` |
| Config | `appnotify_cfg_read/store`, pin filters @ `0x150f77`… |

Scene: `SCENE_MSG_VIEW` @ `0x157abf`, `SCENE_MESSAGE_BOX_VIEW` @ `0x157a3b`.

### 4.3 Reminders (`xs_remind`)

| Item | Offset |
|---|---|
| `reminder_list_view_V330.c` | **`0x152a13`** |
| `reminder_opration_view.c` | **`0x152d9e`** |
| List TP | `reminder_list_view_tp_handler` @ `0x152d26` |
| Timeout | `remind_timeup_view_exit` @ `0x15410b` |
| Stack repair | `Reminder: pushed launcher view to empty stack` @ `0x153fec` |

Timed reminders auto-exit and may push launcher when the stack empties — ties remind flow back to §3.

### 4.4 AI (`xs_ai`)

| Item | Offset |
|---|---|
| `ai_view.c` | **`0x154242`** |
| `proactiva_ai_view.c` | **`0x15454b`** — proactive agent surface |
| Layout | `ai_view_set_layout` @ `0x1543cb`, `ai_view_updata` @ `0x154423` |
| Content | `ai_agent_content_view_create` @ `0x1545f3` |
| Scene | `SCENE_AI_VIEW` @ `0x157538` |

Tutorial gate: `ai_view_set_layout tutorial_is_open` @ `0x154203`.

### 4.5 Adjacent xs_app surfaces (launcher-adjacent)

| Module | Source offset | Notes |
|---|---|---|
| Prompter | `prompter_list_view.c` @ `0x15479d` | Teleprompter file browser + `prompter_display_page` |
| Settings | `setting_view_v330.c` @ `0x15bd00` | `_setting_view_list_event_cb` |
| Language | `language_view.c` @ `0x15bf4a` | `xs_language_res_init`, LVGL string tables |
| Screen time | `screen_time_view.c` @ `0x15c1e1` | Display timeout prefs |
| Password | `password_view.c` @ `0x1571fc` | BLE-set password cmd @ `0x15abe5` |

---

## 5. Navigation / page model

Unlike Star Air’s `PageManager` + `Pages/*` registry, Halliday **`bt_watch`** uses numeric
**`view_id`** enums and a **view stack**:

```
                    ┌──────────────────────────┐
  Power / OTA /     │ welcome_view, goodbye,   │
  alarm interrupts  │ ota_view, alarm_view,  │
                    │ charger_view, low_power  │
                    └────────────┬─────────────┘
                                 │ ui_jump_to_view / push
                                 ▼
              ┌──────────────────────────────────────┐
              │ LAUNCHER_VIEW / CLOCK_VIEW (+ gadget) │
              │  ├─ HEALTH_BP_VIEW / HEALTH_SPO2_VIEW │
              │  ├─ menu_view / controller_center    │
              │  └─ vertical scroll (LAUNCHER_GADGET)│
              └──────────────┬───────────────────────┘
                             │ app shortcuts / BLE / ring
         ┌───────────────────┼───────────────────────┐
         ▼                   ▼                       ▼
   xs_translate          xs_msg / notify         xs_remind
   xs_ai / proactiva     xs_prompter             xs_setting/*
         │                   │                       │
         └───────────────────┴───────────────────────┘
                             │ back / timeout / ring
                             ▼
              view_stack_pop  OR  view_stack_clean_and_return_launcher
```

**Input routing**: touch logs `ui_view_tp view_id = %d` @ `0x159ff5`; keys via
`lv_send_key_event` @ `0x159433` and `ui_key_common_event` @ `0x159455`.
Top view introspection drives BLE shortcuts (`_ble_rx_set_button_shortcut_view` @ `0x15a838`).

**Overlay views** (bt_watch core, not xs_app): `music_view`, `btcall_view` / `btcall_box_view`,
`guide_view` (onboarding steps @ `0x15b96c`…), `titlebar_view`, `phone_records_view`.

---

## 6. LVGL integration points

| API / module | Offset | Role |
|---|---|---|
| `lv_init` | `0x170650` | One-time init |
| `lv_timer_handler` | `0x17ac57` | Main LVGL tick |
| `lvgl_res_loader_init` | `0x18dfd5` | Scene/group/picture/string loader |
| `lvgl_res_load_strings_from_scene` | `0x18dda5` | Localized labels per view |
| `lvglworkq` | `0x18d98e` | LVGL thread queue |
| `lvgl_port_indev_encoder_init` | `0x17bb4e` | Encoder/keys → LVGL |
| Prompter refresh | `Forced LVGL refresh after font change` @ `0x155ad7` | Dynamic font resize |

Display blanking: `screen_display_turn_off` @ `0x159ce4`; wake locks logged @ `0x15f585`.

---

## 7. Recovered anchors (this leaf)

See **`manifest.json`** for `{va, name, evidence}` function entries and **`view_catalog.md`**
for the full view/page table with source paths.

---

## 8. Deliverables & verify

| File | Purpose |
|---|---|
| `UI_LAUNCHER.md` | This overview + navigation model |
| `view_catalog.md` | View/page inventory with string VAs |
| `manifest.json` | Named function anchors |

```bash
node Reverse/firmware/Halliday/analysis/scripts/verify-leaf.mjs 1.4
```

Expected: `leaf 1.4 verification passed`.
