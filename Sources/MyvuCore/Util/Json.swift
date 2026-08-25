import Foundation

/// Ordered JSON builder and serialiser.
///
/// The Android SDK builds every outbound payload with `org.json.JSONObject`.
/// Swift dictionaries are unordered and `JSONSerialization` either randomises or
/// alphabetises keys, so payloads would differ run to run and could not be
/// asserted byte-for-byte in tests. This type keeps insertion order and
/// reproduces `org.json`'s exact output style: no whitespace, and doubles with
/// their trailing ".0" trimmed.
public struct JsonObject {
    private var entries: [(key: String, value: JsonValue)] = []

    public init() {}

    public init(_ pairs: [(String, JsonValue)]) {
        for (k, v) in pairs { put(k, v) }
    }

    /// Appends, or replaces in place if the key already exists.
    @discardableResult
    public mutating func put(_ key: String, _ value: JsonValue) -> JsonObject {
        if let i = entries.firstIndex(where: { $0.key == key }) {
            entries[i].value = value
        } else {
            entries.append((key, value))
        }
        return self
    }

    @discardableResult
    public mutating func put(_ key: String, _ value: String) -> JsonObject {
        put(key, .string(value))
    }

    @discardableResult
    public mutating func put(_ key: String, _ value: Int) -> JsonObject {
        put(key, .int(Int64(value)))
    }

    @discardableResult
    public mutating func put(_ key: String, _ value: Int64) -> JsonObject {
        put(key, .int(value))
    }

    @discardableResult
    public mutating func put(_ key: String, _ value: Bool) -> JsonObject {
        put(key, .bool(value))
    }

    @discardableResult
    public mutating func put(_ key: String, _ value: Double) -> JsonObject {
        put(key, .double(value))
    }

    @discardableResult
    public mutating func put(_ key: String, _ value: JsonObject) -> JsonObject {
        put(key, .object(value))
    }

    /// Mirrors Gson's default behaviour: a nil value is left off the wire
    /// entirely rather than serialised as JSON `null`. The glasses were built
    /// against payloads where an unknown field is absent.
    @discardableResult
    public mutating func putIfPresent(_ key: String, _ value: JsonValue?) -> JsonObject {
        guard let value else { return self }
        return put(key, value)
    }

    @discardableResult
    public mutating func putIfPresent(_ key: String, _ value: String?) -> JsonObject {
        guard let value else { return self }
        return put(key, .string(value))
    }

    @discardableResult
    public mutating func putIfPresent(_ key: String, _ value: Int?) -> JsonObject {
        guard let value else { return self }
        return put(key, .int(Int64(value)))
    }

    public func value(for key: String) -> JsonValue? {
        entries.first { $0.key == key }?.value
    }

    public var isEmpty: Bool { entries.isEmpty }

    public func serialized() -> String {
        var out = "{"
        for (i, e) in entries.enumerated() {
            if i > 0 { out += "," }
            out += JsonValue.quote(e.key)
            out += ":"
            out += e.value.serialized()
        }
        return out + "}"
    }
}

public enum JsonValue {
    case string(String)
    case int(Int64)
    case double(Double)
    case bool(Bool)
    case object(JsonObject)
    case array([JsonValue])

    public func serialized() -> String {
        switch self {
        case .string(let s): return JsonValue.quote(s)
        case .int(let v): return String(v)
        case .double(let d): return JsonValue.number(d)
        case .bool(let b): return b ? "true" : "false"
        case .object(let o): return o.serialized()
        case .array(let items):
            return "[" + items.map { $0.serialized() }.joined(separator: ",") + "]"
        }
    }

    /// Reproduces `org.json.JSONObject.numberToString`, which strips a trailing
    /// ".0" so a whole-valued double is written as `1` and not `1.0`.
    static func number(_ d: Double) -> String {
        guard d.isFinite else { return "null" }
        var s = String(d)
        if s.contains("."), !s.lowercased().contains("e") {
            while s.hasSuffix("0") { s.removeLast() }
            if s.hasSuffix(".") { s.removeLast() }
        }
        return s
    }

    static func quote(_ s: String) -> String {
        var out = "\""
        for c in s.unicodeScalars {
            switch c {
            case "\"": out += "\\\""
            case "\\": out += "\\\\"
            case "\n": out += "\\n"
            case "\r": out += "\\r"
            case "\t": out += "\\t"
            case "\u{08}": out += "\\b"
            case "\u{0C}": out += "\\f"
            default:
                // org.json escapes control characters and the HTML-unsafe "</".
                if c.value < 0x20 {
                    out += String(format: "\\u%04x", c.value)
                } else {
                    out.unicodeScalars.append(c)
                }
            }
        }
        return out + "\""
    }
}

/// Read-only view over an inbound JSON object.
///
/// Inbound key order is irrelevant, so this wraps Foundation's parser and
/// exposes the `optX` accessors the Android port reads against, each returning a
/// caller-supplied default rather than throwing. Messages arrive off a radio
/// from a device we do not control, so a malformed field must never be fatal.
public struct JsonReader {
    public let raw: [String: Any]

    public init(raw: [String: Any]) {
        self.raw = raw
    }

    public init?(parsing text: String) {
        guard let data = text.data(using: .utf8),
              let obj = try? JSONSerialization.jsonObject(with: data),
              let dict = obj as? [String: Any]
        else { return nil }
        self.raw = dict
    }

    public func has(_ key: String) -> Bool { raw[key] != nil }

    public func optString(_ key: String, _ def: String = "") -> String {
        if let s = raw[key] as? String { return s }
        if let n = raw[key] as? NSNumber { return n.stringValue }
        return def
    }

    public func optInt(_ key: String, _ def: Int) -> Int {
        if let n = raw[key] as? NSNumber { return n.intValue }
        if let s = raw[key] as? String, let v = Int(s) { return v }
        return def
    }

    public func optBool(_ key: String, _ def: Bool) -> Bool {
        if let n = raw[key] as? NSNumber { return n.boolValue }
        return def
    }

    public func optObject(_ key: String) -> JsonReader? {
        guard let d = raw[key] as? [String: Any] else { return nil }
        return JsonReader(raw: d)
    }

    /// The value as-is, for fields echoed straight back into a reply.
    public func opt(_ key: String) -> Any? { raw[key] }
}
