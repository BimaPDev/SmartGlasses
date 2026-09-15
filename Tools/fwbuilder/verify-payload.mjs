#!/usr/bin/env node
// Independent gates for a compiled-payload build.
//
//   node Tools/fwbuilder/verify-payload.mjs <stock.bin> <patched.bin>
//
// INDEPENDENCE IS THE POINT. make_payload.py built the image from a set of constants.
// Re-checking those same constants with the same code would be circular -- that is
// exactly how the base-address error survived a full prior audit in this repo. So this
// file is a different language, and it RE-DERIVES the address model from the boot copy
// descriptor in the image rather than being told it. If Python's constants and this
// file's derivation disagree, the gates fail.
//
// It also SIMULATES the stub over all 256 input bytes instead of eyeballing the
// disassembly, because "these bytes look right" is not the same claim as "this code
// computes the intended function".
import { readFileSync } from "node:fs";

const [, , stockPath, patchPath] = process.argv;
if (!stockPath || !patchPath) {
  console.error("usage: verify-payload.mjs <stock.bin> <patched.bin>");
  process.exit(2);
}
const A = readFileSync(stockPath), B = readFileSync(patchPath);

let pass = 0;
const fails = [];
const ok = (name, cond, detail = "") => {
  if (cond) { pass++; console.log(`ok   ${name}${detail ? " — " + detail : ""}`); }
  else { fails.push(name); console.log(`FAIL ${name}${detail ? " — " + detail : ""}`); }
};

// ---------------------------------------------------------------- address model
// Derived, not assumed. The boot copy descriptor starts at file 0x0002C0 and is
// (src_start, src_end, dst_start, dst_end) as runtime VAs:
//     0x2C038350  0x2C4B1270  0x3C000000  0x3C478F20
// NOTE it is 0x0002C0, not 0x0002C8 -- 0x2C8 is the DESTINATION word, which is where a
// scan for 0x3C000000 lands and which earlier notes recorded as the descriptor start.
const d0 = A.readUInt32LE(0x0002c0), d1 = A.readUInt32LE(0x0002c4);
const d2 = A.readUInt32LE(0x0002c8), d3 = A.readUInt32LE(0x0002cc);
ok("boot copy descriptor: src and dst lengths agree", d1 - d0 === d3 - d2,
   `src 0x${(d1 - d0).toString(16)} vs dst 0x${(d3 - d2).toString(16)}`);
ok("copy destination is the PSRAM base", d2 === 0x3c000000,
   `0x${d2.toString(16)}`);

const CODE_DELTA = 0x2c010000;
const PSRAM_LO = d0 - CODE_DELTA;          // file where the PSRAM copy starts
const TEXT = d1 - CODE_DELTA;              // file where XIP .text starts
const DATA_DELTA = d2 - PSRAM_LO;          // VA = file + DATA_DELTA, for PSRAM
ok("derived data delta matches the one the builder used", DATA_DELTA === 0x3bfd7cb0,
   `derived 0x${DATA_DELTA.toString(16)}`);
ok("derived .text start matches", TEXT === 0x4a1270, `derived 0x${TEXT.toString(16)}`);
ok("12.83's delta is NOT valid here", DATA_DELTA !== 0x3bfd7c0c);

// ---------------------------------------------------------------- basic integrity
ok("build banner is 1.0.11.53_Air_intl_FR",
   B.includes(Buffer.from("Flyme XR 1.0.11.53.20241126_Air_intl_FR")));
ok("length unchanged", A.length === B.length, `${A.length} vs ${B.length}`);

// ---------------------------------------------------------------- what changed
const diff = [];
for (let i = 0; i < A.length; i++) if (A[i] !== B[i]) diff.push(i);
const runs = [];
for (const i of diff) {
  const last = runs[runs.length - 1];
  if (last && i === last[1] + 1) last[1] = i; else runs.push([i, i]);
}
ok("changes form a small number of contiguous runs", runs.length <= 12,
   `${diff.length} bytes in ${runs.length} runs`);

// ---------------------------------------------------------------- the stub
const HOLE = 0x3ec950;
const stubRun = runs.find(([s]) => s === HOLE);
ok("a run starts exactly at the free hole 0x3EC950", !!stubRun);
const stubLen = stubRun ? stubRun[1] - stubRun[0] + 1 : 0;
const STUB_VA = HOLE + DATA_DELTA;
ok("hole VA derives to 0x3C3C4600", STUB_VA === 0x3c3c4600,
   `0x${STUB_VA.toString(16)}`);
ok("the hole was all zero in stock", A.subarray(HOLE, HOLE + 0x8de).every(b => b === 0));
ok("the rest of the hole is still zero after patching",
   B.subarray(HOLE + stubLen, HOLE + 0x8de).every(b => b === 0),
   `${0x8de - stubLen} bytes left`);
ok("the stub is inside the PSRAM region, not .text",
   HOLE >= PSRAM_LO && HOLE < TEXT);

// ---------------------------------------------------------------- decode the stub
// A minimal decoder for exactly the instructions this payload is allowed to contain.
// Anything else fails, rather than being waved through.
const stub = B.subarray(HOLE, HOLE + stubLen);
const h = i => stub.readUInt16LE(i);
const thumbExpand = (i, imm3, imm8) => {
  const v = (i << 11) | (imm3 << 8) | imm8;
  if ((v >> 10) === 0) {
    const op = (v >> 8) & 3, b = v & 0xff;
    return [b, b | (b << 16), (b << 8) | (b << 24), b | (b << 8) | (b << 16) | (b << 24)][op];
  }
  const rot = (v >> 7) & 0x1f, base = (v & 0x7f) | 0x80;
  return ((base >>> rot) | (base << (32 - rot))) >>> 0;
};
const decoded = [];
for (let i = 0; i < stubLen;) {
  const w = h(i);
  if ((w & 0xfbf0) === 0xf1a0) {                      // SUB.W Rd, Rn, #imm
    const w2 = h(i + 2), i1 = (w >> 10) & 1;
    decoded.push({ op: "sub", rd: (w2 >> 8) & 0xf, rn: w & 0xf,
                   imm: thumbExpand(i1, (w2 >> 12) & 7, w2 & 0xff) }); i += 4;
  } else if ((w & 0xf800) === 0x2800) {               // CMP Rn, #imm8
    decoded.push({ op: "cmp", rn: (w >> 8) & 7, imm: w & 0xff }); i += 2;
  } else if ((w & 0xfbf0) === 0xf240) {               // MOVW Rd, #imm16
    const w2 = h(i + 2), i1 = (w >> 10) & 1;
    decoded.push({ op: "movw", rd: (w2 >> 8) & 0xf,
                   imm: ((w & 0xf) << 12) | (i1 << 11) | (((w2 >> 12) & 7) << 8) | (w2 & 0xff) });
    i += 4;
  } else if ((w & 0xfbf0) === 0xf2c0) {               // MOVT Rd, #imm16
    const w2 = h(i + 2), i1 = (w >> 10) & 1;
    decoded.push({ op: "movt", rd: (w2 >> 8) & 0xf,
                   imm: ((w & 0xf) << 12) | (i1 << 11) | (((w2 >> 12) & 7) << 8) | (w2 & 0xff) });
    i += 4;
  } else if ((w & 0xff00) === 0xbf00 && (w & 0xff) !== 0) {   // IT
    decoded.push({ op: "it", cond: (w >> 4) & 0xf, mask: w & 0xf }); i += 2;
  } else if ((w & 0xfbf0) === 0xf1c0) {               // RSB.W Rd, Rn, #imm
    const w2 = h(i + 2), i1 = (w >> 10) & 1;
    decoded.push({ op: "rsb", rd: (w2 >> 8) & 0xf, rn: w & 0xf,
                   imm: thumbExpand(i1, (w2 >> 12) & 7, w2 & 0xff) }); i += 4;
  } else if ((w & 0xff87) === 0x4700) {               // BX Rm
    decoded.push({ op: "bx", rm: (w >> 3) & 0xf }); i += 2;
  } else {
    decoded.push({ op: `UNKNOWN:0x${w.toString(16)}` }); i += 2;
  }
}
console.log("\n  decoded stub:");
for (const x of decoded) console.log("    " + JSON.stringify(x));
console.log();
ok("every instruction in the stub decodes to a known-safe form",
   !decoded.some(x => String(x.op).startsWith("UNKNOWN")));
ok("the stub ends in a tail call (bx), so lr is untouched",
   decoded[decoded.length - 1].op === "bx");
ok("the stub contains no memory access at all",
   !decoded.some(x => ["ldr", "str"].includes(x.op)),
   "nothing to fault on a bad address");

// MOVW/MOVT must not disturb the flags the IT block depends on.
const cmpIdx = decoded.findIndex(x => x.op === "cmp");
const itIdx = decoded.findIndex(x => x.op === "it");
ok("a cmp precedes the IT block", cmpIdx >= 0 && itIdx > cmpIdx);
ok("only flag-preserving ops sit between cmp and IT",
   decoded.slice(cmpIdx + 1, itIdx).every(x => x.op === "movw" || x.op === "movt"),
   "movw/movt have no S bit, so the condition survives");

// ---------------------------------------------------------------- the vendor call
const movwOp = decoded.find(x => x.op === "movw");
const movtOp = decoded.find(x => x.op === "movt");
const bxOp = decoded[decoded.length - 1];
const target = ((movtOp.imm << 16) | movwOp.imm) >>> 0;
ok("movw and movt build the branch target in the same register",
   movwOp.rd === movtOp.rd && movtOp.rd === bxOp.rm, `r${bxOp.rm}`);
ok("the branch target has the Thumb bit set", (target & 1) === 1,
   `0x${target.toString(16)}`);
const targetFile = (target & ~1) - CODE_DELTA;
ok("the branch target lands in XIP .text", targetFile >= TEXT && targetFile < A.length,
   `file 0x${targetFile.toString(16)}`);
ok("the branch target is unchanged from stock (we call vendor code, not our own)",
   A.readUInt16LE(targetFile) === B.readUInt16LE(targetFile));
// SEMANTIC: the vendor function must be the 2-arg get_glyph_bitmap, whose first
// instruction is `cmp r1,#9`. The 4-arg get_glyph_dsc opens push.w (0xE92D) instead,
// and on THAT one r1 is an output pointer -- forcing it would corrupt memory.
ok("the branch target really is get_glyph_bitmap (opens `cmp r1,#9`)",
   B.readUInt16LE(targetFile) === 0x2909,
   `0x${B.readUInt16LE(targetFile).toString(16).padStart(4, "0")}`);

// ---------------------------------------------------------------- the font table
const DSC_FN = 0x2c67b659, BMP_FN = 0x2c67b5f1;
const dscFile = (DSC_FN & ~1) - CODE_DELTA;
ok("get_glyph_dsc opens push.w (4-arg), confirming the +0/+4 order",
   B.readUInt16LE(dscFile) === 0xe92d,
   `0x${B.readUInt16LE(dscFile).toString(16)}`);
ok("the payload calls the BITMAP fn, not the DSC fn", target === (BMP_FN >>> 0),
   `0x${target.toString(16)}`);

const stockFonts = [];
for (let o = PSRAM_LO; o < TEXT - 8; o += 4)
  if (A.readUInt32LE(o) === DSC_FN && A.readUInt32LE(o + 4) === BMP_FN) stockFonts.push(o);
ok("stock has the expected 9 lv_font_t objects", stockFonts.length === 9,
   `${stockFonts.length}`);
const wantPtr = (STUB_VA | 1) >>> 0;
const detoured = stockFonts.filter(o => B.readUInt32LE(o + 4) === wantPtr);
ok("every font's get_glyph_bitmap now points at the stub",
   detoured.length === stockFonts.length, `${detoured.length}/${stockFonts.length}`);
ok("every font's get_glyph_dsc is untouched",
   stockFonts.every(o => B.readUInt32LE(o) === DSC_FN));

// ---------------------------------------------------------------- the boot marker
ok("boot marker present: border_opa 92 -> 0 at 0x61B7F8",
   A[0x61b7f8] === 92 && B[0x61b7f8] === 0, `${A[0x61b7f8]} -> ${B[0x61b7f8]}`);
const codeDiff = diff.filter(i => i >= TEXT);
ok("exactly one byte of CODE changed, and it is the marker",
   codeDiff.length === 1 && codeDiff[0] === 0x61b7f8,
   codeDiff.map(x => "0x" + x.toString(16)).join(" ") || "none");

// ---------------------------------------------------------------- nothing stray
const accounted = new Set();
for (let i = 0; i < stubLen; i++) accounted.add(HOLE + i);
for (const o of stockFonts) for (let i = 0; i < 4; i++) accounted.add(o + 4 + i);
accounted.add(0x61b7f8);
ok("no byte changed outside the stub, the font pointers and the marker",
   diff.every(i => accounted.has(i)),
   diff.filter(i => !accounted.has(i)).map(x => "0x" + x.toString(16)).join(" ") || "none");

// ---------------------------------------------------------------- SIMULATE
// Read the bytes is not the same claim as compute the right function. Run the decoded
// stub over all 256 inputs and check the mapping it actually implements.
const simulate = letter => {
  const R = [0, letter >>> 0, 0, 0];   // r0 unused, r1 = letter
  let C = true, cond = null, pending = 0;
  for (const x of decoded) {
    if (cond !== null && pending > 0) {
      const take = cond === 3 ? !C : true;   // 3 = LO (carry clear)
      pending--;
      if (!take) { if (pending === 0) cond = null; continue; }
      if (pending === 0) cond = null;
    }
    switch (x.op) {
      case "sub": R[x.rd] = (R[x.rn] - x.imm) >>> 0; break;
      case "cmp": C = R[x.rn] >>> 0 >= x.imm >>> 0; break;   // carry set = unsigned >=
      case "movw": R[x.rd] = (R[x.rd] & 0xffff0000 | x.imm) >>> 0; break;
      case "movt": R[x.rd] = ((x.imm << 16) | (R[x.rd] & 0xffff)) >>> 0; break;
      case "it": cond = x.cond; pending = 1; break;
      case "rsb": R[x.rd] = (x.imm - R[x.rn]) >>> 0; break;
      case "bx": return R[1] >>> 0;                           // the letter passed on
    }
  }
  return R[1] >>> 0;
};
let mapOk = true, examples = [];
for (let c = 0; c < 256; c++) {
  const got = simulate(c);
  const want = (c >= 0x30 && c <= 0x39) ? 0x39 - (c - 0x30) : c;
  if (got !== want) { mapOk = false; if (examples.length < 5) examples.push(
    `${c}->${got} want ${want}`); }
}
ok("SIMULATED over all 256 inputs: digits invert, everything else passes through",
   mapOk, examples.join(", ") || "0-9 flipped, 0x00-0x2F and 0x3A-0xFF unchanged");
const show = s => [...s].map(ch => String.fromCharCode(simulate(ch.charCodeAt(0)))).join("");
ok("`07:24` renders as `92:75`", show("07:24") === "92:75", `got "${show("07:24")}"`);
ok("the colon is NOT flipped", show(":") === ":", `got "${show(":")}"`);
// CONTROL: this simulator must be able to disagree. Stock's unpatched path is identity.
ok("control: the mapping is NOT the identity function", show("07:24") !== "07:24");

console.log(`\n${pass} passed, ${fails.length} failed`);
if (fails.length) { console.log("DO NOT FLASH"); process.exit(1); }
console.log("payload verification passed");
