#!/usr/bin/env node
/* Guards the veneer cave claims. Exits 1 while veneer.ld still targets 0x12F2E4,
 * so the unsafe plan cannot be used by accident. Run from repo root. */
import { readFileSync } from 'node:fs';
const F = {
  '1.0.12.83': ['Reverse/firmware/x_1.0.12.83/platform_tester.bin', 0x3BFD7C0C, 0x13351C],
  '1.0.11.53': ['Reverse/firmware/x_1.0.11.53/platform_tester.bin', 0x3BFD7CB0, 0x143F14],
};
const CAVE = 0x12F2E4, DSP_LO = 0x04E9B4, PS_LO = 0x283F4, PS_HI = 0x469954;
let bad = 0;
const ok = (c, m) => { console.log(`${c ? 'ok  ' : 'FAIL'} ${m}`); if (!c) bad++; };

for (const [v, [p, DATA, dspHi]] of Object.entries(F)) {
  const d = readFileSync(p);
  let n = 0; while (CAVE + n < d.length && d[CAVE + n] === 0) n++;
  ok(true, `${v}: cave@0x12F2E4 = ${n} zero bytes`);
  ok(CAVE >= DSP_LO && CAVE < dspHi,
     `${v}: 0x12F2E4 is INSIDE the DSP image (0x${DSP_LO.toString(16)}-0x${dspHi.toString(16)}) — unusable for ARM code`);
  ok(CAVE >= PS_LO && CAVE < PS_HI,
     `${v}: 0x12F2E4 is PSRAM-copied, so runtime = 0x${(CAVE + DATA).toString(16).toUpperCase()}, NOT 0x2C12F2E4`);
}
// no XIP .text cave on 11.53
{
  const d = readFileSync(F['1.0.11.53'][0]);
  let best = 0, run = 0;
  for (let i = PS_HI; i < d.length - 8; i++) { if (d[i] === 0) { if (++run > best) best = run; } else run = 0; }
  ok(best < 512, `1.0.11.53: largest XIP .text zero run = ${best} B (no usable cave)`);
}
// the linker script must not still point at the bad cave without its warning
{
  const t = readFileSync('Reverse/firmware/toolchain/veneer.ld', 'utf8');
  ok(t.includes('DO NOT USE AS-IS'), 'veneer.ld carries the DO-NOT-USE banner');
  ok(!/ORIGIN\s*=\s*0x2C12F2E4/.test(t) || t.includes('DO NOT USE AS-IS'),
     'veneer.ld ORIGIN 0x2C12F2E4 is flagged rather than silently wrong');
}
if (bad) { console.log(`\n${bad} check(s) failed`); process.exit(1); }
console.log('\ncave claims verified — veneer plan correctly marked unsafe');
