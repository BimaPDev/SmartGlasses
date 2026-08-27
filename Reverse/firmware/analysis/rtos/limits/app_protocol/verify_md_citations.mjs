#!/usr/bin/env node
/**
 * leaf-1.3.2 G2: APP_PROTOCOL_LIMITS.md must cite writeup + binary evidence.
 * Owned by app_protocol leaf; used only as a gate oracle.
 */
import { readFileSync } from 'node:fs';
import { dirname, join } from 'node:path';
import { fileURLToPath } from 'node:url';

const dir = dirname(fileURLToPath(import.meta.url));
const md = readFileSync(join(dir, 'APP_PROTOCOL_LIMITS.md'), 'utf8');
const json = JSON.parse(readFileSync(join(dir, 'app_protocol_limits.json'), 'utf8'));

const requiredSubstrings = [
  'STAR_AIR_FULL_WRITEUP',
  'JBD013_DECOMP',
  'IPC_OBJECTS',
  'platform_tester.bin',
  '0x25800',
  '80',
  '0x76C',
  '0x2D0',
  '4096',
  '8192',
  '0..100',
  '27',
  'writeup-only',
  'MAX_',
];

const missing = requiredSubstrings.filter((s) => !md.includes(s));
if (missing.length) {
  console.error('missing citations:', missing.join(', '));
  process.exit(1);
}

const entries = json.entries || [];
if (entries.length < 25) {
  console.error(`json entries ${entries.length} < 25`);
  process.exit(1);
}

const sources = new Set(entries.map((e) => e.source));
for (const s of ['binary', 'writeup', 'both']) {
  if (!sources.has(s)) {
    console.error(`json missing source tag ${s}`);
    process.exit(1);
  }
}

const writeupOnly = entries.filter((e) => e.source === 'writeup');
if (writeupOnly.length < 1) {
  console.error('expected at least one writeup-only entry');
  process.exit(1);
}

console.log(
  `app protocol md citations verified (${entries.length} entries, ${writeupOnly.length} writeup-only)`,
);
