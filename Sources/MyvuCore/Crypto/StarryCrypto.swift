import CommonCrypto
import CryptoKit
import Foundation

/// The symmetric layer.
///
/// The mode is NEGOTIATED at runtime via the `"e"` field of the version JSON —
/// it is not a fixed constant. A captured live session negotiated `e=1` (CBC),
/// so that is the best-tested path.
///
/// CBC and CTR go through CommonCrypto; CryptoKit offers neither. GCM goes
/// through CryptoKit, which accepts this protocol's non-standard 16-byte IV and
/// derives J0 per NIST SP 800-38D exactly as Java's `GCMParameterSpec` does.
public enum StarryCrypto {
    public static let symmetricV1Cbc = 1
    public static let symmetricV2Ctr = 2
    /// ...and any other negotiated value.
    public static let symmetricV3Gcm = 3

    /// `EncryptionUtil.generateIV()`: the first 16 characters of a dash-stripped
    /// UUID4, taken as ASCII bytes.
    ///
    /// Note this is 16 ASCII *characters*, not 16 bytes of entropy — each byte
    /// is a hex digit, so the real entropy is 64 bits. That is what the device
    /// expects; do not "improve" it.
    ///
    /// Lowercased because Java's `UUID.toString()` is lowercase: the IV bytes are
    /// the ASCII characters themselves, so case changes the key material.
    public static func generateIv() -> Data {
        let hex = UUID().uuidString.replacingOccurrences(of: "-", with: "").lowercased()
        return Data(hex.prefix(16).utf8)
    }

    public static func encrypt(_ plaintext: Data, key: Data, iv: Data, mode: Int) throws -> Data {
        switch mode {
        case symmetricV1Cbc:
            return try cbc(plaintext, key: key, iv: iv, operation: CCOperation(kCCEncrypt))
        case symmetricV2Ctr:
            return try ctr(plaintext, key: key, iv: iv, operation: CCOperation(kCCEncrypt))
        default:
            return try gcmSeal(plaintext, key: key, iv: iv)
        }
    }

    public static func decrypt(_ ciphertext: Data, key: Data, iv: Data, mode: Int) throws -> Data {
        switch mode {
        case symmetricV1Cbc:
            return try cbc(ciphertext, key: key, iv: iv, operation: CCOperation(kCCDecrypt))
        case symmetricV2Ctr:
            // CTR is symmetric, but keep the operation explicit for clarity.
            return try ctr(ciphertext, key: key, iv: iv, operation: CCOperation(kCCDecrypt))
        default:
            return try gcmOpen(ciphertext, key: key, iv: iv)
        }
    }

    public static func modeName(_ mode: Int) -> String {
        switch mode {
        case symmetricV1Cbc: return "CBC"
        case symmetricV2Ctr: return "CTR"
        default: return "GCM"
        }
    }

    // MARK: - CBC (PKCS7; Java calls the identical scheme PKCS5)

    private static func cbc(_ input: Data, key: Data, iv: Data,
                            operation: CCOperation) throws -> Data {
        var out = Data(count: input.count + kCCBlockSizeAES128)
        let capacity = out.count
        var moved = 0
        let status = out.withUnsafeMutableBytes { outBuf in
            input.withUnsafeBytes { inBuf in
                key.withUnsafeBytes { keyBuf in
                    iv.withUnsafeBytes { ivBuf in
                        CCCrypt(operation,
                                CCAlgorithm(kCCAlgorithmAES),
                                CCOptions(kCCOptionPKCS7Padding),
                                keyBuf.baseAddress, key.count,
                                ivBuf.baseAddress,
                                inBuf.baseAddress, input.count,
                                outBuf.baseAddress, capacity,
                                &moved)
                    }
                }
            }
        }
        guard status == kCCSuccess else {
            throw MyvuError.cryptoFailed("AES-CBC failed (status \(status))")
        }
        out.removeSubrange(moved ..< out.count)
        return out
    }

    // MARK: - CTR (no padding)

    private static func ctr(_ input: Data, key: Data, iv: Data,
                            operation: CCOperation) throws -> Data {
        var cryptor: CCCryptorRef?
        let createStatus = key.withUnsafeBytes { keyBuf in
            iv.withUnsafeBytes { ivBuf in
                CCCryptorCreateWithMode(operation,
                                        CCMode(kCCModeCTR),
                                        CCAlgorithm(kCCAlgorithmAES),
                                        CCPadding(ccNoPadding),
                                        ivBuf.baseAddress,
                                        keyBuf.baseAddress, key.count,
                                        nil, 0, 0,
                                        CCModeOptions(kCCModeOptionCTR_BE),
                                        &cryptor)
            }
        }
        guard createStatus == kCCSuccess, let cryptor else {
            throw MyvuError.cryptoFailed("AES-CTR init failed (status \(createStatus))")
        }
        defer { CCCryptorRelease(cryptor) }

        var out = Data(count: CCCryptorGetOutputLength(cryptor, input.count, true))
        let capacity = out.count
        var moved = 0
        let status = out.withUnsafeMutableBytes { outBuf in
            input.withUnsafeBytes { inBuf in
                CCCryptorUpdate(cryptor, inBuf.baseAddress, input.count,
                                outBuf.baseAddress, capacity, &moved)
            }
        }
        guard status == kCCSuccess else {
            throw MyvuError.cryptoFailed("AES-CTR failed (status \(status))")
        }
        out.removeSubrange(moved ..< out.count)
        return out
    }

    // MARK: - GCM

    /// Java's `AES/GCM/NoPadding` appends the 128-bit tag to the ciphertext, so
    /// the combined form is what goes on the wire.
    private static func gcmSeal(_ plaintext: Data, key: Data, iv: Data) throws -> Data {
        do {
            let box = try AES.GCM.seal(plaintext,
                                       using: SymmetricKey(data: key),
                                       nonce: AES.GCM.Nonce(data: iv))
            return box.ciphertext + box.tag
        } catch {
            throw MyvuError.cryptoFailed("AES-GCM seal failed: \(error)")
        }
    }

    private static func gcmOpen(_ ciphertext: Data, key: Data, iv: Data) throws -> Data {
        let tagLength = 16
        guard ciphertext.count >= tagLength else {
            throw MyvuError.cryptoFailed("AES-GCM input shorter than its tag")
        }
        let split = ciphertext.count - tagLength
        do {
            let box = try AES.GCM.SealedBox(
                nonce: AES.GCM.Nonce(data: iv),
                ciphertext: ciphertext.prefix(split),
                tag: ciphertext.suffix(tagLength)
            )
            return try AES.GCM.open(box, using: SymmetricKey(data: key))
        } catch {
            throw MyvuError.cryptoFailed("AES-GCM open failed: \(error)")
        }
    }
}
