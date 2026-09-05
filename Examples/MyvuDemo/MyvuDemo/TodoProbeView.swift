import MyvuAI
import MyvuCore
import SwiftUI

/// Runs `TodoProbe` against the connected glasses and shows the transcript.
///
/// The glasses already contain `TodoDomainView` / `ScheduleDomainView`; what is unknown
/// is the message that opens one. Every payload this sends is a guess, so the useful
/// output is the transcript — particularly any `<-` line, which is the glasses reacting.
struct TodoProbeView: View {
    @EnvironmentObject private var model: GlassesModel
    @State private var lines: [String] = []
    @State private var running = false
    @State private var gap: Double = 3

    var body: some View {
        VStack(spacing: 0) {
            transcript
            Divider()
            controls
        }
        .navigationTitle("Todo probe")
        .navigationBarTitleDisplayMode(.inline)
        .toolbar {
            ToolbarItem(placement: .topBarTrailing) {
                Button("Copy") {
                    UIPasteboard.general.string = lines.joined(separator: "\n")
                }
                .disabled(lines.isEmpty)
            }
        }
    }

    private var transcript: some View {
        ScrollViewReader { proxy in
            ScrollView {
                LazyVStack(alignment: .leading, spacing: 2) {
                    if lines.isEmpty {
                        Text("""
                        Sends a ladder of candidate messages that might open the glasses' \
                        built-in Todo or Schedule view, and logs everything that comes back.

                        No firmware change — those views are already on the device. Every \
                        payload is a guess; what matters is whether any "<-" line appears.
                        """)
                        .font(.footnote)
                        .foregroundStyle(.secondary)
                        .padding()
                    }
                    ForEach(Array(lines.enumerated()), id: \.offset) { i, line in
                        Text(line)
                            .font(.system(.caption, design: .monospaced))
                            .foregroundStyle(colour(for: line))
                            .frame(maxWidth: .infinity, alignment: .leading)
                            .textSelection(.enabled)
                            .id(i)
                    }
                }
                .padding(.horizontal, 10)
                .padding(.vertical, 6)
            }
            .onChange(of: lines.count) { _, n in
                guard n > 0 else { return }
                withAnimation { proxy.scrollTo(n - 1, anchor: .bottom) }
            }
        }
    }

    private var controls: some View {
        VStack(spacing: 10) {
            HStack {
                Text("Gap between sends")
                    .font(.footnote).foregroundStyle(.secondary)
                Spacer()
                Text("\(gap, specifier: "%.0f")s")
                    .font(.system(.footnote, design: .monospaced))
            }
            Slider(value: $gap, in: 1...10, step: 1).disabled(running)

            HStack(spacing: 10) {
                Button {
                    Task { await run() }
                } label: {
                    HStack {
                        if running { ProgressView().controlSize(.small) }
                        Text(running ? "Running…" : "Run probe")
                    }
                    .frame(maxWidth: .infinity)
                }
                .buttonStyle(.borderedProminent)
                .disabled(running || model.state != .ready)

                Button("Clear") { lines = [] }
                    .buttonStyle(.bordered)
                    .disabled(running || lines.isEmpty)
            }

            if model.state != .ready {
                Text("Connect to the glasses first.")
                    .font(.caption).foregroundStyle(.orange)
            }
        }
        .padding()
    }

    private func colour(for line: String) -> Color {
        if line.contains("<-") { return .green }          // the glasses answered
        if line.hasPrefix("[") || line.contains("->") { return .primary }
        if line.hasPrefix("     why:") { return .secondary }
        if line.contains("NOTHING came back") { return .orange }
        return .secondary
    }

    @MainActor
    private func run() async {
        running = true
        lines.append("── run at \(Date().formatted(date: .omitted, time: .standard)) ──")
        await TodoProbe.run(on: model.glasses, gapSeconds: gap) { line in
            Task { @MainActor in
                lines.append(line)
                LogStore.shared.log(level: .info, message: "[TodoProbe] \(line)", error: nil)
            }
        }
        running = false
    }
}
