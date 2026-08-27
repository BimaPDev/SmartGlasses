#!/usr/bin/env node
/** Verify RTOS leaf deliverables. Usage: verify-leaf.mjs <leaf-id> */
import { readFileSync, existsSync } from 'node:fs';
import { join, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';

const __dirname = dirname(fileURLToPath(import.meta.url));
const RTOS_ROOT = join(__dirname, '..');

const LEAF_CONFIG = {
  'leaf-1.1.1': {
    dir: 'm55',
    json: 'thread_inventory.json',
    md: 'THREADS.md',
    minEntries: 30,
    requiredKeys: ['name'],
    kernel: 'FreeRTOS',
  },
  'leaf-1.1.2': {
    dir: 'm55',
    json: 'ipc_inventory.json',
    md: 'IPC_OBJECTS.md',
    minEntries: 40,
    requiredKeys: ['name', 'type'],
    kernel: 'FreeRTOS',
  },
  'leaf-1.2.1': {
    dir: 'bth',
    json: 'rtx5_inventory.json',
    md: 'RTX5_MAP.md',
    minEntries: 10,
    requiredKeys: ['name'],
    kernel: 'RTX5',
  },
  'leaf-1.2.2': {
    dir: 'sensor_hub',
    json: 'sensor_hub_inventory.json',
    md: 'SENSOR_HUB_RTOS.md',
    minEntries: 5,
    requiredKeys: ['name'],
    kernel: 'RTX5',
  },
  'leaf-1.3.1': {
    dir: 'introspection',
    json: 'introspection.json',
    md: 'INTROSPECTION.md',
    minEntries: 3,
    requiredKeys: ['command'],
    kernel: 'mixed',
  },
};

function fail(msg) {
  console.error(msg);
  process.exit(1);
}

const leafId = process.argv[2];
if (!leafId || !LEAF_CONFIG[leafId]) {
  fail(`usage: verify-leaf.mjs <${Object.keys(LEAF_CONFIG).join('|')}>`);
}

const cfg = LEAF_CONFIG[leafId];
const base = join(RTOS_ROOT, cfg.dir);
const jsonPath = join(base, cfg.json);
const mdPath = join(base, cfg.md);

if (!existsSync(jsonPath)) fail(`missing ${jsonPath}`);
if (!existsSync(mdPath)) fail(`missing ${mdPath}`);

const data = JSON.parse(readFileSync(jsonPath, 'utf8'));
const entries = Array.isArray(data.entries) ? data.entries : data.threads || data.objects || [];
if (entries.length < cfg.minEntries) {
  fail(`expected >=${cfg.minEntries} entries, got ${entries.length}`);
}

for (const key of cfg.requiredKeys) {
  const missing = entries.filter((e) => !e[key]);
  if (missing.length > 0) fail(`${missing.length} entries missing key "${key}"`);
}

const md = readFileSync(mdPath, 'utf8');
if (md.length < 500) fail(`${cfg.md} too short (${md.length} chars)`);
if (!md.includes(cfg.kernel) && leafId !== 'leaf-1.3.1') {
  fail(`${cfg.md} must mention ${cfg.kernel}`);
}

console.log(`${leafId} verification passed (${entries.length} entries)`);
