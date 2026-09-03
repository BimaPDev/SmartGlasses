# IPA strings/symbols dump — main binary + vendor frameworks

Source app: `Reverse/IPA/extracted/Payload/XJOverSeas.app` (MYVU AR 1.1.28, per `Reverse/IPA/recon/RECON.md`).
Commands used: `strings -a -n 6 <binary>`, `otool -l <binary>`, `nm -gU <binary>` (exported/undefined),
`nm -a <binary>` (main binary only, full symbol table), `xcrun swift-demangle` on the extracted
`_$s...` mangled names from StarryNet. All commands run directly against the extracted binaries; no
patching, no jailbroken-device dump, no runtime hooking was used.

## FairPlay limitation (why coverage is partial)

The main binary `XJOverSeas` and every vendor framework touched here (`StarryNet`, `StarryCast`,
`StarryCastCommon`, `ble2301`, `XJNetWork`) are **FairPlay**-encrypted App Store binaries
(`LC_ENCRYPTION_INFO_64`, `cryptid 1`, confirmed per-binary with `otool -l` below). FairPlay
encrypts the `__TEXT` segment — the segment holding executable code, Objective-C method/class
name tables (`__objc_methname`, `__objc_classname`), C string literals (`__cstring`), and Swift
reflection strings (`__swift5_reflstr`) — so `strings -a` run over the whole file returns almost
entirely high-entropy garbage for that region: single-line runs of 4+ printable bytes that
happen to fall between non-printable bytes in the ciphertext, not real text. This is why
`main-binary.strings.txt` (63,514 lines / 484,845 bytes) is >99% noise (`Iytp\`y`, `9mYMGmxa`,
`}73*^i`, …) — confirmed by grepping it for URL schemes, `%@`/`%d` format strings, and
`ViewController`/`Manager`/`Error`-suffixed identifiers, all of which returned effectively zero
real hits. The same is true for `StarryNet.strings.txt`, `XJNetWork.strings.txt`,
`StarryCastCommon.strings.txt`, `StarryCast.strings.txt`, and `ble2301.strings.txt`.

What *is* readable came from three places that FairPlay does **not** cover:
1. **`__DATA` / `__DATA_CONST`** — measured on the main binary: `__TEXT` spans file offset
   `0..36,454,400` while `cryptoff=32768`/`cryptsize=36,405,248` (encrypted range
   `32,768..36,438,016`); `__DATA_CONST` starts at file offset `36,454,400`, i.e. entirely past
   the encrypted range, so any literal byte data stored there (as opposed to a CFString pointer
   into the encrypted `__cstring` pool) survives. This is why the tail of
   `main-binary.strings.txt` contains genuine plain-text fragments: `noNetwork`, `networkError`,
   `internalError`, and localized variants (`Interner Fehler` / German, `Erreur interne` /
   French, `Errore interno` / Italian, `Dahili Hata` / Turkish, `Ralat dalaman` / Malay) —
   apparently a small hard-coded network-error string table, plus scattered fragments in
   `StarryNet.strings.txt` (`abilityCast`, `abilityRelay`, `abilityShare`, `iPhone`) and
   ISO-639 locale-code blobs (`Latn` + concatenated language codes `en/eo/es/et/eu/fa/fi/...`).
2. **`__LINKEDIT`** (symbol/string tables) — always unencrypted regardless of cryptid, because
   the loader/dyld and code-signature verification need it before decryption happens. `nm`
   recovers full symbol names here even though the function bodies they name are ciphertext.
3. Any **non-Mach-O resource** (plists, `.bundle`, `.json`, `.html`) is untouched by FairPlay,
   but those are out of scope for this leaf (covered by recon).

No decrypted code, no disassembly, and no class-dump of `__TEXT` is claimed anywhere in this
report or its dump files — every readable item below is attributable to `__DATA`/`__DATA_CONST`
literal bytes or `__LINKEDIT` symbol-table names.

## Files dumped (all under `Reverse/IPA/strings/`)

| Binary (relative to `Payload/XJOverSeas.app/`) | file size | cryptoff/cryptsize (otool -l) | strings dump | nm dump |
|---|---|---|---|---|
| `XJOverSeas` | 43,490,640 B | 32768 / 36,405,248 | `main-binary.strings.txt` — 63,514 lines / 484,845 B | `main-binary.nm-exported-undefined.txt` (2,898 lines, `nm -gU`) + `main-binary.nm-all.txt` (7,121 lines, `nm -a`) |
| `Frameworks/StarryNet.framework/StarryNet` | 4,369,680 B | 16384 / 2,293,760 | `StarryNet.strings.txt` — 4,094 lines / 31,155 B | `StarryNet.nm-exported-undefined.txt` — 1,299 lines; demangled via `xcrun swift-demangle` → `StarryNet.demangled.txt` — 1,279 lines |
| `Frameworks/StarryCast.framework/StarryCast` | 93,040 B | 16384 / 16,384 | `StarryCast.strings.txt` — 4 lines / 32 B | `StarryCast.nm-exported-undefined.txt` — 6 lines |
| `Frameworks/StarryCastCommon.framework/StarryCastCommon` | 102,384 B | 16384 / 16,384 | `StarryCastCommon.strings.txt` — 20 lines / 156 B | `StarryCastCommon.nm-exported-undefined.txt` — 12 lines |
| `Frameworks/ble2301.framework/ble2301` | 92,176 B | 16384 / 16,384 | `ble2301.strings.txt` — 7 lines / 50 B | `ble2301.nm-exported-undefined.txt` — 6 lines |
| `Frameworks/XJNetWork.framework/XJNetWork` | 485,024 B | 16384 / 163,840 | `XJNetWork.strings.txt` — 305 lines / 2,282 B | `XJNetWork.nm-exported-undefined.txt` — 87 lines |

(Extra working file: `main-binary.readable-words.txt` — a regex-filtered subset of the main
strings dump kept for reference; mostly base64-shaped noise, not cited further below.)

All six binaries were independently confirmed FairPlay-encrypted with `otool -l | grep -A5
LC_ENCRYPTION_INFO_64`, each showing `cryptid 1`.

## What IS recoverable despite FairPlay

**Class/symbol names (from `__LINKEDIT` via `nm`, code bodies still encrypted):**
- `XJNetWork` is an AFNetworking fork rebranded with an `XJ` prefix: `XJHTTPSessionManager`,
  `XJURLSessionManager`, `XJSecurityPolicy`, `XJNetworkReachabilityManager`,
  `XJMultipartBodyStream`, `XJJSONRequestSerializer/ResponseSerializer`,
  `XJPropertyListRequestSerializer`, `XJAutoPurgingImageCache`, `XJImageDownloader`, etc.
  (full 1-for-1 rename of AFNetworking's class surface).
- `StarryCastCommon`: `SCProcessCommunication`, `SCProcessMessage`, `StarryCastLog`,
  `StarryCastTools`.
- `StarryCast`: `StarryCastMain` (thin — only 6 nm symbols, most logic likely lives in
  `StarryCastCommon`/`StarryNet`).
- `ble2301`: `Ble2301Plugin` (a Flutter plugin wrapper class; only version-string symbols beyond
  that — `ble2301VersionString`/`ble2301VersionNumber`).
- Main binary `XJOverSeas` has **zero locally-defined `_OBJC_CLASS_$_*` symbols** (`nm -a` |
  grep `_OBJC_CLASS_\$_` minus `U` rows = 0) — it only references (undefined, `U`) plugin
  classes like `Ble2301Plugin`, `FPPDeviceInfoPlusPlugin`, `XJOCComMethod`, confirming it is a
  thin Flutter host/runner shim; the real app logic is compiled Dart AOT in `App.framework/App`
  (also cryptid 1, not touched by this leaf) plus the native Swift/ObjC frameworks. The main
  binary's ~7,121 `nm -a` symbols are dominated by statically-linked Swift runtime, libc++
  (`std::__1::` template instantiations — 904+ `_ZNSt3_...` hits), and — notably — **Alamofire
  and MLKit symbols compiled directly into the main executable** (`_$s...9Alamofire...`,
  `_MLKITx_Absl*`, `_MLKITx_SRLRegistrySharedInstanceForProviders`, `_MLKITx_kVersionStamp*`),
  meaning the app statically links Google ML Kit (likely for AR/vision features) and Alamofire
  networking in addition to the vendored `XJNetWork`.

**Swift API surface recovered by demangling `StarryNet`'s mangled symbols (names/types only —
no bodies, no string literal values):**
- BLE/device stack: `StarryDevice`, `XJPeripheral`/`XJPeripheralBase`, `LocalDevice`,
  `BleState`/`BLEConnectState`/`BLEAPConnectState`/`BRState`/`BondRelation`
  (`isConnectedState`, `isDisconnectState`, `isConnectable`), `CoreConnect` (the central
  facade: `cmd(connect:)`, `cmd(disConnect:)`, `cmd(connectAP:ssid:password:)`,
  `cmd(getBTState:)`, `cmd(openDiscoverable:)`, `cmd(unbound:)`, `bondedDevices`,
  `connectDevicesInfo()`, `createZipFile(atPath:withFilesAtPaths:pass:completion:)`).
- Delegate protocols: `ConnectDelegate`, `DiscoverDelegate`, `MessageDelegate`
  (`messageDecryptFail(...)` — confirms an on-device message-decrypt path exists),
  `FileShareDelegate`, `APConfigDelegate`, `CastDisplayDelegate`.
- Screen-cast subsystem: `CastResultCode` enum with ~20 named error cases
  (`SINK_AUDIO_DECODER_INIT_ERROR`, `SINK_VIDEO_DECODE_ERROR`, `SOURCE_CAMERA_DISCONNECT_ERROR`,
  `SOURCE_CREATE_VIRTUAL_DISPLAY_ERROR`, `SOURCE_SOCKET_SERVER_ERROR`,
  `SOURCE_WAIT_SINK_CONNECTION_TIMEOUT_ERROR`, `SUCCESS`, …), `CastStopType`,
  `cast(showCastView:)`, `cast(startCastServer:)`, `castStop()`.
- Pairing/crypto surface (**names only, no values** — see credentials note below):
  `RingSecurityPair` struct with static string keys `KEY_ALGORITHM`, `KEY_ASYMMETRIC`,
  `KEY_DEVICEINFO`, `KEY_ENCSWITCHINFO`, `KEY_HASH`, `KEY_IV`, `KEY_MACADDR`, `KEY_MODELID`,
  `KEY_PUBKEY`, `KEY_RANDOM`, plus `OPCODE_RING_PAIR_SWITCH_KEY` and `SN_TLV_TAG_PUB_KEY`
  (both typed `UInt8`) — a TLV-based device-pairing/key-exchange scheme (algorithm, asymmetric
  key, device info, IV, MAC address, model ID, public key, random, hash all as named TLV/JSON
  fields).
- Wifi provisioning: `WifiApInfo.init(ssid:psk:localIP:port:)` — a Wi-Fi AP config struct name
  confirming an SSID/PSK provisioning flow between phone and glasses hardware.
- UUID plumbing: `StarryMessage.uuidType` (typed `UUIDType`, `RawRepresentable<String>`,
  `CaseIterable`), `XJPeripheralBase.uuid: String?`. No literal UUID/CBUUID *values* are
  recoverable — those are string constants baked into the encrypted `__TEXT` constant pool and
  only referenced by pointer from `__DATA_CONST`'s `__cfstring` section, so the symbol table
  gives us the *field name* (`uuidType`, `uuid`) but not the actual GATT UUID strings.
- `AbilityType` (raw `String`-backed enum) and `StarryTag` (`appUniteCode`, `deviceId` string
  properties) suggest a capability-negotiation handshake keyed by app-specific unite codes.

**Format/log strings, URLs, credential-shaped constants:**
- No `%@`/`%d`/`%s`-style format strings, no `http(s)://` URLs, and no CBUUID-formatted
  (`XXXXXXXX-XXXX-...`) literal values were found in any of the six `strings -a` dumps — all
  such literals live in the encrypted `__TEXT __cstring`/`__cfstring`-backing pool and are not
  recoverable from this App Store build without a decrypted `__TEXT` dump.
- Credential-shaped scan (`AIza…` Google API key prefix, `AKIA…` AWS key prefix, `sk_…` secret
  prefix, and generic 32+ char base64-ish runs) across all `*.strings.txt` files: **zero
  plausible live secrets**. The only 32+ char base64-alphabet matches were confirmed to be
  ISO-639 language-code concatenations (locale table), not keys/tokens.
- The `RingSecurityPair.KEY_*` and `UUIDType`/`uuid` symbols above are **field/property names
  only** — `nm` exposes the address of the static accessor (`unsafeMutableAddressor`), not the
  string it points to, so no actual key material, UUID, or pairing secret is present in any
  dump file, described here rather than reproduced.
- File paths: no absolute on-device or build-machine paths (e.g. `/Users/...`, `/private/var/...`)
  surfaced in any dump; `createZipFile(atPath:withFilesAtPaths:...)` is a method signature, not
  a live path.

## Summary counts

- Main binary: 484,845 bytes / 63,514 lines of `strings -a` output, of which the overwhelming
  majority is FairPlay-ciphertext noise; the readable fraction is a short network-error string
  table (~50 lines) sitting in unencrypted `__DATA_CONST`. `nm -a` recovered 7,121 symbol-table
  entries (0 locally-defined ObjC classes; heavy Swift runtime/libc++/Alamofire/MLKit static
  linkage).
- StarryNet: 31,155 bytes / 4,094 lines of strings (readable: a handful of word fragments near
  the tail); 1,299 `nm -gU` symbols, of which 1,279 are Swift-mangled and were demangled to
  recover the BLE/cast/pairing API surface summarized above.
- StarryCast / StarryCastCommon / ble2301 / XJNetWork: small frameworks (93 KB–485 KB); strings
  output is 4–305 lines (32 B–2,282 B) and almost entirely noise; `nm -gU` gives 6–87 class/
  version symbols each, sufficient to identify XJNetWork as a renamed AFNetworking fork and
  ble2301 as a thin Flutter BLE plugin shim.
- Across all six binaries combined: 518,520 bytes of `strings -a` output and 12,708 lines of
  `nm`/demangled symbol output were captured into `Reverse/IPA/strings/`.

## Files written under Reverse/IPA/strings/

`main-binary.strings.txt`, `main-binary.nm-exported-undefined.txt`, `main-binary.nm-all.txt`,
`main-binary.readable-words.txt`, `StarryNet.strings.txt`, `StarryNet.nm-exported-undefined.txt`,
`StarryNet.demangled.txt`, `StarryCast.strings.txt`, `StarryCast.nm-exported-undefined.txt`,
`StarryCastCommon.strings.txt`, `StarryCastCommon.nm-exported-undefined.txt`,
`ble2301.strings.txt`, `ble2301.nm-exported-undefined.txt`, `XJNetWork.strings.txt`,
`XJNetWork.nm-exported-undefined.txt`, and this `STRINGS.md`.

IPA_STRINGS_COMPLETE
