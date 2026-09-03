# MYVU AR 1.1.28 (iOS) — Reverse-Engineering Writeup

Integrated analysis of `Reverse/MYVU_AR_1.1.28.ipa`, unpacked to
`Reverse/IPA/extracted/Payload/XJOverSeas.app/` (398 MB, 4,937 files). This document
synthesizes thirteen domain reports under `Reverse/IPA/`; every claim below is backed
by a measured finding in the per-domain report it cites. The `analysis-1` subagent wave
failed on Cursor usage limits and was completed via driver local fallback. See
`INDEX.md` for the full report map.

## 1. Identity

| Field | Value | Source |
|---|---|---|
| Display name | MYVU AR | `extracted/Payload/XJOverSeas.app/Info.plist` |
| Bundle id | `com.upuphone.overseas` | Info.plist |
| Executable | `XJOverSeas` | Info.plist |
| Version | 1.1.28 (build 407081002) | Info.plist |
| Min iOS | 13.0 | Info.plist |
| Team | `K72D494553` | `recon/entitlements.xml` |
| Vendor | XINGJI / Meizu (Star / MYVU glasses) | `Frameworks/StarryNet.framework/Devices.xml` |

This is the **overseas** ("OverSeas") build of the companion app for XINGJI/Meizu MYVU
AR smart glasses, sibling to the Android `com.upuphone.star.launcher.intl` build.

## 2. FairPlay encryption — the hard limit on this analysis

The App Store IPA is **FairPlay-DRM encrypted**. The main binary `XJOverSeas`
(`LC_ENCRYPTION_INFO_64`, cryptoff 32768, cryptsize 36,405,248, **cryptid 1**), the
Flutter AOT snapshot `Frameworks/App.framework/App` (cryptid 1, cryptsize 17,596,416),
the Flutter engine `Frameworks/Flutter.framework/Flutter` (cryptid 1), and **all 99
embedded frameworks** carry cryptid 1 (`recon/frameworks.csv`, verified by `otool -l`).

Consequently the `__TEXT` code pages cannot be disassembled or class-dumped from this
IPA without a decrypted dump from a jailbroken device. **No leaf claims to have
decrypted or dumped native code.** Everything below was recovered from *unencrypted*
regions only: Info.plist / entitlements, resource `.bundle`s, Flutter `flutter_assets`,
`.lproj` localization, `.html`/`.json`/`.pag` assets, one plaintext vendor XML
(`StarryNet.framework/Devices.xml`), a small error-string table in `__DATA_CONST`, and
`__LINKEDIT` symbol tables (recoverable with `nm` + `swift-demangle`). This is why the
network, BLE, and OTA maps have visible *gaps* where the logic lives in ciphertext.

## 3. Application architecture

- **Flutter app** (`flutter/FLUTTER.md`): iOS AOT linked into `App.framework/App`;
  engine is Impeller-era (Fuchsia clang 18.0.0, `InternalFlutterGpu_*` symbols).
  `flutter_assets` holds 351 asset keys, 140 images, 100 SVGs, 60 localized policy
  HTML pages, 23 Tencent PAG animations, KaTeX fonts, and a 1,099-block `NOTICES.Z`.
- **Thin native shim** (`strings/STRINGS.md`): the main binary defines *zero* local
  ObjC classes — it is a Flutter runner. Alamofire and **Google ML Kit** are statically
  linked directly into `XJOverSeas`.
- **99 frameworks** (`frameworks/FRAMEWORKS.md`, 149 MB total) across: vendor
  (StarryNet, StarryCast, StarryCastCommon, ble2301, XJNetWork), BLE/DFU
  (flutter_blue_plus, NordicDFU, nordic_otas_plugin), networking (Alamofire,
  AFNetworking, SwiftNIO/CNIO*, CocoaAsyncSocket), maps (heresdk), crypto (CryptoSwift),
  analytics (AmplitudeSwift, Firebase, AnalyticsConnector), cloud (AliyunOSSiOS), and UI
  (DKImagePicker, Lottie, libpag, Aztec …). `XJNetWork` is a renamed AFNetworking fork.

## 4. Device family

`StarryNet.framework/Devices.xml` (plaintext) is the vendor device catalog: company
`XINGJI` / `XINGJI-intl`; models **Star Concept, Star, Star Air, Star Air pro** (+ intl
variants), **Ring2** (+ intl), **Unicron**. Localization and asset filenames add a
**View** model (`glass_icon_view.png`, `ic_faq_starv_view.png`) and a "MYVU ble" marker
(`ble/BLE.md`). `MP12`, standalone `StarV`, and `Uniden` were **not** found in the IPA.

## 5. Connectivity & pairing (BLE / cast)

The BLE protocol lives in FairPlay-encrypted binaries, so **no 128-bit GATT UUIDs are
recoverable** from the IPA (`ble/BLE.md`). Demangled `__LINKEDIT` symbols from
`StarryNet` (`strings/STRINGS.md`) nonetheless expose the API shape without values:

- `CoreConnect` — a BLE / Wi-Fi-AP / cast facade.
- `RingSecurityPair` — a TLV pairing scheme with field names `KEY_PUBKEY`, `KEY_IV`,
  `KEY_MACADDR` (values not recoverable — they are computed in encrypted code).
- `WifiApInfo(ssid:psk:…)` and `CastResultCode` (~20 named cast-pipeline error cases).

Cross-referenced against the repo's own `Sources/MyvuCore/Transport/BLE/Uuids.swift`:
the IPA corroborates MyvuCore at the brand/library level (StarryNet, "MYVU", "Star Air")
but **cannot confirm the hex UUID constants** — a FairPlay gap, not a protocol conflict.

## 6. Backend / network

`network/NETWORK.md` — endpoints visible in unencrypted resources:

| Host | Purpose |
|---|---|
| `xj-platform-global.flyme.com` (`/fms/policy/*`) | Flyme account + policy CMS |
| `1.aerial.maps.ls.hereapi.com`, `traffic.vector.hereapi.com` | HERE map/traffic tiles |
| `gcaptcha4.geetest.com`, `static.geetest.com`, `monitor.geetest.com` | GeeTest captcha |
| `lbs.amap.com` | AMap (disclosure/privacy only) |
| `aispeech.com` / `cloud.aispeech.com` | Cloud ASR vendor (disclosure) |
| Vertex AI / Gemini-1.5-Pro | LLM for the "Interpreter" feature |
| Firebase project `xr-231206-13a9a` | `GoogleService-Info.plist` (analytics/ads disabled) |

The **`*.myvu.cn` backend tier is invisible on iOS**: `myvu_config_plugin.framework`
and `AliyunOSSiOS.framework` are themselves cryptid 1, so the config-gateway, AI, and
OSS hosts are encrypted away. Global ATS is disabled (`NSAllowsArbitraryLoads=true`).

## 7. Accounts / auth

`auth/AUTH.md` — **Flyme/Meizu account is primary** (`FlymeAccountUI.bundle`: phone+SMS,
password, WeChat/Apple bind, real-name verification; provider = Zhuhai Meizu). **GeeTest
GTCaptcha4** v1.8.2 (WKWebView). **Lark/Feishu SSO** bundle v1.1.17 is present but inert
(only `Assets.car`; one `xj_feishu` symbol). Inbound scheme `xjmz://`; only `qqmusic` is
queried; single app-private keychain group; no associated-domains (OAuth uses the scheme).

## 8. Voice / AI assistant

`assistant/ASSISTANT.md` — a substantial **on-device** stack (~56 MB of models):

- `XJASR.bundle`: offline ASR — `encoder.onnx` (39.6 MB) + `decoder.onnx` + `ctc.onnx`,
  8,404-token vocab, Chinese ITN FSTs (WeNet/FunASR-style U2 conformer).
- `XJVAD.bundle`: VAD / wake-word / CAM++ speaker-verification ONNX; wake phrase
  `"ni hao xiao mu"` across 7 configs.
- `XJNLG.bundle`: canned TTS response templates keyed by `functionId`.
- Cloud path: `aispeech.com` ASR + Vertex AI Gemini for the Interpreter's extraction/
  to-do generation. Features: Voice/Meeting assistant, Interpreter, Translator
  ("MYVU 翻译官"), Speech-to-Text, Prompter/teleprompter.

## 9. Notifications (ANCS mirroring)

`notifications/NOTIFICATIONS.md` — phone-alert mirroring to the HUD via ANCS →
app → BLE. Evidence: 8 `xj_smart_notice_*.pag` libpag animations (air/star × en/zh/ar),
`aps-environment=production`, bluetooth-central/peripheral + remote-notification
background modes, and ANCS opt-in strings (`openANCSAlertTitle`, WeChat quick-reply
"正在微信回复中"). The BLE payload format itself is encrypted and not visible.

## 10. Maps / navigation

`maps/MAPS.md` — **HERE SDK `com.here.sdk` 4.17.0** is the sole active renderer (~57 MB,
cryptid 1, voice/traffic assets). **AMap** appears only as a region-gated compliance
artifact (privacy disclosure + an untranslated `NSMotionUsageDescription`); no AMap
framework is linked. `xjsdmap.sqlite` at the app root is an empty stub. Navigation is
disabled in China/Korea/Russia by localized string logic.

## 11. Firmware / OTA

`ota/OTA.md` — firmware transport is **Nordic DFU** (`NordicDFU.framework` = IOS-DFU-
Library v4.15.3) driven by `nordic_otas_plugin` (`NordicOtasPlugin` MethodChannel:
`searchDevice`/`startOta`/`setFilePath`), confirmed linked into `XJOverSeas`. Ring OTA
UI assets exist (`icon_ring_ota.png`, `ring2_ota_upgrading.pag`). **No iOS OTA
host/endpoint, `checkV2` handshake, or HMAC key is recoverable** — all encrypted.

## 12. iOS vs Android

`android-compare/COMPARE.md` diffs iOS 1.1.28 overseas against Android MYVU AR 2.40.51
intl (`com.upuphone.star.launcher.intl`). **Same on both:** Flutter architecture, the
BLE stack (flutter_blue_plus + ble2301 + Nordic DFU), HERE as sole maps SDK, Flyme
account + GeeTest captcha + dormant Lark SSO. **Different:** analytics/crash (iOS
Amplitude + Firebase-disabled + KSCrash vs Android Bugly + `xr-datatrack`); assistant
(iOS ships on-device ONNX models, Android's documented path is cloud-only). The Android
teardown documents the full `*.myvu.cn` tier and the OTA signing/`checkV2` scheme
(`Reverse/FINDINGS.md`, `xr-nbs.myvu.cn` / `xr-nbs-global.myvu.cn`); on iOS those rows
are marked **"cannot confirm"** because FairPlay hides them — an evidence asymmetry, not
a design difference.

## 13. Bottom line

MYVU AR for iOS is a Flutter app over a Meizu/XINGJI-vendored native core (StarryNet
BLE/cast, XJNetWork, Nordic DFU, HERE maps, on-device ONNX voice), fronted by a Flyme
account and a mostly-cloud AI assistant. Static analysis fully maps the **resource,
asset, SDK, and account** surface. The **wire protocols** — GATT UUIDs, `RingSecurityPair`
key material, `*.myvu.cn` API hosts, and the OTA/`checkV2` handshake — remain sealed
behind FairPlay in this store IPA and would require a decrypted (jailbreak) dump or the
more-readable Android build (already partially mapped in `Reverse/FINDINGS.md`) to
recover. No FairPlay protection was broken in producing this report.

IPA_WRITEUP_COMPLETE
