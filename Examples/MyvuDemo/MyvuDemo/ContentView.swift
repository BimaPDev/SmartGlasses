import MyvuCore
import SwiftUI

struct ContentView: View {
    @EnvironmentObject private var model: GlassesModel

    var body: some View {
        TabView {
            ConnectionView()
                .tabItem { Label("Connect", systemImage: "eyeglasses") }
            ControlsView()
                .tabItem { Label("Controls", systemImage: "slider.horizontal.3") }
            SettingsView()
                .tabItem { Label("Settings", systemImage: "gearshape") }
            // The assistant lives in Settings › Voice Assistant now. Navigate
            // takes the slot it vacated, which puts the app at five tabs — the
            // most iOS shows before it folds the rest into "More".
            NavView()
                .tabItem { Label("Navigate", systemImage: "location.north.line") }
            LogView()
                .tabItem { Label("Log", systemImage: "text.alignleft") }
        }
    }
}

/// Shown at the top of every tab that needs a live session, so it is always
/// obvious why a control does nothing.
struct StatusBadge: View {
    let state: ConnectionState

    var body: some View {
        HStack(spacing: 8) {
            Circle()
                .fill(color)
                .frame(width: 10, height: 10)
            Text(label)
                .font(.footnote)
                .foregroundStyle(.secondary)
        }
    }

    private var color: Color {
        switch state {
        case .ready: return .green
        case .failed: return .red
        case .idle: return .gray
        default: return .orange
        }
    }

    private var label: String {
        switch state {
        case .idle: return "Not connected"
        case .connecting: return "Connecting over BLE…"
        case .pairing: return "Pairing (ECDH)…"
        case .session: return "Starting session…"
        case .ready: return "Ready"
        case .failed: return "Connection failed"
        }
    }
}

/// Disables a whole section until the session is live.
struct RequiresSession: ViewModifier {
    let ready: Bool

    func body(content: Content) -> some View {
        content
            .disabled(!ready)
            .opacity(ready ? 1 : 0.5)
    }
}

extension View {
    func requiresSession(_ ready: Bool) -> some View {
        modifier(RequiresSession(ready: ready))
    }
}
