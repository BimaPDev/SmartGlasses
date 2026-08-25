import CoreGraphics
import CryptoKit
import Foundation
import ImageIO
import UniformTypeIdentifiers

/// One file the glasses finished pushing over ShareAbility.
public struct ReceivedFile {
    public let url: URL
    public let fileName: String
    public let byteCount: Int
}

/// Accumulates ShareAbility chunks and writes the finished file under
/// `Documents/MyvuReceived/` (or an injected directory, for tests).
///
/// The glasses' `dirPath` is an Android SD-card path and is ignored. HUD
/// screenshots arrive RLE-packed (G4); those are decoded to PNG. JPEG / PNG /
/// ZIP payloads are saved as-is.
public final class ShareReceiver {
    public static let folderName = "MyvuReceived"
    public static let maxFileSize = 8 * 1024 * 1024

    private struct Transfer {
        var fileName: String
        var md5: String
        var totalSize: Int
        var buffer: Data
        var isScreenshot: Bool
    }

    private var transfers: [String: Transfer] = [:]
    public let directory: URL

    public init(directory: URL? = nil) {
        if let directory {
            self.directory = directory
        } else {
            let docs = FileManager.default.urls(for: .documentDirectory,
                                                in: .userDomainMask).first
                ?? URL(fileURLWithPath: NSTemporaryDirectory())
            self.directory = docs.appendingPathComponent(Self.folderName, isDirectory: true)
        }
    }

    public func reset() {
        transfers.removeAll()
    }

    public func handleSyn(_ msg: ShareAbility.Message) -> Data {
        let total = Int(truncatingIfNeeded: msg.totalSize)
        if total > Self.maxFileSize {
            SdkLog.warn("share SYN too large (\(total)B) — failing")
            return ShareAbility.receiverFail(taskId: msg.taskId)
        }
        let rawName = msg.fileName.isEmpty ? "file" : msg.fileName
        let name = ShareReceiver.sanitizedName(rawName)
        let shot = name.lowercased().contains("screenshot")
        transfers[msg.taskId] = Transfer(
            fileName: name,
            md5: msg.md5.lowercased(),
            totalSize: total,
            buffer: Data(),
            isScreenshot: shot
        )
        SdkLog.log("<- share SYN file=\(name) size=\(total) md5=\(msg.md5.isEmpty ? "-" : msg.md5)")
        return ShareAbility.receiverAck(taskId: msg.taskId)
    }

    public func handleData(_ msg: ShareAbility.Message) -> Data? {
        guard var transfer = transfers[msg.taskId] else {
            SdkLog.warn("share DATA for unknown taskId=\(msg.taskId)")
            return ShareAbility.receiverFail(taskId: msg.taskId)
        }
        if msg.chunkStart == 0 {
            transfer.buffer = Data()
        }
        if transfer.buffer.count + msg.chunkData.count > Self.maxFileSize {
            transfers.removeValue(forKey: msg.taskId)
            return ShareAbility.receiverFail(taskId: msg.taskId)
        }
        transfer.buffer.append(msg.chunkData)
        transfers[msg.taskId] = transfer
        let end = msg.chunkStart + UInt64(msg.chunkData.count)
        return ShareAbility.receiverDataAck(taskId: msg.taskId, chunkEnd: end)
    }

    public func handleFinish(_ msg: ShareAbility.Message) -> ReceivedFile? {
        guard let transfer = transfers.removeValue(forKey: msg.taskId) else {
            SdkLog.warn("share FINISH for unknown taskId=\(msg.taskId)")
            return nil
        }
        if !transfer.md5.isEmpty {
            let got = ShareReceiver.md5Hex(transfer.buffer)
            if got != transfer.md5 {
                SdkLog.warn("share md5 mismatch expected=\(transfer.md5) got=\(got) — saving anyway")
            }
        }
        do {
            try FileManager.default.createDirectory(at: directory,
                                                    withIntermediateDirectories: true)
        } catch {
            SdkLog.error("could not create \(directory.path)", error)
            return nil
        }

        var data = transfer.buffer
        var name = transfer.fileName
        if data.starts(with: [0xFF, 0xD8, 0xFF]) {
            if (name as NSString).pathExtension.isEmpty { name += ".jpg" }
        } else if data.starts(with: [0x89, 0x50, 0x4E, 0x47]) {
            if (name as NSString).pathExtension.isEmpty { name += ".png" }
        } else if data.starts(with: [0x50, 0x4B]) {
            if (name as NSString).pathExtension.isEmpty { name += ".zip" }
        } else if transfer.isScreenshot {
            if let png = GlassScreenshotCodec.png(fromG4: data) {
                data = png
                name = ShareReceiver.timestamped("screenshot", ext: "png")
            } else if (name as NSString).pathExtension.isEmpty {
                name += ".bin"
            }
        } else if name.lowercased().contains("feed") || name.lowercased().contains("log") {
            if (name as NSString).pathExtension.isEmpty { name += ".log" }
        }

        let url = uniqueURL(name)
        do {
            try data.write(to: url, options: .atomic)
        } catch {
            SdkLog.error("could not write \(url.path)", error)
            return nil
        }
        return ReceivedFile(url: url, fileName: url.lastPathComponent, byteCount: data.count)
    }

    public static func sanitizedName(_ name: String) -> String {
        let base = URL(fileURLWithPath: name).lastPathComponent
            .replacingOccurrences(of: ":", with: "_")
        if base.isEmpty || base == "." || base == ".." { return "file" }
        return base
    }

    private func uniqueURL(_ name: String) -> URL {
        let candidate = directory.appendingPathComponent(name)
        if !FileManager.default.fileExists(atPath: candidate.path) { return candidate }
        let stem = candidate.deletingPathExtension().lastPathComponent
        let ext = candidate.pathExtension
        let stamp = Int(Date().timeIntervalSince1970)
        if ext.isEmpty {
            return directory.appendingPathComponent("\(stem)-\(stamp)")
        }
        return directory.appendingPathComponent("\(stem)-\(stamp).\(ext)")
    }

    static func timestamped(_ stem: String, ext: String) -> String {
        let fmt = DateFormatter()
        fmt.locale = Locale(identifier: "en_US_POSIX")
        fmt.dateFormat = "yyyyMMdd-HHmmss"
        return "\(stem)-\(fmt.string(from: Date())).\(ext)"
    }

    public static func md5Hex(_ data: Data) -> String {
        Insecure.MD5.hash(data: data).map { String(format: "%02x", $0) }.joined()
    }
}

/// Meizu G4 HUD screenshot: RLE `(value, count)` pairs, then two 4-bit pixels
/// per byte, 640 px wide, mirrored horizontally. Official app also scales 1.25×
/// and JPEG-encodes; PNG keeps the HUD pixels lossless.
public enum GlassScreenshotCodec {
    public static let hudWidth = 640

    public static func rleDecode(_ input: Data) -> Data {
        let bytes = [UInt8](input)
        var out = Data()
        out.reserveCapacity(bytes.count * 4)
        var i = 0
        while i + 1 < bytes.count {
            let value = bytes[i]
            let count = Int(bytes[i + 1])
            i += 2
            if count > 0 {
                out.append(contentsOf: repeatElement(value, count: count))
            }
        }
        return out
    }

    public static func unpackNibbles(_ packed: Data) -> [UInt8] {
        var gray = [UInt8]()
        gray.reserveCapacity(packed.count * 2)
        for b in packed {
            gray.append(b & 0xF0)
            gray.append((b & 0x0F) << 4)
        }
        return gray
    }

    /// Packed bytes per 640-pixel row (two pixels per byte).
    public static let packedRow = hudWidth / 2

    public static func png(fromG4 data: Data) -> Data? {
        // 1. RLE-expand; fall back to treating the payload as already unpacked.
        let rle = rleDecode(data)
        let packed = (rle.count >= packedRow) ? rle : data
        var gray = unpackNibbles(packed)
        guard gray.count >= 256 else { return nil }

        // 2. Recover the real row width. Assuming a fixed 640 makes every row
        //    drift when the panel's true stride differs even slightly (padding,
        //    or a width that isn't exactly 640) — that's the diagonal "wave".
        //    Pick the width that makes consecutive rows line up.
        let rowWidth = detectRowWidth(gray, hint: hudWidth)
        let height = gray.count / rowWidth
        guard height > 1 else { return nil }
        gray = Array(gray.prefix(rowWidth * height))

        // 3. HUD is stored mirrored; flip each row back over the true width.
        for row in 0 ..< height {
            let start = row * rowWidth
            var i = 0
            var j = rowWidth - 1
            while i < j {
                gray.swapAt(start + i, start + j)
                i += 1
                j -= 1
            }
        }
        return pngGray(gray, width: rowWidth, height: height)
    }

    /// Recover the framebuffer stride from a flat pixel buffer. The correct
    /// width makes row r predict row r+1 well (smooth vertical continuity); a
    /// wrong width shears the image and inflates the average |row − prevRow|
    /// difference. Search a tight band around the known ~640 visible width so a
    /// small stride pad (e.g. 648/656) is found without picking a spurious
    /// far-off period. Returns `hint` unchanged when it already scores best.
    public static func detectRowWidth(_ gray: [UInt8], hint: Int = hudWidth) -> Int {
        let n = gray.count
        let lo = max(64, hint - 80)
        let hi = min(hint + 128, n / 2)
        guard hi > lo else { return hint }
        var best = hint
        var bestScore = Double.greatestFiniteMagnitude
        for w in lo ... hi {
            let h = n / w
            if h < 8 { continue }
            let rowStep = max(1, h / 64)
            let colStep = max(1, w / 128)
            var acc: UInt64 = 0
            var terms = 0
            var r = rowStep
            while r < h {
                let cur = r * w
                let prev = (r - 1) * w
                var x = 0
                while x < w {
                    let d = Int(gray[cur + x]) - Int(gray[prev + x])
                    acc += UInt64(abs(d))
                    terms += 1
                    x += colStep
                }
                r += rowStep
            }
            guard terms > 0 else { continue }
            let score = Double(acc) / Double(terms)
            if score < bestScore {
                bestScore = score
                best = w
            }
        }
        return best
    }

    public static func pngGray(_ gray: [UInt8], width: Int, height: Int) -> Data? {
        guard width > 0, height > 0, gray.count >= width * height else { return nil }
        let pixels = Array(gray.prefix(width * height))
        let cs = CGColorSpaceCreateDeviceGray()
        guard let provider = CGDataProvider(data: Data(pixels) as CFData),
              let image = CGImage(
                width: width,
                height: height,
                bitsPerComponent: 8,
                bitsPerPixel: 8,
                bytesPerRow: width,
                space: cs,
                bitmapInfo: CGBitmapInfo(rawValue: CGImageAlphaInfo.none.rawValue),
                provider: provider,
                decode: nil,
                shouldInterpolate: false,
                intent: .defaultIntent)
        else { return nil }
        let dest = NSMutableData()
        guard let destOut = CGImageDestinationCreateWithData(
            dest as CFMutableData, UTType.png.identifier as CFString, 1, nil)
        else { return nil }
        CGImageDestinationAddImage(destOut, image, nil)
        guard CGImageDestinationFinalize(destOut) else { return nil }
        return dest as Data
    }
}
