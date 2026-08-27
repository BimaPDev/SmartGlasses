# BLE `handleSystemMsg` action dispatch — extracted from platform_tester.bin (1.0.12.83, M55)

Source: `x_1.0.12.83/platform_tester.bin`. Miss-path anchor `no handler for action` at file 0x182b64.
Confirmed dispatch blob: 0x194bcc–0x194f68 (findings §8.5). Total actions extracted: 33.

## A. handleSystemMsg dispatch table (the authoritative command set)

| offset | action | type |
|---|---|---|
| 0x194bcc | `change_dock_items` | change |
| 0x194be0 | `set_standby_position` | set |
| 0x194bf8 | `set_wear_detection_mode` | set |
| 0x194c10 | `set_glass_sound_effect_mode` | set |
| 0x194c2c | `set_hear_impairment_mode` | set |
| 0x194c48 | `set_app_fast_open` | set |
| 0x194c5c | `set_music_tp_control_mode` | set |
| 0x194c78 | `set_image_stabilization_mode` | set |
| 0x194c98 | `set_image_adjustment_mode` | set |
| 0x194cb4 | `set_language` | set |
| 0x194cc4 | `set_font_mode` | set |
| 0x194cd4 | `get_standby_widget_lists` | get |
| 0x194cf8 | `set_standby_widget_lists` | set |
| 0x194e54 | `get_device_info` | get |
| 0x194e64 | `get_language` | get |
| 0x194e74 | `get_zen_mode` | get |
| 0x194e84 | `set_device_name` | set |
| 0x194e94 | `set_brightness_finish` | set |
| 0x194eac | `get_volume` | get |
| 0x194eb8 | `set_volume` | set |
| 0x194ec4 | `get_wear_detection_mode` | get |
| 0x194edc | `get_standby_position` | get |
| 0x194ef4 | `get_volume_stream_type` | get |
| 0x194f0c | `get_music_tp_control_mode` | get |
| 0x194f28 | `notify_privacy_expired` | notify |
| 0x194f40 | `notify_statement_change` | notify |
| 0x194f58 | `sync_clone_data` | sync |

(27 actions)

## B. Adjacent activation/privacy actions (just BEFORE the dispatch blob — MISSED by ble_actions.txt)

| offset | action | note |
|---|---|---|
| 0x194800 | `glass_pp` | glass power/pairing? |
| 0x194914 | `active_time` | activation |
| 0x194920 | `req_active_state` | query activation state |
| 0x1949bc | `req_active_info` | query activation info |
| 0x194a34 | `privacy_agreement` | privacy consent |
| 0x194a48 | `transmission_agreement` | data-transmission consent |

(6 actions)
