import XCTest
@testable import MyvuAI
@testable import MyvuCore

/// `PHONE_CONTACT_LIST` is a business-data payload nested two levels inside the
/// ordinary assistant envelope, and the firmware rejects the whole message if
/// `contactSingleInfo` is not an array. Both are pinned here.
final class PhoneContactsTests: XCTestCase {
    private func parse(_ json: String) -> JsonReader {
        guard let r = JsonReader(parsing: json) else {
            XCTFail("not parseable: \(json)")
            return JsonReader(raw: [:])
        }
        return r
    }

    /// `TestJson` lives in MyvuCoreTests and is not visible here, so this file
    /// carries the few accessors it needs.
    private func object(_ text: String) -> [String: Any] {
        (try? JSONSerialization.jsonObject(with: Data(text.utf8))) as? [String: Any]
            ?? [:]
    }

    private func nested(_ dict: [String: Any], _ key: String) -> [String: Any] {
        dict[key] as? [String: Any] ?? [:]
    }

    private func string(_ dict: [String: Any], _ key: String) -> String? {
        dict[key] as? String
    }

    private func int(_ dict: [String: Any], _ key: String) -> Int? {
        (dict[key] as? NSNumber)?.intValue
    }

    private func bool(_ dict: [String: Any], _ key: String) -> Bool? {
        (dict[key] as? NSNumber)?.boolValue
    }

    /// `payload.data`, where PhoneBusinessData lives.
    private func businessData(_ json: String) -> [String: Any] {
        nested(nested(object(json), "payload"), "data")
    }

    private func entries() -> [PhoneContacts.Entry] {
        [PhoneContacts.Entry(name: "Ada Lovelace", phoneNumber: "+15551234567",
                             contactId: "ABC-123", company: "Analytical Engines"),
         PhoneContacts.Entry(name: "Grace Hopper", phoneNumber: "+15557654321")]
    }

    func testListUsesTheBusinessDataEnvelopeOnCode103() {
        let m = parse(PhoneContacts.buildList(entries()))
        // Communicator.a wraps every business payload in Communicator.b(103, …).
        XCTAssertEqual(m.optInt("code", -1), 103)
        let payload = m.optObject("payload")
        // Gson writes an enum as its NAME, so this is a bare string.
        XCTAssertEqual(payload?.optString("dataType", ""), "PHONE")
        XCTAssertNotNil(payload?.optObject("data"),
                        "PhoneBusinessData lives under payload.data")
    }

    func testContactSingleInfoIsAnArrayNotAnObject() {
        let json = PhoneContacts.buildList(entries())
        let data = businessData(json)
        let rows = data["contactSingleInfo"] as? [Any]
        // "[PhonePage][Error] Contact list is not json array" is a hard reject.
        XCTAssertNotNil(rows, "contactSingleInfo must be a JSON array")
        XCTAssertEqual(rows?.count, 2)
    }

    func testRowsKeepTheKotlinBeanFieldNames() {
        let json = PhoneContacts.buildList(entries())
        let data = businessData(json)
        let rows = (data["contactSingleInfo"] as? [Any]) ?? []
        let first = rows.first as? [String: Any] ?? [:]
        // ContactSingleInfo had no @SerializedName, so the property names are
        // the wire names — "name", not "contactName".
        XCTAssertEqual(string(first, "name"), "Ada Lovelace")
        XCTAssertEqual(string(first, "phoneNumber"), "+15551234567")
        XCTAssertEqual(string(first, "contactId"), "ABC-123")
        XCTAssertEqual(string(first, "company"), "Analytical Engines")
    }

    /// Gson omits nulls, so a contact with no company must not ship an empty
    /// string where the official app would have sent nothing at all.
    func testEmptyOptionalFieldsAreOmittedRatherThanBlank() {
        let json = PhoneContacts.buildList(entries())
        let data = businessData(json)
        let rows = (data["contactSingleInfo"] as? [Any]) ?? []
        let second = rows.dropFirst().first as? [String: Any] ?? [:]
        XCTAssertNil(second["company"])
        XCTAssertNil(second["contactId"])
        XCTAssertEqual(string(second, "name"), "Grace Hopper")
    }

    func testMultipleWheelKeepsItsIsPrefix() {
        let json = PhoneContacts.buildList(entries())
        let data = businessData(json)
        // The bean field is `isMultipleWheel`; dropping the prefix never binds.
        XCTAssertEqual(bool(data, "isMultipleWheel"), true)
        XCTAssertNil(data["multipleWheel"])
    }

    func testUnsetBusinessFieldsAreOmittedTheWayGsonOmitsNulls() {
        let json = PhoneContacts.buildList(entries())
        let data = businessData(json)
        for absent in ["contactName", "failType", "phoneNumber", "simCardBean"] {
            XCTAssertNil(data[absent], "\(absent) is only set on other card types")
        }
        XCTAssertEqual(string(data, "cardType"), "first")
    }

    func testPickerTypesMatchTheDecompiledConstants() {
        // PhoneCallDelegate: 1 = several people, 2 = one person's numbers.
        XCTAssertEqual(PhoneContacts.typeContactPicker, 1)
        XCTAssertEqual(PhoneContacts.typeNumberPicker, 2)
        let data = businessData(
            PhoneContacts.buildList(entries(), type: PhoneContacts.typeNumberPicker))
        XCTAssertEqual(int(data, "type"), 2)
    }

    func testNamesAreFlattenedSoAControlCharacterCannotRideAlong() {
        let odd = [PhoneContacts.Entry(name: "Ada\nLovelace\t", phoneNumber: "1")]
        let data = businessData(PhoneContacts.buildList(odd))
        let rows = (data["contactSingleInfo"] as? [Any]) ?? []
        let first = rows.first as? [String: Any] ?? [:]
        XCTAssertEqual(string(first, "name"), "Ada Lovelace")
    }
}
