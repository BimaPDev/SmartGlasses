import Foundation

extension Data {
    /// Decodes as UTF-8, repairing anything ill-formed instead of failing.
    ///
    /// Relay bodies are protobuf envelopes with JSON embedded inside, so a
    /// strict `String(data:encoding:.utf8)` returns nil on the surrounding tag
    /// and length bytes. Every text scan over such a body would then silently
    /// see an empty string and match nothing. UTF-8 decoding resynchronises at
    /// the next lead byte, so valid multi-byte text inside the JSON survives and
    /// only the binary framing becomes replacement characters.
    var scannableText: String {
        String(decoding: self, as: UTF8.self)
    }
}
