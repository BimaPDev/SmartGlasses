import CoreLocation
import SwiftUI

/// Lists that arrive with you: walk into the gym, the workout appears on the lens.
///
/// Everything here is phone-side. No firmware modification is involved — it pushes
/// text to a surface the glasses already have.
struct PlaceListsView: View {
    @EnvironmentObject private var model: GlassesModel
    @StateObject private var store = PlaceListStore()
    @StateObject private var monitor = PlaceMonitor()

    @State private var editing: PlaceList?
    @State private var showingAdd = false

    var body: some View {
        List {
            statusSection
            tryItSection

            Section("Places") {
                ForEach(store.lists) { list in
                    Button { editing = list } label: { row(list) }
                        .buttonStyle(.plain)
                }
                .onDelete { store.delete(at: $0); monitor.refresh() }

                Button {
                    var fresh = PlaceList()
                    if let here = monitor.currentLocation() {
                        fresh.latitude = here.latitude
                        fresh.longitude = here.longitude
                    }
                    editing = fresh
                    showingAdd = true
                } label: {
                    Label("Add a place", systemImage: "plus.circle")
                }
            }

            if !store.lastPush.isEmpty {
                Section("Last push") {
                    Text(store.lastPush).font(.footnote).foregroundStyle(.secondary)
                }
            }

            Section {
                Text("""
                Region monitoring can relaunch the app, so this keeps working with \
                the app closed. iOS caps an app at 20 monitored regions, and will \
                not reliably watch a radius much under 100 m.
                """)
                .font(.caption).foregroundStyle(.secondary)
            }
        }
        .navigationTitle("Place lists")
        .sheet(item: $editing) { list in
            PlaceEditor(list: list, isNew: showingAdd,
                        currentLocation: monitor.currentLocation()) { saved in
                if store.lists.contains(where: { $0.id == saved.id }) {
                    store.update(saved)
                } else {
                    store.add(saved)
                }
                showingAdd = false
                monitor.refresh()
            } onCancel: {
                showingAdd = false
            }
        }
        .onAppear {
            monitor.configure(store: store) { list in
                PlaceListPush.send(list, to: model.glasses, ready: model.isReady)
            }
            monitor.refresh()
        }
    }


    /// One-tap test of both surfaces, so the push path can be checked without first
    /// building a place and walking into it.
    private var tryItSection: some View {
        Section("Try it now") {
            Text("Sends a sample list straight to the glasses. Compare the two "
               + "surfaces before deciding which a real place should use.")
                .font(.caption).foregroundStyle(.secondary)

            Button {
                store.note(PlaceListPush.send(sample(.card), to: model.glasses,
                                              ready: model.isReady))
            } label: {
                Label("Send as notification card", systemImage: "rectangle.badge.plus")
            }
            .disabled(!model.isReady)

            Button {
                store.note(PlaceListPush.send(sample(.teleprompter), to: model.glasses,
                                              ready: model.isReady))
            } label: {
                Label("Send as teleprompter", systemImage: "list.bullet.rectangle")
            }
            .disabled(!model.isReady)

            Text("The teleprompter needs the HFP + RFCOMM audio link. Without it the "
               + "glasses show \"Please Connect to the mobile first\" — so a card is "
               + "always sent alongside it as a floor.")
                .font(.caption2).foregroundStyle(.secondary)
        }
    }

    private func sample(_ surface: PlaceList.Surface) -> PlaceList {
        var l = PlaceList()
        l.name = "Gym"
        l.surface = surface
        l.items = ["Squats 5x5", "Bench press 3x8", "Deadlift 1x5",
                   "Pull-ups 3x10", "Stretch 10 min"]
        return l
    }

    private var statusSection: some View {
        Section("Status") {
            LabeledContent("Location access") {
                Text(authText).foregroundStyle(authColour)
            }
            if monitor.authorization != .authorizedAlways {
                Button("Grant “Always” access") { monitor.requestAuthorization() }
                Text("Region monitoring needs Always — When-In-Use stops working once "
                   + "the app leaves the screen, which is when you arrive somewhere.")
                    .font(.caption).foregroundStyle(.secondary)
            }
            LabeledContent("Monitored places", value: "\(monitor.monitoredCount)")
            LabeledContent("Glasses") {
                Text(model.isReady ? "connected" : "not connected")
                    .foregroundStyle(model.isReady ? .green : .orange)
            }
            if !monitor.lastEvent.isEmpty {
                Text(monitor.lastEvent).font(.footnote).foregroundStyle(.secondary)
            }
        }
    }

    private var authText: String {
        switch monitor.authorization {
        case .authorizedAlways:    return "Always"
        case .authorizedWhenInUse: return "When in use — not enough"
        case .denied:              return "Denied"
        case .restricted:          return "Restricted"
        default:                   return "Not asked"
        }
    }

    private var authColour: Color {
        monitor.authorization == .authorizedAlways ? .green : .orange
    }

    private func row(_ list: PlaceList) -> some View {
        HStack {
            VStack(alignment: .leading, spacing: 3) {
                HStack(spacing: 6) {
                    Text(list.name).font(.body)
                    if !list.enabled {
                        Text("off").font(.caption2).foregroundStyle(.secondary)
                    }
                }
                Text("\(list.items.count) item\(list.items.count == 1 ? "" : "s") · "
                   + "\(Int(list.radiusMeters)) m · \(list.surface.label)")
                    .font(.caption).foregroundStyle(.secondary)
                if !list.hasLocation {
                    Text("no location set — not monitored")
                        .font(.caption).foregroundStyle(.orange)
                }
            }
            Spacer()
            Button {
                store.note(PlaceListPush.send(list, to: model.glasses, ready: model.isReady))
            } label: {
                Image(systemName: "paperplane.fill")
            }
            .buttonStyle(.borderless)
            .disabled(list.items.isEmpty)
        }
    }
}

// MARK: - Editor

private struct PlaceEditor: View {
    @State var list: PlaceList
    let isNew: Bool
    let currentLocation: CLLocationCoordinate2D?
    let onSave: (PlaceList) -> Void
    let onCancel: () -> Void

    @Environment(\.dismiss) private var dismiss
    @State private var itemsText = ""

    var body: some View {
        NavigationStack {
            Form {
                Section("Name") {
                    TextField("Gym", text: $list.name)
                }

                Section("List") {
                    TextEditor(text: $itemsText)
                        .frame(minHeight: 150)
                        .font(.system(.body, design: .monospaced))
                    Text("One item per line. Numbering is added automatically.")
                        .font(.caption).foregroundStyle(.secondary)
                }

                Section("Where") {
                    if list.hasLocation {
                        LabeledContent("Latitude", value: String(format: "%.5f", list.latitude))
                        LabeledContent("Longitude", value: String(format: "%.5f", list.longitude))
                    } else {
                        Text("No location set").foregroundStyle(.orange)
                    }
                    Button("Use my current location") {
                        guard let here = currentLocation else { return }
                        list.latitude = here.latitude
                        list.longitude = here.longitude
                    }
                    .disabled(currentLocation == nil)

                    VStack(alignment: .leading) {
                        HStack {
                            Text("Radius")
                            Spacer()
                            Text("\(Int(list.radiusMeters)) m")
                                .font(.system(.body, design: .monospaced))
                        }
                        Slider(value: $list.radiusMeters, in: 100...500, step: 25)
                    }
                }

                Section("Show on") {
                    Picker("Surface", selection: $list.surface) {
                        ForEach(PlaceList.Surface.allCases) { s in
                            Text(s.label).tag(s)
                        }
                    }
                    .pickerStyle(.segmented)
                    Text(list.surface.caveat)
                        .font(.caption).foregroundStyle(.secondary)
                }

                Section {
                    Toggle("Enabled", isOn: $list.enabled)
                }
            }
            .navigationTitle(isNew ? "New place" : list.name)
            .navigationBarTitleDisplayMode(.inline)
            .toolbar {
                ToolbarItem(placement: .cancellationAction) {
                    Button("Cancel") { onCancel(); dismiss() }
                }
                ToolbarItem(placement: .confirmationAction) {
                    Button("Save") {
                        list.items = itemsText
                            .split(separator: "\n", omittingEmptySubsequences: true)
                            .map { $0.trimmingCharacters(in: .whitespaces) }
                            .filter { !$0.isEmpty }
                        onSave(list)
                        dismiss()
                    }
                    .disabled(list.name.trimmingCharacters(in: .whitespaces).isEmpty)
                }
            }
            .onAppear { itemsText = list.items.joined(separator: "\n") }
        }
    }
}
