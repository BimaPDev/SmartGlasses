# Halliday view / page catalog

Firmware: `Reverse/firmware/Halliday/export/official/layer3/app.bin` · load base **`0x10000000`**.

**VA columns:** `off` = file offset in `app.bin` (as in export); `abs` = `0x10000000 + off`.

Full inventory from `app_ascii.txt`, `lvgl_ui.txt`, `source_files.txt`, `halliday.txt`.

---

## Core framework

| View / module | off | abs | Source file / evidence |
|---|---|---|---|
| view_manager | `0x146648` | `0x10146648` | `framework/display/libdisplay/ui_service/view_manager.c` |
| input_dispatcher | `0x146cc8` | `0x10146cc8` | `framework/display/libdisplay/ui_service/input_dispatcher.c` |
| view_stack | `0x18fafb` | `0x1018fafb` | `view_stack`, `_view_stack_jump`, `view_stack_pop` |
| view_cache | `0x18fb65` | `0x1018fb65` | `framework/display/ui_service/view_cache.c` |
| msgbox_cache_lvgl | `0x18fd82` | `0x1018fd82` | `framework/display/ui_service/msgbox_cache_lvgl.c` |
| lvgl_virtual_display | `0x18e1e2` | `0x1018e1e2` | `framework/display/lvgl/lvgl_virtual_display.c` |

---

## bt_watch launcher (`application/bt_watch/src/launcher`)

| View / page | off | abs | Source file / key strings |
|---|---|---|---|
| launcher_app (process) | `0x14d151` | `0x1014d151` | `launcher/launcher_app.c` — `launcher enter`, `_launcher_app_init` |
| CLOCK_VIEW | `0x14d439` | `0x1014d439` | `launcher/clock_view.c` — `view_id == CLOCK_VIEW`, `_clock_view_select` |
| HEALTH_BP_VIEW | `0x14d509` | `0x1014d509` | `launcher/health/bp_view.c` — `SCENE_BP_VIEW`, `_bp_view_handler` |
| HEALTH_SPO2_VIEW | `0x14d5e8` | `0x1014d5e8` | `launcher/health/spo2_view.c` — `SCENE_SPO2_VIEW`, `_spo2_view_handler` |
| LAUNCHER_VIEW (scene) | `0x157971` | `0x10157971` | `_launcher_view_handler`, `_launcher_view_layout_update` |
| LAUNCHER_GADGET layout | `0x14ef78` | `0x1014ef78` | `LAUNCHER_GADGET`, `lanucher_view_vertical_layout_focus` |
| menu_view | `0x14f023` | `0x1014f023` | `menu_view_create`, `_menu_view_layout_update` |
| controller_center | `0x14ed77` | `0x1014ed77` | `controller_center_view_layout_create`, slider updates |
| welcome_view | `0x14b333` | `0x1014b333` | `_welcome_view_handler`, `_welcome_view_layout` |
| goodbye_view | `0x14b39c` | `0x1014b39c` | `_goodbye_view_layout` |
| low_power_view | `0x14b1e6` | `0x1014b1e6` | `_lpower_view_paint`, `SCENE_LOW_POWER_VIEW` |
| ota_view | `0x14c315` | `0x1014c315` | `ota_view_init`, `_ota_view_handler` |
| alarm_view | `0x14cffe` | `0x1014cffe` | `alarm_view_init`, `SCENE_ALARM_SET_VIEW` |
| charger_view | `0x14df14` | `0x1014df14` | `_charger_view_layout`, `SCENE_CHARGER_VIEW` |
| guide_view | `0x1578ee` | `0x101578ee` | `guide_view_handler`, skip/prev/jump steps |
| music_view | `0x152370` | `0x10152370` | `music_view_update_play_state`, `SCENE_MUSIC_VIEW` |
| btmusic_view | `0x14b5a2` | `0x1014b5a2` | `btmusic_view_input_event_proc` |
| btcall_view | `0x151b0b` | `0x10151b0b` | `btcall_view_init`, `_btcall_view_paint` |
| btcall_box_view | `0x151d45` | `0x10151d45` | `btcall_box_view_create`, `SCENE_BTCALL_BOX_VIEW` |
| phone_records_view | `0x157cd5` | `0x10157cd5` | `phone_records_view_handler`, `_phone_book_view_layout_update` |
| titlebar_view | `0x152792` | `0x10152792` | `title_view_layout`, `SCENE_TITLE_BAR_VIEW` |
| password_view | `0x157326` | `0x10157326` | `password_view_create` (bt_watch; xs variant @ `0x1571fc`) |
| vertical_view (generic) | `0x14ef38` | `0x1014ef38` | `vertical_view_event_handler` |

---

## xs_app — Halliday views

| View / page | off | abs | Source file / key strings |
|---|---|---|---|
| xs_app init | `0x14e328` | `0x1014e328` | `xs_app_init`, `_xs_app_init`, `/NAND:C/xs_font.ttf` |
| **translate** | `0x14f078` | `0x1014f078` | `xs_translate/translate_language_select_view_332.c` |
| translate (runtime) | `0x14f33d` | `0x1014f33d` | `tran_view_start`, `translate_view_update`, `ble_translate_state` |
| **message reply** | `0x150583` | `0x10150583` | `xs_msg/message_reply_view.c` — `message_reply_main_view_create` |
| **notify list** | `0x15148b` | `0x1015148b` | `xs_msg/notify_list_view.c` — `notify_list_view_update/focus` |
| notify detail | `0x15129b` | `0x1015129b` | `notify_detail_view_create/delete` |
| **reminder list** | `0x152a13` | `0x10152a13` | `xs_remind/reminder_list_view_V330.c` |
| reminder operation | `0x152d9e` | `0x10152d9e` | `xs_remind/reminder_opration_view.c` |
| remind timeout | `0x15410b` | `0x1015410b` | `remind_timeup_view_exit`, stack → launcher push |
| **ai_view** | `0x154242` | `0x10154242` | `xs_ai/ai_view.c` — `ai_view_set_layout`, `SCENE_AI_VIEW` |
| **proactiva_ai** | `0x15454b` | `0x1015454b` | `xs_ai/proactiva_ai_view.c` — `ai_agent_content_view_create` |
| prompter list | `0x15479d` | `0x1015479d` | `xs_prompter/prompter_list_view.c` |
| prompter display | `0x155c1e` | `0x10155c1e` | `prompter_display_page`, font/display_mode |
| **setting** | `0x15bd00` | `0x1015bd00` | `xs_setting/setting_view_v330.c` |
| language | `0x15bf4a` | `0x1015bf4a` | `xs_setting/xs_language/language_view.c` |
| screen_time | `0x15c1e1` | `0x1015c1e1` | `xs_setting/xs_screen_time/screen_time_view.c` |
| xs_password | `0x1571fc` | `0x101571fc` | `xs_password/password_view.c` |

---

## Navigation helpers

| Symbol | off | abs | Role |
|---|---|---|---|
| ui_jump_to_view | `0x1541f3` | `0x101541f3` | Programmatic view switch |
| view_stack_clean_and_return_launcher | `0x158935` | `0x10158935` | Force home |
| view_stack_get_num | `0x14efa6` | `0x1014efa6` | Stack depth introspection |
| view_op.get_top | `0x15a808` | `0x1015a808` | Current top view id |
| ring → launcher | `0x156a52` | `0x10156a52` | `ring_chlick_handler jump to launcher` |
| Early suspend → launcher | `0x158818` | `0x10158818` | `return to launcher view` |

---

## SCENE_* resource ids (miss logs → view binding)

| SCENE token | off | Linked view |
|---|---|---|
| SCENE_LAUNCHER_VIEW | `0x157971` | Launcher chrome |
| SCENE_BP_VIEW | `0x14d4d7` | HEALTH_BP_VIEW |
| SCENE_SPO2_VIEW | `0x14d5b2` | HEALTH_SPO2_VIEW |
| SCENE_MSG_VIEW | `0x157abf` | xs_msg |
| SCENE_MESSAGE_BOX_VIEW | `0x157a3b` | Message box overlay |
| SCENE_AI_VIEW | `0x157538` | xs_ai |
| SCENE_MUSIC_VIEW | `0x157ba4` | music_view |
| SCENE_BTCALL_BOX_VIEW | `0x1576c9` | btcall_box_view |
| SCENE_TITLE_BAR_VIEW | `0x15272b` | titlebar_view |
| SCENE_ALARM_SET_VIEW | `0x14cf94` | alarm_view |
| SCENE_CHARGER_VIEW | `0x14de94` | charger_view |
| SCENE_LOW_POWER_VIEW | `0x14b176` | low_power_view |
