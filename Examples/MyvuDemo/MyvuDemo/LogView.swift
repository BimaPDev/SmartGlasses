import MyvuCore
import SwiftUI

struct LogView: View {
    @ObservedObject private var store = LogStore.shared
    @State private var showTrace = true

    var body: some View {
        NavigationStack {
            ScrollViewReader { proxy in
                List(store.lines) { line in
                    Text(line.text)
                        .font(.system(.caption, design: .monospaced))
                        .foregroundStyle(colour(for: line.level))
                        .id(line.id)
                }
                .listStyle(.plain)
                .onChange(of: store.lines.count) {
                    // Follow the tail: the interesting part of a handshake is
                    // always the last few lines.
                    guard let last = store.lines.last else { return }
                    withAnimation { proxy.scrollTo(last.id, anchor: .bottom) }
                }
            }
            .navigationTitle("Log")
            .toolbar {
                ToolbarItem(placement: .topBarLeading) {
                    Toggle("Trace", isOn: $showTrace)
                        .toggleStyle(.button)
                        .onChange(of: showTrace) {
                            SdkLog.minimumLevel = showTrace ? .trace : .info
                        }
                }
                ToolbarItem(placement: .topBarTrailing) {
                    // The capture leaves the phone through the share sheet:
                    // AirDrop or Files is the shortest path to a machine where
                    // the hex can actually be read.
                    ShareLink(item: store.text) {
                        Image(systemName: "square.and.arrow.up")
                    }
                }
                ToolbarItem(placement: .topBarTrailing) {
                    Button("Clear") { store.clear() }
                }
            }
        }
    }

    private func colour(for level: LogLevel) -> Color {
        switch level {
        case .trace: return .secondary
        case .info: return .primary
        case .warn: return .orange
        case .error: return .red
        }
    }
}
