import Foundation

/// COMMAND enum from `starry_link_encrypt.proto`.
public enum LinkCommands {
    public static let initCmd = 0
    public static let ensure = 1
    public static let unBonded = 2
    public static let readSwitchKey = 10
    public static let writeSwitchKey = 11
    public static let readSwitchInfo = 12
    public static let writeSwitchInfo = 13
    public static let bondMsgChange = 14
    public static let authStatue = 18
    public static let authMessage = 19

    // iOS-specific classic-BT control (from starry_link_encrypt.proto COMMAND).
    // iOS apps cannot initiate a classic connection, so the phone sends these
    // over the BLE link and the GLASSES drive the HFP/A2DP side. The SDK port
    // never implemented them, which is why iOS never got its audio link.
    public static let iosConnectBt = 32
    public static let iosDisconnectBt = 33
    public static let btStateChange = 34
    public static let requestStatusBt = 35
    public static let syncThirdMac = 40

    /// The classic-BT app-relay channel is not a fixed channel number: the
    /// glasses generate a random 16-bit UUID per session and sync it to the
    /// phone over BLE with this command. iOS cannot open that channel (see
    /// `MyvuClient`), but the command still tells us the relay exists.
    public static let sppServerUuidSync = 70
    public static let sppServerRequestConnect = 71
    public static let sppServerRequestStateOpen = 72
    public static let sppServerRequestStateClose = 73

    // BTSTATUS enum, used for DeviceInfo.btStatus.
    public static let btStatusDefault = 0
    public static let btStatusBond = 1
    public static let btStatusBonding = 2
    public static let btStatusNoBond = 3
    public static let btStatusConnectedAcl = 4
    public static let btStatusConnectedHfp = 5
    public static let btStatusConnectedA2dp = 6
    public static let btStatusDisconnected = 7
    public static let btStatusNoConnectedBt = 8
    public static let btStatusExistConnectedBt = 9
    public static let btStatusConnectFail = 10
    public static let btStatusBondCancelOrTimeout = 11

    /// True when classic BT is already up and IOS_CONNECT_BT must not force a
    /// fresh pair. The glasses report the steady "phone found" state as
    /// `EXIST_CONNECTED_BT` (9), not HFP/A2DP; treating 9 as down made the
    /// keepalive re-issue `firstConnect=true` every 2s and drop the link.
    public static func isClassicLinkUp(_ status: Int) -> Bool {
        switch status {
        case btStatusConnectedAcl, btStatusConnectedHfp, btStatusConnectedA2dp,
             btStatusExistConnectedBt:
            return true
        default:
            return false
        }
    }
}

public struct LinkMessage {
    public let deviceId: Data
    public let cmd: Int
    public let data: Data
}

/// `BleUtil.dealDeviceId` and the MAC-string helpers around it.
public enum DeviceId {
    /// Reverses the byte order **and** bitwise-NOTs each byte. Verified against
    /// a real capture: `dealDeviceId(7ca375d094f1) == 0e6b2f8a5c83`.
    public static func deal(_ identifier: Data) -> Data {
        let bytes = [UInt8](identifier)
        var out = Data(capacity: bytes.count)
        for i in 0 ..< bytes.count {
            out.append(~bytes[bytes.count - 1 - i])
        }
        return out
    }

    /// Tolerant of case and separators.
    public static func macToBytes(_ mac: String) -> Data {
        let clean = mac.replacingOccurrences(of: ":", with: "")
            .replacingOccurrences(of: "-", with: "")
        precondition(clean.count == 12, "not a 6-byte MAC: \(mac)")
        return Hex.decode(clean)
    }

    /// Lowercase, separator-free — the form used as `deviceId` in the auth bean.
    public static func macToHex(_ mac: String) -> String {
        mac.replacingOccurrences(of: ":", with: "")
            .replacingOccurrences(of: "-", with: "")
            .lowercased()
    }
}

/// StarryNet LinkProtocol builders and parsers.
///
/// These messages ride the BLE *internal* characteristic (0x2020) and carry the
/// ECDH bond plus the per-session SPP UUID sync.
public enum LinkProtocol {
    /// `LinkProtocol{1: dealDeviceId(identifier), 2: cmd, 3: data}`.
    public static func build(identifier: Data, cmd: Int, data: Data = Data()) -> Data {
        var out = Pb.bytes(1, DeviceId.deal(identifier))
        out += Pb.varintField(2, UInt64(cmd))
        if !data.isEmpty {
            out += Pb.bytes(3, data)
        }
        return out
    }

    public static func parse(_ raw: Data) -> LinkMessage {
        let fields = Pb.parse(raw)
        return LinkMessage(
            deviceId: Pb.firstBytes(fields, 1),
            cmd: Int(Pb.firstVarint(fields, 2, 0)),
            data: Pb.firstBytes(fields, 3)
        )
    }

    /// `WriteSwitchKey{1: key, 2: info}`.
    public static func writeSwitchKey(key: Data, info: Data) -> Data {
        Pb.bytes(1, key) + Pb.bytes(2, info)
    }

    public static func parseWriteSwitchKey(_ raw: Data) -> (key: Data, info: Data) {
        let fields = Pb.parse(raw)
        return (Pb.firstBytes(fields, 1), Pb.firstBytes(fields, 2))
    }

    /// `WriteSwitchInfo{1: code, 2: info}`; code is omitted when zero.
    public static func writeSwitchInfo(info: Data, code: Int = 0) -> Data {
        var out = Data()
        if code != 0 { out += Pb.varintField(1, UInt64(code)) }
        return out + Pb.bytes(2, info)
    }

    public static func parseWriteSwitchInfo(_ raw: Data) -> Data {
        Pb.firstBytes(Pb.parse(raw), 2)
    }

    /// Decodes a `CMD_SPP_SERVER_UUID_SYNC` payload into the full Bluetooth Base
    /// UUID string.
    ///
    /// The 4-byte payload is LITTLE-endian — confirmed empirically: a captured
    /// payload of `21 91 00 00` only lands inside the expected
    /// `SecureRandom.nextInt(65535)` range when read little-endian (0x9121 =
    /// 37153); big-endian would give 0x21910000, far out of range.
    ///
    /// This is the opposite endianness to the TLV layer, so do not unify them.
    public static func sppShortUuidToString(_ data: Data) -> String? {
        guard data.count >= 4 else { return nil }
        let b = [UInt8](data)
        let shortUuid = UInt32(b[0]) | UInt32(b[1]) << 8
            | UInt32(b[2]) << 16 | UInt32(b[3]) << 24
        return String(format: "0000%04x-0000-1000-8000-00805f9b34fb", shortUuid)
    }
}
