#!/usr/bin/env node
// Gates for DOMAIN_ROUTING.md — how a phone message reaches an assistant domain,
// how apps are registered, and which phone->glasses text surfaces exist.
//
// Build-specific: every offset below is 1.0.11.53. G0 pins that, because citing an
// 11.53 offset against 12.83 is a mistake this repo has already made once.
import { readFileSync } from 'node:fs';
const d = readFileSync('Reverse/firmware/x_1.0.11.53/platform_tester.bin');
let bad = 0;
const ok = (n, c, m) => { console.log(`${c ? 'ok  ' : 'FAIL'} ${n} — ${m}`); if (!c) bad++; };
const str = (o) => { let e = o; while (e < d.length && d[e]) e++; return d.subarray(o, e).toString('utf8'); };
const cap = (o) => { let e = o; while (e < d.length && d[e]) e++; return e - o; };
const has = (s) => d.includes(Buffer.from(s, 'utf8'));
const count = (s) => { const b = Buffer.from(s, 'utf8'); let n = 0, i = 0; for (;;) { i = d.indexOf(b, i); if (i < 0) break; n++; i++; } return n; };

// G0 — build identity
ok('G0  build is 1.0.11.53', has('1.0.11.53'), 'all offsets below are this build only');

// G1 — the Domain Namespace table, read as exact strings at exact offsets
const NS = { 0x192144: 'freechat', 0x192150: 'INNER_STKS', 0x19215c: 'application',
             0x192168: 'VSP_ERROR', 0x192174: 'alarm', 0x19217c: 'todo', 0x192264: 'systemsetting' };
let nsOk = true, nsSeen = [];
for (const [o, v] of Object.entries(NS)) { const got = str(+o); nsSeen.push(got); if (got !== v) { nsOk = false; console.log(`     0x${(+o).toString(16)} = ${JSON.stringify(got)}, expected ${JSON.stringify(v)}`); } }
ok('G1  namespace table @0x192144', nsOk && nsSeen.length === 7, nsSeen.join(' '));

// G2 — NEGATIVE CONTROL. "todo" is a namespace; "stocks" is not, and no stock
// vocabulary exists anywhere. This gate is what stops "STKS == stocks" recurring.
const stockWords = ['ticker', 'NASDAQ', 'portfolio', 'equity', 'stockPrice', 'NYSE'];
const stockHits = stockWords.filter(w => has(w));
ok('G2  NEG: no stock-market vocabulary', stockHits.length === 0,
   stockHits.length ? `LEAKED: ${stockHits}` : 'STKS is voice shortcuts, not stocks');
ok('G2b NEG: stks strings are media shortcuts', has('stks_global_next_music') && has('StksHotWordTransInfo'),
   'positive control for what STKS actually is');

// G3 — both domain entry paths exist, and they are NLU/CONNECT_DATA, not VUI code:102
ok('G3  NLU_RESULT path',    has('NLU_RESULT->data parse succeed. Domain Namespace %s'), 'DomainRuntime.onNLUMessage');
ok('G3b CONNECT_DATA path',  has('CONNECT_DATA->connectData parse succeed. Domain Namespace %s'), 'DomainRuntime.onInterceptConnectDataMessageCMD');
ok('G3c findDomain/startDomain present', has('findDomain') && has('startDomain') && has('No matched domain found: %s'), 'the matcher itself');

// G4 — the worked envelope the firmware carries, parsed as real JSON
const ENV = 0x192664, env = str(ENV);
let parsed = null; try { parsed = JSON.parse(env); } catch {}
ok('G4  envelope @0x192664 is valid JSON', !!parsed, env.slice(0, 60) + '…');
ok('G4b envelope has header.namespace', parsed?.header?.namespace === 'INNER_STKS', `= ${parsed?.header?.namespace}`);
ok('G4c envelope has payload.data.intent', parsed?.payload?.data?.intent === 'Intent_Global_Confirm',
   `= ${parsed?.payload?.data?.intent}  <- the field probes 1-4 never sent`);
ok('G4d envelope has payload.text', typeof parsed?.payload?.text === 'string', `= ${JSON.stringify(parsed?.payload?.text)}`);

// G5 — page registry, and the fact Todo is NOT in it
const PAGES = ['Pages/Launcher','Pages/Assistant','Pages/Translation','Pages/Navigation','Pages/Phone',
               'Pages/AirMusic','Pages/Settings','Pages/SmartLife','Pages/StarryNetApp','Pages/Ring',
               'Pages/Ota','Pages/MMIPage'];
const missing = PAGES.filter(p => !has(p));
ok('G5  page registry has 12 known pages', missing.length === 0, missing.length ? `missing ${missing}` : PAGES.length + ' present');
ok('G5b registry block @0x176ba0', str(0x176ba0) === 'Pages/StarryNetApp' && str(0x176bb4) === 'Pages/Launcher',
   'contiguous Pages/* + delegate-name pool');
// NEGATIVE CONTROL: Todo is a domain, never a page. If this ever fails, a Todo app was added.
ok('G5c NEG: no Pages/Todo', !has('Pages/Todo'), 'Todo is an Assistant domain, not a registered app');
ok('G5d Todo exists as a domain', has('domain/todo/TodoDomainView.cpp') && has('TODO_QUERTY_LIST'), 'positive control');

// G6 — patchable dock/card labels, with exact in-place capacity
const LBL = { 0x41eb88: ['Translator', 10], 0x431e48: ['Listening trans', 15], 0x41b81c: ['Transcribe', 10] };
let lblOk = true;
for (const [o, [v, c]] of Object.entries(LBL)) { if (str(+o) !== v || cap(+o) !== c) { lblOk = false; console.log(`     0x${(+o).toString(16)} = ${JSON.stringify(str(+o))} cap=${cap(+o)}, expected ${JSON.stringify(v)} cap=${c}`); } }
ok('G6  card labels at documented offsets', lblOk, 'in-place patchable; "Todo" (4) fits all three');

// G7 — dock icon assets
const ICONS = ['launcher_dock_navi','launcher_dock_trans','launcher_dock_music','launcher_dock_set',
               'launcher_dock_prompt','launcher_dock_ring','launcher_dock_weather','launcher_dock_indicator'];
const iconMissing = ICONS.filter(i => !has(i));
ok('G7  dock icons present', iconMissing.length === 0, iconMissing.length ? `missing ${iconMissing}` : `${ICONS.length} icons`);
ok('G7b launcher_dock_weather exists', has('launcher_dock_weather'), 'icon present though no weather app is in the shipped dock');

// G8 — phone->glasses text surfaces
ok('G8  SHOW_NOTIFICATION command', has('SHOW_NOTIFICATION') && has('DISMISS_NOTIFICATION'), 'card push, BLE-only surface');
ok('G8b notification card fields', has('title') && has('content') && has('msgId') && has('appName'), `content x${count('content')}`);
ok('G8c translation is a phone-driven text pipe', has('sourceText') && has('sourceTextOffset') && has('PHONE_CMD_TRANS_PROXIMAL_RESULT'),
   'the glasses render text the phone sends; they do not translate');
ok('G8d MSG_TYPE_REMINDER exists', has('MSG_TYPE_REMINDER') && has('SYNC_SMART_REMINDER_CONFIG'), 'reminder card category');

// G9 — NEGATIVE CONTROL on the method inventory: log-derived names are sparse,
// so the doc must not claim Todo/Schedule methods were recovered. They were not.
ok('G9  NEG: no TodoDomain:: method names', !has('TodoDomain::'), 'those classes are quiet; only log-emitting classes yield names');
ok('G9b positive control: noisy classes do yield names', has('SystemSettingDomain::handleBrightness') && has('GlobalDomain::handleStks'), 'so G9 is measuring absence, not a broken search');

// G10 — stripped-binary facts behind "new app needs code"
ok('G10 no symbol table', !has('.symtab') && !has('.strtab'), 'fully stripped');
ok('G10b no mangled C++ names', !has('_ZN') && !has('__cxa_'), '-fno-rtti -fno-exceptions, names gone');

if (bad) { console.log(`\n${bad} check(s) failed`); process.exit(1); }
console.log('\ndomain-routing verification passed');
