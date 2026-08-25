import Foundation

/// Runs the Star Air interactive OTA: open the on-glass updater, advertise the
/// two bins, ShareAbility-send each file the glasses request, then wait for
/// the install result.
///
/// Protocol-queue confined. Owned by `MyvuClient`.
final class FirmwareUpdateSession {
    static let openTimeout: TimeInterval = 20
    static let requestTimeout: TimeInterval = 120
    static let resultPollInterval: TimeInterval = 5
    static let resultTimeout: TimeInterval = 360

    private let files: [OtaFile]
    private let byName: [String: OtaFile]
    private let scheduler: Scheduler
    private let sendAction: (String) -> Void
    private let sendShare: (Data) -> Void
    private let notify: (GlassesEvent) -> Void
    private let onFinished: () -> Void

    private var opened = false
    private var finished = false
    private var sender: ShareSender?
    private var pendingNames: [String] = []
    private var transferred: Set<String> = []
    private var sentBytes = 0
    private let totalBytes: Int
    private let openTimer = TimerSlot()
    private let requestTimer = TimerSlot()
    private let resultTimer = TimerSlot()
    private var resultDeadline: Date?

    init(files: [OtaFile], scheduler: Scheduler,
         sendAction: @escaping (String) -> Void,
         sendShare: @escaping (Data) -> Void,
         notify: @escaping (GlassesEvent) -> Void,
         onFinished: @escaping () -> Void) {
        self.files = files
        var map: [String: OtaFile] = [:]
        for f in files { map[f.fileName] = f }
        self.byName = map
        self.scheduler = scheduler
        self.sendAction = sendAction
        self.sendShare = sendShare
        self.notify = notify
        self.onFinished = onFinished
        self.totalBytes = files.reduce(0) { $0 + $1.fileSize }
    }

    func start() {
        progress(0, "Opening the glasses updater…")
        sendAction(AirOta.buildOpen())
        openTimer.schedule(on: scheduler, after: Self.openTimeout) { [weak self] in
            self?.fail("the glasses did not open the updater")
        }
    }

    func handleAirOta(subAction: String, value: String) {
        guard !finished else { return }
        switch subAction {
        case AirOta.openUpdateApp:
            if let r = AirOta.parseResponse(value), r.code != 0 {
                fail(r.msg.isEmpty ? "open updater failed" : r.msg)
            } else {
                markOpened()
            }
        case AirOta.updateAppReady:
            sendAction(AirOta.success(subAction: AirOta.updateAppReady))
            markOpened()
        case AirOta.syncFileInfo:
            if let r = AirOta.parseResponse(value), r.code != 0 {
                fail(r.msg.isEmpty ? "sync file info failed" : r.msg)
            }
        case AirOta.requestSyncFileInfo:
            sendAction(AirOta.buildReplyFileInfo(files))
            armRequestWait()
        case AirOta.requestSendFile:
            handleRequestSend(value)
        case AirOta.syncProgress:
            if let n = Int(value.trimmingCharacters(in: .whitespacesAndNewlines)) {
                let frac = min(1, max(0, Double(n) / 100))
                // File transfer is the first half of the bar; install fills the rest.
                let combined = 0.5 + 0.5 * frac
                progress(combined, "Installing… \(n)%")
            }
        case AirOta.syncResult, AirOta.getResult:
            if let r = AirOta.parseResult(value) ?? AirOta.parseResponse(value).map({
                ($0.code, $0.msg, "")
            }) {
                if r.0 == 0 {
                    if transferred.count >= files.count {
                        succeed(romVersion: r.2, message: r.1)
                    }
                } else if r.0 > 0 {
                    fail(r.1.isEmpty ? "update failed (code \(r.0))" : r.1)
                }
            }
        case AirOta.dialogResult:
            sendAction(AirOta.success(subAction: AirOta.dialogResult))
        case AirOta.checkingBusiness:
            sendAction(AirOta.success(subAction: AirOta.checkingBusiness))
        default:
            SdkLog.trace("air_ota subAction=\(subAction) value=\(value.prefix(80))")
        }
    }

    func handleShare(_ msg: ShareAbility.Message) -> Bool {
        sender?.handle(msg) ?? false
    }

    func cancel(_ reason: String) {
        sender?.cancel(reason)
        fail(reason)
    }

    private func markOpened() {
        guard !opened, !finished else { return }
        opened = true
        openTimer.cancel()
        progress(0.02, "Updater open — sending file list…")
        sendAction(AirOta.buildSyncFileInfo(files))
        armRequestWait()
    }

    private func armRequestWait() {
        requestTimer.schedule(on: scheduler, after: Self.requestTimeout) { [weak self] in
            guard let self, !self.finished, self.sender == nil,
                  self.transferred.count < self.files.count else { return }
            self.fail("the glasses did not request an update file")
        }
    }

    private func handleRequestSend(_ value: String) {
        guard let name = AirOta.parseFileName(value) else {
            sendAction(AirOta.fail(subAction: AirOta.requestSendFile, msg: "file not found"))
            return
        }
        guard byName[name] != nil else {
            SdkLog.warn("air_ota request for unknown file \(name)")
            sendAction(AirOta.fail(subAction: AirOta.requestSendFile, msg: "file not found"))
            return
        }
        requestTimer.cancel()
        if pendingNames.contains(name) || sender?.fileName == name {
            sendAction(AirOta.success(subAction: AirOta.requestSendFile))
            return
        }
        pendingNames.append(name)
        sendAction(AirOta.success(subAction: AirOta.requestSendFile))
        kickSend()
    }

    private func kickSend() {
        guard sender == nil, !finished else { return }
        while let name = pendingNames.first {
            pendingNames.removeFirst()
            if transferred.contains(name) { continue }
            guard let file = byName[name] else { continue }
            startSend(file)
            return
        }
        if transferred.count >= files.count {
            beginInstallWait()
        }
    }

    private func startSend(_ file: OtaFile) {
        progress(transferFraction(), "Sending \(file.fileName)…")
        let already = sentBytes
        let sender = ShareSender(
            file: file, scheduler: scheduler,
            sendShare: sendShare,
            onProgress: { [weak self] done, _ in
                guard let self else { return }
                self.sentBytes = already + done
                self.progress(self.transferFraction(),
                              "Sending \(file.fileName)… \(self.sentBytes)/\(self.totalBytes) B")
            },
            onDone: { [weak self] result in
                guard let self else { return }
                self.sender = nil
                switch result {
                case .success:
                    self.transferred.insert(file.fileName)
                    self.sentBytes = already + file.fileSize
                    self.kickSend()
                case .failure(let error):
                    self.fail(error.localizedDescription)
                }
            })
        self.sender = sender
        sender.start()
    }

    private func beginInstallWait() {
        guard !finished else { return }
        progress(0.5, "Files on the glasses — waiting for install…")
        resultDeadline = Date().addingTimeInterval(Self.resultTimeout)
        pollResult()
    }

    private func pollResult() {
        guard !finished else { return }
        if let deadline = resultDeadline, Date() > deadline {
            fail("no install result from the glasses")
            return
        }
        sendAction(AirOta.buildGetResult())
        resultTimer.schedule(on: scheduler, after: Self.resultPollInterval) { [weak self] in
            self?.pollResult()
        }
    }

    private func transferFraction() -> Double {
        guard totalBytes > 0 else { return 0.5 }
        return 0.5 * min(1, Double(sentBytes) / Double(totalBytes))
    }

    private func progress(_ fraction: Double, _ message: String) {
        notify(.firmwareUpdateProgress(fraction: min(1, max(0, fraction)), message: message))
    }

    private func succeed(romVersion: String, message: String) {
        guard !finished else { return }
        finished = true
        cancelTimers()
        let msg = message.isEmpty ? "success" : message
        SdkLog.log("firmware update finished rom=\(romVersion.isEmpty ? "-" : romVersion) \(msg)")
        notify(.firmwareUpdateFinished(success: true, romVersion: romVersion, message: msg))
        onFinished()
    }

    private func fail(_ reason: String) {
        guard !finished else { return }
        finished = true
        cancelTimers()
        sender = nil
        SdkLog.warn("firmware update failed: \(reason)")
        notify(.firmwareUpdateFinished(success: false, romVersion: "", message: reason))
        onFinished()
    }

    private func cancelTimers() {
        openTimer.cancel()
        requestTimer.cancel()
        resultTimer.cancel()
    }
}
