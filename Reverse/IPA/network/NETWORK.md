# iOS Network / API Map — MYVU AR 1.1.28 (XJOverSeas.app)

Source: `Reverse/IPA/extracted/Payload/XJOverSeas.app`. Built from
`Reverse/IPA/recon/urls-all.txt` (165 unique URLs), `Reverse/IPA/recon/hosts-vendor.txt`,
and targeted greps/`strings`/`plutil` runs against the extracted app tree in this session.

## FairPlay limitation (read this first)

The main binary `XJOverSeas` (`cryptid 1`, `cryptsize 36405248`) and the Flutter AOT
`Frameworks/App.framework/App` (`cryptid 1`, `cryptsize 17596416`) are **FairPlay**-encrypted,
and this session independently re-verified `cryptid 1` on three more embedded frameworks
that are the most likely carriers of real API hosts: `Frameworks/myvu_config_plugin.framework/myvu_config_plugin`,
`Frameworks/AliyunOSSiOS.framework/AliyunOSSiOS`, and the app's own `__TEXT`. Because of
**FairPlay**, none of these `__TEXT` segments can be disassembled or string-dumped from this
App-Store IPA — any live API base URL, request-signing scheme, or config-gateway logic
(the iOS analogue of Android's `NetConfig`/`RequestNetConfigHelper`) is inside encrypted
code and is NOT recoverable here. Everything below was read from genuinely unencrypted
regions only: `Info.plist`/`GoogleService-Info.plist`, `.bundle` resources (HTML, JS,
JSON, strings files), Flutter `flutter_assets/` (JSON/manifest files, not the AOT
snapshot), and `__LINKEDIT` symbol/string tables surfaced by `strings`. Consequently this
map is necessarily a partial, resource-layer view of iOS network behavior, biased toward
third-party SDKs and privacy-policy links that ship as plain text — not the app's own
private API surface.

## HOSTS table

| Host | Purpose / classification | Evidence path |
|---|---|---|
| `xj-platform-global.flyme.com` (`/fms/policy/*`) | Account/policy — Flyme(Meizu) policy CMS serving ~70 distinct policy-doc IDs (privacy policy, EULA, etc.) for the global build | `Reverse/IPA/recon/urls-all.txt` |
| `xj-platform.flyme.com` (`/fms/policy/*`, incl. `/pdf`, `/nocache/`) | Account/policy — same Flyme policy CMS, non-"-global" (CN-facing) variant, PDF + nocache endpoints | `Reverse/IPA/recon/urls-all.txt` |
| `www.meizu.com/privacy-policy`, `meizu.com` | Account/policy — Meizu corporate privacy policy link (Flyme account is Meizu's SSO) | `Reverse/IPA/recon/urls-all.txt`, `Reverse/IPA/recon/hosts-vendor.txt` |
| `1.aerial.maps.ls.hereapi.com/maptile/2.1/.../satellite.day/` | Maps — HERE SDK aerial/satellite map tiles | `Reverse/IPA/recon/urls-all.txt` |
| `traffic.vector.hereapi.com/v2/traffictiles/flow/mc/`, `.../incident/mc/` | Maps — HERE SDK vector traffic-flow and incident tiles | `Reverse/IPA/recon/urls-all.txt` |
| (broader `*.hereapi.com`) | Maps — full HERE SDK is embedded as `Frameworks/heresdk.framework` with per-region `geoviz/*` scene configs (japan, oslo, row) shipped as plaintext JSON | `Frameworks/heresdk.framework/geoviz/*/mapscene.config.json` (file listing, this session) |
| `lbs.amap.com/pages/privacy/` | Maps (China alt) — AMap/AutoNavi privacy page; no AMap SDK framework or `autonavi`/`amap` SDK strings found anywhere else in the bundle — reference appears to be policy-text-only on iOS. Note `Info.plist` still carries a Chinese AMap-style motion-permission string (`NSMotionUsageDescription` = "用于高德获取运动与健身...") left over from a shared codebase | `Reverse/IPA/recon/urls-all.txt`; `Info.plist` (`plutil -p`, this session) |
| `gcaptcha4.geetest.com` | Captcha — GTCaptcha4 verification endpoint, called from the bundled JS SDK | `GTCaptcha4.bundle/gt4.js` (grepped this session); `Reverse/IPA/recon/hosts-vendor.txt` |
| `static.geetest.com` | Captcha — GTCaptcha4 static asset/challenge host | `GTCaptcha4.bundle/gt4.js`; `hosts-vendor.txt` |
| `monitor.geetest.com` | Captcha — GTCaptcha4 telemetry/monitoring host | `GTCaptcha4.bundle/gt4.js`; `hosts-vendor.txt` |
| `aispeech.com` (`/private`), `cloud.aispeech.com/docs/2029` | Assistant/LLM — AISpeech (iFlytek-competitor ASR/TTS vendor) privacy/doc links, alongside on-device `XJASR.bundle` (ctc/decoder/encoder `.onnx` models) and `XJNLG.bundle`/`XJVAD.bundle` for local ASR/NLG/VAD | `Reverse/IPA/recon/urls-all.txt`; `Frameworks/App.framework/flutter_assets/assets/html/category_pp_zh_CN.html` (grepped this session); `XJASR.bundle/*.onnx` (file listing) |
| `console.cloud.google.com/vertex-ai/.../gemini-1.5-pro-001` | Assistant/LLM — Vertex AI Gemini-1.5-pro reference (model-garden doc link, not necessarily a live call site) | `Reverse/IPA/recon/urls-all.txt` |
| `xr-231206-13a9a.firebasestorage.app`, project `xr-231206-13a9a`, GCM sender `154238351645` | Analytics/push infra — Firebase project config (Storage, GCM/FCM); `IS_ANALYTICS_ENABLED=false`, `IS_ADS_ENABLED=false` in the config itself, and `FirebaseAutomaticScreenReportingEnabled=false` in `Info.plist` | `GoogleService-Info.plist` (`plutil -p`, this session); `Info.plist` |
| (Amplitude — no literal host string recoverable) | Analytics — `Frameworks/AmplitudeSwift.framework` is embedded and linked (confirmed via `strings`/symbol names, e.g. `AmplitudeSwift...AA0A0C...`); its default ingestion host (`api2.amplitude.com`) is compiled into Swift metadata, not a plain string, so no literal amplitude.com host was recovered from this binary | `Frameworks/AmplitudeSwift.framework/AmplitudeSwift` (`strings`, this session) |
| (AliyunOSS — no bucket/endpoint string recoverable) | Storage — `Frameworks/AliyunOSSiOS.framework` (Alibaba Cloud OSS SDK) is embedded; the framework binary is itself FairPlay-encrypted (`cryptid 1`, verified this session via `otool -l`), so no `*.aliyuncs.com` / bucket / region string could be extracted | `Frameworks/AliyunOSSiOS.framework/AliyunOSSiOS` (`otool -l`, this session) |
| `www.volcengine.com/docs/6561/116711` | Reference only — ByteDance Volcengine cloud-doc link inside privacy-policy text; no Volcengine SDK framework found in `Frameworks/` | `Reverse/IPA/recon/urls-all.txt` |
| `azure.microsoft.com`, `www.ishumei.com` (Shumei anti-fraud), `y.qq.com`, `privacy.qq.com`, `html5.moji.com` | Third-party privacy-policy references only (sub-processor disclosures); no matching SDK frameworks found | `Reverse/IPA/recon/urls-all.txt` |

## Other iOS-side network signals (not full hosts, but relevant)

- `myvu_config_plugin.framework` and `nordic_otas_plugin.framework` (Flutter plugins) are
  present — names strongly suggest the iOS analogue of Android's OTA/config path — but
  both are FairPlay-encrypted (`myvu_config_plugin` confirmed `cryptid 1`, `cryptoff
  16384`, `cryptsize 16384`, via `otool -l` this session) and yielded zero readable
  `strings` for URLs/hosts. `ble2301.framework` (glasses BLE transport) likewise yielded
  no host strings.
- `Info.plist` → `NSAppTransportSecurity` = `{ NSAllowsArbitraryLoads: true }` — ATS is
  globally disabled app-wide (no per-domain exceptions needed because arbitrary loads are
  allowed outright). This is a blanket, maximally permissive posture; full privacy/security
  implications are deferred to the privacy leaf per instructions.
- `Info.plist` custom URL scheme: `xjmz` (`com.upuphone.superapp.xjmz`); `LSApplicationQueriesSchemes: [qqmusic]`.
- `PrivacyInfo.xcprivacy` declares required-reason API usage (UserDefaults, FileTimestamp,
  SystemBootTime, DiskSpace, ActiveKeyboards) and `NSPrivacyTracking: false`.
- No `*.aliyuncs.com`, no literal `amplitude.com`, and no `myvu.cn` host string was found
  anywhere in the readable app tree — the handful of raw `myvu` substring hits (in
  `XJASR.bundle/*.onnx` binary blobs and `SC_Info/Manifest.plist`) were checked with
  context and are false positives / just the `myvu_config_plugin` framework filename, not
  network hosts.

## iOS vs Android host comparison

Android reference: `Reverse/MYVU_cloud_API_map.md` and `Reverse/FINDINGS.md` document a
config-gateway architecture (`gw[-global][-uat].myvu.cn/config/`) that returns a live
service directory, backed by a hardcoded fallback (`NetConfig.e`). Quoting Android's OTA
bases directly from `Reverse/FINDINGS.md`:

> China prod: `https://xr-nbs.myvu.cn/ar-ota` · China UAT: `https://xr-nbs-uat.myvu.cn/ar-ota`
> Intl prod: `https://xr-nbs-global.myvu.cn/ar-ota` · Intl UAT: `https://xr-nbs-global-uat.myvu.cn/ar-ota`

and from `Reverse/MYVU_cloud_API_map.md`, the intl_prod service set: `xr-nbs-global.myvu.cn`,
`kmglobal.myvu.cn`, `mixture-global.myvu.cn`, `airecords-global.myvu.cn`,
`survey-global.myvu.cn`, `gw-global.myvu.cn/auth`.

| Host / base | Android (jadx-decompiled, readable) | iOS (this IPA, FairPlay-limited) |
|---|---|---|
| `xr-nbs.myvu.cn` / `xr-nbs-global.myvu.cn` (ar-ota, account-service, xr-menu, xr-weather, cloud-adapter, myvu-config) | Present — hardcoded fallback strings in `NetConfig.e`, readable via jadx | **Not found** in any unencrypted iOS resource. `myvu_config_plugin.framework` (best host candidate) is FairPlay-encrypted; the real host, if identical, is presumably inside `App.framework/App`'s encrypted AOT snapshot or the encrypted main binary |
| `gw.myvu.cn` / `gw-global.myvu.cn` (config gateway + auth) | Present — bootstrap URL for the whole env system | **Not found** on iOS in readable form |
| `km.myvu.cn` / `kmglobal.myvu.cn` (ASR websocket `wss://`) | Present | **Not found**; iOS instead exposes `aispeech.com` (a different vendor) plus on-device `XJASR.bundle` ONNX models — suggests the iOS build may use a different/local ASR path than Android's `km`/`mixture` cloud AI, or the equivalent host is simply hidden in encrypted code |
| `mixture.myvu.cn` / `mixture-global.myvu.cn` (AI) | Present | **Not found** |
| `survey.myvu.cn`, `airecords.myvu.cn` | Present | **Not found** |
| `policy.flyme.com` (Android's policy host) | Present, same family as iOS's policy host | iOS uses `xj-platform.flyme.com` / `xj-platform-global.flyme.com` — same Flyme/Meizu vendor family, different subdomain naming (`xj-platform*` vs `policy`), suggesting each platform's build points at its own policy-CMS instance under the shared `flyme.com` domain |
| HERE maps, Geetest, AISpeech, Firebase | Not confirmed for Android in the reviewed docs | Present on iOS (`hereapi.com`, `geetest.com`, `aispeech.com`, Firebase project `xr-231206-13a9a`) |
| Request signing (`appSign = MD5(appId+signId+reqTime)`, `HttpRequestUtil`) | Fully readable in Android smali/jadx | Cannot be recovered — equivalent iOS signing logic (if any) is inside FairPlay-encrypted `__TEXT` |

**Conclusion:** the entire `*.myvu.cn` service constellation that Android's cloud API map
documents in detail (config gateway, ar-ota, account-service, km/mixture AI, survey,
airecords) is architecturally almost certainly present on iOS too — `myvu_config_plugin.framework`
existing at all strongly implies it — but on this App-Store IPA it is completely opaque:
**FairPlay** encryption on the main binary, the Flutter AOT snapshot, and the
`myvu_config_plugin`/`nordic_otas_plugin`/`AliyunOSSiOS` frameworks removes every one of
those hosts from static-string visibility. What remains visible on iOS is the resource
layer: third-party SDK endpoints (HERE, Geetest, AISpeech, Firebase, Amplitude, AliyunOSS
by framework presence) and Flyme/Meizu policy-CMS URLs — none of which is the `myvu.cn`
cloud backend itself.

IPA_NETWORK_COMPLETE
