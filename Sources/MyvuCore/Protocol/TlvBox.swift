import Foundation

/// Tag numbers for the TlvBox codec.
public enum TlvTags {
    public static let msgType = 100
    public static let msgId = 101
    public static let errorCode = 102
    public static let needCallback = 103
    public static let openType = 104
    public static let msgBody = 105
    public static let host = 106
    public static let version = 107
    public static let destId = 108
    public static let appUniteCode = 109
    public static let listenerId = 110
    public static let selfId = 111
    public static let category = 112
    public static let payload = 113
}

/// TlvBox codec. Wire format is big-endian: a concatenation of
/// `[tag:1][length:2][value]`.
///
/// Note this is the opposite endianness to the BLE packet layer, which is
/// little-endian throughout. The two must not be unified.
public struct TlvBox {
    /// Insertion-ordered, because the serialised byte order is part of the wire
    /// format the glasses were captured accepting.
    private var entries: [(tag: Int, value: Data)] = []

    public init() {}

    @discardableResult
    public mutating func putBytes(_ tag: Int, _ value: Data) -> TlvBox {
        if let i = entries.firstIndex(where: { $0.tag == tag }) {
            entries[i].value = value
        } else {
            entries.append((tag, value))
        }
        return self
    }

    @discardableResult
    public mutating func putByte(_ tag: Int, _ value: Int) -> TlvBox {
        putBytes(tag, Data([UInt8(value & 0xFF)]))
    }

    @discardableResult
    public mutating func putInt(_ tag: Int, _ value: Int) -> TlvBox {
        let v = UInt32(bitPattern: Int32(truncatingIfNeeded: value)).bigEndian
        return putBytes(tag, withUnsafeBytes(of: v) { Data($0) })
    }

    @discardableResult
    public mutating func putBox(_ tag: Int, _ box: TlvBox) -> TlvBox {
        putBytes(tag, box.serialized())
    }

    public func getBytes(_ tag: Int) -> Data? {
        entries.first { $0.tag == tag }?.value
    }

    /// Returns nil when the tag is absent, so callers can supply a default.
    public func getByte(_ tag: Int) -> Int? {
        guard let v = getBytes(tag), !v.isEmpty else { return nil }
        return Int(v[v.startIndex])
    }

    public func getInt(_ tag: Int) -> Int? {
        guard let v = getBytes(tag), v.count == 4 else { return nil }
        let bytes = [UInt8](v)
        return Int(Int32(bitPattern:
            UInt32(bytes[0]) << 24 | UInt32(bytes[1]) << 16
                | UInt32(bytes[2]) << 8 | UInt32(bytes[3])))
    }

    public func serialized() -> Data {
        var out = Data()
        for e in entries {
            out.append(UInt8(e.tag & 0xFF))
            out.append(UInt8((e.value.count >> 8) & 0xFF))
            out.append(UInt8(e.value.count & 0xFF))
            out.append(e.value)
        }
        return out
    }

    public static func parse(_ data: Data) -> TlvBox {
        var box = TlvBox()
        let bytes = [UInt8](data)
        var i = 0
        let n = bytes.count
        while i + 3 <= n {
            let tag = Int(bytes[i])
            let length = Int(bytes[i + 1]) << 8 | Int(bytes[i + 2])
            i += 3
            if i + length > n { break }
            box.putBytes(tag, Data(bytes[i ..< i + length]))
            i += length
        }
        return box
    }
}
