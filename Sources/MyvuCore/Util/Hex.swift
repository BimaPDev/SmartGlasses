import Foundation

public enum Hex {
    public static func encode(_ data: Data) -> String {
        data.map { String(format: "%02x", $0) }.joined()
    }

    public static func encode(_ data: Data, _ from: Int, _ to: Int) -> String {
        let lo = max(0, from)
        let hi = min(data.count, to)
        guard lo < hi else { return "" }
        return encode(data.subdata(in: lo ..< hi))
    }

    /// Tolerant of whitespace and separators, matching the Android helper.
    public static func decode(_ text: String) -> Data {
        let clean = text.filter { $0.isHexDigit }
        var out = Data(capacity: clean.count / 2)
        var iterator = clean.makeIterator()
        while let hi = iterator.next(), let lo = iterator.next() {
            if let byte = UInt8(String([hi, lo]), radix: 16) {
                out.append(byte)
            }
        }
        return out
    }
}
