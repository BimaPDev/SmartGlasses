import Contacts
import Foundation
import UIKit

/// Read access to the address book, for putting a person on the lens.
///
/// The Star Air has no contact-sync protocol to push a phonebook into — only
/// the Halliday firmware in this repo carries `Sync_Contacts`, and the Star
/// Air's one contact view belongs to WeChat, which the iPhone cannot feed. So
/// contacts are read on demand and rendered as an ordinary lens card.
@MainActor
final class ContactsAccess: ObservableObject {
    struct Person: Identifiable, Equatable {
        let id: String
        let name: String
        /// Phone first, e-mail as a fallback, because a number is what someone
        /// glancing at the lens is usually after.
        let detail: String
    }

    @Published private(set) var status = CNContactStore.authorizationStatus(for: .contacts)
    @Published private(set) var matches: [Person] = []

    private let store = CNContactStore()
    /// Newest search wins; typing fast would otherwise let an older, slower
    /// fetch land last.
    private var search: Task<Void, Never>?

    var isAuthorized: Bool {
        if status == .authorized { return true }
        if #available(iOS 18.0, *), status == .limited { return true }
        return false
    }

    func refresh() {
        status = CNContactStore.authorizationStatus(for: .contacts)
    }

    func request() {
        guard status != .denied && status != .restricted else { return openSettings() }
        Task {
            _ = try? await store.requestAccess(for: .contacts)
            refresh()
        }
    }

    func openSettings() {
        guard let url = URL(string: UIApplication.openSettingsURLString) else { return }
        UIApplication.shared.open(url)
    }

    func find(_ text: String) {
        search?.cancel()
        let name = text.trimmingCharacters(in: .whitespacesAndNewlines)
        guard isAuthorized, !name.isEmpty else {
            matches = []
            return
        }
        let store = store
        search = Task {
            let found = await Task.detached { Self.lookUp(name, in: store) }.value
            guard !Task.isCancelled else { return }
            matches = found
        }
    }

    // MARK: - Locked-phone index

    /// Trailing-7-digits → name, so a caller can be resolved WITHOUT reading the
    /// address book at the moment the call arrives.
    ///
    /// This exists because Contacts is protected data. With the phone locked,
    /// `CNContactStore` cannot open its database, every lookup comes back empty,
    /// and the lens shows the bare number — which is exactly when the glasses
    /// are most useful. The index is built while unlocked and stored with
    /// `completeUntilFirstUserAuthentication`, the one protection class that
    /// stays readable after the first unlock since boot.
    ///
    /// It doubles as the fast path: no enumeration of the whole address book on
    /// a number that is not in it.
    private var index: [String: String] = [:]

    private static var indexURL: URL? {
        try? FileManager.default.url(for: .applicationSupportDirectory,
                                     in: .userDomainMask, appropriateFor: nil,
                                     create: true)
            .appendingPathComponent("caller-index.json")
    }

    /// Number of entries currently cached, for the UI to show.
    var indexedNumbers: Int { index.count }

    func loadIndex() {
        guard let url = Self.indexURL,
              let data = try? Data(contentsOf: url),
              let stored = try? JSONDecoder().decode([String: String].self, from: data)
        else { return }
        index = stored
    }

    /// Rebuilds from the address book. Only possible while the phone is
    /// unlocked, so this is called on unlock and on becoming active rather than
    /// at the moment a call arrives.
    func rebuildIndex() async {
        guard isAuthorized, UIApplication.shared.isProtectedDataAvailable else { return }
        let store = store
        let built = await Task.detached { Self.buildIndex(in: store) }.value
        guard !built.isEmpty else { return }
        index = built
        guard let url = Self.indexURL,
              let data = try? JSONEncoder().encode(built) else { return }
        // Readable after the first unlock, which is what lets a locked phone
        // still name a caller. Never `.none`: this is the address book.
        try? data.write(to: url, options: [.atomic,
                                           .completeFileProtectionUntilFirstUserAuthentication])
    }

    private nonisolated static func buildIndex(in store: CNContactStore) -> [String: String] {
        let keys: [CNKeyDescriptor] = [
            CNContactFormatter.descriptorForRequiredKeys(for: .fullName),
            CNContactPhoneNumbersKey as CNKeyDescriptor,
        ]
        var out: [String: String] = [:]
        let request = CNContactFetchRequest(keysToFetch: keys)
        try? store.enumerateContacts(with: request) { contact, _ in
            guard let name = CNContactFormatter.string(from: contact, style: .fullName),
                  !name.isEmpty else { return }
            for entry in contact.phoneNumbers {
                let d = digits(entry.value.stringValue)
                guard d.count >= 7 else { continue }
                // First writer wins, so a duplicated number keeps the contact
                // the address book lists first rather than flapping.
                let key = String(d.suffix(7))
                if out[key] == nil { out[key] = name }
            }
        }
        return out
    }

    /// Resolves a phone number to a contact name, for the glasses' caller-ID
    /// question.
    ///
    /// The number arrives from the network in whatever shape the carrier sent —
    /// usually E.164 (`+15551234567`) — while the address book may hold
    /// `(555) 123-4567`. `CNContact.predicateForContacts(matching:)` does that
    /// normalisation itself, and the digit-suffix sweep below catches the rest
    /// (a contact saved without the country code, mostly).
    func name(forPhoneNumber number: String) async -> String? {
        guard isAuthorized else { return nil }
        // The index first: it is the only path that works with the phone
        // locked, and it answers in microseconds rather than a database hit.
        let d = Self.digits(number)
        if d.count >= 7, let hit = index[String(d.suffix(7))] { return hit }
        // Locked and not in the index: a live read would fail anyway, and the
        // glasses are waiting, so do not stall them on it.
        guard UIApplication.shared.isProtectedDataAvailable else { return nil }
        let store = store
        return await Task.detached { Self.lookUpNumber(number, in: store) }.value
    }

    private nonisolated static func lookUpNumber(_ number: String,
                                                 in store: CNContactStore) -> String? {
        let keys = [CNContactFormatter.descriptorForRequiredKeys(for: .fullName)]
        let predicate = CNContact.predicateForContacts(
            matching: CNPhoneNumber(stringValue: number))
        if let hit = (try? store.unifiedContacts(matching: predicate,
                                                 keysToFetch: keys))?.first,
           let name = CNContactFormatter.string(from: hit, style: .fullName),
           !name.isEmpty {
            return name
        }
        return suffixSweep(number, in: store)
    }

    /// Last-resort match on the trailing digits.
    ///
    /// Seven is the shortest tail that is meaningfully unique in a personal
    /// address book, and it forgives a missing +1 or a stored trunk prefix.
    private nonisolated static func suffixSweep(_ number: String,
                                                in store: CNContactStore) -> String? {
        let wanted = digits(number)
        guard wanted.count >= 7 else { return nil }
        let tail = String(wanted.suffix(7))

        let keys: [CNKeyDescriptor] = [
            CNContactFormatter.descriptorForRequiredKeys(for: .fullName),
            CNContactPhoneNumbersKey as CNKeyDescriptor,
        ]
        var found: String?
        let request = CNContactFetchRequest(keysToFetch: keys)
        try? store.enumerateContacts(with: request) { contact, stop in
            for entry in contact.phoneNumbers
                where digits(entry.value.stringValue).hasSuffix(tail) {
                if let name = CNContactFormatter.string(from: contact, style: .fullName),
                   !name.isEmpty {
                    found = name
                    stop.pointee = true
                }
                return
            }
        }
        return found
    }

    private nonisolated static func digits(_ s: String) -> String {
        s.filter(\.isNumber)
    }

    /// Every contact with a phone number, newest-first by nothing in particular —
    /// the address book's own order. One entry per NUMBER, not per person, which
    /// is the shape the glasses' Phone page wants.
    ///
    /// Runs off the main actor: a large address book takes a noticeable moment.
    func allWithNumbers(limit: Int) async -> [PhoneEntry] {
        guard isAuthorized else { return [] }
        let store = store
        return await Task.detached { Self.fetchAll(in: store, limit: limit) }.value
    }

    /// One name/number pair, flattened the way `contactSingleInfo` expects.
    struct PhoneEntry: Equatable {
        let name: String
        let number: String
        let contactId: String
        let company: String
    }

    private nonisolated static func fetchAll(in store: CNContactStore,
                                             limit: Int) -> [PhoneEntry] {
        let keys: [CNKeyDescriptor] = [
            CNContactFormatter.descriptorForRequiredKeys(for: .fullName),
            CNContactPhoneNumbersKey as CNKeyDescriptor,
            CNContactOrganizationNameKey as CNKeyDescriptor,
        ]
        let request = CNContactFetchRequest(keysToFetch: keys)
        request.sortOrder = .userDefault
        var out: [PhoneEntry] = []
        // enumerateContacts streams, so the whole book is never resident at once
        // and the cap can stop it early.
        try? store.enumerateContacts(with: request) { contact, stop in
            guard let full = CNContactFormatter.string(from: contact, style: .fullName),
                  !full.isEmpty else { return }
            for number in contact.phoneNumbers {
                let value = number.value.stringValue
                guard !value.isEmpty else { continue }
                out.append(PhoneEntry(name: full, number: value,
                                      contactId: contact.identifier,
                                      company: contact.organizationName))
                if out.count >= limit { stop.pointee = true; return }
            }
        }
        return out
    }

    private nonisolated static func lookUp(_ name: String,
                                           in store: CNContactStore) -> [Person] {
        let keys: [CNKeyDescriptor] = [
            CNContactFormatter.descriptorForRequiredKeys(for: .fullName),
            CNContactPhoneNumbersKey as CNKeyDescriptor,
            CNContactEmailAddressesKey as CNKeyDescriptor,
        ]
        let predicate = CNContact.predicateForContacts(matchingName: name)
        let contacts = (try? store.unifiedContacts(matching: predicate,
                                                   keysToFetch: keys)) ?? []
        return contacts.prefix(12).compactMap { contact in
            let full = CNContactFormatter.string(from: contact, style: .fullName)
            guard let full, !full.isEmpty else { return nil }
            let detail = contact.phoneNumbers.first?.value.stringValue
                ?? contact.emailAddresses.first.map { $0.value as String }
                ?? ""
            return Person(id: contact.identifier, name: full, detail: detail)
        }
    }
}
