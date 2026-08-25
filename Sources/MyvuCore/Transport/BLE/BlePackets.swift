import Foundation

/// One decoded BLE transport packet.
public struct BleParsedPacket {
    public let sn: Int
    /// Control-packet type; -1 for data fragments and truncated buffers.
    public var type: Int = -1
    /// Byte 3: package type for CTR/SINGLE, or ACK status for the ACK types.
    public var command: Int = -1
    /// Trailing little-endian shorts (frameCount, lost sequence numbers).
    public var params: [Int] = []
    public var value: Data = Data()

    public init(sn: Int) {
        self.sn = sn
    }

    public var isData: Bool { sn != 0 }
    public var pkgType: Int { command }
    public var frameCount: Int { params.first ?? 0 }
    /// For ACK/FAST_ACK/SINGLE_ACK the "command" byte carries the status.
    public var ackStatus: Int { command }
}

/// BLE transport packet codec.
///
/// EVERY multi-byte field here is LITTLE-endian. That is the opposite of the
/// TLV/relay layer, so the two must never be unified.
///
/// Layout: a 2-byte `sn` prefix.
///   - `sn == 0` → control packet: byte[2] = type, byte[3] = command/pkgType/status
///   - `sn != 0` → data fragment `sn`, payload = bytes[2...]
public enum BlePackets {
    // Control types.
    public static let typeCmd = 0
    public static let typeAck = 1
    public static let typeSingleCmd = 2
    public static let typeSingleAck = 3
    public static let typeMng = 4
    public static let typeMngAck = 5
    public static let typeFastCtr = 6
    public static let typeFastAck = 7
    public static let typeMixCtr = 8
    public static let typeSingleCmdNoAck = 9

    // Package types.
    public static let pkgCommonData = 0 // external/app channel
    public static let pkgStarryData = 16 // pairing channel
    public static let pkgStarryDataInit = 17 // first/negotiation message

    // ACK status.
    public static let ackSuccess = 0
    public static let ackReady = 1
    public static let ackBusy = 2
    public static let ackTimeout = 3
    public static let ackCancel = 4
    public static let ackSync = 5

    // MARK: - Encoders

    private static func le16(_ v: Int) -> Data {
        Data([UInt8(v & 0xFF), UInt8((v >> 8) & 0xFF)])
    }

    /// `[seq:2][payload]`. `seq` must be >= 1.
    public static func dataPacket(seq: Int, payload: Data) -> Data {
        le16(seq) + payload
    }

    /// `[00 00][type][pkgType][frameCount:2]`
    private static func ctrLike(type: Int, frameCount: Int, pkgType: Int) -> Data {
        le16(0) + Data([UInt8(type & 0xFF), UInt8(pkgType & 0xFF)]) + le16(frameCount)
    }

    public static func ctrPacket(frameCount: Int, pkgType: Int) -> Data {
        ctrLike(type: typeCmd, frameCount: frameCount, pkgType: pkgType)
    }

    public static func fastCtrPacket(frameCount: Int, pkgType: Int) -> Data {
        ctrLike(type: typeFastCtr, frameCount: frameCount, pkgType: pkgType)
    }

    public static func mixCtrPacket(frameCount: Int, pkgType: Int, firstChunk: Data) -> Data {
        ctrLike(type: typeMixCtr, frameCount: frameCount, pkgType: pkgType) + firstChunk
    }

    /// `[00 00][type][pkgType][payload]`
    private static func singleLike(type: Int, pkgType: Int, payload: Data) -> Data {
        le16(0) + Data([UInt8(type & 0xFF), UInt8(pkgType & 0xFF)]) + payload
    }

    public static func singlePacket(pkgType: Int, payload: Data) -> Data {
        singleLike(type: typeSingleCmd, pkgType: pkgType, payload: payload)
    }

    public static func singleNoAckPacket(pkgType: Int, payload: Data) -> Data {
        singleLike(type: typeSingleCmdNoAck, pkgType: pkgType, payload: payload)
    }

    public static func ackPacket(status: Int, lostSeqs: [Int] = []) -> Data {
        var out = le16(0) + Data([UInt8(typeAck), UInt8(status & 0xFF)])
        for s in lostSeqs { out += le16(s) }
        return out
    }

    public static func fastAckPacket(status: Int) -> Data {
        le16(0) + Data([UInt8(typeFastAck), UInt8(status & 0xFF)])
    }

    public static func singleAckPacket(status: Int) -> Data {
        le16(0) + Data([UInt8(typeSingleAck), UInt8(status & 0xFF)])
    }

    // MARK: - Decoder

    public static func parse(_ raw: Data) -> BleParsedPacket {
        let b = [UInt8](raw)
        guard b.count >= 2 else { return BleParsedPacket(sn: 0) }

        let sn = Int(b[0]) | Int(b[1]) << 8
        if sn != 0 {
            // DataPacket: fragment `sn`, payload is the remainder.
            var p = BleParsedPacket(sn: sn)
            p.value = Data(b[2...])
            return p
        }

        var p = BleParsedPacket(sn: 0)
        guard b.count >= 4 else { return p }
        p.type = Int(b[2])
        p.command = Int(b[3])

        if p.type == typeMixCtr {
            if b.count >= 6 {
                p.params.append(Int(b[4]) | Int(b[5]) << 8)
                p.value = Data(b[6...])
            }
            return p
        }

        var off = 4
        while off + 2 <= b.count {
            p.params.append(Int(b[off]) | Int(b[off + 1]) << 8)
            off += 2
        }
        // SinglePacket / SingleNoAck carry raw payload from offset 4.
        if p.type == typeSingleCmd || p.type == typeSingleCmdNoAck {
            p.value = Data(b[4...])
        }
        return p
    }
}
