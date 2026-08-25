import Foundation

public enum MyvuError: Error, LocalizedError {
    /// Bluetooth is off, unauthorised, or unsupported — the user must act, so
    /// this is never retried automatically.
    case bluetoothUnavailable(String)
    case notFound(String)
    case pairingFailed(String)
    case disconnected(String)
    case notReady(String)
    case initBurstUnavailable(String)
    case cryptoFailed(String)
    case timedOut(String)

    public var errorDescription: String? {
        switch self {
        case .bluetoothUnavailable(let m): return m
        case .notFound(let m): return m
        case .pairingFailed(let m): return "pairing failed: \(m)"
        case .disconnected(let m): return m
        case .notReady(let m): return m
        case .initBurstUnavailable(let m): return m
        case .cryptoFailed(let m): return "crypto failed: \(m)"
        case .timedOut(let m): return "timed out: \(m)"
        }
    }
}
