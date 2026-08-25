# Reverse-engineering findings — MYVU AR 2.40.51 (intl)

Source: `Reverse/MYVU+AR_2.40.51_APKPure.xapk` (APKPure XAPK)

## Package layout

| File | Content |
|---|---|
| `com.upuphone.star.launcher.intl.apk` | base APK, 8 DEX, assets incl. `flutter_assets` |
| `config.arm64_v8a.apk` | native libs: `libapp.so` (Flutter AOT), `libflutter.so`, `libheresdk.so` (HERE maps), `libonnxruntime.so`, `libeasyopus.so`, `libpag.so`, `libmmkv.so`, Bugly |
| `config.mdpi.apk` | density resources |

- package: `com.upuphone.star.launcher.intl`, versionName `2.40.51` (versionCode 2040051), minSdk 29 / targetSdk 34
- Flutter module version string: `com.xjmz.myvu:flutter_release:2.40.0-SNAPSHOT`
- main activity: `com.upuphone.xr.sapp.superconnect.ui.SplashActivity`

## Firmware download — the OTA API (main result)

There is **no static firmware URL** in the app. Firmware links are handed out
dynamically by a signed OTA API; the response field `packLink` / `packLink2`
(CDN URL of the update package, plus `digest` and `fileSize` for verification).

### Endpoints (all live, verified)

| Environment | Base URL (`sArOta`) |
|---|---|
| China prod | `https://xr-nbs.myvu.cn/ar-ota` |
| China UAT | `https://xr-nbs-uat.myvu.cn/ar-ota` |
| Intl prod | `https://xr-nbs-global.myvu.cn/ar-ota` |
| Intl UAT | `https://xr-nbs-global-uat.myvu.cn/ar-ota` |

Paths:
- `POST /client/v1/arupgrade/check` — glass update check (v1)
- `POST /client/v1/arupgrade/checkV2` — glass/ring update check (v2, current)
- `POST /client/v1/arupgrade/notify` — report update result
- `POST /client/v1/super-app/latest-version/v2` — app (APK) update check

### Request (form-urlencoded POST)

`checkV2` fields (from `CheckGlassUpdateParamV2`):
`deviceType`, `deviceId`, `version`, `deviceModel`, `buildType`, `versionType`,
`timestamp` (epoch ms), `lang` (e.g. `en_US`), `appVersion` (e.g. `2.40.51`),
`depDeviceType`, `depDeviceVersion` (mandatory for rings), `deviceIdEncrypted`,
`os`, plus `sign`.

- `deviceType` observed constants: `View` (Vu glass, hardcoded in
  `VuGlassUpdateHelper`), `Ring` (server: "指环类设备必须传依赖设备和依赖版本号"
  if dep params missing). Air glasses (XGA010C) check from the Flutter side.
- `deviceId` = `sha256_hex("RhdNS`Z?" + glassSerialNumber)`
  (`DataTrackUtil.f`), sent with `deviceIdEncrypted=true`.
- `version` = glass ROM version; `buildType=user`, `versionType=release`.

### Signing (`com.upuphone.star.httplib.SignUtils`)

```
sign = hex( HMAC_SHA256(
    key = UTF8("wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI="),
    msg = "k1=v1&k2=v2&..."   # all fields except sign, sorted by key
) )
```

Working client: `Reverse/tools/probe_ota2.py` (signing verified — server
answers `{"code":0,"msg":"success"}`; a bad signature yields
`9100001 签名校验不通过`).

### Response `data`

`existsUpdate, latestVersion, packLink, packLink2, digest, fileSize,
releaseNote, releaseDate, forceUpgrade, upgradeModePolicy, childRoms,
supportFrom, supportTo, userScope, inspectionScope, ...`

All probed combinations (View / Air / Ring / Ring2 / XGA010C / XGA020C ×
versions 0–2.x, CN + intl) currently return `existsUpdate:false` — either no
active rollout for those versions, or rollouts are scoped by real device
identity / known ROM versions (`supportFrom`/`supportTo`, gray release).
The next time a real update exists, the firmware URL appears verbatim in
`packLink`.

## Server config block (embedded in classes4.dex)

Full per-environment matrix — `china_prod`, `china_uat`, `intl_prod`,
`intl_uat` — with these services:

- `nbsUrl` / `sArOta` / `sAccountService` / `sXrMenu` / `sXrWeather` /
  `xrDatatrack` / `cloudAdapterService` / `myvuConfigService` → `xr-nbs[-global][-uat].myvu.cn`
- `kmUrl`, `sWeatherKm`, `sApisixKm` → `km[-uat].myvu.cn` / `kmglobal[-uat].myvu.cn`
- `sMyvuAuth`, `sNbsSurvey`, `feedbackService`, `myvuRecordService`,
  `myvuFileService` → `gw[-global][-uat].myvu.cn`
- `mixtureUrl` → `mixture[-global][-uat].myvu.cn`
- `aiRecordUrl` → `airecords[-global][-uat].myvu.cn`
- ASR websocket: `wss://km[global][-uat].myvu.cn/auth/central-manager/ws`
- account deletion: `https://account.flyme.cn/user/cancel` /
  `https://account.in.meizu.com/usercancel`

Per-env credentials (app-level, shipped in the binary):

| env | appId | ak | sk |
|---|---|---|---|
| china_prod | `IKSoISndT` | `myvu-android` | `0716b566f23cd0e6` |
| china_uat | `IKSoISndT` | `myvu-app` | `afc40ef9b01d8908` |
| intl_prod | `elS8JURA` | `myvu-android` | `05993e4fc09d8922` |
| intl_uat | `XNS9EoTs` | `myvu-app` | `8124aaeeabc2d872` |

plus `userKey` / `userSecret` UUIDs per env (see
`extracted/server-config-block.txt`).

## Other notable findings

- Device IDs seen: subModels `XGA010C`, `XGA020C`; glass model `Star Air`;
  product families: View / Air (StarV View, StarV Air2), Ring / Ring2,
  "Discovery", "Unicron" (`UnicronUpdateHelper`).
- BLE/SPP protocol buffers at APK root: `connect_message.proto`,
  `connect_msg_api.proto`.
- Ring firmware update uses Nordic DFU (`no.nordicsemi.android.dfu`) after
  downloading via the same OTA API.
- WeChat appid: `wxd24348f1821a2905`.
- App download page: `https://www.myvu.cn/app-get/download.html`;
  product page `https://www.meizu.com/myvu`.
- StarryNet config CDN: `https://safe-apk.mzres.com/pack/cdnresource/starrynet/st_configs.json`.
- Ring deep link: `flyme.global/products/starvring2`.
- App-update check: `POST {sArOta}/client/v1/super-app/latest-version/v2`
  (params incl. `lang`, `uuid`, app version) — signed the same way.
- Crash reporting: Tencent Bugly; maps: HERE SDK; auth: Flyme/Meizu account
  OAuth (`i.in.meizu.com`, `api/v2/oauth/user/login/flyme/token`).

## Artifacts produced

- `Reverse/extracted/` — unzipped XAPK + exploded APKs
- `Reverse/extracted/urls-dex.txt` — all URLs found in DEX
- `Reverse/extracted/server-config-block.txt` — full env config dump
- `Reverse/extracted/GlassUpdateApiManager.smali`, `SignUtils.smali`,
  `signing.smali`, `AirGlassOtaApiImpl.smali`, `checkV2-callers.smali`
- `Reverse/tools/probe_ota.py`, `probe_ota2.py`, `probe_real.py`,
  `sweep*.py` — signed OTA probe clients
- `Reverse/tools/*.py` — androguard disassembly helpers (venv in
  `Reverse/tools/venv`)
