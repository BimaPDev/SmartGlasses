# MYVU AR (XJOverSeas.app) — Privacy & Permissions Posture

Measured from `Reverse/IPA/extracted/Payload/XJOverSeas.app/Info.plist` (verified
byte-identical via `diff` against `plutil -convert xml1 -o -` run directly on the
live extracted plist; snapshot at `Reverse/IPA/recon/Info.plist.xml`) and
`Reverse/IPA/recon/entitlements.xml`.

## 1. App identity

| Key | Value |
|---|---|
| CFBundleIdentifier | `com.upuphone.overseas` |
| CFBundleDisplayName | MYVU AR |
| CFBundleExecutable / CFBundleName | XJOverSeas |
| CFBundleShortVersionString | 1.1.28 |
| CFBundleVersion | 407081002 |
| MinimumOSVersion | 13.0 |
| DTSDKName / DTXcode | iphoneos26.2 / Xcode build 17C52 |
| application-identifier (entitlements) | `K72D494553.com.upuphone.overseas` |
| com.apple.developer.team-identifier | `K72D494553` |
| ITSAppUsesNonExemptEncryption | false |

## 2. NS*UsageDescription strings (verbatim from Info.plist)

| Key | Exact text |
|---|---|
| NSBluetoothAlwaysUsageDescription | "Used to discover AR Glasses and smart ring devices, bind devices, establish transmission channels, and obtain system audio to play on the Glasses." |
| NSBluetoothPeripheralUsageDescription | (identical text to above) |
| NSBluetoothWhileInUseUsageDescription | (identical text to above) |
| NSCalendarsUsageDescription | "Used to view and manage schedule information, and to set up a schedule based on to-do items in the Meeting Assistant,Translator and Voice Transcription" |
| NSCameraUsageDescription | "Used for sending the image to the server after the user takes a photo, and then providing feedback based on the image." |
| NSContactsUsageDescription | "Used to display the contact information on the Glasses when a phone call is transferred to the Glasses." |
| NSHealthClinicalHealthRecordsShareUsageDescription | "Used to access health data to display the user's step count information on the Glasses" |
| NSHealthShareUsageDescription | (identical, step count) |
| NSHealthUpdateUsageDescription | (identical, step count) |
| NSLocalNetworkUsageDescription | "Used to establish transmission channels between connected devices and upgrade" |
| NSLocationAlwaysAndWhenInUseUsageDescription | "Used to obtain weather information; when connected to AR Glasses, it is used to establish transmission channels, determine navigation location, translate and record locations with meeting assistants, use voice navigation, speak to check the weather, automatically adjust the brightness of the Glasses, and provide clock-in reminders; when connected to a smart ring, it is used to calculate exercise data." |
| NSLocationAlwaysUsageDescription | (identical to above) |
| NSLocationUsageDescription | (identical to above; legacy/undocumented key, still present) |
| NSLocationWhenInUseUsageDescription | (identical to above) |
| NSMicrophoneUsageDescription | "Used for sending voice messages to the server, with feedback based on the voice message" |
| NSMotionUsageDescription | "用于高德获取运动与健身，以提升导航准确性。您不允许，不影响导航功能的正常使用" (Chinese, untranslated in this build: "Used by AutoNavi/AMap to obtain motion & fitness data to improve navigation accuracy. If you don't allow it, normal navigation is unaffected.") — the only usage string not localized to English despite the app being the "OverSeas" build. |
| NSPhotoLibraryAddUsageDescription | "Used for uploading photos or videos when providing feedback, saving screenshots to the gallery, and sending user-uploaded images to the server for feedback based on images" |
| NSPhotoLibraryUsageDescription | (identical to above) |
| NSUserNotificationsUsageDescription | "Used to send important notifications" |

Notable: three Bluetooth keys, four location keys, and three HealthKit keys all
carry duplicate/near-duplicate text — a scattergun declaration pattern rather than
per-purpose strings, and the always-location description bundles weather, glasses
navigation, meeting-assistant transcription, and smart-ring exercise tracking into
one blanket justification.

## 3. NSAppTransportSecurity (ATS)

```xml
<key>NSAppTransportSecurity</key>
<dict>
    <key>NSAllowsArbitraryLoads</key>
    <true/>
</dict>
```

`NSAllowsArbitraryLoads = true` with **no** `NSExceptionDomains` dict present —
ATS is globally disabled app-wide. This permits plaintext/insecure HTTP and
weak-TLS connections to any host, which is consistent with the many bare `http://`
URLs already catalogued in `Reverse/IPA/recon/urls-all.txt` and the vendor hosts in
`Reverse/IPA/recon/hosts-vendor.txt` (e.g. `xj-platform-global.flyme.com`,
`lbs.amap.com`, `*.hereapi.com`, GeeTest captcha hosts). No per-domain exceptions
are declared because the blanket opt-out makes them unnecessary.

## 4. URL schemes

| Field | Value |
|---|---|
| CFBundleURLTypes → CFBundleURLSchemes | `xjmz` (CFBundleURLName: `com.upuphone.superapp.xjmz`, role: Editor) |
| LSApplicationQueriesSchemes | `qqmusic` (app can detect/launch Tencent QQ Music) |

Also present: `NSBonjourServices` = `_me-transferdata._tcp`, `_uupshare._tcp`
(local mDNS service advertisement/discovery, used with `NSLocalNetworkUsageDescription`).

## 5. UIBackgroundModes

| Mode | Implication |
|---|---|
| audio | background audio playback (glasses audio relay) |
| bluetooth-central | continues scanning/connecting BLE peripherals (glasses, smart ring) in background |
| bluetooth-peripheral | app can act as a BLE peripheral in background |
| fetch | periodic background fetch |
| location | continuous location updates in background (pairs with the Always location keys) |
| processing | `BGTaskSchedulerPermittedIdentifiers` background processing task (`com.upuphone.superapp`) |
| remote-notification | silent push wake-up |

Seven concurrent background modes is an unusually broad set for a companion app.

## 6. Entitlements (`Reverse/IPA/recon/entitlements.xml`)

| Entitlement | Value |
|---|---|
| application-identifier | `K72D494553.com.upuphone.overseas` |
| aps-environment | `production` (push notifications, prod APNs) |
| com.apple.developer.healthkit | `true` |
| com.apple.developer.networking.wifi-info | `true` (can read current SSID/BSSID) |
| com.apple.developer.team-identifier | `K72D494553` |
| keychain-access-groups | `["K72D494553.com.upuphone.overseas"]` (single app-only group, no shared/App-Group keychain) |

No `com.apple.developer.associated-domains`, no App Groups, no HealthKit
background-delivery entitlement, and no Sign in with Apple entitlement are
present in this file.

## 7. Privacy-sensitive combinations

- **HealthKit + BLE + background modes**: `com.apple.developer.healthkit` is
  declared alongside all three Bluetooth usage strings and the
  `bluetooth-central`/`bluetooth-peripheral`/`location` background modes. The
  step-count HealthKit description explicitly says data is "display[ed] ... on
  the Glasses," meaning health metrics are read from HealthKit and relayed over
  BLE to an external wearable while the app can run in the background — a data
  path that leaves the phone's sandboxed HealthKit store.
- **Always-location + BLE + wifi-info + ATS disabled**: continuous location,
  Wi-Fi SSID/BSSID visibility, and BLE central/peripheral access are all active
  simultaneously, and because `NSAllowsArbitraryLoads` is true, any of that data
  sent to the app's backends (e.g. `xj-platform-global.flyme.com`) is not
  guaranteed to be TLS-protected in transit.
- **Camera/Photos/Microphone all framed as "send to server for feedback"**: the
  camera, microphone, and photo-library usage strings each independently state
  images/voice/photos are uploaded to a server for "feedback based on the
  image/voice message" — i.e. these are not purely on-device features.
- **aps-environment production + remote-notification + processing background
  task**: the app can be silently woken via push and run a scheduled background
  processing task (`com.upuphone.superapp`) without user-visible activity.
- **Untranslated Chinese usage string** (`NSMotionUsageDescription`) shipping in
  an "OverSeas" / App Store build suggests the motion permission text was not
  localization-reviewed for the international release, even though the
  AMap/AutoNavi (`lbs.amap.com`) dependency it references is consistent with the
  China-origin backend infrastructure seen in recon.

## FairPlay limitation

This leaf only inspected unencrypted plist/XML metadata (`Info.plist`,
`entitlements.xml`) — no native code was read or needed for this task. For
completeness, per the run's shared measurement: the main binary `XJOverSeas`,
`App.framework/App` (Flutter AOT), and all 99 embedded framework binaries are
FairPlay-encrypted (`LC_ENCRYPTION_INFO_64`, `cryptid 1`), so it is not possible
from this App-Store IPA to verify that the app's actual runtime behavior matches
these declared usage strings and entitlements (e.g. whether HealthKit data is
truly only used for step count, or whether ATS's arbitrary-loads exception is
exercised only against the hosts already catalogued in recon). All permission
and entitlement facts in this report come solely from readable, unencrypted
plist metadata, not from decompiled or disassembled code.

IPA_PRIVACY_COMPLETE
