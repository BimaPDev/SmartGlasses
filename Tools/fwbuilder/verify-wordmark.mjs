#!/usr/bin/env node
// Gates for the BIMA wordmark patch (1.0.11.53).
//
//   node Tools/fwbuilder/verify-wordmark.mjs "$PWD"
//
// The point of this file is that it checks the OUTCOME (what the panel decodes) and
// not just the patch (which bytes moved). Three builds in this project passed byte
// gates and still broke the display, so byte gates alone are not evidence.
import { readFileSync } from "node:fs";
import { join } from "node:path";

// node verify-wordmark.mjs <root> [patchedImagePath]
// The override lets the same gates run against a COMBINED build (wordmark stacked on
// another patch), which is the only way to prove the two do not interfere.
const ROOT = process.argv[2] ?? process.cwd();
const STOCK = join(ROOT, "Reverse/firmware/x_1.0.11.53/platform_tester.bin");
const PATCH = process.argv[3]
  ?? join(ROOT, "Reverse/firmware/patched_wordmark/1.0.11.53/platform_tester.bin");

const DSC = 0x413450, DATA = 0x413490, PIX = DATA + 64;
const W = 144, H = 36, STRIDE = 72, PIX_LEN = STRIDE * H;

let pass = 0;
const fail = [];
const ok = (name, cond, detail = "") => {
  if (cond) pass++;
  else fail.push(`${name}${detail ? " -- " + detail : ""}`);
};

const a = readFileSync(STOCK), b = readFileSync(PATCH);

// ---- structure -------------------------------------------------------------
ok("stock and patched are the same length", a.length === b.length,
   `${a.length} vs ${b.length}`);
ok("length is the known 1.0.11.53 image length", a.length === 7042632, `${a.length}`);
ok("build banner present in patched",
   b.includes(Buffer.from("Flyme XR 1.0.11.53.20241126_Air_intl_FR")));

// ---- descriptor must be untouched ------------------------------------------
const hdr = b.readUInt32LE(DSC), size = b.readUInt32LE(DSC + 4), ptr = b.readUInt32LE(DSC + 8);
ok("descriptor cf is 9 (INDEXED_4BIT)", (hdr & 0x1f) === 9, `cf=${hdr & 0x1f}`);
ok("descriptor width is 144", ((hdr >> 10) & 0x7ff) === W);
ok("descriptor height is 36", ((hdr >> 21) & 0x7ff) === H);
ok("descriptor data_size is 2656", size === 64 + PIX_LEN, `${size}`);
ok("descriptor data ptr resolves with the 11.53 delta", ptr - 0x3bfd7cb0 === DATA,
   `0x${ptr.toString(16)} - 0x3BFD7CB0 = 0x${(ptr - 0x3bfd7cb0).toString(16)}`);
ok("descriptor bytes identical to stock",
   a.subarray(DSC, DSC + 12).equals(b.subarray(DSC, DSC + 12)));

// ---- the delta constant really is per-build --------------------------------
// Guards the exact mistake this patch nearly shipped: 12.83's constant is 164 bytes
// off here, and the result still looks like a wordmark.
ok("12.83's delta would NOT resolve here", ptr - 0x3bfd7c0c !== DATA,
   "if these ever agree, the per-build distinction has been lost");

// ---- palette must be untouched, and must be a real ramp --------------------
ok("palette identical to stock",
   a.subarray(DATA, DATA + 64).equals(b.subarray(DATA, DATA + 64)));
const alpha = [...Array(16)].map((_, i) => b[DATA + i * 4 + 3]);
ok("palette[0] is transparent", alpha[0] === 0, `${alpha[0]}`);
ok("palette[15] is opaque", alpha[15] === 255, `${alpha[15]}`);
ok("palette alpha strictly increases", alpha.every((v, i) => i === 0 || v > alpha[i - 1]),
   alpha.join(","));
const green = [...Array(15)].map((_, i) => b[DATA + (i + 1) * 4 + 1]);
ok("every palette entry is green (panel is monochrome)", green.every(g => g >= 250),
   green.join(","));

// ---- only the pixel payload changed ----------------------------------------
const diff = [];
for (let i = 0; i < a.length; i++) if (a[i] !== b[i]) diff.push(i);
ok("something actually changed", diff.length > 0, `${diff.length} bytes`);
const inImg = diff.filter(i => i >= DATA && i < DATA + 64 + PIX_LEN);
ok("every changed byte within the image is inside the pixel payload",
   inImg.length > 0 && inImg[0] >= PIX && inImg[inImg.length - 1] < PIX + PIX_LEN,
   inImg.length ? `0x${inImg[0].toString(16)}..0x${inImg[inImg.length - 1].toString(16)}` : "none");
// In a combined build other patches legitimately move bytes elsewhere, so this gate
// asserts the WORDMARK's own footprint rather than the whole file. Bytes outside the
// image are another patch's business and are checked by that patch's verifier.
const outside = diff.filter(i => i < DATA || i >= DATA + 64 + PIX_LEN);
ok("no byte moved inside the image but outside the pixel payload",
   !diff.some(i => i >= DATA && i < PIX));
if (outside.length) console.log(`  note: ${outside.length} byte(s) changed outside the `
  + `wordmark (0x${outside[0].toString(16)}..0x${outside[outside.length-1].toString(16)})`
  + ` -- combined build; verify those with their own verifier`);

// ---- decode and check the OUTCOME ------------------------------------------
const decode = buf => {
  const idx = Array.from({ length: H }, () => new Uint8Array(W));
  for (let y = 0; y < H; y++)
    for (let x = 0; x < W; x++) {
      const byte = buf[PIX + y * STRIDE + (x >> 1)];
      idx[y][x] = x % 2 === 0 ? byte >> 4 : byte & 0xf;
    }
  return idx;
};
const inkBox = idx => {
  let x0 = W, x1 = -1, y0 = H, y1 = -1;
  for (let y = 0; y < H; y++)
    for (let x = 0; x < W; x++)
      if (idx[y][x] >= 8) {
        if (x < x0) x0 = x; if (x > x1) x1 = x;
        if (y < y0) y0 = y; if (y > y1) y1 = y;
      }
  return { x0, x1, y0, y1 };
};
const cols = idx => {
  const g = [];
  let s = null;
  for (let x = 0; x < W; x++) {
    const has = idx.some(r => r[x] >= 8);
    if (has && s === null) s = x;
    else if (!has && s !== null) { g.push([s, x - 1]); s = null; }
  }
  if (s !== null) g.push([s, W - 1]);
  return g;
};

const pIdx = decode(b), sIdx = decode(a);
const pb = inkBox(pIdx), sb = inkBox(sIdx);

ok("patched image is not blank", pb.x1 >= 0);
ok("patched ink sits in the stock cap band", pb.y0 === sb.y0 && pb.y1 === sb.y1,
   `patched y ${pb.y0}..${pb.y1}, stock y ${sb.y0}..${sb.y1}`);
ok("patched ink starts where the stock does", pb.x0 === sb.x0,
   `patched x0 ${pb.x0}, stock x0 ${sb.x0}`);
ok("patched ink ends within 4px of the stock", Math.abs(pb.x1 - sb.x1) <= 4,
   `patched x1 ${pb.x1}, stock x1 ${sb.x1}`);
ok("ink stays inside the bitmap", pb.x0 >= 0 && pb.x1 < W && pb.y0 >= 0 && pb.y1 < H);

// four letters, four column groups. This is the gate that says it spells something.
const groups = cols(pIdx);
ok("the patched image resolves into 4 letter groups", groups.length === 4,
   groups.map(([s, e]) => `${s}..${e}`).join(" "));
if (groups.length === 4) {
  const [B, I, M, A] = groups.map(([s, e]) => e - s + 1);
  ok("the I is the narrowest glyph", I < B && I < M && I < A, `B${B} I${I} M${M} A${A}`);
  ok("B, M and A are all wide glyphs", B > 20 && M > 20 && A > 20, `B${B} M${M} A${A}`);
}

// coverage: a blob or a hairline both decode as "not blank", so bound it
const inkPct = pIdx.flatMap(r => [...r]).filter(v => v >= 8).length / (W * H) * 100;
const stockPct = sIdx.flatMap(r => [...r]).filter(v => v >= 8).length / (W * H) * 100;
ok("ink coverage is in the stock's range", inkPct > 10 && inkPct < 40,
   `${inkPct.toFixed(1)}% vs stock ${stockPct.toFixed(1)}%`);

// NEGATIVE CONTROL: the patch must actually change the picture, not just bytes
let same = 0;
for (let y = 0; y < H; y++) for (let x = 0; x < W; x++) if (pIdx[y][x] === sIdx[y][x]) same++;
ok("the decoded picture differs from stock", same < W * H * 0.95,
   `${(same / (W * H) * 100).toFixed(1)}% of pixels identical`);

// POSITIVE CONTROL: this harness can fail. If decoding stock passed the 4-group
// letter gate it would mean the gate matches anything -- stock MYVU splits into 6.
ok("control: stock does NOT produce 4 groups (gate can discriminate)",
   cols(sIdx).length !== 4, `stock has ${cols(sIdx).length} groups`);

console.log(`${pass} passed, ${fail.length} failed`);
if (fail.length) { fail.forEach(f => console.log("  FAIL " + f)); process.exit(1); }
console.log("wordmark verification passed");
