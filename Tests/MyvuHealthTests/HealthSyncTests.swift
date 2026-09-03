import XCTest
@testable import MyvuCore
@testable import MyvuHealth

/// A step source under test control. `todaySteps()` records that it was asked
/// and returns a canned value (or throws), fulfilling an expectation.
private final class FakeStepSource: StepCountProviding, @unchecked Sendable {
    var value = 0
    var error: Error?
    let onRead: () -> Void

    init(onRead: @escaping () -> Void) { self.onRead = onRead }

    func todaySteps() async throws -> Int {
        onRead()
        if let error { throw error }
        return value
    }
}

/// Exercises HealthSync's wiring against a real (unconnected) MyvuClient: the
/// glasses' `syncSport` request must drive a read from the injected source.
/// The push itself is dropped because no session is up, which is fine — this
/// asserts the source is consulted, not the bytes on the wire.
final class HealthSyncTests: XCTestCase {
    func testStepsRequestTriggersASourceRead() {
        let read = expectation(description: "source read on steps request")
        let source = FakeStepSource { read.fulfill() }
        source.value = 5000

        let client = MyvuClient()
        let sync = HealthSync(client: client, source: source)
        sync.attach()
        defer { sync.detach() }

        // Simulate the glasses asking for a refresh.
        sync.myvuClient(client, didReceive: .stepsRequested)

        wait(for: [read], timeout: 2)
    }

    func testFailingSourceStillCompletesTheRound() {
        let read = expectation(description: "failing source is read")
        let source = FakeStepSource { read.fulfill() }
        source.error = MyvuError.notReady("health denied")

        let client = MyvuClient()
        let sync = HealthSync(client: client, source: source)
        sync.attach()
        defer { sync.detach() }

        sync.myvuClient(client, didReceive: .stepsRequested)

        // The round must not wedge on a throwing source; the read is attempted.
        wait(for: [read], timeout: 2)
    }
}
