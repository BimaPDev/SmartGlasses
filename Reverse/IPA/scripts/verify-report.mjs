#!/usr/bin/env node
import { readFileSync, existsSync, statSync } from "node:fs";
import { resolve } from "node:path";

const [rel, token, minBytesRaw] = process.argv.slice(2);
if (!rel || !token) {
  console.error("usage: verify-report.mjs <path> <token> [minBytes]");
  process.exit(2);
}
const minBytes = Number(minBytesRaw || "1500");
const p = resolve(rel);
if (!existsSync(p)) {
  console.error(`missing report: ${p}`);
  process.exit(1);
}
const st = statSync(p);
if (!st.isFile()) {
  console.error(`not a file: ${p}`);
  process.exit(1);
}
const text = readFileSync(p, "utf8");
if (text.length < minBytes) {
  console.error(`report too short: ${text.length} < ${minBytes}`);
  process.exit(1);
}
if (!text.includes(token)) {
  console.error(`missing completion token ${token}`);
  process.exit(1);
}
if (!/extracted\/|Payload\/|XJOverSeas/.test(text)) {
  console.error("report does not cite extracted IPA paths");
  process.exit(1);
}
process.stdout.write(`${token}\n`);
