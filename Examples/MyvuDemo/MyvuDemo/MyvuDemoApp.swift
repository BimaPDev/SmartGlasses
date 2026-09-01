import MyvuCore
import SwiftUI

@main
struct MyvuDemoApp: App {
    @StateObject private var glasses = GlassesModel()

    init() {
        // Route the SDK's own logging into the app's log tab. Do this before
        // anything touches the SDK so nothing is missed.
        SdkLog.setLogger(LogStore.shared)
        // This build exists to capture traffic, so the per-packet wire log is on
        // from launch rather than from whenever the Log tab's toggle is flipped.
        SdkLog.minimumLevel = .trace
        // iOS wants this before launch finishes, and a banner raised while the
        // app is open is swallowed without it.
        AlertPresenter.install()
    }

    var body: some Scene {
        WindowGroup {
            ContentView()
                .environmentObject(glasses)
        }
    }
}
