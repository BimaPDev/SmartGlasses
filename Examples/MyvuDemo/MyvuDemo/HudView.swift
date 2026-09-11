import MyvuCore
import SwiftUI

/// A full-panel HUD, built on the teleprompter surface instead of the standby row.
///
/// ## Why not the standby screen
///
/// The standby row is a strip of four fixed circular slots, and we hit three separate
/// walls there: a 48px font fits the slot's *label* but the slot clips it to ~74px, the
/// slot cannot grow much because it is one of four, and the ring is drawn by something
/// below the widget code. Each fix is its own firmware patch with its own brick risk,
/// and all three together still only buy a small clock in a tile.
///
/// The teleprompter renders arbitrary text across the whole panel with no tiles and no
/// rings, driven entirely from the phone. No flashing, no risk, and structurally much
/// closer to what a Halliday-style HUD actually looks like.
///
/// ## The one catch
///
/// Per `PROTOCOL.md`, the teleprompter shows "Please Connect to the mobile first" until
/// the HFP + RFCOMM audio link is up — BLE alone is not enough. There is no reliable way
/// to ask whether that link exists, so a notification card is offered as the fallback.
struct HudView: View {
    @EnvironmentObject private var model: GlassesModel
    @StateObject private var store = PlaceListStore()

    @AppStorage("hudShowClock")   private var showClock = true
    @AppStorage("hudShowDate")    private var showDate = true
    @AppStorage("hudShowBattery") private var showBattery = false
    @AppStorage("hudTitle")       private var title = "HUD"
    @AppStorage("hudBody")        private var bodyText = "Squats 5x5\nBench press 3x8\nDeadlift 1x5"

    @State private var lastPush = ""
    @State private var autoRefresh = false
    @State private var ticker: Timer?

    var body: some View {
        Form {
            Section {
                Text(composed())
                    .font(.system(.body, design: .monospaced))
                    .frame(maxWidth: .infinity, alignment: .leading)
                    .padding(10)
                    .background(Color.black)
                    .foregroundStyle(Color.green)
                    .clipShape(RoundedRectangle(cornerRadius: 8))
            } header: {
                Text("Preview")
            } footer: {
                Text("Roughly what lands on the lens. The teleprompter picks its own "
                   + "font, so treat this as content, not pixel layout.")
            }

            Section("Content") {
                Toggle("Clock", isOn: $showClock)
                Toggle("Date", isOn: $showDate)
                Toggle("Glasses battery", isOn: $showBattery)
                TextField("Title", text: $title)
                VStack(alignment: .leading, spacing: 4) {
                    Text("Lines").font(.caption).foregroundStyle(.secondary)
                    TextEditor(text: $bodyText)
                        .frame(minHeight: 120)
                        .font(.system(.body, design: .monospaced))
                }
            }

            Section {
                Button {
                    push(.teleprompter)
                } label: {
                    Label("Send to teleprompter (full panel)", systemImage: "rectangle.portrait")
                }
                .disabled(!model.isReady)

                Button {
                    push(.card)
                } label: {
                    Label("Send as notification card", systemImage: "rectangle.badge.plus")
                }
                .disabled(!model.isReady)

                Toggle("Refresh every minute", isOn: $autoRefresh)
                    .onChange(of: autoRefresh) { _, on in on ? startTicker() : stopTicker() }
            } header: {
                Text("Send")
            } footer: {
                Text("Teleprompter needs the HFP + RFCOMM audio link; without it the "
                   + "glasses show \"Please Connect to the mobile first\". Cards work "
                   + "over BLE alone but are short-lived.")
            }

            if !lastPush.isEmpty {
                Section("Last push") {
                    Text(lastPush).font(.footnote).foregroundStyle(.secondary)
                }
            }
        }
        .navigationTitle("HUD")
        .navigationBarTitleDisplayMode(.inline)
        .onDisappear { stopTicker() }
    }

    // MARK: - Composition

    private func composed() -> String {
        var lines: [String] = []
        let now = Date()
        if showClock {
            lines.append(now.formatted(.dateTime.hour(.twoDigits(amPM: .omitted)).minute()))
        }
        if showDate {
            lines.append(now.formatted(.dateTime.weekday(.abbreviated).day().month(.abbreviated)))
        }
        if showBattery, let b = model.battery {
            lines.append("battery \(b.percent)%")
        }
        if !lines.isEmpty { lines.append("") }
        let body = bodyText.split(separator: "\n", omittingEmptySubsequences: true)
            .map { $0.trimmingCharacters(in: .whitespaces) }
            .filter { !$0.isEmpty }
        lines += body
        return lines.joined(separator: "\n")
    }

    // MARK: - Sending

    private enum Surface { case teleprompter, card }

    private func push(_ surface: Surface) {
        let text = composed()
        guard !text.isEmpty else { lastPush = "nothing to send"; return }
        switch surface {
        case .teleprompter:
            model.glasses.openTeleprompter(text, title: title)
            lastPush = "teleprompter · \(text.split(separator: "\n").count) lines · "
                     + Date().formatted(date: .omitted, time: .standard)
        case .card:
            model.glasses.showNotification(title: title, body: text)
            lastPush = "card · \(Date().formatted(date: .omitted, time: .standard))"
        }
        LogStore.shared.log(level: .info, message: "[HUD] \(lastPush)", error: nil)
    }

    /// Re-pushes on the minute so the clock does not go stale. Deliberately a full
    /// re-send: there is no partial-update path on this surface.
    private func startTicker() {
        stopTicker()
        ticker = Timer.scheduledTimer(withTimeInterval: 60, repeats: true) { _ in
            Task { @MainActor in
                guard model.isReady else { return }
                push(.teleprompter)
            }
        }
    }

    private func stopTicker() {
        ticker?.invalidate()
        ticker = nil
    }
}
