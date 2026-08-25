import Foundation

/// `DeviceInfo{1:btMac, 2:companyId, 3:categoryId, 4:modelId, 5:name,
/// 6:battery, 7:btStatus}` — the payload each side sends inside
/// `WRITE_SWITCH_INFO`, AES-encrypted with the ECDH-derived key.
///
/// Successfully decoding the glasses' DeviceInfo is the end-to-end proof that
/// the whole BLE + protobuf + ECDH + AES stack is correct.
public struct DeviceInfo: Equatable, Sendable {
    public let btMac: String
    public let companyId: String
    public let categoryId: String
    public let modelId: String
    public let name: String
    public let battery: Int
    public let btStatus: Int

    public init(btMac: String, companyId: String, categoryId: String, modelId: String,
                name: String, battery: Int, btStatus: Int) {
        self.btMac = btMac
        self.companyId = companyId
        self.categoryId = categoryId
        self.modelId = modelId
        self.name = name
        self.battery = battery
        self.btStatus = btStatus
    }

    /// Zero-valued battery/btStatus are omitted from the wire.
    public static func build(btMac: String, companyId: String, categoryId: String,
                             modelId: String, name: String, battery: Int,
                             btStatus: Int) -> Data {
        var out = Pb.string(1, btMac)
        out += Pb.string(2, companyId)
        out += Pb.string(3, categoryId)
        out += Pb.string(4, modelId)
        out += Pb.bytes(5, Data(name.utf8))
        if battery != 0 { out += Pb.varintField(6, UInt64(battery)) }
        if btStatus != 0 { out += Pb.varintField(7, UInt64(btStatus)) }
        return out
    }

    public static func parse(_ raw: Data) -> DeviceInfo {
        let f = Pb.parse(raw)
        return DeviceInfo(
            btMac: Pb.firstString(f, 1),
            companyId: Pb.firstString(f, 2),
            categoryId: Pb.firstString(f, 3),
            modelId: Pb.firstString(f, 4),
            name: Pb.firstString(f, 5),
            battery: Int(Pb.firstVarint(f, 6, 0)),
            btStatus: Int(Pb.firstVarint(f, 7, 0))
        )
    }
}

extension DeviceInfo: CustomStringConvertible {
    public var description: String {
        "\(name) (\(btMac), battery \(battery)%, model \(modelId))"
    }
}
