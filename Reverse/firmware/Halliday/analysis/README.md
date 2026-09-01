# Halliday firmware reverse

All Halliday artifacts live under `Reverse/firmware/Halliday/`. See [`../README.md`](../README.md).

## Leaves (`analysis/full_rev/`)

| Leaf | Directory | Topic |
|---|---|---|
| 1.3 | `firmware_map/` | Container + platform map |
| 1.4 | `ui_launcher/` | LVGL bt_watch + xs_app |
| 1.5 | `ble_connectivity/` | BT/BLE/SPP |
| 1.6 | `ota_security/` | AOTA + CRC |
| 1.7 | `audio_display/` | libdisplay + audio |
| 1.8 | `sensors_health/` | BP/SPO2 health |
| 1.9 | `power_battery/` | Battery + PM |
| 1.10 | `factory_shell/` | Factory + shell |
| 1.11 | `zephyr_rtos/` | Zephyr kernel |
| 1.12 | `xs_vendor/` | Vendor BLE protocol |
| 1.13 | `custom_diff/` | HomeBuddy patch |

Integration map: [`full_rev/FULL_FIRMWARE_MAP.md`](full_rev/FULL_FIRMWARE_MAP.md)
