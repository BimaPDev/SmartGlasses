# Uniden R/TACH 1.0.9 — full app map

Package `com.uniden.rtach`, product **R/TACH**, versionName `1.0.9` / versionCode `14`, flavor `uniden`. All reverse artifacts stay under `Reverse/Uniden/`. Input XAPK: `R_TACH_1.0.9_APKPure.xapk`. jadx output: `decompiled/` (8876 Java files; ~175 first-party under `sources/com/uniden/rtach/`).

This map composes the eight analysis leaves. Cite the leaf writeup for detail; this file is the join.

| Leaf | Writeup | Topic |
|---|---|---|
| 1.1 | `analysis/fingerprint.md` | Unpack + jadx |
| 1.2 | `architecture/ARCHITECTURE.md` | Manifest, Hilt, MVVM |
| 1.3 | `bluetooth/BLUETOOTH.md` | BLE GATT transport |
| 1.4 | `device_protocol/DEVICE_PROTOCOL.md` | Settings/alert/ETC frames |
| 1.5 | `network_api/NETWORK_API.md` | unidenup.com HTTP |
| 1.6 | `ui_features/UI_FEATURES.md` | Screens and navigation |
| 1.7 | `location_maps/LOCATION_MAPS.md` | Phone GPS vs detector tach |
| 1.8 | `storage_data/STORAGE_DATA.md` | R.json, prefs, Room unused |
| 1.9 | `native_sdks/NATIVE_SDKS.md` | Firebase, Maps keys, no `.so` |

## What the app is

Native Kotlin (not Flutter). Hilt + MVVM. `BaseApplication` (`@HiltAndroidApp`) is the process root and BLE LiveData bus. Persistence is SharedPreferences (`com_uniden_rtach`), not Room. There is no first-party Retrofit/account API. The phone is a BLE companion for Uniden R-series radar detectors (name filter `R4` / `R8` / `R9` / `AE903i`).

Startup: `SplashActivity` (MAIN/LAUNCHER, 3s) → `BLeDeviceListActivity` → GATT connect → `DashboardActivity` (gauge/tach fragment + Maps fragment + drawer).

## Bluetooth transport (`bluetooth`)

BLE GATT only. No Classic RFCOMM. Scan uses empty hardware filters then software name contains `R4|R8|R9|AE903i`. Connect: `TRANSPORT_LE`, MTU 512, CCCD `00002902`.

Vendor services:

- Data `18424398-7cbc-11e9-8f9e-2a86e4085a59` — settings 1/2/3, alert, ETC
- Command `1842467c-7cbc-11e9-8f9e-2a86e4085a59` — UTF-8 write-without-response + ACK notify

Names containing `W` or `AE903i` are treated as Wi-Fi models.

## Device protocol (`device_protocol`)

The phone never writes the packed settings blob. It writes ASCII:

```
BTreqSETC:{write_index}={n}
```

on `WRITE_COMMAND_CHARACTERISTIC_UUID` (`2c86686a-…`). The detector notifies settings characteristic 1 (`2d86686a-…`) with a packed `byte[]`. `R.json` has 200 `radar_settings`. `write_index` is the command key (0–199). `read_index` is a **byte offset** into that blob. `byte_value` 1 = one unsigned byte; `byte_value` 2 = 16-bit kHz for 16 K-block filters, stretching `read_index` to 215 (blob ≥ 216 bytes). `0xFF` means the setting is absent on that hardware. Char 2 is subscribed but not decoded in 1.0.9. Char 3 is POI/markers, not settings.

Alert notify (`6eb675ab-…`): UTF-8 `&` slots, comma fields — type (`X`/`K`/`KA`/`LASER`/…), RSSI 1–8, frequency or laser-gun id, dir `F`/`R`/`S`, mute 1–6. Idle `0&0&0&0`.

ETC (`6c290d2e-…`): `voltage & poi & gps & warning & scanDone & wifi & autoBrightness`. GPS field is `gpsDirection,currentSpeed,altitude,gpsStatus`.

Other ASCII: `BTreqMUTE`, `BTreqMMEM`, `BTreqUMRK`, `BTreqRLCD`, `BTreqGURL`, `BTreqGWAP`, `BTreqSWAP`, `BTdnSTWFU`. Responses `RDrespACK`/`NAK`, `RDrptWIAP`/`DSTS`/`DEND`/`WSTS`/`WEND`. No app CRC on live frames. Software revision SIG `0x2A28` is read; `0x2A26` is defined and unused.

## Network (`network_api`)

Almost no cloud API besides `www.unidenup.com`. Unauthenticated OkHttp 4.10.0 GETs:

- `https://www.unidenup.com/R_series_latest_ver_info.json`
- model `.bin` URLs from that JSON (`R4W`, `R8W`, `R9`, `AE903i`, …)

WebView: `uniden.com` privacy/terms. Wi-Fi models receive `BTdnSTWFU:` plus the URL over BLE; the phone does not GET the `.bin` in that path. No login, no Authorization header.

## UI (`ui_features`)

Seven Uniden activities; only Splash is exported+launcher. Drawer: Settings, Wi-Fi (wifi-model + BT), Firmware (R9 or wifi+BT), About. Settings Basic/Expert writes `BTreqSETC:0=0|1`. Five-tap version label on BLE list skips to Dashboard (debug).

## Location / maps / tach (`location_maps`)

Phone GPS (`UnidenLocationManager`, 800 ms / 5 m) drives the Google Map camera and car marker only. The **tach/speedometer** (`GaugeView`) reads detector `currentSpeed` from BLE ETC. Live phone lat/lng is not written to GATT. NMEA mock (`MOCKLOCATION_ON=false`) is shipped off. SPEEDCAM / REDLIGHT / USERMARK pins come from hex POI on settings char 3.

## Storage (`storage_data`)

Assets `R.json` (200 rows) and `Category.json` (User Preferences, Band Settings, GPS, Sound, Display, Laser, Reset). Prefs file `com_uniden_rtach`; last BLE name `AppPreferences_device_name`. Room is unused in app code (WorkManager `WorkDatabase` only).

**Index caveat:** `device_protocol` treats Category `items[]` as `write_index` values (Band Settings `2,3,4` = X/K/Ka). `storage_data` documents them as 1-based array indexes (`N` → `radar_settings[N-1]`). Because `write_index` equals the 0-based array index for most rows, those two readings differ by one. Wire writes use `write_index` from `RadarSettingsModel`; confirm lookups against `SettingMenuActivity` / `RadarItemSettingAdapter` before generating Category ids.

## SDKs (`native_sdks`)

No JNI `.so`, no ABI split, no `System.loadLibrary`. Firebase Crashlytics 19.2.0 (Java) and Analytics/measurement 22.1.2 auto-init; first-party code does not `logEvent`. Play Maps 19.0.0, Location, WorkManager, Lottie, woong WheelPicker, Hilt 2.48.1, OkHttp 4.10.0. Maps vs Google API keys are separate strings in `res/values/strings.xml` (see that leaf; not repeated here).

## End-to-end data path

```
detector GATT notify
  → BluetoothManager callback
  → BaseApplication receivers
       alert  → DashboardActivity band UI
       settings-1 → overlay R.json via read_index → SettingMenu / prefs
       ETC    → GaugeView speed + volt/alt/gps icon
       POI    → MapsFragment markers
       0x2A28 → firmware version compare vs unidenup.com JSON

phone UI
  → BTreqSETC / MUTE / UMRK / SWAP / BTdnSTWFU
  → WRITE_COMMAND UTF-8, no response write
  → RDrespACK + settings-1 notify
```

## Artifact layout (containment)

Everything lives under `Reverse/Uniden/`: `xapk/`, `decompiled/`, `analysis/`, `.unlazy/uniden/`. Do not copy reverse outputs to sibling `Reverse/` paths.
