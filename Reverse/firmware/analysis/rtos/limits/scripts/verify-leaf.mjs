#!/usr/bin/env node
import { readFileSync, existsSync } from 'node:fs';
import { join, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';

const __dirname = dirname(fileURLToPath(import.meta.url));
const ROOT = join(__dirname, '..');

const CFG = {
  'leaf-1.1.1': {
    dir: 'freertos_config',
    json: 'freertos_config.json',
    md: 'FREERTOS_CONFIG.md',
    min: 8,
    keys: ['name'],
  },
  'leaf-1.1.2': {
    dir: 'stacks_priorities',
    json: 'stacks_priorities.json',
    md: 'STACKS_PRIORITIES.md',
    min: 15,
    keys: ['name'],
  },
  'leaf-1.2.1': {
    dir: 'timing_watchdog',
    json: 'timing_inventory.json',
    md: 'TIMING_WATCHDOG.md',
    min: 40,
    keys: ['name'],
  },
  'leaf-1.2.2': {
    dir: 'memory_mpu',
    json: 'memory_limits.json',
    md: 'MEMORY_MPU.md',
    min: 10,
    keys: ['name'],
  },
  'leaf-1.3.1': {
    dir: 'bth_hub_limits',
    json: 'bth_hub_limits.json',
    md: 'BTH_HUB_LIMITS.md',
    min: 12,
    keys: ['name'],
  },
  'leaf-1.3.2': {
    dir: 'app_protocol',
    json: 'app_protocol_limits.json',
    md: 'APP_PROTOCOL_LIMITS.md',
    min: 25,
    keys: ['name'],
  },
};

const id = process.argv[2];
if (!id || !CFG[id]) {
  console.error(`usage: verify-leaf.mjs <${Object.keys(CFG).join('|')}>`);
  process.exit(1);
}
const c = CFG[id];
const base = join(ROOT, c.dir);
const jp = join(base, c.json);
const mp = join(base, c.md);
if (!existsSync(jp)) { console.error(`missing ${jp}`); process.exit(1); }
if (!existsSync(mp)) { console.error(`missing ${mp}`); process.exit(1); }
const data = JSON.parse(readFileSync(jp, 'utf8'));
const entries = data.entries || data.limits || data.constraints || [];
if (entries.length < c.min) {
  console.error(`expected >=${c.min} entries, got ${entries.length}`);
  process.exit(1);
}
for (const k of c.keys) {
  if (entries.some((e) => e[k] == null || e[k] === '')) {
    console.error(`entries missing key ${k}`);
    process.exit(1);
  }
}
const md = readFileSync(mp, 'utf8');
if (md.length < 800) {
  console.error(`${c.md} too short (${md.length})`);
  process.exit(1);
}
console.log(`${id} verification passed (${entries.length} entries)`);
