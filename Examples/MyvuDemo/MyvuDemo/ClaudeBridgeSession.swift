import Foundation
import MyvuCore

/// Puts a headless Claude Code session from a laptop onto the lens.
///
/// The laptop half is `Tools/bridge/claude-bridge.mjs`: it spawns `claude -p
/// --output-format stream-json`, coalesces the token stream, and pushes ready-
/// made frames over a WebSocket. This end deliberately does no formatting — the
/// server owns the tail-trimming and the frame rate, because that is where the
/// text is produced and where throttling actually costs nothing.
///
/// Same topology as Even Realities' `even-terminal`, except the bridge is this
/// app rather than a vendor app, and the surface is a repainted notification
/// card rather than a pixel canvas — MYVU exposes no arbitrary canvas over BLE.
@MainActor
final class ClaudeBridgeSession: ObservableObject {
    @Published private(set) var connected = false
    @Published private(set) var lastFrame = ""
    @Published var statusMessage = ""

    /// Cards expire after `notificationDisplayTime` (10 s by default, 30 s max),
    /// so an idle session would silently vanish from the lens mid-run. A repaint
    /// on the same id resets that timer; 8 s stays clear of the shortest choice
    /// the wearer can pick.
    private static let keepaliveSeconds: TimeInterval = 8

    private let client: MyvuClient
    private var socket: URLSessionWebSocketTask?
    private var keepalive: Task<Void, Never>?
    private var lastTitle = "Claude"
    private var lastBody = ""

    init(client: MyvuClient) {
        self.client = client
    }

    /// - Parameter host: laptop address as `host:port`, e.g. `192.168.1.20:3457`.
    func connect(host: String) {
        disconnect()
        let trimmed = host.trimmingCharacters(in: .whitespaces)
        guard !trimmed.isEmpty, let url = URL(string: "ws://\(trimmed)") else {
            statusMessage = "bad address"
            return
        }
        statusMessage = "connecting to \(trimmed)…"
        let task = URLSession.shared.webSocketTask(with: url)
        socket = task
        task.resume()
        receive()
        startKeepalive()
    }

    func disconnect() {
        keepalive?.cancel()
        keepalive = nil
        socket?.cancel(with: .goingAway, reason: nil)
        socket = nil
        connected = false
        client.dismissLensCard(numericId: LensCards.bridgeNumericId)
    }

    func send(prompt: String) {
        let text = prompt.trimmingCharacters(in: .whitespaces)
        guard !text.isEmpty, let socket else { return }
        let payload = ["type": "prompt", "text": text]
        guard let data = try? JSONSerialization.data(withJSONObject: payload),
              let json = String(data: data, encoding: .utf8) else { return }
        socket.send(.string(json)) { [weak self] error in
            guard let error else { return }
            Task { @MainActor in self?.statusMessage = "send failed: \(error.localizedDescription)" }
        }
    }

    // MARK: - Wire

    private func receive() {
        socket?.receive { [weak self] result in
            Task { @MainActor in
                guard let self else { return }
                switch result {
                case .success(let message):
                    self.connected = true
                    self.statusMessage = ""
                    if case .string(let text) = message { self.handle(text) }
                    self.receive()
                case .failure(let error):
                    self.connected = false
                    self.statusMessage = "disconnected: \(error.localizedDescription)"
                }
            }
        }
    }

    private func handle(_ json: String) {
        guard let reader = JsonReader(parsing: json),
              reader.optString("type") == "frame" else { return }
        let title = reader.optString("title", "Claude")
        let body = reader.optString("body")
        // The server already coalesces, so an unchanged frame here means nothing
        // moved — skip the write rather than spend a BLE round trip on it.
        guard title != lastTitle || body != lastBody else { return }
        lastTitle = title
        lastBody = body
        lastFrame = body
        paint()
    }

    private func paint() {
        guard !lastBody.isEmpty || lastTitle != "Claude" else { return }
        client.showLensCard(title: lastTitle, body: lastBody,
                            numericId: LensCards.bridgeNumericId)
    }

    private func startKeepalive() {
        keepalive?.cancel()
        keepalive = Task { [weak self] in
            while !Task.isCancelled {
                try? await Task.sleep(nanoseconds:
                    UInt64(ClaudeBridgeSession.keepaliveSeconds * 1_000_000_000))
                guard !Task.isCancelled else { return }
                await MainActor.run { self?.paint() }
            }
        }
    }
}
