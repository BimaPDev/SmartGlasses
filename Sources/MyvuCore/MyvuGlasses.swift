import Foundation

/// async/await wrapper around `MyvuClient`.
///
/// A thin, optional convenience layer: callers can use `MyvuClient` directly and
/// ignore this type. Everything here delegates to `client`, turning its observer
/// callbacks into `AsyncStream`s and connect/query into `async` functions.
///
/// Each `states`/`events`/`rawInbound` call returns an independent stream, so
/// several parts of an app can observe at once. Streams buffer the newest values
/// and drop the oldest, so a slow consumer never stalls the protocol queue.
public final class MyvuGlasses {
    /// The underlying client; use it for anything not surfaced here.
    public let client: MyvuClient

    private let relay = ObserverRelay()

    public init(config: MyvuConfig = MyvuConfig()) {
        self.client = MyvuClient(config: config)
        client.addObserver(relay, queue: relay.queue)
    }

    deinit {
        client.removeObserver(relay)
    }

    public var state: ConnectionState { client.state }
    public var glassesInfo: DeviceInfo? { client.glassesInfo }
    /// Persist this after a successful connect to skip the scan next time.
    public var connectedGlassesId: UUID? { client.connectedGlassesId }

    /// Connection-state changes, starting with the current state.
    public func states() -> AsyncStream<ConnectionState> {
        relay.makeStateStream(current: client.state)
    }

    /// Glasses-initiated events (AI triggers, weather requests, uncatalogued
    /// inbound objects).
    public func events() -> AsyncStream<GlassesEvent> {
        relay.makeEventStream()
    }

    /// Raw body of every non-audio inbound relay message.
    public func rawInbound() -> AsyncStream<String> {
        relay.makeRawStream()
    }

    /// Glasses found by `connectAutoSearch`.
    public func discoveries() -> AsyncStream<DiscoveredGlasses> {
        relay.makeDiscoveryStream()
    }

    // MARK: - Connect

    /// Connects and suspends until the session is ready.
    ///
    /// - Parameter id: a previously discovered peripheral identifier, or nil to
    ///   scan for nearby glasses.
    /// - Throws: `MyvuError.disconnected` if the attempt fails, or
    ///   `MyvuError.timedOut` if it does not become ready in time.
    public func connect(id: UUID? = nil, timeout: TimeInterval = 60) async throws {
        let gate = ConnectGate(client: client, timeout: timeout)
        try await withTaskCancellationHandler {
            try await withCheckedThrowingContinuation { continuation in
                gate.start(continuation: continuation) {
                    if let id {
                        self.client.connect(id: id)
                    } else {
                        self.client.connectAutoSearch()
                    }
                }
            }
        } onCancel: {
            gate.cancel()
            client.disconnect()
        }
    }

    public func disconnect() { client.disconnect() }

    // MARK: - Queries

    /// Sends a `system` query and best-effort awaits the reply.
    ///
    /// The glasses interleave query replies with continuous telemetry and do not
    /// tag a reply with the request that caused it, so this correlates by looking
    /// for the subject token (`brightness`, from `get_brightness`) in inbound
    /// objects. Returns the first match.
    public func query(_ subAction: String, timeout: TimeInterval = 5) async throws -> JsonReader {
        let token = MyvuGlasses.subjectToken(subAction)
        let stream = events()
        client.query(subAction)

        return try await withThrowingTaskGroup(of: JsonReader.self) { group in
            group.addTask {
                for await event in stream {
                    guard case .unknown(let raw) = event, raw.contains(token),
                          let reader = JsonReader(parsing: raw) else { continue }
                    return reader
                }
                throw MyvuError.disconnected("the event stream ended before a reply arrived")
            }
            group.addTask {
                try await Task.sleep(nanoseconds: UInt64(timeout * 1_000_000_000))
                throw MyvuError.timedOut("no reply to \(subAction) within \(Int(timeout))s")
            }
            defer { group.cancelAll() }
            guard let first = try await group.next() else {
                throw MyvuError.timedOut("no reply to \(subAction)")
            }
            return first
        }
    }

    /// `get_brightness` → `brightness`, so a reply carrying the value can be
    /// recognised without an explicit correlation id.
    private static func subjectToken(_ subAction: String) -> String {
        var s = subAction
        for prefix in ["get_", "request_"] where s.hasPrefix(prefix) {
            s.removeFirst(prefix.count)
        }
        for suffix in ["_mode", "_list"] where s.hasSuffix(suffix) {
            s.removeLast(suffix.count)
        }
        return s
    }

    // MARK: - Features

    public func openTeleprompter(_ text: String, title: String = Teleprompter.defaultTitle) {
        client.openTeleprompter(text, title: title)
    }

    public func teleprompterContentOnly(_ text: String, title: String = Teleprompter.defaultTitle) {
        client.teleprompterContentOnly(text, title: title)
    }

    public func teleprompterHighlight(index: Int,
                                      title: String = Teleprompter.defaultTitle) {
        client.teleprompterHighlight(index: index, title: title)
    }

    public func showNotification(title: String, body: String) {
        client.showNotification(title: title, body: body)
    }

    public func enablePhoneNotifications(_ enabled: Bool = true,
                                         types: [String: Bool] = [:],
                                         calls: Bool = true,
                                         announce: Bool = false,
                                         brightenScreen: Bool = true,
                                         dismissMs: Int64 = 10_000) {
        client.enablePhoneNotifications(enabled, types: types, calls: calls,
                                        announce: announce,
                                        brightenScreen: brightenScreen,
                                        dismissMs: dismissMs)
    }

    /// Sets the gesture that pauses a notification being read aloud.
    public func setNotificationBroadcastPauseType(_ type: Int) {
        client.setNotificationBroadcastPauseType(type)
    }

    public func showLensCard(title: String, body: String,
                             numericId: Int = LensCards.scriptNumericId) {
        client.showLensCard(title: title, body: body, numericId: numericId)
    }

    public func dismissLensCard(numericId: Int = LensCards.scriptNumericId) {
        client.dismissLensCard(numericId: numericId)
    }

    public func sendWeather(_ reading: Weather.Reading) { client.sendWeather(reading) }

    public func sendStepCount(_ reading: Health.Reading) { client.sendStepCount(reading) }

    public func setBrightness(_ value: Int) { client.setBrightness(value) }
    public func setVolume(_ value: Int) { client.setVolume(value) }
    public func toggleWifi(_ on: Bool) { client.toggleWifi(on) }
    public func setDemoMode(_ on: Bool) { client.setDemoMode(on) }
    public func requestGlassLog(channel: String = "BLE",
                                filePath: String = GlassLog.defaultFilePath) {
        client.requestGlassLog(channel: channel, filePath: filePath)
    }
    public func requestGlassScreenshot(filePath: String? = nil,
                                       useEncoding: Bool = true) {
        client.requestGlassScreenshot(filePath: filePath, useEncoding: useEncoding)
    }
    public func setZenMode(_ on: Bool) { client.setZenMode(on) }
    public func setAirMode(_ on: Bool) { client.setAirMode(on) }
    public func setWearDetection(_ on: Bool) { client.setWearDetection(on) }
    public func setMusicTpControl(_ on: Bool) { client.setMusicTpControl(on) }
    public func setScreenOffTime(seconds: Int) { client.setScreenOffTime(seconds: seconds) }
    public func setStandbyPosition(_ position: Int) { client.setStandbyPosition(position) }
    public func setDeviceName(_ name: String) { client.setDeviceName(name) }
    public func setLanguage(_ language: String, country: String) {
        client.setLanguage(language, country: country)
    }
    public func setAutoBrightness(_ on: Bool) { client.setAutoBrightness(on) }
    public func setSoundEffects(_ on: Bool) { client.setSoundEffects(on) }
    public func setHearingAssist(_ on: Bool) { client.setHearingAssist(on) }
    public func setFontSize(_ size: SystemSettings.FontSize) { client.setFontSize(size) }
    public func setAppFastOpen(_ packageName: String) { client.setAppFastOpen(packageName) }
    public func setDockItems(_ packages: [String]) { client.setDockItems(packages) }
    public func setStandbyWidgets(_ widgets: [String]) { client.setStandbyWidgets(widgets) }
    /// Wipes the glasses. No undo, and the device asks nothing.
    public func factoryReset() { client.factoryReset() }
    public func syncTime() { client.syncTime() }
    public func sendRaw(_ actionJson: String) { client.sendRaw(actionJson) }

    /// Flashes a Star Air firmware pack over BLE. See `MyvuClient.startFirmwareUpdate`.
    public func startFirmwareUpdate(files: [OtaFile]) {
        client.startFirmwareUpdate(files: files)
    }

    public func cancelFirmwareUpdate() { client.cancelFirmwareUpdate() }

    /// EXPERIMENTAL — send a raw LinkProtocol control command (e.g.
    /// `LinkCommands.iosConnectBt`). See `MyvuClient.sendLinkCommand`.
    public func sendLinkCommand(_ cmd: Int) { client.sendLinkCommand(cmd) }

    /// Tell the glasses to connect classic BT (HFP/A2DP) to this phone by name.
    /// See `MyvuClient.iosConnectBt`.
    public func iosConnectBt(deviceName: String) { client.iosConnectBt(deviceName: deviceName) }

    /// Auto-connect and hold the classic-BT audio link. See MyvuClient.
    public func startIosBtKeepAlive(deviceName: String) { client.startIosBtKeepAlive(deviceName: deviceName) }
    public func stopIosBtKeepAlive() { client.stopIosBtKeepAlive() }

    /// Grouped trackpad input; each call routes a "phonepad" action to the
    /// launcher.
    public var trackpad: Trackpadding { Trackpadding(client: client) }

    public struct Trackpadding {
        let client: MyvuClient

        public func start() { client.trackpadStart() }
        public func stop() { client.trackpadStop() }
        public func click() { client.trackpadClick() }
        public func doubleClick() { client.trackpadDoubleClick() }
        public func longPress() { client.trackpadLongPress() }
        public func swipe(direction: Int, startX: Double, startY: Double,
                          endX: Double, endY: Double, speedX: Double, speedY: Double) {
            client.trackpadSwipe(direction: direction, startX: startX, startY: startY,
                                 endX: endX, endY: endY, speedX: speedX, speedY: speedY)
        }
    }
}

// MARK: - Stream plumbing

/// Fans observer callbacks out to any number of `AsyncStream` consumers.
///
/// Unchecked because every mutation is confined to `queue`, including the
/// termination handlers that run when a consumer drops its stream.
private final class ObserverRelay: MyvuClientObserver, @unchecked Sendable {
    /// Callbacks and continuation bookkeeping share this queue, which keeps the
    /// continuation tables consistent without locking.
    let queue = DispatchQueue(label: "dev.myvu.streams")

    private var stateContinuations: [UUID: AsyncStream<ConnectionState>.Continuation] = [:]
    private var eventContinuations: [UUID: AsyncStream<GlassesEvent>.Continuation] = [:]
    private var rawContinuations: [UUID: AsyncStream<String>.Continuation] = [:]
    private var discoveryContinuations: [UUID: AsyncStream<DiscoveredGlasses>.Continuation] = [:]

    func makeStateStream(current: ConnectionState) -> AsyncStream<ConnectionState> {
        AsyncStream(ConnectionState.self, bufferingPolicy: .bufferingNewest(64)) { continuation in
            let id = UUID()
            continuation.yield(current)
            queue.async { self.stateContinuations[id] = continuation }
            continuation.onTermination = { _ in
                self.queue.async { self.stateContinuations[id] = nil }
            }
        }
    }

    func makeEventStream() -> AsyncStream<GlassesEvent> {
        AsyncStream(GlassesEvent.self, bufferingPolicy: .bufferingNewest(256)) { continuation in
            let id = UUID()
            queue.async { self.eventContinuations[id] = continuation }
            continuation.onTermination = { _ in
                self.queue.async { self.eventContinuations[id] = nil }
            }
        }
    }

    func makeRawStream() -> AsyncStream<String> {
        AsyncStream(String.self, bufferingPolicy: .bufferingNewest(256)) { continuation in
            let id = UUID()
            queue.async { self.rawContinuations[id] = continuation }
            continuation.onTermination = { _ in
                self.queue.async { self.rawContinuations[id] = nil }
            }
        }
    }

    func makeDiscoveryStream() -> AsyncStream<DiscoveredGlasses> {
        AsyncStream(DiscoveredGlasses.self, bufferingPolicy: .bufferingNewest(16)) { continuation in
            let id = UUID()
            queue.async { self.discoveryContinuations[id] = continuation }
            continuation.onTermination = { _ in
                self.queue.async { self.discoveryContinuations[id] = nil }
            }
        }
    }

    func myvuClient(_ client: MyvuClient, didChangeState state: ConnectionState) {
        for c in stateContinuations.values { c.yield(state) }
    }

    func myvuClient(_ client: MyvuClient, didReceive event: GlassesEvent) {
        for c in eventContinuations.values { c.yield(event) }
    }

    func myvuClient(_ client: MyvuClient, didReceiveRawInbound body: String) {
        for c in rawContinuations.values { c.yield(body) }
    }

    func myvuClient(_ client: MyvuClient, didDiscover glasses: DiscoveredGlasses) {
        for c in discoveryContinuations.values { c.yield(glasses) }
    }
}

/// Bridges the observer callbacks of one connect attempt to a continuation,
/// resuming exactly once.
///
/// Unchecked because the continuation is only touched on `queue`, which is also
/// the queue the client delivers this observer's callbacks on.
private final class ConnectGate: MyvuClientObserver, @unchecked Sendable {
    private let client: MyvuClient
    private let timeout: TimeInterval
    private let queue = DispatchQueue(label: "dev.myvu.connect-gate")
    private var continuation: CheckedContinuation<Void, Error>?

    init(client: MyvuClient, timeout: TimeInterval) {
        self.client = client
        self.timeout = timeout
    }

    func start(continuation: CheckedContinuation<Void, Error>, then begin: () -> Void) {
        queue.sync { self.continuation = continuation }
        client.addObserver(self, queue: queue)
        queue.asyncAfter(deadline: .now() + timeout) { [weak self] in
            self?.finish(.failure(.timedOut("the glasses did not become ready")))
        }
        begin()
    }

    func cancel() {
        finish(.failure(.disconnected("the connect attempt was cancelled")))
    }

    func myvuClient(_ client: MyvuClient, didChangeState state: ConnectionState) {
        switch state {
        case .ready:
            finish(.success(()))
        case .failed:
            finish(.failure(.disconnected("could not connect to the glasses")))
        default:
            break
        }
    }

    private func finish(_ result: Result<Void, MyvuError>) {
        queue.async {
            guard let continuation = self.continuation else { return }
            self.continuation = nil
            self.client.removeObserver(self)
            continuation.resume(with: result.mapError { $0 as Error })
        }
    }
}
