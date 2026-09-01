# Uniden R/TACH 1.0.9 — application architecture

Package `com.uniden.rtach`, product name R/TACH, Play-distributed native Kotlin app (not Flutter / RN). This leaf maps the AndroidManifest, first-party package tree (~175 files under `decompiled/sources/com/uniden/rtach/`), Hilt graph, and BuildConfig flavor constants. Protocol, BLE GATT, HTTP, and UI-feature detail belong to sibling leaves.

Sources are jadx output. Kotlin original names survive in `/* compiled from: *.kt */` comments and `@Metadata`. The `p005ui` prefix is an R8 leftover; source packages were `com.uniden.rtach.ui.*`.

## Identity and SDK surface

From `decompiled/resources/AndroidManifest.xml`:

| Field | Value |
|---|---|
| package | `com.uniden.rtach` |
| versionName | `1.0.9` |
| versionCode | `14` |
| minSdk | `24` |
| targetSdk / compileSdk | `35` (codename 15) |
| requiredSplitTypes | `base__density` |

Matches `decompiled/sources/com/uniden/rtach/BuildConfig.java` (`APPLICATION_ID`, `VERSION_NAME`, `VERSION_CODE`).

## Launcher and Application class

`<application android:name="com.uniden.rtach.helper.BaseApplication">` (`AndroidManifest.xml` line 55).

`BaseApplication` (`decompiled/sources/com/uniden/rtach/helper/BaseApplication.java`):

- Annotated `@HiltAndroidApp`; extends generated `Hilt_BaseApplication`.
- `Hilt_BaseApplication.onCreate()` (`helper/Hilt_BaseApplication.java`) builds `DaggerBaseApplication_HiltComponents_SingletonC` with Hilt's `ApplicationContextModule`.
- `onCreate()` then: stores a static `context`, constructs `StoreUserData` from SharedPreferences, resets BT-connected flag, obtains `BluetoothManager` singleton, registers local + system broadcast receivers, and calls `UnidenLocationManager.getInstance().setupLocationSource()`. An `Intent` for `LocationDriverService` is allocated but not started in the decompiled `onCreate`.
- Process-wide `MutableLiveData` bus: BT connection state, alert characteristic, ETC/POI payloads, firmware-update progress, radar settings list, Wi-Fi SSID, write ACK/NACK.
- Nested receivers decode GATT notifications (alert / settings / ETC / POI / firmware version / command characteristic) and post into that LiveData. Companion holds last GPS fix and permission helpers.

Launcher activity: `com.uniden.rtach.p005ui.activity.SplashActivity`, `exported="true"`, intent-filter `MAIN` + `LAUNCHER`. `SplashActivity.initUi()` (`p005ui/activity/SplashActivity.java`) waits 3 seconds, clears firmware-updating flags, then starts `BLeDeviceListActivity` and `finish()`es. Splash is `@AndroidEntryPoint` and extends `Hilt_SplashActivity` → `BaseActivity`.

Startup chain: process start → `Hilt_BaseApplication.onCreate` (DI) → `BaseApplication.onCreate` (prefs, BLE manager, receivers) → `SplashActivity` → `BLeDeviceListActivity` (scan/pair) → `DashboardActivity` (main UI).

## Components declared in AndroidManifest

### First-party activities (all under `com.uniden.rtach.p005ui.activity`)

| Class | exported | Hilt | Role |
|---|---|---|---|
| `SplashActivity` | true (launcher) | `@AndroidEntryPoint` | 3s splash then BLE list |
| `BLeDeviceListActivity` | false | `@AndroidEntryPoint` | BLE scan / pair |
| `DashboardActivity` | false | `@AndroidEntryPoint` | main radar + map host |
| `SettingMenuActivity` | false | `@AndroidEntryPoint` | radar settings UI |
| `WifiSettingActivity` | false | `@AndroidEntryPoint` | device Wi-Fi for firmware |
| `FirmwareUpdateActivity` | false | `@AndroidEntryPoint` | download / flash firmware |
| `WebViewActivity` | false | **no** (plain `AppCompatActivity`) | in-app WebView (`weburl` extra) |

Hilt stubs: `Hilt_SplashActivity`, `Hilt_BLeDeviceListActivity`, `Hilt_DashboardActivity`, `Hilt_SettingMenuActivity`, `Hilt_WifiSettingActivity`, `Hilt_FirmwareUpdateActivity`. Each `*_GeneratedInjector` is in the same package. `WebViewActivity` is the only first-party activity outside that graph.

`DashboardActivity` hosts `DashboardFragment` and `MapsFragment` via `FragmentTransaction` (not declared in the AndroidManifest; fragments are not components).

### First-party service

- `com.uniden.rtach.helper.simulation.LocationDriverService` — `exported="false"`. Java `IntentService` (`helper/simulation/LocationDriverService.java`) that feeds mock/NMEA location into `UnidenLocationManager` / `MapsFragment`. Complements `ACCESS_MOCK_LOCATION`. `onHandleIntent` is empty; work lives in start/stop helpers and a `HandlerThread` NMEA reader.

### First-party receiver

- `com.uniden.rtach.helper.ConnectivityReceiver` — `enabled="true"`, `exported="true"`, action `android.net.conn.CONNECTIVITY_CHANGE`. Listener set plus static `ConnectivityReceiverListener` (`helper/ConnectivityReceiver.java`). Export + implicit connectivity action is a legacy pattern (targetSdk 35 still declares it).

### First-party / app-scoped provider

- `androidx.core.content.FileProvider` — `exported="false"`, `authorities="com.uniden.rtach.provider"`, `grantUriPermissions="true"`, paths `@xml/provider_paths`. Used for firmware/file sharing, not a custom ContentProvider.

No first-party `ContentProvider` subclass exists under `com.uniden.rtach`.

WorkManager workers `FileReadWorker` and `FirmWareUpdateWorker` (`helper/firmware_update/`) are **not** Manifest `<service>` entries; they are enqueued at runtime. The Manifest WorkManager services/receivers belong to AndroidX, not Uniden.

### Library components (not app code; listed for completeness)

Activities: `com.google.android.gms.common.api.GoogleApiActivity`.

Services: GMS measurement (`AppMeasurementService`, `AppMeasurementJobService`); Firebase `ComponentDiscoveryService`, `SessionLifecycleService`; WorkManager `SystemAlarmService`, `SystemJobService`, `SystemForegroundService`; Room `MultiInstanceInvalidationService`; datatransport `TransportBackendDiscovery`, `JobInfoSchedulerService`.

Receivers: `AppMeasurementReceiver`; WorkManager constraint/boot/diagnostics receivers; `ProfileInstallReceiver`; datatransport `AlarmManagerSchedulerBroadcastReceiver`.

Providers: `com.google.firebase.provider.FirebaseInitProvider` (`authorities="com.uniden.rtach.firebaseinitprovider"`, `initOrder="100"`); `androidx.startup.InitializationProvider` (`authorities="com.uniden.rtach.androidx-startup"`) initializing EmojiCompat, WorkManager, ProcessLifecycle, ProfileInstaller.

Hilt aggregated-deps meta-data: `com.google.dagger.hilt.android.modules` = `.data.module.AppModule`. Maps key: `com.google.android.geo.API_KEY` → `@string/google_maps_key`. Queries: `com.google.android.apps.maps`. Optional `uses-library`: `org.apache.http.legacy` and `android.ext.adservices` (both `required="false"`).

## Permissions and hardware features

Declared on the AndroidManifest (app + SDK-merged):

**Network / radio:** `INTERNET`, `ACCESS_NETWORK_STATE`, `ACCESS_WIFI_STATE`, `CHANGE_WIFI_STATE`.

**Bluetooth (device control path):** `BLUETOOTH`, `BLUETOOTH_ADMIN`, `BLUETOOTH_CONNECT`, `BLUETOOTH_SCAN`. Features `android.hardware.bluetooth` and `android.hardware.bluetooth_le` both `required="true"`. OpenGL ES 2.0 required.

**Location:** `ACCESS_FINE_LOCATION`, `ACCESS_COARSE_LOCATION`, `ACCESS_MOCK_LOCATION` (simulation / `LocationDriverService`).

**Storage / UX:** `READ_EXTERNAL_STORAGE`, `WRITE_EXTERNAL_STORAGE`, `requestLegacyExternalStorage="true"`, `POST_NOTIFICATIONS`, `WAKE_LOCK`, `FOREGROUND_SERVICE`, `RECEIVE_BOOT_COMPLETED`.

**Ads / Play / Hilt plumbing:** `BIND_GET_INSTALL_REFERRER_SERVICE`, `ACCESS_ADSERVICES_ATTRIBUTION`, `ACCESS_ADSERVICES_AD_ID`, signature-level `com.uniden.rtach.DYNAMIC_RECEIVER_NOT_EXPORTED_PERMISSION` (Hilt/AndroidX dynamic receivers).

`allowBackup="true"` with `@xml/backup_rules` and `@xml/data_extraction_rules`. `largeHeap="true"`. `extractNativeLibs="false"` (and fingerprint: no app `.so` in the base APK).

`BaseActivity` (`p005ui/base/BaseActivity.java`) runtime-requests Bluetooth + location and observes GPS enablement before scan. `BaseApplication.Companion.isPermissionAvailable()` checks FINE+COARSE.

## Package map (`decompiled/sources/com/uniden/rtach/`, 175 Java files)

jadx flattened Kotlin; inner classes and Hilt/Dagger generated types inflate the count. Logical source packages:

### Root `com.uniden.rtach`

- `BuildConfig.java` — flavor / version / firmware JSON URL (below).
- `C2074R.java` — generated `R`.
- `DataBinderMapperImpl.java` — Data Binding mapper.

### `p005ui` (original `ui`) — presentation

- `activity/` — seven activities + Hilt wrappers + injectors (see table).
- `fragment/` — `DashboardFragment` (gauge / band alerts, extends `BaseFragment`), `MapsFragment` (Google Map + fused location; extends `Fragment` directly, not `BaseFragment`). Neither fragment is `@AndroidEntryPoint`; they obtain ViewModels via `ViewModelProvider` from the activity.
- `adapter/` — `BLeSearchDeviceAdapter`, `BandAlertAdapter`, `NavigationDrawerAdapter`, `RadarItemSettingAdapter`, `SettingItemPickerAdapter`, `TableRowAdapter`.
- `base/` — `BaseActivity<VB>` (ViewBinding inflate lambda, permission/GPS/BT enable, lazy `SharedViewModel` / `BleDeviceListViewModel` / `DashboardViewModel`, `StoreUserData`, `BluetoothManager`); `BaseFragment<VB>` with the same permission helpers.

### `data` — models, DI module, prefs (no repository layer)

- `model/` (17 files): `AlertBandDataModel`, `BluetoothDeviceModel`, `CharacteristicData`, `ETCDataModel`, `MarkerAndPoiDataModel`, `NavigationMenuModel` (+ Kt), `RadarSettingsModel`, `RadarSettingsCategoryModel`, `RadarSettingsCategoryTable`, `RadarSettingsTitleModel`, `RadarVersionModel`, `SettingMenuItemModel`, `UpdateProgressModel`, `VersionUpdateModel`, `Limit`, `RelationalField`.
- `module/` — `AppModule` + `AppModule_ProvideBluetoothAdapterFactory` + `AppModule_ProvideContextFactory`.
- `sharedpref/` — `BaseSharedPrefs` (typed get/set) and `StoreUserData` (device name, firmware URLs/versions, BT/Wi-Fi flags, band colors, mute, GPS, laser TP, city/expert mode, …). **Not Room.** Room appears only as a library service in the AndroidManifest (`androidx.room.MultiInstanceInvalidationService`); no `@Dao` / `@Database` under `com.uniden.rtach`.

### `viewmodel` — five Hilt ViewModels

`DashboardViewModel`, `BleDeviceListViewModel`, `FirmwareUpdateViewModel`, `SettingMenuItemViewModel`, `SharedViewModel`, each with `*_Factory`, `*_HiltModules`, `*_HiltModules_KeyModule_ProvideFactory`.

### `helper` — device, BLE, firmware, simulation

- BLE: `BluetoothManager` (GATT singleton), `BluetoothScanner`, `BluetoothUtils`, `BluetoothState`, `MyBroadcaster`.
- Protocol-adjacent: `Constant` (UUIDs + firmware URL alias of BuildConfig), `AlertDataConverter`, `Utils` (per-model `.bin` URLs on `unidenup.com`).
- Firmware: `firmware_update/FirmwareUtils`, `FileReadWorker`, `FirmWareUpdateWorker` (WorkManager).
- Location sim: `simulation/LocationDriverService`, `UnidenLocationManager`, `MockLocationProvider`, `GPSStatusUpdate`, `Utility`.
- UI helpers: `GaugeView`, `Loader`, `CustomLog`, `WakeLockHelper`, enums `MyTab`, `TypeDash`, `FIrmWareUpdateProcess`, `WifiFirmwareUpdateType`, `MarkerTypeEnum`.
- Hilt generated: `Hilt_BaseApplication`, `DaggerBaseApplication_HiltComponents_SingletonC`, `BaseApplication_HiltComponents`, `BaseApplication_GeneratedInjector`, `BaseApplication_ComponentTreeDeps`.

### `databinding` — generated bindings (~40 files)

`ActivitySplashBinding`, `ActivityBleDeviceListBinding`, `ActivityDashboardBinding`, `ActivitySettingMenuBinding`, `ActivityWifiSettingBinding`, `ActivityFirmwareUpdateBinding`, `ActivityWebViewBinding`, `FragmentDashboardBinding`, `FragmentMapsBinding`, item/app-bar/loader bindings.

There is **no** `domain/`, `repository/`, or Retrofit `api/` package. Network I/O is WorkManager workers + ad-hoc HTTP in `FirmwareUpdateViewModel.downloadFile`; device I/O is `BluetoothManager`.

## Architecture pattern: MVVM + Hilt

Fingerprint and sources agree: Kotlin MVVM with LiveData, ViewBinding/DataBinding, and Hilt (Dagger). Not MVP (no Presenter types). Not Clean Architecture (no use-case/domain layer).

Typical flow:

```
Activity (@AndroidEntryPoint, extends Hilt_* → BaseActivity)
  → ViewModel (@Inject ctor, Hilt ViewModel map)
    → helper (BluetoothManager / BluetoothScanner / WorkManager)
      and/or StoreUserData SharedPreferences
  ← LiveData on ViewModel and on BaseApplication (process bus)
Fragment (DashboardFragment / MapsFragment) observes the same activity-scoped ViewModels
```

`BaseApplication` is an extra global ViewModel-like holder: GATT callbacks land there, then UI observes `getAlertCharacteristicChanged()`, `getSettingList()`, `getFirmwareUpdateProcess()`, etc. That is MVVM with an Application-scoped event bus, not a repository.

ViewModels (all constructor-injected; generated `*_HiltModules.BindsModule` maps FQCN → `ViewModel`):

| ViewModel | Injected deps | Responsibility |
|---|---|---|
| `BleDeviceListViewModel` | `BluetoothAdapter`, `Context` | BLE scan via `BluetoothScanner`; `LiveData<BluetoothDeviceModel>` |
| `DashboardViewModel` | `Context` | dashboard tabs, band alerts, GPS/BT icon state, mute/laser TP, lat/lng, app version |
| `FirmwareUpdateViewModel` | `Context` | `downloadFile` coroutine, enqueue `FirmWareUpdateWorker`, BT flash |
| `SettingMenuItemViewModel` | (none) | `isSettingsAvailable`, `isBasicMode` |
| `SharedViewModel` | (none) | `isRequiredPermissionAllowed` |

`@HiltViewModel` is stripped in some jadx output; the `*_HiltModules` `BindsModule` / `KeyModule` pair plus `@Inject` constructors prove Hilt ViewModel binding. Fragments are **not** Hilt Android entry points.

`BaseActivity` also constructs `BluetoothManager` and `StoreUserData` itself (not only via Hilt), so DI and manual singletons coexist.

## BuildConfig: flavor, version, URLs

`decompiled/sources/com/uniden/rtach/BuildConfig.java` (module `app_unidenRelease` in Kotlin metadata):

```
APPLICATION_ID = "com.uniden.rtach"
BUILD_TYPE     = "release"
DEBUG          = false
FLAVOR         = "uniden"
VERSION_CODE   = 14
VERSION_NAME   = "1.0.9"
LATEST_FIRMWARE_VERSION_CHECK_URL = "https://www.unidenup.com/R_series_latest_ver_info.json"
```

Flavor `uniden` is the product flavor that baked this APK (`app_unidenRelease`). No other `BuildConfig.java` exists under `com.uniden.rtach`.

URL consumers:

- `helper/Constant.java` copies `BuildConfig.LATEST_FIRMWARE_VERSION_CHECK_URL` into a mutable static (getter/setter).
- `helper/Utils.getFirmwareUpdateURL(Context)` returns a test JSON URL from prefs if `StoreUserData.getIsfileExist()`, else `Constant.getLATEST_FIRMWARE_VERSION_CHECK_URL()`.
- `DashboardActivity` assigns `REMOTE_FILE_URL = BuildConfig.LATEST_FIRMWARE_VERSION_CHECK_URL`.
- `BaseApplication` firmware-version GATT handler calls `FirmwareUtils.readLatestFirmwareVersions(ctx, utils.getFirmwareUpdateURL(ctx))`, which enqueues `FileReadWorker`.
- `Utils` also hardcodes per-model binary URLs: `https://www.unidenup.com/{R4W,R4,R8W,R8,R9W,R9,AE903i}/{model}_latest.bin`.

No Retrofit base URL, no auth token, no third-party API key in this `BuildConfig`. Maps key is a string resource referenced from the AndroidManifest, not BuildConfig.

## DI bindings in AppModule

`decompiled/sources/com/uniden/rtach/data/module/AppModule.java`:

```java
@Module
public final class AppModule {
    public static final AppModule INSTANCE = new AppModule();

    @Provides
    public BluetoothAdapter provideBluetoothAdapter(Context context) {
        return ((android.bluetooth.BluetoothManager)
            context.getSystemService("bluetooth")).getAdapter();
    }

    @Provides
    public Context provideContext(Application application) {
        return application.getApplicationContext();
    }
}
```

jadx dropped `@InstallIn(SingletonComponent::class)` on the Kotlin original; installation is still visible:

1. AndroidManifest meta-data `com.google.dagger.hilt.android.modules` = `.data.module.AppModule`.
2. `DaggerBaseApplication_HiltComponents_SingletonC.Builder.appModule(AppModule)` (deprecated Hilt builder hook) and imports of `AppModule` / `AppModule_ProvideContextFactory`.
3. Factories `AppModule_ProvideBluetoothAdapterFactory` and `AppModule_ProvideContextFactory`.
4. `BleDeviceListViewModel_Factory` takes `Provider<BluetoothAdapter>` + `Provider<Context>` — those come from these `@Provides` methods (adapter) and Hilt `ApplicationContextModule` / `provideContext` (context).

That is the entire first-party module: **two bindings**. No `@Binds` repository interfaces. ViewModels are bound by generated `*_HiltModules`, not by `AppModule`. `BluetoothManager` is a Kotlin `object`/singleton (`BluetoothManager.INSTANCE.getInstance`), not a Hilt `@Singleton` binding.

Graph root: `Hilt_BaseApplication` → `DaggerBaseApplication_HiltComponents_SingletonC` implementing `SingletonComponent` and `BaseApplication_GeneratedInjector`. Activity components exist for the six `@AndroidEntryPoint` activities listed above (`Dagger…` imports them). `WebViewActivity` and `LocationDriverService` are outside Hilt.

## Runtime data flow (architecture-level)

1. **Permissions / radio:** `BaseActivity.startPermissionCheck` → BT+location → enable adapters → `BleDeviceListViewModel.startBleScan()`.
2. **Connect:** `BluetoothManager` GATT connect; `MyBroadcaster.BLUETOOTH_CONNECTION_STATE_BROADCAST` → `BaseApplication.bluetoothConnectionReceiver` → prefs + `isBTConnected` LiveData.
3. **Radar stream:** characteristic-changed broadcasts → `BaseApplication` parsers (`AlertDataConverter`) → LiveData → `DashboardViewModel` / `DashboardFragment` / `MapsFragment`.
4. **Settings:** settings characteristic bytes → coroutine in `BaseApplication.updateSettingsCharacteristic` → `RadarSettingsModel` list + `StoreUserData` mirrors → `SettingMenuActivity`.
5. **Firmware:** version characteristic → `FirmwareUtils` / `FileReadWorker` (JSON from `unidenup.com`) → `FirmwareUpdateViewModel` download → `FirmWareUpdateWorker` / BLE or Wi-Fi (`WifiSettingActivity`) flash; ACK strings `RDrespACK` / `RDrptWSTS` etc. parsed in `BaseApplication`.
6. **Maps:** `MapsFragment` + Play Maps + fused location; optional mock feed from `LocationDriverService`.

## What this architecture is not

- Not a Retrofit/OkHttp service-interface app. OkHttp is on the classpath (fingerprint); first-party code uses WorkManager + streams for firmware JSON/binaries.
- Not Room-backed. Persistence is `StoreUserData` SharedPreferences (`AppPreferences_*` keys).
- Not JNI. No first-party `.so`; protocol is BLE GATT + HTTP firmware files.
- `WebViewActivity` is outside Hilt: no `@AndroidEntryPoint`, no `BaseActivity`.

## Citation index (decompiled paths)

- Manifest: `decompiled/resources/AndroidManifest.xml`
- Application: `decompiled/sources/com/uniden/rtach/helper/BaseApplication.java`, `helper/Hilt_BaseApplication.java`, `helper/DaggerBaseApplication_HiltComponents_SingletonC.java`
- BuildConfig: `decompiled/sources/com/uniden/rtach/BuildConfig.java`
- DI: `decompiled/sources/com/uniden/rtach/data/module/AppModule.java`
- Launcher: `decompiled/sources/com/uniden/rtach/p005ui/activity/SplashActivity.java`
- Base UI: `decompiled/sources/com/uniden/rtach/p005ui/base/BaseActivity.java`
- ViewModels: `decompiled/sources/com/uniden/rtach/viewmodel/*.java`
- Prefs: `decompiled/sources/com/uniden/rtach/data/sharedpref/StoreUserData.java`
- Firmware URL helper: `decompiled/sources/com/uniden/rtach/helper/Utils.java`, `helper/Constant.java`, `helper/firmware_update/FirmwareUtils.java`
- Fingerprint cross-check: `analysis/fingerprint.md`
