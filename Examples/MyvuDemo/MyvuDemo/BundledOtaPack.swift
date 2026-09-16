import Foundation
import MyvuCore

/// The firmware images bundled with this app, as a list rather than one hardcoded pack.
///
/// Both are built from **1.0.11.53**, which is what these glasses run. A pack built for
/// a different base (the old `1.0.12.83_BIMA` one) is not interchangeable and is no
/// longer shipped here.
///
/// Downgrades are fine: `AirOta.files(fromZip:)` only unpacks, and nothing on this path
/// compares versions — which is why Stock can be flashed back over Big clock even
/// though it declares a lower number.
struct OtaPack: Identifiable, Hashable {
    let id: String
    let resource: String          // bundle resource name, without ".zip"
    let label: String
    let detail: String
    /// True for the unmodified image. Used to present it as the safe one.
    let isStock: Bool

    var zipName: String { resource + ".zip" }
}

enum BundledOtaPack {

    static let stock = OtaPack(
        id: "stock",
        resource: "ota_star-air_1.0.11.53_STOCK",
        label: "Stock 1.0.11.53",
        detail: "Unmodified factory image, byte-identical to the OTA it came from. "
              + "Flash this to undo any patch and get a readable clock back.",
        isStock: true)

    static let noRings = OtaPack(
        id: "norings",
        resource: "ota_star-air_1.0.11.98_NORINGS",
        label: "No rings",
        detail: "Stock clock, but the circular ring around each standby tile is gone. "
              + "ONE byte: border_opa 92 -> 0 at 0x61b7f8. Opacity rather than width, "
              + "so no geometry moves. 14 gates pass, and CONFIRMED ON HARDWARE.",
        isStock: false)

    static let midClock = OtaPack(
        id: "midclock",
        resource: "ota_star-air_1.0.11.88_MIDCLOCK",
        label: "Big clock, middle",
        detail: "The 46px clock centred on the panel — using pad_left=225 rather than "
              + "main_place=CENTER, which did not boot. Every knob here sits at a value "
              + "an earlier build already flashed successfully. PAIR WITH \"Time only\".",
        isStock: false)

    static let appendTest = OtaPack(
        id: "appendtest",
        resource: "ota_star-air_1.0.11.87_APPENDTEST",
        label: "TEST — appended space",
        detail: "EXPERIMENT, not a feature. Same as \"Big clock, middle\" except the "
              + "clock's glyph bitmap is COPIED past the end of the image and the font "
              + "points at the copy. If the clock still renders, space appended past "
              + "the image is mapped and readable — which is what adding CODE would "
              + "need. If it garbles or does not boot, that route is closed.",
        isStock: false)

    static let psramExec = OtaPack(
        id: "psramexec",
        resource: "ota_star-air_1.0.11.86_PSRAMEXEC",
        label: "TEST — can PSRAM run code?",
        detail: "EXPERIMENT, not a feature. 12 bytes of NEW code in the free PSRAM hole "
              + "at 0x3EC950, and the clock font's get_glyph_bitmap pointer aimed at it. "
              + "The stub forces every glyph to '8' and tail-calls the real function.\n\n"
              + "CLOCK READS 88:88 -> PSRAM executes; the code tier is open.\n"
              + "WILL NOT BOOT -> PSRAM cannot execute. A/B rollback recovers it.\n"
              + "CLOCK NORMAL -> the stub never ran; wrong font, and NOT an answer "
              + "about PSRAM.\n\n"
              + "This is the first build here that creates instructions and jumps into "
              + "them, so it is the riskiest so far. Flash Stock to undo.",
        isStock: false)

    static let psramExec2 = OtaPack(
        id: "psramexec2",
        resource: "ota_star-air_1.0.11.85_PSRAMEXEC2",
        label: "TEST — PSRAM code, take 2",
        detail: "Replaces the first PSRAM test, which was inconclusive: it detoured only "
              + "the 40px clock face, which the standby tiles do not use.\n\n"
              + "Now ALL NINE fonts point at the stub, and the image also carries "
              + "no-rings as a BOOT MARKER — the rings answer \"did my image run?\" "
              + "even if the stub does not.\n\n"
              + "RINGS GONE + every glyph an '8' -> PSRAM EXECUTES.\n"
              + "RINGS GONE + text normal -> booted, stub never ran; not an answer.\n"
              + "RINGS STILL THERE -> it faulted and A/B rolled back; PSRAM cannot "
              + "execute.\n\n"
              + "Photograph the standby screen either way. Flash Stock to undo.",
        isStock: false)

    static let digitFlip = OtaPack(
        id: "digitflip",
        resource: "ota_star-air_1.0.11.83_DIGITFLIP2",
        label: "Compiled C — digits flipped",
        detail: "60 bytes of C, built with clang for cortex-m55 and run from the PSRAM "
              + "hole. Every decimal digit renders as 9 minus itself, so 07:24 shows as "
              + "92:75 and letters are untouched.\n\n"
              + "It detours BOTH halves of the font interface. The first version "
              + "detoured only get_glyph_bitmap and the digits came out garbled: LVGL "
              + "slices a glyph bitmap using box_w/box_h from get_glyph_dsc, so new "
              + "pixels with the old dimensions misalign every row after the first. "
              + "Two entry points in one blob fix it.\n\n"
              + "Carries no-rings as a boot marker. Rings gone + 92:75 = it ran; rings "
              + "still there = it faulted and rolled back. Flash Stock to undo.",
        isStock: false)

    static let bimaFull = OtaPack(
        id: "bimafull",
        resource: "ota_star-air_1.0.11.82_BIMA_FULL",
        label: "BIMA — full rebrand",
        detail: "Everything that can say BIMA, does. No rings on the standby tiles, the "
              + "power-off logo redrawn, and all 179 MYVU strings across every language "
              + "renamed.\n\n"
              + "Pure data apart from one byte: MYVU and BIMA are both 4 ASCII bytes, so "
              + "no string moves and no pointer changes. Only the no-rings operand "
              + "touches code. 15 rebrand gates plus the no-rings and wordmark sets.\n\n"
              + "NOT the boot logo — that is not in the OTA. It lives in a bootloader "
              + "partition the update never touches, so it needs physical flash access. "
              + "The phone app may also still call the glasses MYVU: that name comes "
              + "from the NV partition, not this image.",
        isStock: false)

    /// Stock first: it is the one to reach for when something is wrong.
    static let all: [OtaPack] = [stock, midClock, noRings, bimaFull, psramExec2, digitFlip, appendTest]

    static func load(_ pack: OtaPack) throws -> [OtaFile] {
        try AirOta.files(fromZip: Data(contentsOf: locate(pack)))
    }

    /// Documents wins over the bundle, so a pack can be dropped in via Files without
    /// rebuilding the app.
    static func locate(_ pack: OtaPack) throws -> URL {
        let docs = FileManager.default.urls(for: .documentDirectory,
                                            in: .userDomainMask).first
        if let docs {
            let dropped = docs.appendingPathComponent(pack.zipName)
            if FileManager.default.fileExists(atPath: dropped.path) { return dropped }
        }
        if let bundled = Bundle.main.url(forResource: pack.resource, withExtension: "zip") {
            return bundled
        }
        throw MyvuError.notFound(
            "missing \(pack.zipName). Copy it into Files → On My iPhone → MyvuDemo, "
          + "or rebuild the app.")
    }
}
