# Uniden R/TACH 1.0.9 — storage and settings data (leaf 1.8)

App-owned persistence is **SharedPreferences plus two APK assets**. There is **no app Room database**, no `@Entity` / `@Dao` in `com.uniden.rtach`, and no app `DataStore`. Radar menu metadata lives in `assets/R.json` (200 `radar_settings`) and is grouped by `assets/Category.json`. Live values come from BLE settings frames and are mirrored into prefs for UI (colors, GPS, laser, last device).

## How `R.json` is loaded

`Utils.getFileName()` always returns `"R.json"`. `Utils.assetJSONFile(Context)` opens that asset, reads the entire stream into a UTF-8 string, and returns it:

```
context.getAssets().open("R.json") → byte[] → String(UTF_8)
```

The JSON root is a single object with key `radar_settings` (exactly 200 entries). Kotlin model `SettingMenuItemModel` has one field of the same name: `List<RadarSettingsModel> radar_settings` — the deserialize target for that string. Gson is on the classpath; the call site that turns the asset string into `_radarSettings` is inside `BaseApplication.updateSettingsCharacteristic` (jadx skipped that coroutine body). `BaseApplication` also exposes `MutableLiveData<List<RadarSettingsModel>> settingList`, which `SettingMenuActivity` observes.

Each catalog row maps 1:1 onto `RadarSettingsModel`:

| JSON field | Meaning |
|---|---|
| `item` | Display name (also used as a string key when mirroring into prefs) |
| `selected_value` | Index into `values` (and `conflict_values` when the connected model matches `conflict_radars`) |
| `write_index` | BLE write slot; **always equals 0-based array index** (0…199) |
| `read_index` | BLE read slot; usually equals `write_index`, but can diverge (e.g. item 200 “Laser TP B6 Setting”: write 199, read 215) |
| `byte_value` | Width of the setting in the settings characteristic (184 items are 1 byte; 16 K-block frequency min/max pairs are 2 bytes) |
| `values` | Human labels for `selected_value` |
| `mode` | `"Expert/Basic"` (60) or `"Expert"` (140) — UI filter against `StoreUserData.settingMode` |
| `conflict_radars` | Comma-separated BLE name prefixes (before `@`) that use `conflict_values` instead of `values` |
| `relational_fields` | Show/hide other settings via `visibility_index` compared to `write_index` |
| `isObservable` | Integer catalog flag (consumed as “observable” by the settings UI) |

Fields that exist only on the Kotlin model (not in `R.json`) are filled at runtime: `category` (stamped from `Category.json`), `limit` / `conflict_limit`, `isAvailable`, `speedUnit`.

The BLE overlay lives in `BaseApplication.updateSettingsCharacteristic(byte[])` (jadx skipped the 1072-insn coroutine body). After overlay, `saveSettingInLocal` copies byte `[0]` → Expert/Basic and byte `[1]` → Highway/City/Auto/Advanced, and `setSettingsToLocal` copies named items into prefs.

## How `Category.json` indexes `R.json` items

`Utils.getCategoryFileName()` returns `"Category.json"`. `Utils.assetCategoryTableJonFile(Context)` reads it the same way as `R.json`. Schema matches `RadarSettingsCategoryTable`: `{ "category": String, "items": [Int] }`.

**Indexing rule:** each integer in `items` is a **1-based index into `radar_settings`**. Item id `N` is `radar_settings[N-1]`. Because `write_index == array index`, Category id `N` also equals `write_index + 1`.

Seven categories (order is the settings-screen section order). `BaseApplication.settingCategories` is the list of those titles passed into `RadarItemSettingAdapter`, which regroups models with `RadarSettingsModel.category == section title`. `SettingMenuActivity.filterSettingViseMode` then keeps rows whose `mode` contains the current Basic/Expert pref and whose `isAvailable` is true (relational + `conflict_radars` vs device name).

Item **200** (`Laser TP B6 Setting`) is the only catalog row **not listed in any category**.

### Category → item ids

| Category | Count | Item ids (1-based into `R.json`) |
|---|---:|---|
| User Preferences | 12 | 1, 5, 50, 77, 68, 86, 91, 92, 93, 94, 95, 100 |
| Band Settings | 74 | 2, 3, 4, 118, 119, 120, 177, 178, 179, 6, 121, 15, 16, 17, 122–125, 28–34, 141–172, 35–49, 51, 79 |
| GPS | 9 | 7, 8, 9, 10, 11, 12, 87, 88, 90 |
| Sound | 31 | 101, 13, 14, 69–71, 103, 72–76, 176, 180, 78, 181, 89, 104–117 |
| Display | 40 | 52, 53, 126, 54–58, 127–132, 59–63, 133–137, 182–185, 64–67, 173, 80–85, 102 |
| Laser | 29 | 18, 19, 138, 20, 186, 187, 21, 139, 140, 22–27, 188–199, 174, 175 |
| Reset | 4 | 96, 97, 98, 99 |
| *(uncategorized)* | 1 | 200 (Laser TP B6 Setting) |

Name samples: **1** Basic/Expert Mode, **2** City Mode, **8** GPS, **19** Laser, **69** Speed Unit, **96** Self Test, **102** Volume. Display id **173** is “User K Block5 Filter Maximum Frequency” (the matching min is Band Settings **172**). Laser ids **18/138** are Ka Band / Rear Ka Band Color — category names are UI buckets, not protocol families.

## SharedPreferences

File name from `StoreUserData.Companion.getPrefName(Context)`: package `com.uniden.rtach` → dots to underscores → lowercased → **`com_uniden_rtach`**. Mode `0` (`MODE_PRIVATE`). `BaseApplication.onCreate` constructs `StoreUserData` from that file and forces `isBluetoothConnected = false` for the process.

`BaseSharedPrefs` is a typed get/set helper: `String` default `""`, `boolean` default `false`, `int`/`long` default `0`, `float`/`double` stored as `float`. Writes use `edit().apply()`. `StoreUserData.clearData(Activity)` clears the whole file (`DashboardActivity` disconnect/forget-device path also sets auto-connect false first).

All keys use prefix `AppPreferences_`:

| Key | Property | Type | Role |
|---|---|---|---|
| `AppPreferences_device_name` | `deviceName` | String | Last BLE advertised name (auto-reconnect target) |
| `AppPreferences_bt_connection` | `isBluetoothConnected` **and** decompiled `isScanRunning` | boolean | Connection / scan flag (same key in jadx output) |
| `AppPreferences_bt_connecting` | `isBTConnecting` | boolean | In-flight GATT connect |
| `AppPreferences_auto_conn_available` | `isAutoConnectAvailable` | boolean | Set true on GATT `STATE_CONNECTED`; false on forget-device |
| `AppPreferences_is_wifi_model` | `isWiFiModel` | boolean | Name contains `W` or `AE903i` |
| `AppPreferences_setting_mode` | `settingMode` | String | `"Basic"` / `"Expert"` from settings byte 0 |
| `AppPreferences_city_mode` | `cityMode` | String | Highway/City/Auto/Advanced from byte 1 |
| `AppPreferences_speed_unit` | `speedUnit` | String | From catalog item “Speed Unit” |
| `AppPreferences_volume` | `volume` | String | Catalog “Volume” |
| `AppPreferences_auto_mute` | `autoMute` | String | |
| `AppPreferences_auto_mute_memory` | `autoMuteMemory` | String | |
| `AppPreferences_mute_memory_option` | `muteMemoryOption` | String | |
| `AppPreferences_is_gps_on` | `isGpsOn` | boolean | Catalog “GPS” On/Off |
| `AppPreferences_is_mrcd_on` | `isMrcdOn` | boolean | Catalog “MRCD” |
| `AppPreferences_is_laser_enable` | `isLaserEnable` | boolean | Catalog “Laser”; cleared on 0xFF overlay |
| `AppPreferences_laser_tp_mode` | `laserTpMode` | String | “Laser TP Mode” with `" Mode"` stripped |
| `AppPreferences_power_button_receive_mode` | `powerButtonReceiveMode` | String | |
| `AppPreferences_is_map_light` | `isMapLight` | boolean | Maps light/dark |
| `AppPreferences_*_arrow_color` / `*_band_color` | X/K/MRCD/Gatso/Ka | String | Alert coloring |
| `AppPreferences_write_setting` | `isRecentlyWriteSetting` | boolean | Recent settings write |
| `AppPreferences_current_firmware_version` | `currentFirmwareVersion` | String | From `READ_SOFTWEAR_VERSION` characteristic |
| `AppPreferences_latest_firmware_version` / `_url` | latest firmware | String | |
| `AppPreferences_firmware_test_url` | `testjsonFirmwareURL` | String | Sideloaded JSON `firmware_url` |
| `AppPreferences_isfileExist` | `isfileExist` | boolean | Test firmware JSON was imported |
| `AppPreferences_is_firmware_updating` / `_is_fw_downloaded` / `_is_fw_flashing` / `_is_update_available` | FW pipeline | boolean | |
| `AppPreferences_connected_wifi_ssid` | `connectedWiFiSSID` | String | Parsed from `RDrptWIAP:` |

`LocationDriverService` also opens **default** `PreferenceManager` prefs (`mSettings`); that is a second, unused-looking store for the simulation driver, not the Uniden catalog.

## Last BLE device

On `BluetoothManager.connectToDevice(BluetoothDevice)`:

1. Open `com_uniden_rtach`.
2. `setBTConnecting(true)`.
3. **`setDeviceName(device.getName())`** — this is the persisted last device.
4. `setWiFiModel` if the name contains `W` or `AE903i`.
5. `connectGatt(..., TRANSPORT_LE)`.

Reconnect: `BaseActivity.fetchBTDevices` BLE-scans; if a **paired** device name contains `R4`/`R8`/`R9`/`AE903i` **and equals** `getDeviceName()`, and the app is not already connecting, it stops the scan and calls `connectToDevice` again. GATT success sets `isAutoConnectAvailable = true`. Disconnect broadcasts clear connection flags and empty `settingList`; they do **not** clear `deviceName`, so the next scan still targets the last name. Forget-device (`DashboardActivity`) disconnects, `setAutoConnectAvailable(false)`, and `clearData()` (wipes the whole prefs file, including the last name).

Device-name consumers strip `@…` (`substringBefore('@')`) before matching `conflict_radars` and model families (`R8`, `R9`, `R4W`, `R8W`).

## Room

**Room is unused in app code.** Search of `com.uniden.rtach` found no `@Entity`, `@Dao`, `Room.databaseBuilder`, or app `RoomDatabase` subclass. No app SQLiteOpenHelper either.

Room is present only as a **transitive WorkManager dependency**: `androidx.work.impl.WorkDatabase` (WorkSpec/WorkTag/… DAOs) backs `FirmWareUpdateWorker` / `FileReadWorker`. The only Uniden import of `androidx.room.RoomDatabase` is `FirmWareUpdateWorker` using `RoomDatabase.MAX_BIND_PARAMETER_CNT` as a numeric clamp for firmware file-version fields — not a database. There are **no Uniden Room entities**.

`androidx.datastore` is likewise unused by Uniden; only Firebase Sessions (`SessionDatastoreImpl`) uses Preference DataStore.

## Other on-disk files

Under `context.getFilesDir()/Uniden/`:

- `uniden_logs.txt` — `CustomLog.writeFile` append; share/clear via `Utils.shareLogFile` / `clearLogFile`.
- `Firmware/uniden_firmware_file.bin` — `Utils.getFirmwareFilePath`.

Manifest `android:allowBackup="true"` with empty `<full-backup-content/>` and empty `<cloud-backup/>` data-extraction rules: platform backup is allowed but the XML includes no extra include/exclude domains.

## Load / persist sequence (settings)

1. Process start: `BaseApplication` binds `StoreUserData(com_uniden_rtach)`, last `deviceName` already on disk.
2. Auto-connect uses that name; GATT connect rewrites it.
3. Settings characteristic notification → overlay `R.json` defaults with device bytes → `settingList` LiveData.
4. Named overlay items + Expert/City bytes → prefs (`setSettingsToLocal` / `saveSettingInLocal`).
5. Settings UI: filter by `mode` + availability, group by `Category.json` titles.

Catalog JSON is **read-only assets**. User/device settings are **not** written back to `R.json`; they live on the radar (BLE) and in the prefs mirror.
