# Uniden R/TACH 1.0.9 — native libraries and third-party SDKs

Package `com.uniden.rtach`, version **1.0.9** (versionCode 14), flavor `uniden` (`decompiled/sources/com/uniden/rtach/BuildConfig.java`). This leaf inventories bundled SDKs, resource API keys, Firebase Crashlytics vs Analytics, and confirms there is **no JNI `.so` payload** in the app. Protocol, Maps UI, HTTP, and Room usage belong to sibling leaves.

Sources are jadx output plus `decompiled/resources`. Keys below are copied from resource files; none are invented.

## No JNI / `.so` payload

Confirmed three independent ways:

1. **Fingerprint** (`analysis/fingerprint.md`): “No `.so` files in the base APK zip listing. JNI is not the protocol path.”
2. **Decompiled tree**: glob of `**/*.so` under `Reverse/Uniden` and `decompiled/**/lib/**` is empty. XAPK `split_configs` (`xapk/manifest.json`) are language splits plus `config.xxxhdpi` only — **no `config.arm64_v8a` / ABI native split**.
3. **Load sites**: ripgrep of decompiled `*.java` / `*.xml` for `System.loadLibrary` and `System.load(` returns **zero** matches. Crashlytics still contains a *deferred* native hook (`CrashlyticsNativeComponentDeferredProxy`) that logs “Deferring native open session” until an optional NDK component appears; that component is not shipped.

`<application android:extractNativeLibs="false">` (`AndroidManifest.xml` line 59) is consistent with an APK that has nothing to extract. Google Maps rendering still works because **play-services-maps 19.0.0** talks to the Play Services process, whose native renderer lives in the GMS package, not in `com.uniden.rtach.apk`.

## Resource keys (cite, do not invent)

From `decompiled/resources/res/values/strings.xml`:

| Name | Value | Lines |
|---|---|---|
| `gcm_defaultSenderId` | `387798799321` | 107 |
| `google_api_key` | `AIzaSyA15xpXNbNht_qOaJT_w7Hg_xG5j5D0yCM` | 108 |
| `google_app_id` | `1:387798799321:android:043d8e38de22241387ffc8` | 109 |
| `google_crash_reporting_api_key` | `AIzaSyA15xpXNbNht_qOaJT_w7Hg_xG5j5D0yCM` (same as `google_api_key`) | 110 |
| `google_maps_key` | `AIzaSyCb4g9UXlOCaWjYhmfkdIjgecYqiThA26A` | 111 |
| `google_storage_bucket` | `uniden-9a602.appspot.com` | 112 |
| `project_id` | `uniden-9a602` | 285 |

`google_maps_key` is a **different** AIza key from `google_api_key`. Manifest wires Maps via:

```
<meta-data android:name="com.google.android.geo.API_KEY"
           android:value="@string/google_maps_key"/>
```

(`AndroidManifest.xml` lines 99–101). R.java aliases: `C2074R.string.google_api_key` / `google_maps_key`.

**Not present as string resources:** `firebase_database_url`, `ga_trackingId`. They appear only as optional keep-names in `decompiled/resources/res/raw/firebase_common_keep.xml`. There is no `google-services.json` in decompiled assets.

Play Services integer: `google_play_services_version` = `12451000` (`res/values/integers.xml`).

## Firebase product split: Crashlytics vs Analytics

Both SDKs are **present and auto-initialized**. First-party `com.uniden.rtach` code does **not** call either API for logging.

### Crashlytics (Java crash reports; no NDK)

- Artifact: `com.google.firebase.crashlytics` **19.2.0** (`decompiled/sources/com/google/firebase/crashlytics/BuildConfig.java`).
- Manifest registrars on `ComponentDiscoveryService`: `FirebaseCrashlyticsKtxRegistrar`, `CrashlyticsRegistrar` (`AndroidManifest.xml` lines 142–146).
- Init: `FirebaseInitProvider` authority `com.uniden.rtach.firebaseinitprovider`, `initOrder="100"` (lines 176–181).
- Key: `google_crash_reporting_api_key` in strings.xml (same value as `google_api_key`).
- First-party: **no** `FirebaseCrashlytics` / `recordException` / `setUserId` under `com.uniden.rtach`. Collection is the Crashlytics default (uncaught Java exceptions) after `FirebaseInitProvider`.
- NDK: `CrashlyticsNativeComponentDeferredProxy` waits for `firebase-crashlytics-ndk`. No `libcrashlytics.so`, no `System.loadLibrary`. `FileStore` still knows the `.com.google.firebase.crashlytics-ndk` directory name for cleanup. Verdict: **Java Crashlytics only**.

### Analytics (measurement; no first-party events)

- Connector: `com.google.firebase.analytics.connector.internal.AnalyticsConnectorRegistrar` (manifest lines 148–149).
- GMS: `play-services-measurement` / `measurement-impl` / `measurement-api` **22.1.2** (jadx `compiled from:` headers). `FirebaseAnalytics.java` is compiled from `play-services-measurement-api@@22.1.2`. There is **no** `com.google.firebase.analytics.BuildConfig`.
- Manifest: `AppMeasurementReceiver`, `AppMeasurementService`, `AppMeasurementJobService` (lines 120–132); property `android.adservices.AD_SERVICES_CONFIG` → `@xml/ga_ad_services_config` (`allowAllToAccess="true"` on attribution).
- Permissions: `ACCESS_ADSERVICES_ATTRIBUTION`, `ACCESS_ADSERVICES_AD_ID`, `com.google.android.finsky.permission.BIND_GET_INSTALL_REFERRER_SERVICE`.
- First-party: **no** `FirebaseAnalytics.getInstance`, `logEvent`, or consent APIs. Executable uses of `FirebaseAnalytics.Param.LOCATION` (`"location"`) as the `LocationManager` service name are in `BaseActivity.initVariables()` (line 462), `BaseFragment`, `LocationDriverService`, and `UnidenLocationManager`. That is not Analytics logging. `MapsFragment`, `DashboardActivity`, and `RadarSettingsCategoryTable` import `FirebaseAnalytics` but have no `getInstance` / `logEvent` call sites.
- Advertising ID client `play-services-ads-identifier@@17.1.0` is on the classpath (`AdvertisingIdClient.java`). No first-party `AdvertisingIdClient` call. Measurement uses it internally.

### Supporting Firebase libraries (BuildConfig names)

| LIBRARY_PACKAGE_NAME | VERSION_NAME |
|---|---|
| `com.google.firebase` | 21.0.0 |
| `com.google.firebase.crashlytics` | 19.2.0 |
| `com.google.firebase.installations` | 18.0.0 |
| `com.google.firebase.installations.interop` | 17.2.0 |
| `com.google.firebase.sessions` | 2.0.5 |
| `com.google.firebase.datatransport` | 19.0.0 |
| `com.google.firebase.components` | 18.0.0 |
| `com.google.firebase.encoders.json` | 18.0.1 |
| `com.google.firebase.remoteconfiginterop` | 16.0.1 |
| `com.google.firebase.ktx` | unspecified |

Sessions registrar + `SessionLifecycleService` are on the manifest (lines 151–152, 172–175). Installations + KTX registrars: lines 154–161. Transport registrar: 166–167.

**Not shipped:** Firebase Auth, Cloud Firestore, Cloud Messaging, Realtime Database (no `firebase_database_url` string), Cloud Storage client (bucket string only), Remote Config *implementation* (interop 16.0.1 only; Crashlytics has `RemoteConfigDeferredProxy`), Performance, In-App Messaging, Dynamic Links, App Check, Functions.

## Google Play services (non-Firebase)

| SDK | Version evidence | First-party use |
|---|---|---|
| play-services-maps | `@@19.0.0` | `MapsFragment` `SupportMapFragment`; queries `com.google.android.apps.maps` |
| play-services-location | `@@21.2.0` | `FusedLocationProviderClient` in `MapsFragment` and `UnidenLocationManager` |
| play-services-base | `@@18.4.0` | `GoogleApiActivity`; Hex util in `BaseApplication` |
| play-services-measurement* | `@@22.1.2` | auto Analytics (see above) |
| play-services-ads-identifier | `@@17.1.0` | measurement-only |

`uses-library org.apache.http.legacy` is `required="false"` (Maps / GMS leftover). `uses-library android.ext.adservices` is `required="false"`.

## HTTP, JSON, work, UI SDKs

### OkHttp 4.10.0

`okhttp3.OkHttp.VERSION` and `Util.userAgent` = `"okhttp/4.10.0"`. First-party: `FileReadWorker` (`helper/firmware_update/FileReadWorker.java`) builds `new OkHttpClient().newCall(new Request.Builder().url(string).build())` for firmware JSON/binary fetch. Response parsed with `org.json.JSONObject`, not Jackson. No Retrofit / Volley packages.

### Gson 2.10.1 vs Jackson 2.11.1

- Gson: `com.google.gson.internal.GsonBuildConfig.VERSION` = `2.10.1`. First-party: `DashboardFragment` and `BleDeviceListViewModel` call `new Gson().toJson(...)` for debug / file logs.
- Jackson: `PackageVersion` `2.11.1` for `jackson-core` and `jackson-databind`. **No** `ObjectMapper` / `com.fasterxml` imports under `com.uniden.rtach`. Shipped on DEX; unused by app code.

### WorkManager 2.9.1

`META-INF/androidx.work_work-runtime.version` and `work-runtime-ktx.version` = `2.9.1`. Startup initializer on `InitializationProvider`. First-party: `FirmwareUtils` enqueues `FileReadWorker`; `FirmwareUpdateViewModel` enqueues `FirmWareUpdateWorker` (a `CoroutineWorker`) and `cancelAllWork()`.

### Glide (`com.bumptech`)

Full Glide tree under `decompiled/sources/com/bumptech/glide/` (including `GeneratedAppGlideModule`). **No** `Glide.` / `GlideApp` / `com.bumptech` references in `com.uniden.rtach` or layouts. Present as a bundled SDK, unused by first-party UI.

### Airbnb Lottie (`com.airbnb.lottie`)

Confirmed Lottie (not a different Airbnb SDK). `Loader` (`helper/Loader.java`) binds `LottieAnimationView`. Layout `res/layout/loader_dialog.xml` uses `app:lottie_rawRes="@raw/ripple_animation"` with autoPlay/loop. `showAnim()` shows the Lottie view; `show()` hides it and shows a ProgressBar. No Lottie `VERSION_NAME` in sources.

### Intuit SDP (`com.intuit.sdp`)

Only `com/intuit/sdp/C2072R.java` (dimen `_Nsdp`). **No** `com.intuit.ssp` package. Layouts such as `loader_dialog.xml` use `@dimen/_8sdp` / `_45sdp`. Scalable-dp helper only.

### Wheel picker (`io.woong.wheelpicker`)

Nine classes including `ValuePickerView`, `ValuePickerAdapter`, `BuildConfig` (no `VERSION_NAME`). First-party: `SettingItemPickerAdapter` extends `ValuePickerAdapter<String, View>` and inflates `item_setting_menu_wheel`.

## AndroidX / DI (versions from META-INF `*.version`)

| Artifact | Version |
|---|---|
| Hilt / Dagger (`hilt-android`, `dagger`) | 2.48.1 |
| Room runtime / ktx | 2.5.0 |
| AppCompat | 1.7.0 |
| Activity | 1.9.3 |
| Lifecycle ViewModel | 2.8.6 |
| Material | 1.12.0 |
| kotlinx-coroutines-core | 1.8.1 |

Hilt: `@HiltAndroidApp` on `BaseApplication`; module meta-data `.data.module.AppModule`. Kotlin metadata `mv = {2, 0, 0}` on first-party classes.

Room `MultiInstanceInvalidationService` is declared; storage leaf owns schema/`R.json`.

## SDK inventory (compact)

| SDK | Role in R/TACH 1.0.9 |
|---|---|
| Firebase Crashlytics 19.2.0 | Auto Java crash reports; no NDK; no app API calls |
| Firebase Analytics + GMS measurement 22.1.2 | Auto collection; no app `logEvent`; Param.LOCATION string reuse |
| Firebase Installations 18.0.0 / Sessions 2.0.5 / Common 21.0.0 | FID + session plumbing for Crashlytics/Analytics |
| Maps 19.0.0 + Location 21.2.0 | Map fragment + fused GPS (GMS native renderer, not app `.so`) |
| OkHttp 4.10.0 | Firmware HTTP in `FileReadWorker` |
| Gson 2.10.1 | Debug JSON dumps |
| Jackson 2.11.1 | On DEX, unused by app |
| WorkManager 2.9.1 | Firmware download/flash workers |
| Lottie | Loader ripple animation |
| Glide | Bundled, no app call sites |
| Intuit SDP | Layout dimen scaling |
| woong WheelPicker | Settings value picker |
| Hilt 2.48.1 | App DI |
| Ads identifier 17.1.0 | Measurement dependency |

**Security note (inventory only):** Maps and Firebase AIza keys are in plaintext `strings.xml`. They are client keys typical of Android apps. This leaf does not describe misuse, replay, or exploit steps.
