import Foundation

/// One firmware image the glasses will ask for by exact `fileName`.
///
/// Star Air OTA only accepts `platform_tester.bin` and `best1600_watch_bth.bin`;
/// any other name comes back as `ota unsupported file name`.
public struct OtaFile {
    public let fileName: String
    public let data: Data
    public let md5: String

    public init(fileName: String, data: Data, md5: String? = nil) {
        self.fileName = fileName
        self.data = data
        self.md5 = md5 ?? ShareReceiver.md5Hex(data)
    }

    public var fileSize: Int { data.count }
}

/// The launcher `air_ota` action family used by Star Air firmware update.
///
/// Envelope (GlassMessageHelper.d):
/// `{"action":"air_ota","data":{"action":"<sub>","value":"<string>"}}`
///
/// `value` is a JSON **string** (Gson `BaseActionValue.value`), not a nested
/// object — the same trap as `GlassScreenshot.request`. Replies to a glasses
/// request reuse that request's sub-action.
public enum AirOta {
    public static let action = "air_ota"

    public static let openUpdateApp = "open_air_glass_update_app"
    public static let updateAppReady = "air_glass_update_app_ready"
    public static let syncFileInfo = "sync_air_update_file_info"
    public static let requestSendFile = "request_send_air_update_file"
    public static let requestSyncFileInfo = "request_sync_air_update_file_info"
    public static let syncProgress = "sync_air_glass_update_progress"
    public static let syncResult = "sync_air_glass_update_result"
    public static let getResult = "get_air_glass_update_result"
    public static let showDialog = "show_air_glass_update_dialog"
    public static let dialogResult = "sync_air_glass_update_dialog_result"
    public static let checkingBusiness = "sync_air_glass_checking_business"
    public static let queryState = "query_air_glass_update_state"

    public static let m55Name = "platform_tester.bin"
    public static let bthName = "best1600_watch_bth.bin"

    public static func files(fromZip data: Data) throws -> [OtaFile] {
        let entries = try ZipArchive.entries(from: data)
        var files: [OtaFile] = []
        for name in [bthName, m55Name] {
            guard let blob = entries[name] else {
                throw MyvuError.notFound("the pack is missing \(name)")
            }
            files.append(OtaFile(fileName: name, data: blob))
        }
        return files
    }

    /// `{"action":"air_ota","data":{"action":<sub>,"value":<string>}}`
    public static func envelope(subAction: String, value: String = "") -> String {
        var data = JsonObject()
        data.put("action", subAction)
        data.put("value", value)
        var env = JsonObject()
        env.put("action", action)
        env.put("data", data)
        return env.serialized()
    }

    public static func success(subAction: String) -> String {
        envelope(subAction: subAction, value: responseJSON(code: 0, msg: "success"))
    }

    public static func fail(subAction: String, msg: String) -> String {
        envelope(subAction: subAction, value: responseJSON(code: 1, msg: msg))
    }

    /// Gson `UpdateFileInfo` list: only `fileName` + numeric `fileSize`.
    public static func fileInfoListValue(_ files: [OtaFile]) -> String {
        let items: [JsonValue] = files.map { file in
            var o = JsonObject()
            o.put("fileName", file.fileName)
            o.put("fileSize", Int64(file.fileSize))
            return .object(o)
        }
        return JsonValue.array(items).serialized()
    }

    public static func buildSyncFileInfo(_ files: [OtaFile]) -> String {
        envelope(subAction: syncFileInfo, value: fileInfoListValue(files))
    }

    public static func buildReplyFileInfo(_ files: [OtaFile]) -> String {
        envelope(subAction: requestSyncFileInfo, value: fileInfoListValue(files))
    }

    public static func buildOpen() -> String {
        envelope(subAction: openUpdateApp)
    }

    public static func buildGetResult() -> String {
        envelope(subAction: getResult)
    }

    public static func responseJSON(code: Int, msg: String) -> String {
        var o = JsonObject()
        o.put("code", code)
        o.put("msg", msg)
        return o.serialized()
    }

    public static func parseResponse(_ value: String) -> (code: Int, msg: String)? {
        guard let obj = JsonReader(parsing: value) else { return nil }
        return (obj.optInt("code", -1), obj.optString("msg"))
    }

    public static func parseResult(_ value: String) -> (code: Int, msg: String, romVersion: String)? {
        guard let obj = JsonReader(parsing: value) else { return nil }
        return (obj.optInt("code", -1), obj.optString("msg"), obj.optString("romVersion"))
    }

    public static func parseFileName(_ value: String) -> String? {
        if let obj = JsonReader(parsing: value) {
            let name = obj.optString("fileName")
            return name.isEmpty ? nil : name
        }
        return nil
    }

    /// Pulls `data.action` / `data.value` out of an inbound `air_ota` object.
    /// `value` is usually a string; some glasses builds embed an object.
    public static func parseInbound(_ msg: JsonReader) -> (subAction: String, value: String)? {
        guard msg.optString("action") == action else { return nil }
        guard let data = msg.optObject("data") else { return nil }
        let sub = data.optString("action")
        guard !sub.isEmpty else { return nil }
        if let nested = data.optObject("value"),
           JSONSerialization.isValidJSONObject(nested.raw),
           let bytes = try? JSONSerialization.data(withJSONObject: nested.raw),
           let text = String(data: bytes, encoding: .utf8) {
            return (sub, text)
        }
        return (sub, data.optString("value"))
    }
}
