# fac_cmd + eshell command map

Image: `platform_tester.bin` 1.0.12.83, XIP base `0x2C000000`.
Handler column: `unrecovered` unless explicitly rejected below.

## Packed fac_cmd blob (sequential C-strings)

Walk file `0x15FDBC` → `fac_cmd.c`. Role `name` = underscore token in known set, or space-form identity token; else `help` / `fmt` / `source`.

| file_off | VA | role | string | handler_va |
|---|---|---|---|---|
| `0x15FDBC` | `0x2C15FDBC` | name | `set_sn` | unrecovered |
| `0x15FDC4` | `0x2C15FDC4` | help | `write sn cmd` | unrecovered |
| `0x15FDD4` | `0x2C15FDD4` | name | `get_sn` | unrecovered |
| `0x15FDDC` | `0x2C15FDDC` | help | `read sn cmd` | unrecovered |
| `0x15FDE8` | `0x2C15FDE8` | name | `set_bsn` | unrecovered |
| `0x15FDF0` | `0x2C15FDF0` | help | `write bsn cmd` | unrecovered |
| `0x15FE00` | `0x2C15FE00` | name | `get_bsn` | unrecovered |
| `0x15FE08` | `0x2C15FE08` | help | `read bsn cmd` | unrecovered |
| `0x15FE18` | `0x2C15FE18` | name_space_form | `set bt name` | unrecovered |
| `0x15FE24` | `0x2C15FE24` | name | `set_bt_mac` | unrecovered |
| `0x15FE30` | `0x2C15FE30` | help | `set bt mac` | unrecovered |
| `0x15FE3C` | `0x2C15FE3C` | name | `get_bt_name` | unrecovered |
| `0x15FE48` | `0x2C15FE48` | name | `get_bt_mac` | unrecovered |
| `0x15FE54` | `0x2C15FE54` | name | `set_bt_discover` | unrecovered |
| `0x15FE64` | `0x2C15FE64` | help | `set bt discover` | unrecovered |
| `0x15FE74` | `0x2C15FE74` | name | `get_default_bt_name` | unrecovered |
| `0x15FE88` | `0x2C15FE88` | help | `get default bt name` | unrecovered |
| `0x15FE9C` | `0x2C15FE9C` | name | `get_version` | unrecovered |
| `0x15FEA8` | `0x2C15FEA8` | help | `get version` | unrecovered |
| `0x15FEB4` | `0x2C15FEB4` | name | `check_tp` | unrecovered |
| `0x15FEC0` | `0x2C15FEC0` | help | `ic tp check` | unrecovered |
| `0x15FECC` | `0x2C15FECC` | name | `get_tp_status` | unrecovered |
| `0x15FEDC` | `0x2C15FEDC` | help | `get tp check` | unrecovered |
| `0x15FEEC` | `0x2C15FEEC` | name | `set_tp_sensitivity` | unrecovered |
| `0x15FF00` | `0x2C15FF00` | help | `set tp sensitivity` | unrecovered |
| `0x15FF14` | `0x2C15FF14` | name | `bt_test` | unrecovered |
| `0x15FF1C` | `0x2C15FF1C` | name | `audio_player` | unrecovered |
| `0x15FF2C` | `0x2C15FF2C` | help | `audio player` | unrecovered |
| `0x15FF3C` | `0x2C15FF3C` | name | `audio_loopback` | unrecovered |
| `0x15FF4C` | `0x2C15FF4C` | help | `audio i2s loopback` | unrecovered |
| `0x15FF60` | `0x2C15FF60` | name | `audio_pdm_loopback` | unrecovered |
| `0x15FF74` | `0x2C15FF74` | help | `audio pdm loopback` | unrecovered |
| `0x15FF88` | `0x2C15FF88` | name | `audio_info` | unrecovered |
| `0x15FF94` | `0x2C15FF94` | help | `get audio pa info` | unrecovered |
| `0x15FFA8` | `0x2C15FFA8` | name | `pa_cali` | unrecovered |
| `0x15FFB0` | `0x2C15FFB0` | help | `pa cali` | unrecovered |
| `0x15FFB8` | `0x2C15FFB8` | name | `set_audio_vol` | unrecovered |
| `0x15FFC8` | `0x2C15FFC8` | help | `set audio_vol` | unrecovered |
| `0x15FFD8` | `0x2C15FFD8` | name | `set_mic` | unrecovered |
| `0x15FFE0` | `0x2C15FFE0` | help | `set mic` | unrecovered |
| `0x15FFE8` | `0x2C15FFE8` | name | `get_mic` | unrecovered |
| `0x15FFF0` | `0x2C15FFF0` | help | `get mic` | unrecovered |
| `0x15FFF8` | `0x2C15FFF8` | name | `soc_info` | unrecovered |
| `0x160004` | `0x2C160004` | help | `get soc info` | unrecovered |
| `0x160014` | `0x2C160014` | name | `build_date` | unrecovered |
| `0x160020` | `0x2C160020` | help | `get build date` | unrecovered |
| `0x160030` | `0x2C160030` | name | `flash_info` | unrecovered |
| `0x16003C` | `0x2C16003C` | help | `get flash info` | unrecovered |
| `0x16004C` | `0x2C16004C` | name | `goto_sleep` | unrecovered |
| `0x160058` | `0x2C160058` | help | `goto sleep` | unrecovered |
| `0x160064` | `0x2C160064` | name | `set_gpio` | unrecovered |
| `0x160070` | `0x2C160070` | name | `get_sysfreq` | unrecovered |
| `0x16007C` | `0x2C16007C` | name | `set_sysfreq` | unrecovered |
| `0x160088` | `0x2C160088` | name | `close_eshell` | unrecovered |
| `0x160098` | `0x2C160098` | help | `set brightness` | unrecovered |
| `0x1600A8` | `0x2C1600A8` | name | `get_jbd_brightness` | unrecovered |
| `0x1600BC` | `0x2C1600BC` | help | `get jbd brightness` | unrecovered |
| `0x1600D0` | `0x2C1600D0` | name | `check_esd` | unrecovered |
| `0x1600DC` | `0x2C1600DC` | help | `esd check` | unrecovered |
| `0x1600E8` | `0x2C1600E8` | name | `check_esd_switch` | unrecovered |
| `0x1600FC` | `0x2C1600FC` | help | `esd check switch` | unrecovered |
| `0x160110` | `0x2C160110` | name | `read_cache` | unrecovered |
| `0x16011C` | `0x2C16011C` | help | `read cache` | unrecovered |
| `0x160128` | `0x2C160128` | name | `read_temp` | unrecovered |
| `0x160134` | `0x2C160134` | help | `read temp` | unrecovered |
| `0x160140` | `0x2C160140` | name | `set_cmd` | unrecovered |
| `0x160148` | `0x2C160148` | help | `set cmd` | unrecovered |
| `0x160150` | `0x2C160150` | name | `set_lcd_clk` | unrecovered |
| `0x16015C` | `0x2C16015C` | help | `set lcd clk` | unrecovered |
| `0x160168` | `0x2C160168` | name | `set_lreg_creg` | unrecovered |
| `0x160178` | `0x2C160178` | help | `set lreg creg` | unrecovered |
| `0x160188` | `0x2C160188` | name | `panel_check` | unrecovered |
| `0x160194` | `0x2C160194` | help | `panel check` | unrecovered |
| `0x1601A0` | `0x2C1601A0` | name | `panel_bri_cali` | unrecovered |
| `0x1601B0` | `0x2C1601B0` | help | `panel bri cali` | unrecovered |
| `0x1601C0` | `0x2C1601C0` | name | `panel_id` | unrecovered |
| `0x1601CC` | `0x2C1601CC` | help | `panel id` | unrecovered |
| `0x1601D8` | `0x2C1601D8` | name | `set_always_on` | unrecovered |
| `0x1601E8` | `0x2C1601E8` | help | `set lcd always on` | unrecovered |
| `0x1601FC` | `0x2C1601FC` | name | `show_pic` | unrecovered |
| `0x160208` | `0x2C160208` | help | `show pic` | unrecovered |
| `0x160214` | `0x2C160214` | name | `exit_show_pic` | unrecovered |
| `0x160224` | `0x2C160224` | help | `exit show pic` | unrecovered |
| `0x160234` | `0x2C160234` | name | `check_charger` | unrecovered |
| `0x160244` | `0x2C160244` | help | `ic charger check` | unrecovered |
| `0x160258` | `0x2C160258` | name | `charger_status` | unrecovered |
| `0x160268` | `0x2C160268` | help | `get charger status` | unrecovered |
| `0x16027C` | `0x2C16027C` | name | `charger_ship_mode` | unrecovered |
| `0x160290` | `0x2C160290` | help | `set charger shipmode` | unrecovered |
| `0x1602A8` | `0x2C1602A8` | name | `charger_enable` | unrecovered |
| `0x1602B8` | `0x2C1602B8` | help | `set charger enable` | unrecovered |
| `0x1602CC` | `0x2C1602CC` | name | `charger_dump` | unrecovered |
| `0x1602DC` | `0x2C1602DC` | help | `get charger register info` | unrecovered |
| `0x1602F8` | `0x2C1602F8` | name | `check_coulomb_l` | unrecovered |
| `0x160308` | `0x2C160308` | help | `IC Check Coulomb_L` | unrecovered |
| `0x16031C` | `0x2C16031C` | name | `check_coulomb_r` | unrecovered |
| `0x16032C` | `0x2C16032C` | name | `battery_info` | unrecovered |
| `0x16033C` | `0x2C16033C` | help | `get battery info` | unrecovered |
| `0x160350` | `0x2C160350` | help | `get battery voltage` | unrecovered |
| `0x160364` | `0x2C160364` | help | `get battery current` | unrecovered |
| `0x160378` | `0x2C160378` | name | `battery_capacity` | unrecovered |
| `0x16038C` | `0x2C16038C` | help | `get battery capacity` | unrecovered |
| `0x1603A4` | `0x2C1603A4` | name | `set_battery` | unrecovered |
| `0x1603B0` | `0x2C1603B0` | help | `set battery info` | unrecovered |
| `0x1603C4` | `0x2C1603C4` | name | `get_battery` | unrecovered |
| `0x1603D0` | `0x2C1603D0` | name | `charge_threshold` | unrecovered |
| `0x1603E4` | `0x2C1603E4` | help | `set charger threshold` | unrecovered |
| `0x1603FC` | `0x2C1603FC` | name | `sensor_loglevel` | unrecovered |
| `0x16040C` | `0x2C16040C` | help | `sensor log level set.` | unrecovered |
| `0x160424` | `0x2C160424` | name | `sensor_self_test` | unrecovered |
| `0x160438` | `0x2C160438` | help | `sensor self test.` | unrecovered |
| `0x16044C` | `0x2C16044C` | name | `sensor_info` | unrecovered |
| `0x160458` | `0x2C160458` | help | `get sensor info` | unrecovered |
| `0x160468` | `0x2C160468` | name | `sensor_debug_switch` | unrecovered |
| `0x16047C` | `0x2C16047C` | help | `open or close sensor debug log` | unrecovered |
| `0x16049C` | `0x2C16049C` | name | `get_sensor_data` | unrecovered |
| `0x1604AC` | `0x2C1604AC` | help | `get sensor data` | unrecovered |
| `0x1604BC` | `0x2C1604BC` | name | `stop_sensor_data` | unrecovered |
| `0x1604D0` | `0x2C1604D0` | help | `stop sensor data` | unrecovered |
| `0x1604E4` | `0x2C1604E4` | name | `enable_sensor` | unrecovered |
| `0x1604F4` | `0x2C1604F4` | help | `enable sensor` | unrecovered |
| `0x160504` | `0x2C160504` | name | `disable_sensor` | unrecovered |
| `0x160514` | `0x2C160514` | help | `disable sensor` | unrecovered |
| `0x160524` | `0x2C160524` | name | `sensor_cali` | unrecovered |
| `0x160530` | `0x2C160530` | help | `sensor calibration.` | unrecovered |
| `0x160544` | `0x2C160544` | name | `mmi_help` | unrecovered |
| `0x160550` | `0x2C160550` | help | `show mmi help msg` | unrecovered |
| `0x160564` | `0x2C160564` | name | `mmi_run` | unrecovered |
| `0x16056C` | `0x2C16056C` | help | `run mmi test` | unrecovered |
| `0x16057C` | `0x2C16057C` | name | `mmi_run_item` | unrecovered |
| `0x16058C` | `0x2C16058C` | help | `get mmi test result` | unrecovered |
| `0x1605A0` | `0x2C1605A0` | name | `mmi_result_clear` | unrecovered |
| `0x1605B4` | `0x2C1605B4` | help | `clear mmi test result` | unrecovered |
| `0x1605CC` | `0x2C1605CC` | name | `switch_page` | unrecovered |
| `0x1605D8` | `0x2C1605D8` | help | `switch page.` | unrecovered |
| `0x1605E8` | `0x2C1605E8` | name | `en_usb` | unrecovered |
| `0x1605F0` | `0x2C1605F0` | help | `enable usb` | unrecovered |
| `0x1605FC` | `0x2C1605FC` | name | `exit_mmi` | unrecovered |
| `0x160608` | `0x2C160608` | help | `exit mmi test` | unrecovered |
| `0x160618` | `0x2C160618` | name | `lcd_id` | unrecovered |
| `0x160620` | `0x2C160620` | help | `get lcd id` | unrecovered |
| `0x16062C` | `0x2C16062C` | help | `check ready` | unrecovered |
| `0x160638` | `0x2C160638` | name | `file_sys_check` | unrecovered |
| `0x160648` | `0x2C160648` | name | `sys_reset` | unrecovered |
| `0x160654` | `0x2C160654` | help | `sys reset` | unrecovered |
| `0x160660` | `0x2C160660` | name | `set_disp_bri` | unrecovered |
| `0x160670` | `0x2C160670` | help | `set display brightness` | unrecovered |
| `0x160688` | `0x2C160688` | name | `get_disp_bri` | unrecovered |
| `0x160698` | `0x2C160698` | help | `get display brightness` | unrecovered |
| `0x1606B0` | `0x2C1606B0` | name | `get_board_id` | unrecovered |
| `0x1606C0` | `0x2C1606C0` | help | `get board id ` | unrecovered |
| `0x1606D0` | `0x2C1606D0` | fmt | ` -- [%d:%d] ` | unrecovered |
| `0x1606E0` | `0x2C1606E0` | fmt | `---------------------------------\n` | unrecovered |
| `0x160704` | `0x2C160704` | help | `show help msg` | unrecovered |
| `0x160714` | `0x2C160714` | fmt | ` -- %s\n` | unrecovered |
| `0x16071C` | `0x2C16071C` | source | `../../factory/fac_cmd/fac_cmd.c` | unrecovered |

### Extra fac_cmd-adjacent tokens (outside packed walk)

| file_off | VA | name | note |
|---|---|---|---|
| `0x15F88C` | `0x2C15F88C` | `set_bt_name` | fac_cmd_bt.c TRACE band |
| `0x15FC1C` | `0x2C15FC1C` | `goto_sleep` | also appears again @ 0x16004C in packed walk |
| `0x15FC28` | `0x2C15FC28` | `set_gpio` | pre-table / TRACE neighbor |
| `0x15FC34` | `0x2C15FC34` | `bth_goto_sleep` | pre-table |
| `0x15FC10` | `0x2C15FC10` | `set_sysfreq` | pre-table duplicate of packed token |
| `0x15FD98` | `0x2C15FD98` | `fac_cmd` | RTOS/module name |
| `0x15FDB0` | `0x2C15FDB0` | `fac_cmd_trd` | thread name |
| `0x15FD88` | `0x2C15FD88` | `fac_cmd_pool` | mempool name |
| `0x162124` | `0x2C162124` | `factory_init` | init symbol string |

## Rejected handler VAs

| VA | rejected_as | actual |
|---|---|---|
| `0x2C5AA114` | set_sn handler | LVGL Model method |
| `0x2C5AAB48` | en_usb handler | LVGL TRACE → `0x2C606A28` |
| `0x2C5AAB80` | lcd_id handler | LVGL TRACE family |
| `0x2C606A28` | fac_cmd shared helper | LVGL flag/invalidate |

## Core eshell / app_eshell tokens

| name | file_off | VA | handler_va |
|---|---|---|---|
| `eshell >` | `0x4274E2` | `0x2C4274E2` | unrecovered (prompt) |
| `eshell_execute:cmds_count=%d` | `0x427370` | `0x2C427370` | unrecovered (dispatch TRACE) |
| `eshell_paltform_init open=%d` | `0x427610` | `0x2C427610` | unrecovered (platform init) |
| `debug_i2c` | `0x427824` | `0x2C427824` | unrecovered (cmd) |
| `restart_eshell_thread` | `0x427840` | `0x2C427840` | unrecovered (cmd/object) |
| `pmu_write` | `0x427858` | `0x2C427858` | unrecovered (cmd) |
| `pmu_read` | `0x427870` | `0x2C427870` | unrecovered (cmd) |
| `panic` | `0x427888` | `0x2C427888` | unrecovered (cmd) |
| `pmugpioget` | `0x4279E0` | `0x2C4279E0` | unrecovered (cmd) |
| `pmugpioset` | `0x427A00` | `0x2C427A00` | unrecovered (cmd) |
| `gpioget` | `0x427A28` | `0x2C427A28` | unrecovered (cmd) |
| `gpioset` | `0x427A44` | `0x2C427A44` | unrecovered (cmd) |
| `xmodem` | `0x427B80` | `0x2C427B80` | unrecovered (cmd) |
| `pll_autocalib` | `0x427C94` | `0x2C427C94` | unrecovered (cmd) |
| `shell_sleep` | `0x427D10` | `0x2C427D10` | unrecovered (cmd) |
| `msleep` | `0x427D38` | `0x2C427D38` | unrecovered (cmd) |
| `show_threads_usage_once` | `0x427EB8` | `0x2C427EB8` | unrecovered (cmd) |
| `close_threads_usage` | `0x427EE8` | `0x2C427EE8` | unrecovered (cmd) |
| `show_threads_usage` | `0x427F10` | `0x2C427F10` | unrecovered (cmd) |
| `dump_all_threads` | `0x427F34` | `0x2C427F34` | unrecovered (cmd) |
| `md (usage 'md addr')` | `0x427FA2` | `0x2C427FA2` | unrecovered (usage; no bare md\0 in name band) |
| `md help 'dump memory or registers'` | `0x4288CC` | `0x2C4288CC` | unrecovered (help only) |
| `md16` | `0x4288A0` | `0x2C4288A0` | unrecovered (cmd) |
| `md32` | `0x428874` | `0x2C428874` | unrecovered (cmd) |
| `mw` | `0x42884C` | `0x2C42884C` | unrecovered (cmd) |
| `mw16` | `0x428814` | `0x2C428814` | unrecovered (cmd) |
| `mw32` | `0x4287DC` | `0x2C4287DC` | unrecovered (cmd) |
| `comp` | `0x4287B4` | `0x2C4287B4` | unrecovered (cmd) |
| `comp16` | `0x428780` | `0x2C428780` | unrecovered (cmd) |
| `comp32` | `0x42874C` | `0x2C42874C` | unrecovered (cmd) |
| `echo` | `0x427278` | `0x2C427278` | unrecovered (cmd) |
| `utest_wdt` | `0x428ABC` | `0x2C428ABC` | unrecovered (cmd) |
| `utest_i2c` | `0x428D30` | `0x2C428D30` | unrecovered (cmd) |
| `utest_rtc` | `0x428FC4` | `0x2C428FC4` | unrecovered (cmd) |
| `utest_dma` | `0x4291CC` | `0x2C4291CC` | unrecovered (cmd) |
| `utest_ram` | `0x429948` | `0x2C429948` | unrecovered (cmd) |
| `utest_gpio` | `0x429BB4` | `0x2C429BB4` | unrecovered (cmd) |
| `utest_uart` | `0x429C34` | `0x2C429C34` | unrecovered (cmd) |
| `eshell cmd is not exist.` | `0x02A898` | `0x2C02A898` | unrecovered (error) |

## Product test CLIs

| name | VA | handler_va |
|---|---|---|
| `xjxr_starrynet_test` | `0x2C02920C` | unrecovered |
| `xmonkey` | `0x2C0288F8` | unrecovered |
| `xtest` | `0x2C028C80` | unrecovered |
| `xr_asl` | `0x2C037F8C` | unrecovered |
| `xr_sensor_eshell` | `0x2C038AE8` | unrecovered |
| `xjxr_audio_test` | `0x2C040A20` | unrecovered |
| `xjxr_graphic` | `0x2C133D64` | unrecovered |
| `xjxr_input_test` | `0x2C41E6C8` | unrecovered |
| `xjxr_fps_collect` | `0x2C41DC94` | unrecovered |
| `xjxr_power_test` | `0x2C425CF0` | unrecovered |
