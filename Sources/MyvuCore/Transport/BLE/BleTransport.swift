import CoreBluetooth
import Foundation

/// BLE GATT link to the glasses: connect, discover, subscribe, then hand the two
/// channels over to the pairing and session layers.
///
/// This is the transport that must come up FIRST. On Android it is also where the
/// per-session RFCOMM relay UUID is learned (`CMD_SPP_SERVER_UUID_SYNC`); on iOS
/// that channel cannot be opened at all, so BLE is the only transport and carries
/// everything (see `MyvuClient` for what that costs).
public final class BleTransport: NSObject {
    /// The glasses reject an unwanted central about a second in, when their own
    /// phone still holds them. Waiting this long before declaring the link up
    /// turns that race into a clean failure instead of a half-open session.
    private static let livenessCheck: TimeInterval = 1.5
    /// Guards against a peripheral that connects but never finishes discovery.
    private static let discoveryTimeout: TimeInterval = 15
    /// CoreBluetooth's connectPeripheral has no timeout — it waits forever for an
    /// out-of-range device. After a full glasses power-off the reconnect would
    /// hang here indefinitely, so bound it and let the caller fall back to a scan.
    private static let connectTimeout: TimeInterval = 12

    public struct Handlers {
        public var onReady: () -> Void
        /// A complete message from the link/pairing characteristic.
        public var onInternalMessage: (_ pkgType: Int, _ payload: Data) -> Void
        /// A complete message from the application characteristic.
        public var onExternalMessage: (_ pkgType: Int, _ payload: Data) -> Void
        /// `needsRePairing` means the bond records disagree and only the user
        /// can fix it — see `BleCentral.requiresRePairing`.
        public var onDisconnected: (_ reason: String, _ needsRePairing: Bool) -> Void

        public init(onReady: @escaping () -> Void,
                    onInternalMessage: @escaping (Int, Data) -> Void,
                    onExternalMessage: @escaping (Int, Data) -> Void,
                    onDisconnected: @escaping (String, Bool) -> Void) {
            self.onReady = onReady
            self.onInternalMessage = onInternalMessage
            self.onExternalMessage = onExternalMessage
            self.onDisconnected = onDisconnected
        }
    }

    private let central: BleCentral
    private let peripheral: CBPeripheral
    private let scheduler: Scheduler
    private let handlers: Handlers

    private var writeQueue: BleWriteQueue?
    private var internalChar: CBCharacteristic?
    private var externalChar: CBCharacteristic?
    private var urgentChar: CBCharacteristic?
    private var heartbeat: BleHeartbeat?

    private var servicesAwaitingCharacteristics = 0
    private var pendingSubscriptions = 0
    private let discoveryTimer = TimerSlot()
    private let connectTimer = TimerSlot()
    private let livenessTimer = TimerSlot()

    public private(set) var isConnected = false
    public private(set) var isReady = false
    private var disconnectReported = false

    public private(set) var internalChannel: BleMessageChannel?
    public private(set) var externalChannel: BleMessageChannel?

    public var deviceName: String? { peripheral.name }
    public var deviceId: UUID { peripheral.identifier }

    public init(central: BleCentral, peripheral: CBPeripheral, scheduler: Scheduler,
                handlers: Handlers) {
        self.central = central
        self.peripheral = peripheral
        self.scheduler = scheduler
        self.handlers = handlers
        super.init()
    }

    /// True when the urgent characteristic is present, i.e. a heartbeat is
    /// possible. Without it the glasses' watchdog may drop the link.
    public var hasUrgentCharacteristic: Bool { urgentChar != nil }

    // MARK: - Connect

    public func connect() {
        SdkLog.log("BLE connecting to \(peripheral.name ?? peripheral.identifier.uuidString)...")
        peripheral.delegate = self
        central.connect(peripheral, observer: BleCentral.ConnectionObserver(
            onConnected: { [weak self] in self?.onConnected() },
            onDisconnected: { [weak self] reason, needsRePairing in
                self?.fail(reason, needsRePairing: needsRePairing)
            }))
        connectTimer.schedule(on: scheduler, after: BleTransport.connectTimeout) { [weak self] in
            guard let self, !self.isConnected else { return }
            self.central.cancelConnection(self.peripheral)
            self.fail("BLE connect timed out after \(Int(BleTransport.connectTimeout))s "
                + "(glasses powered off?)")
        }
    }

    private func onConnected() {
        connectTimer.cancel()
        isConnected = true
        // There is no MTU request on iOS: the stack negotiates the largest MTU it
        // can at connect time and exposes the result through
        // maximumWriteValueLength. So unlike Android there is nothing to wait for
        // here, and discovery starts immediately.
        writeQueue = BleWriteQueue(peripheral: peripheral, scheduler: scheduler)
        SdkLog.log("BLE connected (DMTU \(currentDmtu))")

        discoveryTimer.schedule(on: scheduler, after: BleTransport.discoveryTimeout) { [weak self] in
            self?.fail("GATT discovery did not complete within "
                + "\(Int(BleTransport.discoveryTimeout))s")
        }
        peripheral.discoverServices(nil)
    }

    public func close() {
        heartbeat?.stop()
        heartbeat = nil
        internalChannel?.shutdown()
        externalChannel?.shutdown()
        connectTimer.cancel()
        discoveryTimer.cancel()
        livenessTimer.cancel()
        writeQueue?.clear()
        isConnected = false
        isReady = false
        // Suppress the disconnect callback: this teardown is deliberate.
        disconnectReported = true
        central.cancelConnection(peripheral)
    }

    // MARK: - Channel setup

    /// First (internal, external) triple whose pair is present wins; the urgent
    /// characteristic is optional.
    private func selectChannels() {
        let all = (peripheral.services ?? []).flatMap { $0.characteristics ?? [] }

        for set in Uuids.channelSets {
            guard let inChar = all.first(where: { $0.uuid == set.internalChar }),
                  let exChar = all.first(where: { $0.uuid == set.externalChar })
            else { continue }

            internalChar = inChar
            externalChar = exChar
            urgentChar = all.first { $0.uuid == set.urgentChar }
            SdkLog.log("BLE channels: internal=\(set.internalChar) external=\(set.externalChar) "
                + (urgentChar != nil ? "urgent=\(set.urgentChar)" : "urgent=ABSENT"))
            subscribe()
            return
        }

        let present = all.map { $0.uuid.uuidString }.joined(separator: ", ")
        fail("no known StarryNet channel pair on this device; characteristics=[\(present)]")
    }

    private func subscribe() {
        guard let internalChar, let externalChar else { return }

        internalChannel = BleMessageChannel(
            label: "internal", scheduler: scheduler,
            write: { [weak self] packet in self?.write(packet, to: internalChar) },
            receiver: { [weak self] pkgType, payload in
                self?.handlers.onInternalMessage(pkgType, payload)
            })
        externalChannel = BleMessageChannel(
            label: "external", scheduler: scheduler,
            write: { [weak self] packet in self?.write(packet, to: externalChar) },
            receiver: { [weak self] pkgType, payload in
                self?.handlers.onExternalMessage(pkgType, payload)
            })
        applyDmtu()

        pendingSubscriptions = 2
        peripheral.setNotifyValue(true, for: internalChar)
        peripheral.setNotifyValue(true, for: externalChar)
    }

    private func onSubscriptionsComplete() {
        discoveryTimer.cancel()
        SdkLog.log("BLE subscribed to both channels")

        if let urgentChar, let writeQueue {
            heartbeat = BleHeartbeat(queue: writeQueue, characteristic: urgentChar,
                                     scheduler: scheduler)
            heartbeat?.start()
        } else {
            SdkLog.warn("urgent characteristic (0x2022) absent -- no heartbeat, so the "
                + "glasses' watchdog may drop the link")
        }

        livenessTimer.schedule(on: scheduler, after: BleTransport.livenessCheck) { [weak self] in
            guard let self, self.isConnected else { return }
            self.isReady = true
            self.handlers.onReady()
        }
    }

    private func write(_ packet: Data, to characteristic: CBCharacteristic) {
        writeQueue?.enqueue(packet, to: characteristic)
    }

    // MARK: - Fragment size

    /// iOS reports the usable payload directly rather than the ATT MTU. Two bytes
    /// go to the packet's `sn` prefix, so the rest is what a fragment can carry.
    private var currentDmtu: Int {
        max(BleMessageChannel.minDmtu,
            peripheral.maximumWriteValueLength(for: .withoutResponse) - 2)
    }

    /// Re-reads the usable write length and hands it to both channels.
    ///
    /// iOS negotiates the MTU once at connect and offers no "MTU changed"
    /// callback, so this is called at subscribe time and again at the safe
    /// boundaries between handshake phases. The channels defer a change until no
    /// message is being reassembled.
    public func applyDmtu() {
        internalChannel?.setDmtu(currentDmtu)
        externalChannel?.setDmtu(currentDmtu)
    }

    // MARK: - Failure

    private func fail(_ reason: String, needsRePairing: Bool = false) {
        guard !disconnectReported else { return }
        disconnectReported = true
        isConnected = false
        isReady = false
        heartbeat?.stop()
        connectTimer.cancel()
        discoveryTimer.cancel()
        livenessTimer.cancel()
        writeQueue?.clear()
        handlers.onDisconnected(reason, needsRePairing)
    }
}

extension BleTransport: CBPeripheralDelegate {
    public func peripheral(_ peripheral: CBPeripheral, didDiscoverServices error: Error?) {
        if let error {
            fail("service discovery failed: \(error.localizedDescription)")
            return
        }
        let services = peripheral.services ?? []
        guard !services.isEmpty else {
            fail("the glasses exposed no GATT services")
            return
        }
        // Characteristics are looked for across ALL services: which service holds
        // the StarryNet channels varies between firmware builds.
        servicesAwaitingCharacteristics = services.count
        for s in services {
            peripheral.discoverCharacteristics(nil, for: s)
        }
    }

    public func peripheral(_ peripheral: CBPeripheral,
                           didDiscoverCharacteristicsFor service: CBService, error: Error?) {
        if let error {
            SdkLog.trace("characteristic discovery failed for \(service.uuid): \(error)")
        }
        servicesAwaitingCharacteristics -= 1
        if servicesAwaitingCharacteristics <= 0 {
            selectChannels()
        }
    }

    public func peripheral(_ peripheral: CBPeripheral,
                           didUpdateNotificationStateFor characteristic: CBCharacteristic,
                           error: Error?) {
        if let error {
            fail("could not subscribe to \(characteristic.uuid): \(error.localizedDescription)")
            return
        }
        pendingSubscriptions -= 1
        if pendingSubscriptions == 0 {
            onSubscriptionsComplete()
        }
    }

    public func peripheral(_ peripheral: CBPeripheral,
                           didUpdateValueFor characteristic: CBCharacteristic, error: Error?) {
        guard let value = characteristic.value, !value.isEmpty else { return }
        // The inbound half of the wire log; see BleWriteQueue.drain for the
        // outbound half. Logged before dispatch so a packet that later fails
        // reassembly is still in the capture.
        SdkLog.trace("<- \(Uuids.label(characteristic.uuid)) \(value.count)B \(Hex.encode(value))")
        if characteristic.uuid == internalChar?.uuid {
            internalChannel?.feed(value)
        } else if characteristic.uuid == externalChar?.uuid {
            externalChannel?.feed(value)
        } else {
            SdkLog.trace("notification on unexpected characteristic \(characteristic.uuid)")
        }
    }

    public func peripheralIsReady(toSendWriteWithoutResponse peripheral: CBPeripheral) {
        writeQueue?.drain()
    }
}
