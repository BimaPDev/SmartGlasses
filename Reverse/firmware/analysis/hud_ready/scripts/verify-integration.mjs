#!/usr/bin/env node
/**
 * Recommended hook must be backed by at least two child artifacts.
 * Success token: integration verification passed
 */
import fs from "fs";
import path from "path";
import { fileURLToPath } from "url";

const __dirname = path.dirname(fileURLToPath(import.meta.url));
const BASE = path.resolve(__dirname, "..");

function fail(msg) {
  console.error(msg);
  process.exit(1);
}

function load(rel) {
  const p = path.join(BASE, rel);
  if (!fs.existsSync(p)) fail(`missing ${rel}`);
  return fs.readFileSync(p, "utf8");
}

const hook = JSON.parse(load("hook/hook_candidates.json"));
const rec = hook.recommended;
if (!rec || !rec.name) fail("no recommended hook");
const needle = rec.name;
const sources = [
  ["strings", load("strings/STRINGS.md") + load("strings/strings_inventory.json")],
  ["standby", load("standby_view/STANDBY_VIEW.md") + load("standby_view/standby_view.json")],
  ["splash", load("splash_vs_idle/SPLASH_VS_IDLE.md") + load("splash_vs_idle/splash_vs_idle.json")],
  ["page", load("page_ready/PAGE_READY.md") + load("page_ready/page_ready.json")],
];
const hits = sources.filter(([, t]) => t.includes(needle) || (rec.hook_file_off && t.includes(rec.hook_file_off)));
if (hits.length < 2) {
  fail(`recommended ${needle} appears in ${hits.length} child artifacts, need >= 2`);
}
if (rec.kind === "delay") fail("integrated recommendation is still a delay");
console.log("integration verification passed");
