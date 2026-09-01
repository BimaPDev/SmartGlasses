# R/TACH 1.0.9 network API

Package `com.uniden.rtach` (flavor `uniden`, versionName `1.0.9`, versionCode 14) is a BLE radar companion. There is **almost no cloud API besides `www.unidenup.com`**. That is the real outcome: no login, no user accounts, no Retrofit service, no REST resource tree, and no Authorization headers in first-party code.

The only first-party HTTP client is **OkHttp 4.10.0** (`okhttp3.OkHttp.VERSION`). Hilt `AppModule` does not provide an `OkHttpClient`. Workers and the firmware ViewModel construct a default client per call. AndroidManifest grants `INTERNET` and `ACCESS_NETWORK_STATE`; the `<application>` tag has neither `usesCleartextTraffic` nor a `networkSecurityConfig`. Every hardcoded first-party URL is `https`.

## Scan method

Scoped to `decompiled/sources/com/uniden/rtach` (not libraries). `find-api-calls` is not present under Uniden. Search used `https?://`, `OkHttpClient`, `Request.Builder`, Retrofit/Volley/`HttpURLConnection`. Retrofit, Volley, and `HttpURLConnection` do not appear in the app package. Library OkHttp (Play/Firebase/Glide) is out of scope for this leaf.

`WifiSettingActivity` is **not** an HTTP client: it scans local SSIDs and writes BLE `BTreqGWAP:` / `BTreqSWAP:<ssid>,<password>`. The radar may later fetch firmware over its own Wi-Fi using a URL the phone handed it.

## Tier 1 — Host | Method | Path | Auth | Source file

| Host | Method | Path | Auth | Source file |
|------|--------|------|------|-------------|
| `www.unidenup.com` | GET | `/R_series_latest_ver_info.json` | none | `decompiled/sources/com/uniden/rtach/BuildConfig.java`, `helper/firmware_update/FileReadWorker.java` |
| `www.unidenup.com` | GET | `/R4W/R4W_latest.bin` | none | `helper/Utils.java` (`getFirmwareURL`); JSON `firmware_url` |
| `www.unidenup.com` | GET | `/R4/R4_latest.bin` | none | `helper/Utils.java` catalog (live JSON `firmware_url` is empty) |
| `www.unidenup.com` | GET | `/R8W/R8W_latest.bin` | none | `helper/Utils.java`; JSON `firmware_url` |
| `www.unidenup.com` | GET | `/R8/R8_latest.bin` | none | `helper/Utils.java` catalog (live JSON `firmware_url` is empty) |
| `www.unidenup.com` | GET | `/R9W/R9W_latest.bin` | none | `helper/Utils.java`; JSON `firmware_url` |
| `www.unidenup.com` | GET | `/R9/R9_latest.bin` | none | `helper/Utils.java`; JSON `firmware_url` |
| `www.unidenup.com` | GET | `/AE903i/AE903i_latest.bin` | none | `helper/Utils.java`; JSON `firmware_url` |
| `uniden.com` | GET | `/pages/app-policy` | none | `p005ui/activity/WebViewActivity.java` |
| `uniden.com` | GET | `/policies/terms-of-service` | none | `p005ui/activity/WebViewActivity.java` |
| `www.uniden.info` | GET (href only) | `/download/` | none | `p005ui/activity/FirmwareUpdateActivity.java` (HTML link, not OkHttp) |

Live catalog keys also include `R4NZ`, `R4IL`, `R8NZ`, `R8IL` with empty `firmware_url`. Those hosts/paths are not hardcoded in Java; the app would GET whatever string the JSON supplies.

`.bin` rows are the documented download targets, not a claim that every model currently hosts a file. `Utils.getFirmwareURL(name)` is **uncalled** from other classes; the live download URL is `StoreUserData.getLatestFirmwareUrl()` from the version JSON.

---

## Architecture of first-party HTTP

```
GATT READ_SOFTWEAR_VERSION
  → FirmwareUtils.readLatestFirmwareVersions(ctx, Utils.getFirmwareUpdateURL(ctx))
    → WorkManager FileReadWorker (OkHttp GET version JSON)
      → parse model object → SharedPreferences latest_version + firmware_url
      → Utils.checkIfUpdateAvailable()

FirmwareUpdateActivity.doUpdate()
  Wi-Fi radar: BLE BTdnSTWFU:<updateType>,<updateMode>,<firmware_url>
                (phone does not GET the .bin; device does)
  BT radar:     FirmwareUpdateViewModel.downloadFile(firmware_url)
                (OkHttp GET .bin → filesDir/Uniden/Firmware/uniden_firmware_file.bin)
                → FILE_DOWNLOAD_COMPLETE → updateFirmware() → FirmWareUpdateWorker (BLE flash, no HTTP)
```

`Utils.getFirmwareUpdateURL` returns `BuildConfig.LATEST_FIRMWARE_VERSION_CHECK_URL` unless a locally picked test JSON set `isfileExist` and `testjsonFirmwareURL`.

There is no interceptor, cookie jar, certificate pin, or `addHeader` in `com.uniden.rtach`. Auth is none.

SDK-owned traffic (Firebase Analytics/Crashlytics, Play Maps tiles, measurement) is not a first-party API and is inventoried by leaf 1.9.

---

## Tier 2 — firmware version check

### `GET /R_series_latest_ver_info.json`

- **Source**: `FileReadWorker.doWork()` in `decompiled/sources/com/uniden/rtach/helper/firmware_update/FileReadWorker.java` (compiled from `FirmwareUtils.kt`). Constant: `BuildConfig.LATEST_FIRMWARE_VERSION_CHECK_URL` = `https://www.unidenup.com/R_series_latest_ver_info.json`, copied into `Constant.LATEST_FIRMWARE_VERSION_CHECK_URL`.
- **Client**: `new OkHttpClient().newCall(new Request.Builder().url(fileUrl).build()).execute()`. Default method is GET. No headers, no body, no timeouts overridden.
- **Trigger**: `BaseApplication` GATT callback on `READ_SOFTWEAR_VERSION` stores `currentFirmwareVersion` then enqueues `FileReadWorker` with WorkData key `fileUrl`.
- **Response**: JSON object keyed by BLE device-name prefix (substring before `@`). Each child has:
  - `latest_version` (slash-separated component versions)
  - `firmware_url` (absolute https URL or empty string)
- **Observed keys** (public JSON, documented only): `R4`, `R4NZ`, `R4IL`, `R4W`, `R8`, `R8NZ`, `R8IL`, `R8W`, `R9`, `R9W`, `AE903i`. Hosted on Amazon S3 + CloudFront (`server: AmazonS3`).
- **Lookup**: `optJSONObject(deviceName.substringBefore("@"))`. Missing key → worker `Result.failure()` and log `Device info not found`.
- **Persistence**: `StoreUserData.setLatestFirmwareVersion` / `setLatestFirmwareUrl`. Then `Utils.checkIfUpdateAvailable` compares slash-split integers against the GATT current version and sets per-component flags on `VersionUpdateModel`.
- **Override**: `DashboardActivity` file picker reads a local JSON and stores `firmware_url` as `testjsonFirmwareURL`. That replaces the check URL in `getFirmwareUpdateURL`, not the `.bin` path itself.
- **Called from**: `FirmwareUtils.readLatestFirmwareVersions` → `FileReadWorker` → main-thread `checkIfUpdateAvailable`. `DashboardActivity.REMOTE_FILE_URL` holds the same BuildConfig URL but is unused after construction.

---

## Tier 2 — firmware download

### `GET <firmware_url>` (typical `/<MODEL>/<MODEL>_latest.bin`)

- **Source (phone HTTP)**: `FirmwareUpdateViewModel.downloadFile(url)` in `decompiled/sources/com/uniden/rtach/viewmodel/FirmwareUpdateViewModel.java`. jadx skipped the Java body (`JadxOverflowException`); fallback bytecode shows:
  1. Ensure `context.filesDir/Uniden/Firmware/` exists; delete existing `uniden_firmware_file.bin`.
  2. `new OkHttpClient.Builder().build()` then `Request.Builder().url(url).build()` then `execute()`.
  3. Non-success or null body → `FILE_DOWNLOAD_FAIL` and throw (`"Failed to download: "` / `"Empty response body"`).
  4. Stream `ResponseBody.byteStream()` in 8192-byte chunks to `FileOutputStream(getFirmwareFilePath())`. Progress = `bytesDownloaded * 100 / contentLength`.
  5. Success → `FILE_DOWNLOAD_COMPLETE`.
- **URL origin**: `getSharedPrefs().getLatestFirmwareUrl()` from the version JSON, not `Utils.getFirmwareURL` (dead catalog that still matches several live `firmware_url` values).
- **Local path**: `Utils.getFirmwareFilePath` → `{filesDir}/Uniden/Firmware/uniden_firmware_file.bin`.
- **Caller**: `FirmwareUpdateActivity.updateFirmwareForBTModel` when the radar is not on Wi-Fi, or when it is a Wi-Fi model but phone internet is up and radar Wi-Fi is disconnected. `getFirmwareUpdateProcessBT()` `FILE_DOWNLOAD_COMPLETE` then calls `getViewModel().updateFirmware()` (WorkManager `FirmWareUpdateWorker`).
- **Auth**: none. No query params. Path is whatever the JSON said.
- **Wi-Fi radar path (not phone HTTP)**: `updateFirmwareForWiFiModel` writes BLE `BTdnSTWFU:` + `updateType,updateMode,firmware_url`. Progress then arrives as GATT `RDrptDSTS` / `RDrptDEND`. `FirmWareUpdateWorker` reads the local `.bin` and flashes over BLE; it has **no** OkHttp imports.
- **Empty `firmware_url`**: live JSON leaves `firmware_url` blank for several non-W models (e.g. `R4`, `R8`). `FirmwareUpdateActivity` then toasts `"Download Url not found!!!"` if the stored string is empty. PC-tool HTML points at `https://www.uniden.info/download/` for those cases.

---

## Tier 2 — WebView URLs

### `GET https://uniden.com/pages/app-policy` and `GET https://uniden.com/policies/terms-of-service`

- **Source**: `WebViewActivity.showWebViewWithUrl` in `decompiled/sources/com/uniden/rtach/p005ui/activity/WebViewActivity.java`.
- **Client**: Android `WebView.loadUrl`, not OkHttp. `setJavaScriptEnabled(true)` and a default `WebViewClient`.
- **UI**: About screen (`txtAppBarTitle` = `"About"`, version `"Version 1.0.9"`). Privacy / Terms clicks swap the layout to the WebView. Back hides the WebView rather than finishing if it is visible.
- **Intent**: launched from `DashboardActivity` (`startActivity(WebViewActivity)`). Activity is `exported="false"`.
- **Auth**: none. These are public marketing/legal pages, not an API.

`FirmwareUpdateActivity` also embeds an HTML `<a href="https://www.uniden.info/download/">` for the PC R/TACH Tool. The WebView does not load that host; it is a user-facing hyperlink.

---

## Negative inventory (valid empty cloud API)

First-party `com.uniden.rtach` has:

- No Retrofit `@GET`/`@POST` interfaces.
- No Bearer/Basic/`Authorization` headers.
- No account, telemetry-to-Uniden, or map-tile REST written by Uniden.
- No first-party cleartext http URLs. OkHttp is used only for the two firmware GETs above.
- `ConnectivityReceiver` only observes `CONNECTIVITY_CHANGE`; it does not call a host.
- `Utils.getFirmwareUrlAndAP` writes BLE `BTreqGURL:` then `BTreqGWAP:` — it asks the radar, not a cloud host.

Wi-Fi on the phone is a local AP picker plus BLE credential handoff, not a Uniden HTTP endpoint.
