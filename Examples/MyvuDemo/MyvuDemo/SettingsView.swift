import MyvuAI
import MyvuCore
import SwiftUI

/// The official app's settings tree, rebuilt: "Settings for Glasses", "Smart
/// Reminder", "Voice Assistant" and "About Glasses".
///
/// Every switch here writes straight to the glasses when the link is up, and is
/// re-pushed on the next ready session when it is not — see `GlassesSettings`.
struct SettingsView: View {
    @EnvironmentObject private var model: GlassesModel

    var body: some View {
        NavigationStack {
            Form {
                Section { StatusBadge(state: model.state) }

                Section {
                    NavigationLink {
                        GlassesSettingsScreen()
                    } label: {
                        SettingsRow(title: "Settings for Glasses",
                                    detail: "Display, sound, standby, app list",
                                    icon: "eyeglasses")
                    }
                    NavigationLink {
                        SmartReminderScreen()
                    } label: {
                        SettingsRow(title: "Smart Reminder",
                                    detail: "Notification transfer and how cards behave",
                                    icon: "bell.badge")
                    }
                    NavigationLink {
                        VoiceAssistantScreen()
                    } label: {
                        SettingsRow(title: "Voice Assistant",
                                    detail: "Wake word, replies, and the assistant itself",
                                    icon: "waveform")
                    }
                    NavigationLink {
                        AboutGlassesScreen()
                    } label: {
                        SettingsRow(title: "About Glasses",
                                    detail: model.info?.name ?? "Not connected",
                                    icon: "info.circle")
                    }
                } footer: {
                    Text("Settings are stored on the phone and re-sent every time "
                        + "the glasses connect, because the firmware is not known "
                        + "to keep them across a power cycle.")
                }
            }
            .navigationTitle("Settings")
        }
    }
}

private struct SettingsRow: View {
    let title: String
    let detail: String
    let icon: String

    var body: some View {
        Label {
            VStack(alignment: .leading, spacing: 2) {
                Text(title)
                Text(detail)
                    .font(.footnote)
                    .foregroundStyle(.secondary)
            }
        } icon: {
            Image(systemName: icon)
        }
    }
}

// MARK: - Settings for Glasses

private struct GlassesSettingsScreen: View {
    @EnvironmentObject private var model: GlassesModel

    private var settings: GlassesSettings { model.settings }

    var body: some View {
        Form {
            Section {
                NavigationLink("App List") { AppListScreen() }
                NavigationLink("Standby Components") { StandbyComponentsScreen() }
            } footer: {
                Text("App List is the order of the glasses' launcher dock. "
                    + "Standby Components are the widgets on the idle lens.")
            }

            Section {
                Toggle("Wear Detection", isOn: bind(\.wearDetection))
            } footer: {
                Text("Connects when the glasses are put on and disconnects when "
                    + "they are taken off.")
            }

            Section {
                Toggle("Automatically adjust brightness", isOn: bind(\.autoBrightness))
            } footer: {
                Text("Follows sunrise and sunset. The brightness slider in "
                    + "Controls still works while this is on.")
            }

            Section {
                Picker("Auto-Lock", selection: bind(\.screenOffSeconds)) {
                    ForEach(SystemSettings.screenOffChoicesSeconds, id: \.self) { seconds in
                        Text(GlassesSettings.screenOffLabel(seconds)).tag(seconds)
                    }
                }
            } footer: {
                Text("How long the lens stays lit with nothing happening. The "
                    + "longest few need firmware 1.1.3 or newer.")
            }

            Section {
                Toggle("Do Not Disturb Mode", isOn: bind(\.zenMode))
            } footer: {
                Text("The glasses show no notifications at all while this is on — "
                    + "check it first when the lens stays silent.")
            }

            Section {
                Toggle("System Sound Effects", isOn: bind(\.soundEffects))
                Toggle("Control audio during screen rest", isOn: bind(\.audioDuringScreenRest))
            } footer: {
                Text("Sound effects are the glasses' own clicks and chimes, not "
                    + "the media volume. The second lets the temple trackpad, the "
                    + "phone pad and the ring drive playback while the lens rests.")
            }

            Section {
                Picker("Text size", selection: bind(\.fontSizeRaw)) {
                    Text("Small").tag(SystemSettings.FontSize.small.rawValue)
                    Text("Medium").tag(SystemSettings.FontSize.medium.rawValue)
                    Text("Large").tag(SystemSettings.FontSize.large.rawValue)
                }
                Picker("Long press opens", selection: bind(\.longPressApp)) {
                    ForEach(GlassesSettings.allDockApps, id: \.self) { pkg in
                        Text(GlassesSettings.appLabel(pkg)).tag(pkg)
                    }
                }
            } header: {
                Text("Shortcuts")
            } footer: {
                Text("A long press on the temple opens the chosen app.")
            }

            Section {
                Picker("System Language", selection: bind(\.languageTag)) {
                    ForEach(GlassesSettings.languages, id: \.tag) { entry in
                        Text(entry.label).tag(entry.tag)
                    }
                }
            } footer: {
                Text("Switches the HUD locale. en/US and zh/CN are the pairs seen "
                    + "in captured traffic; the rest use the same two fields and "
                    + "fall back to English if the ROM has no translation.")
            }
        }
        .navigationTitle("Settings for Glasses")
        .navigationBarTitleDisplayMode(.inline)
        .requiresSession(model.isReady)
    }

    /// Settings live in a plain object rather than `@Published` properties, so
    /// each control binds through its key path and the object announces the
    /// change itself.
    private func bind<Value>(_ key: ReferenceWritableKeyPath<GlassesSettings, Value>)
        -> Binding<Value> {
        Binding(get: { settings[keyPath: key] },
                set: { settings[keyPath: key] = $0 })
    }
}

// MARK: - App List

private struct AppListScreen: View {
    @EnvironmentObject private var model: GlassesModel

    var body: some View {
        List {
            Section {
                ForEach(model.settings.dockItems, id: \.self) { pkg in
                    Text(GlassesSettings.appLabel(pkg))
                }
                .onMove { source, destination in
                    var items = model.settings.dockItems
                    items.move(fromOffsets: source, toOffset: destination)
                    model.settings.dockItems = items
                }
                .onDelete { offsets in
                    var items = model.settings.dockItems
                    items.remove(atOffsets: offsets)
                    model.settings.dockItems = items
                }
            } header: {
                Text("In the dock")
            } footer: {
                Text("Drag to reorder, swipe to remove. The order is sent as one "
                    + "`change_dock_items` string, the same as the official app.")
            }

            let missing = GlassesSettings.allDockApps
                .filter { !model.settings.dockItems.contains($0) }
            if !missing.isEmpty {
                Section("Not in the dock") {
                    ForEach(missing, id: \.self) { pkg in
                        Button {
                            model.settings.dockItems.append(pkg)
                        } label: {
                            Label(GlassesSettings.appLabel(pkg), systemImage: "plus.circle")
                        }
                    }
                }
            }

            Section {
                Button("Restore the default order") {
                    model.settings.dockItems = GlassesSettings.defaultDock
                }
            } footer: {
                Text("Apps the ROM does not have simply never appear on the lens; "
                    + "listing one here cannot install it.")
            }
        }
        .environment(\.editMode, .constant(.active))
        .navigationTitle("App List")
        .navigationBarTitleDisplayMode(.inline)
        .requiresSession(model.isReady)
    }
}

// MARK: - Standby Components

private struct StandbyComponentsScreen: View {
    @EnvironmentObject private var model: GlassesModel

    private static let positions = ["Top left", "Top right", "Bottom left", "Bottom right"]

    var body: some View {
        Form {
            Section {
                ForEach(SystemSettings.StandbyWidgets.optional, id: \.self) { widget in
                    Toggle(GlassesSettings.standbyWidgetLabel(widget),
                           isOn: Binding(
                            get: { model.settings.isStandbyWidget(widget) },
                            set: { model.settings.setStandbyWidget(widget, on: $0) }))
                }
            } header: {
                Text("Widgets")
            } footer: {
                Text("The clock and the assistant ball are always shown and always "
                    + "sit at either end of the row, so they are not listed here.")
            }

            Section {
                Picker("Display position", selection: Binding(
                    get: { model.settings.standbyPosition },
                    set: { model.settings.standbyPosition = $0 })) {
                    ForEach(Array(Self.positions.enumerated()), id: \.offset) { index, name in
                        Text(name).tag(index)
                    }
                }
                .pickerStyle(.inline)
            } header: {
                Text("Position")
            } footer: {
                Text("Where the row sits in the field of view. The four values are "
                    + "the confirmed range; the labels are this app's reading of "
                    + "them, so try them all if one looks wrong.")
            }
        }
        .navigationTitle("Standby Components")
        .navigationBarTitleDisplayMode(.inline)
        .requiresSession(model.isReady)
    }
}

// MARK: - Smart Reminder

private struct SmartReminderScreen: View {
    @EnvironmentObject private var model: GlassesModel

    var body: some View {
        Form {
            Section {
                Toggle("Mobile notification transfer",
                       isOn: Binding(get: { model.phoneNotifications },
                                     set: { model.phoneNotifications = $0 }))
            } footer: {
                Text("Sends your phone's notifications to the lens over ANCS. The "
                    + "glasses read them from iOS directly, so they must also be "
                    + "paired in Settings > Bluetooth; this app cannot read "
                    + "Messages itself. If nothing arrives, check that the glasses "
                    + "are Connected there, that no Focus is on, and that Do Not "
                    + "Disturb Mode is off.")
            }

            if model.phoneNotifications {
                Section("Notification Settings") {
                    Toggle("Announce Notifications",
                           isOn: Binding(get: { model.announceNotifications },
                                         set: { model.announceNotifications = $0 }))
                    Toggle("Automatically light up screen for notifications",
                           isOn: Binding(get: { model.brightenScreenForNotifications },
                                         set: { model.brightenScreenForNotifications = $0 }))
                    Picker("Card stays up for", selection: Binding(
                        get: { model.notificationDismissMs },
                        set: { model.notificationDismissMs = $0 })) {
                        ForEach(Notifications.dismissChoicesMs, id: \.self) { ms in
                            Text("\(ms / 1000) s").tag(Int(ms))
                        }
                    }
                }

                Section {
                    Toggle("Turn off notification transfer while using your phone",
                           isOn: Binding(get: { model.muteWhileUsingPhone },
                                         set: { model.muteWhileUsingPhone = $0 }))
                } footer: {
                    Text("Stops the lens repeating what you already saw. iOS gives "
                        + "no app a way to filter another app's notifications, so "
                        + "this flips the glasses' master switch when the phone is "
                        + "unlocked and back when it locks. Without a lock screen "
                        + "password nothing is ever suppressed — the phone never "
                        + "reports a lock.")
                }

                Section {
                    Toggle("Calls",
                           isOn: Binding(get: { model.phoneNotificationCalls },
                                         set: { model.phoneNotificationCalls = $0 }))
                    ForEach(Self.categories, id: \.type) { kind in
                        Toggle(kind.label,
                               isOn: Binding(
                                get: { model.isNotificationType(kind.type) },
                                set: { model.setNotificationType(kind.type, on: $0) }))
                    }
                } header: {
                    Text("Categories")
                } footer: {
                    Text("The filter the glasses apply after ANCS hands them a "
                        + "notification. Every category is sent on every push, so "
                        + "muting one never disturbs the others.")
                }
            }
        }
        .navigationTitle("Smart Reminder")
        .navigationBarTitleDisplayMode(.inline)
        .requiresSession(model.isReady)
    }

    /// The categories the glasses' filter understands, in the official app's
    /// order, under names that mean something to a wearer.
    static let categories: [(type: String, label: String)] = [
        (Notifications.typeIm, "Texts and chats"),
        (Notifications.typeReminder, "Reminders"),
        (Notifications.typeTaxi, "Rides"),
        (Notifications.typeFlight, "Flights"),
        (Notifications.typeTakeout, "Food orders"),
        (Notifications.typeExpress, "Deliveries"),
        (Notifications.typeWeather, "Weather"),
    ]
}

// MARK: - Voice Assistant

private struct VoiceAssistantScreen: View {
    @EnvironmentObject private var model: GlassesModel

    private var settings: GlassesSettings { model.settings }

    var body: some View {
        Form {
            Section {
                Toggle("Wake up Voice Assistant by calling \"Hey, Aicy\"",
                       isOn: bind(\.wakeWord))
                Toggle("Voice wake-up with screen off", isOn: bind(\.wakeWordScreenOff))
                    .disabled(!settings.wakeWord)
            } footer: {
                Text("Listening with the lens asleep costs noticeably more "
                    + "battery, which is why the second switch is separate.")
            }
            .requiresSession(model.isReady)

            Section {
                Toggle("Continuous Conversation", isOn: bind(\.continuousDialogue))
                Toggle("Display what you have said to Aicy", isOn: bind(\.showWhatYouSaid))
            } footer: {
                Text("Continuous Conversation holds the mic open for a follow-up. "
                    + "This app's own assistant still ends the turn after each "
                    + "answer — see AiSession.spokenFollowUpTurns for why.")
            }
            .requiresSession(model.isReady)

            Section {
                Toggle("Broadcast reply", isOn: bind(\.speakReplies))
                Toggle("Large model reply text display", isOn: bind(\.showReplyText))
            } footer: {
                Text("Whether an answer is spoken, shown as text, or both. "
                    + "Turning the text off also stops the answer card, so a "
                    + "silent assistant with both off says nothing at all.")
            }
            .requiresSession(model.isReady)

            // The session that answers. Gated per section rather than with the
            // switches above, because the API keys are worth typing in before
            // the glasses are anywhere near.
            AssistantSections()
        }
        .navigationTitle("Voice Assistant")
        .navigationBarTitleDisplayMode(.inline)
    }

    private func bind<Value>(_ key: ReferenceWritableKeyPath<GlassesSettings, Value>)
        -> Binding<Value> {
        Binding(get: { settings[keyPath: key] },
                set: { settings[keyPath: key] = $0 })
    }
}

// MARK: - About Glasses

private struct AboutGlassesScreen: View {
    @EnvironmentObject private var model: GlassesModel

    @State private var newName = ""
    @State private var confirmReset = false
    @State private var confirmUnpair = false

    var body: some View {
        Form {
            Section {
                LabeledContent("Name of Glasses", value: model.info?.name ?? "—")
                TextField("New name", text: $newName)
                    .autocorrectionDisabled()
                Button("Rename") {
                    model.rename(to: newName)
                    newName = ""
                }
                .disabled(!model.isReady
                    || newName.trimmingCharacters(in: .whitespaces).isEmpty)
                if !model.renameStatus.isEmpty {
                    Text(model.renameStatus)
                        .font(.footnote)
                        .foregroundStyle(.secondary)
                }
            } footer: {
                Text("The name lives on the glasses, not in the ROM, so it "
                    + "survives a firmware flash. Reopen About on the lens to see "
                    + "it change.")
            }

            Section {
                LabeledContent("Model", value: model.info?.modelId ?? "—")
                LabeledContent("Bluetooth address", value: model.info?.btMac ?? "—")
                LabeledContent("Company", value: model.info?.companyId ?? "—")
                LabeledContent("Category", value: model.info?.categoryId ?? "—")
                LabeledContent("Battery",
                               value: model.battery.map { "\($0.percent)%" }
                                   ?? model.info.map { "\($0.battery)%" } ?? "—")
            } header: {
                Text("Glasses Information")
            } footer: {
                Text("Read from the pairing handshake. Battery is the live value "
                    + "when the glasses have pushed one, otherwise the reading "
                    + "taken at pairing, which never moves.")
            }

            Section {
                Text("Contains FCC and CE marks shown on the glasses themselves "
                    + "and in the box. Nothing here is read from the device.")
                    .font(.footnote)
                    .foregroundStyle(.secondary)
            } header: {
                Text("Regulatory Certification")
            }

            Section {
                Button("Unpair", role: .destructive) { confirmUnpair = true }
                Button("Factory Reset", role: .destructive) { confirmReset = true }
                    .disabled(!model.isReady)
            } footer: {
                Text("Unpair only forgets the glasses on this phone; remove the "
                    + "Bluetooth pairing in iOS Settings too. Factory Reset wipes "
                    + "the glasses and reboots them, and the device asks nothing "
                    + "before it starts.")
            }
        }
        .navigationTitle("About Glasses")
        .navigationBarTitleDisplayMode(.inline)
        .confirmationDialog("Unpair these glasses?", isPresented: $confirmUnpair,
                            titleVisibility: .visible) {
            Button("Unpair", role: .destructive) { model.forgetGlasses() }
            Button("Cancel", role: .cancel) {}
        } message: {
            Text("The next connection will have to scan again.")
        }
        .confirmationDialog("Factory reset the glasses?", isPresented: $confirmReset,
                            titleVisibility: .visible) {
            Button("Erase the glasses", role: .destructive) { model.factoryReset() }
            Button("Cancel", role: .cancel) {}
        } message: {
            Text("Everything on the glasses is erased and they reboot. There is no "
                + "undo and no second prompt on the device.")
        }
    }
}
