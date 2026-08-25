import Compression
import Foundation

enum ZipError: Error, LocalizedError {
    case truncated
    case unsupported(String)

    var errorDescription: String? {
        switch self {
        case .truncated: return "the zip is truncated"
        case .unsupported(let why): return why
        }
    }
}

/// Minimal ZIP reader for OTA packs (STORE and DEFLATE).
///
/// The official Star Air pack is a two-file zip at the archive root. This only
/// walks local-file headers; data-descriptor (bit 3) entries are rejected.
enum ZipArchive {
    static func entries(from data: Data) throws -> [String: Data] {
        var out: [String: Data] = [:]
        var offset = 0
        let bytes = data
        while offset + 30 <= bytes.count {
            let sig = u32(bytes, offset)
            if sig == 0x02014b50 || sig == 0x06054b50 { break }
            guard sig == 0x04034b50 else {
                throw ZipError.unsupported("unexpected zip signature at \(offset)")
            }
            let flags = Int(u16(bytes, offset + 6))
            let method = Int(u16(bytes, offset + 8))
            let compSize = Int(u32(bytes, offset + 18))
            let uncompSize = Int(u32(bytes, offset + 22))
            let nameLen = Int(u16(bytes, offset + 26))
            let extraLen = Int(u16(bytes, offset + 28))
            let headerEnd = offset + 30
            guard headerEnd + nameLen + extraLen <= bytes.count else { throw ZipError.truncated }
            let nameData = bytes.subdata(in: headerEnd ..< (headerEnd + nameLen))
            let name = String(data: nameData, encoding: .utf8)
                ?? String(data: nameData, encoding: .isoLatin1)
                ?? "file"
            if flags & 0x08 != 0 {
                throw ZipError.unsupported("zip data descriptors are not supported (\(name))")
            }
            let payloadStart = headerEnd + nameLen + extraLen
            guard payloadStart + compSize <= bytes.count else { throw ZipError.truncated }
            let payload = bytes.subdata(in: payloadStart ..< (payloadStart + compSize))
            let decoded: Data
            switch method {
            case 0:
                decoded = payload
            case 8:
                decoded = try inflate(payload, uncompressedSize: uncompSize)
            default:
                throw ZipError.unsupported("zip method \(method) is not supported (\(name))")
            }
            if uncompSize > 0, decoded.count != uncompSize {
                throw ZipError.unsupported("zip size mismatch for \(name)")
            }
            let key = URL(fileURLWithPath: name).lastPathComponent
            if !key.isEmpty, key != "/", !key.hasPrefix(".") {
                out[key] = decoded
            }
            offset = payloadStart + compSize
        }
        return out
    }

    private static func inflate(_ compressed: Data, uncompressedSize: Int) throws -> Data {
        let destCount = max(uncompressedSize, compressed.count)
        var dest = Data(count: destCount)
        let written: Int = dest.withUnsafeMutableBytes { destBuf in
            compressed.withUnsafeBytes { srcBuf in
                guard let destPtr = destBuf.bindMemory(to: UInt8.self).baseAddress,
                      let srcPtr = srcBuf.bindMemory(to: UInt8.self).baseAddress else {
                    return 0
                }
                return compression_decode_buffer(
                    destPtr, destCount,
                    srcPtr, compressed.count,
                    nil, COMPRESSION_ZLIB)
            }
        }
        guard written > 0 else {
            throw ZipError.unsupported("deflate decode failed")
        }
        return dest.prefix(written)
    }

    private static func u16(_ data: Data, _ offset: Int) -> UInt16 {
        UInt16(data[data.startIndex + offset])
            | UInt16(data[data.startIndex + offset + 1]) << 8
    }

    private static func u32(_ data: Data, _ offset: Int) -> UInt32 {
        UInt32(data[data.startIndex + offset])
            | UInt32(data[data.startIndex + offset + 1]) << 8
            | UInt32(data[data.startIndex + offset + 2]) << 16
            | UInt32(data[data.startIndex + offset + 3]) << 24
    }
}
