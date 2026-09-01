# Uniden R/TACH 1.0.9 UI feature catalog

Package `com.uniden.rtach` (jadx path `com.uniden.rtach.p005ui`). Architecture is Hilt + MVVM: six of seven app Activities extend `BaseActivity` and bind a `ViewModel` through data-binding; `WebViewActivity` is a plain `AppCompatActivity` with no ViewModel.

This leaf catalogs every declared Activity, launcher flags, the navigation drawer, dashboard radar alerts and gauge/tach, settings menus, BLE device list, firmware update, Wi-Fi setting, and WebView, with click-to-ViewModel maps. Citations are decompiled Java (original Kotlin in JADX comments).

## Activity inventory (AndroidManifest)

Source: `decompiled/resources/AndroidManifest.xml` lines 65–90, package `com.uniden.rtach`.

| Activity class | exported | launcher | ViewModel |
|---|---|---|---|
| `com.uniden.rtach.p005ui.activity.SplashActivity` | **true** | **MAIN + LAUNCHER** | none |
| `com.uniden.rtach.p005ui.activity.BLeDeviceListActivity` | false | no | `BleDeviceListViewModel` (+ `SharedViewModel` for permissions) |
| `com.uniden.rtach.p005ui.activity.DashboardActivity` | false | no | `DashboardViewModel` |
| `com.uniden.rtach.p005ui.activity.SettingMenuActivity` | false | no | `SettingMenuItemViewModel` |
| `com.uniden.rtach.p005ui.activity.FirmwareUpdateActivity` | false | no | `FirmwareUpdateViewModel` |
| `com.uniden.rtach.p005ui.activity.WifiSettingActivity` | false | no | none (uses `BaseApplication` LiveData) |
| `com.uniden.rtach.p005ui.activity.WebViewActivity` | false | no | none |

Third-party: `com.google.android.gms.common.api.GoogleApiActivity` (`exported=false`) is Play Services, not an R/TACH screen.

**Launcher flag:** only `SplashActivity` has `android.intent.action.MAIN` + `android.intent.category.LAUNCHER` and `android:exported="true"`. Every other Uniden Activity is `exported="false"` with no intent-filter.

## Screen graph

```
SplashActivity (3s)
    -> BLeDeviceListActivity
         -- STATE_CONNECTED (BaseActivity, 5s) --> DashboardActivity
         -- 5-tap version label (debug, no finish) -> DashboardActivity
DashboardActivity
    tab DASHBOARD -> DashboardFragment  (gauge / tach)
    tab MAP       -> MapsFragment       (Google Map)
    drawer Settings  -> SettingMenuActivity
    drawer Wi-Fi     -> WifiSettingActivity   (wifi-model + BT)
    drawer Firmware  -> FirmwareUpdateActivity
    drawer About     -> WebViewActivity
    updateWarning    -> FirmwareUpdateActivity
    btnDisconnect    -> BLeDeviceListActivity (FLAG_ACTIVITY_CLEAR_TASK=0x8000)
FirmwareUpdateActivity.btnChangeSsid -> WifiSettingActivity
```

## SplashActivity (launcher)

Source: `SplashActivity.java` `initUi()` / `initUi$lambda$0`.

- Inflates `ActivitySplashBinding`. `setListeners()` is empty.
- Casts Application to `BaseApplication`, logs `initUi StartApp`, posts `"0&0&0&0"` on `alertCharacteristicChanged` (clears band-alert state).
- `Handler(Looper.getMainLooper()).postDelayed(..., 3000L)` then:
  - `sharedPrefs.setFirmWareUpdating(false)`
  - `sharedPrefs.setIsfileExist(false)`
  - `startActivity(Intent(this, BLeDeviceListActivity.class))`
  - `finish()`
- **No ViewModel.** First user-facing screen after the splash delay is always the BLE list.

## BLeDeviceListActivity (Connect Device)

Sources: `BLeDeviceListActivity.java`, `BleDeviceListViewModel.java`, `BLeSearchDeviceAdapter.java`, `SharedViewModel.java`. Title string `str_connect_device` = "Connect Device". Binding: `ActivityBleDeviceListBinding`.

### Init and ViewModel

- `viewModels()` → `BleDeviceListViewModel`. Data-binding `setViewModel(getViewModel())`.
- `initUi`: title, `Loader`, `initData()`, `startPermissionCheck()`. Observes `SharedViewModel.isRequiredPermissionAllowed()`; when true, `fetchBTDevices()`.
- `initData` builds `BLeSearchDeviceAdapter` with `onBTDeviceClick`.

### Click → ViewModel / action

| UI control | Click / event | ViewModel / next |
|---|---|---|
| `btnRefresh` | stop scan, `adapter.clearData()`, show loader, delay 1s, `fetchBTDevices()` | `BleDeviceListViewModel.stopBleScan()` then `startBleScan()` |
| `swiperefresh` | same scan restart | `stopBleScan()` + `startBleScan()` |
| `textView2` (shows `BuildConfig.VERSION_NAME`) | 5 taps | **bypasses BLE**: `startActivity(DashboardActivity)` without `finish()` (no ViewModel) |
| Recycler item (`BLeSearchDeviceAdapter` root) | `onBTDeviceClick` | unpaired → `showAssistPairingDialog`; paired → `connectBluetooth()` → `BluetoothManager.connectToDevice` (scan stopped via ViewModel) |
| Pairing dialog `btnOk` | `pairWithDevice` | `stopBleScan()` then `createBond()` after 3s IO delay |
| Pairing dialog `btnCancel` | dismiss | none |

`fetchBTDevices` observes `viewModel.getBleDevices()` (`LiveData<BluetoothDeviceModel>`), updates the adapter, and auto-connects if `isPaired()`. Scan auto-stops after 10s (`stopScanRunnable`). Empty list shows `llNoDevices`.

`BleDeviceListViewModel.startBleScan` uses `BluetoothScanner` and keeps devices whose name contains `R4`, `R8`, `R9`, or `AE903i`.

**Navigation out:** `BaseActivity` observes `BluetoothState.STATE_CONNECTED` while the current Activity is `BLeDeviceListActivity`, waits 5s, then `startActivity(DashboardActivity)` and `finish()` (`BaseActivity.java` ~501–553). That hop is in `BaseActivity`, not the BLE ViewModel.

## DashboardActivity (host + drawer + radar alerts)

Sources: `DashboardActivity.java`, `DashboardViewModel.java`, `NavigationDrawerAdapter.java`, `NavigationMenuModel.java`, `BandAlertAdapter.java`. Binding: `ActivityDashboardBinding`. Hilt `@AndroidEntryPoint`.

`initUi` binds `DashboardViewModel`, observes `BaseApplication.isBTConnected()` and `etcDataChanged`, calls `getViewModel().getConnectedDevice(context)` and `getAppVersion(context)` (populate `_connectedDevice` / `_appVersion` LiveData), loads the drawer, and fetches firmware URL via `Utils.getFirmwareUrlAndAP`.

### Tabs (Dashboard vs Map)

`DashboardViewModel.selectedTab` defaults to `MyTab.DASHBOARD`.

| Click | ViewModel | Result |
|---|---|---|
| `txtDashboard` | `selectedTab.postValue(MyTab.DASHBOARD)` if not already | replace `myFragmentFrame` with `DashboardFragment` tag `DashboardFragment`; hide `MapsFragment` |
| `txtMap` | `selectedTab.postValue(MyTab.MAP)` if not already | if GPS provider enabled: `gpsIconVisibility=true` and `showMapFragment()`; else GPS-enable dialog |
| `img_menu` | none | `drawerLayout.openDrawer(GravityCompat.START)` |
| `imgBack` | none | close drawer |
| `imgGpsIcon` | `onGpsClick.postValue(true)` | `MapsFragment.observeDataChange` recenters camera (`getLastKnownLocation`) |

### Radar alerts (app bar)

`BaseApplication.alertCharacteristicChanged` (`String`, ampersand-delimited band payload) is observed in `setListeners`. Values `"0&0&0&0"` / `"0&0&0&0&0&0&0&0"` are ignored. Non-empty payloads call `showAlert` / `updateAlertData`:

- `DashboardViewModel.bandAlertVisibility = true`
- `AlertDataConverter.parseAlertBandData` (R9 / AE903i name changes parse path)
- Primary band painted on `txtDetectedBand`, `textBandFrequency`, `imgBandDirection`, `imgBandRSSILevel`
- Remaining bands go to `BandAlertAdapter` on `recyclerViewBandItem` (`GridLayoutManager` span 3)
- `updateMuteStatus(mute_type)` and `updateLaserTpAlertInfo(...)` on `DashboardViewModel`
- 4s `CountDownTimer` then `hideAlert()` (`bandAlertVisibility=false`, reset characteristic to `"0&0&0&0"`)
- mute_type `"6"` starts fade blink on `conBlink`

### App-bar clicks → ViewModel / BLE

| Click | ViewModel read/write | BLE write |
|---|---|---|
| `llMuteButton` | reads `isMute()`, inverts locally (does not `setValue` here) | `ALERT_UN_MUTE_CMD` if currently muted, else `ALERT_MUTE_CMD` (`"BTrepMUTE:0"` is dead in the else) |
| `llMuteMemory` | `labelMuteMem`, `isMuteMemClickable` | `BTreqMMEM:0|1,<freq>` (MRCD adds +5000) |
| `llReceiveMode` | `isWorkReceiveModeFunction`; `startWaitReceiveModeReport()` | `BTreqMUTE:3` or `:4` |
| `llAddMapAlertMark` | none | `Constant.DELETE_RED_LIGHT_CAMERA` |
| `llAddMark` | none | `Constant.ADD_USER_MARK` |
| `llDeleteUserMark` | `deleteUserMarkVisibility=false` | `Constant.DELETE_USER_MARK` |
| `updateWarning` | none | start `FirmwareUpdateActivity` |
| `btnDisconnect` | none | `BluetoothManager.disconnect()`, clear prefs, `BLeDeviceListActivity` with flags `0x8000`, `finish()` |
| `llDeviceName` | none | 5 taps → `Utils.shareLogFile` |
| `img_gps` | none | 5 taps → JSON file picker (`PICK_FILE_REQUEST_CODE=1`) overriding `firmware_url` then `checkFirmwareUpdate()` |
| volume keys 24/25 | none | `BTreqSETC:101=<0..8>` plus `AudioManager` stream 3 |

POI overlay (`displayPoiAlert`) sets `addUserMarkVisibility` / `deleteUserMarkVisibility` / `deleteRedLightVisibility` from `ETCDataModel` poi type + GPS status. GPS icon LiveData `gpsConnected` uses `ic_gps` vs `ic_gps_grey` from `etcDataChanged.gpsStatus` (`C` connected).

`DashboardViewModel` LiveData used by the host: `selectedTab`, `btConnected` (drawable), `gpsConnected`, `gpsIconVisibility`, `onGpsClick`, `bandAlertVisibility`, `isMute`, `labelMuteMem`, `isMuteMemClickable`, `isWorkReceiveModeFunction`, `isR9Device`, `addUserMarkVisibility`, `deleteUserMarkVisibility`, `deleteRedLightVisibility`, `connectedDevice`, `appVersion`.

## Navigation drawer

Sources: `DashboardActivity.loadMenu`, `NavigationMenuModel.java` (`icon` + `title`), `NavigationDrawerAdapter.java`, strings `menu_setting` / `menu_wifi_setting` / `menu_firmware_updates` / `menu_about`.

`loadMenu` always starts with Settings (`ic_menu_settings`, "Settings"). Conditional inserts:

1. **Wi-Fi Settings** (`ic_wifi`) if `sharedPrefs.isWiFiModel()` **and** `BaseApplication.isBTConnected()` LiveData is `true` (inserted at index 1).
2. **Firmware Updates** (`ic_menu_frimware_update`) if the `isBluetoothConnected` field is true **and** either the device name contains `R9` or the Wi-Fi-model+BT branch above ran. Firmware row shows `updateWarning` badge when `isUpdateAvailable()` (`NavigationDrawerAdapter.bind`).
3. **About** (`ic_menu_about`) always appended.

Click routing is **by icon resource**, not title (`OnMenuItemClick`):

| Icon | Target Activity | ViewModel on destination |
|---|---|---|
| `ic_menu_settings` | `SettingMenuActivity` | `SettingMenuItemViewModel` |
| `ic_wifi` | `WifiSettingActivity` | none |
| `ic_menu_frimware_update` | `FirmwareUpdateActivity` | `FirmwareUpdateViewModel` |
| `ic_menu_about` | `WebViewActivity` | none |
| `ic_mark_alert` / `ic_menu_faq` | no-op (FAQ string exists; drawer never adds it) | — |

Drawer does not go through `DashboardViewModel`; it is Activity-local. `closeDrawer()` delays 1s then `closeDrawer(START)`.

## DashboardFragment (gauge / tach)

Source: `DashboardFragment.java`. Shares the Activity-scoped `DashboardViewModel` (`ViewModelProvider(requireActivity())`). Also constructs `SharedViewModel` from the same store but does not observe it in `setListeners`. Binding: `FragmentDashboardBinding`. Custom view `GaugeView` (`imgSpeedometer`).

| Event | ViewModel | UI |
|---|---|---|
| `initUi` | bind VM; `imgSpeedometer.setTargetValue(0)`; unit from `sharedPrefs.getSpeedUnit()` | analog speed gauge (tach) |
| `etcDataChanged` | `altitude`, `volt`, `directionVisibility`, `updateDirection`, `_modeType` | gauge needle = `Float.parseFloat(currentSpeed)`; altitude + ft/m; voltage + "V"; compass string |
| `isBTConnected==false` | `volt="0 V"`, `altitude="0 ft"`; `layoutMode` disabled | — |
| `layoutMode` click (BT connected) | `_modeType` set after picker confirm | Highway / City / Auto / Advanced picker; write `BTreqSETC:1=<index>` |

This is the **tach/gauge** surface. Radar **band** alerts live on the Activity app bar, not this fragment.

## MapsFragment

Source: `MapsFragment.java`. Same Activity-scoped `DashboardViewModel`. Observes `onGpsClick` (recenter) and `BaseApplication.poiDataChanged` (marker map). `GoogleMap.OnMarkerClickListener`. User-mark add/delete is driven from DashboardActivity visibility LiveData + BLE constants, not a Maps-specific ViewModel.

## SettingMenuActivity

Sources: `SettingMenuActivity.java`, `SettingMenuItemViewModel.java`, `RadarItemSettingAdapter.java`. Binding: `ActivitySettingMenuBinding`.

`SettingMenuItemViewModel` holds only two flags: `isSettingsAvailable`, `isBasicMode`. The row list itself comes from `BaseApplication.getSettingList()` (`List<RadarSettingsModel>`), filtered by Basic/Expert mode string and relational visibility (`write_index`, K Bogey Tone, Laser Gun ID on R4/R8/R4W/R8W).

| Click | ViewModel | BLE |
|---|---|---|
| `btnBack` | none | finish; clear alert characteristic |
| `txtBasic` | no-op if `isBasicMode==true` | otherwise `BTreqSETC:0=0` |
| `txtExpert` | writes only if `isBasicMode==true` | `BTreqSETC:0=1` |
| `settingList` observer | `isSettingsAvailable`, `isBasicMode` from `sharedPrefs.getSettingMode()` (`Basic`/`Expert`) | — |
| adapter picker / switch | none (adapter writes directly) | `BTreqSETC:<write_index>=<value>` |
| BT `STATE_CONNECTED` | none | `enableReadSettingsNotification2(SETTINGS_CHARACTERISTIC_UUID_1)` |

`RadarItemSettingAdapter` is the settings **menu** UI: category sticky header, NumberPicker, switch, confirmation dialogs. Clicks do **not** call `SettingMenuItemViewModel`; they write GATT via `BluetoothManager`.

## FirmwareUpdateActivity

Sources: `FirmwareUpdateActivity.java`, `FirmwareUpdateViewModel.java`, `TableRowAdapter.java`. Binding: `ActivityFirmwareUpdateBinding`.

`initUi`: wake lock, `viewModel.initApp(myApp)`, `Utils.checkIfUpdateAvailable`, observe `etcDataChanged` (radar Wi-Fi `C`), `isBTConnected`, `firmwareUpdateProcess` (Wi-Fi path), `firmwareUpdateProcessBT` (BT path). Version table from `Utils.getFirmwareVersions` → `TableRowAdapter`.

| Click | ViewModel | Action |
|---|---|---|
| `btnBack` | none | finish |
| `checkRecoveryMode` | none | `Constant.setUpdateMode("R")` when checked, else `"N"` |
| `txtFullUpdate` | none then later `downloadFile` | `setUpdateType("F")`, `checkForUpdates()` |
| `txtDbUpdate` | none then later `downloadFile` | `setUpdateType("D")`; skip unless GPS DB available or recovery checked |
| `btnChangeSsid` | none | `WifiSettingActivity` |
| warning dialog OK | `FirmwareUpdateViewModel.downloadFile(url)` on BT path | Wi-Fi model + radar Wi-Fi: `BTdnSTWFU:<type>,<mode>,<url>` |
| progress `btnDone` | none | dismiss; clear `FwDownloadComplete` / `FwFlashing` |

Non-Wi-Fi non-R9 devices hide `llUpdate` and show an HTML link to `https://www.uniden.info/download/` (PC tool). BT download progress is posted as `UpdateProgressModel` / `FIrmWareUpdateProcess` enum (FILE_DOWNLOAD_START … FILE_INSTALL_FINISH). `downloadFile` / `updateFirmware` / `flashBT` live on `FirmwareUpdateViewModel`.

## WifiSettingActivity

Source: `WifiSettingActivity.java`. **No screen ViewModel.** Binding: `ActivityWifiSettingBinding`.

- `onStart`: `BluetoothManager.writeCharacteristic("BTreqGWAP:")` (get AP).
- Observes `BaseApplication.connectedWiFiSSID` and `etcDataChanged.radarWiFiStatus` (`C` = connected).
- `dropdownWiFi` end-icon: if phone Wi-Fi on, `WifiManager.getScanResults()` → SSID spinner; else toast "Please Turn On the Wifi".
- `btnUpdate`: reject 5 GHz (`convertFrequencyToBand`); else `BTreqSWAP:<ssid>,<password>` and show loader.
- `btnBack`: finish.

Phone scan is local `WifiManager`; the radar association is BLE `BTreqSWAP` / `BTreqGWAP`, not Android `WifiManager.connect`.

## WebViewActivity (About)

Source: `WebViewActivity.java`. **No ViewModel, not `@AndroidEntryPoint`.** Title "About", `textView2` = `"Version 1.0.9"`. Default pane is `llPricypolcyLayout` (privacy + terms buttons); `webView` starts GONE.

| Click | URL | ViewModel |
|---|---|---|
| `txtPrivacyPolicy` | `https://uniden.com/pages/app-policy` | none |
| `txtTermsandCondition` | `https://uniden.com/policies/terms-of-service` | none |
| `btnBack` / system back | if WebView visible, return to About pane; else `super.onBackPressed()` | none |

`showWebViewWithUrl` enables JavaScript and a default `WebViewClient`. `onPause` still clears `alertCharacteristicChanged`.

## Fragments and adapters (supporting)

| Type | Class | Role |
|---|---|---|
| Fragment | `DashboardFragment` | gauge/tach + city-mode picker |
| Fragment | `MapsFragment` | Google Map, POI markers, heading-up camera |
| Adapter | `NavigationDrawerAdapter` | drawer rows from `NavigationMenuModel` |
| Adapter | `BandAlertAdapter` | extra radar bands on dashboard app bar |
| Adapter | `BLeSearchDeviceAdapter` | scanned R4/R8/R9/AE903i devices |
| Adapter | `RadarItemSettingAdapter` | settings rows → `BTreqSETC` |
| Adapter | `SettingItemPickerAdapter` | picker values inside settings |
| Adapter | `TableRowAdapter` | firmware version table |

## ViewModel map (screen-owned)

| ViewModel | Owner | Public surface used by UI |
|---|---|---|
| `DashboardViewModel` | DashboardActivity + DashboardFragment + MapsFragment | `selectedTab`, `onGpsClick`, mute/laser/receive LiveData, `bandAlertVisibility`, mark visibility, `getConnectedDevice(Context)`, `getAppVersion(Context)`, `updateMuteStatus`, `updateLaserTpAlertInfo`, `startWaitReceiveModeReport` |
| `BleDeviceListViewModel` | BLeDeviceListActivity | `bleDevices`, `startBleScan`, `stopBleScan` |
| `SettingMenuItemViewModel` | SettingMenuActivity | `isBasicMode`, `isSettingsAvailable` |
| `FirmwareUpdateViewModel` | FirmwareUpdateActivity | `initApp`, `downloadFile`, `updateFirmware`, `flashBT` |
| `SharedViewModel` | BLE list (+ fragment) | `isRequiredPermissionAllowed` |

WifiSetting and WebView have no ViewModel. Splash has no ViewModel.

## Hidden / debug gestures

- BLE list version label ×5 → Dashboard without a connection.
- Dashboard `img_gps` ×5 → pick JSON `{ "firmware_url": ... }` into `StoreUserData.setTestjsonFirmwareURL`.
- Dashboard `llDeviceName` ×5 → `Utils.shareLogFile`.

These do not go through a ViewModel.

## Citations (primary)

- Manifest launcher: `decompiled/resources/AndroidManifest.xml` 65–90.
- Splash → BLE: `SplashActivity.java` 51–77.
- BLE scan/filter: `BleDeviceListViewModel.java` 59–116.
- BLE → Dashboard: `BaseActivity.java` 501–553.
- Drawer items: `DashboardActivity.java` `loadMenu` 1078–1158; model `NavigationMenuModel.java`.
- Radar alerts: `DashboardActivity.java` `showAlert` / `loadData` 775–957.
- Gauge: `DashboardFragment.java` 151–238 (`GaugeView.setTargetValue`).
- Settings Basic/Expert: `SettingMenuActivity.java` 204–223.
- Firmware clicks: `FirmwareUpdateActivity.java` 1116–1325.
- Wi-Fi BLE commands: `WifiSettingActivity.java` 155–159, 350–375.
- About WebView: `WebViewActivity.java` 57–117.
