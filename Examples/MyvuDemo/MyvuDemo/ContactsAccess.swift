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
