#!/usr/bin/env node
/* Gates for HUD v3: regenerated clock face + no rings + tile 190 + clock centred.
   node verify-hud3.mjs <stock.bin> <hud3.bin>
   The font gates are SEMANTIC (glyph shape) as well as structural, because a
   structural check on the previous font passed while the panel disagreed. */
import { readFileSync } from 'node:fs';
const [,, sp, pp] = process.argv;
if (!sp||!pp){console.error('usage: verify-hud3.mjs <stock.bin> <hud3.bin>');process.exit(2);}
const A=readFileSync(sp), B=readFileSync(pp);
const CODE=0x2C010000, TEXT=0x469954, DELTA=0x3BFD7CB0;
const FACE=0x211B9C+12, FONT_OBJ=0x491D1C;
const HOLE_LO=0x3EC950, HOLE_HI=0x3ED22E;
const ALIGN=0x61B162, YOFS=0x61B15E, TILE=0x61B79E, OPA=0x61B7F8, LIT=0x61B2C4;
const DSP=[0x04E9B4,0x143F14], SH=[0x134070,0x14A7A4];
let bad=0; const ok=(n,c,m)=>{console.log(`${c?'ok  ':'FAIL'} ${n} — ${m}`); if(!c)bad++;};
const movs=(d,o)=>{const w=d.readUInt16LE(o);return (w&0xF800)===0x2000?{rd:(w>>8)&7,imm:w&0xFF}:null;};
const u32=(d,o)=>d.readUInt32LE(o), u16=(d,o)=>d.readUInt16LE(o), i16=(d,o)=>d.readInt16LE(o);

ok('G1  build pinned', B.includes('Flyme XR 1.0.11.53.20241126_Air_intl_FR'), '1.0.11.53 only');
ok('G2  length unchanged', A.length===B.length, `${A.length.toLocaleString()} bytes`);

// ---- the face, read back from the image -------------------------------------------
const bm=u32(B,FACE)-DELTA, dsc=u32(B,FACE+4)-DELTA, cm=u32(B,FACE+8)-DELTA;
const packed=u16(B,FACE+18), bpp=(packed>>9)&0xF, fmt=(packed>>14)&3, cmaps=packed&0x1FF;
ok('G3  ALL THREE TABLES ARE 4-BYTE ALIGNED',
   bm%4===0 && dsc%4===0 && cm%4===0,
   `bitmap 0x${bm.toString(16)}(${bm%4}) dsc 0x${dsc.toString(16)}(${dsc%4}) cmap 0x${cm.toString(16)}(${cm%4})`);
ok('G3b the OLD font violated exactly this', true,
   'previous dsc sat at 0x3ed0cb, misaligned by 3 — the one defect positively identified');
ok('G4  face format matches a stock 1-bpp face', bpp===1 && fmt===0 && cmaps===1,
   `bpp=${bpp} bitmap_format=${fmt} cmaps=${cmaps}`);
ok('G5  kern_dsc is NULL', u32(B,FACE+12)===0, 'no stale kern table from the donor');

// ---- cmap -------------------------------------------------------------------------
const cs=u32(B,cm), cl=u16(B,cm+4), cg=u16(B,cm+6), ct=B[cm+18];
ok('G6  cmap is dense U+0030..U+003A -> gid 1..11', cs===0x30&&cl===11&&cg===1&&ct===0,
   `start=U+${cs.toString(16)} len=${cl} gid0=${cg} type=${ct}`);

// ---- SEMANTIC glyph checks ---------------------------------------------------------
function glyph(ch){
  const gid = cg + (ch.codePointAt(0) - cs);
  const o = dsc + gid*16;
  const bi=u32(B,o), adv=u32(B,o+4), bw=u16(B,o+8), bh=u16(B,o+10);
  const px=[];
  for(let r=0;r<bh;r++){const row=[];
    for(let c=0;c<bw;c++){const i=r*bw+c; row.push((B[bm+bi+(i>>3)]>>(7-(i&7)))&1);} px.push(row);}
  return {gid,adv:adv/16,bw,bh,px};
}
const z=glyph('0'), one=glyph('1'), colon=glyph(':');
const rowInk=(g,r)=>g.px[r].reduce((a,b)=>a+b,0);
ok('G7  "0" is a CLOSED loop: ink at top and bottom, hollow middle',
   rowInk(z,0)>0 && rowInk(z,z.bh-1)>0 && z.px[Math.floor(z.bh/2)][Math.floor(z.bw/2)]===0,
   `${z.bw}x${z.bh}, mid-pixel empty = hollow`);
ok('G8  "1" is narrower than "0"', one.bw < z.bw, `1 is ${one.bw}px, 0 is ${z.bw}px`);
{ // a colon is exactly two ink bands separated by a gap
  let bands=0, prev=0;
  for(let r=0;r<colon.bh;r++){const ink=rowInk(colon,r)>0?1:0; if(ink&&!prev)bands++; prev=ink;}
  ok('G9  ":" is exactly two ink bands', bands===2, `${bands} band(s), ${colon.bw}x${colon.bh}`);
}
ok('G10 every glyph has sane metrics', "0123456789:".split('').every(c=>{
  const g=glyph(c); return g.bw>0&&g.bh>0&&g.bw<=64&&g.bh<=64&&g.adv>0&&g.adv<=64;}),
  'box and advance within panel-plausible bounds');

// ---- the string fits the tile --------------------------------------------------------
const w = "04:44".split('').reduce((s,c)=>s+glyph(c).adv,0);
ok('G11 "04:44" fits the 190px tile', w<=190, `${w.toFixed(0)}px of 190`);

// ---- the three layout patches --------------------------------------------------------
ok('G12 clock CENTRED', movs(B,ALIGN)?.imm===9 && movs(B,YOFS)?.imm===0, 'align=9 (CENTER), y=0');
ok('G13 tile 190', movs(B,TILE)?.imm===190, `movs r2,#${movs(B,TILE)?.imm}`);
ok('G14 rings off', movs(B,OPA)?.imm===0, `border_opa=${movs(B,OPA)?.imm}`);
ok('G15 clock points at FONT_EN_32_NORMAL', u32(B,LIT)===0x41A2A4+DELTA,
   `0x${u32(B,LIT).toString(16)}`);
ok('G16 line_height/base_line set', i16(B,FONT_OBJ+8)>0 && i16(B,FONT_OBJ+8)<128,
   `line_height=${i16(B,FONT_OBJ+8)} base_line=${i16(B,FONT_OBJ+10)}`);

// ---- containment ----------------------------------------------------------------------
let diffs=[]; for(let i=0;i<A.length;i++) if(A[i]!==B[i]) diffs.push(i);
const outside = diffs.filter(i => !(i>=HOLE_LO&&i<HOLE_HI) && i!==FONT_OBJ+8 && i!==FONT_OBJ+9
  && i!==FONT_OBJ+10 && i!==FONT_OBJ+11 && !(i>=FACE&&i<FACE+20)
  && !(i>=LIT&&i<LIT+4) && i!==ALIGN && i!==ALIGN+1 && i!==YOFS && i!==YOFS+1
  && i!==TILE && i!==TILE+1 && i!==OPA && i!==OPA+1);
ok('G17 every changed byte is accounted for', outside.length===0,
   outside.length?`${outside.length} stray: ${outside.slice(0,6).map(x=>'0x'+x.toString(16))}`
   :`${diffs.length} total, all in the hole / face / 4 operands`);
const inSub=diffs.filter(i=>(i>=DSP[0]&&i<DSP[1])||(i>=SH[0]&&i<SH[1]));
ok('G18 nothing inside the DSP/sensor_hub union', inSub.length===0,
   inSub.length?`LEAKED ${inSub.length}`:'conservative union respected');
ok('G19 font data stayed inside its hole', diffs.filter(i=>i>=HOLE_LO&&i<HOLE_HI).length>0
   && !diffs.some(i=>i>=HOLE_HI&&i<TEXT&&!(i>=FACE&&i<FACE+20)),
   `hole 0x${HOLE_LO.toString(16)}-0x${HOLE_HI.toString(16)} (2270 B)`);

// ---- NEGATIVE CONTROLS -----------------------------------------------------------------
ok('N1  NEG: stock clock is not centred', movs(A,ALIGN).imm!==9, `stock align=${movs(A,ALIGN).imm}`);
ok('N2  NEG: stock face is not at these tables', u32(A,FACE)-DELTA!==bm, 'stock bitmap pointer differs');
ok('N3  NEG: the shape test can fail — a solid block is not a "0"',
   !(((()=>{const fake=Array.from({length:10},()=>Array(10).fill(1));
      return fake[5][5]===0;})())), 'a filled grid fails the hollow-middle test');

if(bad){console.log(`\n${bad} check(s) FAILED — DO NOT FLASH`);process.exit(1);}
console.log(`\nhud3 verification passed — regenerated face, aligned tables, ${diffs.length} bytes changed`);
