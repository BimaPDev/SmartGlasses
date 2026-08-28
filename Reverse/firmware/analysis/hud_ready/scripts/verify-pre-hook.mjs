#!/usr/bin/env node
/**
 * Confirm a non-delay idle-HUD discriminator/candidate exists.
 * Usage: node verify-pre-hook.mjs <splash|set>
 * Success token: pre-hook evidence verification passed
 */
import fs from "fs";
import path from "path";
import { fileURLToPath } from "url";

const __dirname = path.dirname(fileURLToPath(import.meta.url));
const BASE = path.resolve(__dirname, "..");
const mode = process.argv[2] || "splash";

function fail(msg) {
  console.error(msg);
  process.exit(1);
}

function load(rel) {
  const p = path.join(BASE, rel);
  if (!fs.existsSync(p)) fail(`missing ${rel}`);
  return JSON.parse(fs.readFileSync(p, "utf8"));
}

if (mode === "splash") {
  const inv = load("splash_vs_idle/splash_vs_idle.json");
  if (!inv.discriminator || inv.discriminator.kind === "delay") {
    fail("splash discriminator missing or is a delay");
  }
  if (!inv.discriminator.kind) fail("discriminator.kind required");
} else if (mode === "set") {
  const parts = [
    JSON.stringify(load("strings/strings_inventory.json")),
    JSON.stringify(load("standby_view/standby_view.json")),
    JSON.stringify(load("splash_vs_idle/splash_vs_idle.json")),
    JSON.stringify(load("page_ready/page_ready.json")),
  ];
  const needles = [
    "launcher_is_on_standby_view",
    "onViewDidAppear",
    "onPageSwitchFinish, show launcher",
    "createDefaultWidgets",
    "switchView",
    "changeHideStatus",
  ];
  const hits = needles.filter((n) => parts.filter((p) => p.includes(n)).length >= 2);
  if (hits.length < 1) {
    fail("need at least one non-delay candidate named in two or more leaves");
  }
} else {
  fail("usage: node verify-pre-hook.mjs <splash|set>");
}

console.log("pre-hook evidence verification passed");
