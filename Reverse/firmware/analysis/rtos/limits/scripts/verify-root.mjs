#!/usr/bin/env node
import { readFileSync, existsSync } from 'node:fs';
import { join, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';

const ROOT = join(dirname(fileURLToPath(import.meta.url)), '..');
const mapPath = join(ROOT, 'CONSTRAINTS_MAP.md');

if (!existsSync(mapPath)) {
  console.error('missing CONSTRAINTS_MAP.md');
  process.exit(1);
}
const md = readFileSync(mapPath, 'utf8');
for (const s of [
  'FreeRTOS config',
  'Stack and priority',
  'Timing and watchdog',
  'Memory and MPU',
  'BTH and Sensor Hub',
  'Application and protocol',
  'Hard limits summary',
]) {
  if (!md.includes(s)) {
    console.error(`CONSTRAINTS_MAP.md missing section: ${s}`);
    process.exit(1);
  }
}
console.log('constraints map sections verified');
