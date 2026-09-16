#!/usr/bin/env node
// Gates for the MYVU -> BIMA string rebrand.
//   node Tools/fwbuilder/verify-rebrand.mjs <stock.bin> <patched.bin>
//
// The risk in a blind byte replace is not "did it replace" -- it is whether it stayed
// inside string boundaries and left protocol tokens alone. These gates check that.
import { readFileSync } from "node:fs";
const [, , sp, pp] = process.argv;
const A = readFileSync(sp), B = readFileSync(pp);
let pass = 0; const fails = [];
const ok = (n, c, d = "") => { if (c) { pass++; console.log(`ok   ${n}${d ? " — " + d : ""}`); }
  else { fails.push(n); console.log(`FAIL ${n}${d ? " — " + d : ""}`); } };

const count = (buf, s) => { let n = 0, i = 0; const nb = Buffer.from(s);
  while ((i = buf.indexOf(nb, i)) !== -1) { n++; i++; } return n; };

ok("length unchanged", A.length === B.length, `${A.length}`);
const stockMyvu = count(A, "MYVU");
ok("stock had MYVU strings", stockMyvu > 0, `${stockMyvu}`);
ok("no MYVU remains", count(B, "MYVU") === 0, `${count(B, "MYVU")} left`);
ok("BIMA count equals the old MYVU count", count(B, "BIMA") === stockMyvu,
   `${count(B, "BIMA")} vs ${stockMyvu}`);

// every diff must be exactly a 4-byte MYVU->BIMA swap, or the wordmark, or the marker
const TEXT = 0x4a1270, HOLE = 0x3ec950, PIX = 0x4134d0, PIXLEN = 2592, MARKER = 0x61b7f8;
const diff = []; for (let i = 0; i < A.length; i++) if (A[i] !== B[i]) diff.push(i);
const codeDiff = diff.filter(i => i >= TEXT);
ok("exactly one byte of CODE changed (the no-rings marker)",
   codeDiff.length === 1 && codeDiff[0] === MARKER,
   codeDiff.map(x => "0x" + x.toString(16)).join(" ") || "none");
ok("border_opa marker is 92 -> 0", A[MARKER] === 92 && B[MARKER] === 0);

// string-safety: each replaced run must sit where stock read "MYVU"
let strayed = 0, swaps = 0;
for (let i = 0; i < A.length - 3; i++) {
  if (A.subarray(i, i + 4).equals(Buffer.from("MYVU"))) {
    swaps++;
    if (!B.subarray(i, i + 4).equals(Buffer.from("BIMA"))) strayed++;
  }
}
ok("every stock MYVU position now reads BIMA", strayed === 0, `${swaps} sites`);

// The replacement must never have crossed a NUL -- string lengths must be preserved.
// Scope it to the STRING regions: inside the wordmark payload a 0 byte is a transparent
// pixel, not a terminator, and the marker byte legitimately becomes 0. Counting those
// as moved terminators is a false alarm (it fired once, at 1034, and all 1034 were
// exactly those two things).
const isImagePixel = i => i >= PIX && i < PIX + PIXLEN;
let lenChanged = 0, lenSites = [];
for (let i = 0; i < A.length; i++) {
  if (isImagePixel(i) || i === MARKER) continue;
  if ((A[i] === 0) !== (B[i] === 0)) { lenChanged++; if (lenSites.length < 5) lenSites.push(i); }
}
ok("no NUL terminator moved in any string (lengths preserved)", lenChanged === 0,
   lenSites.map(x => "0x" + x.toString(16)).join(" ") || "checked every byte outside the "
   + "image payload and the marker");

// protocol tokens left alone
for (const s of ["myvu_pp", "app_startup_myvuapp", "phone_set_cb_myvu_version",
                 "launcher_myvu_not_install"])
  ok(`NV/protocol key "${s}" untouched`, count(B, s) === count(A, s) && count(A, s) > 0);

// the wordmark image came along too
const wm = diff.filter(i => i >= PIX && i < PIX + PIXLEN);
ok("the power-off wordmark was also replaced", wm.length > 100, `${wm.length} pixel bytes`);
ok("nothing changed in the free PSRAM hole", !diff.some(i => i >= HOLE && i < HOLE + 0x8de));

// CONTROL: this harness must be able to fail
ok("control: stock itself would FAIL the no-MYVU gate", count(A, "MYVU") !== 0);

console.log(`\n${pass} passed, ${fails.length} failed`);
if (fails.length) { console.log("DO NOT FLASH"); process.exit(1); }
console.log("rebrand verification passed");
