import CoreBluetooth
import Foundation

/// GATT UUIDs for the MYVU / StarryNet BLE protocol.
///
/// `CBUUID` compares equal across its 16-bit and full 128-bit Bluetooth-base
/// forms, so characteristics discovered on the device match these regardless of
/// which representation CoreBluetooth reports.
public enum Uuids {
    /// `UUIDUtils.makeUUID(i)` → `0000{i:04x}-0000-1000-8000-00805f9b34fb`.
    public static func make(_ i: Int) -> CBUUID {
        CBUUID(string: String(format: "%04X", i))
    }

    /// Spells out the full 128-bit form, which `CBUUID.uuidString` abbreviates
    /// for Bluetooth-base UUIDs. Used for logs and assertions.
    public static func fullString(_ i: Int) -> String {
        String(format: "0000%04x-0000-1000-8000-00805f9b34fb", i)
    }

    /// `STARRY_NET_SERVICE_UUID` = makeUUID(3025) → 00000bd1-…
    public static let service = make(3025)
    /// The UUID the official app filters its scan on (0x0bd3). Some firmware
    /// advertises this rather than the GATT service UUID.
    public static let advertisedService = make(0x0BD3)

    // "Air" glasses characteristics.
    /// Link/pairing channel: version negotiation and the ECDH handshake.
    public static let airInternal = make(0x2020)
    /// Application data channel: JSON `{"action": …}` messages.
    public static let airExternal = make(0x2021)
    /// High-priority external messages — also carries the 3s heartbeat.
    public static let airUrgent = make(0x2022)
    public static let glassWrite = make(0x2023)

    // "V2" characteristics — other device generations advertise these instead.
    public static let v2Internal = make(0x2010)
    public static let v2External = make(0x2011)
    public static let v2Urgent = make(0x2012)

    /// One (internal, external, urgent) triple.
    public struct ChannelSet {
        public let internalChar: CBUUID
        public let externalChar: CBUUID
        /// Optional: without it there is no heartbeat and the glasses' watchdog
        /// may drop the link.
        public let urgentChar: CBUUID
    }

    /// Preferred triples in priority order. The client probes the connected
    /// device and takes the first whose internal and external characteristics
    /// are both present; the urgent one is optional.
    public static let channelSets: [ChannelSet] = [
        ChannelSet(internalChar: airInternal, externalChar: airExternal, urgentChar: airUrgent),
        ChannelSet(internalChar: v2Internal, externalChar: v2External, urgentChar: v2Urgent),
    ]

    /// Every service the scanner and connector care about.
    public static let scanServices = [advertisedService, service]

    /// Short human name for a characteristic, for the wire log.
    ///
    /// `CBUUID.uuidString` prints Bluetooth-base UUIDs as bare 16-bit hex, which
    /// is unreadable in a trace next to the packet bytes; this names the channel
    /// instead so a capture can be read top to bottom.
    public static func label(_ uuid: CBUUID) -> String {
        switch uuid {
        case airInternal, v2Internal: return "internal"
        case airExternal, v2External: return "external"
        case airUrgent, v2Urgent: return "urgent"
        case glassWrite: return "glassWrite"
        default: return uuid.uuidString
        }
    }
}
