import Foundation
import MyvuCore

/// Turns a maps URL shared from another app into a destination `NavSession` can
/// route to.
///
/// iOS exposes no way to observe another app's navigation — Live Activities,
/// notifications and CarPlay templates are all sandboxed to the app that owns
/// them. Handing a destination across is the one transfer the platform does
/// allow, so this parses what Apple Maps, Google Maps and Waze put on the
/// clipboard or the share sheet.
///
/// The result is a string `NavSession.start(_:)` already understands: either
/// `"lat,lon"` or a place name for Nominatim to geocode.
public enum MapsLink {
    /// Query keys that carry a destination, across all three apps.
    ///
    /// Order matters: `daddr`/`destination` are an explicit *destination*, while
    /// `ll`/`center` may be only the map's viewport, so the explicit ones win.
    private static let destinationKeys = ["daddr", "destination", "coordinate", "q", "ll",
                                          "sll", "center"]

    /// Hosts whose links are short and must be resolved over the network first.
    private static let shortenerHosts = ["maps.app.goo.gl", "goo.gl", "maps.apple",
                                         "g.co"]

    /// Extracts a destination without touching the network.
    ///
    /// Returns nil when the text holds no usable destination — including for
    /// short links, which carry the coordinates only on the far side of a
    /// redirect. Use `resolve(_:)` for those.
    public static func destination(from text: String) -> String? {
        let trimmed = text.trimmingCharacters(in: .whitespacesAndNewlines)
        guard let url = firstURL(in: trimmed) else { return nil }

        if let components = URLComponents(url: url, resolvingAgainstBaseURL: false) {
            let items = components.queryItems ?? []
            for key in destinationKeys {
                guard let raw = items.first(where: { $0.name.lowercased() == key })?.value,
                      let value = cleaned(raw) else { continue }
                return value
            }
        }
        // Google puts the map centre in the PATH as "@lat,lon,17z" — the only
        // coordinates in a plain "/maps/place/..." share link.
        return atCoordinate(in: url.absoluteString)
    }

    /// Follows a short link if needed, then extracts the destination.
    ///
    /// Short links (`maps.app.goo.gl`, `goo.gl/maps`) carry nothing but an
    /// opaque id, so the coordinates only exist after the redirect. URLSession
    /// follows redirects itself; the final URL is what we parse.
    public static func resolve(_ text: String,
                               session: URLSession = .shared) async -> String? {
        if let direct = destination(from: text) { return direct }
        guard let url = firstURL(in: text), isShortened(url) else { return nil }

        do {
            var request = URLRequest(url: url)
            request.timeoutInterval = 10
            // Some shorteners return the interstitial rather than a redirect to
            // clients they do not recognise, so ask as a browser would.
            request.setValue("Mozilla/5.0", forHTTPHeaderField: "User-Agent")
            let (data, response) = try await session.data(for: request)

            if let final = response.url, final != url,
               let found = destination(from: final.absoluteString) {
                return found
            }
            // Fall back to the body: the coordinates are usually in there even
            // when the redirect did not land somewhere parseable.
            let body = String(decoding: data, as: UTF8.self)
            return atCoordinate(in: body) ?? destination(from: body)
        } catch {
            SdkLog.warn("could not resolve maps link: \(error.localizedDescription)")
            return nil
        }
    }

    // MARK: - Parsing

    /// The first http(s) URL in arbitrary shared text.
    ///
    /// Share sheets rarely hand over a bare URL — Google Maps sends a title and
    /// an address alongside it — so the link has to be picked out of prose.
    private static func firstURL(in text: String) -> URL? {
        if let url = URL(string: text), url.scheme?.hasPrefix("http") == true {
            return url
        }
        for token in text.split(whereSeparator: { $0.isWhitespace || $0 == "\n" }) {
            let candidate = String(token).trimmingCharacters(in: CharacterSet(charactersIn: "<>()[],"))
            if candidate.lowercased().hasPrefix("http"), let url = URL(string: candidate) {
                return url
            }
        }
        return nil
    }

    private static func isShortened(_ url: URL) -> Bool {
        guard let host = url.host?.lowercased() else { return false }
        return shortenerHosts.contains { host == $0 || host.hasSuffix(".\($0)") }
    }

    /// Google's `@lat,lon,17z` path segment.
    private static func atCoordinate(in text: String) -> String? {
        var search = Substring(text)
        while let at = search.firstIndex(of: "@") {
            let rest = search[search.index(after: at)...]
            let candidate = rest.prefix { "0123456789.,-".contains($0) }
            if let point = coordinatePair(String(candidate)) { return point }
            search = rest
        }
        return nil
    }

    /// Normalises one parameter value: coordinates stay coordinates, anything
    /// else is returned as a place name for geocoding.
    private static func cleaned(_ raw: String) -> String? {
        let decoded = raw.removingPercentEncoding ?? raw
        let value = decoded.trimmingCharacters(in: .whitespaces)
        guard !value.isEmpty else { return nil }
        if let point = coordinatePair(value) { return point }
        // It parsed as a number pair but failed validation, so it was MEANT to
        // be coordinates and is simply wrong. Passing it on as a place name
        // would let a geocoder turn a bad number into a confidently wrong
        // location somewhere else entirely.
        if looksNumeric(value) { return nil }
        // A bare id or plus-code is not something Nominatim can resolve, and
        // routing to a wrong guess is worse than refusing.
        guard value.contains(" ") || value.contains(",") || value.count > 3 else { return nil }
        return value.replacingOccurrences(of: "+", with: " ")
    }

    /// Whether a value was written as a comma-separated number pair, regardless
    /// of whether those numbers are valid coordinates.
    private static func looksNumeric(_ value: String) -> Bool {
        let parts = value.split(separator: ",", omittingEmptySubsequences: false)
        guard parts.count >= 2 else { return false }
        return Double(parts[0].trimmingCharacters(in: .whitespaces)) != nil
            && Double(parts[1].trimmingCharacters(in: .whitespaces)) != nil
    }

    /// Parses "lat,lon" and range-checks it, tolerating trailing junk such as
    /// Google's zoom suffix.
    private static func coordinatePair(_ value: String) -> String? {
        let parts = value.split(separator: ",", omittingEmptySubsequences: false)
        guard parts.count >= 2,
              let lat = Double(parts[0].trimmingCharacters(in: .whitespaces)),
              let lon = Double(parts[1].trimmingCharacters(in: .whitespaces)),
              lat >= -90, lat <= 90, lon >= -180, lon <= 180,
              // 0,0 is the null island a failed parse produces, not a place
              // anyone shares.
              !(lat == 0 && lon == 0) else { return nil }
        return "\(lat),\(lon)"
    }
}
