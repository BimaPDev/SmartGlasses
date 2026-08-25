import Foundation
import MyvuCore

/// Keeps the glasses' weather panel up to date.
///
/// The cadence mirrors the official app exactly: push on connect, refresh every
/// 30 minutes, and retry after 30 seconds on failure. It also answers the
/// glasses' own `syncWeather` requests, which the official app parses and then
/// curiously drops.
///
/// THREADING: network and location work happen in a detached task; the send is
/// posted back onto the client's protocol queue.
public final class WeatherSync: MyvuClientObserver {
    /// How often to refresh, matching the official app's WeatherMonitor.
    private static let refreshInterval: TimeInterval = 30 * 60
    /// Its retry delay after a failed query.
    private static let retryInterval: TimeInterval = 30
    /// Bound on waiting for a location fix before giving up on this round.
    private static let fixTimeout: TimeInterval = 20

    private let client: MyvuClient
    private let location: WeatherLocationProviding
    private let unit: TemperatureUnit
    private let scheduler: Scheduler
    private let timer = TimerSlot()

    private var running = false
    /// Guards against two overlapping rounds (the timer firing while one is in
    /// flight).
    private var inFlight = false
    private var round: Task<Void, Never>?

    /// Pushes weather over `client`, for the point `location` reports.
    ///
    /// - Parameter unit: defaults to the phone's locale (°F in the US). The
    ///   glasses have no unit flag on the wire, so this only changes the number.
    public init(client: MyvuClient, location: WeatherLocationProviding,
                unit: TemperatureUnit = .forCurrentLocale) {
        self.client = client
        self.location = location
        self.unit = unit
        self.scheduler = client.scheduler
    }

    /// Syncs automatically: pushes whenever the glasses become ready and answers
    /// their refresh requests.
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
        // Every connect should land fresh weather, exactly like the clock and
        // settings the SDK re-applies.
        if state == .ready { start() }
    }

    public func myvuClient(_ client: MyvuClient, didReceive event: GlassesEvent) {
        if case .weatherRequested = event { refresh() }
    }

    // MARK: - Cycle

    /// Begins the cycle AND pushes immediately. Safe to call repeatedly.
    ///
    /// It deliberately does not bail out when already running: the glasses expect
    /// fresh state on every connect, and returning early there leaves them
    /// showing whatever the weather was when the app last started. Re-entry is
    /// harmless — `refresh` has its own in-flight guard, and the timer slot only
    /// ever holds one pending tick.
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
            self.location.cancel()
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
                let fix = try await self.fixWithTimeout()
                let reading = try await OpenMeteo.fetch(latitude: fix.latitude,
                                                        longitude: fix.longitude,
                                                        areaName: fix.areaName,
                                                        unit: self.unit)
                guard !Task.isCancelled else { return }
                self.client.sendWeather(reading)
                SdkLog.log("weather synced: \(reading.condition ?? "?") "
                    + "\(reading.temp.map(String.init) ?? "?")\(self.unit.symbol)"
                    + (reading.areaName.map { " (\($0))" } ?? ""))
                self.finishRound(nextIn: WeatherSync.refreshInterval)
            } catch {
                guard !Task.isCancelled else { return }
                SdkLog.warn("weather round failed: \(error.localizedDescription)")
                self.finishRound(nextIn: WeatherSync.retryInterval)
            }
        }
    }

    /// A provider that never answers would otherwise wedge the cycle forever, so
    /// the wait is bounded and the round simply retries later.
    private func fixWithTimeout() async throws -> WeatherFix {
        try await withThrowingTaskGroup(of: WeatherFix.self) { group in
            group.addTask { try await self.location.requestFix() }
            group.addTask {
                try await Task.sleep(nanoseconds: UInt64(WeatherSync.fixTimeout * 1_000_000_000))
                self.location.cancel()
                throw MyvuError.timedOut("no location fix for weather")
            }
            defer { group.cancelAll() }
            guard let fix = try await group.next() else {
                throw MyvuError.timedOut("no location fix for weather")
            }
            return fix
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
