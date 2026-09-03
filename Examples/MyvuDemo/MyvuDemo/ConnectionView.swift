import MyvuCore
import SwiftUI

struct ConnectionView: View {
    @EnvironmentObject private var model: GlassesModel

    var body: some View {
        NavigationStack {
            Form {
                Section {
                    StatusBadge(state: model.state)
                    if let error = model.lastError {
                        Text(error)
                            .font(.footnote)
                            .foregroundStyle(.red)
                    }
                } header: {
                    Text("Status")
                }

                Section {
                    Button {
                        Task { await model.connect(scanning: false) }
                    } label: {
                        Label(model.hasKnownGlasses ? "Reconnect" : "Scan and connect",
                              systemImage: "antenna.radiowaves.left.and.right")
                    }
                    .disabled(model.isConnecting || model.isReady)

                    Button {
                        Task { await model.connect(scanning: true) }
                    } label: {
                        Label("Scan for new glasses", systemImage: "magnifyingglass")
                    }
                    .disabled(model.isConnecting || model.isReady)

                    Button(role: .destructive) {
                        model.disconnect()
                    } label: {
                        Label("Disconnect", systemImage: "xmark.circle")
                    }
                    .disabled(model.state == .idle)
                } footer: {
                    Text("The glasses accept one phone at a time. Force-quit the official "
                        + "MYVU app before connecting.")
                }

                if let info = model.info {
                    Section("Glasses") {
                        LabeledContent("Name", value: info.name)
                        LabeledContent("Battery", value: batteryText(info))
                        LabeledContent("Model", value: info.modelId)
                        LabeledContent("Address", value: info.btMac)
                    }
                }

                Section {
                    Toggle("Keep the weather panel updated",
                           isOn: Binding(
                            get: { model.weatherEnabled },
                            set: { on in
                                on ? model.startWeather() : model.stopWeather()
                            }))
                    Button("Sync weather now") {
                        model.refreshWeather()
                    }
                    .disabled(!model.isReady)
                } footer: {
                    Text("Uses the iPhone's location and Open-Meteo. Temperatures follow "
                        + "your region (°F in the US, °C elsewhere) so they match Apple "
                        + "Weather. Syncs on every connect, every 30 minutes, and when "
                        + "the glasses ask.")
                }

                Section {
                    Toggle("Keep the Steps widget updated",
                           isOn: Binding(
                            get: { model.stepsEnabled },
                            set: { on in
                                on ? model.startHealth() : model.stopHealth()
                            }))
                    Button("Sync steps now") {
                        model.refreshHealth()
                    }
                    .disabled(!model.isReady)
                } footer: {
                    Text("Reads today's step count from Apple Health and pushes it to the "
                        + "glasses' Steps standby widget, so the lens matches the phone. "
                        + "Add the Steps widget under Standby Components to see it. Needs "
                        + "Health access; a denied count reads as 0.")
                }

                Section {
                    Button("Forget these glasses", role: .destructive) {
                        model.forgetGlasses()
                    }
                    .disabled(!model.hasKnownGlasses)
                } footer: {
                    Text("Clears the saved identifier so the next connect scans again.")
                }
            }
            .navigationTitle("MYVU")
        }
    }

    /// The live level once the glasses have pushed one; `info.battery` is the
    /// pairing snapshot and never updates.
    private func batteryText(_ info: DeviceInfo) -> String {
        guard let live = model.battery else { return "\(info.battery)%" }
        return live.isCharging ? "\(live.percent)% (charging)" : "\(live.percent)%"
    }
}
