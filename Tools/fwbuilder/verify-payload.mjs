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
// file's derivation disagree, the gates fail. (They did, once: the descriptor starts at
// file 0x0002C0, not the 0x0002C8 my notes recorded, and these gates caught it.)
//
// It also SIMULATES each stub over all 256 input bytes rather than eyeballing the
// disassembly, because "these bytes look right" and "this code computes the intended
// function" are different claims.
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
// Derived, not assumed. Descriptor at file 0x0002C0:
//   (src_start, src_end, dst_start, dst_end) = 2C038350 2C4B1270 3C000000 3C478F20
const d0 = A.readUInt32LE(0x2c0), d1 = A.readUInt32LE(0x2c4);
const d2 = A.readUInt32LE(0x2c8), d3 = A.readUInt32LE(0x2cc);
ok("boot copy descriptor: src and dst lengths agree", d1 - d0 === d3 - d2,
   `0x${(d1 - d0).toString(16)}`);
ok("copy destination is the PSRAM base", d2 === 0x3c000000, `0x${d2.toString(16)}`);
const CODE_DELTA = 0x2c010000;
const PSRAM_LO = d0 - CODE_DELTA, TEXT = d1 - CODE_DELTA;
const DATA_DELTA = d2 - PSRAM_LO;
ok("derived data delta matches the builder's", DATA_DELTA === 0x3bfd7cb0,
   `0x${DATA_DELTA.toString(16)}`);
ok("derived .text start matches", TEXT === 0x4a1270, `0x${TEXT.toString(16)}`);
ok("12.83's delta is NOT valid here", DATA_DELTA !== 0x3bfd7c0c);

// ---------------------------------------------------------------- integrity
ok("build banner is 1.0.11.53_Air_intl_FR",
   B.includes(Buffer.from("Flyme XR 1.0.11.53.20241126_Air_intl_FR")));
ok("length unchanged", A.length === B.length, `${A.length}`);

const diff = [];
for (let i = 0; i < A.length; i++) if (A[i] !== B[i]) diff.push(i);
const runs = [];
for (const i of diff) {
  const last = runs[runs.length - 1];
  if (last && i === last[1] + 1) last[1] = i; else runs.push([i, i]);
}

// ---------------------------------------------------------------- the hole
const HOLE = 0x3ec950, HOLE_LEN = 0x8de;
const stubRun = runs.find(([s]) => s === HOLE);
ok("a run starts exactly at the free hole 0x3EC950", !!stubRun);
const blobLen = stubRun ? stubRun[1] - stubRun[0] + 1 : 0;
const BLOB_VA = HOLE + DATA_DELTA;
ok("hole VA derives to 0x3C3C4600", BLOB_VA === 0x3c3c4600, `0x${BLOB_VA.toString(16)}`);
ok("the hole was all zero in stock",
   A.subarray(HOLE, HOLE + HOLE_LEN).every(b => b === 0));
ok("the unused remainder of the hole is still zero",
   B.subarray(HOLE + blobLen, HOLE + HOLE_LEN).every(b => b === 0),
   `${HOLE_LEN - blobLen} bytes spare`);
ok("the blob is in PSRAM, not .text", HOLE >= PSRAM_LO && HOLE < TEXT);

// ---------------------------------------------------------------- Thumb decoder
// Accepts ONLY the forms these payloads may contain. Anything else fails rather than
// being waved through.
const blob = B.subarray(HOLE, HOLE + blobLen);
const thumbExpand = (i, imm3, imm8) => {
  const v = (i << 11) | (imm3 << 8) | imm8;
  if ((v >> 10) === 0) {
    const op = (v >> 8) & 3, b = v & 0xff;
    return [b, b | (b << 16), (b << 8) | (b << 24),
            b | (b << 8) | (b << 16) | (b << 24)][op] >>> 0;
  }
  const rot = (v >> 7) & 0x1f, base = (v & 0x7f) | 0x80;
  return ((base >>> rot) | (base << (32 - rot))) >>> 0;
};
const ins = [];
for (let i = 0; i < blobLen;) {
  const w = blob.readUInt16LE(i);
  const w2 = i + 2 < blobLen ? blob.readUInt16LE(i + 2) : 0;
  const i1 = (w >> 10) & 1, imm3 = (w2 >> 12) & 7, imm8 = w2 & 0xff;
  const at = i;
  if ((w & 0xfbf0) === 0xf1a0) {                                  // SUB.W Rd,Rn,#imm
    ins.push({ at, op: "sub", rd: (w2 >> 8) & 0xf, rn: w & 0xf,
               imm: thumbExpand(i1, imm3, imm8) }); i += 4;
  } else if ((w & 0xfbf0) === 0xf1b0 && ((w2 >> 8) & 0xf) === 0xf) { // CMP.W Rn,#imm
    ins.push({ at, op: "cmp", rn: w & 0xf, imm: thumbExpand(i1, imm3, imm8) }); i += 4;
  } else if ((w & 0xf800) === 0x2800) {                            // CMP Rn,#imm8
    ins.push({ at, op: "cmp", rn: (w >> 8) & 7, imm: w & 0xff }); i += 2;
  } else if ((w & 0xfbf0) === 0xf240) {                            // MOVW Rd,#imm16
    ins.push({ at, op: "movw", rd: (w2 >> 8) & 0xf,
               imm: ((w & 0xf) << 12) | (i1 << 11) | (imm3 << 8) | imm8 }); i += 4;
  } else if ((w & 0xfbf0) === 0xf2c0) {                            // MOVT Rd,#imm16
    ins.push({ at, op: "movt", rd: (w2 >> 8) & 0xf,
               imm: ((w & 0xf) << 12) | (i1 << 11) | (imm3 << 8) | imm8 }); i += 4;
  } else if ((w & 0xff00) === 0xbf00 && (w & 0xff) !== 0) {        // IT
    ins.push({ at, op: "it", cond: (w >> 4) & 0xf }); i += 2;
  } else if ((w & 0xfbf0) === 0xf1c0) {                            // RSB.W Rd,Rn,#imm
    ins.push({ at, op: "rsb", rd: (w2 >> 8) & 0xf, rn: w & 0xf,
               imm: thumbExpand(i1, imm3, imm8) }); i += 4;
  } else if ((w & 0xff87) === 0x4700) {                            // BX Rm
    ins.push({ at, op: "bx", rm: (w >> 3) & 0xf }); i += 2;
  } else {
    ins.push({ at, op: `UNKNOWN:0x${w.toString(16)}` }); i += 2;
  }
}
ok("every instruction decodes to a known-safe form",
   !ins.some(x => String(x.op).startsWith("UNKNOWN")),
   ins.filter(x => String(x.op).startsWith("UNKNOWN")).map(x => x.op).join(" "));
ok("the blob performs NO memory access",
   !ins.some(x => ["ldr", "str", "push", "pop"].includes(x.op)),
   "no address to get wrong at runtime");

// ---------------------------------------------------------------- font table
const DSC_FN = 0x2c67b659, BMP_FN = 0x2c67b5f1;
const bmpFile = (BMP_FN & ~1) - CODE_DELTA, dscFile = (DSC_FN & ~1) - CODE_DELTA;
ok("vendor get_glyph_bitmap opens `cmp r1,#9` (2-arg)",
   B.readUInt16LE(bmpFile) === 0x2909);
ok("vendor get_glyph_dsc opens push.w (4-arg)", B.readUInt16LE(dscFile) === 0xe92d);

const fonts = [];
for (let o = PSRAM_LO; o < TEXT - 8; o += 4)
  if (A.readUInt32LE(o) === DSC_FN && A.readUInt32LE(o + 4) === BMP_FN) fonts.push(o);
ok("stock has the expected 9 lv_font_t objects", fonts.length === 9, `${fonts.length}`);

const bmpPtrs = new Set(fonts.map(o => B.readUInt32LE(o + 4)));
const dscPtrs = new Set(fonts.map(o => B.readUInt32LE(o)));
ok("all 9 fonts share one get_glyph_bitmap pointer", bmpPtrs.size === 1);
ok("all 9 fonts share one get_glyph_dsc pointer", dscPtrs.size === 1);
const bmpPtr = [...bmpPtrs][0], dscPtr = [...dscPtrs][0];
ok("get_glyph_bitmap points into the blob",
   (bmpPtr & ~1) >= BLOB_VA && (bmpPtr & ~1) < BLOB_VA + blobLen && (bmpPtr & 1) === 1,
   `0x${bmpPtr.toString(16)}`);
const dscDetoured = dscPtr !== DSC_FN;
ok("get_glyph_dsc is ALSO detoured (metrics must match the bitmap)", dscDetoured,
   dscDetoured ? `0x${dscPtr.toString(16)}`
               : "NOT detoured — a glyph-substituting payload will garble, because LVGL "
                 + "slices the bitstream using box_w/box_h from this callback");
if (dscDetoured)
  ok("get_glyph_dsc points into the blob",
     (dscPtr & ~1) >= BLOB_VA && (dscPtr & ~1) < BLOB_VA + blobLen && (dscPtr & 1) === 1,
     `0x${dscPtr.toString(16)}`);

// ---------------------------------------------------------------- simulate a stub
// Execute the decoded instructions from an entry offset. Returns the register file at
// the tail call, plus the branch target.
const run = (entry, init) => {
  const R = new Array(16).fill(0);
  for (const [k, v] of Object.entries(init)) R[k] = v >>> 0;
  let C = true, pending = 0, cond = 0;
  for (const x of ins) {
    if (x.at < entry) continue;
    if (pending > 0) {
      pending--;
      const take = cond === 3 ? !C : cond === 2 ? C : true;   // 3=LO(C clear) 2=HS
      if (!take) continue;
    }
    switch (x.op) {
      case "sub": R[x.rd] = (R[x.rn] - x.imm) >>> 0; break;
      case "cmp": C = (R[x.rn] >>> 0) >= (x.imm >>> 0); break;  // C set = unsigned >=
      case "movw": R[x.rd] = ((R[x.rd] & 0xffff0000) | x.imm) >>> 0; break;
      case "movt": R[x.rd] = (((x.imm << 16) >>> 0) | (R[x.rd] & 0xffff)) >>> 0; break;
      case "it": cond = x.cond; pending = 1; break;
      case "rsb": R[x.rd] = (x.imm - R[x.rn]) >>> 0; break;
      case "bx": return { R, target: R[x.rm] >>> 0 };
    }
  }
  return { R, target: null };
};
const flip = c => (c >= 0x30 && c <= 0x39) ? 0x39 - (c - 0x30) : c;

// --- the bitmap stub: letter is arg 2 (r1) ---
const bmpEntry = (bmpPtr & ~1) - BLOB_VA;
ok("the bitmap entry is at blob offset 0", bmpEntry === 0, `+${bmpEntry}`);
let bmpMapOk = true, bmpBad = [];
let bmpTarget = null;
for (let c = 0; c < 256; c++) {
  const { R, target } = run(bmpEntry, { 1: c });
  bmpTarget = target;
  if (R[1] !== flip(c)) { bmpMapOk = false; if (bmpBad.length < 4) bmpBad.push(`${c}->${R[1]}`); }
}
ok("bitmap stub: r1 flips digits and passes everything else, over all 256 inputs",
   bmpMapOk, bmpBad.join(" ") || "verified 0x00-0xFF");
ok("bitmap stub tail-calls the vendor get_glyph_bitmap", bmpTarget === BMP_FN,
   `0x${(bmpTarget ?? 0).toString(16)}`);

// --- the dsc stub: letter is arg 3 (r2), letter_next arg 4 (r3), r1 is the OUT ptr ---
if (dscDetoured) {
  const dscEntry = (dscPtr & ~1) - BLOB_VA;
  ok("the dsc entry is a distinct offset inside the blob",
     dscEntry > 0 && dscEntry < blobLen, `+${dscEntry}`);
  let ok2 = true, bad = [], tgt = null, outPreserved = true;
  const SENTINEL = 0xdeadbeef;
  for (let c = 0; c < 256; c++) {
    const nxt = (c + 7) & 0xff;
    const { R, target } = run(dscEntry, { 1: SENTINEL, 2: c, 3: nxt });
    tgt = target;
    if (R[2] !== flip(c) || R[3] !== flip(nxt)) {
      ok2 = false; if (bad.length < 4) bad.push(`${c}->${R[2]}`);
    }
    if (R[1] >>> 0 !== SENTINEL) outPreserved = false;
  }
  ok("dsc stub: r2 (letter) and r3 (letter_next) both flip digits", ok2,
     bad.join(" ") || "verified 0x00-0xFF for both");
  ok("dsc stub leaves r1 (the OUTPUT struct pointer) untouched", outPreserved,
     "writing to r1 here would corrupt memory");
  ok("dsc stub tail-calls the vendor get_glyph_dsc", tgt === DSC_FN,
     `0x${(tgt ?? 0).toString(16)}`);
  ok("the two stubs call DIFFERENT vendor functions", bmpTarget !== tgt);
}

// --- readable summary + a control that the simulator can disagree ---
const show = s => [...s].map(ch =>
  String.fromCharCode(run(bmpEntry, { 1: ch.charCodeAt(0) }).R[1])).join("");
ok("`07:24` renders as `92:75`", show("07:24") === "92:75", `"${show("07:24")}"`);
ok("`Tue.` is untouched (letters are not digits)", show("Tue.") === "Tue.",
   `"${show("Tue.")}"`);
ok("control: the mapping is NOT the identity", show("07:24") !== "07:24");

// ---------------------------------------------------------------- blast radius
ok("boot marker present: border_opa 92 -> 0", A[0x61b7f8] === 92 && B[0x61b7f8] === 0);
const codeDiff = diff.filter(i => i >= TEXT);
ok("exactly one byte of CODE changed, and it is the marker",
   codeDiff.length === 1 && codeDiff[0] === 0x61b7f8,
   codeDiff.map(x => "0x" + x.toString(16)).join(" ") || "none");
const accounted = new Set([0x61b7f8]);
for (let i = 0; i < blobLen; i++) accounted.add(HOLE + i);
for (const o of fonts) for (let i = 0; i < 8; i++) accounted.add(o + i);
ok("no byte changed outside the blob, the font callbacks and the marker",
   diff.every(i => accounted.has(i)),
   diff.filter(i => !accounted.has(i)).map(x => "0x" + x.toString(16)).join(" ") || "none");

console.log(`\n${pass} passed, ${fails.length} failed`);
if (fails.length) { console.log("DO NOT FLASH"); process.exit(1); }
console.log("payload verification passed");
