#!/usr/bin/env node
import { readFileSync, existsSync } from 'node:fs';
import { join, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';

const __dirname = dirname(fileURLToPath(import.meta.url));
const RTOS_ROOT = join(__dirname, '..');

const LEAVES = ['leaf-1.1.1', 'leaf-1.1.2', 'leaf-1.2.1', 'leaf-1.2.2', 'leaf-1.3.1'];

if (process.argv.includes('--map')) {
  const mapPath = join(RTOS_ROOT, 'RTOS_MAP.md');
  if (!existsSync(mapPath)) {
    console.error('missing RTOS_MAP.md');
    process.exit(1);
  }
  const md = readFileSync(mapPath, 'utf8');
  for (const section of ['FreeRTOS', 'RTX5', 'Sensor Hub', 'Cross-core IPC', 'Introspection']) {
    if (!md.includes(section)) {
      console.error(`RTOS_MAP.md missing section: ${section}`);
      process.exit(1);
    }
  }
  console.log('map sections verified');
  process.exit(0);
}

for (const leaf of LEAVES) {
  const gatePath = join(process.cwd(), '.unlazy/rtos-map/gates', `${leaf}.md`);
  if (!existsSync(gatePath)) {
    console.error(`missing gate file ${gatePath}`);
    process.exit(1);
  }
}

console.log('root verification passed');
