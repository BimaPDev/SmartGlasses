// swift-tools-version: 6.0
import PackageDescription

// The protocol layer is queue-confined rather than actor-isolated (a faithful
// port of the Android SDK's single "conn thread" model), so the package builds
// in Swift 5 language mode. Strict concurrency checking would demand a redesign
// of the transport state machines, not just annotations.
let package = Package(
    name: "MyvuSDK",
    platforms: [
        .iOS(.v15),
        // macOS is supported so the byte-level protocol suite runs on a Mac
        // without a device or simulator.
        .macOS(.v12),
    ],
    products: [
        .library(name: "MyvuCore", targets: ["MyvuCore"]),
        .library(name: "MyvuNav", targets: ["MyvuNav"]),
        .library(name: "MyvuAI", targets: ["MyvuAI"]),
        .library(name: "MyvuWeather", targets: ["MyvuWeather"]),
    ],
    targets: [
        .target(
            name: "MyvuCore",
            resources: [.copy("Resources/captured_init.txt")],
            swiftSettings: [.swiftLanguageMode(.v5)]
        ),
        .target(
            name: "MyvuNav",
            dependencies: ["MyvuCore"],
            swiftSettings: [.swiftLanguageMode(.v5)]
        ),
        .target(
            name: "MyvuAI",
            dependencies: ["MyvuCore"],
            swiftSettings: [.swiftLanguageMode(.v5)]
        ),
        .target(
            name: "MyvuWeather",
            dependencies: ["MyvuCore"],
            swiftSettings: [.swiftLanguageMode(.v5)]
        ),
        .testTarget(
            name: "MyvuCoreTests",
            dependencies: ["MyvuCore"],
            swiftSettings: [.swiftLanguageMode(.v5)]
        ),
        .testTarget(
            name: "MyvuNavTests",
            dependencies: ["MyvuNav", "MyvuCore"],
            swiftSettings: [.swiftLanguageMode(.v5)]
        ),
        .testTarget(
            name: "MyvuAITests",
            dependencies: ["MyvuAI", "MyvuCore"],
            swiftSettings: [.swiftLanguageMode(.v5)]
        ),
        .testTarget(
            name: "MyvuWeatherTests",
            dependencies: ["MyvuWeather", "MyvuCore"],
            swiftSettings: [.swiftLanguageMode(.v5)]
        ),
    ]
)
