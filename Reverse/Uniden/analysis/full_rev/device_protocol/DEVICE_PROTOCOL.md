# Uniden R/TACH 1.0.9 — phone ↔ radar detector protocol

Documentation only. Reconstructed from decompiled app sources and `R.json`. No
over-the-air capture was used. Byte offsets below are offsets into the GATT
value the app already received, not attack procedures.

The phone never writes the packed settings blob directly. It writes UTF-8 ASCII
commands on one characteristic; the detector pushes state on notify
characteristics. Settings characteristic 1/2/3 are **not** a write path.

## Transport and GATT map

After connect the client requests **MTU 512** (`BluetoothManager$gattCallback$1`
`onConnectionStateChange` → `requestMtu(512)`), then discovers services.

| Role | UUID | Constant | Service |
|---|---|---|---|
| Generic Access | `00001800-0000-1000-8000-00805f9b34fb` | `UNIDEN_SERVICE_1_UUID` | SIG |
| Generic Attribute | `00001801-0000-1000-8000-00805f9b34fb` | `UNIDEN_SERVICE_2_UUID` | SIG |
| Device Information | `0000180a-0000-1000-8000-00805f9b34fb` | `UNIDEN_SERVICE_3_UUID` | SIG 0x180A |
| Uniden data | `18424398-7cbc-11e9-8f9e-2a86e4085a59` | `UNIDEN_SERVICE_4_UUID` | vendor |
| Uniden command | `1842467c-7cbc-11e9-8f9e-2a86e4085a59` | `UNIDEN_SERVICE_5_UUID` | vendor |
| CCCD | `00002902-0000-1000-8000-00805f9b34fb` | `CLIENT_CHARACTERISTIC_CONFIG` | SIG |

Vendor characteristics on service 4 (data / notify):

| Name in `Constant.java` | UUID | App use |
|---|---|---|
| `SETTINGS_CHARACTERISTIC_UUID_1` | `2d86686a-53dc-25b3-0c4a-f0e10c8dee20` | packed radar settings blob (raw `byte[]`) |
| `SETTINGS_CHARACTERISTIC_UUID_2` | `5a87b4ef-3bfa-76a8-e642-92933c31434f` | CCCD notify + GATT read at connect; **1.0.9 receiver does not decode it** |
| `SETTINGS_CHARACTERISTIC_UUID_3` | `15005991-b131-3396-014c-664c9867b917` | POI / marker packets (hex of binary), **not** settings |
| `ALERT_CHARACTERISTIC_UUID` | `6eb675ab-8bd1-1b9a-7444-621e52ec6823` | alert notify, UTF-8 `&`- and comma-separated text |
| `ETC_DATA_CHARACTERISTIC_UUID` | `6c290d2e-1c03-aca1-ab48-a9b908bae79e` | voltage / GPS / POI proximity / Wi-Fi |

Vendor characteristics on service 5 (command):

| Name | UUID | Direction |
|---|---|---|
| `WRITE_COMMAND_CHARACTERISTIC_UUID` | `2c86686a-53dc-25b3-0c4a-f0e10c8dee20` | phone → detector, UTF-8 ASCII |
| `READ_COMMAND_CHARACTERISTIC_UUID` | `5987b4ef-3bfa-76a8-e642-92933c31434f` | detector → phone ACK/NAK/progress |

Writes use `BluetoothGattCharacteristic.WRITE_TYPE_NO_RESPONSE` (`setWriteType(1)`)
and `str.getBytes(Charsets.UTF_8)`. No CR/LF or length prefix is appended by the
app. Notify/read/write all fan into `MyBroadcaster.BLUETOOTH_CHARACTERISTIC_CHANGED`
with the raw `byte[]`.

Connect subscribe order (`readCharacteristicsWithDelay`):

1. Enable CCCD + read settings char **1**
2. Enable CCCD + read settings char **2**
3. Enable notify + read command-response char (service 5)
4. Coroutine then walks remaining characteristics via `enableNotifications`,
   which extra-reads Alert and ETC once CCCD is written

## Settings blob: `write_index` / `read_index` / `byte_value`

Source of truth: `decompiled/resources/assets/R.json` (`radar_settings`, **200**
items) deserialized into `RadarSettingsModel`. `Utils.assetJSONFile` opens that
asset; `assetCategoryTableJonFile` opens `Category.json`. Each category `items`
array is a list of **`write_index` values** (not 1-based array slots): Band
Settings starts at `2,3,4` = X/K/Ka sensitivity; Sound starts at `101` =
Volume; Laser starts at `18` = Laser On/Off. Write index `0` (Basic/Expert) is
absent from the category table because `SettingMenuActivity` owns it as header
buttons (`BTreqSETC:0=0|1`). UI labels/conflicts live on the model; the wire
value is only an integer.

### How indexes map onto GATT settings 1/2/3

They do **not** map as “char 1 = indexes 0–N, char 2 = next page, char 3 =
rest.” The three UUIDs are different payloads:

- **Char 1** is the packed settings `byte[]`. `BaseApplication` matches UUID_1,
  rejects the idle ASCII sentinel `0&0&0&0`, and calls
  `updateSettingsCharacteristic(byteArrayData)` (`BaseApplication.java` ~177–183).
- **Char 2** is subscribed and read, but the 1.0.9 UUID switch never handles it.
  With MTU 512 the 216-byte blob fits in char 1, so char 2 is a leftover second
  page from small ATT MTU. Notifications fall through to `TAG_OTHER_DATA`.
- **Char 3** is POI/markers (`updatePoiMarkerCharacteristic`), despite the
  `SETTINGS_` name.

Writes also do not target chars 1/2/3. A setting change is ASCII on the
**write-command** characteristic:

```
BTreqSETC:{write_index}={integer}
```

Examples from UI:

| UI action | Command | Source |
|---|---|---|
| Basic mode | `BTreqSETC:0=0` | `SettingMenuActivity` |
| Expert mode | `BTreqSETC:0=1` | `SettingMenuActivity` |
| City/Highway/Auto/Advanced | `BTreqSETC:1={0..3}` | `DashboardFragment` |
| Volume down/up | `BTreqSETC:101={n}` | `DashboardActivity` |
| Picker / switch / seek | `BTreqSETC:{write_index}={selected}` | `RadarItemSettingAdapter` |

The detector then notifies settings **char 1** with the full packed blob. The
app overlays that blob onto the `R.json` table using **`read_index` as a byte
offset**, not as a GATT characteristic number.

### Blob layout

`saveSettingInLocal` hard-codes the first two bytes, matching `R.json` rows 0–1:

| Blob offset | `read_index` | Item | Encoding |
|---|---|---|---|
| byte 0 | 0 | Basic/Expert Mode | `1` = Expert, else Basic |
| byte 1 | 1 | City Mode | `0` Highway, `1` City, `2` Auto, `3` Advanced |

`convertUnsignedIntFromByte` treats each Java `byte` as 0–255 (`b < 0 ? b+256 : b`).
`setSettingsToLocalWhen0xFF` treats **0xFF** as “not present on this hardware”
(Laser / Laser TP / Power Button Rx Mode become unavailable).

Per-item rules reconstructed from `R.json` + `RadarSettingsModel.byte_value` +
`Utils.convertToDecimal`:

- `byte_value == 1` (184 items): one unsigned byte at `blob[read_index]` is the
  `selected_value` into `values[]`. `write_index == read_index` for these until
  the first 2-byte frequency field.
- `byte_value == 2` (16 items): K-band block min/max frequencies. `values` are
  `"23.900"` / `"24.250"` GHz. The UI seek bar writes the raw integer
  (`BTreqSETC:{write_index}={progress}`) and displays `frequency/1000` as
  `"%.3f Ghz"`. Occupies **two** blob bytes starting at `read_index`, so the
  next item’s `read_index` skips ahead by 2 while `write_index` still ticks by 1.

That skip is why `write_index` and `read_index` diverge after K Block1 Max:

| Item | `write_index` | `read_index` | `byte_value` | Blob span |
|---|---|---|---|---|
| K Block1 Filter Min Frequency | 143 | 143 | 2 | bytes 143–144 |
| K Block1 Filter Max Frequency | 144 | 145 | 2 | bytes 145–146 |
| K Block2 Filter Operate Mode | 145 | 147 | 1 | byte 147 |
| … | … | … | … | … |
| Laser TP B6 Setting | 199 | 215 | 1 | byte 215 |

`write_index` is dense 0..199 (200 unique). Max `read_index` is **215**, so the
packed blob is **at least 216 bytes**. That is well under MTU 512, which is why
char 1 can carry the whole table.

Worked overlay: user picks City on the dashboard → phone writes UTF-8
`BTreqSETC:1=1` on the command characteristic → detector notifies settings
char 1 → `saveSettingInLocal` reads `characteristicData[1] == 1` → local
`cityMode = "City"`. The same notify walks every `R.json` row: Volume
(`write_index` 101, `byte_value` 1) takes unsigned `blob[101]` as
`selected_value` into `["Vol Level: 0", …, "Vol Level: 8"]`.

Endianness of the two frequency bytes is not fully recovered: jadx dropped
`BaseApplication$updateSettingsCharacteristic$1.invokeSuspend` (1072
instruction units). The seek-bar path treats `selected_value` as a single
integer kHz, so the two blob bytes are a 16-bit integer; typical Uniden packing
is little-endian (`lo` at `read_index`, `hi` at `read_index+1`). Treat that
endian as **inferred**, not proven from this decompile.

Idle / empty characteristic values that the receiver ignores: ASCII `0&0&0&0`
(and the 8-slot variant `0&0&0&0&0&0&0&0` in `DashboardActivity`).

## Alert notify payload (bands, laser, strength)

Characteristic: `ALERT_CHARACTERISTIC_UUID` on service 4.

Codec: UTF-8 text. Slots split on `&`. A slot of `"0"` or empty is inactive.
Each active slot is comma-separated and mapped in
`AlertDataConverter.parseAlertBandData` onto `AlertBandDataModel` fields in
this **comma-field order** (constructor args):

| Field index | Model field | Meaning |
|---|---|---|
| 0 | `alert_detected_flag` | non-`"0"` means a real hit |
| 1 | `alert_id` | hex id; `== 2` ⇒ Laser TP jamming enabled (`getLaserTpJammingEnableStatus`) |
| 2 | `alert_type` | band name: `X`, `K`, `KA`, `K POP`, `Ka POP`, `MRCD`, `MRCT`, `RT3`/`RT4` (Gatso), `LASER`, `POP` |
| 3 | `rssi_level` | strength `"1"`..`"8"` (R8 arrows go to level 8; others cap at 5) |
| 4 | `raw_value` | radar frequency (formatted `"%.3f GHz"` via `AlertDataConverterKt.formatString`) **or** laser gun id `"0"`..`"19"` |
| 5 | `info` | extra (mute-memory frequency text; `.` stripped then last char dropped, +5000 for MRCD) |
| 6 | `dir_type` | `F` front, `R` rear, `S` side, `0` none |
| 7 | `mute_type` | see table below |
| 8 | `rcv_mode_status` | receive-mode flag |

`isI9` (device name contains `R9` or `AE903i`) changes **direction assignment
by slot index**, not by field 6 alone:

| Slot index (`&` position) | Forced `dir_type` when I9 |
|---|---|
| 0, 4, default | field 6 if present |
| 1, 2, 3 | `F` |
| 5, 6, 7 | `R` |

Slot 4 on I9 is special-cased: if the first stored band is rear, the new band
is inserted at index 0 and the previous band’s `dir_type` is forced to `F`.

Laser gun names (`getBandFrequency` when `alert_type` is `LASER`), field 4:

| Id | Name | Id | Name |
|---|---|---|---|
| 0 | Generic Laser | 10 | TraffiPat |
| 1 | LTI20/20 | 11 | Truspeed S |
| 2 | Stalker | 12 | Stealth |
| 3 | RIEGL | 13 | TruCam |
| 4 | Laser Ally | 14 | XLR |
| 5 | Kustom | 15 | DragonEye Compact |
| 6 | Atlanta | 16 | DragonEye Full-Size |
| 7 | Laveg | 17 | PoliScan |
| 8 | SL700 | 18 | Traffistar s350 |
| 9 | SCS-102 | 19 | Vitronic Poliscan |

`RT3`/`RT4` display as `"Gatso"` instead of a GHz string.

Mute codes (`getMuteStatus`):

| `mute_type` | Label |
|---|---|
| 1 | Not Muted |
| 2 | Muted |
| 3 | Mute Memory |
| 4 | Auto Mute Memory |
| 5 | Blocked Mute |
| 6 | Quiet Ride Mute |

RSSI widgets: `getRSSIArrow` / `getRSSIBar` / `getRSSIBarForR8` map
`rssi_level` plus `alert_type==LASER` onto drawable levels. LASER always uses
the max bar. Device name containing `R8` selects the 8-level arrow set.

## ETC data characteristic

UUID `ETC_DATA_CHARACTERISTIC_UUID`. UTF-8, `&`-delimited, parsed by
`parseETCData` into `ETCDataModel`:

| `&` index | Payload | Model fields |
|---|---|---|
| 0 | voltage string | `voltage` |
| 1 | `0` **or** `poiType,poiDistance,poiLimitSpeed` | POI proximity |
| 2 | `0` **or** `gpsDirection,currentSpeed,altitude,gpsStatus` | GPS live data |
| 3 | warning | `warning` |
| 4 | scan-done counter | `scanDoneCount` |
| 5 | radar Wi-Fi status | `radarWiFiStatus` |
| 6 | auto-brightness | `autoBrightnessStatus` |

`poiType` uses the same tokens as `Constant`: `SPEEDCAM`, `REDLIGHT`,
`USERMARK`, `NONE`. Dashboard binds voltage + `" V"`, altitude + unit, and
speedometer from `currentSpeed`. Compass letters `N/NE/E/SE/S/SW/W/NW` are
localized by `getDirection(String, Context)`.

## POI / marker packets (settings char 3)

Despite the UUID name, char 3 is a binary dump that the app hex-encodes
(`Hex.bytesToStringUppercase`) then feeds to `parsePoiData`. `"0000"` is empty.

Packets are concatenated. Type is the first two hex chars (one byte):

| Hex type | `MarkerTypeEnum` | Packet length in hex chars | Bytes |
|---|---|---|---|
| `00` | NONE | 0 | — |
| `01` | SPEED_CAMERA | 26 | 13 |
| `02` | RED_LIGHT_CAMERA | 24 | 12 |
| `03` | USER_MARK | 20 | 10 |

Hex-char offsets inside one packet (`parsingPacket`):

| Hex chars | Bytes | Field | Decode |
|---|---|---|---|
| 0–1 | 0 | type | see table |
| 2–3 | 1 | unread / reserved | substring taken and discarded |
| 4–11 | 2–5 | latitude | IEEE-754 **big-endian** `float` (8 hex chars → 4 bytes) |
| 12–19 | 6–9 | longitude | IEEE-754 big-endian `float` |
| 20–23 | 10–11 | angle | `short` big-endian; speed cam + red light only |
| 24–25 | 12 | speed limit | 1 byte; speed cam only |

Map keys are `{s|r|u}_{lat:.6f},{lng:.6f}`.

## ASCII `BTreq*` / `BTdn*` / `RDresp*` / `RDrpt*`

All phone→detector strings go through `BluetoothManager.writeCharacteristic`
as UTF-8 onto `WRITE_COMMAND_CHARACTERISTIC_UUID`. Shape:
`BT{req|dn|rep}{CMD}:{payload}` with no checksum.

### Runtime commands (`Constant.java` + call sites)

| Constant / literal | When sent |
|---|---|
| `BTreqSETC:{write_index}={n}` | any setting change (menu, volume, city mode, seek) |
| `BTreqMUTE:1` (`ALERT_MUTE_CMD`) | mute button (logic inverted vs local `isMute`) |
| `BTreqMUTE:0` (`ALERT_UN_MUTE_CMD`) | unmute |
| `BTreqMUTE:3` / `BTreqMUTE:4` | receive-mode toggle (`isWorkReceiveModeFunction`) |
| `BTreqMMEM:1` / `BTreqMMEM:0` | add/delete mute memory; optional `,freq` or `,freq+5000` for MRCD |
| `BTreqUMRK:1` (`ADD_USER_MARK`) | dashboard add-mark |
| `BTreqUMRK:0` (`DELETE_USER_MARK`) | dashboard delete-mark (no coords) |
| `BTreqUMRK:0,{lat},{lng}` | map confirm-delete of a specific mark |
| `BTreqRLCD:0` (`DELETE_RED_LIGHT_CAMERA`) | delete RLC |
| `BTreqGURL:` | ask detector for firmware URL (`Utils.getFirmwareUrlAndAP`) |
| `BTreqGWAP:` | ask Wi-Fi AP info (1 s after GURL, and `WifiSettingActivity`) |
| `BTreqSWAP:{ssid},{password}` | set detector Wi-Fi AP |
| `BTdnSTWFU:{type},{mode},{url}` | start Wi-Fi firmware download |
| `BTrepMUTE:0` | fallback literal in mute handlers (looks like a decompile/typo vs `BTreq`) |

`BluetoothUtils` also defines the over-the-air firmware chunk protocol
(`BTdnSTART`, `BTdnUISTR`/`UIEND`, `DS`/`GP`/`SD`/`GD`/`BT`/`I1`/`I2`/`I3`,
`BTdnFINIS`, `BTdnFLSWR`, `BTdnWRDON`). Those are file-transfer framing used
by `FirmWareUpdateWorker`, not the live radar-alert path.

### Detector reports on the read-command characteristic

`BaseApplication` UTF-8-decodes `READ_COMMAND_CHARACTERISTIC_UUID` and
branches on prefixes:

| Token | Meaning |
|---|---|
| `RDrespACK` | last write accepted (`Ack.ACK`) |
| `RDrespNAK:{code}` | rejected; Wi-Fi update error via `Utils.getErrorMessageWiFiUpdate` |
| `RDrptWIAP:{ssid}` | connected AP SSID |
| `RDrptDSTS:{pct}` | download progress |
| `RDrptDEND:1` / `:0` | download complete / fail |
| `RDrptWSTS:{a},{b}` | flash-write status (fields 0 and 1) |
| `RDrptWEND:1` / `:0` | flash-write complete / fail |

`BluetoothUtils` additionally names `RDrptSETC`, `RDrptMUTE`, `RDrptMMEM`,
`RDrptUMRK`, `RDrptRLCD`, `RDrptSPDD`, `RDrptRNSD`, `RDrptNMSG`, `RDrptDURL`.
The 1.0.9 characteristic receiver does **not** switch on those; live setting
and mute state arrive via settings-char-1 and alert notify instead.

## Firmware / software version reads

SIG Device Information (service `0000180a-…`):

| Constant | UUID | SIG name |
|---|---|---|
| `READ_FIRMWEAR_VERSION` | `00002a26-0000-1000-8000-00805f9b34fb` | Firmware Revision String |
| `READ_SOFTWEAR_VERSION` | `00002a28-0000-1000-8000-00805f9b34fb` | Software Revision String |

`BluetoothManager.readRadarSoftwareVersion()` only **reads 0x2A28**.
`DashboardActivity.checkFirmwareUpdate` and `FirmwareUpdateActivity` call it.
The 0x2A26 UUID is defined but no `readCharacteristic` of it was found in
`com.uniden.rtach`.

When 0x2A28 notifies/reads, the UTF-8 value is stored as
`StoreUserData.setCurrentFirmwareVersion`. Format is slash-separated
(`Utils.checkIfUpdateAvailable` splits on `/`). Index 0 is model name; later
indexes are numeric component versions (UI / DSP / GPS / …) compared against
`unidenup.com/{R8|R9|R9W|AE903i}/…_latest.bin` metadata. Display uses
`current.split("/")[1]` vs `latest.split("/")[1]`.

## Checksum and framing

| Channel | Framing | Checksum |
|---|---|---|
| `BTreq*` / `BTdn*` writes | UTF-8 ASCII, GATT write-without-response, no terminator | **none in the app** |
| Alert / ETC notify | UTF-8, `&` records, `,` fields; idle `0&0&0&0` | none |
| Settings char 1 | raw bytes; `read_index` is the byte offset; `0xFF` = N/A | none |
| POI char 3 | concatenated typed packets; IEEE-754 BE floats | none |
| Command responses | ASCII prefix `RDresp` / `RDrpt` | ACK/NAK is the only integrity signal |
| ATT | MTU negotiated to 512 | BLE link CRC only |
| Firmware files | `FirmWareUpdateWorker` holds per-image ints (`ui_file_checksum`, `dsp_file_checksum`, `ble_file_checksum`, …) | **file-level**, not per GATT notify |

There is no app-level CRC, XOR, or length byte on alert, ETC, or the settings
blob. Integrity of a setting write is `RDrespACK`/`NAK` plus the subsequent
char-1 notify that re-paints `selected_value` from `read_index`.

## Data path (phone)

```
detector notify/read/write-complete
  → BluetoothManager$gattCallback$1
  → MyBroadcaster.sendBroadcastCharacteristic (raw byte[])
  → BaseApplication$bluetoothCharacteristicChangedReceiver
       UUID_ALERT     → UTF-8 → parseAlertBandData → DashboardActivity.loadData
       UUID_SETTINGS1 → byte[] → overlay R.json via read_index
       UUID_ETC       → UTF-8 → parseETCData → dashboard volt/speed/alt
       UUID_SETTINGS3 → hex   → parsePoiData → map markers
       UUID_2A28      → UTF-8 firmware string
       UUID_READ_CMD  → RDresp*/RDrpt*
```

Phone→detector is only `writeCharacteristic(String)` → UTF-8 → service 5 write
command UUID. Settings characteristic 1/2/3 are read/notify only from the
phone’s point of view.
