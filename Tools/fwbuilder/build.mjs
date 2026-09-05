#!/usr/bin/env node
/* Generates builder.html by inlining fwcore.js, so the tool is a single file that
 * works over file:// (ES-module imports would be blocked by CORS there). */
import { readFileSync, writeFileSync } from 'node:fs';
import { fileURLToPath } from 'node:url';
import { dirname, join } from 'node:path';

const here = dirname(fileURLToPath(import.meta.url));
const core = readFileSync(join(here, 'fwcore.js'), 'utf8')
  .replace(/^export\s+/gm, '')            // strip module syntax
  .replace(/^\/\* fwcore\.js[\s\S]*?\*\/\n/, '');

const html = `<!doctype html>
<html lang="en"><head><meta charset="utf-8">
<meta name="viewport" content="width=device-width,initial-scale=1">
<title>MYVU Firmware Builder</title>
<style>
:root{
  --bg:#0d1110; --panel:#141a18; --panel2:#1a221f; --line:#26312d;
  --ink:#e6ede9; --dim:#8d9a94; --accent:#3fcf7f; --accent-dim:#1d6b45;
  --ok:#3fcf7f; --bad:#e5654b; --warn:#d9a441;
  --mono:"SF Mono",Menlo,Consolas,monospace;
}
*{box-sizing:border-box}
body{margin:0;background:var(--bg);color:var(--ink);
  font:14px/1.5 -apple-system,BlinkMacSystemFont,"Segoe UI",sans-serif}
header{padding:14px 20px;border-bottom:1px solid var(--line);display:flex;
  align-items:baseline;gap:16px;flex-wrap:wrap}
h1{font-size:15px;margin:0;letter-spacing:.02em}
h1 b{color:var(--accent)}
.sub{color:var(--dim);font-size:12px;font-family:var(--mono)}
main{display:grid;grid-template-columns:340px 1fr;gap:0;height:calc(100vh - 52px)}
aside{border-right:1px solid var(--line);overflow-y:auto;padding:16px}
section{overflow-y:auto;padding:16px 20px}
#drop{border:2px dashed var(--line);border-radius:6px;padding:26px 16px;text-align:center;
  color:var(--dim);cursor:pointer;transition:.15s}
#drop:hover,#drop.hot{border-color:var(--accent);color:var(--ink);background:var(--panel)}
.k{font-family:var(--mono);font-size:11px;color:var(--dim);text-transform:uppercase;
  letter-spacing:.09em;margin:20px 0 8px}
.kv{display:grid;grid-template-columns:auto 1fr;gap:3px 12px;font-family:var(--mono);font-size:12px}
.kv dt{color:var(--dim)} .kv dd{margin:0;color:var(--ink);word-break:break-all}
.chk{display:flex;gap:9px;padding:7px 0;border-bottom:1px solid var(--line);font-size:12.5px}
.chk:last-child{border-bottom:0}
.dot{width:7px;height:7px;border-radius:50%;margin-top:6px;flex:none}
.dot.p{background:var(--ok)} .dot.f{background:var(--bad)}
.chk .n{flex:1} .chk .d{color:var(--dim);font-size:11.5px;font-family:var(--mono)}
.chk .w{color:var(--warn);font-family:var(--mono);font-size:11px;flex:none}
nav{display:flex;gap:2px;margin-bottom:14px;border-bottom:1px solid var(--line)}
nav button{background:none;border:0;border-bottom:2px solid transparent;color:var(--dim);
  padding:7px 13px;cursor:pointer;font-size:13px}
nav button.on{color:var(--accent);border-bottom-color:var(--accent)}
.grid{display:grid;grid-template-columns:repeat(auto-fill,minmax(112px,1fr));gap:9px}
.cell{background:var(--panel);border:1px solid var(--line);border-radius:4px;padding:7px;
  text-align:center;cursor:pointer;transition:.12s}
.cell:hover,.cell.hot{border-color:var(--accent);background:var(--panel2)}
.cell canvas{display:block;margin:0 auto 5px;image-rendering:pixelated;max-width:100%}
.cell .nm{font-family:var(--mono);font-size:9.5px;color:var(--dim);word-break:break-all;line-height:1.3}
.cell.done{border-color:var(--accent)}
.cell.done .nm{color:var(--accent)}
button.act{background:var(--accent-dim);color:var(--ink);border:1px solid var(--accent);
  border-radius:4px;padding:8px 15px;cursor:pointer;font-size:13px}
button.act:hover{background:var(--accent);color:#06120c}
button.act:disabled{opacity:.35;cursor:not-allowed;background:none}
.bar{display:flex;gap:9px;align-items:center;margin-bottom:14px;flex-wrap:wrap}
input[type=search]{background:var(--panel);border:1px solid var(--line);color:var(--ink);
  border-radius:4px;padding:6px 10px;font-size:12.5px;min-width:190px}
.hint{color:var(--dim);font-size:12px;margin:0 0 12px}
.log{font-family:var(--mono);font-size:11.5px;color:var(--dim);max-height:180px;overflow-y:auto}
.log div{padding:2px 0;border-bottom:1px solid var(--line)}
.log b{color:var(--accent);font-weight:400}
table.wid{width:100%;border-collapse:collapse;font-size:12.5px}
table.wid td{padding:6px 8px;border-bottom:1px solid var(--line)}
table.wid code{font-family:var(--mono);color:var(--accent);font-size:12px}
.slot{display:flex;align-items:center;gap:9px;background:var(--panel);border:1px solid var(--line);
  border-radius:4px;padding:7px 10px;margin-bottom:6px;cursor:grab;font-size:12.5px}
.slot.drag{opacity:.4}
.slot .g{color:var(--dim);font-family:var(--mono);font-size:11px;margin-left:auto}
pre.out{background:var(--panel);border:1px solid var(--line);border-radius:4px;padding:11px;
  font-family:var(--mono);font-size:11.5px;color:var(--accent);overflow-x:auto;white-space:pre-wrap}
</style></head><body>

<header>
  <h1>MYVU <b>Firmware Builder</b></h1>
  <span class="sub" id="hdr">no image loaded</span>
</header>

<main>
<aside>
  <div id="drop">drop <b>platform_tester.bin</b><br>or click to choose</div>
  <input type="file" id="file" accept=".bin" hidden>
  <div class="k">Identity</div><dl class="kv" id="ident"><dd class="sub">—</dd></dl>
  <div class="k">Validation</div><div id="checks"><div class="sub">—</div></div>
  <div class="k">Change log</div><div class="log" id="log"><div>nothing modified</div></div>
  <div style="margin-top:16px;display:flex;gap:8px;flex-wrap:wrap">
    <button class="act" id="save" disabled>Export patched .bin</button>
    <button class="act" id="undo" disabled>Revert all</button></div>
</aside>

<section>
  <nav>
    <button data-t="img" class="on">Images</button>
    <button data-t="gly">Glyph slots</button>
    <button data-t="str">Strings</button>
    <button data-t="aud">Audio</button>
    <button data-t="wid">HUD widgets</button>
  </nav>
  <div id="p-img">
    <p class="hint">Click a tile, or drop a PNG onto it, to replace that image. Replacement is
      scaled to the original dimensions — the byte length never changes.</p>
    <div class="bar"><input type="search" id="q" placeholder="filter by name or size…">
      <span class="sub" id="imgn"></span></div>
    <div class="grid" id="imgs"></div>
  </div>
  <div id="p-str" hidden>
    <p class="hint">Edit any UI string in place. Replacements can be shorter (NUL-padded) but
      <b>never longer</b> — the slot is fixed, and overrunning would corrupt the next string.
      This is how you rename the assistant everywhere it appears on screen.</p>
    <div class="bar"><input type="search" id="sq" placeholder="search strings… try: Aicy">
      <span class="sub" id="strn"></span></div>
    <div id="strs"></div>
  </div>
  <div id="p-aud" hidden>
    <p class="hint">ADTS AAC clips embedded in the image. Replace one with a raw .aac of the
      same or smaller size — the extent is fixed.</p>
    <div class="bar"><span class="sub" id="audn"></span></div>
    <div id="auds"></div>
  </div>
  <div id="p-gly" hidden>
    <p class="hint">Unused glyph slots, largest first. Replace one with artwork and the phone can
      draw it by putting that codepoint in a string — no code patch. Keep height ≤ the face's
      line_height (medium = 27) or it may be clipped.</p>
    <div class="bar"><input type="search" id="gc" placeholder="or edit a specific character… e.g. A"
      maxlength="2" style="min-width:90px"><span class="sub" id="glyn"></span></div>
    <div id="glychar"></div>
    <div class="grid" id="glys"></div>
  </div>
  <div id="p-wid" hidden>
    <p class="hint">Drag to reorder. Max 4 grid slots; <code>weather_1x2</code> costs 2.
      Emits the payload for <code>set_standby_widget_lists</code> — a config message, not a firmware patch.</p>
    <div id="slots"></div>
    <div class="bar" style="margin-top:12px"><span class="sub" id="budget"></span></div>
    <pre class="out" id="wjson"></pre>
  </div>
</section>
</main>

<script>
${core}

/* ---------------- UI ---------------- */
let D=null, SNAP=null, ST=null, changes=[];
const $=id=>document.getElementById(id);
const hex=n=>'0x'+n.toString(16);

const WIDGETS=[{n:'time',id:1,c:1},{n:'weather_1x1',id:2,c:1},{n:'weather_1x2',id:3,c:2},
               {n:'steps',id:4,c:1},{n:'weekday',id:5,c:1},{n:'aiBall',id:6,c:1}];
let layout=['time','weather_1x1','weekday'];

function log(msg){ changes.push(msg);
  $('log').innerHTML = changes.map(c=>'<div>'+c+'</div>').join('') || '<div>nothing modified</div>';
  $('log').scrollTop = 1e6; }

function paint(cv,px,w,h,scale){
  cv.width=w; cv.height=h;
  cv.style.width=(w*scale)+'px'; cv.style.height=(h*scale)+'px';
  const ctx=cv.getContext('2d'), im=ctx.createImageData(w,h);
  for(let i=0;i<w*h;i++){ const v=px[i];
    im.data[i*4]=0; im.data[i*4+1]=Math.min(255,v*1.05); im.data[i*4+2]=40; im.data[i*4+3]=255; }
  ctx.putImageData(im,0,0);
}

async function pngToGray(file,w,h){
  const bmp=await createImageBitmap(file);
  const c=document.createElement('canvas'); c.width=w; c.height=h;
  const x=c.getContext('2d'); x.fillStyle='#000'; x.fillRect(0,0,w,h);
  const s=Math.min(w/bmp.width,h/bmp.height);
  const dw=bmp.width*s, dh=bmp.height*s;
  x.drawImage(bmp,(w-dw)/2,(h-dh)/2,dw,dh);
  const d=x.getImageData(0,0,w,h).data, g=new Uint8Array(w*h);
  for(let i=0;i<w*h;i++){ const a=d[i*4+3]/255;
    g[i]=Math.round((0.299*d[i*4]+0.587*d[i*4+1]+0.114*d[i*4+2])*a); }
  return g;
}

function load(buf){
  D=new Uint8Array(buf); SNAP=snapshot(D); ST=validate(D); changes=[];
  $('hdr').textContent=(ST.id.version||'unknown build')+' · '+D.length.toLocaleString()+' bytes';
  $('ident').innerHTML=
    '<dt>version</dt><dd>'+(ST.id.version||'—')+'</dd>'+
    '<dt>model</dt><dd>'+(ST.id.model||'—')+'</dd>'+
    '<dt>code base</dt><dd>'+(ST.id.codeBase?hex(ST.id.codeBase):'—')+'</dd>'+
    '<dt>data base</dt><dd>'+hex(ST.base)+'</dd>'+
    '<dt>images</dt><dd>'+ST.images.length+' ('+ST.named+' named)</dd>'+
    '<dt>faces</dt><dd>'+ST.faces.length+'</dd>';
  $('checks').innerHTML=ST.checks.map(c=>
    '<div class="chk"><span class="dot '+(c.pass?'p':'f')+'"></span>'+
    '<span class="n">'+c.name+'<br><span class="d">'+c.detail+'</span></span>'+
    (c.pass?'':'<span class="w">'+c.where+'</span>')+'</div>').join('');
  $('save').disabled=false;
  log('<b>loaded</b> '+(ST.id.version||'?'));
  $('undo').disabled=false;
  renderImages(); renderGlyphs(); renderWidgets(); renderStrings(); renderAudio();
}

function renderStrings(){
  const q=$('sq').value; if(!ST) return;
  if(!ST._strs) ST._strs=findStrings(D,5,140);
  const list=q? ST._strs.filter(s=>s.text.toLowerCase().includes(q.toLowerCase())) : ST._strs.slice(0,300);
  $('strn').textContent=q? list.length+' match'+(list.length===1?'':'es') : ST._strs.length.toLocaleString()+' strings (showing first 300)';
  const box=$('strs'); box.innerHTML='';
  list.slice(0,300).forEach(st=>{
    const row=document.createElement('div'); row.className='slot'; row.style.cursor='text';
    const inp=document.createElement('input');
    inp.value=st.text; inp.maxLength=st.len;
    inp.style.cssText='flex:1;background:#0d1110;border:1px solid var(--line);color:var(--ink);'+
      'border-radius:3px;padding:4px 7px;font-family:var(--mono);font-size:12px';
    const tag=document.createElement('span'); tag.className='g';
    tag.textContent=hex(st.off)+' · '+st.len+'ch';
    inp.onchange=()=>{ try{ const r=patchString(D,st.off,st.len,inp.value);
        row.style.borderColor='var(--accent)'; tag.style.color='var(--accent)';
        log('<b>string</b> '+hex(st.off)+' → "'+inp.value+'" ('+r.wrote+'/'+r.slot+')'); }
      catch(e){ alert(e.message); inp.value=st.text; } };
    row.appendChild(inp); row.appendChild(tag); box.appendChild(row);
  });
}

function renderAudio(){
  if(!ST) return;
  if(!ST._aud) ST._aud=findAudio(D);
  const tot=ST._aud.reduce((a,c)=>a+c.size,0);
  $('audn').textContent=ST._aud.length+' clips · '+tot.toLocaleString()+' bytes total';
  const box=$('auds'); box.innerHTML='';
  ST._aud.forEach((c,i)=>{
    const row=document.createElement('div'); row.className='slot';
    row.innerHTML='<span>clip '+(i+1)+'</span><span class="g">'+hex(c.off)+' · '+
      c.size.toLocaleString()+' B · '+c.frames+' frames · '+c.rate+' Hz</span>';
    const b=document.createElement('button'); b.className='act'; b.textContent='replace';
    b.style.cssText='padding:3px 10px;font-size:11px;margin-left:10px';
    b.onclick=()=>{ const inp=document.createElement('input'); inp.type='file'; inp.accept='.aac,audio/aac';
      inp.onchange=async()=>{ if(!inp.files[0])return;
        const buf=new Uint8Array(await inp.files[0].arrayBuffer());
        try{ const r=patchAudio(D,c,buf); row.style.borderColor='var(--accent)';
          log('<b>audio</b> clip '+(i+1)+' @'+hex(c.off)+' ('+r.wrote+'/'+r.slot+' B)'); }
        catch(e){ alert(e.message); } };
      inp.click(); };
    row.appendChild(b); box.appendChild(row);
  });
}

function renderImages(){
  const q=$('q').value.toLowerCase();
  const list=ST.images.filter(im=>!q||(im.name||'').toLowerCase().includes(q)||
                                   (im.w+'x'+im.h).includes(q));
  $('imgn').textContent=list.length+' of '+ST.images.length+' shown';
  const box=$('imgs'); box.innerHTML='';
  list.slice(0,400).forEach(im=>{
    const c=document.createElement('div'); c.className='cell';
    const cv=document.createElement('canvas');
    const sc=Math.min(1,96/Math.max(im.w,im.h));
    paint(cv,decodeImage(D,im),im.w,im.h,sc);
    c.appendChild(cv);
    const nm=document.createElement('div'); nm.className='nm';
    nm.textContent=(im.name||hex(im.data))+' · '+im.w+'×'+im.h; c.appendChild(nm);
    const put=async f=>{ const g=await pngToGray(f,im.w,im.h);
      patchImage(D,im,g); paint(cv,decodeImage(D,im),im.w,im.h,sc);
      c.classList.add('done'); log('<b>image</b> '+(im.name||hex(im.data))+' ('+im.w+'×'+im.h+') @'+hex(im.data)); };
    c.ondragover=e=>{e.preventDefault();c.classList.add('hot')};
    c.ondragleave=()=>c.classList.remove('hot');
    c.ondrop=e=>{e.preventDefault();c.classList.remove('hot');
      if(e.dataTransfer.files[0])put(e.dataTransfer.files[0])};
    c.onclick=()=>{const i=document.createElement('input');i.type='file';i.accept='image/*';
      i.onchange=()=>i.files[0]&&put(i.files[0]);i.click()};
    box.appendChild(c);
  });
}

function renderGlyphs(){
  const face=ST.faces.filter(f=>f.glyphs>1000&&f.bpp===4)[0];
  if(!face){ $('glys').innerHTML='<p class="hint">no bpp4 face found</p>'; return; }
  const g2cp=new Map();
  for(const r of face.ranges){
    if([1,3].includes(r.type)&&r.ulist){ const b=r.ulist-ST.base;
      for(let k=0;k<r.listLen;k++) g2cp.set(r.gidStart+k, r.start+(D[b+k*2]|(D[b+k*2+1]<<8))); }
    else for(let k=0;k<r.len;k++) g2cp.set(r.gidStart+k, r.start+k);
  }
  const rows=[];
  for(let g=96;g<face.glyphs-1;g++){ const b=glyphBudget(D,face,g);
    if(b&&b>200) rows.push({g,b,cp:g2cp.get(g)}); }
  rows.sort((a,b)=>b.b-a.b);
  $('glyn').textContent=rows.length+' slots ≥200 B · face bpp'+face.bpp+' · '+face.glyphs+' glyphs';
  const box=$('glys'); box.innerHTML='';
  rows.slice(0,60).forEach(r=>{
    const c=document.createElement('div'); c.className='cell';
    const cv=document.createElement('canvas');
    const gl=decodeGlyph(D,face,r.g);
    if(gl.pixels) paint(cv,gl.pixels,gl.boxW,gl.boxH,Math.min(2,90/Math.max(gl.boxW,gl.boxH)));
    c.appendChild(cv);
    const side=Math.floor(Math.sqrt(r.b*8/face.bpp));
    const nm=document.createElement('div'); nm.className='nm';
    nm.textContent='U+'+(r.cp||0).toString(16).toUpperCase().padStart(4,'0')+' · '+r.b+'B · ≤'+side+'²';
    c.appendChild(nm);
    const put=async f=>{ const n=Math.min(side,27);
      const g=await pngToGray(f,n,n);
      try{ const res=patchGlyph(D,face,r.g,g,n,n);
        const gg=decodeGlyph(D,face,r.g); paint(cv,gg.pixels,gg.boxW,gg.boxH,2);
        c.classList.add('done');
        log('<b>glyph</b> U+'+(r.cp||0).toString(16).toUpperCase()+' → '+n+'×'+n+
            ' ('+res.bytes+'/'+res.budget+' B) @'+hex(res.at)); }
      catch(err){ alert(err.message); } };
    c.ondragover=e=>{e.preventDefault();c.classList.add('hot')};
    c.ondragleave=()=>c.classList.remove('hot');
    c.ondrop=e=>{e.preventDefault();c.classList.remove('hot');
      if(e.dataTransfer.files[0])put(e.dataTransfer.files[0])};
    c.onclick=()=>{const i=document.createElement('input');i.type='file';i.accept='image/*';
      i.onchange=()=>i.files[0]&&put(i.files[0]);i.click()};
    box.appendChild(c);
  });
}

function renderWidgets(){
  const box=$('slots'); box.innerHTML='';
  WIDGETS.forEach(w=>{
    const on=layout.includes(w.n);
    const el=document.createElement('div'); el.className='slot'; el.draggable=on;
    el.innerHTML='<input type="checkbox" '+(on?'checked':'')+'> <span>'+w.n+'</span>'+
      '<span class="g">id '+w.id+' · '+w.c+' slot'+(w.c>1?'s':'')+'</span>';
    el.querySelector('input').onchange=e=>{
      if(e.target.checked){ if(!layout.includes(w.n)) layout.push(w.n); }
      else layout=layout.filter(x=>x!==w.n);
      renderWidgets(); };
    el.ondragstart=()=>{el.classList.add('drag'); box.dataset.from=w.n};
    el.ondragend=()=>el.classList.remove('drag');
    el.ondragover=e=>e.preventDefault();
    el.ondrop=e=>{e.preventDefault(); const from=box.dataset.from;
      if(!from||from===w.n||!layout.includes(from)||!layout.includes(w.n))return;
      layout=layout.filter(x=>x!==from);
      layout.splice(layout.indexOf(w.n),0,from); renderWidgets(); };
    box.appendChild(el);
  });
  const used=layout.reduce((a,n)=>a+(WIDGETS.find(w=>w.n===n)?.c||1),0);
  $('budget').textContent='grid: '+used+' of 4 slots'+(used>4?'  ⚠ OVER BUDGET':'');
  $('budget').style.color=used>4?'var(--bad)':'var(--dim)';
  $('wjson').textContent=JSON.stringify(
    {action:'set_standby_widget_lists',data:{widgets:layout}},null,2);
}

$('q').oninput=()=>ST&&renderImages();
$('sq').oninput=()=>ST&&renderStrings();
$('gc').oninput=()=>{
  const box=$('glychar'); box.innerHTML=''; const ch=$('gc').value;
  if(!ST||!ch) return;
  const hits=glyphByChar(D,ST.base,ST.faces,ch);
  if(!hits.length){ box.innerHTML='<p class="hint">not in any face</p>'; return; }
  const grid=document.createElement('div'); grid.className='grid'; grid.style.marginBottom='16px';
  hits.forEach(h=>{
    const c=document.createElement('div'); c.className='cell';
    const cv=document.createElement('canvas'); const gl=decodeGlyph(D,h.face,h.gid);
    if(gl.pixels) paint(cv,gl.pixels,gl.boxW,gl.boxH,Math.min(3,80/Math.max(gl.boxW,gl.boxH)));
    c.appendChild(cv);
    const nm=document.createElement('div'); nm.className='nm';
    nm.textContent="'"+ch+"' bpp"+h.face.bpp+' · gid '+h.gid+' · '+h.dsc.boxW+'×'+h.dsc.boxH+' · '+h.budget+'B';
    c.appendChild(nm);
    c.onclick=()=>{ const i=document.createElement('input'); i.type='file'; i.accept='image/*';
      i.onchange=async()=>{ if(!i.files[0])return;
        const side=Math.min(Math.floor(Math.sqrt(h.budget*8/h.face.bpp)),40);
        const g=await pngToGray(i.files[0],side,side);
        try{ const r=patchGlyph(D,h.face,h.gid,g,side,side);
          const gg=decodeGlyph(D,h.face,h.gid); paint(cv,gg.pixels,gg.boxW,gg.boxH,2);
          c.classList.add('done');
          log('<b>glyph</b> ['+ch+'] bpp'+h.face.bpp+' → '+side+'×'+side+' ('+r.bytes+'/'+r.budget+' B)'); }
        catch(e){ alert(e.message); } };
      i.click(); };
    grid.appendChild(c);
  });
  box.appendChild(grid);
};
$('undo').onclick=()=>{ if(!SNAP)return;
  D.set(SNAP); changes=[];
  log('<b>reverted</b> all edits');
  ST._strs=null; ST._aud=null;
  renderImages(); renderGlyphs(); renderWidgets(); renderStrings(); renderAudio(); };
document.querySelectorAll('nav button').forEach(b=>b.onclick=()=>{
  document.querySelectorAll('nav button').forEach(x=>x.classList.toggle('on',x===b));
  ['img','gly','str','aud','wid'].forEach(t=>$('p-'+t).hidden=(t!==b.dataset.t)); });

const drop=$('drop');
drop.onclick=()=>$('file').click();
$('file').onchange=e=>e.target.files[0]&&e.target.files[0].arrayBuffer().then(load);
['dragover','dragenter'].forEach(t=>document.body.addEventListener(t,e=>{
  e.preventDefault(); drop.classList.add('hot'); }));
document.body.addEventListener('dragleave',e=>{ if(e.target===document.body) drop.classList.remove('hot'); });
drop.addEventListener('drop',e=>{ e.preventDefault(); drop.classList.remove('hot');
  const f=e.dataTransfer.files[0]; if(f) f.arrayBuffer().then(load); });

$('save').onclick=()=>{
  const blob=new Blob([D],{type:'application/octet-stream'});
  const a=document.createElement('a');
  a.href=URL.createObjectURL(blob);
  a.download='platform_tester_patched.bin'; a.click();
  log('<b>exported</b> '+D.length.toLocaleString()+' bytes, '+changes.length+' edit(s)');
};
</script></body></html>`;

writeFileSync(join(here, 'builder.html'), html);
console.log(`builder.html written — ${(html.length / 1024).toFixed(0)} KB, fwcore inlined`);
