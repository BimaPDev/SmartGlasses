# Cruise HUD (auto street + speed while driving)

Date: 2026-08-31

Phone-app feature only. No glasses firmware change, no `open_app` of the native nav page, no new on-lens widgets. The overlay is a lens notification card on the same path as scripts and turn-by-turn guidance cards.

Turn-by-turn `NavSession` is unchanged. This is a separate cruise overlay that auto-starts when driving and auto-stops when parked.

## Goal

A Navigate-tab toggle, **Auto HUD while driving**. While it is on:

1. The phone watches for driving even if the glasses are disconnected.
2. After a few seconds of car motion and speed ≥ ~12 mph, a lens card shows current street, speed (mph), heading, city, trip distance (miles), and speed limit (mph) when OSM has one.
3. After ~45 seconds parked, the card dismisses.
4. If the glasses reconnect while still driving, the current card is sent immediately.

## Non-goals

- No destination, routing, re-routing, or maneuver arrows.
- No native `navi_info` / `NaviDriveSpeedView` path (TBT chrome cannot hold heading, city, or speed limit; it also needs the classic-BT audio link).
- No firmware flash or glasses-side mode switch.
- No reading Apple Maps / Google Maps / Waze live guidance.
- Speed and distance are always mph / miles, never locale-based km/h.

## Architecture

Three small units in `MyvuNav`, wired from `GlassesModel`:

```
DriveDetector  --driving?-->  CruiseSession  --lens card-->  glasses (if ready)
     ^                              ^
 location + motion            geocode + OSM limit
```

- **`DriveDetector`**: decides driving vs parked. Owns the location + motion subscriptions while the toggle is on. Does not know about glasses or cards.
- **`CruiseSession`**: while the detector says driving, reverse-geocodes, looks up speed limit, formats the card, and sends/dismisses. Sending is gated by a `canSend` flag the host sets from connection state.
- **`GlassesModel`**: owns the toggle, starts the detector whenever the toggle is on, sets `canSend = isReady`, pauses cruise while turn-by-turn is active, flushes the card on reconnect.

`NavView` only exposes the toggle and a short status line (e.g. “Driving · 42 mph” / “Watching” / “Off”).

### Why a detector separate from the session

The detector must keep running across disconnects. The session must not send while disconnected, and must not accumulate a backlog of cards. Splitting them makes “always watch, send only when ready” a host policy instead of hidden inside the session.

## Detection

Inputs: `LocationSourceProviding` (existing) and a new `MotionSourceProviding` (automotive / walking / running / cycling / unknown / unavailable).

Rules, evaluated on every fix (speed in m/s, times wall-clock via an injectable `now`):

| Event | Condition | Hold |
| --- | --- | --- |
| Start driving | speed ≥ 5.4 m/s (~12 mph) **and** motion is `automotive` or `unknown`/`unavailable` | 8 s continuous |
| Stop (parked) | speed < 2.2 m/s (~5 mph) or speed unknown | 45 s continuous |
| Stop (not a car) | motion is `walking`, `running`, or `cycling` | 10 s continuous |

Hysteresis: a 10 s red light does not stop; a 45 s park does. A brief GPS dip below 12 mph during the 8 s start hold resets that hold.

Motion denied or unimplemented (macOS tests): treat as `unavailable` and use GPS speed alone. Trains and buses can false-trigger; that is accepted.

The detector does **not** start or stop based on glasses connection. Battery cost of continuous GPS while the toggle is on, including while disconnected, is accepted.

### Injectable clock and thresholds

`DriveDetector` takes `now: () -> Date` and the hold/speed constants as parameters with the defaults above. Tests advance time by feeding timestamps; they do not sleep 45 s.

## Card content

Dedicated lens-card id `LensCards.cruiseNumericId = 7_010_003` (does not collide with script `7_010_001` or guidance `7_010_002`).

Example:

```
Main Street  ·  42 mph
Cambridge  ·  N  ·  3.2 mi  ·  limit 30
```

Formatting rules:

- Title: `{street}  ·  {speed} mph`. If street is missing, title is `{speed} mph`.
- Body parts, omitted when unknown, joined with `  ·  `: city, heading, trip miles, `limit {n}`.
- Speed: `Int((speedMps * 2.236936).rounded())`. If the current fix has unknown speed (`< 0`) while still in the driving state, keep the last known mph on the card.
- Trip: miles from the first driving fix of this stint. Omit until distance > 0. Then show one decimal mile, floored at `0.1 mi` (never km, never meters).
- Heading: 8-wind from bearing (`N NE E SE S SW W NW`). Omit when bearing `< 0`.
- City: `CLPlacemark.locality` (fallback `subLocality`, then omit).
- Speed limit: integer mph. OSM values in km/h are converted (`kmh * 0.621371`, rounded). OSM values that already say `mph` are used as-is. Omit when unknown.
- Never render `km/h`, `km`, or a placeholder dash for a missing field.

Refresh: update the card when the formatted title+body changes, and re-SHOW the last body every 4 s so a stationary-in-traffic card does not expire. Dismiss on leaving the driving state.

## Data sources

### Street and city

`PlaceNameProviding` wraps `CLGeocoder.reverseGeocodeLocation`. Throttle: request when the fix has moved ≥ 80 m **or** 15 s since the last successful or failed lookup, and only while driving. On failure, keep the last good street/city (or omit if there has never been one). Do not call Nominatim for reverse geocode; Apple’s geocoder is already used by weather.

### Speed limit

`SpeedLimitProviding` with `OsmSpeedLimitProvider` hitting Overpass (`interpreter` JSON). Query a 30 m radius around the current fix for `way[highway][maxspeed]`. Parse `maxspeed` / `maxspeed:forward` (first present). Cache by 4-decimal rounded lat/lon for 10 minutes. Query only when the street name changes or the cache key changes. Timeout 8 s; on failure or empty result, omit the limit. User-Agent: same family as `Osrm` (`myvu-ios-sdk/1.0`). Tests use a fixture JSON, never a live Overpass call.

## Host wiring (`GlassesModel` + `NavView`)

- `@AppStorage("autoCruiseHud")` toggle on the Navigate tab, independent of the destination field.
- When the toggle turns **on**: start `DriveDetector` (location Always already requested for TBT; request Motion if needed). Create `CruiseSession` if needed.
- When the toggle turns **off**: stop detector, dismiss card, stop session.
- `canSend = (state == .ready) && !navigating`.
- Transition to `.ready` while `detector.isDriving && !navigating`: force one card send immediately (reconnect flush).
- `startNavigation`: set navigating, pause cruise (dismiss cruise card). Detector keeps running.
- `stopNavigation`: clear navigating; if still driving and ready, cruise card returns on the next fix (or immediately via flush).
- Detector starts in `init`/scene phase if the toggle was already on from a previous launch, without waiting for a glasses connection.

`NSMotionUsageDescription` is added on the demo target: used to tell driving from walking so the cruise HUD can auto-show on the glasses. Location background mode is already declared.

## Error handling

| Case | Behavior |
| --- | --- |
| Location denied | Detector never enters driving; one `SdkLog.warn`; toggle remains |
| Motion denied | GPS-speed-only (`unavailable`) |
| Geocode fail | Card still shows speed / heading / trip / limit |
| OSM fail / no maxspeed | Omit limit |
| Glasses disconnected | Detector continues; no sends; no queued cards |
| Reconnect while driving | One card immediately |
| Turn-by-turn active | Cruise card dismissed; no cruise SHOWs until TBT stops |
| Location unavailable callback | Leave driving, dismiss if showing |

## Testing (`Tests/MyvuNavTests`)

Fake location, fake motion, fake geocoder, fake speed-limit, fake clock. No car, no live OSM, no CoreLocation.

- 8 s at ≥ 12 mph + automotive → driving becomes true; 7 s does not.
- 10 s below 5 mph does **not** leave driving; 45 s does.
- Walking for 10 s leaves driving even if speed is still high (GPS glitch).
- Card formatter: all fields; omit each missing field independently; output contains `mph` / `mi` / `limit` and never `km`.
- OSM parser: `"30"` (km/h) → 19 mph; `"30 mph"` → 30; missing tag → nil.
- `canSend == false` while driving → zero SHOWs; flipping `canSend` true → one SHOW.
- Simulated TBT (`canSend` false because navigating) → dismiss, no further SHOWs.
- Reconnect: driving already true, `canSend` rises → exactly one SHOW without waiting for another fix.

## File ownership (expected)

- `Sources/MyvuNav/DriveDetector.swift`
- `Sources/MyvuNav/CruiseSession.swift`
- `Sources/MyvuNav/CruiseCard.swift` (pure formatter)
- `Sources/MyvuNav/MotionSource.swift` + `CoreMotionSource.swift` (`#if os(iOS)`)
- `Sources/MyvuNav/PlaceName.swift`
- `Sources/MyvuNav/SpeedLimit.swift`
- `Sources/MyvuCore/App/Feature/LensCards.swift` (add `cruiseNumericId`)
- `Examples/MyvuDemo/MyvuDemo/GlassesModel.swift`, `NavView.swift`
- Demo `INFOPLIST_KEY_NSMotionUsageDescription`
- `Tests/MyvuNavTests/CruiseHudTests.swift`

## Success criteria

With the toggle on, connecting the glasses, and simulating (or actually) driving: a lens card appears with street and mph within ~8 s, survives a traffic-light stop, picks up heading / city / trip / limit as those lookups succeed, dismisses after a ~45 s park, and reappears immediately if the BLE session drops and returns while still moving. Turn-by-turn still starts only from the existing Start button and, while running, owns the lens.
