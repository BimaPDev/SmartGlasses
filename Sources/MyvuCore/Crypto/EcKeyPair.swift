import CryptoKit
import Foundation

/// The ECDH half of the bond: EC P-256 (secp256r1), with the raw 32-byte X
/// coordinate of the shared point used **directly** as the AES-256 key.
///
/// There is no KDF. `CryptoKit.SharedSecret` is exactly that X coordinate, so
/// reading its raw bytes reproduces the Java `KeyAgreement.generateSecret()`
/// result byte for byte — do not run it through HKDF, however much the API
/// nudges you to.
///
/// Public keys are exchanged as X.509 SubjectPublicKeyInfo DER (91 bytes for
/// P-256). There is no certificate or signature check anywhere in the handshake:
/// any client that speaks the protocol correctly is accepted.
public struct EcKeyPair {
    private let privateKey: P256.KeyAgreement.PrivateKey

    public init() {
        self.privateKey = P256.KeyAgreement.PrivateKey()
    }

    public init(privateKey: P256.KeyAgreement.PrivateKey) {
        self.privateKey = privateKey
    }

    /// X.509 SubjectPublicKeyInfo DER, the encoding the glasses expect.
    public var publicSpkiDer: Data {
        privateKey.publicKey.derRepresentation
    }

    public func sharedSecret(peerSpkiDer: Data) throws -> Data {
        do {
            let peer = try P256.KeyAgreement.PublicKey(derRepresentation: peerSpkiDer)
            let secret = try privateKey.sharedSecretFromKeyAgreement(with: peer)
            return secret.withUnsafeBytes { Data($0) }
        } catch let error as MyvuError {
            throw error
        } catch {
            throw MyvuError.cryptoFailed("ECDH failed: \(error)")
        }
    }
}
