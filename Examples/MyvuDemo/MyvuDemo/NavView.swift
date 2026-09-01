import MyvuNav
import MyvuUniden
import SwiftUI

struct NavView: View {
    @EnvironmentObject private var model: GlassesModel
    @AppStorage("navDestination") private var destination = ""
    @State private var calibrationIc = 1.0
    @State private var resolvingLink = false
    @State private var linkNote = ""

    var body: some View {
        NavigationStack {
            Form {
                Section { StatusBadge(state: model.state) }

                Section {
                    Toggle("Auto HUD while driving",
                           isOn: Binding(get: { model.autoCruiseHud },
                                         set: { model.setAutoCruiseHud($0) }))
                    Picker("Draw on", selection: Binding(
                        get: { model.cruiseSurface },
                        set: { model.cruiseSurface = $0 })) {
                        Text("Lens card").tag(CruiseSession.Surface.lensCard)
                        Text("Navigation page").tag(CruiseSession.Surface.hud)
                    }
                    Button(model.cruiseDemoRunning
                        ? "Stop the demo"
                        : "Demo it without driving") {
                        if model.cruiseDemoRunning {
                            model.stopCruiseDemo()
                        } else {
                            model.startCruiseDemo()
                        }
                    }
                    .disabled(!model.isReady)
                    Text(cruiseStatusLabel)
                        .font(.footnote)
                        .foregroundStyle(.secondary)
                } header: {
                    Text("Cruise HUD")
                } footer: {
                    Text(cruiseFooter)
                }

                Section {
                    Button(unidenConnectLabel) {
                        switch model.unidenState {
                        case .idle:
                            model.connectUniden()
                        case .scanning, .connecting, .connected:
                            model.disconnectUniden()
                        }
                    }
                    Toggle("Auto-connect at 10 mph",
                           isOn: Binding(get: { model.autoUnidenWhileDriving },
                                         set: { model.setAutoUnidenWhileDriving($0) }))
                    Text(unidenStatusLabel)
                        .font(.footnote)
                        .foregroundStyle(.secondary)
                } header: {
                    Text("Uniden radar")
                } footer: {
                    Text("""
                    Connects to an R4/R8/R9 detector over Bluetooth (R4W matches R4). \
                    Hits arrive as GATT notifications: radar/laser on one char, \
                    speed and red-light cameras on another. Both show on the glasses \
                    as a lens card, plus a phone banner. Auto-connect needs the toggle \
                    on, Location set to Always, and GPS holding 10 mph. Grant Always \
                    when iOS asks, or it will not see speed with the phone locked.
                    """)
                }

                Section {
                    TextField("Place name or \"lat,lon\"", text: $destination)
                        .textInputAutocapitalization(.words)
                    Button {
                        pasteMapsLink()
                    } label: {
                        HStack {
                            Text("Paste a link from Maps, Google or Waze")
                            if resolvingLink {
                                Spacer()
                                ProgressView()
                            }
                        }
                    }
                    .disabled(resolvingLink)
                    if !linkNote.isEmpty {
                        Text(linkNote)
                            .font(.footnote)
                            .foregroundStyle(.secondary)
                    }
                    Button(model.navigating ? "Stop navigation" : "Start navigation") {
                        if model.navigating {
                            model.stopNavigation()
                        } else {
                            model.startNavigation(to: destination)
                        }
                    }
                    .disabled(destination.trimmingCharacters(in: .whitespaces).isEmpty
                        && !model.navigating)
                } header: {
                    Text("Turn-by-turn")
                } footer: {
                    Text("Drives the native turn-by-turn HUD on the glasses. Needs the "
                        + "classic-BT audio link up (Controls > Auto-connect + keep alive) "
                        + "to clear the launcher gate.\n\n"
                        + "Share a place from Maps / Google / Waze, then paste it here — "
                        + "iOS does not let one app read another's live navigation.\n\n"
                        + "Routes via the public OSRM demo server; geocodes via Nominatim. "
                        + "Needs location; for screen-off guidance use Always authorisation "
                        + "and the Location background mode.")
                }
                .requiresSession(model.isReady)

                Section {
                    VStack(alignment: .leading) {
                        Text("Icon value \(Int(calibrationIc))")
                        Slider(value: $calibrationIc, in: 0 ... 20, step: 1)
                    }
                    Button("Send a calibration frame") {
                        let session = NavSession(client: model.client,
                                                 source: CoreLocationSource())
                        session.sendCalibrationFrame(ic: Int(calibrationIc),
                                                     roadName: "Calibration")
                    }
                } header: {
                    Text("Arrow calibration (HUD only)")
                } footer: {
                    Text("Only meaningful when the native nav app is open. On iPhone "
                        + "that app stays gated; leave this for Android/Windows experiments.")
                }
                .requiresSession(model.isReady)
            }
            .navigationTitle("Navigate")
        }
    }

    private var cruiseSurfaceNote: String {
        switch model.cruiseSurface {
        case .lensCard:
            return """
            A notification card showing street, speed, heading, town, trip distance \
            and the posted limit — no destination needed. Always mph. Works over \
            Bluetooth LE alone.
            """
        case .hud:
            return """
            The real navigation page: much cleaner, but it has no slot for heading, \
            town or trip. The street shows, and the speed limit is sent twice — to \
            the round speed bubble (experimental) and appended to the street name, \
            so at least one of them lands. Its "remaining by car" labels are baked \
            into the firmware and cannot be changed. Needs the classic-BT audio link \
            up (Controls > Auto-connect + keep alive).
            """
        }
    }

    private var cruiseFooter: String {
        let behaviour = """
        Appears a few seconds after you get up to speed and clears once you have been \
        parked for a while. A red light will not drop it.
        """
        let demo = """
        The demo fakes a 35 mph drive from wherever you are standing for 90 seconds, \
        so the street and speed limit on the lens are the real ones. Switch the picker \
        while it runs to compare the two surfaces.
        """
        let reconnect = """
        The phone keeps watching even when the glasses are disconnected, so it returns \
        the moment they reconnect. Turn-by-turn takes over the lens while a route is \
        running.
        """
        return [cruiseSurfaceNote, behaviour, demo, reconnect].joined(separator: "\n\n")
    }

    private var cruiseStatusLabel: String {
        let prefix = model.cruiseDemoRunning ? "Demo · " : ""
        switch model.cruiseStatus {
        case .off:
            return model.cruiseDemoRunning ? "Demo starting…" : "Off."
        case .watching:
            return prefix + (model.cruiseDemoRunning
                ? "waiting for a starting fix."
                : "Watching for driving.")
        case .driving(let mph):
            let speed = mph.map { "\($0) mph" } ?? "no speed yet"
            if model.navigating {
                return prefix + "driving (\(speed)) — paused for turn-by-turn."
            }
            return prefix + (model.cruiseDemoRunning
                ? "driving · \(speed)."
                : "Driving · \(speed).")
        }
    }

    private var unidenConnectLabel: String {
        switch model.unidenState {
        case .idle: return "Connect to Uniden"
        case .scanning: return "Stop Uniden scan"
        case .connecting: return "Cancel Uniden"
        case .connected: return "Disconnect Uniden"
        }
    }

    private var unidenStatusLabel: String {
        let gps: String = {
            guard model.autoUnidenWhileDriving else { return "" }
            if let mph = model.unidenDriveMph {
                return mph >= 10
                    ? "GPS \(mph) mph."
                    : "GPS \(mph) mph — need 10 to auto-connect."
            }
            return "Waiting for GPS…"
        }()
        if let error = model.unidenError, model.unidenState == .idle {
            return gps.isEmpty ? error : "\(error) \(gps)"
        }
        switch model.unidenState {
        case .idle:
            if model.autoUnidenWhileDriving {
                return gps
            }
            return "Off."
        case .scanning:
            return "Scanning for R4/R8/R9… \(gps)"
        case .connecting:
            return "Connecting\(model.unidenDeviceName.map { " to \($0)" } ?? "")…"
        case .connected:
            let name = model.unidenDeviceName ?? "Uniden"
            if model.unidenLastAlert.isEmpty {
                return "Connected to \(name). Listening for alerts."
            }
            return "\(name) · \(model.unidenLastAlert)"
        }
    }

    /// Reads the clipboard and turns whatever maps app produced it into a
    /// destination.
    ///
    /// Resolving can hit the network (short links carry no coordinates until the
    /// redirect is followed), so it runs as a task with the button disabled
    /// rather than blocking the form.
    private func pasteMapsLink() {
        guard let pasted = UIPasteboard.general.string, !pasted.isEmpty else {
            linkNote = "The clipboard is empty."
            return
        }
        resolvingLink = true
        linkNote = ""
        Task {
            let resolved = await MapsLink.resolve(pasted)
            await MainActor.run {
                resolvingLink = false
                if let resolved {
                    destination = resolved
                    linkNote = "Destination set to \(resolved)."
                } else {
                    linkNote = "No destination in that link. Share the place itself rather "
                        + "than a route, and check it is a Maps, Google or Waze link."
                }
            }
        }
    }
}
