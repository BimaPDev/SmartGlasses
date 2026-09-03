import Foundation
import MyvuCore

/// Keeps the glasses' Steps standby widget in sync with the phone's step count.
///
/// The glasses only ever show what the phone feeds them, so this mirrors
/// `WeatherSync`: it pushes on connect, answers the glasses' own `syncSport`
/// refresh requests (fired while the widget is on screen), and refreshes on a
/// timer so a worn pair keeps counting up without waiting for the next request.
///
/// THREADING: the step read happens in a detached task; the send is posted back
/// onto the client's protocol queue.
public final class HealthSync: MyvuClientObserver {
    /// Steps drift up faster than weather changes, so the idle refresh is
    /// tighter than WeatherSync's 30 minutes. The glasses' own `syncSport`
    /// requests do most of the work while the widget is visible.
    private static let refreshInterval: TimeInterval = 5 * 60
    /// Retry delay after a failed read.
    private static let retryInterval: TimeInterval = 60
    /// Bound on a single step read before the round is abandoned and retried.
    private static let readTimeout: TimeInterval = 10

    private let client: MyvuClient
    private let source: StepCountProviding
    private let scheduler: Scheduler
    private let timer = TimerSlot()

    private var running = false
    /// Guards against two overlapping rounds (a timer tick landing on top of a
    /// glasses request).
    private var inFlight = false
    private var round: Task<Void, Never>?

    /// Pushes the step count `source` reports over `client`.
    public init(client: MyvuClient, source: StepCountProviding) {
        self.client = client
        self.source = source
        self.scheduler = client.scheduler
    }

    /// Syncs automatically: pushes on every ready session and answers the
    /// glasses' refresh requests.
    public func attach() {
        client.addObserver(self, queue: scheduler.queue)
        if client.state == .ready { start() }
    }

    public func detach() {
        client.removeObserver(self)
        stop()
    }

    // MARK: - Observer

    public func myvuClient(_ client: MyvuClient, didChangeState state: ConnectionState) {
        if state == .ready { start() }
    }

    public func myvuClient(_ client: MyvuClient, didReceive event: GlassesEvent) {
        if case .stepsRequested = event { refresh() }
    }

    // MARK: - Cycle

    /// Begins the cycle AND pushes immediately. Safe to call repeatedly; re-entry
    /// is harmless because `beginRound` has its own in-flight guard.
    public func start() {
        scheduler.run { [weak self] in
            self?.running = true
            self?.beginRound()
        }
    }

    public func stop() {
        scheduler.run { [weak self] in
            guard let self else { return }
            self.running = false
            self.timer.cancel()
            self.round?.cancel()
            self.round = nil
            self.source.cancel()
        }
    }

    /// Runs one round now, and schedules the next.
    public func refresh() {
        scheduler.run { [weak self] in self?.beginRound() }
    }

    private func beginRound() {
        guard !inFlight else { return }
        inFlight = true

        round = Task { [weak self] in
            guard let self else { return }
            do {
                let steps = try await self.readWithTimeout()
                guard !Task.isCancelled else { return }
                self.client.sendStepCount(Health.Reading(stepCount: steps))
                SdkLog.log("steps synced: \(steps)")
                self.finishRound(nextIn: HealthSync.refreshInterval)
            } catch {
                guard !Task.isCancelled else { return }
                SdkLog.warn("step round failed: \(error.localizedDescription)")
                // Tell the lens the phone could not produce a count rather than
                // leaving it on a stale number; the firmware's errorCode check
                // suppresses the update.
                self.client.sendStepCount(Health.Reading(stepCount: 0, errorCode: 1))
                self.finishRound(nextIn: HealthSync.retryInterval)
            }
        }
    }

    /// A source that never answers would otherwise wedge the cycle, so the read
    /// is bounded and the round simply retries later.
    private func readWithTimeout() async throws -> Int {
        try await withThrowingTaskGroup(of: Int.self) { group in
            group.addTask { try await self.source.todaySteps() }
            group.addTask {
                try await Task.sleep(nanoseconds: UInt64(HealthSync.readTimeout * 1_000_000_000))
                self.source.cancel()
                throw MyvuError.timedOut("no step count from the health source")
            }
            defer { group.cancelAll() }
            guard let steps = try await group.next() else {
                throw MyvuError.timedOut("no step count from the health source")
            }
            return steps
        }
    }

    /// Releases the in-flight guard and schedules the next round.
    private func finishRound(nextIn delay: TimeInterval) {
        scheduler.run { [weak self] in
            guard let self else { return }
            self.inFlight = false
            self.timer.cancel()
            guard self.running else { return }
            self.timer.schedule(on: self.scheduler, after: delay) { [weak self] in
                self?.beginRound()
            }
        }
    }
}
