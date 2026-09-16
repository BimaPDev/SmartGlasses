// Shared helpers. Every script re-derives from the binary; none trusts prose.
import { readFileSync } from "node:fs";
import { fileURLToPath } from "node:url";
import { dirname, join } from "node:path";
export const ROOT = join(dirname(fileURLToPath(import.meta.url)), "../../../..");
export const FW = join(ROOT, "Reverse/firmware/x_1.0.11.53/platform_tester.bin");
export const BTH = join(ROOT, "Reverse/firmware/x_1.0.11.53/best1600_watch_bth.bin");
export const d = readFileSync(FW);
export const BUILD = "Flyme XR 1.0.11.53.20241126_Air_intl_FR";
export function strings(buf, min = 4) {
  const out = []; let s = -1;
  for (let i = 0; i <= buf.length; i++) {
    const c = i < buf.length ? buf[i] : 0;
    if (c >= 0x20 && c < 0x7f) { if (s < 0) s = i; }
    else { if (s >= 0 && i - s >= min) out.push([s, buf.toString("latin1", s, i)]); s = -1; }
  }
  return out;
}
export function mk() {
  let pass = 0; const fails = [];
  const ok = (n, c, det = "") => {
    if (c) { pass++; console.log(`ok   ${n}${det ? " — " + det : ""}`); }
    else { fails.push(n); console.log(`FAIL ${n}${det ? " — " + det : ""}`); }
  };
  const done = (token) => {
    console.log(`\n${pass} passed, ${fails.length} failed`);
    if (fails.length) process.exit(1);
    console.log(token);
  };
  return { ok, done };
}
