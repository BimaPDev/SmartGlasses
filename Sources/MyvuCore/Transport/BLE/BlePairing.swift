import Foundation

/// Version negotiation plus the ECDH bond, on the BLE link/pairing
/// characteristic.
///
/// Sequence:
///  1. version negotiation — FAST_CTR pkgType 17, JSON `{"i","v","e","m","b","c"}`;
///     the reply chooses the AES mode
///  2. WRITE_SWITCH_KEY — SinglePacket pkgType 16, our SPKI public key
///  3. ← WRITE_SWITCH_KEY — glasses' pubkey ‖ IV + AES(their DeviceInfo)
///  4. WRITE_SWITCH_INFO — our double-encrypted DeviceInfo; bond established
///
/// There is no certificate or signature check anywhere in this handshake: any
/// client that speaks the protocol correctly is accepted.
///
/// Each step continues from the previous one's callback, all on the connection
/// scheduler.
public final class BlePairing {
    // Values taken from the captured phone handshake.
    private static let connectVersion = 3
    private static let bleVersion = 2
    /// Encryption bitmask we advertise as supported ("e").
    private static let ownEncryptSupport = 5

    /// Bounds the whole bond. Each step waits on a reply that may simply never
    /// arrive — an unexpected LinkProtocol cmd, for instance, would otherwise
    /// leave us parked in `awaitKeyReply` forever with no error and no retry.
    private static let pairingTimeout: TimeInterval = 20

    public struct Result {
        public let glasses: DeviceInfo
        public let sharedSecret: Data
        public let iv: Data
        public let encryptMode: Int
    }

    private enum Step {
        case idle, awaitVersion, awaitKeyReply, done
    }

    private let channel: BleMessageChannel
    private let scheduler: Scheduler
    private let ownId: Data
    private let ownMac: String
    private let deviceName: String
    private let categoryId: String
    private let btStatus: Int
    private let onPaired: (Result) -> Void
    private let onFailed: (String) -> Void

    private var keyPair: EcKeyPair?
    private var sharedSecret = Data()
    private var iv = Data()
    private var encryptMode = StarryCrypto.symmetricV3Gcm
    private var step = Step.idle
    /// Set once an outcome has been reported, so a late ACK or the timeout
    /// cannot report a second one.
    private var settled = false
    private let timeoutTimer = TimerSlot()

    public init(channel: BleMessageChannel, scheduler: Scheduler, ownId: Data, ownMac: String,
                deviceName: String, categoryId: String, btStatus: Int,
                onPaired: @escaping (Result) -> Void, onFailed: @escaping (String) -> Void) {
        self.channel = channel
        self.scheduler = scheduler
        self.ownId = ownId
        self.ownMac = ownMac
        self.deviceName = deviceName
        self.categoryId = categoryId
        self.btStatus = btStatus
        self.onPaired = onPaired
        self.onFailed = onFailed
    }

    // MARK: - Step 1: version negotiation

    public func start() {
        var own = JsonObject()
        own.put("i", Hex.encode(ownId))
        own.put("v", BlePairing.connectVersion)
        own.put("e", BlePairing.ownEncryptSupport)
        own.put("m", 512)
        own.put("b", BlePairing.bleVersion)
        own.put("c", categoryId)

        step = .awaitVersion
        armTimeout()
        SdkLog.log("-> version negotiation \(own.serialized())")
        channel.sendFast(Data(own.serialized().utf8), pkgType: BlePackets.pkgStarryDataInit)
    }

    /// Feed every message from the internal characteristic here during pairing.
    /// Returns false when the message is not ours, so the caller can route it on.
    @discardableResult
    public func onInternalMessage(_ payload: Data) -> Bool {
        switch step {
        case .awaitVersion:
            handleVersionReply(payload)
            return true
        case .awaitKeyReply:
            handleKeyReply(payload)
            return true
        case .idle, .done:
            return false
        }
    }

    private func handleVersionReply(_ payload: Data) {
        guard let peer = JsonReader(parsing: payload.scannableText) else {
            failed("unparseable version reply: \(payload.scannableText)")
            return
        }
        // The peer chooses the symmetric mode: 1=CBC, 2=CTR, else GCM.
        encryptMode = peer.optInt("e", StarryCrypto.symmetricV3Gcm)
        SdkLog.log("<- version reply \(payload.scannableText) "
            + "(AES mode \(StarryCrypto.modeName(encryptMode)))")
        exchangeKeys()
    }

    // MARK: - Step 2: our public key

    private func exchangeKeys() {
        let pair = EcKeyPair()
        keyPair = pair

        let wsk = LinkProtocol.writeSwitchKey(key: pair.publicSpkiDer, info: ownId)
        let msg = LinkProtocol.build(identifier: ownId, cmd: LinkCommands.writeSwitchKey,
                                     data: wsk)

        step = .awaitKeyReply
        SdkLog.log("-> WRITE_SWITCH_KEY (\(msg.count)B)")
        channel.sendSingleAcked(msg, pkgType: BlePackets.pkgStarryData) { [weak self] status in
            guard status != BlePackets.ackSuccess else { return }
            self?.failed("key write was not acked (status=\(status))")
        }
    }

    // MARK: - Step 3: their key and DeviceInfo

    private func handleKeyReply(_ payload: Data) {
        let reply = LinkProtocol.parse(payload)
        guard reply.cmd == LinkCommands.writeSwitchKey else {
            // Not the reply we are waiting for; ignore and keep waiting.
            SdkLog.trace("ignoring LinkProtocol cmd=\(reply.cmd) during pairing")
            return
        }

        let (keyField, encryptedInfo) = LinkProtocol.parseWriteSwitchKey(reply.data)
        guard keyField.count > 16 else {
            failed("key field too short (\(keyField.count)B)")
            return
        }

        // key field = peer SPKI public key ‖ 16-byte IV
        let peerPub = keyField.prefix(keyField.count - 16)
        iv = Data(keyField.suffix(16))

        do {
            guard let keyPair else {
                failed("no local key pair")
                return
            }
            sharedSecret = try keyPair.sharedSecret(peerSpkiDer: Data(peerPub))
            SdkLog.log("ECDH shared secret derived (\(sharedSecret.count)B)")

            // Decrypting their DeviceInfo is the proof the whole stack is right.
            let infoBytes = try StarryCrypto.decrypt(encryptedInfo, key: sharedSecret, iv: iv,
                                                     mode: encryptMode)
            let glasses = DeviceInfo.parse(infoBytes)
            SdkLog.log("<- Glasses: \(glasses)")
            sendOwnDeviceInfo(glasses)
        } catch {
            failed("key exchange failed (\(error)). A garbled DeviceInfo here usually means "
                + "the negotiated AES mode or the SPKI encoding is wrong.")
        }
    }

    // MARK: - Step 4: our DeviceInfo

    private func sendOwnDeviceInfo(_ glasses: DeviceInfo) {
        do {
            let info = DeviceInfo.build(btMac: ownMac.uppercased(), companyId: "",
                                        categoryId: categoryId, modelId: "", name: deviceName,
                                        battery: 100, btStatus: btStatus)

            // Double encryption, per generateDeviceInfoSwitchData(): the inner
            // DeviceInfo is encrypted, wrapped in WriteSwitchInfo, then the whole
            // wrapper is encrypted again.
            let inner = try StarryCrypto.encrypt(info, key: sharedSecret, iv: iv,
                                                 mode: encryptMode)
            let wsi = LinkProtocol.writeSwitchInfo(info: inner)
            let outer = try StarryCrypto.encrypt(wsi, key: sharedSecret, iv: iv,
                                                 mode: encryptMode)
            let msg = LinkProtocol.build(identifier: ownId,
                                         cmd: LinkCommands.writeSwitchInfo, data: outer)

            SdkLog.log("-> WRITE_SWITCH_INFO (\(msg.count)B)")
            step = .done
            let result = Result(glasses: glasses, sharedSecret: sharedSecret, iv: iv,
                                encryptMode: encryptMode)
            channel.sendSingleAcked(msg, pkgType: BlePackets.pkgStarryData) { [weak self] status in
                guard let self else { return }
                guard status == BlePackets.ackSuccess else {
                    self.failed("info write was not acked (status=\(status))")
                    return
                }
                guard !self.settled else { return }
                self.settled = true
                self.timeoutTimer.cancel()
                SdkLog.log("BLE bond established")
                self.onPaired(result)
            }
        } catch {
            failed("could not send our DeviceInfo: \(error)")
        }
    }

    // MARK: - Helpers

    private func armTimeout() {
        timeoutTimer.schedule(on: scheduler, after: BlePairing.pairingTimeout) { [weak self] in
            guard let self else { return }
            self.failed("timed out after \(Int(BlePairing.pairingTimeout))s waiting at "
                + "step \(self.step)")
        }
    }

    private func failed(_ reason: String) {
        guard !settled else { return }
        settled = true
        step = .done
        timeoutTimer.cancel()
        onFailed(reason)
    }

    /// Cancels the pending timeout when the connection is torn down externally.
    public func cancel() {
        settled = true
        step = .done
        timeoutTimer.cancel()
    }
}
