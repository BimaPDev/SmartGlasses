#!/usr/bin/env node
// verify-hud-custom.mjs — re-checks every byte-level claim in every leaf manifest
// under Reverse/firmware/analysis/hud_custom/ against the 1.0.12.83 binary.
//
// Claim conventions differ per leaf:
//   kind "string"                        -> expect is either the literal text
//                                           (matched as a NUL-terminated prefix)
//                                           or hex bytes of the text
//   kind code / literal-* / struct-* / lv_font_* -> expect is hex bytes
//   kind "value" with an object/array/non-hex expect -> derived claim, reported
//                                           but not byte-checked
// Usage: node verify-hud-custom.mjs [repoRoot]

import { readFileSync } from "node:fs";
import { join } from "node:path";

const root = process.argv[2] ?? process.cwd();
const bin = readFileSync(join(root, "Reverse/firmware/x_1.0.12.83/platform_tester.bin"));
const leaves = ["protocol", "widgets", "statusbar", "fonts", "push", "schedule"];

const HEXKINDS = new Set(["code", "literal-word", "literal-pool", "string-block",
  "struct-array", "lv_font_t", "lv_font_fmt_txt_dsc_t", "code-bytes"]);
const isHex = (s) => typeof s === "string" && s.length > 0 && s.length % 2 === 0 &&
  /^[0-9a-f]+$/i.test(s);

let totalChecked = 0, totalBad = 0, totalDerived = 0, totalClaims = 0;

for (const leaf of leaves) {
  let m;
  try {
    m = JSON.parse(readFileSync(join(root,
      `Reverse/firmware/analysis/hud_custom/${leaf}/manifest.json`), "utf8"));
  } catch { continue; }
  const claims = m.claims ?? (Array.isArray(m) ? m : []);
  let bad = 0, checked = 0, derived = 0;
  for (const c of claims) {
    if (c.file_off == null || c.expect == null) continue;
    totalClaims++;
    const off = Number(c.file_off);
    const k = c.kind ?? "";
    let ok = null;
    if (k === "string") {
      if (isHex(c.expect)) {
        const e = Buffer.from(c.expect, "hex");
        ok = bin.subarray(off, off + e.length).equals(e);
      } else {
        const end = bin.indexOf(0, off);
        const got = bin.subarray(off, end < 0 ? undefined : end).toString("utf8");
        ok = got.startsWith(c.expect);
      }
    } else if (HEXKINDS.has(k) || isHex(c.expect)) {
      const e = Buffer.from(c.expect, "hex");
      ok = bin.subarray(off, off + e.length).equals(e);
    }
    if (ok === null) { derived++; continue; }
    checked++;
    if (!ok) { bad++; console.log(`  FAIL ${leaf}:${c.id}`); }
  }
  totalChecked += checked; totalBad += bad; totalDerived += derived;
  console.log(`${leaf}: ${checked - bad}/${checked} byte claims verified, ${derived} derived (not byte-checkable)`);
}

console.log(`TOTAL: ${totalChecked - totalBad}/${totalChecked} byte claims verified across ${totalClaims} claims (${totalDerived} derived)`);
if (totalBad > 0) { console.log("hud_custom verification FAILED"); process.exit(1); }
console.log("hud_custom verification passed");
