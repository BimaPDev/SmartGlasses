import MyvuNav
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
