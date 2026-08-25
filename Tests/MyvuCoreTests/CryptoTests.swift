import CryptoKit
import XCTest
@testable import MyvuCore

/// The highest-value offline tests in the project: an ECDH or AES bug is
/// otherwise only observable as "the glasses silently ignore us", with no error
/// to diagnose.
final class CryptoTests: XCTestCase {
    private let message = Data("the quick brown fox jumps over 13 lazy dogs!!".utf8)

    func testCapturedPublicKeyLoadsAsP256() throws {
        let p = BlePackets.parse(CapturedFrames.f484)
        let (key, _) = LinkProtocol.parseWriteSwitchKey(LinkProtocol.parse(p.value).data)

        // Constructing the key is itself the assertion: CryptoKit rejects DER
        // that is not a P-256 SubjectPublicKeyInfo.
        let pub = try P256.KeyAgreement.PublicKey(derRepresentation: key)
        XCTAssertEqual(pub.derRepresentation, key, "re-encoding must be stable")
    }

    func testGeneratedPublicKeyIsWireCompatible() {
        // Our own key must serialise to the same 91-byte SPKI DER shape the
        // glasses sent, or WRITE_SWITCH_KEY will be rejected.
        let spki = EcKeyPair().publicSpkiDer
        XCTAssertEqual(spki.count, 91)
        XCTAssertEqual(spki[spki.startIndex], 0x30)
        XCTAssertEqual(spki[spki.startIndex + 1], 0x59)
    }

    func testEcdhSharedSecretsAgree() throws {
        let a = EcKeyPair()
        let b = EcKeyPair()

        let s1 = try a.sharedSecret(peerSpkiDer: b.publicSpkiDer)
        let s2 = try b.sharedSecret(peerSpkiDer: a.publicSpkiDer)

        XCTAssertEqual(s1, s2)
        // Raw X coordinate, used directly as the AES-256 key with no KDF.
        XCTAssertEqual(s1.count, 32)
    }

    func testGenerateIvIs16LowercaseAsciiHexBytes() {
        let iv = StarryCrypto.generateIv()
        XCTAssertEqual(iv.count, 16)

        // ASCII hex characters, not raw entropy — matches EncryptionUtil. Case
        // matters because the characters themselves are the IV bytes, and
        // Swift's UUID.uuidString is uppercase where Java's is not.
        let allowed = Set("0123456789abcdef")
        for b in iv {
            let c = Character(UnicodeScalar(b))
            XCTAssertTrue(allowed.contains(c), "IV must be lowercase ASCII hex, got '\(c)'")
        }
    }

    func testAesRoundTripsInEveryNegotiatedMode() throws {
        let key = try EcKeyPair().sharedSecret(peerSpkiDer: EcKeyPair().publicSpkiDer)
        let iv = StarryCrypto.generateIv()

        for mode in [StarryCrypto.symmetricV1Cbc,
                     StarryCrypto.symmetricV2Ctr,
                     StarryCrypto.symmetricV3Gcm] {
            let ct = try StarryCrypto.encrypt(message, key: key, iv: iv, mode: mode)
            let pt = try StarryCrypto.decrypt(ct, key: key, iv: iv, mode: mode)
            XCTAssertEqual(pt, message, "mode \(StarryCrypto.modeName(mode)) round-trip")
        }
    }

    func testCbcPadsToBlockSize() throws {
        // e=1 (CBC) is what a real captured session negotiated, so verify its
        // shape specifically: PKCS7 always pads, so the ciphertext is a strict
        // multiple of 16 and strictly longer than the 45-byte plaintext.
        let key = try EcKeyPair().sharedSecret(peerSpkiDer: EcKeyPair().publicSpkiDer)
        let iv = StarryCrypto.generateIv()

        let ct = try StarryCrypto.encrypt(message, key: key, iv: iv,
                                          mode: StarryCrypto.symmetricV1Cbc)
        XCTAssertEqual(ct.count % 16, 0)
        XCTAssertNotEqual(ct.count, message.count)
    }

    func testCtrDoesNotChangeLength() throws {
        let key = try EcKeyPair().sharedSecret(peerSpkiDer: EcKeyPair().publicSpkiDer)
        let iv = StarryCrypto.generateIv()

        let ct = try StarryCrypto.encrypt(message, key: key, iv: iv,
                                          mode: StarryCrypto.symmetricV2Ctr)
        XCTAssertEqual(ct.count, message.count)
    }

    func testGcmAppendsA16ByteTag() throws {
        let key = try EcKeyPair().sharedSecret(peerSpkiDer: EcKeyPair().publicSpkiDer)
        let iv = StarryCrypto.generateIv()

        let ct = try StarryCrypto.encrypt(message, key: key, iv: iv,
                                          mode: StarryCrypto.symmetricV3Gcm)
        XCTAssertEqual(ct.count, message.count + 16)
    }

    /// The bond encrypts DeviceInfo twice (`generateDeviceInfoSwitchData`), so
    /// verify the exact nesting the glasses expect survives a round trip.
    func testDoubleEncryptedDeviceInfoRoundTrips() throws {
        let key = try EcKeyPair().sharedSecret(peerSpkiDer: EcKeyPair().publicSpkiDer)
        let iv = StarryCrypto.generateIv()
        let mode = StarryCrypto.symmetricV1Cbc

        let info = DeviceInfo.build(btMac: "AA:BB:CC:DD:EE:FF", companyId: "",
                                    categoryId: "9999", modelId: "", name: "MyvuiOS",
                                    battery: 100, btStatus: 0)
        let inner = try StarryCrypto.encrypt(info, key: key, iv: iv, mode: mode)
        let wsi = LinkProtocol.writeSwitchInfo(info: inner)
        let outer = try StarryCrypto.encrypt(wsi, key: key, iv: iv, mode: mode)

        let unwrapped = try StarryCrypto.decrypt(outer, key: key, iv: iv, mode: mode)
        let innerAgain = LinkProtocol.parseWriteSwitchInfo(unwrapped)
        let decoded = DeviceInfo.parse(
            try StarryCrypto.decrypt(innerAgain, key: key, iv: iv, mode: mode))

        XCTAssertEqual(decoded.btMac, "AA:BB:CC:DD:EE:FF")
        XCTAssertEqual(decoded.name, "MyvuiOS")
        XCTAssertEqual(decoded.battery, 100)
    }
}
