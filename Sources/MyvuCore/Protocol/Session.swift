import Foundation

public struct AbilityReply {
    public let deviceId: String
    public let authBeanJson: String?
}

/// The RunAsOne ability/AUTH handshake.
///
/// After the ECDH bond the glasses stay parked on "Open MYVU AR App" until they
/// get this. Both phases are required: AUTH (type 0), then AUTH_SUCCESS
/// (type 12) — without the second one the glasses ACK our data but never engage
/// the app layer.
public enum Session {
    public static let authClassByte: UInt8 = 0x02
    public static let streamAuth = 0
    public static let streamAuthSuccess = 12

    /// Values taken verbatim from the captured phone handshake.
    public static let defaultVersion = "2.40.51"
    public static let defaultWeight = 233_333

    private static func abilityAttributesJson() -> JsonObject {
        var relayInner = JsonObject()
        relayInner.put("isSupportMapping", false)
        relayInner.put("metaInfo", .array([]))
        relayInner.put("metaMap", JsonObject())

        var relay = JsonObject()
        relay.put("agreementType", 0)
        relay.put("json", relayInner.serialized())
        relay.put("supportTlv", true)

        var airMapping = JsonObject()
        airMapping.put("1", "com.upuphone.star.launcher")
        airMapping.put("2", "com.upuphone.thanos.sdk_test")
        var airInner = JsonObject()
        airInner.put("airMapping", airMapping)

        var air = JsonObject()
        air.put("agreementType", 0)
        air.put("json", airInner.serialized())
        air.put("supportTlv", true)

        var out = JsonObject()
        out.put("abilityRelay", relay.serialized())
        out.put("abilityAir", air.serialized())
        return out
    }

    public static func buildAuthBean(deviceIdHex: String, deviceName: String, session: String,
                                     version: String = defaultVersion,
                                     weight: Int = defaultWeight) -> JsonObject {
        var wrapper = JsonObject()
        wrapper.put("abilityAttributes", abilityAttributesJson())

        var bean = JsonObject()
        bean.put("ability", .array([
            .string("abilityRelay"), .string("abilityRelayBypass"),
            .string("abilityAir"), .string("abilityShare"),
        ]))
        bean.put("abilityAttributes", wrapper)
        bean.put("agreementType", 0)
        bean.put("deviceId", deviceIdHex)
        bean.put("deviceName", deviceName)
        bean.put("session", session)
        bean.put("supportTlv", true)
        bean.put("supportVirtual", false)
        bean.put("version", version)
        bean.put("weight", weight)
        return bean
    }

    private static func buildStreamReq(streamType: Int, deviceIdHex: String,
                                       deviceName: String, session: String,
                                       nowMs: Int64) -> Data {
        let bean = buildAuthBean(deviceIdHex: deviceIdHex, deviceName: deviceName,
                                 session: session)
        let beanJson = Data(bean.serialized().utf8)
        let ts = Data("timestamp-\(nowMs)".utf8)

        var body = Data()
        if streamType != 0 {
            body += Pb.varintField(1, UInt64(streamType))
        }
        body += Pb.bytes(3, Data(deviceIdHex.utf8))
        body += Pb.bytes(4, beanJson)
        body += Pb.bytes(7, Data("1.2".utf8))
        body += Pb.bytes(9, ts)
        if streamType == streamAuthSuccess {
            body += Pb.varintField(12, UInt64(nowMs))
        }
        return Data([authClassByte]) + body
    }

    /// Phase 1: StreamReq type=AUTH, the initial ability handshake.
    public static func buildAbilityMessage(deviceIdHex: String, deviceName: String,
                                           session: String,
                                           nowMs: Int64 = Session.nowMillis()) -> Data {
        buildStreamReq(streamType: streamAuth, deviceIdHex: deviceIdHex,
                       deviceName: deviceName, session: session, nowMs: nowMs)
    }

    /// Phase 2: StreamReq type=AUTH_SUCCESS, sent after the glasses reply.
    public static func buildAuthSuccessMessage(deviceIdHex: String, deviceName: String,
                                                session: String,
                                                nowMs: Int64 = Session.nowMillis()) -> Data {
        buildStreamReq(streamType: streamAuthSuccess, deviceIdHex: deviceIdHex,
                       deviceName: deviceName, session: session, nowMs: nowMs)
    }

    public static func parseAbilityReply(_ payload: Data) -> AbilityReply {
        let body: Data = (payload.first == authClassByte)
            ? payload.subdata(in: (payload.startIndex + 1) ..< payload.endIndex)
            : payload
        let fields = Pb.parse(body)
        let bean = Pb.first(fields, 4)
        return AbilityReply(
            deviceId: Pb.firstString(fields, 3, ""),
            authBeanJson: bean.flatMap { $0.isVarint ? nil : $0.asString }
        )
    }

    public static func nowMillis() -> Int64 {
        Int64(Date().timeIntervalSince1970 * 1000)
    }
}
