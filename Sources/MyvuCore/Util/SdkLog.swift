import Foundation

public enum LogLevel: Int, Comparable {
    case trace = 0, info = 1, warn = 2, error = 3

    public static func < (a: LogLevel, b: LogLevel) -> Bool { a.rawValue < b.rawValue }
}

public protocol MyvuLogger: AnyObject {
    func log(level: LogLevel, message: String, error: Error?)
}

/// Package-wide logging seam.
///
/// The protocol is chatty by design — the reverse-engineered handshake is close
/// to impossible to debug without a running commentary — so `minimumLevel`
/// defaults to `.info` and hides the per-packet `.trace` lines.
public enum SdkLog {
    private static let lock = NSLock()
    private static var logger: MyvuLogger?
    nonisolated(unsafe) public static var minimumLevel: LogLevel = .info

    public static func setLogger(_ logger: MyvuLogger?) {
        lock.lock()
        defer { lock.unlock() }
        self.logger = logger
    }

    public static func trace(_ message: @autoclosure () -> String) {
        emit(.trace, message(), nil)
    }

    public static func log(_ message: @autoclosure () -> String) {
        emit(.info, message(), nil)
    }

    public static func warn(_ message: @autoclosure () -> String) {
        emit(.warn, message(), nil)
    }

    public static func error(_ message: @autoclosure () -> String, _ error: Error? = nil) {
        emit(.error, message(), error)
    }

    private static func emit(_ level: LogLevel, _ message: String, _ error: Error?) {
        guard level >= minimumLevel else { return }
        lock.lock()
        let sink = logger
        lock.unlock()
        if let sink {
            sink.log(level: level, message: message, error: error)
        } else {
            let tag: String
            switch level {
            case .trace: tag = "myvu/trace"
            case .info: tag = "myvu"
            case .warn: tag = "myvu/warn"
            case .error: tag = "myvu/error"
            }
            if let error {
                print("[\(tag)] \(message): \(error)")
            } else {
                print("[\(tag)] \(message)")
            }
        }
    }
}
