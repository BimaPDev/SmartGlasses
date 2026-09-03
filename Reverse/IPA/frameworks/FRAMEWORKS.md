# MYVU AR / XJOverSeas — Embedded Frameworks Master Catalog

Source: `Reverse/IPA/extracted/Payload/XJOverSeas.app/Frameworks/` (99 `.framework`
bundles, measured directly from the extracted IPA). Sizes and cryptid taken from
`Reverse/IPA/recon/frameworks.csv`; `CFBundleIdentifier` / `CFBundleShortVersionString`
extracted with `plutil -extract ... raw -o -` against each framework's `Info.plist`
under `Reverse/IPA/extracted/Payload/XJOverSeas.app/Frameworks/<Name>.framework/Info.plist`.

## FairPlay limitation (read first)

The main executable `Reverse/IPA/extracted/Payload/XJOverSeas.app/XJOverSeas`, the
Flutter AOT payload `Frameworks/App.framework/App`, and **all 99** frameworks
catalogued below carry `LC_ENCRYPTION_INFO_64` with `cryptid 1` — this is Apple's
**FairPlay** App Store DRM wrapper, confirmed here by `otool -l` spot-checks on
`Alamofire`, `heresdk`, `NordicDFU`, `StarryNet`, `ble2301`, `XJNetWork`, and `libpag`
(all seven returned `cryptid 1`), consistent with the full `cryptid,1` column already
recorded for all 99 rows in `recon/frameworks.csv`. Because of FairPlay, the `__TEXT`
segments of every binary listed here are ciphertext in this App-Store-distributed
IPA: they cannot be disassembled, class-dumped, or have their Swift/ObjC method
bodies inspected without a decrypted memory dump from a jailbroken/debugger-attached
device, which is out of scope for this static-recon leaf. Every purpose line below is
inferred from the framework's **name, CocoaPods bundle identifier, version string,
and public reputation** (these libraries are open-source or well-documented
commercial SDKs), never from decompiled logic. No native code in this IPA has been
decrypted or disassembled by this leaf.

## Cryptid distribution

All 99/99 frameworks: `cryptid = 1`. Zero frameworks with `cryptid = 0`
(unencrypted). Confirmed against every row of `recon/frameworks.csv` plus direct
`otool -l` verification on 7 sampled binaries spanning smallest (`ble2301`,
92,176 B target framework) to largest (`heresdk`, 57,580,144 B).

## Totals summary

| Category | Count | Total bytes | Total (MB) |
|---|---:|---:|---:|
| (a) Vendor / first-party | 10 | 6,857,840 | 6.5 |
| (b) BLE / DFU | 3 | 1,362,464 | 1.3 |
| (c) Networking | 23 | 11,315,776 | 10.8 |
| (d) Maps | 1 | 57,580,144 | 54.9 |
| (e) Crypto | 4 | 4,407,536 | 4.2 |
| (f) Analytics / telemetry | 9 | 3,729,248 | 3.6 |
| (g) Auth / captcha | 0 | 0 | 0 |
| (h) Cloud storage | 1 | 1,013,824 | 1.0 |
| (i) UI / media | 30 | 15,292,128 | 14.6 |
| (j) Other (runtime/data/util) | 18 | 47,629,616 | 45.4 |
| **Total** | **99** | **149,188,576** | **142.3** |

Note on (g): no standalone `GTCaptcha4*` or `LarkSSO`/Feishu-named `.framework`
bundle exists among the 99 embedded frameworks, despite `recon/hosts-vendor.txt`
recording `gcaptcha4.geetest.com` / `static.geetest.com` / `monitor.geetest.com`
hosts in `recon/urls-all.txt`. That GeeTest captcha logic is therefore either
statically linked into the main `XJOverSeas` binary / `App.framework` (Flutter
plugin) rather than shipped as its own `.framework`, or invoked purely over HTTP
without an embedded native SDK — it cannot be resolved further without decrypting
FairPlay-protected code. Likewise no `upuphone*`, `TZImagePicker`, or `Lottie`
framework is present among the 99 (checked by case-insensitive grep of
`frameworks.csv`); `Toast.framework` is present as its own item (not `upuphone`).

---

## (a) Vendor / first-party (XJ / Myvu / Starry)

| Framework | Bundle ID | Version | Size (B) | Purpose |
|---|---|---|---:|---|
| StarryCast | org.cocoapods.StarryCast | 0.1.0 | 93,040 | Vendor screen-cast/mirroring client, paired with StarryCastCommon |
| StarryCastCommon | org.cocoapods.StarryCastCommon | 0.1.0 | 102,384 | Shared models/protocol for the Starry cast stack |
| StarryLog | org.cocoapods.StarryLog | 1.3.1 | 489,408 | Vendor structured logging core |
| StarryLogUI | org.cocoapods.StarryLogUI | 1.3.0 | 503,056 | In-app log viewer UI built on StarryLog |
| StarryLogWebServer | org.cocoapods.StarryLogWebServer | 1.3.0 | 293,296 | Embedded local HTTP server exposing StarryLog output (LAN log pull/debug) |
| StarryNet | org.cocoapods.StarryNet | 1.7.14 | 4,369,680 | Vendor networking stack for device/cloud comms (largest first-party module) |
| ble2301 | org.cocoapods.ble2301 | 0.0.3 | 92,176 | XJ BLE chipset ("2301") transport driver for the Myvu glasses' Bluetooth link |
| XJNetWork | org.cocoapods.XJNetWork | 0.1.0 | 485,024 | XJ-branded app-layer network/API client wrapping backend calls |
| XJDebug | org.cocoapods.XJDebug | 0.9.0 | 313,440 | Internal debug/diagnostics tooling for XJOverSeas builds |
| myvu_config_plugin | org.cocoapods.myvu-config-plugin | 0.0.1 | 116,336 | Flutter plugin bridging Myvu device configuration into native code |

## (b) BLE / DFU

| Framework | Bundle ID | Version | Size (B) | Purpose |
|---|---|---|---:|---|
| flutter_blue_plus | org.cocoapods.flutter-blue-plus | 0.0.1 | 187,760 | Flutter plugin exposing CoreBluetooth (BLE scan/connect/GATT) to Dart |
| NordicDFU | org.cocoapods.NordicDFU | 4.15.3 | 1,022,944 | Nordic Semiconductor's iOS DFU (Device Firmware Update) library for nRF-based BLE MCUs |
| nordic_otas_plugin | org.cocoapods.nordic-otas-plugin | 0.0.1 | 151,760 | Flutter plugin bridge around NordicDFU for glasses OTA firmware updates |

## (c) Networking

| Framework | Bundle ID | Version | Size (B) | Purpose |
|---|---|---|---:|---|
| AFNetworking | com.alamofire.AFNetworking | 4.0.1 | 485,328 | Legacy Objective-C HTTP networking library |
| Alamofire | org.cocoapods.Alamofire | 5.6.4 | 2,518,432 | Swift HTTP networking library |
| CocoaAsyncSocket | org.cocoapods.CocoaAsyncSocket | 7.6.5 | 374,208 | Async TCP/UDP socket library (GCDAsyncSocket), used by many WS/DFU stacks |
| Starscream | org.cocoapods.Starscream | 4.0.8 | 541,824 | WebSocket client library |
| Reachability | org.cocoapods.Reachability | 5.2.4 | 176,384 | Network reachability/connectivity monitoring |
| Swifter | org.cocoapods.Swifter | 1.5.0 | 1,325,488 | Lightweight embedded HTTP server library (likely backs StarryLogWebServer or local API) |
| connectivity_plus | org.cocoapods.connectivity-plus | 0.0.1 | 168,384 | Flutter plugin reporting network connectivity type (wifi/cellular/none) |
| GTMSessionFetcher | org.cocoapods.GTMSessionFetcher | 3.5.0 | 405,760 | Google's NSURLSession fetcher helper, dependency of Google/Firebase SDKs |
| NIO | org.cocoapods.NIO | 2.40.0 | 108,640 | SwiftNIO umbrella module (event-driven networking framework) |
| NIOConcurrencyHelpers | org.cocoapods.NIOConcurrencyHelpers | 2.40.0 | 391,920 | SwiftNIO low-level atomics/locking helpers |
| NIOCore | org.cocoapods.NIOCore | 2.40.0 | 1,394,240 | SwiftNIO core channel/eventloop abstractions |
| NIOEmbedded | org.cocoapods.NIOEmbedded | 2.40.0 | 261,072 | SwiftNIO in-memory/embedded channel for testing pipelines |
| NIOFoundationCompat | org.cocoapods.NIOFoundationCompat | 2.40.0 | 170,608 | SwiftNIO <-> Foundation Data interop helpers |
| NIOHTTP1 | org.cocoapods.NIOHTTP1 | 2.40.0 | 712,880 | SwiftNIO HTTP/1.1 codec |
| NIOPosix | org.cocoapods.NIOPosix | 2.40.0 | 1,188,592 | SwiftNIO POSIX (BSD sockets) event loop backend |
| NIOWebSocket | org.cocoapods.NIOWebSocket | 2.40.0 | 325,968 | SwiftNIO WebSocket protocol codec |
| CNIOAtomics | org.cocoapods.CNIOAtomics | 2.40.0 | 144,208 | SwiftNIO C shim: atomic ops |
| CNIODarwin | org.cocoapods.CNIODarwin | 2.40.0 | 90,624 | SwiftNIO C shim: Darwin/BSD syscall wrappers |
| CNIOHTTPParser | org.cocoapods.CNIOHTTPParser | 2.40.0 | 113,184 | SwiftNIO C shim: vendored http_parser |
| CNIOLinux | org.cocoapods.CNIOLinux | 2.40.0 | 88,944 | SwiftNIO C shim: Linux syscall wrappers (unused on iOS, ported dependency) |
| CNIOSHA1 | org.cocoapods.CNIOSHA1 | 2.40.0 | 88,864 | SwiftNIO C shim: SHA1 (WebSocket handshake) |
| CNIOWindows | org.cocoapods.CNIOWindows | 2.40.0 | 87,808 | SwiftNIO C shim: Windows syscall wrappers (unused on iOS, ported dependency) |
| _NIODataStructures | org.cocoapods.-NIODataStructures | 2.40.0 | 152,416 | SwiftNIO internal data structures (heaps/circular buffers) |

SwiftNIO (NIO/CNIO family, 14 modules) is almost certainly a transitive dependency of
a higher-level SDK (commonly gRPC/HERE SDK networking or AliyunOSSiOS) rather than
directly used by XJ's own code.

## (d) Maps

| Framework | Bundle ID | Version | Size (B) | Purpose |
|---|---|---|---:|---|
| heresdk | com.here.sdk | 4.17.0 | 57,580,144 | HERE Technologies native Maps SDK (offline/online maps, routing, geocoding); by far the largest embedded framework — matches `*.hereapi.com` maptile hosts in `recon/urls-all.txt` |

## (e) Crypto

| Framework | Bundle ID | Version | Size (B) | Purpose |
|---|---|---|---:|---|
| CryptoSwift | org.cocoapods.CryptoSwift | 0.1.0 | 1,347,680 | Pure-Swift crypto primitives (AES, hashing, HMAC) |
| OpenSSL | com.github.krzyzanowskim.OpenSSL | 1.1.2301 | 2,593,184 | Prebuilt OpenSSL 1.1.x libcrypto/libssl (TLS, ciphers) — krzyzanowskim's iOS binary pod |
| FileMD5Hash | org.cocoapods.FileMD5Hash | 2.0.0 | 90,672 | MD5 file-hashing utility (integrity checks, e.g. OTA/cache validation) |
| KeychainAccess | org.cocoapods.KeychainAccess | 4.2.2 | 376,000 | Swift wrapper around iOS Keychain Services for secure credential storage |

## (f) Analytics / telemetry

| Framework | Bundle ID | Version | Size (B) | Purpose |
|---|---|---|---:|---|
| AmplitudeSwift | org.cocoapods.AmplitudeSwift | 1.11.10 | 1,640,832 | Amplitude product-analytics event SDK |
| AnalyticsConnector | org.cocoapods.AnalyticsConnector | 1.3.1 | 187,008 | Google/Firebase internal analytics event bus connector |
| GoogleDataTransport | org.cocoapods.GoogleDataTransport | 9.4.1 | 383,232 | Google's batched telemetry transport layer (used by Firebase Analytics/Crashlytics) |
| GoogleToolboxForMac | org.cocoapods.GoogleToolboxForMac | 4.2.1 | 136,400 | Legacy Google utility library, dependency of older Google SDKs |
| GoogleUtilities | org.cocoapods.GoogleUtilities | 7.13.3 | 152,560 | Shared Google SDK utilities (app environment, method swizzling, logging) |
| FBLPromises | org.cocoapods.FBLPromises | 2.4.0 | 192,496 | Google/Firebase's Promises (async) library, dependency of Firebase-family SDKs |
| KSCrash | org.cocoapods.KSCrash | 1.17.5 | 849,888 | Crash reporting/symbolication library (captures crash reports for telemetry upload) |
| device_info_plus | org.cocoapods.device-info-plus | 0.0.1 | 93,744 | Flutter plugin reporting device model/OS info (used by analytics/support) |
| package_info_plus | org.cocoapods.package-info-plus | 0.4.5 | 93,088 | Flutter plugin reporting app version/build (used by analytics/support) |

No standalone `Firebase*.framework` (e.g. `FirebaseCore`, `FirebaseAnalytics`) is
present among the 99; only the Google-utility dependencies above ship, suggesting
Firebase's top-level product SDKs are either absent or statically merged elsewhere.

## (g) Auth / captcha

None of the 99 embedded frameworks matches `GTCaptcha4*`, `LarkSSO*`, or a Feishu
SDK name (verified by case-insensitive grep across `recon/frameworks.csv`). See the
"Totals summary" note above for the GeeTest host evidence found in recon without a
corresponding embedded framework.

## (h) Cloud storage

| Framework | Bundle ID | Version | Size (B) | Purpose |
|---|---|---|---:|---|
| AliyunOSSiOS | org.cocoapods.AliyunOSSiOS | 2.11.1 | 1,013,824 | Alibaba Cloud Object Storage Service (OSS) iOS SDK — object upload/download to Aliyun buckets |

## (i) UI / media

| Framework | Bundle ID | Version | Size (B) | Purpose |
|---|---|---|---:|---|
| DKImagePickerController | org.cocoapods.DKImagePickerController | 4.3.9 | 1,120,416 | Customizable photo/video picker UI |
| DKPhotoGallery | org.cocoapods.DKPhotoGallery | 0.0.19 | 853,296 | Full-screen photo/video gallery viewer, companion to DKImagePickerController |
| BRPickerView | org.cocoapods.BRPickerView | 2.8.8 | 403,360 | Date/address/text picker UI components |
| Aztec | org.cocoapods.Aztec | 1.19.11 | 2,259,120 | WordPress's native rich-text (HTML) editor engine |
| WordPressEditor | org.cocoapods.WordPressEditor | 1.19.11 | 546,336 | WordPress Gutenberg-style rich text editor UI, built atop Aztec |
| SDWebImage | org.cocoapods.SDWebImage | 5.21.0 | 907,104 | Async image loading/caching library |
| Kingfisher | org.cocoapods.Kingfisher | 7.6.2 | 1,960,096 | Swift async image downloading/caching library (alternative to SDWebImage) |
| SwiftyGif | org.cocoapods.SwiftyGif | 5.4.5 | 262,624 | Animated GIF rendering support (Kingfisher dependency) |
| YYText | org.cocoapods.YYText | 1.0.0 | 857,088 | High-performance rich text rendering component |
| YYCache | org.cocoapods.YYCache | 1.0.4 | 195,888 | High-performance memory+disk cache, dependency of YYText/image stacks |
| TTTAttributedLabel | org.cocoapods.TTTAttributedLabel | 2.0.0 | 192,608 | Attributed-string UILabel replacement (links, styling) |
| AutoScrollLabel | org.cocoapods.AutoScrollLabel | 0.4.3 | 106,912 | Marquee/auto-scrolling text label |
| MJRefresh | org.cocoapods.MJRefresh | 3.7.9 | 269,568 | Pull-to-refresh / infinite-scroll UI component |
| IQKeyboardManager | org.cocoapods.IQKeyboardManager | 6.5.19 | 332,432 | Automatic keyboard avoidance for text fields |
| Toast | org.cocoapods.Toast | 4.0.0 | 130,304 | Lightweight toast/snackbar notification UI |
| Masonry | org.cocoapods.Masonry | 1.1.0 | 180,496 | Objective-C Auto Layout DSL |
| SnapKit | org.cocoapods.SnapKit | 5.0.1 | 358,304 | Swift Auto Layout DSL (successor to Masonry) |
| libpag | com.tencent.libpag | 4.4.26 | 2,130,640 | Tencent's PAG (Portable Animated Graphics) renderer for After Effects-exported animations |
| status_bar_control | org.cocoapods.status-bar-control | 3.2.1 | 93,744 | Flutter plugin to show/hide/style the iOS status bar |
| image_picker_ios | org.cocoapods.image-picker-ios | 0.0.1 | 203,392 | Official Flutter image_picker iOS implementation |
| image_gallery_saver | org.cocoapods.image-gallery-saver | 2.0.2 | 195,200 | Flutter plugin to save images/video to the Photos library |
| file_picker | org.cocoapods.file-picker | 0.0.1 | 163,152 | Flutter plugin for native document/file picker UI |
| flutter_keyboard_visibility | org.cocoapods.flutter-keyboard-visibility | 0.0.1 | 95,856 | Flutter plugin reporting on-screen keyboard visibility |
| webview_flutter_wkwebview | org.cocoapods.webview-flutter-wkwebview | 0.0.1 | 551,584 | Official Flutter WKWebView-backed in-app browser implementation |
| volume_controller | org.cocoapods.volume-controller | 0.0.1 | 165,792 | Flutter plugin to read/set device volume |
| vibration | org.cocoapods.vibration | 1.7.5 | 149,520 | Flutter plugin for haptic/vibration feedback |
| open_settings_plus | org.cocoapods.open-settings-plus | 0.0.1 | 147,216 | Flutter plugin to deep-link into iOS Settings app panes |
| url_launcher_ios | org.cocoapods.url-launcher-ios | 0.0.1 | 208,288 | Official Flutter url_launcher iOS implementation (opens URLs/deep links) |
| flutter_local_notifications | org.cocoapods.flutter-local-notifications | 0.0.1 | 159,312 | Flutter plugin for scheduling local push notifications |
| flutter_timezone | org.cocoapods.flutter-timezone | 0.0.1 | 92,480 | Flutter plugin exposing the device's IANA timezone (supports notification scheduling) |

## (j) Other (runtime, data, general utility)

| Framework | Bundle ID | Version | Size (B) | Purpose |
|---|---|---|---:|---|
| Flutter | io.flutter.flutter | 1.0 | 9,857,536 | Flutter engine (Skia/Impeller renderer, Dart VM host) — MinimumOSVersion 12.0 |
| App | io.flutter.flutter.app | 1.0 | 18,128,352 | Compiled Flutter/Dart AOT application snapshot (the app's Dart business logic); also FairPlay-encrypted per RECON.md `LC_ENCRYPTION_INFO_64` |
| HandyJSON | org.cocoapods.HandyJSON | 5.0.2 | 506,672 | Swift JSON <-> model (de)serialization via reflection |
| SwiftProtobuf | org.cocoapods.SwiftProtobuf | 1.29.0 | 3,353,280 | Google Protocol Buffers Swift runtime |
| nanopb | org.cocoapods.nanopb | 2.30910.0 | 96,960 | Lightweight C Protocol Buffers runtime (embedded/low-memory contexts) |
| Realm | org.cocoapods.Realm | 10.33.0 | 10,013,504 | Realm mobile database C++/ObjC core |
| RealmSwift | org.cocoapods.RealmSwift | 10.33.0 | 2,827,632 | Swift API layer over Realm |
| FMDB | org.cocoapods.FMDB | 2.7.12 | 185,680 | Objective-C wrapper around SQLite |
| sqflite | org.cocoapods.sqflite | 0.0.3 | 273,312 | Flutter SQLite plugin |
| ZIPFoundation | org.cocoapods.ZIPFoundation | 0.9.19 | 489,488 | Swift zip archive read/write library |
| ZipArchive | org.cocoapods.ZipArchive | 1.4.0 | 145,760 | Objective-C zip archive library (SSZipArchive's predecessor/alt) |
| SSZipArchive | org.cocoapods.SSZipArchive | 2.4.3 | 236,688 | Objective-C zip archive library built on minizip |
| FCFileManager | org.cocoapods.FCFileManager | 1.0.20 | 138,464 | Filesystem convenience helper library |
| BFKit | org.cocoapods.BFKit | 3.0.0 | 347,712 | General-purpose Swift/ObjC utility extension collection |
| CocoaLumberjack | org.cocoapods.CocoaLumberjack | 3.8.5 | 465,952 | Fast, flexible logging framework |
| path_provider_foundation | org.cocoapods.path-provider-foundation | 0.0.1 | 161,824 | Official Flutter path_provider iOS/macOS implementation (app dir paths) |
| shared_preferences_foundation | org.cocoapods.shared-preferences-foundation | 0.0.1 | 220,512 | Official Flutter shared_preferences iOS/macOS implementation (NSUserDefaults-backed KV store) |
| SDBridgeSwift | org.cocoapods.SDBridgeSwift | 1.1.0 | 180,288 | Small Swift bridging/glue module (name suggests an internal Swift<->Dart or SD* bridge; purpose not further resolvable without decrypting `__TEXT`) |

---

## Method notes

- Directory listing: `ls -d Reverse/IPA/extracted/Payload/XJOverSeas.app/Frameworks/*.framework | wc -l` → 99.
- Per-framework identity: `plutil -extract CFBundleIdentifier raw -o - <fw>/Info.plist` and `plutil -extract CFBundleShortVersionString raw -o - <fw>/Info.plist`, run over all 99 `Info.plist` files; every one of the 99 had a readable `Info.plist` (no `NOPLIST` cases).
- Size/cryptid source of record: `Reverse/IPA/recon/frameworks.csv` (`framework,cryptid,size_bytes`, 99 data rows + header, all cryptid=1).
- Cryptid spot-verification: `otool -l Reverse/IPA/extracted/Payload/XJOverSeas.app/Frameworks/<Name>.framework/<Name>` on Alamofire, heresdk, NordicDFU, StarryNet, ble2301, XJNetWork, libpag — all reported `LC_ENCRYPTION_INFO_64 … cryptid 1`.
- Category totals cross-checked programmatically against the full 99-row CSV: category byte sums add to exactly 149,188,576 (matches the CSV's own column total) and category counts add to exactly 99, confirming every framework was placed in exactly one category with no omissions or duplicates.

IPA_FRAMEWORKS_COMPLETE
