# MYVU AR (XJOverSeas) — Voice/AI Assistant Stack

Source: `Reverse/IPA/extracted/Payload/XJOverSeas.app`. All paths below are relative
to that app bundle root unless stated otherwise.

## FairPlay limitation

The main binary `XJOverSeas` and the Flutter AOT blob `Frameworks/App.framework/App`,
plus all 99 embedded `.framework` binaries, are FairPlay-encrypted
(`LC_ENCRYPTION_INFO_64`, `cryptid 1` — confirmed in `recon/RECON.md`). This means
none of the actual ASR/NLG/VAD/assistant *logic* (wake-word detection code, decoder
inference glue, dialogue/NLU engine, prompt-construction code) can be disassembled
or class-dumped from this App-Store IPA — `nm`/`strings` against `XJOverSeas` return
only unencrypted `__LINKEDIT` symbol-table noise (mostly Swift/Alamofire/libc++
mangled names), not application classes. Everything reported here comes from
**unencrypted resources only**: bundle `Info.plist` files, JSON configs, ONNX/`.nn`/
`.fst`/`.bin` model files (whose presence and format is observable, not their
weights' semantics), and localized `.strings`/`.html` UI copy. No decrypted native
code is claimed anywhere in this report.

## Component bundles

| Component | Bundle/Framework | Purpose | Evidence |
|---|---|---|---|
| Wake-word / VAD / beamforming / speaker-print front-end | `XJVAD.bundle` (`CFBundleIdentifier org.cocoapods.XJVAD`) | Voice activity detection, keyword (wake-word) spotting, 2-mic beamforming/AEC/noise-suppression front end, speaker verification (voiceprint) | `XJVAD.bundle/Info.plist`; `XJVAD.bundle/res/*.nn` (`vad_model.nn`, `vad_model_en.nn`, `kws_model.nn`, `cwr_model.nn`, `ns_1192.nn`); `res/vprint/campp/*.onnx`, `res/vprint/module0/*.onnx` |
| On-device speech recognition (ASR) | `XJASR.bundle` (`org.cocoapods.XJASR`) | Offline speech-to-text: streaming encoder + CTC + attention decoder, ITN (inverse text normalization) for Chinese, command grammar/hotwords | `XJASR.bundle/Info.plist`; `encoder.onnx` (39.6MB), `decoder.onnx` (14.4MB), `ctc.onnx` (2.2MB), `lang_char.txt` (8404-token vocab), `zh_itn_tagger.fst`/`zh_itn_verbalizer.fst`, `commands.json`, `contexts.json` |
| Natural-language generation (canned TTS response templates) | `XJNLG.bundle` (`org.cocoapods.XJNLG`) | Templated spoken responses (error/fallback prompts, e.g. "Sorry, I didn't quite catch you") in Chinese and localized English | `XJNLG.bundle/Info.plist`; `nlg_template.json` (zh), `nlg_template_hw.json` (en, "hw" = localized/huawei-overseas variant) — both keyed by `functionId` e.g. `GLOBAL01_P22` |
| AR assistant glue/UI bundle | `XJARAssistant.bundle` (`org.cocoapods.XJARAssistant`) | Assistant-facing resource bundle for the AR glasses UI path; contains only `Info.plist` (no JSON/model payload found), so its runtime behavior lives in the (encrypted) framework code that ships it | `XJARAssistant.bundle/Info.plist` — only file present in the bundle |
| Offline command/intent grammar | `XJVAD.bundle/offlineCmd.json`, `offlineCmdPlus.json`, `funcIntent.json` | Maps recognized text (e.g. "打开蓝牙"/"open bluetooth") to `Intent_*` IDs and `domain` (`wakeFree_system`, `wakeFree_ar`, etc.) without needing the cloud NLU | same files |
| Per-scenario VAD/wake tuning profiles | `XJVAD.bundle/gloable-*.config` (7 files) | Per-hardware-variant ("star"/"air"/"air-pro"/English) pipeline configs selecting which `.bin` beamforming resource, decoder cfg, and wake env string to load | `gloable-vadonly-air.config`, `gloable-assistant-star-wkpvadcwronly.config`, etc. — all contain `"env": "ni hao xiao mu"` (wake phrase, transliterated Mandarin "你好小目"/"nihao xiaomu"-style) |

Wake phrase evidence: every `gloable-*.config` file's `faspe.config.env` field is the
literal string `"ni hao xiao mu"` (`XJVAD.bundle/gloable-vadonly-air.config`,
confirmed identically across all 7 config variants).

## On-device vs cloud

- **On-device (bundled models, no network required for the base pipeline):** VAD,
  wake-word/keyword-spotting, beamforming/AEC (`XJVAD.bundle/res/*`), the streaming
  ASR encoder/decoder/CTC ONNX graphs and ITN FSTs (`XJASR.bundle`), the offline
  command grammar (`offlineCmd.json`, `offlineCmdPlus.json`, `commands.json`,
  `contexts.json`), and the canned NLG response templates (`XJNLG.bundle`). This is
  consistent with a WeNet/FunASR-style U2 conformer (encoder+CTC+attention-decoder
  ONNX triad) plus a CAM++-style speaker-embedding model
  (`res/vprint/campp/embedding_campp_*.onnx` — "campp" naming matches Alibaba's
  3D-Speaker/CAM++ verification architecture) for voiceprint-gated wake and speaker
  separation.
- **Cloud (network-dependent, per the localized in-app privacy strings):** the
  "Voice assistant", "Meeting assistant", "Interpreter", and "Speech-to-Text"
  features route voice/transcript text to **third-party generative-AI (LLM)
  services** and to **third-party ASR/speech-to-text service providers**, per
  `en.lproj/Localizable.strings` keys `agrement_assistant`, `chatgapAgreementDetail`,
  and per the privacy-policy HTML (`app_pp_en_US.html`): *"You can access and use the
  generative AI services provided by third-party large language model service
  providers through the Voice assistant, Meeting assistant, Interpreter and
  Speech-to-Text features."* and *"2.2 We share your Personal Information with third
  parties who perform services of automatic speech recognition and speech to text
  when you use Interpreter, Speech-to-Text and Meeting assistant."* Data transfer
  destination is disclosed as Singapore servers (`agrment_transfer_assistant`,
  `agrment_transfer_translate` in `en.lproj/Localizable.strings`): *"we need to
  transfer your personal data ... to servers located in Singapore of a third-party
  service provider that provides us with services such as data storage, voice
  transcription, and voice recognition."*

## Backend / service table

| Backend host or service | Function | Evidence |
|---|---|---|
| `aispeech.com` / `cloud.aispeech.com` (`https://aispeech.com/private`, `https://cloud.aispeech.com/docs/2029`) | Third-party ASR/voice-cloud vendor (iFLYTEK-competitor AISpeech / 思必驰); privacy policy explicitly ties this link to "录音数据" (recording data) shared via "服务端API传输" (server-side API transmission) | `Frameworks/App.framework/flutter_assets/assets/html/category_pp_zh_CN.html` |
| Google Vertex AI — Gemini 1.5 Pro (`console.cloud.google.com/vertex-ai/publishers/google/model-garden/gemini-1.5-pro-001`) | Third-party LLM used by the "Interpreter" feature's information-extraction / to-do-list generation service, and referenced generally for generative-AI features | `app_pp_en_US.html`: *"The large language model used in our product is Google's Gemini 1.5 Pro... please refer to: https://console.cloud.google.com/vertex-ai/publishers/google/model-garden/gemini-1.5-pro-001..."* (occurs 8+ times across Interpreter/meeting-assistant/voice-assistant sections) |
| "Xingji Meizu Smart Assistant" (internal string-table key prefix `chatgap*`) | Branded LLM chat feature layered on the voice assistant / meeting assistant / Translator ("Smart Assistant provides a content generation service under the voice assistant, as well as a smart summary generation service under the meeting assistant and Translator... built based on the generative AI technology") | `en.lproj/Localizable.strings` keys `chatgapAgreement`, `chatgapAgreementDetail`, `chatgapAgreementDetailCN`, `chatgapAgreementUse`, `chatgapPrivacyAgreement` |
| Unnamed third-party ASR/STT + data-storage vendor, hosted in Singapore | Voice transcription and voice recognition cloud processing for Voice assistant/Interpreter/Translator features; explicit cross-border transfer disclosure | `en.lproj/Localizable.strings` keys `agrment_transfer_assistant`, `agrment_transfer_translate` |
| `xj-platform-global.flyme.com` / `xj-platform.flyme.com` (`/fms/policy/...`) | Flyme/Meizu policy-document CDN — serves the very privacy-policy HTML/PDF pages that disclose the above LLM/ASR vendors (not itself an assistant inference endpoint) | `recon/urls-all.txt`, `recon/hosts-vendor.txt` |

Note: no literal REST/gRPC endpoint hostname for the AISpeech ASR API or the Vertex
AI Gemini call itself was found in any readable resource — only the vendor's public
docs/privacy links and the Vertex AI model-garden reference page URL appear in
plaintext. The actual runtime call likely goes through backend proxy infrastructure
(e.g. `xj-platform*.flyme.com` or an undisclosed API host reached only from the
FairPlay-encrypted binaries), which cannot be confirmed without decryption.

## Assistant-adjacent app modules (non-glasses-firmware apps bundled by reference)

`appAdapter.json` lists per-hardware-variant ("star"/"air") companion app package
IDs including `com.upuphone.translator` (a `translator` glass/phone app pair) and
`com.upuphone.navi`, confirming "Translator" is a first-class shipped
app/module, not just a voice-assistant sub-feature.

## UI copy: feature names found in localized strings/HTML

From `en.lproj/Localizable.strings` (English) — feature names surfaced to users:
**Voice assistant**, **Meeting assistant**, **Interpreter** (with sub-functions
"simultaneous interpretation", "conversation translation function", "phone call
translation feature"), **Translator** / "MYVU Translator" (zh key `MYVU 翻译官`),
**Speech-to-Text**, **Prompter** (teleprompter: `agrement_tc`, `withdraw_agrement_tc`,
and the standalone file `Instructions for using the prompter.txt` — "manual" and
"uniform speed" (自动滚动) scrolling modes, page-turning via glasses/phone/ring),
and **Smart Assistant** (`chatgap*` keys, "Xingji Meizu Smart Assistant"). The
Chinese ASR hotword list (`XJASR.bundle/contexts.json`) independently confirms the
Chinese feature names: "提词器" (prompter), "翻译官" (translator), "速记" (quick
notes/shorthand), "语音转写" (voice transcription), "语音唤醒" (voice wake-up),
"连续对话" (continuous dialogue).

Wake-word gating and voiceprint consent copy: `wakeup_record_quiet`,
`vp_weakup_separate_role_record_privacy_policy` ("voice wake-up feature requires
enabling local recording... we need to collect and read biometric recognition
information (i.e., voice print information)"), and
`vp_separate_role_record_privacy_policy` (speaker-separation feature of Translator,
same voiceprint requirement) — both in `en.lproj/Localizable.strings`.

IPA_ASSISTANT_COMPLETE
