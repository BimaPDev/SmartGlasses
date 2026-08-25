import Foundation
import MyvuAI

/// Speech-to-text over Groq's Whisper endpoint.
///
/// Sample code, not part of the SDK: it shows what a `SpeechToText` has to do,
/// which is take PCM and return a sentence. Swap in `SFSpeechRecognizer`, a
/// local model, or any other service.
///
/// The multipart body is assembled by hand — one file field and three text
/// fields does not justify an HTTP library.
final class GroqSpeechToText: SpeechToText {
    private static let endpoint = URL(string: "https://api.groq.com/openai/v1/audio/transcriptions")!
    private static let model = "whisper-large-v3-turbo"
    private static let boundary = "----myvudemoboundary"
    private static let timeout: TimeInterval = 30
    /// Below this the "audio" is almost certainly silence or a stray click.
    /// 0.5s at 16 kHz mono 16-bit.
    private static let minPcmBytes = 16000

    private let apiKey: String

    init(apiKey: String) {
        self.apiKey = apiKey
    }

    var isReady: Bool { !apiKey.trimmingCharacters(in: .whitespaces).isEmpty }

    /// - Parameter sampleRate: must be the decoder's REAL output rate.
    ///   Mislabelling it stretches the audio and Whisper transcribes something
    ///   else entirely, confidently.
    func transcribe(pcm: Data, sampleRate: Int, channels: Int) async throws -> String? {
        guard isReady else {
            throw DemoError("no Groq API key set")
        }
        guard pcm.count >= GroqSpeechToText.minPcmBytes else { return "" }

        let wav = Wav.encode(pcm: pcm, sampleRate: sampleRate, channels: channels)
        var request = URLRequest(url: GroqSpeechToText.endpoint,
                                 timeoutInterval: GroqSpeechToText.timeout)
        request.httpMethod = "POST"
        request.setValue("Bearer \(apiKey)", forHTTPHeaderField: "Authorization")
        request.setValue("multipart/form-data; boundary=\(GroqSpeechToText.boundary)",
                         forHTTPHeaderField: "Content-Type")

        var body = Data()
        appendFile(&body, name: "file", filename: "speech.wav",
                   contentType: "audio/wav", data: wav)
        appendText(&body, name: "model", value: GroqSpeechToText.model)
        // Pinning the language stops Whisper hallucinating a translation from a
        // short or noisy clip.
        appendText(&body, name: "language", value: "en")
        appendText(&body, name: "response_format", value: "json")
        body.append(Data("--\(GroqSpeechToText.boundary)--\r\n".utf8))
        request.httpBody = body

        let (data, response) = try await URLSession.shared.data(for: request)
        if let http = response as? HTTPURLResponse, http.statusCode >= 400 {
            throw DemoError("Groq returned \(http.statusCode): "
                + String(decoding: data.prefix(200), as: UTF8.self))
        }
        let json = try JSONSerialization.jsonObject(with: data) as? [String: Any]
        return (json?["text"] as? String)?.trimmingCharacters(in: .whitespacesAndNewlines)
    }

    private func appendFile(_ body: inout Data, name: String, filename: String,
                            contentType: String, data: Data) {
        let disposition = "Content-Disposition: form-data; name=\"\(name)\"; "
            + "filename=\"\(filename)\"\r\n"
        body.append(Data("--\(GroqSpeechToText.boundary)\r\n".utf8))
        body.append(Data(disposition.utf8))
        body.append(Data("Content-Type: \(contentType)\r\n\r\n".utf8))
        body.append(data)
        body.append(Data("\r\n".utf8))
    }

    private func appendText(_ body: inout Data, name: String, value: String) {
        body.append(Data("--\(GroqSpeechToText.boundary)\r\n".utf8))
        body.append(Data("Content-Disposition: form-data; name=\"\(name)\"\r\n\r\n".utf8))
        body.append(Data("\(value)\r\n".utf8))
    }
}

struct DemoError: LocalizedError {
    let message: String
    init(_ message: String) { self.message = message }
    var errorDescription: String? { message }
}
