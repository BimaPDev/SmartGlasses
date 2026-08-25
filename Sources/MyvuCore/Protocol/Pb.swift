import Foundation

/// One decoded protobuf field value.
public enum PbValue {
    case varint(UInt64)
    case bytes(Data)

    public var isVarint: Bool {
        if case .varint = self { return true }
        return false
    }

    public var asVarint: UInt64 {
        switch self {
        case .varint(let v): return v
        case .bytes: return 0
        }
    }

    public var asBytes: Data {
        switch self {
        case .varint: return Data()
        case .bytes(let d): return d
        }
    }

    public var asString: String {
        String(data: asBytes, encoding: .utf8) ?? ""
    }
}

/// Minimal protobuf writer and reader — only what this protocol needs, not a
/// general library.
///
/// The reader is deliberately lenient in the same places the Android and Python
/// implementations are: inbound data comes off a radio from a device we do not
/// control, so a malformed message must never take the connection down.
public enum Pb {
    // MARK: - Writers

    static func varint(_ n: UInt64) -> Data {
        var value = n
        var out = Data()
        while true {
            let b = UInt8(value & 0x7F)
            value >>= 7
            if value != 0 {
                out.append(b | 0x80)
            } else {
                out.append(b)
                return out
            }
        }
    }

    private static func tag(_ field: Int, _ wire: Int) -> Data {
        varint(UInt64(field << 3 | wire))
    }

    public static func bytes(_ field: Int, _ value: Data) -> Data {
        tag(field, 2) + varint(UInt64(value.count)) + value
    }

    public static func varintField(_ field: Int, _ value: UInt64) -> Data {
        tag(field, 0) + varint(value)
    }

    public static func string(_ field: Int, _ value: String) -> Data {
        bytes(field, Data(value.utf8))
    }

    // MARK: - Reader

    /// Parses into `[fieldNumber: [values]]`.
    ///
    /// Wire types 0 (varint) and 2 (length-delimited) are the ones this protocol
    /// uses. Types 1 (fixed64) and 5 (fixed32) are kept as raw bytes so an
    /// unexpected field cannot crash the reader. Types 3/4 (deprecated groups)
    /// stop the parse and return what was decoded so far — hitting one almost
    /// always means the buffer is misaligned rather than that a group is
    /// genuinely present.
    public static func parse(_ data: Data) -> [Int: [PbValue]] {
        var out: [Int: [PbValue]] = [:]
        let bytes = [UInt8](data)
        var i = 0
        while i < bytes.count {
            guard let kv = readVarint(bytes, i) else { break }
            let key = kv.value
            i = kv.next
            let field = Int(key >> 3)
            let wire = Int(key & 7)

            let value: PbValue
            switch wire {
            case 0:
                guard let r = readVarint(bytes, i) else { return out }
                i = r.next
                value = .varint(r.value)
            case 2:
                guard let r = readVarint(bytes, i) else { return out }
                let len = Int(r.value)
                i = r.next
                guard len >= 0, i + len <= bytes.count else { return out } // truncated
                value = .bytes(Data(bytes[i ..< i + len]))
                i += len
            case 5:
                guard i + 4 <= bytes.count else { return out }
                value = .bytes(Data(bytes[i ..< i + 4]))
                i += 4
            case 1:
                guard i + 8 <= bytes.count else { return out }
                value = .bytes(Data(bytes[i ..< i + 8]))
                i += 8
            default:
                // Wire types 3/4 (groups), or anything else: stop cleanly.
                return out
            }
            out[field, default: []].append(value)
        }
        return out
    }

    // MARK: - Field accessors

    /// Every value seen for `field` — needed for repeated fields such as the
    /// glasses' mic-audio chunks.
    public static func all(_ fields: [Int: [PbValue]], _ field: Int) -> [PbValue] {
        fields[field] ?? []
    }

    public static func first(_ fields: [Int: [PbValue]], _ field: Int) -> PbValue? {
        fields[field]?.first
    }

    public static func firstBytes(_ fields: [Int: [PbValue]], _ field: Int,
                                  _ def: Data = Data()) -> Data {
        guard let v = first(fields, field), !v.isVarint else { return def }
        return v.asBytes
    }

    public static func firstVarint(_ fields: [Int: [PbValue]], _ field: Int,
                                   _ def: UInt64 = 0) -> UInt64 {
        guard let v = first(fields, field), v.isVarint else { return def }
        return v.asVarint
    }

    public static func firstString(_ fields: [Int: [PbValue]], _ field: Int,
                                   _ def: String = "") -> String {
        guard let v = first(fields, field), !v.isVarint else { return def }
        return v.asString
    }

    /// Returns the value and the next index, or nil if the buffer ends
    /// mid-varint. Bails out past 64 bits of shift too: without that guard a run
    /// of `0x80` bytes would spin and read off the end.
    private static func readVarint(_ bytes: [UInt8], _ start: Int) -> (value: UInt64, next: Int)? {
        var shift = 0
        var result: UInt64 = 0
        var i = start
        while true {
            if i >= bytes.count || shift > 63 { return nil }
            let b = bytes[i]
            i += 1
            result |= UInt64(b & 0x7F) << UInt64(shift)
            if b & 0x80 == 0 { return (result, i) }
            shift += 7
        }
    }
}
