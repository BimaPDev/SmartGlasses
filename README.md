# MYVU Star Air (XGA010C)

Unofficial reverse-engineering and an iOS/Swift SDK for Meizu **MYVU Star Air** glasses (model **XGA010C**, advertised as **MYVU 0F35**). Not affiliated with Meizu.

The long-form account of everything recovered so far — silicon, temple PCB, firmware, OTA, StarryNet, factory/MMI, and the iOS `IOS_CONNECT_BT` path — is:

**[Reverse/STAR_AIR_FULL_WRITEUP.md](Reverse/STAR_AIR_FULL_WRITEUP.md)**

That write-up is the source of truth. Older notes (`TEARDOWN.md` §6, parts of `INVESTIGATION.md` / `PROTOCOL.md`) still say iOS cannot clear the HFP/A2DP gate; `SESSION_LOG.md` overturned that.

---

## Thanks

**ogDTC** — physical **breakdown** of the temple PCB and the reference pictures in [`board_picture/`](board_picture/). Those shots (SoC top-mark, Type-C cluster, annotated D+/D− and UART-candidate overlays) are how the firmware map became a board map.

**[u/Conscious_Phrase_138](https://www.reddit.com/user/Conscious_Phrase_138)** aka **ToasterBus** — old firmware used to double-check the reverse against earlier images (**1.0.7** / **1.0.11.53** vs **1.0.12.83**). Font glyph counts, ASCII `gid_start`, and `handleSystemMsg` evolution were shown to be real firmware history rather than a one-zip artefact.

**[u/Old-Corner-3833](https://www.reddit.com/user/Old-Corner-3833)** aka **[Panny777](https://github.com/Panny777)** — the reverse-engineered Android SDK and client this iOS port follows:

- [Meizu-Myvu-SDK](https://github.com/Panny777/Meizu-Myvu-SDK) (vendored at [`Reference/Meizu-Myvu-SDK/`](Reference/Meizu-Myvu-SDK/))
- [Meizu-Myvu-Client](https://github.com/Panny777/Meizu-Myvu-Client) (vendored at [`Reference/Meizu-Myvu-Client/`](Reference/Meizu-Myvu-Client/))

The Swift products `MyvuCore`, `MyvuNav`, `MyvuAI`, and `MyvuWeather` map 1:1 onto those Android modules. Wire format (BLE packets, ECDH bond, LinkProtocol, HFP-gate diagnosis, JSON actions) is that lineage, not a second independent recovery.

---

## Reference

| What | Where |
| --- | --- |
| Full write-up | [`Reverse/STAR_AIR_FULL_WRITEUP.md`](Reverse/STAR_AIR_FULL_WRITEUP.md) |
| Wire protocol (iOS notes) | [`PROTOCOL.md`](PROTOCOL.md) |
| iOS session log (`IOS_CONNECT_BT`) | [`SESSION_LOG.md`](SESSION_LOG.md) |
| Hardware teardown / BOM / FCC `2BHGZ-XGA010C` | [`TEARDOWN.md`](TEARDOWN.md) |
| Temple PCB photos (ogDTC) | [`board_picture/`](board_picture/) |
| Panny777 Android SDK | [github.com/Panny777/Meizu-Myvu-SDK](https://github.com/Panny777/Meizu-Myvu-SDK) · [`Reference/Meizu-Myvu-SDK/`](Reference/Meizu-Myvu-SDK/) |
| Panny777 client (Android + Python/Windows) | [github.com/Panny777/Meizu-Myvu-Client](https://github.com/Panny777/Meizu-Myvu-Client) · [`Reference/Meizu-Myvu-Client/`](Reference/Meizu-Myvu-Client/) |
| Swift package | [`Package.swift`](Package.swift) · [`Sources/`](Sources/) |
| Demo app | [`Examples/MyvuDemo/`](Examples/MyvuDemo/) |
| OTA / companion-app notes | [`Reverse/WRITEUP.md`](Reverse/WRITEUP.md), [`Reverse/FINDINGS.md`](Reverse/FINDINGS.md), [`Reverse/MYVU_cloud_API_map.md`](Reverse/MYVU_cloud_API_map.md) |
| Firmware VA map (local analysis tree) | [`Reverse/firmware/analysis/full_rev/FULL_FIRMWARE_MAP.md`](Reverse/firmware/analysis/full_rev/FULL_FIRMWARE_MAP.md) |

---

## This repo

Swift 5 package, iOS 15 / macOS 12. Products: **MyvuCore**, **MyvuNav**, **MyvuAI**, **MyvuWeather**. Demo: `Examples/MyvuDemo`.

On iOS the glasses are found by BLE **manufacturer data** (`0x0BD1` / `0x0BD2`), not a local name or service UUID. After the ECDH bond, app JSON rides BLE `0x2021`. Teleprompter (`com.upuphone.ar.tici`) and nav HUD (`com.upuphone.ar.navi.glass`) need a classic **HFP + A2DP** link; iOS cannot open RFCOMM/SPP (the glasses are not MFi). `IOS_CONNECT_BT` (LinkProtocol cmd 32) has the glasses page the phone by Bluetooth name instead.

USB-C on this unit is **charge-only**. Firmware on the glasses is Flyme XR **1.0.12.88**; the newest public OTA pack is **1.0.12.83** (not a byte-identical dump of `.88`).

---

## License

MIT. See [`LICENSE`](LICENSE). Original Android SDK copyright Panny777.

MYVU and Meizu are trademarks of their owners. Protocol and hardware details were reverse-engineered for interoperability and research; behaviour can change with any firmware update.
