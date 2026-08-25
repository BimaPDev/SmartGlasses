import Foundation

/// Rebuilds one logical message from a control packet plus its data fragments.
public final class BleReassembler {
    private var frameCount = 0
    private var currentPkgType = -1
    /// The MIX_CTR first chunk, which precedes fragment 1.
    private var header = Data()
    private var frames: [Int: Data] = [:]
    private var active = false

    public init() {}

    public func reset() {
        frameCount = 0
        currentPkgType = -1
        header = Data()
        frames.removeAll()
        active = false
    }

    public func start(frameCount: Int, pkgType: Int, header: Data = Data()) {
        reset()
        self.frameCount = frameCount
        self.currentPkgType = pkgType
        self.header = header
        self.active = true
    }

    public var pkgType: Int { currentPkgType }

    public var isActive: Bool {
        get { active }
        set { active = newValue }
    }

    /// Adds a fragment; returns the complete message once all have arrived.
    public func add(seq: Int, payload: Data) -> Data? {
        frames[seq] = payload
        guard frameCount > 0, frames.count >= frameCount else { return nil }

        var out = header
        // Fragments are 1-indexed and must be concatenated in sequence order,
        // not arrival order: BLE delivery order is not guaranteed.
        for i in 1 ... frameCount {
            if let f = frames[i] { out += f }
        }
        active = false
        return out
    }
}
