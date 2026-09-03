import Foundation

/// `AIR_FUNCTION` — the glasses asking the PHONE to look something up.
///
/// This is the missing half of caller ID. An incoming call reaches the glasses
/// over classic Bluetooth as an HFP `+CLIP`, which carries the digits and
/// nothing else, so the glasses turn round and ask the phone who the number
/// belongs to. The official Android app answers from the address book
/// (`AirFunctionHelper`); an SDK that never answers leaves the lens showing
/// "Unknown" next to the number.
///
/// Request (glasses → phone), captured off a real incoming call:
/// ```
/// {"value":{"functionName":"QUERY_CONTACT_ADDRESS","requestId":"000",
///  "param":{"phoneNo":"+15551234567"},
///  "targetPackage":"com.upuphone.star.launcher"}}
/// ```
///
/// NOTE THE ASYMMETRY, which cost a round of debugging: the glasses wrap the
/// REQUEST in `value`, while the reply the official app sends back wraps the
/// result in `data`. The two are not the same key, and a parser that only knows
/// `data` sees nothing at all. The outer `action` may also be absent from the
/// JSON — it rides the relay envelope — so it is checked only when present.
///
/// Reply (phone → glasses, addressed to the request's `targetPackage`):
/// ```
/// {"action":"AIR_FUNCTION","data":{"code":200,"data":{"displayName":"Ada"},
///  "functionName":"QUERY_CONTACT","msg":"成功","requestId":"…"}}
/// ```
///
/// The `requestId` MUST be echoed — it is how the glasses match the answer to
/// the call they are showing.
public enum AirFunction {
    public static let action = "AIR_FUNCTION"

    /// `AirFunction` in the official app. Every one takes a `phoneNo` param.
    public enum Name {
        /// Number → contact name. This is the one an incoming call sends.
        public static let queryContact = "QUERY_CONTACT"
        /// Number → region/carrier string.
        public static let queryAddress = "QUERY_ADDRESS"
        /// Both at once.
        public static let queryContactAddress = "QUERY_CONTACT_ADDRESS"
    }

    /// `AirResultModel`'s defaults, which are what a SUCCESS looks like. The
    /// official app only departs from them to report a failure, where it sets
    /// `code` to 0 and puts a reason in `msg`.
    public static let codeSuccess = 200
    public static let codeFailure = 0
    /// "success" — the literal default string the app ships, kept because the
    /// glasses may well compare against it.
    public static let msgSuccess = "成功"

    /// One inbound lookup request.
    public struct Request: Equatable, Sendable {
        public let functionName: String
        public let requestId: String
        /// The number to resolve, exactly as the glasses sent it. It arrives in
        /// whatever format the network gave them — usually E.164, but do not
        /// count on it.
        public let phoneNumber: String
        /// Where the answer has to go. NOT the launcher: the glasses name the
        /// package that asked, and replying anywhere else is a silent no-op.
        public let targetPackage: String

        public var wantsName: Bool {
            functionName == Name.queryContact || functionName == Name.queryContactAddress
        }

        public var wantsAddress: Bool {
            functionName == Name.queryAddress || functionName == Name.queryContactAddress
        }
    }

    /// Recognises an inbound `AIR_FUNCTION` request.
    ///
    /// Returns nil for anything else, INCLUDING our own replies — those carry
    /// `code`/`data` rather than `param`, so a reply can never be mistaken for a
    /// fresh request and answered again.
    public static func parseRequest(_ msg: JsonReader) -> Request? {
        // The action is only present on some paths; reject a mismatch, but do
        // not require the key.
        let declared = msg.optString("action")
        guard declared.isEmpty || declared == action else { return nil }
        // `value` is what the glasses actually send; `data` is kept because it
        // is what the official app's own helper emits.
        guard let data = msg.optObject("value") ?? msg.optObject("data") else {
            return nil
        }
        let functionName = data.optString("functionName")
        guard functionName.hasPrefix("QUERY_") else { return nil }
        // A reply has no `param`; only a request does.
        guard let param = data.optObject("param") else { return nil }
        let phoneNumber = param.optString("phoneNo")
        guard !phoneNumber.isEmpty else { return nil }
        return Request(functionName: functionName,
                       requestId: data.optString("requestId"),
                       phoneNumber: phoneNumber,
                       targetPackage: data.optString("targetPackage"))
    }

    /// Builds the answer.
    ///
    /// Which keys ship is decided by the FUNCTION, not by what we managed to
    /// resolve. `AirFunctionHelper` always writes every key its function
    /// promises — `ContactHelper.d` returns `""` when it cannot geocode and the
    /// key still goes out, and `ContactHelper.c` falls back to the number
    /// itself when there is no matching contact. A `QUERY_CONTACT_ADDRESS`
    /// answer missing `geo` is a half-answer, and the glasses appear to discard
    /// it rather than use the half that is there.
    ///
    /// - Parameters:
    ///   - displayName: the resolved contact name. When nil, the number is sent
    ///     back as the name, which is what the official app does.
    ///   - address: the region string. When nil an empty one is sent, again
    ///     matching the official app.
    public static func reply(to request: Request, displayName: String? = nil,
                             address: String? = nil) -> String {
        var payload = JsonObject()
        if request.wantsAddress {
            payload.put("geo", address ?? "")
        }
        if request.wantsName {
            let resolved = displayName.flatMap { $0.isEmpty ? nil : $0 }
            payload.put("displayName", resolved ?? request.phoneNumber)
        }

        // Field order follows the AirResultModel declaration.
        var data = JsonObject()
        data.put("code", codeSuccess)
        data.put("data", payload)
        data.put("functionName", request.functionName)
        data.put("msg", msgSuccess)
        data.put("requestId", request.requestId)

        var out = JsonObject()
        out.put("action", action)
        out.put("data", data)
        return out.serialized()
    }

    /// The failure shape, for a request we cannot answer — no contacts
    /// permission, say. Sending it beats silence: the glasses stop waiting and
    /// fall back to showing the number.
    public static func failure(to request: Request, message: String) -> String {
        var data = JsonObject()
        data.put("code", codeFailure)
        data.put("data", JsonObject())
        data.put("functionName", request.functionName)
        data.put("msg", message)
        data.put("requestId", request.requestId)

        var out = JsonObject()
        out.put("action", action)
        out.put("data", data)
        return out.serialized()
    }
}
