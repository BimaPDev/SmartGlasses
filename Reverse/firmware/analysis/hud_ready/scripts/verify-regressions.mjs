#!/usr/bin/env node
/**
 * Confirm the synthesis still rejects the known-bad v5/v6 sites.
 * Success token: regression verification passed
 */
import fs from "fs";
import path from "path";
import { fileURLToPath } from "url";

const __dirname = path.dirname(fileURLToPath(import.meta.url));
const BASE = path.resolve(__dirname, "..");
const hook = JSON.parse(
  fs.readFileSync(path.join(BASE, "hook/hook_candidates.json"), "utf8"),
);
const md = fs.readFileSync(path.join(BASE, "hook/HUD_READY.md"), "utf8");
const blob = JSON.stringify(hook).toLowerCase() + md.toLowerCase();

function fail(msg) {
  console.error(msg);
  process.exit(1);
}

if (!blob.includes("5d9426")) fail("regression: ctor hook 0x5d9426 not discussed");
if (!blob.includes("100") && !blob.includes("lv_timer")) {
  fail("regression: v6 100 ms timer not discussed");
}
if (hook.recommended && hook.recommended.hook_file_off) {
  const off = hook.recommended.hook_file_off.toLowerCase();
  if (off === "0x5d9426") fail("regression: recommended the known-bad ctor BL");
}
if (hook.recommended && hook.recommended.kind === "delay") {
  fail("regression: recommended a delay");
}
console.log("regression verification passed");
