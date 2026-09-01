# Uniden R/TACH fingerprint

Package `com.uniden.rtach`, app name **R/TACH**, version **1.0.9** (versionCode 14), flavor `uniden`, minSdk 24, targetSdk 35.

## Framework

**Native Kotlin** (not Flutter / React Native / Cordova / Xamarin).

Markers:

- `DebugProbesKt.bin`, `kotlin/*.kotlin_builtins`, kotlinx-coroutines
- ViewBinding / DataBinding, Hilt (`hilt-android`), Dagger
- MVVM: `viewmodel/*ViewModel.java`, Activities under `p005ui/activity`
- ~175 first-party Java files after jadx under `decompiled/sources/com/uniden/rtach/`
- jadx decompiled 8876 Java files total (libraries included), 117 decompiler errors treated as partial success

## HTTP / DI / serialization

- OkHttp 3 (publicsuffix list in APK)
- Jackson (`com.fasterxml`)
- Hilt + Dagger modules (`data/module/AppModule.java`)
- Firmware check URL in `BuildConfig`: `https://www.unidenup.com/R_series_latest_ver_info.json`

## Obfuscation

Low–moderate. App package names are intact (`com.uniden.rtach`). Some `p005ui` R8 leftover. Library code mixed in. No root-level single-letter packages for app code.

## Native libraries

No `.so` files in the base APK zip listing. JNI is not the protocol path.

## Notable SDKs

- Firebase Analytics, Crashlytics, Installations, Sessions
- Play services: location, maps, measurement, ads identifier
- WorkManager (firmware workers)
- Glide (`com.bumptech`)
- Airbnb (lottie likely)
- intuit (sdp/ssp likely)
- Wheel picker `io.woong.wheelpicker`
- Room artifacts present in META-INF; confirm usage in storage leaf

## Permissions (XAPK manifest)

INTERNET, WIFI, BLUETOOTH / BLUETOOTH_CONNECT / BLUETOOTH_SCAN / BLUETOOTH_ADMIN, FINE+COARSE location, ACCESS_MOCK_LOCATION, notifications, storage, wake lock, foreground service, boot completed.

## Recommended next step

jadx on `xapk/com.uniden.rtach.apk` is the right path. Primary protocol is BLE GATT (`helper/Constant.java` Uniden service UUIDs) plus `assets/R.json` settings byte map. Wi-Fi path exists for firmware (`WifiSettingActivity`, `FirmWareUpdateWorker`).
