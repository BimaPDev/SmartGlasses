import Foundation
import MyvuCore

/// Supplies today's step count for the glasses' Steps widget.
///
/// The concrete iOS source (`HealthKitStepSource`) reads Apple Health, the same
/// well the official app draws from ("access health data to display the user's
/// step count information on the Glasses"). Tests inject their own.
public protocol StepCountProviding {
    /// Steps recorded so far today, in the phone's local calendar day.
    func todaySteps() async throws -> Int
    /// Best-effort cancel of any in-flight query. Optional.
    func cancel()
}

public extension StepCountProviding {
    func cancel() {}
}

#if canImport(HealthKit) && os(iOS)
import HealthKit

/// Reads the cumulative daily step count from Apple Health.
///
/// Requires the HealthKit capability and an `NSHealthShareUsageDescription` in
/// the host app's Info.plist. `requestAuthorization` must succeed before
/// `todaySteps` returns anything but zero — iOS reports read authorisation as
/// "not determined" without erroring, so a denied user simply reads as 0 steps.
public final class HealthKitStepSource: StepCountProviding {
    private let store = HKHealthStore()
    private let stepType = HKQuantityType.quantityType(forIdentifier: .stepCount)!

    public init() {}

    /// Prompts (once) for read access to step count. Safe to call repeatedly.
    public func requestAuthorization() async throws {
        guard HKHealthStore.isHealthDataAvailable() else {
            throw MyvuError.notReady("HealthKit is not available on this device")
        }
        try await withCheckedThrowingContinuation { (cont: CheckedContinuation<Void, Error>) in
            store.requestAuthorization(toShare: [], read: [stepType]) { _, error in
                if let error { cont.resume(throwing: error) } else { cont.resume() }
            }
        }
    }

    public func todaySteps() async throws -> Int {
        guard HKHealthStore.isHealthDataAvailable() else {
            throw MyvuError.notReady("HealthKit is not available on this device")
        }
        let start = Calendar.current.startOfDay(for: Date())
        let predicate = HKQuery.predicateForSamples(withStart: start, end: Date(),
                                                    options: .strictStartDate)
        return try await withCheckedThrowingContinuation { cont in
            let query = HKStatisticsQuery(quantityType: stepType,
                                          quantitySamplePredicate: predicate,
                                          options: .cumulativeSum) { _, stats, error in
                if let error {
                    cont.resume(throwing: error)
                    return
                }
                let steps = stats?.sumQuantity()?.doubleValue(for: .count()) ?? 0
                cont.resume(returning: Int(steps.rounded()))
            }
            store.execute(query)
        }
    }
}
#endif
