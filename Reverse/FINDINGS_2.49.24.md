# Reverse-engineering findings — MYVU 2.49.24 (STARV_MP12)

Source:
`MYVU_phoneThird_2.49.24_STARV_MP12_8ead890fe_20260112_0439_2049024-260112052407-reinforced.apk`

Analysis date: 2026-08-21

## Identity and integrity

- Package: `com.upuphone.star.launcher`
- App label: `MYVU`
- Version: `2.49.24` (`versionCode 2049024`)
- Minimum / target SDK: 29 / 33
- Main activity: `com.upuphone.xr.sapp.superconnect.ui.SplashActivity`
- APK size: 506,242,348 bytes
- MD5: `53f0ca2e99132319c6a0d81944cdeec0`
- SHA-256:
  `2850efc40a119943d0b8e0960dedb933905be5c04158d019725bdc5890f7a6f9`
- Extracted tree: `Reverse/extracted2/` (about 724 MB)
- Flutter AOT strings: `Reverse/libapp2-strings.txt`

The OTA app-update API independently returned the same file size and MD5, so the
local APK is byte-for-byte the published China production build.

Signing certificate:

- Subject/issuer: `CN=Xingji Meizu XR, OU=Xingji Meizu XR,
  O=Xingji Meizu Group, L=Wuhan View, ST=Hubei, C=CN`
- Email: `xrdeveloper@xjmz.com`
- Valid: 2023-09-18 through 2051-02-03
- Certificate SHA-256:
  `5ae961707f10edcbf2ce0a60be9904da12307a4e6a219ea7f985adee41d4b697`

## Protection and extraction limits

This is the "reinforced" build named in the filename. It uses an Ijiami-style
loader:

- The only top-level DEX is a 13,316-byte shell containing `s.h.e.l.l.*`.
- `AppComponentFactory` is replaced by `s.h.e.l.l.A`.
- Bootstrap strings reference `com.ijm.dataencryption.DETool`,
  `assets/ijm_lib/*/libexec.so`, and `libexecmain.so`.
- The protected Java/Kotlin payloads include `assets/ijiami.dat` (about 19 MB)
  and `assets/ijiami.ajm` (about 8.2 MB).
- The manifest names the original application as
  `com.upuphone.xr.sapp.MainApplication`.
- Original Java/Kotlin bytecode is unpacked at runtime, so a normal JADX/static
  DEX decompile will only show the loader.

The Flutter AOT payload is not encrypted in the same way. Its strings expose
application models, Dart source paths, API routes, environment configuration,
device models, and Pigeon platform-channel names. Those are the main source of
the findings below.

## Exact APK download link

The signed China production app-update endpoint currently returns this exact
2.49.24 APK:

```text
https://xr-nbs.oss-cn-shanghai.aliyuncs.com/ar-ota/tmp/20260123-ce15658a-f3a2-4449-8858-1355fdcf2380/MYVU_phoneThird_2.49.24_STARV_MP12_8ead890fe_20260112_0439_2049024-260112052407-reinforced.apk?Expires=3065135844&OSSAccessKeyId=LTAI5tBMY1V4WwUn4BuRM3j1&Signature=fALzRZY0hUzbW0Rvoi%2BR7ejHl%2Fk%3D
```

API:

```text
POST https://xr-nbs.myvu.cn/ar-ota/client/v1/super-app/latest-version/v2
```

The server reports:

- `latestVersion`: `2.49.24`
- `downloadLink`: URL above
- `apkSize`: `506242348`
- `digest`: `53f0ca2e99132319c6a0d81944cdeec0` (MD5)
- `packageName`: `com.upuphone.star.launcher`

Release note, translated:

1. Fix compatibility problems that caused corrupted/blue Snap captures on some
   phones.
2. Fix abnormal importing of Snap capture files in some states.
3. Fix compatibility problems with some AR glasses and rings.

This URL downloads the **phone companion APK**, not glasses firmware.

## Glasses firmware OTA

There is no static firmware URL in the APK and no complete firmware image
bundled under `assets/` or `lib/`. The app asks the OTA service for a package,
and the service only supplies a URL while an update is eligible for the
specific device/version/rollout.

Current routes, unchanged from 2.40.51:

```text
POST {sArOta}/client/v1/arupgrade/checkV2
POST {sArOta}/client/v1/arupgrade/notify
```

The corresponding strings occur in `libapp.so` at offsets `0xe5f3d` and
`0x91c7f`. This build also contains `ota/query_file` (`0x63c4f`) and
`ota/upload_file` (`0xc4bac`). No `checkV3` or separate v1
`client/v1/arupgrade/check` route is present in the inspectable payload.

Production bases:

```text
China: https://xr-nbs.myvu.cn/ar-ota
Intl:  https://xr-nbs-global.myvu.cn/ar-ota
```

Update-check fields:

```text
appVersion, buildType, deviceId, deviceIdEncrypted, deviceModel,
deviceType, lang, timestamp, version, versionType, sign
```

The visible AOT strings plus the live server response establish this response
schema:

```text
existsUpdate, updateType, videoPath, fileSize, packLink, packLink2,
digest, latestVersion, releaseNote, releaseDate, buildType, deviceModel,
versionType, images, compileDate, inspectionScope, supportFrom, supportTo,
userScope, versionFullName, upgradeModePolicy, forceUpgrade, forceSwitch,
childRoms
```

Signing remains compatible with the previously recovered algorithm:

```text
sign = hex(HMAC-SHA256(
  key = "wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI=",
  message = all non-sign fields joined as k=v, sorted by key
))
```

This is verified server behavior: the old key authenticates a 2.49.24 request,
while a bad key returns code `9100001` (signature verification failed). The key
is not present verbatim in the inspectable files, so its storage or derivation
inside the iJiami-encrypted payload is not statically recovered.

For a serial number, the encrypted device ID remains:

```text
deviceId = sha256_hex("RhdNS`Z?" + glassSerialNumber)
deviceIdEncrypted = true
```

The salt remains visible in this build at `libapp.so` offset `0x29737e`, along
with `StringExtensions|sha256Hex` at `0x1642e0`. Their direct call relationship
is inferred from the older recovered implementation rather than decompiled
2.49.24 code.

The current production servers accepted correctly signed checks for both China
and international environments. Checks made with the available XGA010C device
identity and exact ROM
`Flyme XR 1.0.12.88.20250217_Air_FR` returned:

```json
{"code":0,"msg":"success","data":{"existsUpdate":false,"packLink":null,"packLink2":null}}
```

Checks for the newly exposed `XGZ030C` and `XGG010C` model strings across common
version values also returned `existsUpdate:false`. Therefore, a genuine
firmware URL was **not available from the server at analysis time**. The link
will appear verbatim in `packLink` or `packLink2` when an active rollout matches
the submitted serial, model, and current firmware.

## Device/product identifiers exposed by 2.49.24

- `XGA010C` — Star Air
- `XGA020C` — newer Air-family model
- `XGZ030C` — StarV Snap camera glasses
- `XGG010C` — StarV View display glasses
- UI/product strings also include StarV Air2, StarV Ring2, Air Pro, Normandy,
  and StarV Snap.

Notable Flutter/platform OTA interfaces:

```text
AirGlassOtaFlutterApi.glassOtaUpdate
AirGlassOtaFlutterApi.startUpdateFile
AirGlassOtaFlutterApi.otaIsNeedShowRedPoint
AirGlassOtaApi.checkIfUpdating
AirGlassOtaApi.onReceiveProgress
AirGlassOtaApi.onUpdateDone
AirGlassOtaApi.onUpdateFailed
AirGlassOtaApi.onWifiStatusChange
```

`file_transfer.proto` also defines `RECEIVE_OTA_FINISH = 13`, confirming that
the downloaded package is transferred to the glasses through the app rather
than installed as an Android APK on the phone.

## Server configuration

The full four-environment configuration remains embedded in the Flutter AOT
snapshot:

- `china_prod`
- `china_uat`
- `intl_prod`
- `intl_uat`

It includes the OTA, account, weather, AI, survey, telemetry, feedback, config,
and websocket hosts plus the same app-level IDs/keys documented in
`Reverse/FINDINGS.md`. The relevant block begins around line 23390 of
`Reverse/libapp2-strings.txt`.

One routing detail corrects the older summary: international feedback and
record traffic still points at China gateways (`gw.myvu.cn` for intl prod;
`gw.myvu.cn` / `gw-uat.myvu.cn` in intl UAT), rather than consistently using
`gw-global`.

## Additional exposed APIs

High-value routes newly inventoried from the 2.49.24 Flutter payload include:

- File transfer: `myvu-file/api/v2/files/presign` and presigned upload URL /
  confirmation / redirect routes.
- AI/history records: `api/v2/client/record/feedback-single-record`,
  `get-session-records`, `get-session`, and `batch-delete-session`.
- Account/policy: `/account-service/privacy/cancel`,
  `/internal/v1/policy?category=`, Flyme OAuth login/token routes.
- Content/config: `/index-flow/client/v1/banner/list` and a ring health-share
  QR-code KVS route.
- Numerous ring health and sport upload/query routes for sleep, temperature,
  heart rate/HRV, blood oxygen, glucose, activity, targets, and calendar data.

The searchable files contain a September 2025 Mozilla CA bundle but no
app-specific certificate pin set or high-confidence custom trust bypass.

## Other high-value observations

- The manifest requests 81 permissions and declares 102 activities, 162
  services, 15 receivers, and 24 providers.
- It requests privileged/system permissions such as `BLUETOOTH_PRIVILEGED`,
  `LOCAL_MAC_ADDRESS`, `NETWORK_STACK`, `READ_PRIVILEGED_PHONE_STATE`, OpenXR,
  and vendor-specific services. Many will only work on privileged Meizu/Flyme
  builds.
- `usesCleartextTraffic=true` is enabled, with a custom network security config.
- Sentry identifies the release as `2.49.24@2049024`; debug and full tracing
  are enabled in manifest metadata.
- The APK carries Flutter plus large AMap, Qualcomm/OpenXR, ArcSoft camera,
  audio, ring DFU, and device-link native libraries.
- Ring2 updates use Nordic OTA/DFU separately from glasses OTA.
- Small bundled `.bin` files are calibration/model resources, not a full
  flashable glasses firmware package.

## Reproduction artifacts

- `Reverse/tools/probe_ota2.py` — signed firmware OTA checks
- `Reverse/tools/probe_real.py` — checks the captured XGA010C identity/ROM
- `Reverse/tools/probe_mp12.py` — probes model IDs added/exposed by this build
- `Reverse/tools/watch_ota.py` — polls until a rollout returns `packLink`
- `Reverse/tools/appupdate3.py` — app-update endpoint request

Do not flash a package based only on a guessed model name. The OTA response can
scope packages by serial, hardware model, current-version range, and child ROM;
using a package for another hardware revision can brick the glasses.
