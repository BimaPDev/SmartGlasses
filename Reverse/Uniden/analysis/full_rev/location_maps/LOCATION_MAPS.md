# Uniden R/TACH 1.0.9 — location, GPS, maps, tach

Leaf 1.7. Package `com.uniden.rtach`, versionName `1.0.9` / versionCode `14`.
Phone GPS drives the Google Map camera and a car marker. Detector GPS (via BLE ETC) drives the speed gauge, heading, altitude, and GPS-lock icon. Phone coordinates are not written to the radar as a live fix.

## Manifest permissions and map entry

`decompiled/resources/AndroidManifest.xml` declares:

- `android.permission.ACCESS_FINE_LOCATION` (line 22)
- `android.permission.ACCESS_COARSE_LOCATION` (line 23)
- `android.permission.ACCESS_MOCK_LOCATION` (line 29)

There is no `ACCESS_BACKGROUND_LOCATION`. Fine+coarse are requested at runtime from `MapsFragment.onViewCreated` (`ACCESS_FINE_LOCATION`) and `BaseActivity.checkGPSIsEnable`, which prompts the system location-source settings if the GPS provider is off. `ACCESS_MOCK_LOCATION` is a signature/privileged permission on modern Android; the declaration does not by itself enable test providers for a Play-distributed APK.

Queries package `com.google.android.apps.maps`. Application meta-data `com.google.android.geo.API_KEY` points at `@string/google_maps_key`. There is no dedicated Map Activity: the map is `MapsFragment` hosted under `DashboardActivity`, with `SupportMapFragment` in `res/layout/fragment_maps.xml` (`android:name="com.google.android.gms.maps.SupportMapFragment"`, id `@+id/map`).

Service `com.uniden.rtach.helper.simulation.LocationDriverService` is registered `android:exported="false"`. `BaseApplication.onCreate` constructs `new Intent(context, LocationDriverService.class)` and then **does not** `startService` it. `LocationDriverService.onHandleIntent` is empty.

## Live GPS path (`UnidenLocationManager`)

Primary live source is `android.location.LocationManager` provider `"gps"`:

- `startGPSUpdate()`: `requestLocationUpdates("gps", 800L, 5.0f, mLocationListener)` — 800 ms / 5 m (`MIN_TIME_MS`, `MIN_DIST_METERS`).
- `GnssStatus.Callback` (`mGPSStatuslisteneraboveN`) re-requests updates on GNSS start. A legacy `GpsStatus.Listener` exists but is unused after `setupLocationSource` registers the GNSS callback.
- Fixes with accuracy worse than `INVALIDACCURACY` (300 m) are dropped.
- If the fix has no speed (or speed 0) and a previous `currentLocation` exists, bearing is copied from the previous fix.
- Each accepted fix is copied into `UnidenLocationManager.currentLocation`, timestamps `timeOflastLocationReceived`, and is broadcast as a local intent whose action is `GPSStatusUpdate.GPS_LOCATION_UPDATE.name()` (`"GPS_LOCATION_UPDATE"`) with extra `Constant.GPS_LOCATION_EXTRA` (`"GPS_LOCATION_EXTRA"`) holding the `android.location.Location` parcel.

`BaseApplication`’s `gpsLocationUpdateReceiver` stores that Location as `lastLocation`. `MapsFragment.onCreate` registers that receiver twice (duplicate) plus its own `localBluetoothReceiver` on `GPS_LOCATION_UPDATE`. Despite the name, the latter is a GPS handler: it throttles camera/car updates to once per 1000 ms via `locationHasChanged`. `MapsFragment.MyLocationListener` is constructed in `initLocationManger` and immediately dropped — it is never passed to `requestLocationUpdates`.

If no last-known location is available, `retrieveLastKnownLocation` plants a dummy at **37.5326, 127.024612** (Seoul). Log tag is still `"CobraLocationManager"` (Cobra-app lineage).

## Play Services Fused Location

`UnidenLocationManager.setfusedClient()` obtains `LocationServices.getFusedLocationProviderClient`. After each GPS update, `setSpeedToZeroIfStationary` arms a 3 s `SpeedTimer`. On fire it stops fused updates then starts them: `LocationRequest.create().setPriority(100)` (PRIORITY_HIGH_ACCURACY), interval 1000 ms, fastest 800 ms. The `LocationCallback` forwards fused `Location` objects into the same `mLocationListener.onLocationChanged` and then **stops** fused updates — fused is a one-shot fill-in when GPS looks stationary, not the continuous source.

`MapsFragment` also holds its own `FusedLocationProviderClient` (`initClient`). `getLastKnownLocation` uses `getLastLocation()`; if that is null, `getCurrentLocation(100, CancellationToken)` (priority 100) is used to seed the camera and the user-car marker.

## Mock / NMEA simulation (shipped off)

`MapsFragment.MOCKLOCATION_ON` is a compile-time `false`. `UnidenLocationManager.SIMULATION_ON` defaults `false`. `startSimulation()` has **no callers** in `com.uniden.rtach` besides `LocationDriverService` itself looping at EOF.

If simulation were started, `LocationDriverService` would:

1. Ensure `Documents/UNIDEN/` exists and seed `gps1.txt` from `R.raw.gps1`.
2. Read NMEA lines `$GPRMC` / `$GNGGA` / `$GNRMC` on a `HandlerThread`, 500 ms sleep between accepted sentences.
3. Parse lat/lon (NMEA ddmm.mmmm → degrees via `countDegreeForSimulation`), speed knots × `0.514444` m/s, bearing, accuracy (default 5 m).
4. If `MOCKLOCATION_ON`: `LocationManager.addTestProvider("gps", …)` then `setTestProviderLocation("gps", location)` when location is enabled.
5. Else: `UnidenLocationManager.mockSimulatedLocation(location)` which calls `mLocationListener.onLocationChanged` directly (no test provider).

`MockLocationProvider` is a second NMEA replay (`$GPRMC` every 200 ms, `makeComplete` via reflection, `setTestProviderLocation`). It is only constructed from `setupLocationSource` when `mockLocationProviderSingletonStarted` is **false**. That flag is initialized `true`, so the `data.txt` / `addTestProvider` branch is dead in 1.0.9.

`stopSimulation` removes the test provider and calls `UnidenLocationManager.startGPSUpdate()` to return to live GPS.

## Maps SDK usage

`MapsFragment` implements `GoogleMap.OnMarkerClickListener` and `GoogleMap.OnMapLoadedCallback`. `onMapReady`:

- Indoor enabled; compass and map toolbar off; rotate gestures on.
- Observes `etcDataChanged`: auto-brightness `"D"` loads `R.raw.style_json` dark map style; otherwise default. Persists `StoreUserData.setMapLight`.
- First fused fix uses `animateCamera(newLatLngZoom(latLng, 18f), 1000, null)` unless the user has scrolled (`isScrollEnable`). Ongoing GPS broadcasts use `setMapCameraPosition`: speed (m/s × 3.6 × `KM2MI`) clamps zoom between 25–120 mph (`getCustZoomLevel`), bearing follows the fix when speed > `MPH4ROTATION` (1.5), and the camera target is a geodesic `Utility.Destination` offset so the car sits toward the bottom of the view. Tilt is a constant 45° (`getCustAngle`). Native my-location blue dot is **disabled** (`setMyLocationEnabled(false)`); a custom car `Marker` (`ic_usermarker`, 150×150, `flat(true)`) is rotated from `Location.getBearing()`. If the car is more than 500 m from the new fix, it is snapped rather than interpolated.
- Heading-up vs north-up: `isHeadingUp` / `Constant.TILTMAX` / `TILTMAX_NORTHUP`. GPS button (`onGpsClick`) re-centers via fused last location.
- `onMapLoaded()` throws `NotImplementedError` (stub; `setOnMapLoadedCallback` is never wired).

`Utility.Destination` computes a geodesic destination using `EARTHRADIUSKM` 6371 km (`Constant.EARTHRADIUSKM` / `EARTHCIRCKM` 40075.017). Speed conversion constants live on `Constant`: `KNOTS_TO_METERS_PER_SECOND` 0.5144445, `METERSPERSEC2KPH` 3.6, `KM2MI` 0.621371192, `MPH4ROTATION` 1.5.

## Speed / tach gauge (not phone GPS)

Dashboard `fragment_dashboard.xml` hosts `com.uniden.rtach.helper.GaugeView` as `imgSpeedometer`. `GaugeView` is a canvas analog gauge:

- Scale 0–220 (`SCALE_START_VALUE` / `SCALE_END_VALUE`), 11 divisions, 2 subdivisions, start angle 60°.
- Needle physics in `computeCurrentValue` / `setTargetValue` (clamped to scale).
- `setTargetSpeedUnitValue` draws mph/kph from prefs.

`DashboardFragment.initUi` zeros the needle, then observes `BaseApplication.etcDataChanged`. Each `ETCDataModel` sets `imgSpeedometer.setTargetValue(Float.parseFloat(eTCDataModel.getCurrentSpeed()))` and the unit string from `StoreUserData.getSpeedUnit()`. Altitude (`ft` vs `m`) and compass direction (`AlertDataConverter.getDirection(eTCDataModel.getGpsDirection())`) come from the **same ETC packet**, not from `UnidenLocationManager`.

ETC is parsed in `AlertDataConverter.parseETCData` from BLE characteristic `Constant.ETC_DATA_CHARACTERISTIC_UUID` (`6c290d2e-1c03-aca1-ab48-a9b908bae79e`), `&`-separated fields. Index 2 (when not `"0"`) is comma-split: `gpsDirection`, `currentSpeed`, `altitude`, `gpsStatus`. `DashboardActivity` maps `gpsStatus == "C"` to `ic_gps` (connected) and anything else (`"E"` / other) to `ic_gps_grey`.

## User marks, speedcam, redlight POIs

`MarkerTypeEnum`: `NONE`, `SPEED_CAMERA`, `RED_LIGHT_CAMERA`, `USER_MARK`. String tags in `Constant`: `USERMARK`, `SPEEDCAM`, `REDLIGHT`.

POI blobs arrive on `SETTINGS_CHARACTERISTIC_UUID_3` (`15005991-b131-3396-014c-664c9867b917`) as uppercase hex. `BaseApplication.updatePoiMarkerCharacteristic` accepts prefixes `00`/`01`/`02`/`03` or the empty `"0000"` clear, then `AlertDataConverter.parsePoiData`.

Packed records (`parsingPacket`):

| Type | Prefix | Length (hex chars) | Extra fields (hex-string indices) |
|---|---|---|---|
| SPEED_CAMERA | `01` | 26 | angle `[20,24)`, speedLimit `[24,26)` |
| RED_LIGHT_CAMERA | `02` | 24 | angle `[20,24)` |
| USER_MARK | `03` | 20 | lat/lng only |

Lat/lng are IEEE-754 big-endian floats in hex (`hexStringLat` / `hexStringLng` at offsets 4–12 / 12–20). Map keys are `{s|r|u}_{lat6},{lng6}`. `MapsFragment.observeDataChange` draws `MarkerOptions` with type icons (`speed_camera` / `redlight_camera` / `user_marker`, light/dark variants). Clicking a user-mark (`snippet` starts with `'u'`) confirms delete and writes `BTreqUMRK:0,{hexLat},{hexLng}`.

Dashboard BLE commands (no phone lat/lng attached):

- Add user mark: `Constant.ADD_USER_MARK` = `"BTreqUMRK:1"` — detector uses **its** GPS.
- Delete user mark: `"BTreqUMRK:0"`.
- Delete red-light camera: `"BTreqRLCD:0"`.

Firmware GPS databases (not live location) use `BluetoothUtils` `BTdnGPSTR` / `BTdnGPEND` / `BTdnGDSTR` / `BTdnGDEND` inside `FirmWareUpdateWorker`.

## How GPS is sent to the detector (it is not)

Searched `com.uniden.rtach` `writeCharacteristic` call sites: settings (`BTreqSETC`), mute, user-mark add/delete, redlight delete, Wi-Fi AP, firmware download. **No live NMEA, lat/lng, or phone Location is written to GATT.**

The detector has its own GPS. The phone:

1. Consumes detector GPS **status/speed/heading/altitude** from ETC.
2. Consumes detector **POI lat/lng** from settings characteristic 3 for map pins.
3. Uses **phone GPS** only for map camera, car marker, and (if simulation were on) mock providers.

Quiet Ride is **not** an Android `GeofencingClient` geofence (no matches under `com.uniden.rtach`). `AlertDataConverter.getMuteStatus("6")` returns `"Quiet Ride Mute"` — a detector mute-memory type reported over BLE, not a phone geofence.

## Call flow (live)

```
BaseApplication.onCreate
  → UnidenLocationManager.setupLocationSource
      → LocationManager.requestLocationUpdates("gps", 800, 5m)
      → (optional) FusedLocation one-shot after 3s stall
  → LocationListener.onLocationChanged
      → LocalBroadcastManager "GPS_LOCATION_UPDATE" + GPS_LOCATION_EXTRA
          → BaseApplication.lastLocation
          → MapsFragment.locationHasChanged → car marker + camera

DashboardActivity / DashboardFragment
  → BLE ETC characteristic
      → parseETCData → GaugeView.setTargetValue(currentSpeed)
      → gpsStatus "C" → ic_gps

SETTINGS_CHARACTERISTIC_UUID_3
  → parsePoiData → MapsFragment.displayMarker (SPEEDCAM / REDLIGHT / USERMARK)
```

## Source citations

- `decompiled/resources/AndroidManifest.xml` — location, mock-location, maps query, geo API key, `LocationDriverService`
- `decompiled/sources/com/uniden/rtach/helper/simulation/UnidenLocationManager.java`
- `decompiled/sources/com/uniden/rtach/helper/simulation/LocationDriverService.java`
- `decompiled/sources/com/uniden/rtach/helper/simulation/MockLocationProvider.java`
- `decompiled/sources/com/uniden/rtach/helper/simulation/GPSStatusUpdate.java`
- `decompiled/sources/com/uniden/rtach/helper/simulation/Utility.java`
- `decompiled/sources/com/uniden/rtach/helper/GaugeView.java`
- `decompiled/sources/com/uniden/rtach/helper/Constant.java`
- `decompiled/sources/com/uniden/rtach/helper/MarkerTypeEnum.java`
- `decompiled/sources/com/uniden/rtach/data/model/MarkerAndPoiDataModel.java`
- `decompiled/sources/com/uniden/rtach/p005ui/fragment/MapsFragment.java`
- `decompiled/sources/com/uniden/rtach/p005ui/fragment/DashboardFragment.java`
- `decompiled/sources/com/uniden/rtach/helper/BaseApplication.java`
- `decompiled/sources/com/uniden/rtach/helper/AlertDataConverter.java`
- `decompiled/resources/res/layout/fragment_maps.xml`
- `decompiled/resources/res/layout/fragment_dashboard.xml`
