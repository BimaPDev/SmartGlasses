import CoreBluetooth
import Foundation

/// A pair of glasses seen in a scan.
public struct DiscoveredGlasses {
    /// CoreBluetooth's per-device identifier. Persist THIS, not a MAC: iOS never
    /// exposes a peripheral's Bluetooth address, and the identifier is stable for
    /// this device on this installation, which is all a reconnect needs.
    public let id: UUID
    public let name: String?
    public let rssi: Int
    let peripheral: CBPeripheral
}

/// Owns the single `CBCentralManager` and everything that must go through it:
/// radio state, scanning, and connect/disconnect.
///
/// There is one manager because `CBPeripheral` objects belong to the manager that
/// produced them — a peripheral discovered by one manager cannot be connected by
/// another. `BleTransport` therefore borrows this central rather than creating
/// its own.
///
/// The manager is created on the connection scheduler's queue, so every
/// CoreBluetooth callback arrives on that queue and the single-threaded protocol
/// invariant holds without locking.
public final class BleCentral: NSObject {
    /// Advertised service UUID the official app filters its scan on (0x0bd3),
    /// plus the GATT primary service (0x0bd1) that some builds advertise instead.
    private static let matchedServices = Set([Uuids.advertisedService, Uuids.service])

    /// Company IDs seen at the head of the glasses' manufacturer data.
    ///
    /// Confirmed on hardware (XGA010C): the glasses advertise NO local name and
    /// NO service UUIDs — the advert carries manufacturer data only, and the
    /// friendly name sits inside it as ASCII. So this, not the name or the
    /// service list, is what identifies them in a scan. The IDs are the same
    /// 0x0bdx family as the GATT service, and the advert and the scan response
    /// use different ones (0x0bd1 then 0x0bd2), which CoreBluetooth reports as
    /// one concatenated blob.
    private static let matchedCompanyIds: Set<UInt16> = [0x0BD1, 0x0BD2, 0x0BD3]

    /// The name marker inside that manufacturer data.
    private static let nameMarker = Array("MYVU".utf8)

    private let scheduler: Scheduler
    private var manager: CBCentralManager!

    /// Callbacks for the peripheral currently being connected, keyed by
    /// identifier so a stale disconnect cannot disturb a newer attempt.
    private var connectionObservers: [UUID: ConnectionObserver] = [:]

    private var onFound: ((DiscoveredGlasses) -> Void)?
    private var onScanEnded: ((MyvuError?) -> Void)?
    private let scanTimer = TimerSlot()
    private var scanning = false

    /// Resumed once the radio reports a terminal state.
    private var stateWaiters: [(Result<Void, MyvuError>) -> Void] = []

    struct ConnectionObserver {
        let onConnected: () -> Void
        let onDisconnected: (String) -> Void
    }

    public init(scheduler: Scheduler) {
        self.scheduler = scheduler
        super.init()
        // Passing the queue is what keeps callbacks on the protocol thread.
        self.manager = CBCentralManager(delegate: self, queue: scheduler.queue)
    }

    public var state: CBManagerState { manager.state }

    // MARK: - Radio readiness

    /// Calls back once Bluetooth is usable, or with the reason it is not.
    ///
    /// A freshly created manager always starts in `.unknown`, so callers must
    /// wait for this rather than reading `state` directly.
    public func whenPoweredOn(timeout: TimeInterval = 5,
                              _ completion: @escaping (Result<Void, MyvuError>) -> Void) {
        scheduler.run { [weak self] in
            guard let self else { return }
            if let result = BleCentral.terminalResult(for: self.manager.state) {
                completion(result)
                return
            }
            self.stateWaiters.append(completion)
            self.scheduler.postDelayed(timeout) { [weak self] in
                guard let self, !self.stateWaiters.isEmpty else { return }
                let waiters = self.stateWaiters
                self.stateWaiters = []
                for w in waiters {
                    w(.failure(.bluetoothUnavailable(
                        "Bluetooth did not become available within \(Int(timeout))s")))
                }
            }
        }
    }

    private static func terminalResult(for state: CBManagerState)
        -> Result<Void, MyvuError>? {
        switch state {
        case .poweredOn:
            return .success(())
        case .poweredOff:
            return .failure(.bluetoothUnavailable("Bluetooth is turned off"))
        case .unauthorized:
            return .failure(.bluetoothUnavailable(
                "this app is not authorised to use Bluetooth — check Settings, and that "
                    + "NSBluetoothAlwaysUsageDescription is in Info.plist"))
        case .unsupported:
            return .failure(.bluetoothUnavailable("Bluetooth LE is unsupported on this device"))
        case .resetting, .unknown:
            return nil
        @unknown default:
            return nil
        }
    }

    // MARK: - Scanning

    /// Discovers MYVU glasses — the "auto search" path, so the caller does not
    /// need a device identifier up front.
    ///
    /// Scanning is UNFILTERED and matched here, rather than handed to
    /// CoreBluetooth as a service filter: some firmware puts the service UUID
    /// only in the scan response, which a filter can miss, and matching the
    /// advertised name as a fallback makes discovery work across generations.
    ///
    /// The cost of that choice is iOS-specific: an unfiltered scan is suspended
    /// while the app is in the background, so auto-search only works in the
    /// foreground. Reconnecting to a known identifier has no such restriction.
    public func startScan(timeout: TimeInterval,
                          onFound: @escaping (DiscoveredGlasses) -> Void,
                          onEnded: @escaping (MyvuError?) -> Void) {
        scheduler.run { [weak self] in
            guard let self else { return }
            guard self.manager.state == .poweredOn else {
                onEnded(.bluetoothUnavailable("Bluetooth is not powered on"))
                return
            }
            self.onFound = onFound
            self.onScanEnded = onEnded
            self.scanning = true
            self.manager.scanForPeripherals(withServices: nil,
                                            options: [CBCentralManagerScanOptionAllowDuplicatesKey: false])
            SdkLog.log("scanning for glasses...")

            self.scanTimer.schedule(on: self.scheduler, after: timeout) { [weak self] in
                guard let self, self.scanning else { return }
                self.stopScan()
                self.onScanEnded?(.notFound("no MYVU glasses found within \(Int(timeout))s"))
                self.onScanEnded = nil
            }
        }
    }

    public func stopScan() {
        scanTimer.cancel()
        guard scanning else { return }
        scanning = false
        manager.stopScan()
    }

    // MARK: - Connecting

    /// Looks up a peripheral previously reported by a scan.
    ///
    /// Returns nil when iOS no longer knows the identifier, which happens after
    /// the device is unpaired or the app is reinstalled — the caller should fall
    /// back to a scan.
    public func peripheral(withId id: UUID) -> CBPeripheral? {
        manager.retrievePeripherals(withIdentifiers: [id]).first
    }

    /// Peripherals already connected to the system, e.g. by another app or by a
    /// previous run. These do not appear in a scan, so a reconnect must check
    /// here too.
    public func connectedGlasses() -> [CBPeripheral] {
        manager.retrieveConnectedPeripherals(withServices: Array(BleCentral.matchedServices))
    }

    func connect(_ peripheral: CBPeripheral, observer: ConnectionObserver) {
        connectionObservers[peripheral.identifier] = observer
        manager.connect(peripheral, options: nil)
    }

    func cancelConnection(_ peripheral: CBPeripheral) {
        connectionObservers.removeValue(forKey: peripheral.identifier)
        manager.cancelPeripheralConnection(peripheral)
    }

    // MARK: - Matching

    private func matches(_ peripheral: CBPeripheral,
                         advertisement: [String: Any]) -> Bool {
        // Manufacturer data first: on the hardware this was built against it is
        // the ONLY thing the advert carries, so the name and service checks
        // below never fire. They are kept as fallbacks for firmware that does
        // advertise them.
        if let mfg = advertisement[CBAdvertisementDataManufacturerDataKey] as? Data,
           BleCentral.isMyvuManufacturerData(mfg) {
            return true
        }
        // Bonded/advertised name is "MYVU DCxx"; the model reads "Star Air".
        let advertisedName = advertisement[CBAdvertisementDataLocalNameKey] as? String
        if let name = advertisedName ?? peripheral.name,
           name.uppercased().contains("MYVU") {
            return true
        }
        let uuids = advertisement[CBAdvertisementDataServiceUUIDsKey] as? [CBUUID] ?? []
        let overflow = advertisement[CBAdvertisementDataOverflowServiceUUIDsKey] as? [CBUUID] ?? []
        return (uuids + overflow).contains { BleCentral.matchedServices.contains($0) }
    }

    /// True when manufacturer data belongs to a pair of MYVU glasses.
    ///
    /// Two independent signals, because either can be absent: the leading
    /// little-endian company ID, and the "MYVU" ASCII marker that appears in the
    /// scan-response half. Requiring both would miss the advert that arrives
    /// before the scan response.
    static func isMyvuManufacturerData(_ data: Data) -> Bool {
        if data.count >= 2 {
            let bytes = [UInt8](data)
            let company = UInt16(bytes[0]) | (UInt16(bytes[1]) << 8)
            if matchedCompanyIds.contains(company) { return true }
        }
        return nameOffset(in: [UInt8](data)) != nil
    }

    /// The friendly name embedded in manufacturer data, e.g. "MYVU 0F35".
    ///
    /// Read as printable ASCII from the marker up to the first non-printable
    /// byte, rather than by trusting a length prefix: the framing around it is
    /// undocumented, and the terminator is what has actually held on hardware.
    static func embeddedName(in data: Data) -> String? {
        let bytes = [UInt8](data)
        guard let start = nameOffset(in: bytes) else { return nil }
        var end = start
        while end < bytes.count, bytes[end] >= 0x20, bytes[end] < 0x7F { end += 1 }
        let name = String(decoding: bytes[start ..< end], as: UTF8.self)
        return name.isEmpty ? nil : name
    }

    private static func nameOffset(in bytes: [UInt8]) -> Int? {
        let marker = nameMarker
        guard bytes.count >= marker.count else { return nil }
        for i in 0 ... (bytes.count - marker.count) where Array(bytes[i ..< i + marker.count]) == marker {
            return i
        }
        return nil
    }
}

extension BleCentral: CBCentralManagerDelegate {
    public func centralManagerDidUpdateState(_ central: CBCentralManager) {
        SdkLog.trace("Bluetooth state = \(central.state.rawValue)")
        guard let result = BleCentral.terminalResult(for: central.state) else { return }
        let waiters = stateWaiters
        stateWaiters = []
        for w in waiters { w(result) }
    }

    public func centralManager(_ central: CBCentralManager, didDiscover peripheral: CBPeripheral,
                               advertisementData: [String: Any], rssi RSSI: NSNumber) {
        // Every advertisement, matched or not. The scan is unfiltered, so this is
        // the whole neighbourhood — but when glasses that the official app finds
        // instantly do not match here, the ONLY way to see why is to look at what
        // they actually broadcast.
        SdkLog.trace("adv \(BleCentral.describe(peripheral, advertisementData, RSSI))")
        guard scanning, matches(peripheral, advertisement: advertisementData) else { return }

        // peripheral.name is nil until the device has been connected once, and
        // these glasses advertise no local name, so the manufacturer-data name
        // is usually the only one there is.
        let mfg = advertisementData[CBAdvertisementDataManufacturerDataKey] as? Data
        let name = advertisementData[CBAdvertisementDataLocalNameKey] as? String
            ?? peripheral.name
            ?? mfg.flatMap(BleCentral.embeddedName(in:))
        SdkLog.log("found glasses: \(name ?? "(no name)") \(peripheral.identifier)")

        let found = DiscoveredGlasses(id: peripheral.identifier, name: name,
                                      rssi: RSSI.intValue, peripheral: peripheral)
        stopScan()
        onScanEnded = nil
        onFound?(found)
    }

    public func centralManager(_ central: CBCentralManager, didConnect peripheral: CBPeripheral) {
        connectionObservers[peripheral.identifier]?.onConnected()
    }

    public func centralManager(_ central: CBCentralManager,
                               didFailToConnect peripheral: CBPeripheral, error: Error?) {
        let observer = connectionObservers.removeValue(forKey: peripheral.identifier)
        observer?.onDisconnected(error?.localizedDescription ?? "connection failed")
    }

    public func centralManager(_ central: CBCentralManager,
                               didDisconnectPeripheral peripheral: CBPeripheral, error: Error?) {
        let observer = connectionObservers.removeValue(forKey: peripheral.identifier)
        observer?.onDisconnected(BleCentral.describe(error))
    }

    /// One advertisement as a single log line: name, services, manufacturer data.
    ///
    /// Manufacturer data is included in full because it is the likeliest place a
    /// device that advertises no name and no service UUID still identifies
    /// itself — the first two bytes are the assigned company ID, little-endian.
    private static func describe(_ peripheral: CBPeripheral,
                                 _ advertisement: [String: Any],
                                 _ rssi: NSNumber) -> String {
        var parts = ["\(peripheral.identifier)"]
        let local = advertisement[CBAdvertisementDataLocalNameKey] as? String
        parts.append("local=\(local ?? "-")")
        parts.append("name=\(peripheral.name ?? "-")")
        parts.append("rssi=\(rssi)")

        let uuids = advertisement[CBAdvertisementDataServiceUUIDsKey] as? [CBUUID] ?? []
        if !uuids.isEmpty {
            parts.append("svc=[\(uuids.map { $0.uuidString }.joined(separator: ","))]")
        }
        let overflow = advertisement[CBAdvertisementDataOverflowServiceUUIDsKey] as? [CBUUID] ?? []
        if !overflow.isEmpty {
            parts.append("ovf=[\(overflow.map { $0.uuidString }.joined(separator: ","))]")
        }
        let solicited = advertisement[CBAdvertisementDataSolicitedServiceUUIDsKey] as? [CBUUID] ?? []
        if !solicited.isEmpty {
            parts.append("sol=[\(solicited.map { $0.uuidString }.joined(separator: ","))]")
        }
        if let mfg = advertisement[CBAdvertisementDataManufacturerDataKey] as? Data {
            parts.append("mfg=\(Hex.encode(mfg))")
        }
        if let data = advertisement[CBAdvertisementDataServiceDataKey] as? [CBUUID: Data],
           !data.isEmpty {
            let pairs = data.map { "\($0.key.uuidString):\(Hex.encode($0.value))" }
            parts.append("svcdata=[\(pairs.joined(separator: ","))]")
        }
        if let connectable = advertisement[CBAdvertisementDataIsConnectable] as? NSNumber {
            parts.append("connectable=\(connectable.boolValue)")
        }
        return parts.joined(separator: " ")
    }

    /// Turns the raw CoreBluetooth error into something a user can act on. These
    /// are the disconnects that actually happen with these glasses.
    private static func describe(_ error: Error?) -> String {
        guard let error = error as NSError?, error.domain == CBErrorDomain else {
            return error?.localizedDescription ?? "disconnected"
        }
        switch CBError.Code(rawValue: error.code) {
        case .connectionTimeout:
            return "connection timed out (glasses out of range or powered off)"
        case .peripheralDisconnected:
            return "the glasses closed the BLE link. They most likely only accept their "
                + "currently-bonded phone — disconnect the glasses in the MYVU app and retry"
        case .connectionLimitReached:
            return "the glasses already have as many connections as they accept"
        default:
            return error.localizedDescription
        }
    }
}
