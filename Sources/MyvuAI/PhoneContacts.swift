import Foundation
import MyvuCore

/// The glasses' Phone page — pushing a contact list to `Pages/Phone`.
///
/// Recovered from `PhoneCallDelegate.a()` in the official app, which builds a
/// `PhoneBusinessData` and hands it to `Communicator.a(BusinessDataType.PHONE,
/// …)` → `Communicator.b(103, BusinessData(type, data))`. So the envelope is the
/// ordinary assistant `{"code":…,"payload":…}` with a business-data wrapper
/// inside it:
///
/// ```
/// {"code":103,"payload":{"data":{…PhoneBusinessData…},"dataType":"PHONE"}}
/// ```
///
/// The firmware side is `ContactController.cpp`, which logs
/// `[PhonePage][Info] phone contact list json data: %s` and rejects anything
/// whose `contactSingleInfo` is not a JSON ARRAY
/// (`[PhonePage][Error] Contact list is not json array`).
///
/// WHAT THIS IS NOT: the incoming-caller display. That is driven by
/// `HFP_CALLER_IND_EVT` off the classic-Bluetooth link and resolves names from a
/// phonebook the iPhone will not expose. This list feeds the picker the wearer
/// chooses from, not caller ID.
public enum PhoneContacts {
    /// `Communicator.a` wraps every business payload in code 103.
    public static let codeBusinessData = 103
    /// `BusinessDataType.PHONE`. Gson writes an enum as its NAME, so this is the
    /// literal string on the wire.
    public static let dataTypePhone = "PHONE"

    // MARK: - PhoneBusinessData.type

    /// Several people matched — the wearer picks a person.
    public static let typeContactPicker = 1
    /// One person with several numbers — the wearer picks a number.
    public static let typeNumberPicker = 2
    /// The request failed; `failType` says why.
    public static let typeFailure = 5

    /// Which SIM the selection should dial with. The official app passes
    /// `"first"` or `"second"` straight through from the voice request, and an
    /// iPhone has one active line as far as this page is concerned.
    public static let cardTypeFirst = "first"
    public static let cardTypeSecond = "second"

    /// One row of `contactSingleInfo`.
    ///
    /// Field names are the Kotlin bean's, unchanged: Gson had no
    /// `@SerializedName` on `ContactSingleInfo`, so the property names ARE the
    /// wire names. `lookup` and `contactId` are Android address-book handles;
    /// on iOS the `CNContact` identifier stands in for `contactId` and `lookup`
    /// is left out rather than filled with something the glasses cannot use.
    public struct Entry: Equatable, Sendable {
        public var name: String
        public var phoneNumber: String
        public var contactId: String
        public var company: String

        public init(name: String, phoneNumber: String, contactId: String = "",
                    company: String = "") {
            self.name = name
            self.phoneNumber = phoneNumber
            self.contactId = contactId
            self.company = company
        }

        /// A person with several numbers becomes several entries — that is how
        /// `PhoneCallDelegate` flattens them, one row per number.
        var json: JsonObject {
            var out = JsonObject()
            if !company.isEmpty { out.put("company", company) }
            if !contactId.isEmpty { out.put("contactId", contactId) }
            out.put("name", PhoneContacts.trim(name))
            out.put("phoneNumber", phoneNumber)
            return out
        }
    }

    /// The lens renders one short row per contact, and the glasses have shown
    /// themselves fragile about control characters in pushed text.
    static func trim(_ s: String, max: Int = 64) -> String {
        let flat = s.unicodeScalars
            .map { $0.value < 0x20 ? " " : Character($0) }
            .prefix(max)
        return String(flat).trimmingCharacters(in: .whitespaces)
    }

    /// Builds the contact-list push.
    ///
    /// - Parameters:
    ///   - entries: one row per name/number pair. The glasses render these as a
    ///     wheel, so a whole address book is neither useful nor cheap to send —
    ///     see `MyvuClient.sendPhoneContacts` for the cap.
    ///   - type: `typeContactPicker` when the rows are different people,
    ///     `typeNumberPicker` when they are one person's numbers.
    ///   - cardType: which SIM a selection dials with.
    public static func buildList(_ entries: [Entry],
                                 type: Int = typeContactPicker,
                                 cardType: String = cardTypeFirst) -> String {
        // Field order follows the PhoneBusinessData declaration, and the unset
        // fields (contactName, failType, phoneNumber, simCardBean) are omitted
        // exactly as Gson omits nulls.
        var data = JsonObject()
        data.put("cardType", cardType)
        data.put("contactSingleInfo", .array(entries.map { .object($0.json) }))
        // The bean is `isMultipleWheel`, and that is the name Gson writes.
        data.put("isMultipleWheel", true)
        data.put("type", type)

        var payload = JsonObject()
        payload.put("data", data)
        payload.put("dataType", dataTypePhone)

        var out = JsonObject()
        out.put("code", codeBusinessData)
        out.put("payload", payload)
        return out.serialized()
    }
}

public extension MyvuClient {
    /// Pushes a contact list to the glasses' Phone page.
    ///
    /// UNVERIFIED AGAINST HARDWARE. The official app only ever sends this in the
    /// middle of a voice call-request, so the page may expect the assistant
    /// scene to be open already; sent cold it may simply be dropped. The wire
    /// shape is recovered exactly, so what is uncertain is the timing, not the
    /// JSON.
    ///
    /// - Parameter limit: rows are capped because the whole list travels as one
    ///   JSON blob over BLE, and a full address book is both slow to push and
    ///   useless on a wheel the wearer scrolls.
    func sendPhoneContacts(_ entries: [PhoneContacts.Entry],
                           type: Int = PhoneContacts.typeContactPicker,
                           limit: Int = 100) {
        let capped = Array(entries.prefix(limit))
        guard !capped.isEmpty else { return }
        sendAction(PhoneContacts.buildList(capped, type: type),
                   targetPkg: AiProtocol.pkg, sourcePkg: AiProtocol.pkg)
    }
}
