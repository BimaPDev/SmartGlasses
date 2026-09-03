# Uniden R/TACH 1.0.9 — Bluetooth / BLE transport

Leaf 1.3. App `com.uniden.rtach` talks to Uniden radar detectors over **BLE GATT only**. There is no Classic RFCOMM / SPP socket in `com.uniden.rtach` (no `BluetoothSocket`, `createRfcomm`, or `startDiscovery`). Classic Bluetooth APIs appear only for **bonding** (`createBond`, `BOND_STATE_CHANGED`) which Android uses for BLE pairing as well. Manifest requires both `android.hardware.bluetooth` and `android.hardware.bluetooth_le` (`decompiled/resources/AndroidManifest.xml`).

Permissions: `BLUETOOTH`, `BLUETOOTH_ADMIN`, `BLUETOOTH_CONNECT`, `BLUETOOTH_SCAN`, plus coarse/fine location (legacy BLE scan).

## Classic vs BLE

| Path | Used? | Evidence |
|---|---|---|
| BLE LE scan (`BluetoothLeScanner`) | Yes | `BluetoothScanner.startScan` |
| GATT connect (`BluetoothDevice.connectGatt`) | Yes | `BluetoothManager.tryConnectGatt` |
| GATT transport | `TRANSPORT_LE` (int `2`) | `device.connectGatt(context, false, gattCallback, 2)` |
| Classic inquiry / RFCOMM | No | no matches under `com.uniden` |
| Classic-style bond | Yes (for BLE pairing) | `BLeDeviceListActivity.pairWithDevice` → `createBond()` |

`BluetoothManager` is a `SingletonHolder` keyed on `Context` (`BluetoothManager.INSTANCE.getInstance(context)`).

## Scan filters and device name prefixes

`BluetoothScanner.startScan` builds **empty** `ScanFilter` list (`CollectionsKt.emptyList()`) and `ScanSettings.SCAN_MODE_BALANCED` (`setScanMode(1)`). Hardware does not filter by UUID or name. Adapter must be enabled; `BluetoothLeScanner` null aborts.

Name filtering is software-only in `BleDeviceListViewModel.startBleScan` callback. A result is posted iff the advertised name **contains** one of:

- `R4`
- `R8`
- `R9`
- `AE903i`

and the name has not already been added to `tempList` (dedupe by name, not MAC). Unknown/null names become `"Unknown Device"` in `BluetoothScanner.createDeviceModel` and will not match those substrings.

Scan window: `BLeDeviceListActivity.fetchBTDevices` schedules `stopBleScan` after **10_000 ms**. Refresh / swipe-to-refresh stop, clear, and rescan.

`BluetoothDeviceModel` fields: `name`, `address`, wrapped `BluetoothDevice`, `isPaired` (`bondState == 12` / `BOND_BONDED`).

Wi-Fi-capable radar: `BluetoothManager.connectToDevice` sets `StoreUserData.setWiFiModel` when the device name contains `W` (`ExifInterface.LONGITUDE_WEST`) or `AE903i`. JADX emits the AE903i test only on the branch where `W` is absent; a name containing `W` is treated as Wi-Fi.

## Pairing

Flow lives in `BLeDeviceListActivity`:

1. User taps a device (`onBTDeviceClick`). If `isPaired()` is false, show `radar_pairing_assistance_dialog`. OK → `pairWithDevice`.
2. `pairWithDevice` registers `pairingBroadcastReceiver` for `android.bluetooth.device.action.PAIRING_REQUEST` and `android.bluetooth.device.action.BOND_STATE_CHANGED`, stops scan, waits **3000 ms**, then `createBond()` on `adapter.getRemoteDevice(address)`.
3. Receiver on `BOND_BONDED` (12) calls `connectBluetooth()`. On `BOND_NONE` (10) waits **2000 ms** and retries `createBond()` (`pairingBroadcastReceiver$1$onReceive$1`). The filter includes `PAIRING_REQUEST` but the receiver body only handles `BOND_STATE_CHANGED` (no `setPin` / `setPairingConfirmation`).
4. If already paired, skip dialog and call `connectBluetooth()` immediately. First **paired** scan hit also auto-connects (`setAutoConnectAvailable(true)`).

`printBondState`: 10=`BOND_NONE`, 11=`BOND_BONDING`, 12=`BOND_BONDED`.

## GATT connect path

Entry: `BLeDeviceListActivity.connectBluetooth` → `BluetoothManager.connectToDevice(device)`.

1. Abort if `device.getName() == null`. Persist connecting flag + device name.
2. `tryConnectGatt(device, 1)`: `requestConnectionPriority(1)` (`CONNECTION_PRIORITY_HIGH`) on any existing GATT, then `connectGatt(context, autoConnect=false, gattCallback, TRANSPORT_LE=2)`.
3. After **300 ms**, if not `connected` and `retryCount < 3`, recurse (`tryConnectGatt` attempts 1..3).
4. `BluetoothManager$gattCallback$1.onConnectionStateChange`:
   - `newState==2` (`STATE_CONNECTED`) and `status==0`: set `connected`, store GATT, delay **500 ms**, `requestMtu(512)`, broadcast `BluetoothState.STATE_CONNECTED`.
   - `newState==1`: `STATE_CONNECTING`.
   - `newState==3`: `STATE_DISCONNECTING`.
   - `newState==0`: `STATE_DISCONNECTED` → `disconnect()`.
5. `onMtuChanged` success: delay **500 ms**, then `discoverServices()` if bond is `BOND_BONDED` (12) **or** `BOND_NONE` (10); skip while `BOND_BONDING`.
6. `onServicesDiscovered` status 0 → `readCharacteristicsWithDelay()`.

State enum `BluetoothState`: `STATE_CONNECTED`, `STATE_CONNECTING`, `STATE_DISCONNECTED`, `STATE_DISCONNECTING`, `STATE_SWITCH_OFF`, `STATE_SWITCH_ON`. Connection broadcasts use `MyBroadcaster.BLUETOOTH_CONNECTION_STATE_BROADCAST` (`com.example.BLUETOOTH_CONNECTION_STATE_BROADCAST`). Notify/read/write payloads use `CharacteristicData` (Parcelable: `BluetoothGattCharacteristic` + `byte[]`) on `BLUETOOTH_CHARACTERISTIC_CHANGED`.

## UUID table (exact strings from `Constant.java`)

SIG assigned numbers first, then Uniden 128-bit custom. CCCD short form **00002902**.

| Constant name | UUID string | Role |
|---|---|---|
| `CLIENT_CHARACTERISTIC_CONFIG` | `00002902-0000-1000-8000-00805f9b34fb` | CCCD (notify enable) |
| `UNIDEN_SERVICE_1_UUID` | `00001800-0000-1000-8000-00805f9b34fb` | SIG Generic Access (GAP). Getter only; no `findCharacteristic` use. |
| `UNIDEN_SERVICE_2_UUID` | `00001801-0000-1000-8000-00805f9b34fb` | SIG Generic Attribute (GATT). Getter only. |
| `UNIDEN_SERVICE_3_UUID` | `0000180a-0000-1000-8000-00805f9b34fb` | SIG Device Information. Parent of software/firmware revision chars. |
| `UNIDEN_SERVICE_4_UUID` | `18424398-7cbc-11e9-8f9e-2a86e4085a59` | Custom settings/alert/etc service |
| `UNIDEN_SERVICE_5_UUID` | `1842467c-7cbc-11e9-8f9e-2a86e4085a59` | Custom ASCII command service |
| `SETTINGS_CHARACTERISTIC_UUID_1` | `2d86686a-53dc-25b3-0c4a-f0e10c8dee20` | Settings blob (service 4). Notify + CCCD + read. |
| `SETTINGS_CHARACTERISTIC_UUID_2` | `5a87b4ef-3bfa-76a8-e642-92933c31434f` | Settings blob 2 (service 4). Notify + CCCD + read. |
| `SETTINGS_CHARACTERISTIC_UUID_3` | `15005991-b131-3396-014c-664c9867b917` | POI / user-mark bytes (`BaseApplication.updatePoiMarkerCharacteristic`). |
| `ALERT_CHARACTERISTIC_UUID` | `6eb675ab-8bd1-1b9a-7444-621e52ec6823` | Radar alert notify; extra `readCharacteristic` after CCCD. |
| `ETC_DATA_CHARACTERISTIC_UUID` | `6c290d2e-1c03-aca1-ab48-a9b908bae79e` | Ancillary notify (auto-brightness etc.); extra read after CCCD. |
| `WRITE_COMMAND_CHARACTERISTIC_UUID` | `2c86686a-53dc-25b3-0c4a-f0e10c8dee20` | **Write** ASCII `BTreq*` / `BTdn*` (service 5). `WRITE_TYPE_NO_RESPONSE` (1). |
| `READ_COMMAND_CHARACTERISTIC_UUID` | `5987b4ef-3bfa-76a8-e642-92933c31434f` | Command **notify/read** (service 5). `RDresp*` / `RDrpt*`. |
| `READ_FIRMWEAR_VERSION` | `00002a26-0000-1000-8000-00805f9b34fb` | SIG Firmware Revision String. **Defined, never read** by app code. |
| `READ_SOFTWEAR_VERSION` | `00002a28-0000-1000-8000-00805f9b34fb` | SIG Software Revision String. `readRadarSoftwareVersion()` under service 3. |

`SETTINGS_CHARACTERISTIC_UUID_1` / `WRITE_COMMAND_CHARACTERISTIC_UUID` differ by one nibble (`2d` vs `2c`). `SETTINGS_CHARACTERISTIC_UUID_2` / `READ_COMMAND_CHARACTERISTIC_UUID` differ by `5a` vs `59`.

## Notify vs write characteristics

Post-discover (`readCharacteristicsWithDelay`):

1. `enableReadSettingsNotification(SETTINGS_CHARACTERISTIC_UUID_1)` — service 4, `setCharacteristicNotification(true)`, write CCCD `00002902` = `ENABLE_NOTIFICATION_VALUE`, then `readCharacteristic`.
2. Same for `SETTINGS_CHARACTERISTIC_UUID_2`.
3. `readResponses()` — service 5 + `READ_COMMAND_CHARACTERISTIC_UUID`: notification flag + read; **no CCCD write** here.
4. Coroutine `BluetoothManager$readCharacteristicsWithDelay$1$1` (Kotlin lines 332/334 delay points; JADX failed to emit the body). Private `enableNotifications` is only reachable from this class: write CCCD `00002902`, `setCharacteristicNotification(true)`, and if UUID is `ETC_DATA_CHARACTERISTIC_UUID` or `ALERT_CHARACTERISTIC_UUID`, also `readCharacteristic`. `SETTINGS_CHARACTERISTIC_UUID_3` is consumed on notify/read in `BaseApplication` (hex POI markers) but is not in the explicit enable-1/enable-2 pair.

Writes: `writeCharacteristic(String data)` UTF-8 encodes the string, locates service 5 + `WRITE_COMMAND_CHARACTERISTIC_UUID`, `setWriteType(1)` (`WRITE_TYPE_NO_RESPONSE`), `writeCharacteristic`. API 33+ still uses the pre-33 `writeCharacteristic(characteristic)` overload in the recovered code.

`enableReadSettingsNotification2` is a one-shot `readCharacteristic` on service 4 (used from settings UI), no CCCD.

Incoming values are UTF-8 except `SETTINGS_CHARACTERISTIC_UUID_3` (raw bytes → uppercase hex). Dummy payload `"0&0&0&0"` is ignored for alert/settings/etc/version.

## ASCII commands on the write characteristic

`Constant.java` `BTreq*` sent via `writeCharacteristic`:

| Constant | ASCII |
|---|---|
| `ADD_USER_MARK` | `BTreqUMRK:1` |
| `DELETE_USER_MARK` | `BTreqUMRK:0` |
| `ALERT_ADD_MUTE_MEM_CMD` | `BTreqMMEM:1` |
| `ALERT_DELETE_MUTE_MEM_CMD` | `BTreqMMEM:0` |
| `ALERT_MUTE_CMD` | `BTreqMUTE:1` |
| `ALERT_UN_MUTE_CMD` | `BTreqMUTE:0` |
| `DELETE_RED_LIGHT_CAMERA` | `BTreqRLCD:0` |

`BluetoothUtils` holds firmware-download tokens (`BTdnSTART`, `BTdnUISTR`, … `BTdnFINIS`, `BTdnFLSWR`, `BTdnWRDON`) and device reports (`RDrespACK`, `RDrespNAK`, `RDrptSETC`, `RDrptMMEM`, `RDrptUMRK`, `RDrptMUTE`, `RDrptRLCD`, `RDrptSPDD`, `RDrptRNSD`, `RDrptNMSG`, `RDrptWSTS`, `RDrptWEND`, `RDrptWIAP`, `RDrptDURL`). Those ride the same write/notify pair; frame layout belongs to leaf 1.4.

## Disconnect

`BluetoothManager.disconnect()`: log, `bluetoothGatt.disconnect()`, `close()`, set field `null`. Callers: `onConnectionStateChange` when `newState==0`, `BaseActivity`, `DashboardActivity`, and `BaseApplication`. That path also `setBluetoothConnected(false)` and broadcasts `STATE_DISCONNECTED`. `stopBleScan` reconstructs a fresh `BluetoothScanner`.

`connectToDevice` refuses unnamed devices, so a connect must follow a named LE advertisement (or a bonded device that still exposes a name).

## Sources

- `decompiled/sources/com/uniden/rtach/helper/Constant.java`
- `decompiled/sources/com/uniden/rtach/helper/BluetoothManager.java` (+ `$gattCallback$1`)
- `decompiled/sources/com/uniden/rtach/helper/BluetoothScanner.java`
- `decompiled/sources/com/uniden/rtach/helper/BluetoothState.java`
- `decompiled/sources/com/uniden/rtach/helper/BluetoothUtils.java`
- `decompiled/sources/com/uniden/rtach/p005ui/activity/BLeDeviceListActivity.java` (+ pairing receiver)
- `decompiled/sources/com/uniden/rtach/viewmodel/BleDeviceListViewModel.java`
- `decompiled/sources/com/uniden/rtach/data/model/BluetoothDeviceModel.java`
- `decompiled/sources/com/uniden/rtach/data/model/CharacteristicData.java`
- `decompiled/resources/AndroidManifest.xml`
