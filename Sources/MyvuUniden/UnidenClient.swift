import CoreBluetooth
import Foundation
#if os(iOS)
    import UIKit
#endif

/// BLE central for a Uniden R-series radar detector (R4W, R8, R9, AE903i).
///
/// Own `CBCentralManager` — peripherals belong to the manager that discovered
/// them, so this cannot share the glasses central. Scan is name-filtered
/// (`R4`/`R8`/`R9`/`AE903i`); after connect it enables notify on the alert
/// characteristic and parses UTF-8 `&`-separated slots.
public final class UnidenClient: NSObject {
    public enum State: Equatable, Sendable {
        case idle
        case scanning
        case connecting
        case connected
    }

    public private(set) var state: State = .idle
    public private(set) var deviceName: String?
    public var connectedId: UUID? { peripheral?.identifier }

    public var onStateChange: ((State, String?, UUID?) -> Void)?
    public var onAlerts: (([UnidenAlert]) -> Void)?
    public var onError: ((String) -> Void)?

    private let queue: DispatchQueue
    private let callbacks: DispatchQueue
    private var manager: CBCentralManager!
    private var peripheral: CBPeripheral?
    private var alertCharacteristic: CBCharacteristic?
    private var etcCharacteristic: CBCharacteristic?
    private var radarHits: [UnidenAlert] = []
    private var poiHits: [UnidenAlert] = []
    private var pendingKnownId: UUID?
    private var wantsConnect = false
    private var scanTimeout: DispatchWorkItem?
    private var scanBackgroundTask: Any?
    private static let scanSeconds: TimeInterval = 15
    private static let restoreId = "dev.myvu.uniden"

    public init(callbackQueue: DispatchQueue = .main) {
        self.queue = DispatchQueue(label: "uniden.ble", qos: .userInitiated)
        self.callbacks = callbackQueue
        super.init()
        manager = CBCentralManager(delegate: self, queue: queue, options: [
            CBCentralManagerOptionRestoreIdentifierKey: Self.restoreId,
        ])
    }

    /// Scans for a nearby detector, or reconnects to `knownId` if iOS still
    /// remembers that peripheral.
    public func connect(knownId: UUID? = nil) {
        queue.async { [weak self] in
            guard let self else { return }
            self.wantsConnect = true
            self.pendingKnownId = knownId
            self.startIfReady()
        }
    }

    public func disconnect() {
        queue.async { [weak self] in
            self?.tearDown(error: nil)
        }
    }

    // MARK: - Connect path

    private func startIfReady() {
        guard wantsConnect else { return }
        switch manager.state {
        case .poweredOn:
            break
        case .poweredOff:
            emitError("Bluetooth is turned off")
            wantsConnect = false
            return
        case .unauthorized:
            emitError("this app is not authorised to use Bluetooth")
            wantsConnect = false
            return
        case .unsupported:
            emitError("Bluetooth LE is unsupported on this device")
            wantsConnect = false
            return
        default:
            return
        }

        if state == .connected || state == .connecting || state == .scanning {
            return
        }

        if let id = pendingKnownId {
            let remembered = manager.retrievePeripherals(withIdentifiers: [id])
            if let found = remembered.first {
                connect(to: found)
                return
            }
        }

        let already = manager.retrieveConnectedPeripherals(withServices: [
            UnidenUuids.dataService, UnidenUuids.commandService,
        ])
        if let found = already.first(where: { UnidenAlertParser.matchesRadarName($0.name) })
            ?? already.first {
            connect(to: found)
            return
        }

        setState(.scanning)
        beginScanBackgroundTask()
        manager.scanForPeripherals(
            withServices: UnidenScanMode.serviceFilter(backgrounded: isBackgrounded()),
            options: [CBCentralManagerScanOptionAllowDuplicatesKey: false])
        let timeout = DispatchWorkItem { [weak self] in
            guard let self, self.state == .scanning else { return }
            self.manager.stopScan()
            self.endScanBackgroundTask()
            self.wantsConnect = false
            self.setState(.idle)
            self.emitError("No Uniden radar found. Make sure it is on and in range.")
        }
        scanTimeout = timeout
        queue.asyncAfter(deadline: .now() + Self.scanSeconds, execute: timeout)
    }

    private func connect(to peripheral: CBPeripheral) {
        scanTimeout?.cancel()
        scanTimeout = nil
        endScanBackgroundTask()
        manager.stopScan()
        self.peripheral = peripheral
        peripheral.delegate = self
        deviceName = peripheral.name
        setState(.connecting)
        manager.connect(peripheral, options: [
            CBConnectPeripheralOptionNotifyOnConnectionKey: true,
            CBConnectPeripheralOptionNotifyOnDisconnectionKey: true,
        ])
    }

    private func tearDown(error: String?) {
        scanTimeout?.cancel()
        scanTimeout = nil
        endScanBackgroundTask()
        wantsConnect = false
        manager.stopScan()
        if let peripheral {
            manager.cancelPeripheralConnection(peripheral)
        }
        peripheral = nil
        alertCharacteristic = nil
        etcCharacteristic = nil
        radarHits = []
        poiHits = []
        deviceName = nil
        setState(.idle)
        if let error { emitError(error) }
        publishAlerts([])
    }

    private func setState(_ next: State) {
        state = next
        let name = deviceName
        let id = next == .connected ? peripheral?.identifier : nil
        callbacks.async { [weak self] in
            self?.onStateChange?(next, name, id)
        }
    }

    private func emitError(_ message: String) {
        callbacks.async { [weak self] in
            self?.onError?(message)
        }
    }

    private func publishAlerts(_ alerts: [UnidenAlert]) {
        callbacks.async { [weak self] in
            self?.onAlerts?(alerts)
        }
    }

    private func publishCombined() {
        let combined = poiHits + radarHits
        callbacks.async { [weak self] in
            self?.onAlerts?(combined)
        }
    }

    private func isBackgrounded() -> Bool {
        #if os(iOS)
            if Thread.isMainThread {
                return UIApplication.shared.applicationState != .active
            }
            return DispatchQueue.main.sync {
                UIApplication.shared.applicationState != .active
            }
        #else
            return false
        #endif
    }

    private func beginScanBackgroundTask() {
        #if os(iOS)
            endScanBackgroundTask()
            let task = UIApplication.shared.beginBackgroundTask(withName: "uniden-scan") { [weak self] in
                self?.queue.async { self?.endScanBackgroundTask() }
            }
            scanBackgroundTask = task
        #endif
    }

    private func endScanBackgroundTask() {
        #if os(iOS)
            guard let task = scanBackgroundTask as? UIBackgroundTaskIdentifier,
                  task != .invalid else {
                scanBackgroundTask = nil
                return
            }
            scanBackgroundTask = nil
            UIApplication.shared.endBackgroundTask(task)
        #endif
    }

    private func subscribeToAlerts(on peripheral: CBPeripheral) {
        if let service = peripheral.services?.first(where: {
            $0.uuid == UnidenUuids.dataService
        }) {
            let chars = service.characteristics
            if let alert = chars?.first(where: { $0.uuid == UnidenUuids.alertNotify }) {
                alertCharacteristic = alert
                peripheral.setNotifyValue(true, for: alert)
            }
            if let etc = chars?.first(where: { $0.uuid == UnidenUuids.etcNotify }) {
                etcCharacteristic = etc
                peripheral.setNotifyValue(true, for: etc)
            }
            if alertCharacteristic != nil {
                setState(.connected)
                return
            }
            if chars != nil {
                tearDown(error: "Uniden alert characteristic not found")
                return
            }
            peripheral.discoverCharacteristics(
                [UnidenUuids.alertNotify, UnidenUuids.etcNotify], for: service)
            return
        }
        if peripheral.services != nil {
            tearDown(error: "Uniden data service not found")
            return
        }
        peripheral.discoverServices([UnidenUuids.dataService])
    }
}

extension UnidenClient: CBCentralManagerDelegate {
    public func centralManagerDidUpdateState(_ central: CBCentralManager) {
        if central.state == .poweredOn {
            startIfReady()
        } else if state != .idle {
            tearDown(error: "Bluetooth became unavailable")
        }
    }

    public func centralManager(_ central: CBCentralManager,
                               willRestoreState dict: [String: Any]) {
        let restored = dict[CBCentralManagerRestoredStatePeripheralsKey] as? [CBPeripheral] ?? []
        guard let found = restored.first(where: {
            UnidenAlertParser.matchesRadarName($0.name)
        }) ?? restored.first else { return }
        wantsConnect = true
        peripheral = found
        found.delegate = self
        deviceName = found.name
        switch found.state {
        case .connected:
            subscribeToAlerts(on: found)
        default:
            connect(to: found)
        }
    }

    public func centralManager(_ central: CBCentralManager,
                               didDiscover peripheral: CBPeripheral,
                               advertisementData: [String: Any],
                               rssi RSSI: NSNumber) {
        guard state == .scanning else { return }
        let advertised = advertisementData[CBAdvertisementDataLocalNameKey] as? String
        let name = advertised ?? peripheral.name
        guard UnidenAlertParser.matchesRadarName(name) else { return }
        deviceName = name
        connect(to: peripheral)
    }

    public func centralManager(_ central: CBCentralManager,
                               didConnect peripheral: CBPeripheral) {
        guard peripheral.identifier == self.peripheral?.identifier else { return }
        if let name = peripheral.name, !name.isEmpty {
            deviceName = name
        }
        subscribeToAlerts(on: peripheral)
    }

    public func centralManager(_ central: CBCentralManager,
                               didFailToConnect peripheral: CBPeripheral,
                               error: Error?) {
        tearDown(error: error?.localizedDescription ?? "Uniden connect failed")
    }

    public func centralManager(_ central: CBCentralManager,
                               didDisconnectPeripheral peripheral: CBPeripheral,
                               error: Error?) {
        guard peripheral.identifier == self.peripheral?.identifier else { return }
        let message = error?.localizedDescription
        peripheral.delegate = nil
        self.peripheral = nil
        alertCharacteristic = nil
        etcCharacteristic = nil
        radarHits = []
        poiHits = []
        deviceName = nil
        wantsConnect = false
        setState(.idle)
        publishAlerts([])
        if let message { emitError(message) }
    }
}

extension UnidenClient: CBPeripheralDelegate {
    public func peripheral(_ peripheral: CBPeripheral,
                           didDiscoverServices error: Error?) {
        if let error {
            tearDown(error: error.localizedDescription)
            return
        }
        subscribeToAlerts(on: peripheral)
    }

    public func peripheral(_ peripheral: CBPeripheral,
                           didDiscoverCharacteristicsFor service: CBService,
                           error: Error?) {
        if let error {
            tearDown(error: error.localizedDescription)
            return
        }
        subscribeToAlerts(on: peripheral)
    }

    public func peripheral(_ peripheral: CBPeripheral,
                           didUpdateNotificationStateFor characteristic: CBCharacteristic,
                           error: Error?) {
        if let error {
            emitError(error.localizedDescription)
            return
        }
        if characteristic.uuid == UnidenUuids.alertNotify, characteristic.isNotifying {
            setState(.connected)
        }
    }

    public func peripheral(_ peripheral: CBPeripheral,
                           didUpdateValueFor characteristic: CBCharacteristic,
                           error: Error?) {
        if let error {
            emitError(error.localizedDescription)
            return
        }
        guard let data = characteristic.value,
              let text = String(data: data, encoding: .utf8) else { return }
        if characteristic.uuid == UnidenUuids.alertNotify {
            radarHits = UnidenAlertParser.parse(
                text, isI9: UnidenAlertParser.isI9(deviceName))
            publishCombined()
        } else if characteristic.uuid == UnidenUuids.etcNotify {
            poiHits = UnidenEtcParser.poiAlerts(from: text)
            publishCombined()
        }
    }
}
