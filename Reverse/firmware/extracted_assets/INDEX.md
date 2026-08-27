# Star Air firmware asset map

Generated from the CN/intl OTA `platform_tester.bin` (M55) and
`best1600_watch_bth.bin` (M33) images. LittleFS payloads that live on
the glasses are listed but **cannot** be pulled from the zip.

## What is in the OTA vs only on the glasses

| Kind | In OTA zip | On device flash | Extracted here |
|---|---|---|---|
| HUD GIFs | 12 | same | `gifs/` |
| LVGL bitmap fonts (3 faces) | yes | yes | `fonts/` |
| Full CJK `B:lv_font_air_full_cn_20_bpp1.bin` | no | LittleFS | — |
| UI AAC (`audio/*.aac`) | paths only (21) | LittleFS | `strings/audio_paths.txt` |
| EN UI copy | yes (2516) | yes | `i18n/en.txt` |
| ZH UI copy | yes (408) | yes | `i18n/zh.txt` |
| BLE `handleSystemMsg` actions | 38 | yes | `strings/ble_actions.txt` |
| Factory / eshell cmds | 73 | UART/MMI | `strings/factory_cmds.txt` |
| Pages / Views / Models | 69 | yes | `strings/pages.txt` |
| Screenshot / log files | protocol only | runtime | ShareAbility |

## 1.0.12.83 GIFs

| File | Size | Offset |
|---|---|---|
| `gifs/gif_00_22x22_off3730b4.gif` | 22×22 | `0x3730b4` |
| `gifs/gif_01_40x40_off3740f4.gif` | 40×40 | `0x3740f4` |
| `gifs/gif_02_56x56_off37f5f4.gif` | 56×56 | `0x37f5f4` |
| `gifs/gif_03_22x22_off387ab4.gif` | 22×22 | `0x387ab4` |
| `gifs/gif_04_160x40_off3b6774.gif` | 160×40 | `0x3b6774` |
| `gifs/gif_05_40x40_off3c7ab4.gif` | 40×40 | `0x3c7ab4` |
| `gifs/gif_06_24x24_off3d8e74.gif` | 24×24 | `0x3d8e74` |
| `gifs/gif_07_178x16_off3e05f4.gif` | 178×16 | `0x3e05f4` |
| `gifs/gif_08_178x16_off3e3e74.gif` | 178×16 | `0x3e3e74` |
| `gifs/gif_09_13x15_off3eb774.gif` | 13×15 | `0x3eb774` |
| `gifs/gif_10_38x20_off3eeaf4.gif` | 38×20 | `0x3eeaf4` |
| `gifs/gif_11_38x20_off3f6234.gif` | 38×20 | `0x3f6234` |

## Audio paths (payloads not in zip)

- `audio/click.aac` (`0x3e798`)
- `audio/connectSucc.aac` (`0x3e7a8`)
- `audio/disconnect.aac` (`0x3e7c0`)
- `audio/msg.aac` (`0x3e7d8`)
- `audio/unlock.aac` (`0x3e7e8`)
- `audio/screenOff.aac` (`0x3e7fc`)
- `audio/AsistDisconnected.aac` (`0x3e810`)
- `audio/connSucTTS.aac` (`0x3e82c`)
- `audio/wozai441.aac` (`0x3e844`)
- `audio/cute_boy_ei.aac` (`0x3e858`)
- `audio/cute_boy_wozai.aac` (`0x3e870`)
- `audio/female_tianmei_ei.aac` (`0x3e88c`)
- `audio/female_tianmei_wozai.aac` (`0x3e8a8`)
- `audio/female_yujie_ei.aac` (`0x3e8c8`)
- `audio/female_yujie_wozai.aac` (`0x3e8e4`)
- `audio/male_qn_qingse_ei.aac` (`0x3e904`)
- `audio/male_qn_qingse_wozai.aac` (`0x3e920`)
- `audio/ei441.aac` (`0x3e940`)
- `audio/phone_8k.aac` (`0x3e950`)
- `audio/phone_16k.aac` (`0x3e964`)
- `audio/screenshot.aac` (`0x3e978`)

## Named factory bitmaps (compiled LVGL, not separately carved)

- `img_cross_h` (`0x161d48`)
- `img_cross_v` (`0x161d54`)
- `img_hh` (`0x161d60`)
- `img_vv` (`0x161d68`)
- `img_crossAll` (`0x161d70`)
- `img_rec_50` (`0x161dc8`)
- `img_ghosts` (`0x161dd4`)
- `img_xjmz` (`0x161de0`)
- `img_decoder_built_in_open: out of memory` (`0x41b530`)

## BLE actions (packed table before `handleSystemMsg no handler`)

- `[Launcher]MessageModel `
- `[Launcher]MessageModel handleSystemMsg called, action is %s`
- `[Launcher]MessageModel handleSystemMsg called, action is null`
- `[Launcher]MessageModel handleSystemMsg called, user_data is null`
- `[Launcher]MessageModel::handleSyncCloneData item %d is not object`
- `[Launcher]handleSystemMsg failed, data is null`
- `[Launcher]standby widgets count: %d`
- `change_dock_items`
- `get_device_info`
- `get_language`
- `get_music_tp_control_mode`
- `get_standby_position`
- `get_standby_widget_lists`
- `get_volume`
- `get_volume_stream_type`
- `get_wear_detection_mode`
- `get_zen_mode`
- `handleStandbyWidgetsChange`
- `handleSystemMsg`
- `ize %d`
- `notify_privacy_expired`
- `notify_statement_change`
- `set_app_fast_open`
- `set_brightness_finish`
- `set_device_name`
- `set_font_mode`
- `set_glass_sound_effect_mode`
- `set_hear_impairment_mode`
- `set_image_adjustment_mode`
- `set_image_stabilization_mode`
- `set_language`
- `set_music_tp_control_mode`
- `set_standby_position`
- `set_standby_widget_lists`
- `set_volume`
- `set_wear_detection_mode`
- `sync_clone_data`
- `widgets`

## Factory commands present as strings

- `set_sn`
- `get_sn`
- `set_bsn`
- `get_bsn`
- `set_bt_name`
- `get_bt_name`
- `set_bt_mac`
- `get_bt_mac`
- `set_bt_discover`
- `get_default_bt_name`
- `get_version`
- `soc_info`
- `build_date`
- `flash_info`
- `get_board_id`
- `sys_reset`
- `goto_sleep`
- `bth_goto_sleep`
- `set_gpio`
- `get_sysfreq`
- `set_sysfreq`
- `close_eshell`
- `en_usb`
- `check_tp`
- `get_tp_status`
- `set_tp_sensitivity`
- `set_disp_bri`
- `get_disp_bri`
- `get_jbd_brightness`
- `show_pic`
- `exit_show_pic`
- `set_always_on`
- `panel_id`
- `panel_check`
- `panel_bri_cali`
- `set_lcd_clk`
- `check_esd`
- `audio_player`
- `audio_loopback`
- `audio_pdm_loopback`
- `audio_info`
- `pa_cali`
- `set_audio_vol`
- `set_mic`
- `get_mic`
- `check_charger`
- `charger_status`
- `charger_ship_mode`
- `charger_enable`
- `charger_dump`
- `check_coulomb_l`
- `check_coulomb_r`
- `battery_info`
- `set_battery`
- `get_battery`
- `charge_threshold`
- `sensor_self_test`
- `sensor_info`
- `sensor_cali`
- `get_sensor_data`
- `stop_sensor_data`
- `enable_sensor`
- `disable_sensor`
- `sensor_loglevel`
- `sensor_debug_switch`
- `mmi_help`
- `mmi_run`
- `mmi_run_item`
- `mmi_result_clear`
- `exit_mmi`
- `switch_page`
- `debug_i2c`
- `dump_all_threads`

## UI pages / views / models (source basenames)

- `AboutView.cpp`
- `AddressView.cpp`
- `AirMusicView.cpp`
- `AlarmModel.cpp`
- `AudioPlayCtrlCenterView.cpp`
- `BrightView.cpp`
- `ButtonView.cpp`
- `CardView.cpp`
- `CommView.cpp`
- `ConnectingView.cpp`
- `DeviceListView.cpp`
- `EndView.cpp`
- `FlightView.cpp`
- `FontView.cpp`
- `GuideSearchView.cpp`
- `HorizontalListView.cpp`
- `LanguageView.cpp`
- `ListView.cpp`
- `MMIPage.cpp`
- `MessageModel.cpp`
- `ModeView.cpp`
- `MoreView.cpp`
- `MultipleTimeWeatherView.cpp`
- `NaviDomainView.cpp`
- `NaviDriveSpeedView.cpp`
- `NaviModel.cpp`
- `NaviNextRoadInfoView.cpp`
- `NaviPipView.cpp`
- `NaviView.cpp`
- `OperationGuideView.cpp`
- `OtaModel.cpp`
- `OtaMsgModel.cpp`
- `OtaView.cpp`
- `PhonePage.cpp`
- `PhoneView.cpp`
- `PowerOffAndRebootView.cpp`
- `PrivacyView.cpp`
- `PromptView.cpp`
- `QqMusicMainView.cpp`
- `RemoveView.cpp`
- `RingListView.cpp`
- `SIMPanelView.cpp`
- `ScheduleDomainView.cpp`
- `ScreenOffView.cpp`
- `SearchFailedView.cpp`
- `SettingView.cpp`
- `SingleUnboundView.cpp`
- `SplashView.cpp`
- `StandByView.cpp`
- `StateView.cpp`
- `StatusModel.cpp`
- `TaxiView.cpp`
- `TimeModel.cpp`
- `TipsModel.cpp`
- `TodoDomainView.cpp`
- `TransView.cpp`
- `UnbindDeviceView.cpp`
- `VersionInfoDetailView.cpp`
- `VersionInfoView.cpp`
- `VoiceAvatarView.cpp`
- `VolView.cpp`
- `VuiModel.cpp`
- `WearView.cpp`
- `WeatherModel.cpp`
- `WechatContactListView.cpp`
- `WechatDomainModel.cpp`
- `WechatMsgView.cpp`
- `WechatResponseView.cpp`
- `WechatSysView.cpp`

## On-device only

- `B:lv_font_air_full_cn_20_bpp1.bin`
- `audio/click.aac`
- `audio/connectSucc.aac`
- `audio/disconnect.aac`
- `audio/msg.aac`
- `audio/unlock.aac`
- `audio/screenOff.aac`
- `audio/AsistDisconnected.aac`
- `audio/connSucTTS.aac`
- `audio/wozai441.aac`
- `audio/cute_boy_ei.aac`
- `audio/cute_boy_wozai.aac`
- `audio/female_tianmei_ei.aac`
- `audio/female_tianmei_wozai.aac`
- `audio/female_yujie_ei.aac`
- `audio/female_yujie_wozai.aac`
- `audio/male_qn_qingse_ei.aac`
- `audio/male_qn_qingse_wozai.aac`
- `audio/ei441.aac`
- `audio/phone_8k.aac`
- `audio/phone_16k.aac`
- `audio/screenshot.aac`
- `user_feed_back.log (ASL flash)`
- `LVGL preferences (nv)`

## Layout of this folder

```
extracted_assets/<ver>/
  map.json              machine-readable catalog
  gifs/ + gifs/previews
  fonts/                from extract_lvgl_fonts.py
  i18n/en.txt zh.txt
  strings/              ble, factory, audio, pages, sources
  bth/interesting.txt
```

Re-run: `python3 extract_firmware_map.py` then `python3 extract_lvgl_fonts.py`.

