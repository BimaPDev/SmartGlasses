import CoreBluetooth
import Foundation

/// Connection lifecycle and glasses-initiated events.
///
/// Every method has a default no-op, so implementers pick only what they need.
/// Callbacks are delivered on the queue given to `addObserver`.
public protocol MyvuClientObserver: AnyObject {
    func myvuClient(_ client: MyvuClient, didChangeState state: ConnectionState)
    /// The paired glasses' identity (name, MAC, battery, btStatus).
    func myvuClient(_ client: MyvuClient, didReceiveDeviceInfo info: DeviceInfo)
    /// Auto-search found glasses. Persist the id to skip the scan next time.
    func myvuClient(_ client: MyvuClient, didDiscover glasses: DiscoveredGlasses)
    func myvuClient(_ client: MyvuClient, didReceive event: GlassesEvent)
    /// Raw body of every non-audio inbound relay message.
    func myvuClient(_ client: MyvuClient, didReceiveRawInbound body: String)
}

public extension MyvuClientObserver {
    func myvuClient(_ client: MyvuClient, didChangeState state: ConnectionState) {}
    func myvuClient(_ client: MyvuClient, didReceiveDeviceInfo info: DeviceInfo) {}
    func myvuClient(_ client: MyvuClient, didDiscover glasses: DiscoveredGlasses) {}
    func myvuClient(_ client: MyvuClient, didReceive event: GlassesEvent) {}
    func myvuClient(_ client: MyvuClient, didReceiveRawInbound body: String) {}
}

/// The SDK's entry point: owns the connection to the glasses and every piece of
/// protocol state.
///
/// THREADING: all protocol state lives on a single serial queue, so nothing in
/// the protocol or app layers needs locking. CoreBluetooth is created with that
/// same queue, so inbound packets arrive on it directly. Observer callbacks are
/// delivered on the queue supplied to `addObserver` (main by default).
///
/// ONE TRANSPORT, NOT TWO. The Android SDK runs BLE and then a classic-Bluetooth
/// RFCOMM "app relay", because that relay is what the official app uses for app
/// traffic. iOS cannot open it: an arbitrary RFCOMM/SPP channel to a third-party
/// accessory requires MFi certification, and `ExternalAccessory` will not talk to
/// a device that does not carry Apple's authentication coprocessor.
///
/// So this port speaks the same protocol over BLE alone. That works because the
/// glasses accept the identical relay framing on the BLE external
/// characteristic — the Android SDK's own BLE fallback path. The costs are real
/// but bounded:
///  - throughput is far lower, so very large payloads (long teleprompter
///    scripts) take noticeably longer to arrive;
///  - the glasses will not light their "phone connected" indicator from this
///    connection alone, since that follows HFP/A2DP (see `updateBtStatus`).
///
/// The relay's per-session UUID still arrives over BLE and is surfaced through
/// `relayUuid` for diagnostics; nothing tries to connect to it.
public final class MyvuClient {
    /// Doubles each attempt so a persistently absent device is not hammered.
    private static let reconnectBase: TimeInterval = 2
    private static let reconnectMax: TimeInterval = 60
    /// Classic-BT keepalive pacing. A soft keepalive once the link is up; a
    /// retry that DOUBLES while it is down, because every failed attempt makes
    /// the glasses run a classic-BT page scan, which is the most power-hungry
    /// thing their radio does. The phone is only discoverable while the user
    /// sits on iOS's Bluetooth screen, so "down" is the common case and a flat
    /// retry would page the glasses flat.
    private static let iosBtKeepAliveInterval: TimeInterval = 6
    private static let iosBtRetryBase: TimeInterval = 2
    private static let iosBtRetryMax: TimeInterval = 60
    /// Pacing between init-burst messages.
    private static let initBurstInterval: TimeInterval = 0.2
    /// The glasses need a moment after AUTH_SUCCESS before the burst lands.
    private static let authToBurstDelay: TimeInterval = 0.5

    public let config: MyvuConfig
    /// The protocol queue. Feature modules schedule their work here.
    public let scheduler: Scheduler

    private let central: BleCentral
    private let initBurstSource: InitBurstSource

    private var currentState = ConnectionState.idle
    private var targetId: UUID?
    private var peripheral: CBPeripheral?
    private var ownId = Data()
    private var ownMac = ""
    private var sessionId = ""

    private var ble: BleTransport?
    private var pairing: BlePairing?
    private var glasses: DeviceInfo?

    /// NOT a constant: a reconnect must start from a fresh sequencer. The glasses
    /// track the last received msgId and discard anything that looks stale, so
    /// reusing this across connections makes the second session's traffic be
    /// silently dropped.
    private var session = RelaySession()

    /// Learned over BLE. iOS cannot connect to it; kept for diagnostics.
    public private(set) var relayUuid: String?

    /// The ECDH material from the bond, retained so an updated DeviceInfo can be
    /// pushed later (see `updateBtStatus`).
    private var bondKey: Data?
    private var bondIv = Data()
    private var bondMode = StarryCrypto.symmetricV3Gcm
    private var lastSentBtStatus = LinkCommands.btStatusDefault

    private var inbound: InboundRouter!

    /// True once the user asks to stop; suppresses auto-reconnect.
    private var userStopped = false
    private var reconnectAttempt = 0
    private let reconnectTimer = TimerSlot()
    private let iosBtTimer = TimerSlot()
    private var iosBtName: String?
    private var iosBtLastState = LinkCommands.btStatusNoConnectedBt
    /// Consecutive failed classic-BT attempts, for the retry backoff.
    private var iosBtAttempt = 0
    private let initBurstTimer = TimerSlot()
    private let authDelayTimer = TimerSlot()

    private var audioFrameCount = 0
    private let shareReceiver = ShareReceiver()
    private var firmwareSession: FirmwareUpdateSession?

    // MARK: - Observers

    private struct ObserverEntry {
        weak var observer: MyvuClientObserver?
        let queue: DispatchQueue
    }

    private let observerLock = NSLock()
    private var observers: [ObserverEntry] = []

    /// Receives the glasses' streamed microphone (code:109 Opus bodies).
    ///
    /// Called on the protocol queue, dozens of times per second while the glasses
    /// stream — hand the frame off, never block. `MyvuAI` installs this; without
    /// a handler frames are acked and dropped.
    public var audioFrameHandler: ((Data) -> Void)?

    public func addObserver(_ observer: MyvuClientObserver, queue: DispatchQueue = .main) {
        observerLock.lock()
        defer { observerLock.unlock() }
        guard !observers.contains(where: { $0.observer === observer }) else { return }
        observers.append(ObserverEntry(observer: observer, queue: queue))
    }

    public func removeObserver(_ observer: MyvuClientObserver) {
        observerLock.lock()
        defer { observerLock.unlock() }
        observers.removeAll { $0.observer === observer || $0.observer == nil }
    }

    private func notify(_ body: @escaping (MyvuClientObserver, MyvuClient) -> Void) {
        observerLock.lock()
        let entries = observers
        observerLock.unlock()
        for entry in entries {
            guard let observer = entry.observer else { continue }
            entry.queue.async { [weak self] in
                guard let self else { return }
                body(observer, self)
            }
        }
    }

    // MARK: - Construction

    public init(config: MyvuConfig = MyvuConfig()) {
        self.config = config
        self.scheduler = Scheduler(label: "dev.myvu.conn")
        self.central = BleCentral(scheduler: scheduler)
        self.initBurstSource = config.initBurstSource ?? BundledInitBurstSource()

        self.inbound = InboundRouter { [weak self] json, target, source in
            self?.sendActionNow(json, targetPkg: target, sourcePkg: source)
        }
        // The glasses' AI button (code 3) and wake word (code 7) both land here.
        // The control:0 release semantics are documented on GlassesEvent.
        inbound.onAiTrigger = { [weak self] code, payload in
            guard let self else { return }
            self.notify { o, c in o.myvuClient(c, didReceive: .aiTrigger(code: code,
                                                                        payload: payload)) }
        }
        // The glasses re-ask for weather periodically and when their panel
        // opens; MyvuWeather's WeatherSync listens for this and pushes.
        inbound.onWeatherRequested = { [weak self] in
            guard let self else { return }
            self.notify { o, c in o.myvuClient(c, didReceive: .weatherRequested) }
        }
        // Steps widget: the glasses ask `syncSport` while it is on screen;
        // MyvuHealth's HealthSync listens for this and pushes the count.
        inbound.onStepsRequested = { [weak self] in
            guard let self else { return }
            self.notify { o, c in o.myvuClient(c, didReceive: .stepsRequested) }
        }
        inbound.onAirOta = { [weak self] sub, value in
            self?.firmwareSession?.handleAirOta(subAction: sub, value: value)
        }
        // Caller ID: the glasses have the number from HFP but no phonebook, so
        // they ask us who it is. Answer with `answerAirFunction`.
        inbound.onContactLookup = { [weak self] request in
            guard let self else { return }
            self.notify { o, c in
                o.myvuClient(c, didReceive: .contactLookupRequested(request))
            }
        }
    }

    public var state: ConnectionState {
        scheduler.isCurrent ? currentState : sync { $0.currentState }
    }

    public var glassesInfo: DeviceInfo? {
        scheduler.isCurrent ? glasses : sync { $0.glasses }
    }

    /// The identifier to persist for a fast reconnect, once connected.
    public var connectedGlassesId: UUID? {
        scheduler.isCurrent ? peripheral?.identifier : sync { $0.peripheral?.identifier }
    }

    public var inboundRouter: InboundRouter { inbound }

    private func sync<T>(_ body: (MyvuClient) -> T) -> T {
        scheduler.queue.sync { body(self) }
    }

    // MARK: - Connect

    /// Connects to glasses previously reported by a scan.
    ///
    /// `id` is CoreBluetooth's peripheral identifier, not a MAC: iOS never
    /// exposes a Bluetooth address. It is stable for this device on this
    /// installation, so persisting it skips the scan on later launches.
    public func connect(id: UUID) {
        scheduler.run { [weak self] in
            guard let self, self.canStartConnecting() else { return }
            self.userStopped = false
            self.cancelReconnect()
            self.targetId = id
            self.beginConnect()
        }
    }

    /// Scans for nearby MYVU glasses and connects to the first match, so the
    /// caller does not need an identifier up front.
    ///
    /// An unfiltered scan is suspended in the background on iOS, so call this
    /// from the foreground. `connect(id:)` has no such restriction.
    public func connectAutoSearch() {
        scheduler.run { [weak self] in
            guard let self, self.canStartConnecting() else { return }
            self.userStopped = false
            self.cancelReconnect()
            self.targetId = nil
            self.beginConnect()
        }
    }

    /// A second connect (repeat tap, redelivered notification) must not stand up
    /// a parallel BLE stack against the same glasses: they accept one central at
    /// a time.
    private func canStartConnecting() -> Bool {
        guard currentState == .idle || currentState == .failed else {
            SdkLog.trace("connect ignored: already \(currentState)")
            return false
        }
        return true
    }

    /// Tears the connection down; the client stays usable for a later connect.
    public func disconnect() {
        scheduler.run { [weak self] in
            guard let self else { return }
            self.userStopped = true
            self.cancelReconnect()
            self.teardown()
            self.setState(.idle)
        }
    }

    private func beginConnect() {
        ownMac = config.localIdentity
        ownId = DeviceId.macToBytes(ownMac)
        sessionId = MyvuClient.deriveSession(ownId)
        // Fresh relay state per connection attempt (see the field comment).
        session = RelaySession()

        setState(.connecting)
        central.whenPoweredOn { [weak self] result in
            guard let self else { return }
            switch result {
            case .failure(let error):
                // Bluetooth off or unauthorised needs the user to act, so there
                // is no point retrying on a timer.
                self.failHard(error.localizedDescription)
            case .success:
                self.resolvePeripheral()
            }
        }
    }

    private func resolvePeripheral() {
        guard currentState == .connecting else { return }

        // Fast path: reconnect straight to the cached peripheral -- but only on
        // the first attempt. After a FULL glasses power-off that cached handle
        // connects to nothing (CoreBluetooth waits, then times out), so on later
        // attempts fall through to a scan, which reliably rediscovers the
        // rebooted glasses. System-connected peripherals never appear in a scan,
        // so they are checked here too.
        if let targetId, reconnectAttempt < 2 {
            if let known = central.peripheral(withId: targetId)
                ?? central.connectedGlasses().first(where: { $0.identifier == targetId }) {
                startTransport(with: known)
                return
            }
        }

        if targetId == nil, let alreadyConnected = central.connectedGlasses().first {
            SdkLog.log("adopting the glasses iOS already has connected")
            startTransport(with: alreadyConnected)
            return
        }

        SdkLog.log("scanning to (re)discover the glasses...")
        central.startScan(timeout: config.scanTimeout, onFound: { [weak self] found in
            guard let self, self.currentState == .connecting else { return }
            self.notify { o, c in o.myvuClient(c, didDiscover: found) }
            self.targetId = found.id
            self.startTransport(with: found.peripheral)
        }, onEnded: { [weak self] error in
            guard let self, error != nil else { return }
            // During an auto-reconnect the glasses may still be booting -- keep
            // retrying rather than giving up. Only a first, user-initiated
            // connect fails hard (so the UI can say "not found").
            if self.reconnectAttempt > 0, self.config.autoReconnect, !self.userStopped {
                self.setState(.failed)
                self.scheduleReconnect("glasses not found on rescan (still booting?)")
            } else {
                self.failHard("no MYVU glasses found -- make sure they are on, nearby, "
                    + "and not held by the MYVU app")
            }
        })
    }

    private func startTransport(with peripheral: CBPeripheral) {
        self.peripheral = peripheral
        SdkLog.log("target=\(peripheral.identifier) ownId=\(Hex.encode(ownId)) "
            + "session=\(sessionId)")

        let transport = BleTransport(
            central: central, peripheral: peripheral, scheduler: scheduler,
            handlers: BleTransport.Handlers(
                onReady: { [weak self] in self?.onTransportReady() },
                onInternalMessage: { [weak self] _, payload in
                    self?.onInternalMessage(payload)
                },
                onExternalMessage: { [weak self] _, payload in
                    self?.routePayload(payload)
                },
                onDisconnected: { [weak self] reason, needsRePairing in
                    self?.onTransportDisconnected(reason, needsRePairing: needsRePairing)
                }))
        ble = transport
        transport.connect()
    }

    private func teardown() {
        central.stopScan()
        initBurstTimer.cancel()
        authDelayTimer.cancel()
        // Cancels its timeout; otherwise a torn-down connection still fires a
        // pairing failure into a dead state machine later.
        pairing?.cancel()
        pairing = nil
        iosBtTimer.cancel()
        shareReceiver.reset()
        firmwareSession?.cancel("connection dropped")
        firmwareSession = nil
        ble?.close()
        ble = nil
        relayUuid = nil
        // Bond keys are per-session; a new bond derives fresh ones. Drop them so
        // a late btStatus update cannot re-send with a stale key.
        bondKey = nil
        bondIv = Data()
        lastSentBtStatus = LinkCommands.btStatusDefault
        iosBtLastState = LinkCommands.btStatusNoConnectedBt
    }

    /// session = the last two bytes of our id, as a decimal string.
    private static func deriveSession(_ id: Data) -> String {
        guard id.count >= 2 else { return "0" }
        let bytes = [UInt8](id)
        return String(Int(bytes[bytes.count - 2]) << 8 | Int(bytes[bytes.count - 1]))
    }

    // MARK: - Transport events

    private func onTransportReady() {
        guard let ble else { return }
        SdkLog.log("BLE link stable -- starting the ECDH bond")
        setState(.pairing)
        ble.applyDmtu()

        // The truthful status: the BLE ACL is up, so at least CONNECTED_ACL
        // holds. `updateBtStatus` upgrades it if the app can tell us the classic
        // audio profiles connected.
        let btStatus = LinkCommands.btStatusConnectedAcl
        lastSentBtStatus = btStatus

        guard let channel = ble.internalChannel else {
            fail("BLE came up without a link channel")
            return
        }
        pairing = BlePairing(
            channel: channel, scheduler: scheduler, ownId: ownId, ownMac: ownMac,
            deviceName: config.deviceName, categoryId: config.categoryId,
            btStatus: btStatus,
            onPaired: { [weak self] result in
                guard let self else { return }
                self.glasses = result.glasses
                self.bondKey = result.sharedSecret
                self.bondIv = result.iv
                self.bondMode = result.encryptMode
                self.pairing = nil
                self.notify { o, c in o.myvuClient(c, didReceiveDeviceInfo: result.glasses) }
                self.establishSession()
            },
            onFailed: { [weak self] reason in
                self?.pairing = nil
                self?.fail("BLE pairing failed: \(reason)")
            })
        pairing?.start()
    }

    private func onInternalMessage(_ payload: Data) {
        // While the bond is running, the pairing state machine consumes these.
        if let pairing, pairing.onInternalMessage(payload) { return }

        let msg = LinkProtocol.parse(payload)
        switch msg.cmd {
        case LinkCommands.sppServerUuidSync:
            handleRelayUuidSync(msg.data)

        case LinkCommands.sppServerRequestConnect,
             LinkCommands.sppServerRequestStateOpen,
             LinkCommands.sppServerRequestStateClose:
            // The glasses are managing their classic-BT relay server. iOS cannot
            // connect to it, so these are informational only.
            SdkLog.trace("<- SPP server state cmd=\(msg.cmd) (not actionable on iOS)")

        case LinkCommands.btStateChange:
            // Reply to IOS_CONNECT_BT: BTConnectStatus{ btStatus(1) }.
            let fields = Pb.parse(msg.data)
            let state = Int(Pb.firstVarint(fields, 1, 255))
            let wasUp = LinkCommands.isClassicLinkUp(iosBtLastState)
            iosBtLastState = state
            SdkLog.log("<- BT_STATE_CHANGE: \(MyvuClient.btStatusName(state)) (\(state))")
            // Do not re-issue IOS_CONNECT_BT on every state-8 reply: the glasses
            // ACK the connect command with 8 (not yet up) in ~60ms, and ticking
            // synchronously storms BLE. The 2s timer retries while down. If the
            // link *drops* from up, pull the next retry forward to 2s.
            if iosBtName != nil, wasUp, !LinkCommands.isClassicLinkUp(state) {
                // A link that was up and dropped is worth chasing immediately;
                // the backoff exists for a phone that was never findable, so it
                // resets here rather than inheriting a long delay.
                iosBtAttempt = 0
                iosBtTimer.schedule(on: scheduler,
                                    after: MyvuClient.iosBtRetryBase) { [weak self] in
                    self?.iosBtTick()
                }
            }

        default:
            SdkLog.trace("internal <- LinkProtocol cmd=\(msg.cmd) (\(msg.data.count)B) "
                + Hex.encode(msg.data))
        }
    }

    /// The app relay lives at a random 16-bit UUID the glasses regenerate every
    /// session and announce only here.
    ///
    /// On Android this is the address the RFCOMM socket connects to. On iOS it is
    /// logged and exposed but never dialled — see the note on this class.
    private func handleRelayUuidSync(_ data: Data) {
        guard let uuid = LinkProtocol.sppShortUuidToString(data) else {
            SdkLog.warn("bad SPP UUID payload: \(Hex.encode(data))")
            return
        }
        guard uuid != relayUuid else { return }
        relayUuid = uuid
        SdkLog.log("<- SPP_SERVER_UUID_SYNC: uuid=\(uuid) (informational; iOS cannot open "
            + "an RFCOMM channel without MFi, so app traffic stays on BLE)")
    }

    private func onTransportDisconnected(_ reason: String, needsRePairing: Bool = false) {
        // A stale bond cannot heal on a timer: iOS will offer the same rejected
        // key every time. Retrying just burns both batteries and buries the one
        // message that tells the user what to do, so stop and say so.
        if needsRePairing {
            return failHard("BLE \(reason)")
        }
        SdkLog.warn("BLE \(reason)")
        teardown()
        setState(.failed)
        // A dropped link (out of range, glasses asleep, watchdog) should heal
        // itself rather than sit dead until the user notices.
        scheduleReconnect("BLE link dropped")
    }

    // MARK: - Reconnect

    private func scheduleReconnect(_ why: String) {
        guard !userStopped, config.autoReconnect else { return }
        reconnectAttempt += 1
        let delay = min(MyvuClient.reconnectMax,
                        MyvuClient.reconnectBase * pow(2, Double(min(5, reconnectAttempt - 1))))
        SdkLog.log("\(why) -- retrying in \(Int(delay))s")
        reconnectTimer.schedule(on: scheduler, after: delay) { [weak self] in
            guard let self, !self.userStopped, self.currentState != .ready else { return }
            SdkLog.log("reconnecting to the glasses (attempt \(self.reconnectAttempt))")
            self.beginConnect()
        }
    }

    private func cancelReconnect() {
        reconnectTimer.cancel()
        reconnectAttempt = 0
    }

    // MARK: - Session handshake

    private func establishSession() {
        setState(.session)
        let msg = Session.buildAbilityMessage(deviceIdHex: Hex.encode(ownId),
                                              deviceName: config.deviceName,
                                              session: sessionId)
        SdkLog.log("-> ability handshake (session=\(sessionId))")
        sendOnWire(msg)
    }

    private func routePayload(_ payload: Data) {
        // The ability reply is a bare StreamReq (class byte 0x02); everything
        // else is a relay frame (prefix 0x01).
        if payload.first == Session.authClassByte {
            handleAbilityReply(payload)
            return
        }
        guard let m = Relay.parseFrame(payload) else {
            SdkLog.trace("<- unparsed \(payload.count)B \(Hex.encode(payload.prefix(32)))")
            return
        }
        handleRelayMessage(m)
    }

    private func handleAbilityReply(_ payload: Data) {
        // The glasses repeat this reply (observed twice on BLE); answering twice
        // would start a second interleaved init burst on the same sequencer.
        guard !session.authConfirmed else {
            SdkLog.trace("<- duplicate ability reply ignored")
            return
        }
        session.authConfirmed = true

        let reply = Session.parseAbilityReply(payload)
        SdkLog.log("<- ability reply from deviceId=\(reply.deviceId)")

        // Without AUTH_SUCCESS the glasses ack our data but never engage the app
        // layer.
        let confirm = Session.buildAuthSuccessMessage(deviceIdHex: Hex.encode(ownId),
                                                      deviceName: config.deviceName,
                                                      session: sessionId)
        SdkLog.log("-> AUTH_SUCCESS")
        sendOnWire(confirm)

        authDelayTimer.schedule(on: scheduler, after: MyvuClient.authToBurstDelay) { [weak self] in
            self?.sendInitBurst()
        }
    }

    private func handleRelayMessage(_ m: RelayMessage) {
        switch m.msgType {
        case MsgType.sendSuccess:
            SdkLog.trace("<- ack msgId=\(m.msgId)")

        case MsgType.send:
            session.seq.lastRecvId = m.msgId
            // The glasses re-send indefinitely until acknowledged.
            if m.needCallback != 0 { sendOnWire(session.seq.ackFrame(for: m)) }

            // The glasses stream their own microphone as Opus packets in code:109
            // messages, dozens per second. They are binary, so they must never
            // reach the log or the JSON scanner — doing so saturates this queue
            // and stalls everything behind it.
            if MyvuClient.isAudioFrame(m.msgBody) {
                audioFrameHandler?(m.msgBody)
                audioFrameCount += 1
                if audioFrameCount % 200 == 0 {
                    SdkLog.trace("received \(audioFrameCount) glasses mic frames")
                }
                return
            }

            if m.appUniteCode == ShareAbility.uniteCode
                || ShareAbility.isUnframedPush(m.msgBody) {
                handleShareFrame(m)
                return
            }

            let body = m.msgBody.scannableText
            SdkLog.log("<- msgId=\(m.msgId) \(MyvuClient.truncate(body, 200))")
            // Answer anything that needs a reply (launch-app, time sync, AI).
            inbound.handle(body: body)
            notify { o, c in o.myvuClient(c, didReceiveRawInbound: body) }

            // Surface each embedded JSON object the SDK does not consume itself.
            // AI triggers are dispatched from the router's callback instead.
            for candidate in InboundRouter.findJsonObjects(body) {
                guard candidate.count > 4,
                      !InboundRouter.isAiTriggerObject(candidate),
                      !InboundRouter.isAirOtaObject(candidate),
                      !InboundRouter.isContactLookupObject(candidate) else { continue }
                notify { o, c in o.myvuClient(c, didReceive: .unknown(rawJson: candidate)) }
            }

        default:
            // Unframed ShareAbility: msgType=0, appUniteCode=category (5).
            if m.category == ShareAbility.uniteCode
                || m.appUniteCode == ShareAbility.uniteCode
                || ShareAbility.parse(m.msgBody) != nil {
                handleShareFrame(m)
                return
            }
            SdkLog.trace("<- relay msgType=\(m.msgType) msgId=\(m.msgId)")
        }
    }

    // MARK: - Init burst

    /// Replays the captured opening messages with a fresh 1..N msgId sequence,
    /// paced 200ms apart. Without this the glasses' relay dispatcher never fully
    /// wakes and silently drops everything sent afterwards.
    private func sendInitBurst() {
        let entries: [InitBurst.Entry]
        do {
            entries = InitBurst.load(try initBurstSource.loadText())
        } catch {
            SdkLog.error("could not read the init burst capture", error)
            fail("the init burst capture is unavailable, so the session cannot be woken")
            return
        }
        SdkLog.log("-> init burst (\(entries.count) messages)")
        sendInitMessage(entries, index: 0)
    }

    private func sendInitMessage(_ entries: [InitBurst.Entry], index: Int) {
        guard index < entries.count else {
            session.ready = true
            SdkLog.log("init burst complete -- BLE session ready")
            onSessionReady()
            return
        }
        guard let ble, ble.isReady else {
            // Leaving the session half-initialised is not recoverable: the
            // glasses' dispatcher never woke, so tear down and start a clean one
            // rather than sitting in a state that looks connected but drops
            // traffic.
            SdkLog.warn("link dropped during the init burst at message \(index)")
            fail("BLE init burst did not complete")
            return
        }

        let e = entries[index]
        sendOnWire(session.seq.dataFrame(e.msgBody, category: e.category,
                                         needCallback: e.needCallback,
                                         appUniteCode: e.appUniteCode))
        initBurstTimer.schedule(on: scheduler, after: MyvuClient.initBurstInterval) { [weak self] in
            self?.sendInitMessage(entries, index: index + 1)
        }
    }

    private func onSessionReady() {
        setState(.ready)
        // A clean session clears the backoff, so the next drop starts fresh.
        cancelReconnect()
        if config.applyDefaultSettings { applyDefaults() }
    }

    /// Live state pushed on connect, since the init burst deliberately omits it:
    /// the captured `SyncOffSetTime` and `sync_clone_data` frames carry stale
    /// values and are filtered out.
    private func applyDefaults() {
        sendActionNow(ClockSync.build())
        sendActionNow(SystemSettings.setWearDetection(true))
        sendActionNow(SystemSettings.setZenMode(false))
        sendActionNow(SystemSettings.setScreenOffTime(10))
    }

    // MARK: - Classic audio status

    /// Tells the glasses that the phone's classic-Bluetooth audio profiles came
    /// up, which is what lights their "phone connected" indicator.
    ///
    /// iOS gives an app no way to page HFP/A2DP itself and no direct read of
    /// their state, so unlike Android this cannot be detected here. If your app
    /// can infer it — for example by watching `AVAudioSession` route changes for
    /// the glasses — pass `LinkCommands.btStatusConnectedA2dp` (or `...Hfp`).
    /// Pass `btStatusConnectedAcl` when they go away again.
    public func updateBtStatus(_ btStatus: Int) {
        scheduler.run { [weak self] in
            guard let self, btStatus != self.lastSentBtStatus else { return }
            SdkLog.log("BT audio status -> \(MyvuClient.btStatusName(btStatus))"
                + "; updating the glasses")
            self.resendDeviceInfo(btStatus)
        }
    }

    /// Sends a raw LinkProtocol control command on the internal channel.
    ///
    /// EXPERIMENTAL. This is the seam for the iOS-specific classic-BT commands
    /// (`IOS_CONNECT_BT = 32` etc.) that the SDK port never wired up. iOS apps
    /// cannot open a classic connection themselves, so the theory is that this
    /// command tells the glasses to drive the HFP/A2DP side toward the iPhone.
    /// Sent unencrypted (it is a control command, not a switch-info payload);
    /// the glasses' reply (e.g. `BT_STATE_CHANGE = 34`) shows up in the trace.
    public func sendLinkCommand(_ cmd: Int, data: Data = Data()) {
        scheduler.run { [weak self] in
            guard let self else { return }
            guard let channel = self.ble?.internalChannel, self.ble?.isConnected == true else {
                SdkLog.warn("sendLinkCommand(\(cmd)) ignored: no internal channel")
                return
            }
            let msg = LinkProtocol.build(identifier: self.ownId, cmd: cmd, data: data)
            SdkLog.log("-> LinkProtocol cmd=\(cmd) (\(msg.count)B) \(Hex.encode(msg))")
            channel.sendSingleAcked(msg, pkgType: BlePackets.pkgStarryData) { status in
                SdkLog.log("<- LinkProtocol cmd=\(cmd) ack status=\(status)")
            }
        }
    }

    /// Sends IOS_CONNECT_BT (cmd 32) with the real `IOSConnectBt` payload.
    ///
    /// From `starry_link_encrypt.proto`:
    /// `IOSConnectBt { deviceName(1), isFirstConnect(2), timeout(3), cycleCount(4) }`.
    /// iOS hides the phone's own BT MAC, so the glasses are handed the phone's
    /// Bluetooth NAME instead and scan for / connect to it (HFP/A2DP). The phone
    /// must be classic-BT discoverable (Settings > Bluetooth open) for the
    /// glasses to find it.
    public func iosConnectBt(deviceName: String, isFirstConnect: Bool = true,
                             timeout: Int = 30, cycleCount: Int = 3) {
        var payload = Pb.string(1, deviceName)
        payload += Pb.varintField(2, isFirstConnect ? 1 : 0)
        payload += Pb.varintField(3, UInt64(timeout))
        payload += Pb.varintField(4, UInt64(cycleCount))
        SdkLog.log("-> IOS_CONNECT_BT deviceName=\(deviceName) firstConnect=\(isFirstConnect) "
            + "timeout=\(timeout) cycle=\(cycleCount)")
        sendLinkCommand(LinkCommands.iosConnectBt, data: payload)
    }

    /// Auto-connect + hold the classic-BT audio link on iOS.
    ///
    /// The connection drops on its own (iOS tears down an idle classic link, and
    /// the glasses re-pair each time), so this keeps re-issuing IOS_CONNECT_BT:
    /// a 6s soft keepalive once connected, and a retry that backs off 2s → 60s
    /// while disconnected. Call once the session is ready. Do not tick on every
    /// BT_STATE_CHANGE 8 — that ACK arrives in ~60ms and would storm the link.
    ///
    /// COSTS GLASSES BATTERY. Each attempt makes the glasses run a classic-BT
    /// page scan for the phone, and the phone is only discoverable while the
    /// user is on iOS's Bluetooth screen — so leave this OFF unless something
    /// actually needs the audio link (the native teleprompter and navigation
    /// pages). Lens cards ride BLE and need none of it.
    public func startIosBtKeepAlive(deviceName: String) {
        scheduler.run { [weak self] in
            guard let self else { return }
            self.iosBtName = deviceName
            self.iosBtAttempt = 0
            SdkLog.log("iOS BT keepalive ON (name=\(deviceName))")
            self.iosBtTick()
        }
    }

    public func stopIosBtKeepAlive() {
        scheduler.run { [weak self] in
            guard let self else { return }
            self.iosBtName = nil
            self.iosBtAttempt = 0
            self.iosBtTimer.cancel()
            SdkLog.log("iOS BT keepalive OFF")
            self.sendLinkCommand(LinkCommands.iosDisconnectBt)
        }
    }

    private func iosBtTick() {
        guard let name = iosBtName, ble?.isConnected == true else { return }
        let connected = LinkCommands.isClassicLinkUp(iosBtLastState)
        // Force a fresh connect when down; a soft keepalive (firstConnect=false)
        // when up so we don't tear down a good link. State 9 is "already up".
        iosConnectBt(deviceName: name, isFirstConnect: !connected,
                     timeout: 60, cycleCount: 5)

        let delay: TimeInterval
        if connected {
            iosBtAttempt = 0
            delay = MyvuClient.iosBtKeepAliveInterval
        } else {
            // A 60s/5-cycle attempt was already in flight; re-kicking it every
            // 2s stacked page scans on the glasses for as long as the toggle
            // was on. Back off instead, so an undiscoverable phone costs a
            // handful of attempts rather than a flat battery.
            iosBtAttempt += 1
            delay = min(MyvuClient.iosBtRetryMax,
                        MyvuClient.iosBtRetryBase * pow(2, Double(min(5, iosBtAttempt - 1))))
            SdkLog.trace("classic BT still down -- next attempt in \(Int(delay))s")
        }
        iosBtTimer.schedule(on: scheduler, after: delay) { [weak self] in
            self?.iosBtTick()
        }
    }

    /// Pushes a fresh DeviceInfo over the pairing channel, reusing the retained
    /// bond keys with the same double encryption the bond used.
    private func resendDeviceInfo(_ btStatus: Int) {
        guard let bondKey, let channel = ble?.internalChannel, ble?.isConnected == true else {
            return
        }
        do {
            let info = DeviceInfo.build(btMac: ownMac.uppercased(), companyId: "",
                                        categoryId: config.categoryId, modelId: "",
                                        name: config.deviceName, battery: 100,
                                        btStatus: btStatus)
            let inner = try StarryCrypto.encrypt(info, key: bondKey, iv: bondIv, mode: bondMode)
            let wsi = LinkProtocol.writeSwitchInfo(info: inner)
            let outer = try StarryCrypto.encrypt(wsi, key: bondKey, iv: bondIv, mode: bondMode)
            let msg = LinkProtocol.build(identifier: ownId,
                                         cmd: LinkCommands.writeSwitchInfo, data: outer)

            SdkLog.log("-> WRITE_SWITCH_INFO btStatus=\(MyvuClient.btStatusName(btStatus)) "
                + "(\(msg.count)B)")
            lastSentBtStatus = btStatus
            channel.sendSingleAcked(msg, pkgType: BlePackets.pkgStarryData) { status in
                guard status != BlePackets.ackSuccess else { return }
                SdkLog.warn("btStatus update was not acked (status=\(status))")
            }
        } catch {
            SdkLog.error("could not resend DeviceInfo btStatus", error)
        }
    }

    private static func btStatusName(_ s: Int) -> String {
        switch s {
        case LinkCommands.btStatusConnectedAcl: return "ACL"
        case LinkCommands.btStatusConnectedHfp: return "HFP"
        case LinkCommands.btStatusConnectedA2dp: return "A2DP"
        case LinkCommands.btStatusDisconnected: return "DISCONNECTED"
        case LinkCommands.btStatusNoConnectedBt: return "NO_CONNECTED_BT"
        case LinkCommands.btStatusExistConnectedBt: return "EXIST_CONNECTED_BT"
        case LinkCommands.btStatusConnectFail: return "CONNECT_FAIL"
        default: return String(s)
        }
    }

    /// Receives a ShareAbility push (screenshot / glass log) and replies with
    /// unframed ACK / DATA_ACK / FINISH so the glasses stop after the last chunk.
    private func handleShareFrame(_ m: RelayMessage) {
        guard let parsed = ShareAbility.parse(m.msgBody) else {
            SdkLog.trace("<- share unparsed \(m.msgBody.count)B")
            return
        }
        SdkLog.log("<- share type=\(parsed.type) taskId="
            + "\(parsed.taskId.isEmpty ? "-" : parsed.taskId) (\(m.msgBody.count)B)")
        if firmwareSession?.handleShare(parsed) == true { return }
        switch parsed.type {
        case ShareAbility.senderSyn:
            sendShare(shareReceiver.handleSyn(parsed))
        case ShareAbility.senderData:
            if let ack = shareReceiver.handleData(parsed) { sendShare(ack) }
        case ShareAbility.senderFinish:
            if let file = shareReceiver.handleFinish(parsed) {
                sendShare(ShareAbility.receiverFinish(taskId: parsed.taskId))
                SdkLog.log("saved \(file.fileName) (\(file.byteCount)B) → \(file.url.path)")
                notify { o, c in
                    o.myvuClient(c, didReceive: .fileReceived(
                        url: file.url, fileName: file.fileName, byteCount: file.byteCount))
                }
            } else {
                sendShare(ShareAbility.receiverFail(taskId: parsed.taskId))
            }
        default:
            break
        }
    }

    private func sendShare(_ protobuf: Data) {
        sendOnWire(Relay.buildShareFrame(protobuf))
    }

    // MARK: - App layer

    /// Sends one app action. Safe to call from any thread.
    public func sendAction(_ actionJson: String,
                           targetPkg: String = AppLayer.pkgLauncher,
                           sourcePkg: String = AppLayer.pkgLauncher) {
        scheduler.run { [weak self] in
            self?.sendActionNow(actionJson, targetPkg: targetPkg, sourcePkg: sourcePkg)
        }
    }

    /// Protocol-queue-only variant.
    private func sendActionNow(_ actionJson: String,
                               targetPkg: String = AppLayer.pkgLauncher,
                               sourcePkg: String = AppLayer.pkgLauncher) {
        guard session.ready else {
            SdkLog.warn("no ready session -- action dropped")
            return
        }
        let body = session.appLayer.buildSendActionBody(actionJson, targetPkg: targetPkg,
                                                        sourcePkg: sourcePkg)
        sendOnWire(session.seq.dataFrame(body))
        SdkLog.log("-> action msgId=\(session.seq.outId) "
            + MyvuClient.truncate(actionJson, 120))
    }

    private func sendOnWire(_ payload: Data) {
        guard let ble, ble.isReady, let channel = ble.externalChannel else { return }
        channel.send(payload, pkgType: BlePackets.pkgCommonData)
    }

    // MARK: - Feature API

    /// Opens the teleprompter. Two messages 400ms apart, both sourced from the
    /// tici package — the content is dropped if the app has not come up yet.
    public func openTeleprompter(_ text: String, title: String = Teleprompter.defaultTitle) {
        scheduler.run { [weak self] in
            guard let self else { return }
            self.sendActionNow(Teleprompter.buildOpen(text: text, title: title),
                               targetPkg: AppLayer.pkgLauncher, sourcePkg: AppLayer.pkgTici)
            self.scheduler.postDelayed(Teleprompter.openToContentDelay) { [weak self] in
                self?.sendActionNow(Teleprompter.buildContent(text: text, title: title),
                                    targetPkg: AppLayer.pkgLauncher,
                                    sourcePkg: AppLayer.pkgTici)
            }
        }
    }

    public func teleprompterHighlight(index: Int, title: String = Teleprompter.defaultTitle) {
        sendAction(Teleprompter.buildHighlight(index: index, title: title),
                   targetPkg: AppLayer.pkgLauncher, sourcePkg: AppLayer.pkgTici)
    }

    /// Pushes prompter content WITHOUT the `open_app` launch.
    ///
    /// `openTeleprompter` starts with an `open_app`, which needs a live classic-BT
    /// audio link (unreachable on iOS for XGA010C). Prefer `LensScript` for the
    /// iPhone path. This content-only send is only useful if `tici` is already
    /// open on the lens; otherwise it is dropped.
    public func teleprompterContentOnly(_ text: String,
                                        title: String = Teleprompter.defaultTitle) {
        sendAction(Teleprompter.buildContent(text: text, title: title),
                   targetPkg: AppLayer.pkgLauncher, sourcePkg: AppLayer.pkgTici)
    }

    /// Shows a notification card on the glasses.
    public func showNotification(title: String, body: String) {
        sendAction(Notifications.buildShow(title: title, content: body))
    }

    /// Tells the glasses to accept iOS ANCS (texts, calls, other apps).
    ///
    /// This is the MYVU-app toggle, not a push of a card. iMessage still needs
    /// a real OS BLE bond with the glasses (Settings > Bluetooth), which is
    /// separate from the StarryNet ECDH session this SDK already does. A
    /// third-party iOS app cannot read Messages itself.
    ///
    /// Whether the glasses keep the flag across a power cycle is unverified, so
    /// callers should re-send it on each ready session rather than once.
    public func enablePhoneNotifications(_ enabled: Bool = true,
                                         types: [String: Bool] = [:],
                                         calls: Bool = true,
                                         announce: Bool = false,
                                         brightenScreen: Bool = true,
                                         dismissMs: Int64 = 10_000) {
        sendAction(Notifications.buildSyncConfig(enabled: enabled, types: types,
                                                 calls: calls, dismissMs: dismissMs,
                                                 announce: announce,
                                                 brightenScreen: brightenScreen))
    }

    /// Shows or updates a stable lens card (same numeric id replaces in place).
    public func showLensCard(title: String, body: String,
                             numericId: Int = LensCards.scriptNumericId) {
        sendAction(LensCards.buildShow(title: title, body: body, numericId: numericId))
    }

    /// Dismisses a stable lens card previously shown with `showLensCard`.
    public func dismissLensCard(numericId: Int = LensCards.scriptNumericId) {
        sendAction(LensCards.buildDismiss(numericId: numericId))
    }

    /// Dismisses notifications previously shown, by id.
    public func dismissNotifications(ids: [String]) {
        sendAction(Notifications.buildDismiss(ids: ids))
    }

    /// Pushes a weather reading to the glasses' weather panel.
    public func sendWeather(_ reading: Weather.Reading) {
        sendAction(Weather.build(reading))
    }

    /// Pushes a step count to the glasses' Steps standby widget.
    public func sendStepCount(_ reading: Health.Reading) {
        sendAction(Health.build(reading))
    }

    // Trackpad: the phone as a remote touchpad for the glasses' launcher.
    public func trackpadStart() { sendAction(Trackpad.start()) }
    public func trackpadStop() { sendAction(Trackpad.stop()) }
    public func trackpadClick() { sendAction(Trackpad.click()) }
    public func trackpadDoubleClick() { sendAction(Trackpad.doubleClick()) }
    public func trackpadLongPress() { sendAction(Trackpad.longPress()) }

    public func trackpadSwipe(direction: Int, startX: Double, startY: Double,
                              endX: Double, endY: Double,
                              speedX: Double, speedY: Double) {
        sendAction(Trackpad.swipe(direction: direction, startX: startX, startY: startY,
                                  endX: endX, endY: endY, speedX: speedX, speedY: speedY))
    }

    // Settings.
    /// Volume 0–15.
    public func setVolume(_ value: Int) { sendAction(SystemSettings.setVolume(value)) }
    /// Brightness, observed 0–10.
    public func setBrightness(_ value: Int) { sendAction(SystemSettings.setBrightness(value)) }
    public func toggleWifi(_ on: Bool) { sendAction(SystemSettings.toggleWifi(on)) }
    /// Retail/demo mode. Flat boolean; not ADB/root. See `SystemSettings.setDemoMode`.
    public func setDemoMode(_ on: Bool) { sendAction(SystemSettings.setDemoMode(on)) }
    /// Ask the glasses to start a log dump (`user_feedback` / `get_glass_log`).
    public func requestGlassLog(channel: String = "BLE",
                                filePath: String = GlassLog.defaultFilePath) {
        sendAction(GlassLog.request(channel: channel, filePath: filePath))
    }
    /// Ask the glasses for a HUD screenshot (`screenshot` / `get_glass_screenshot`).
    public func requestGlassScreenshot(filePath: String? = nil,
                                       useEncoding: Bool = true) {
        sendAction(GlassScreenshot.request(filePath: filePath, useEncoding: useEncoding))
    }
    /// Do-not-disturb.
    public func setZenMode(_ on: Bool) { sendAction(SystemSettings.setZenMode(on)) }
    /// Low-power HUD; closes all apps on the glasses.
    public func setAirMode(_ on: Bool) { sendAction(SystemSettings.setAirMode(on)) }
    public func setWearDetection(_ on: Bool) { sendAction(SystemSettings.setWearDetection(on)) }
    public func setMusicTpControl(_ on: Bool) { sendAction(SystemSettings.setMusicTpControl(on)) }
    public func setScreenOffTime(seconds: Int) {
        sendAction(SystemSettings.setScreenOffTime(seconds))
    }
    /// Standby-widget field-of-view position 0–3.
    public func setStandbyPosition(_ position: Int) {
        sendAction(SystemSettings.setStandbyPosition(position))
    }
    public func setDeviceName(_ name: String) { sendAction(SystemSettings.setDeviceName(name)) }
    public func setLanguage(_ language: String, country: String) {
        sendAction(SystemSettings.setLanguage(language: language, country: country))
    }
    /// Ties brightness to sunrise/sunset.
    public func setAutoBrightness(_ on: Bool) {
        sendAction(SystemSettings.setAutoBrightness(on))
    }
    /// The glasses' own clicks and chimes, not the media volume.
    public func setSoundEffects(_ on: Bool) {
        sendAction(SystemSettings.setSoundEffects(on))
    }
    public func setHearingAssist(_ on: Bool) {
        sendAction(SystemSettings.setHearingAssist(on))
    }
    /// HUD text size.
    public func setFontSize(_ size: SystemSettings.FontSize) {
        sendAction(SystemSettings.setFontSize(size))
    }
    /// Which glasses app a long press opens; see `SystemSettings.GlassApps`.
    public func setAppFastOpen(_ packageName: String) {
        sendAction(SystemSettings.setAppFastOpen(packageName))
    }
    /// Reorders the launcher dock; see `SystemSettings.GlassApps`.
    public func setDockItems(_ packages: [String]) {
        sendAction(SystemSettings.setDockItems(packages))
    }
    /// Which standby widgets are shown, in order. Pass the wearer's chosen
    /// subset through `SystemSettings.StandbyWidgets.ordered` first.
    public func setStandbyWidgets(_ widgets: [String]) {
        sendAction(SystemSettings.setStandbyWidgets(widgets))
    }
    /// Wipes the glasses. There is no undo and no confirmation on the device.
    public func factoryReset() { sendAction(SystemSettings.factoryReset()) }
    /// Sets the gesture that pauses a notification being read aloud.
    public func setNotificationBroadcastPauseType(_ type: Int) {
        sendAction(Notifications.buildBroadcastPauseType(type))
    }

    /// Answers a `contactLookupRequested` event — the glasses asking who a
    /// phone number belongs to.
    ///
    /// This is what puts a NAME on an incoming-call card instead of "Unknown".
    /// The glasses take the number from the classic-Bluetooth HFP link, which
    /// carries digits only, and iOS exposes no phonebook to them; the phone
    /// answering this request is the whole mechanism.
    ///
    /// Answer promptly — the card is already on the lens by the time this
    /// arrives. Pass `displayName: nil` when the number is not in the address
    /// book, which tells the glasses to stop waiting and keep the number.
    ///
    /// The reply is routed to the request's own `targetPackage`, not the
    /// launcher; sending it anywhere else is silently dropped.
    public func answerAirFunction(_ request: AirFunction.Request,
                                  displayName: String? = nil,
                                  address: String? = nil) {
        let json = AirFunction.reply(to: request, displayName: displayName,
                                     address: address)
        sendAction(json, targetPkg: request.targetPackage,
                   sourcePkg: AppLayer.pkgSelf)
    }

    /// Tells the glasses the lookup failed, so they stop waiting on us.
    public func failAirFunction(_ request: AirFunction.Request,
                                message: String) {
        sendAction(AirFunction.failure(to: request, message: message),
                   targetPkg: request.targetPackage, sourcePkg: AppLayer.pkgSelf)
    }
    /// Pushes the current wall-clock time to the glasses.
    public func syncTime() { sendAction(ClockSync.build()) }

    /// Any no-argument "system" query, e.g. `get_device_info`,
    /// `request_phone_battery`. Replies arrive asynchronously as raw inbound
    /// messages and `.unknown` events.
    public func query(_ subAction: String) { sendAction(SystemSettings.query(subAction)) }

    /// Escape hatch for hand-written action JSON.
    /// Sends arbitrary action JSON.
    ///
    /// The packages default to the launcher, but they are exposed because they
    /// are not cosmetic: the glasses route on them, and a message replaying one
    /// the init burst sends must use the same source or it may be ignored.
    public func sendRaw(_ actionJson: String,
                        targetPkg: String = AppLayer.pkgLauncher,
                        sourcePkg: String = AppLayer.pkgLauncher) {
        sendAction(actionJson, targetPkg: targetPkg, sourcePkg: sourcePkg)
    }

    /// Pushes a Star Air firmware pack over BLE (`air_ota` + ShareAbility).
    ///
    /// Files must use the exact names the glasses accept (`platform_tester.bin`,
    /// `best1600_watch_bth.bin`). Progress and the terminal result arrive as
    /// `GlassesEvent.firmwareUpdateProgress` / `.firmwareUpdateFinished`.
    public func startFirmwareUpdate(files: [OtaFile]) {
        scheduler.run { [weak self] in
            guard let self else { return }
            guard self.session.ready else {
                SdkLog.warn("firmware update ignored: session not ready")
                self.notify { o, c in
                    o.myvuClient(c, didReceive: .firmwareUpdateFinished(
                        success: false, romVersion: "",
                        message: "the glasses are not connected"))
                }
                return
            }
            guard self.firmwareSession == nil else {
                SdkLog.warn("firmware update ignored: already in progress")
                return
            }
            guard !files.isEmpty else {
                self.notify { o, c in
                    o.myvuClient(c, didReceive: .firmwareUpdateFinished(
                        success: false, romVersion: "",
                        message: "no firmware files"))
                }
                return
            }
            let session = FirmwareUpdateSession(
                files: files, scheduler: self.scheduler,
                sendAction: { [weak self] json in self?.sendActionNow(json) },
                sendShare: { [weak self] protobuf in self?.sendShare(protobuf) },
                notify: { [weak self] event in
                    self?.notify { o, c in o.myvuClient(c, didReceive: event) }
                },
                onFinished: { [weak self] in self?.firmwareSession = nil })
            self.firmwareSession = session
            session.start()
        }
    }

    public func cancelFirmwareUpdate() {
        scheduler.run { [weak self] in
            self?.firmwareSession?.cancel("cancelled")
            self?.firmwareSession = nil
        }
    }

    // MARK: - Helpers

    /// A transient failure: tear down and retry on a backoff.
    private func fail(_ why: String) {
        SdkLog.warn(why)
        teardown()
        setState(.failed)
        scheduleReconnect("connection failed")
    }

    /// A failure the user must resolve (Bluetooth off, glasses not found): no
    /// retry, because a timer cannot fix it.
    private func failHard(_ why: String) {
        SdkLog.warn(why)
        cancelReconnect()
        teardown()
        setState(.failed)
    }

    private func setState(_ s: ConnectionState) {
        currentState = s
        notify { o, c in o.myvuClient(c, didChangeState: s) }
    }

    private static func truncate(_ s: String, _ n: Int) -> String {
        s.count <= n ? s : String(s.prefix(n)) + "..."
    }

    /// True for the glasses' streamed microphone audio (code:109).
    ///
    /// Matched on raw bytes rather than by decoding: the payload is mostly Opus
    /// data, so building a String just to inspect it is exactly the cost this
    /// avoids.
    static func isAudioFrame(_ body: Data) -> Bool {
        let marker = Data(#""code":109"#.utf8)
        guard body.count >= marker.count else { return false }
        return body.range(of: marker) != nil
    }
}
