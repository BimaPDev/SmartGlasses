# MYVU iOS SDK (unofficial)

An unofficial iOS/Swift SDK for **Meizu MYVU / Star Air** AR glasses (model
XGA010C). It connects to the glasses, drives the teleprompter, notifications,
system settings and trackpad, and optionally adds turn-by-turn navigation, a
weather feed and a voice assistant.

> **Unofficial and unaffiliated.** This project is not produced, endorsed, or
> supported by Meizu. "MYVU" and "Meizu" are trademarks of their respective
> owners. The protocol was reverse-engineered from packet captures; behaviour
> may break with any firmware update. Use at your own risk.

This is a port of the [MYVU Android SDK](https://github.com/Panny777/Meizu-Myvu-SDK)
— same wire protocol, same layered module split, rewritten against
CoreBluetooth, CryptoKit and Swift concurrency. Read
[PROTOCOL.md](PROTOCOL.md) for the wire format and the platform notes behind
the decisions below.

## What is different on iOS

Worth reading before you start, because two of these change what you can build.

| | Android SDK | Here |
| --- | --- | --- |
| Transport | BLE + classic Bluetooth (RFCOMM) app relay | **BLE only** |
| Voice input | MediaCodec decodes the glasses' Opus mic stream | **needs an Opus decoder you supply** |
| Device identity | peripheral MAC address | `CBPeripheral.identifier` (a per-install `UUID`) |
| HFP/A2DP status | connected and read by the SDK | report it yourself via `updateBtStatus(_:)` |
| Background operation | foreground service | Core Bluetooth background mode |

**RFCOMM.** iOS will not open a serial port to a non-MFi accessory, and the MYVU
glasses are not MFi, so the classic-Bluetooth relay the Android SDK prefers is
simply unreachable. Everything that can run without that link runs over BLE.

**Audio-link gate.** Teleprompter (`tici`), the nav HUD, and music need a live
HFP/A2DP connection. iOS cannot open that for the XGA010C. The demo therefore
uses **lens notification cards** for scripts and turn-by-turn — same BLE session,
usable on iPhone. See `INVESTIGATION.md`.

**Opus.** No system framework on iOS decodes Opus. `MyvuAI` takes an injected
`OpusDecoding` instead of forcing libopus on every consumer; without one the
glasses' microphone cannot be transcribed, and `AiSession.ask(_:)` (a typed
question answered on the glasses, full protocol flow) is what remains. Drop in
[swift-opus](https://github.com/alta/swift-opus) or your own libopus wrapper and
voice input works.

## Modules

| Module | What it adds | Extra dependencies |
| --- | --- | --- |
| `MyvuCore` | Connection, pairing, teleprompter, notifications, weather push, settings, trackpad, queries, raw actions | none (CoreBluetooth, CryptoKit) |
| `MyvuNav` | Turn-by-turn HUD navigation | CoreLocation; OSRM/Nominatim over HTTP (swappable) |
| `MyvuAI` | Voice assistant over the glasses' mic (pluggable STT / LLM / TTS) | an Opus decoder, for voice input |
| `MyvuWeather` | Keeps the glasses' weather panel fed (Open-Meteo, no API key) | none |

Only `MyvuCore` is required.

## Install

Swift Package Manager, iOS 15+ (macOS 12+ so the protocol suite runs without a
device):

```swift
dependencies: [
    .package(url: "https://github.com/<owner>/Meizu-Myvu-SDK-iOS", from: "0.1.0")
]
```

then depend on the products you want: `MyvuCore`, and any of `MyvuNav`,
`MyvuAI`, `MyvuWeather`.

## Permissions

There are no runtime permission requests to write — iOS prompts on first use —
but the Info.plist keys must be present or the app crashes when the framework
is touched.

| Key | Why |
| --- | --- |
| `NSBluetoothAlwaysUsageDescription` | required, always |
| `NSLocationWhenInUseUsageDescription` | `MyvuNav`, and `DeviceWeatherLocation` |
| `NSMicrophoneUsageDescription` | only if your app also records; the glasses' mic arrives over BLE |
| `UIBackgroundModes` → `bluetooth-central` | to hold the link while backgrounded |

`MyvuNav` additionally needs `location` in `UIBackgroundModes` if you want
navigation to survive the screen locking, and `CoreLocationSource(allowsBackgroundUpdates: true)`.

## Quickstart — async facade

```swift
import MyvuCore

let glasses = MyvuGlasses()               // MyvuConfig defaults are fine

Task {
    for await state in glasses.states() { print("state = \(state)") }
}

Task {
    try await glasses.connect()           // nil id = scan; suspends until .ready
    glasses.openTeleprompter("Hello from the SDK", title: "Demo")
    glasses.setBrightness(8)
    let reply = try await glasses.query("request_phone_battery")
    UserDefaults.standard.set(glasses.connectedGlassesId?.uuidString, forKey: "myvu")
}
```

`MyvuGlasses` exposes `states()`, `events()`, `rawInbound()` and
`discoveries()` as `AsyncStream`s — each call returns an independent stream, so
several parts of an app can observe at once. Persist `connectedGlassesId` and
pass it to `connect(id:)` next launch to skip the scan.

## Quickstart — callbacks

`MyvuGlasses` is a thin optional layer; `MyvuClient` is the whole SDK and works
with observers instead of streams:

```swift
let client = MyvuClient()                 // or MyvuClient(config: ...)
client.addObserver(self)                  // callbacks on .main by default
client.connectAutoSearch()                // or client.connect(id: savedUUID)

// once .ready:
client.openTeleprompter("Hello from the SDK", title: "Demo")
client.setBrightness(8)
```

```swift
extension MyController: MyvuClientObserver {
    func myvuClient(_ client: MyvuClient, didChangeState state: ConnectionState) { }
    func myvuClient(_ client: MyvuClient, didReceiveDeviceInfo info: DeviceInfo) { }
    func myvuClient(_ client: MyvuClient, didReceive event: GlassesEvent) { }
}
```

## Feature overview

Available on both `MyvuClient` and `MyvuGlasses`:

- **Teleprompter** — `openTeleprompter(_:title:)`, `teleprompterHighlight(index:title:)`
- **Notifications** — `showNotification(title:body:)`, `dismissNotifications(ids:)`
- **Weather** — `sendWeather(_:)`; the glasses' `syncWeather` requests arrive as
  `GlassesEvent.weatherRequested`
- **Settings** — `setBrightness` (0–10), `setVolume` (0–15), `toggleWifi`,
  `setZenMode`, `setAirMode`, `setWearDetection`, `setMusicTpControl`,
  `setScreenOffTime`, `setStandbyPosition` (0–3), `setDeviceName`, `setLanguage`
- **Clock** — `syncTime()`
- **Trackpad** — `glasses.trackpad.start/stop/click/doubleClick/longPress/swipe(...)`
- **Queries** — `query(_:)` (e.g. `get_device_info`, `request_phone_battery`,
  `get_brightness`, `request_wifi_list`). The glasses do not tag a reply with the
  request that caused it, so the async `query` correlates by subject token and
  returns the first plausible match; use `events()` directly if you need more.
- **Escape hatch** — `sendRaw(_:)` for hand-written action JSON

### Navigation (`MyvuNav`)

```swift
let nav = NavSession(client: client, source: CoreLocationSource())
nav.start("Times Square")     // place name or "lat,lon"
// nav.stop()
```

Routing and geocoding default to the public OSRM and Nominatim demo servers,
which are rate-limited and not for production traffic: pass your own
`OsrmRouteProvider(profile:)`-style `RouteProvider` pointed at your instance.

The arrow-icon enum lives in the glasses' launcher and could not be read out, so
`IcMap` is partly guesswork — `nav.sendCalibrationFrame(ic:roadName:)` puts a
given value on the lens so you can see what it draws.

### Weather (`MyvuWeather`)

The glasses have a weather panel and periodically ask the phone to fill it
(`syncWeather`). `WeatherSync` answers those requests, pushes on every connect
and refreshes every 30 minutes, matching the official app's cadence:

```swift
let weather = WeatherSync(client: client, location: DeviceWeatherLocation())
weather.attach()
```

| Provider | Needs |
| --- | --- |
| `DeviceWeatherLocation()` | location permission |
| `PlaceWeatherLocation("Dar es Salaam")` | nothing — geocoded once, also takes `"lat,lon"` |

Data comes from **Open-Meteo**, chosen because it needs no API key. To use your
own source, build a `Weather.Reading` and call `client.sendWeather(_:)` —
`MyvuCore` owns the wire format, so `MyvuWeather` is entirely optional.

### AI assistant (`MyvuAI`)

The glasses stream their own microphone; the SDK runs the on-glasses protocol
(VAD, captions, the LLM answer card, TTS play-state) and delegates recognition
and answering to engines you provide:

```swift
let ai = AiSession(client: client,
                   stt: mySpeechToText,     // implements SpeechToText
                   llm: myLanguageModel,    // implements LanguageModel
                   tts: nil,                // nil = AVSpeechSynthesizer
                   decoder: myOpusDecoder)  // nil = no voice input
ai.attach()                                 // responds to the AI button / wake word
```

Answers render in the glasses' **LLM card scene** — the same surface the
official app uses — so nothing extra is needed to display them. With no decoder,
`ai.ask("what is the weather like?")` still drives the full answer flow.

The sample app ships Groq Whisper and Claude adapters as a reference. The SDK
itself contains no cloud clients or API keys.

**One turn per trigger.** A spoken answer does not automatically start another
listening turn, because the glasses expect an `isNextRecorded` signal that only
the official cloud NLU produces; forcing a follow-up without it wedges the
session. `ai.spokenFollowUpTurns = true` opts in if you want to experiment.

## Keeping the connection alive

Add `bluetooth-central` to `UIBackgroundModes` and iOS will keep the link and
deliver notifications while backgrounded. It will not restart your app after a
crash or a reboot unless you also opt into state restoration, and the 3-second
heartbeat the glasses require does not run while suspended — the SDK reconnects
(exponential backoff, 2 s to 60 s) when the app is resumed. There is no
equivalent of Android's foreground service; a long walk with the screen locked
needs the `location` background mode, which `MyvuNav` already justifies.

## Custom logging

```swift
SdkLog.setLogger(myLogger)   // conform to MyvuLogger
```

## Sample app

`Examples/MyvuDemo` is a SwiftUI app covering connection, controls, navigation,
the assistant and a live log view. Open `Examples/MyvuDemo/MyvuDemo.xcodeproj`;
it references the package from the repository root, so no checkout of anything
else is needed. The assistant tab wants a Groq and an Anthropic key, entered in
the UI.

## Troubleshooting

- **Nothing connects** — the glasses accept one central at a time. Force-quit the
  official Meizu app, and make sure the glasses are not paired to another phone.
- **Connected but nothing renders** — the app layer only wakes after the init
  burst; watch for `state = .ready`. If it stops at `.session`, the burst was
  rejected, usually a stale msgId run from an earlier attempt: disconnect fully
  and retry.
- **"Please connect to the mobile first" / teleprompter & nav refuse to open** —
  that card is the missing classic-BT **audio** link (HFP/A2DP), not an account
  lock. On this non-MFi XGA010C model iOS cannot open that link (Settings will
  not list them for audio pairing either). Use Android or Windows for
  teleprompter / navigation / music; on iOS stick to BLE-only features
  (notifications, settings, language, trackpad). See `INVESTIGATION.md`.
  `updateBtStatus(_:)` alone does not clear the gate.
- **Assistant does nothing when you press the button** — no Opus decoder; see
  above.

## Building from source

```
swift build
swift test          # 237 tests: the byte-level protocol suite plus module tests
```

The protocol suite runs on macOS without a device. Requires Swift 6 toolchain
(the package builds in Swift 5 language mode: the transport is queue-confined,
a faithful port of the Android SDK's single connection thread).

## License

MIT — see [LICENSE](LICENSE). Reverse-engineered protocol knowledge, ported from
the Android SDK by [Panny777](https://github.com/Panny777/Meizu-Myvu-SDK); the
decompiled official app is not included.
