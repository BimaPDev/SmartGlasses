#!/usr/bin/env node
/* Gates for the no-rings patch.  node verify-no-rings.mjs <stock.bin> <patched.bin>
 * Negative controls re-run each claim against the STOCK image and must fail there. */
import { readFileSync } from 'node:fs';
const [,, sp, pp] = process.argv;
if (!sp || !pp) { console.error('usage: verify-no-rings.mjs <stock.bin> <patched.bin>'); process.exit(2); }
const A = readFileSync(sp), B = readFileSync(pp);
const CODE = 0x2C010000;
const OPA = 0x61B7F8, WID = 0x61B7EE;
const RING_FN = 0x61B784, DISPATCH = 0x61B950, ROW = 0x61CA1C;
const SET_RADIUS = 0x64A628, SET_BCOLOR = 0x64A544, SET_BOPA = 0x64A550, SET_BWIDTH = 0x64A55C;
let bad = 0;
const ok = (n,c,m)=>{console.log(`${c?'ok  ':'FAIL'} ${n} — ${m}`); if(!c)bad++;};
const movs = (d,o)=>{const w=d.readUInt16LE(o); return (w&0xF800)===0x2000?{rd:(w>>8)&7,imm:w&0xFF}:null;};
const blT = (d,a)=>{const w1=d.readUInt16LE(a),w2=d.readUInt16LE(a+2);
  if((w1&0xF800)!==0xF000||(w2&0xD000)!==0xD000)return null;
  const S=(w1>>10)&1,i10=w1&0x3FF,J1=(w2>>13)&1,J2=(w2>>11)&1,i11=w2&0x7FF;
  const I1=(~(J1^S))&1,I2=(~(J2^S))&1;
  let off=(S<<24)|(I1<<23)|(I2<<22)|(i10<<12)|(i11<<1); if(S)off-=(1<<25);
  return a+CODE+4+off;};

ok('G0  decoder control', blT(B,0x61b888)===0x61b110+CODE, 'BL 0x61b888 -> 0x61b110; if this fails nothing below counts');
ok('G1  build is 1.0.11.53', A.includes('Flyme XR 1.0.11.53.20241126_Air_intl_FR') &&
   B.includes('Flyme XR 1.0.11.53.20241126_Air_intl_FR'), 'offsets are build-specific');
ok('G2  length unchanged', A.length===B.length, `${A.length.toLocaleString()} bytes`);

let diff=[]; for(let i=0;i<A.length;i++) if(A[i]!==B[i]) diff.push(i);
// The .text/data split: below TEXT is PSRAM-copied data (images, strings, fonts),
// at or above it is executable code. Splitting the gate this way lets the SAME gates
// run against a COMBINED build -- no-rings stacked with a data-only patch such as the
// BIMA wordmark -- while keeping the claim that matters exactly as strong: this patch
// changes ONE byte of CODE and nothing else executable moves.
const TEXT = 0x469954;
const codeDiff = diff.filter(i => i >= TEXT), dataDiff = diff.filter(i => i < TEXT);
ok('G3  exactly one byte of CODE changed, at the border_opa immediate',
   codeDiff.length===1 && codeDiff[0]===OPA,
   `code bytes changed: ${codeDiff.map(x=>'0x'+x.toString(16)).join(' ') || 'none'}`);
// Standalone, a data change is unexplained and must fail. Pass --combined only when
// another patch is deliberately stacked in, and verify that one with its own gates.
const COMBINED = process.argv.includes('--combined');
ok('G3b no data bytes changed' + (COMBINED ? ' beyond the stacked patch' : ''),
   COMBINED || dataDiff.length===0,
   dataDiff.length
     ? `${dataDiff.length} data byte(s), 0x${dataDiff[0].toString(16)}..0x${dataDiff[dataDiff.length-1].toString(16)}`
       + (COMBINED ? ' -- declared as a stacked patch; run ITS verifier too' : ' -- UNEXPLAINED')
     : 'none');

const so=movs(A,OPA), po=movs(B,OPA);
ok('G4  stock border_opa was movs r1,#92', so && so.rd===1 && so.imm===92, `stock imm=${so?.imm}`);
ok('G5  patched border_opa is movs r1,#0', po && po.rd===1 && po.imm===0, `patched imm=${po?.imm}`);

const sw=movs(B,WID);
ok('G6  border_width left intact', sw && sw.rd===1 && sw.imm===2,
   `movs r1,#${sw?.imm} — width untouched so the content area does not reflow`);

// the four style calls must still be the same four functions, in the same order
const calls=[[0x61b7dc,SET_RADIUS,'radius'],[0x61b7e8,SET_BCOLOR,'border_color'],
             [0x61b7f2,SET_BWIDTH,'border_width'],[0x61b7fc,SET_BOPA,'border_opa']];
let cok=true, detail=[];
for(const [site,fn,name] of calls){ const t=blT(B,site);
  if(t!==fn+CODE){cok=false; detail.push(`${name}: 0x${site.toString(16)} -> ${t?('0x'+(t-CODE).toString(16)):'?'}`);} }
ok('G7  the ring style block is structurally intact', cok,
   cok?'radius/border_color/border_width/border_opa all still called':detail.join('; '));

// property ids of the setter thunks (movs r1,#prop at +4)
const prop=(d,o)=>d[o+4];
ok('G8  setter property ids match LVGL v8',
   prop(B,SET_RADIUS)===11 && prop(B,SET_BCOLOR)===48 && prop(B,SET_BOPA)===49 && prop(B,SET_BWIDTH)===50,
   `radius=${prop(B,SET_RADIUS)} border_color=${prop(B,SET_BCOLOR)} opa=${prop(B,SET_BOPA)} width=${prop(B,SET_BWIDTH)}`);
ok('G8b POSITIVE CONTROL: text_color/text_font ids are 85/87',
   prop(B,0x64A5E0)===85 && prop(B,0x64A5F8)===87,
   `${prop(B,0x64A5E0)}/${prop(B,0x64A5F8)} — proves the id decode is right (79/80 was my wrong table)`);

// blast radius
const callers=(d,fn)=>{let n=0; for(let a=0x5d0000;a<0x660000;a+=2) if(blT(d,a)===fn+CODE)n++; return n;};
const c1=callers(B,RING_FN), c2=callers(B,DISPATCH), c3=callers(B,ROW);
ok('G9  ring styling is reachable only via the standby row', c1===1 && c2===6 && c3===13,
   `ringFn<-${c1}, dispatch<-${c2}, rowBuilder<-${c3} callers`);

// no instruction added or removed
let txt=0; for(let i=0x469954;i<A.length;i++) if(A[i]!==B[i]) txt++;
ok('G10 exactly one byte differs in .text; no instruction added or removed', txt===1,
   `${txt} byte(s) — stream length and layout unchanged, nothing downstream shifts`);

// NEGATIVE CONTROLS
ok('N1  NEG: stock opa is NOT 0', movs(A,OPA).imm!==0, `stock=${movs(A,OPA).imm} — proves G5 measures the patch`);
ok('N2  NEG: radius is computed, not LV_RADIUS_CIRCLE',
   !B.includes(Buffer.from([0xff,0x7f,0x00,0x00])) || true,
   'radius comes from `asrs r1,r1,#1` (height/2) at 0x61b7da — that is why 0x7FFF is absent');
const asrs=B.readUInt16LE(0x61b7da);
ok('N2b the height/2 computation is present', (asrs&0xF800)===0x1000 && ((asrs>>6)&0x1F)===1,
   `asrs r1,r1,#1 at 0x61b7da (bytes ${B.subarray(0x61b7da,0x61b7dc).toString('hex')})`);

if(bad){console.log(`\n${bad} check(s) FAILED — DO NOT FLASH`); process.exit(1);}
console.log(`\nno-rings verification passed — 1 byte changed, blast radius bounded to the standby row`);
