import MyvuCore
import SwiftUI
import UIKit

struct ControlsView: View {
    @EnvironmentObject private var model: GlassesModel

    @State private var scriptText = "Hello from the iPhone.\n\n"
        + "Blank lines split paragraphs.\n\n"
        + "Tap Next to advance the card on the lens."
    @State private var scriptTitle = "Script"
    @State private var notificationTitle = "Reminder"
    @State private var notificationBody = "Stand up and stretch."
    @State private var brightness = 5.0
    @State private var volume = 8.0
    @State private var zenMode = false
    @State private var demoMode = false
    @State private var queryReply = ""
    @State private var probing = false
    @State private var rawAction = ""
    @AppStorage("iosBtName") private var phoneBtName = "Testing1"
    @AppStorage("iosBtAutoConnect") private var iosBtKeepAlive = true
    @State private var iosBtRetrying = false
    @State private var iosBtLeft = 0
    @State private var scriptIndexLabel = ""
    @State private var scriptParagraph = 0
    @State private var confirmOta = false

    var body: some View {
        NavigationStack {
            Form {
                Section {
                    TextField("Spotify Client ID", text: Binding(
                        get: { model.spotifyAuth.clientId },
                        set: {
                            model.spotifyAuth.clientId = $0
                            model.objectWillChange.send()
                        }))
                        .autocorrectionDisabled()
                        .textInputAutocapitalization(.never)
                        .font(.system(.footnote, design: .monospaced))
                    if model.spotifyAuth.isAuthorized {
                        Label("Spotify connected", systemImage: "checkmark.circle.fill")
                            .foregroundStyle(.green)
                        Button("Sign out of Spotify") { model.spotifyAuth.signOut() }
                    } else {
                        Button("Connect Spotify") { model.spotifyAuth.authorize() }
                            .disabled(!model.spotifyAuth.hasClientId)
                    }
                    Toggle("Show lyrics on glasses",
                           isOn: Binding(
                            get: { model.spotifyLyrics.enabled },
                            set: { model.setSpotifyLyricsEnabled($0) }))
                    .disabled(!model.isReady || !model.spotifyAuth.isAuthorized)
                    if model.spotifyLyrics.enabled {
                        VStack(alignment: .leading) {
                            Text("Sync offset \(model.spotifyLyrics.syncOffsetMs > 0 ? "+" : "")"
                                + "\(model.spotifyLyrics.syncOffsetMs) ms")
                                .font(.footnote)
                            Slider(value: Binding(
                                get: { Double(model.spotifyLyrics.syncOffsetMs) },
                                set: { model.spotifyLyrics.syncOffsetMs = Int($0) }),
                                   in: -6000 ... 3000, step: 100)
                            Text("Lyrics running AHEAD of what you hear? Slide left (negative) to cancel Bluetooth-audio delay. Behind? Slide right.")
                                .font(.caption2)
                                .foregroundStyle(.secondary)
                        }
                    }
                    if !model.spotifyLyrics.trackLabel.isEmpty {
                        Text(model.spotifyLyrics.trackLabel)
                            .font(.footnote)
                    }
                    if !model.spotifyLyrics.currentLine.isEmpty {
                        Text(model.spotifyLyrics.currentLine)
                            .font(.body.weight(.semibold))
                    }
                    if !model.spotifyAuth.statusMessage.isEmpty {
                        Text(model.spotifyAuth.statusMessage)
                            .font(.caption)
                            .foregroundStyle(.secondary)
                    }
                    if !model.spotifyLyrics.statusMessage.isEmpty {
                        Text(model.spotifyLyrics.statusMessage)
                            .font(.caption)
                            .foregroundStyle(.secondary)
                    }
                } header: {
                    Text("Spotify lyrics")
                } footer: {
                    Text("Create an app at developer.spotify.com/dashboard, set redirect "
                        + "URI to myvudemo://spotify-callback, paste the Client ID, then "
                        + "connect. Plays from your Spotify account; lyrics from LRCLIB "
                        + "(not every track has them). Needs glasses connected.")
                }

                Section { StatusBadge(state: model.state) }

                FirmwareUpdateSection(confirmOta: $confirmOta)

                Section {
                    TextField("Title", text: $scriptTitle)
                    TextEditor(text: $scriptText)
                        .frame(minHeight: 100)
                    if !scriptIndexLabel.isEmpty {
                        Text(scriptIndexLabel)
                            .font(.footnote)
                            .foregroundStyle(.secondary)
                    }
                    Button("Show on the lens") {
                        model.glasses.openTeleprompter(scriptText, title: scriptTitle)
                        scriptParagraph = 0
                        scriptIndexLabel = "Paragraph 1"
                    }
                    HStack {
                        Button("Previous") {
                            scriptParagraph = max(0, scriptParagraph - 1)
                            model.glasses.teleprompterHighlight(index: scriptParagraph,
                                                                title: scriptTitle)
                            scriptIndexLabel = "Paragraph \(scriptParagraph + 1)"
                        }
                        Spacer()
                        Button("Next") {
                            scriptParagraph += 1
                            model.glasses.teleprompterHighlight(index: scriptParagraph,
                                                                title: scriptTitle)
                            scriptIndexLabel = "Paragraph \(scriptParagraph + 1)"
                        }
                    }
                    .buttonStyle(.bordered)
                } header: {
                    Text("Teleprompter")
                } footer: {
                    Text("Opens the native prompter app on the glasses. Needs the classic-BT "
                        + "audio link up (Controls > Auto-connect + keep alive) to clear the "
                        + "launcher gate.")
                }
                .requiresSession(model.isReady)

                Section {
                    TextField("Title", text: $notificationTitle)
                    TextField("Body", text: $notificationBody)
                    Button("Send") {
                        model.glasses.showNotification(title: notificationTitle,
                                                       body: notificationBody)
                    }
                    Button("Allow iPhone texts on the lens") {
                        model.glasses.enablePhoneNotifications(true)
                    }
                } header: {
                    Text("Notification")
                } footer: {
                    Text("Send is a card from this app. Texts need a Bluetooth bond "
                        + "in Settings, then Allow iPhone texts (ANCS). This app "
                        + "cannot read iMessage itself.")
                }
                .requiresSession(model.isReady)

                Section("Display and sound") {
                    VStack(alignment: .leading) {
                        Text("Brightness \(Int(brightness))")
                        Slider(value: $brightness, in: 0 ... 10, step: 1) { editing in
                            if !editing { model.glasses.setBrightness(Int(brightness)) }
                        }
                    }
                    VStack(alignment: .leading) {
                        Text("Volume \(Int(volume))")
                        Slider(value: $volume, in: 0 ... 15, step: 1) { editing in
                            if !editing { model.glasses.setVolume(Int(volume)) }
                        }
                    }
                    Toggle("Zen mode", isOn: $zenMode)
                        .onChange(of: zenMode) { model.glasses.setZenMode(zenMode) }
                    Button("Sync the clock") { model.glasses.syncTime() }
                }
                .requiresSession(model.isReady)

                Section {
                    Toggle("Demo / shop mode", isOn: $demoMode)
                        .onChange(of: demoMode) { model.glasses.setDemoMode(demoMode) }
                    Button("Query get_demo_mode") { runQuery("get_demo_mode") }
                    Button("Request glass log") {
                        model.glasses.requestGlassLog()
                        queryReply = "sent get_glass_log. File lands in Files → MyvuDemo → MyvuReceived when the transfer finishes."
                    }
                    Button("Request HUD screenshot") {
                        model.glasses.requestGlassScreenshot()
                        queryReply = "sent get_glass_screenshot. Image lands below and in Files → MyvuDemo → MyvuReceived."
                    }
                    if let url = model.lastReceivedFile {
                        if let img = UIImage(contentsOfFile: url.path) {
                            Image(uiImage: img)
                                .resizable()
                                .scaledToFit()
                                .frame(maxHeight: 220)
                                .clipShape(RoundedRectangle(cornerRadius: 8))
                        }
                        Text(model.lastReceivedLabel)
                            .font(.system(.caption, design: .monospaced))
                            .textSelection(.enabled)
                        ShareLink(item: url) {
                            Label("Share \(url.lastPathComponent)", systemImage: "square.and.arrow.up")
                        }
                    }
                    Button(probing ? "Probing…" : "Run demo-mode probe") {
                        runFirmwareProbe()
                    }
                    .disabled(probing)
                    if !queryReply.isEmpty {
                        Text(queryReply)
                            .font(.system(.caption, design: .monospaced))
                            .textSelection(.enabled)
                    }
                } header: {
                    Text("Firmware / debug probe")
                } footer: {
                    Text("Demo mode is the official-app 5-tap About toggle "
                        + "(set_demo_mode) and is not implemented on Star Air. "
                        + "Log and screenshot files save under Files → On My iPhone "
                        + "→ MyvuDemo → MyvuReceived. Does not enable ADB.")
                }
                .requiresSession(model.isReady)

                Section {
                    HStack {
                        Button("English") { model.glasses.setLanguage("en", country: "US") }
                        Spacer()
                        Button("中文") { model.glasses.setLanguage("zh", country: "CN") }
                        Spacer()
                        Button("Check") { runQuery("get_language") }
                    }
                    .buttonStyle(.bordered)
                } header: {
                    Text("Language")
                } footer: {
                    Text("Switches the HUD locale. en/US and zh/CN are the attested pairs.")
                }
                .requiresSession(model.isReady)

                Section("Trackpad") {
                    Text("Turns the phone into the glasses' touchpad.")
                        .font(.footnote)
                        .foregroundStyle(.secondary)
                    HStack {
                        Button("Start") { model.glasses.trackpad.start() }
                        Spacer()
                        Button("Tap") { model.glasses.trackpad.click() }
                        Spacer()
                        Button("Back") { model.glasses.trackpad.longPress() }
                        Spacer()
                        Button("Stop") { model.glasses.trackpad.stop() }
                    }
                    .buttonStyle(.bordered)
                }
                .requiresSession(model.isReady)

                Section {
                    ForEach(["get_device_info", "request_phone_battery", "get_brightness",
                             "get_language", "get_demo_mode"],
                            id: \.self) { subAction in
                        Button(subAction) { runQuery(subAction) }
                    }
                    if !queryReply.isEmpty {
                        Text(queryReply)
                            .font(.system(.caption, design: .monospaced))
                            .textSelection(.enabled)
                    }
                } header: {
                    Text("Queries")
                }
                .requiresSession(model.isReady)

                Section {
                    TextField("iPhone Bluetooth name", text: $phoneBtName)
                        .autocorrectionDisabled()
                        .autocapitalization(.none)
                    Toggle("Auto-connect + keep alive", isOn: $iosBtKeepAlive)
                        .onChange(of: iosBtKeepAlive) {
                            if iosBtKeepAlive {
                                model.client.startIosBtKeepAlive(deviceName: phoneBtName)
                            } else {
                                model.client.stopIosBtKeepAlive()
                            }
                        }
                    Button(iosBtRetrying ? "Retrying… (\(iosBtLeft)s)" : "iOS Connect BT — retry 30s") {
                        startIosConnectRetry()
                    }
                    .disabled(iosBtRetrying)
                    Button("Request BT status (cmd 35)") {
                        model.client.sendLinkCommand(LinkCommands.requestStatusBt)
                    }
                    Button("iOS Disconnect BT (cmd 33)") {
                        model.client.sendLinkCommand(LinkCommands.iosDisconnectBt)
                    }
                } header: {
                    Text("iOS classic-BT (experimental)")
                } footer: {
                    Text("The protocol defines IOS_CONNECT_BT (32) — a command the SDK never "
                        + "implemented. It may tell the glasses to drive the HFP/A2DP audio "
                        + "link to the iPhone (the link that clears \"connect to mobile "
                        + "first\"). Tap, then watch the log and iOS Settings > Bluetooth.")
                }
                .requiresSession(model.isReady)

                Section {
                    TextField("{\"action\":\"system\",\"data\":{…}}", text: $rawAction,
                              axis: .vertical)
                        .font(.system(.caption, design: .monospaced))
                        .autocorrectionDisabled()
                        .textInputAutocapitalization(.never)
                    Button("Send raw action") {
                        let trimmed = rawAction.trimmingCharacters(in: .whitespacesAndNewlines)
                        guard !trimmed.isEmpty else { return }
                        model.client.sendRaw(trimmed)
                    }
                    .disabled(rawAction.trimmingCharacters(in: .whitespacesAndNewlines).isEmpty)
                } header: {
                    Text("Raw action")
                } footer: {
                    Text("Probe undocumented commands; the wire log shows what came back.")
                }
                .requiresSession(model.isReady)
            }
            .navigationTitle("Controls")
        }
    }


    /// Fires IOS_CONNECT_BT every 3s for 30s, so it keeps trying while the user
    /// switches to Settings > Bluetooth (which makes the phone discoverable).
    private func startIosConnectRetry() {
        iosBtRetrying = true
        iosBtLeft = 30
        Task {
            for _ in 0 ..< 10 {
                model.client.iosConnectBt(deviceName: phoneBtName)
                for _ in 0 ..< 3 {
                    try? await Task.sleep(nanoseconds: 1_000_000_000)
                    await MainActor.run { iosBtLeft = max(0, iosBtLeft - 1) }
                }
            }
            await MainActor.run { iosBtRetrying = false }
        }
    }

    private func runQuery(_ subAction: String) {
        queryReply = "…"
        Task {
            do {
                let reply = try await model.glasses.query(subAction)
                queryReply = String(describing: reply.raw)
            } catch {
                queryReply = "no reply: \(error.localizedDescription)"
            }
        }
    }

    /// get_demo_mode → set on → get again. Does not start screenshot/log file
    /// transfers: those used to drop Bluetooth because ShareAbility was never
    /// completed.
    private func runFirmwareProbe() {
        probing = true
        queryReply = "probe started…"
        let before = model.recentInbound.count
        Task {
            var lines: [String] = []
            func note(_ s: String) {
                lines.append(s)
                queryReply = lines.joined(separator: "\n")
            }
            do {
                let beforeDemo = try await model.glasses.query("get_demo_mode", timeout: 6)
                note("get_demo_mode (before): \(beforeDemo.raw)")
            } catch {
                note("get_demo_mode (before): \(error.localizedDescription)")
            }
            await MainActor.run { model.glasses.setDemoMode(true) }
            note("sent set_demo_mode true")
            try? await Task.sleep(nanoseconds: 1_200_000_000)
            do {
                let afterDemo = try await model.glasses.query("get_demo_mode", timeout: 6)
                note("get_demo_mode (after): \(afterDemo.raw)")
            } catch {
                note("get_demo_mode (after): \(error.localizedDescription)")
            }
            let inbound = await MainActor.run { model.recentInbound }
            let fresh = inbound.dropFirst(min(before, inbound.count))
            let interesting = fresh.filter {
                $0.lowercased().contains("demo")
            }
            if interesting.isEmpty {
                note("no demo inbound (Air firmware has no set_demo_mode). latest: "
                    + inbound.suffix(5).joined(separator: " | "))
            } else {
                note("inbound:\n" + interesting.joined(separator: "\n"))
            }
            probing = false
        }
    }
}

private struct FirmwareUpdateSection: View {
    @EnvironmentObject private var model: GlassesModel
    @Binding var confirmOta: Bool

    var body: some View {
        Section {
            if model.firmwareBusy {
                ProgressView(value: model.firmwareFraction)
                Text(model.firmwareStatus)
                    .font(.footnote)
                Button("Cancel update", role: .destructive) {
                    model.cancelFirmwareUpdate()
                }
            } else {
                if !model.firmwareStatus.isEmpty {
                    Text(model.firmwareStatus)
                        .font(.footnote)
                        .foregroundStyle(model.firmwareStatus.hasPrefix("Update failed")
                            ? .red : .secondary)
                }
                Button("Rename to \(model.bimaDeviceName)") {
                    model.renameToBima()
                }
                .disabled(!model.isReady)
                if !model.renameStatus.isEmpty {
                    Text(model.renameStatus)
                        .font(.footnote)
                        .foregroundStyle(.secondary)
                }
                Button("Flash \(BundledOtaPack.label)") {
                    confirmOta = true
                }
                .disabled(!model.isReady)
            }
        } header: {
            Text("Firmware update")
        } footer: {
            Text("About still says MYVU because that name is stored on the glasses, "
                + "not in the ROM you just flashed. Rename writes it with "
                + "set_device_name (same command as the official app). Splash "
                + "MYVU is the Latin font drawing the patched ASCII — reboot if "
                + "you have not seen BIMA there yet. Flash is a full BLE rewrite.")
        }
        .confirmationDialog("Flash \(BundledOtaPack.label)?",
                            isPresented: $confirmOta, titleVisibility: .visible) {
            Button("Flash (downgrade)", role: .destructive) {
                model.startFirmwareUpdate()
            }
            Button("Cancel", role: .cancel) {}
        } message: {
            Text("The glasses will reboot if the apply succeeds. USB-C is charge-only "
                + "on this model, so the file has to go over BLE.")
        }
    }
}
