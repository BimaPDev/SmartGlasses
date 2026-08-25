import AuthenticationServices
import CryptoKit
import Foundation
import UIKit

/// Spotify Web API auth (PKCE) for reading the user's currently-playing track.
///
/// Needs a Client ID from https://developer.spotify.com/dashboard and a
/// redirect URI of `myvudemo://spotify-callback` whitelisted on that app.
@MainActor
final class SpotifyAuth: NSObject, ObservableObject {
    static let redirectURI = "myvudemo://spotify-callback"
    static let scopes = "user-read-currently-playing user-read-playback-state"

    @Published private(set) var isAuthorized = false
    @Published var statusMessage = ""
    @Published var clientId: String {
        didSet { UserDefaults.standard.set(clientId, forKey: "spotifyClientId") }
    }

    private var accessToken: String {
        get { UserDefaults.standard.string(forKey: "spotifyAccessToken") ?? "" }
        set { UserDefaults.standard.set(newValue, forKey: "spotifyAccessToken") }
    }
    private var refreshToken: String {
        get { UserDefaults.standard.string(forKey: "spotifyRefreshToken") ?? "" }
        set { UserDefaults.standard.set(newValue, forKey: "spotifyRefreshToken") }
    }
    private var tokenExpiry: Double {
        get { UserDefaults.standard.double(forKey: "spotifyTokenExpiry") }
        set { UserDefaults.standard.set(newValue, forKey: "spotifyTokenExpiry") }
    }

    private var codeVerifier = ""
    private var session: ASWebAuthenticationSession?

    override init() {
        clientId = UserDefaults.standard.string(forKey: "spotifyClientId") ?? ""
        super.init()
        isAuthorized = !accessToken.isEmpty
    }

    var hasClientId: Bool {
        !clientId.trimmingCharacters(in: .whitespacesAndNewlines).isEmpty
    }

    func signOut() {
        accessToken = ""
        refreshToken = ""
        tokenExpiry = 0
        isAuthorized = false
        statusMessage = "Signed out of Spotify"
    }

    /// Opens Spotify / browser login. Call from a button action.
    func authorize() {
        let id = clientId.trimmingCharacters(in: .whitespacesAndNewlines)
        guard !id.isEmpty else {
            statusMessage = "Paste your Spotify Client ID first"
            return
        }

        codeVerifier = Self.randomVerifier()
        let challenge = Self.challenge(for: codeVerifier)

        var components = URLComponents(string: "https://accounts.spotify.com/authorize")!
        components.queryItems = [
            URLQueryItem(name: "client_id", value: id),
            URLQueryItem(name: "response_type", value: "code"),
            URLQueryItem(name: "redirect_uri", value: Self.redirectURI),
            URLQueryItem(name: "scope", value: Self.scopes),
            URLQueryItem(name: "code_challenge_method", value: "S256"),
            URLQueryItem(name: "code_challenge", value: challenge),
        ]

        guard let url = components.url else { return }
        let auth = ASWebAuthenticationSession(
            url: url,
            callbackURLScheme: "myvudemo"
        ) { [weak self] callbackURL, error in
            Task { @MainActor in
                guard let self else { return }
                if let error {
                    self.statusMessage = error.localizedDescription
                    return
                }
                guard let callbackURL,
                      let code = URLComponents(url: callbackURL, resolvingAgainstBaseURL: false)?
                        .queryItems?.first(where: { $0.name == "code" })?.value
                else {
                    self.statusMessage = "No auth code returned"
                    return
                }
                await self.exchangeCode(code)
            }
        }
        auth.presentationContextProvider = self
        auth.prefersEphemeralWebBrowserSession = false
        session = auth
        _ = auth.start()
    }

    /// Valid bearer token, refreshing if needed.
    func validAccessToken() async throws -> String {
        if !accessToken.isEmpty, Date().timeIntervalSince1970 < tokenExpiry - 30 {
            return accessToken
        }
        try await refresh()
        guard !accessToken.isEmpty else { throw URLError(.userAuthenticationRequired) }
        return accessToken
    }

    // MARK: - Token exchange

    private func exchangeCode(_ code: String) async {
        do {
            let id = clientId.trimmingCharacters(in: .whitespacesAndNewlines)
            var request = URLRequest(url: URL(string: "https://accounts.spotify.com/api/token")!)
            request.httpMethod = "POST"
            request.setValue("application/x-www-form-urlencoded",
                             forHTTPHeaderField: "Content-Type")
            let body = [
                "grant_type": "authorization_code",
                "code": code,
                "redirect_uri": Self.redirectURI,
                "client_id": id,
                "code_verifier": codeVerifier,
            ]
            request.httpBody = Self.formEncode(body).data(using: .utf8)
            let (data, response) = try await URLSession.shared.data(for: request)
            try storeTokens(data: data, response: response)
            statusMessage = "Spotify connected"
            isAuthorized = true
        } catch {
            statusMessage = "Token exchange failed: \(error.localizedDescription)"
            isAuthorized = false
        }
    }

    private func refresh() async throws {
        let id = clientId.trimmingCharacters(in: .whitespacesAndNewlines)
        guard !refreshToken.isEmpty, !id.isEmpty else {
            throw URLError(.userAuthenticationRequired)
        }
        var request = URLRequest(url: URL(string: "https://accounts.spotify.com/api/token")!)
        request.httpMethod = "POST"
        request.setValue("application/x-www-form-urlencoded",
                         forHTTPHeaderField: "Content-Type")
        let body = [
            "grant_type": "refresh_token",
            "refresh_token": refreshToken,
            "client_id": id,
        ]
        request.httpBody = Self.formEncode(body).data(using: .utf8)
        let (data, response) = try await URLSession.shared.data(for: request)
        try storeTokens(data: data, response: response)
        isAuthorized = true
    }

    private func storeTokens(data: Data, response: URLResponse) throws {
        guard let http = response as? HTTPURLResponse, http.statusCode == 200,
              let json = try JSONSerialization.jsonObject(with: data) as? [String: Any],
              let access = json["access_token"] as? String,
              let expires = json["expires_in"] as? Int
        else {
            let body = String(data: data, encoding: .utf8) ?? ""
            throw NSError(domain: "SpotifyAuth", code: 1,
                          userInfo: [NSLocalizedDescriptionKey: "Bad token response: \(body)"])
        }
        accessToken = access
        if let refresh = json["refresh_token"] as? String, !refresh.isEmpty {
            refreshToken = refresh
        }
        tokenExpiry = Date().timeIntervalSince1970 + Double(expires)
    }

    // MARK: - PKCE helpers

    private static func randomVerifier() -> String {
        var bytes = [UInt8](repeating: 0, count: 32)
        _ = SecRandomCopyBytes(kSecRandomDefault, bytes.count, &bytes)
        return Data(bytes).base64URLEncodedString()
    }

    private static func challenge(for verifier: String) -> String {
        let digest = SHA256.hash(data: Data(verifier.utf8))
        return Data(digest).base64URLEncodedString()
    }

    private static func formEncode(_ fields: [String: String]) -> String {
        fields.map { key, value in
            let k = key.addingPercentEncoding(withAllowedCharacters: .urlQueryAllowed) ?? key
            let v = value.addingPercentEncoding(withAllowedCharacters: .urlQueryAllowed) ?? value
            return "\(k)=\(v)"
        }.joined(separator: "&")
    }
}

extension SpotifyAuth: ASWebAuthenticationPresentationContextProviding {
    func presentationAnchor(for session: ASWebAuthenticationSession) -> ASPresentationAnchor {
        UIApplication.shared.connectedScenes
            .compactMap { $0 as? UIWindowScene }
            .flatMap(\.windows)
            .first { $0.isKeyWindow } ?? ASPresentationAnchor()
    }
}

private extension Data {
    func base64URLEncodedString() -> String {
        base64EncodedString()
            .replacingOccurrences(of: "+", with: "-")
            .replacingOccurrences(of: "/", with: "_")
            .replacingOccurrences(of: "=", with: "")
    }
}
