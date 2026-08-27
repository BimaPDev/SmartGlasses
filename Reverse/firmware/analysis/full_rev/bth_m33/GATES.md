# Gates: leaf-1.3.2 BTH M33

OWNS: Reverse/firmware/analysis/full_rev/bth_m33/**

Scope: Reverse Star Air BTH M33 image (factory keys, GATT/ANCC stubs, PMU) into BTH_M33.md, bth_reconstructed.c, and manifest.json.

- [x] G1: Leaf verifier accepts 1.3.2 artifacts
  CHECK: node ../scripts/verify-leaf.mjs 1.3.2
  EXPECT: leaf 1.3.2 verification passed
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/full_rev/bth_m33; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=fe4e1f0fbc6db6185c1792dbc59a5c0f2d7e406c33828c9affde35ad654c7269; output-bytes=31

- [x] G2: Overview documents load base and BTH hex anchors
  CHECK: node -e "const fs=require('fs');const t=fs.readFileSync('BTH_M33.md','utf8');const n=t.split(/\r?\n/).length;if(n<80)throw new Error('lines '+n);if(!t.includes('BTH')||!t.includes('0x14000000'))throw new Error('missing anchors');console.log('bth md anchors ok')"
  EXPECT: bth md anchors ok
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/full_rev/bth_m33; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=58f0c7b636de1a51b0ff8ce06cfa4b60b176185e6d62196acd3793c4e3448acd; output-bytes=18

- [x] G3: Manifest lists ≥3 VA mappings with roles
  CHECK: node -e "const m=JSON.parse(require('fs').readFileSync('manifest.json','utf8'));if(!Array.isArray(m.functions)||m.functions.length<3)throw new Error('need >=3');for(const f of m.functions.slice(0,3)){if(!f.va||!f.name||!f.role)throw new Error('need va+name+role');}console.log('manifest roles ok')"
  EXPECT: manifest roles ok
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/full_rev/bth_m33; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=215d0b9fac55d0910cb6be037ca6312e96a6cc1f1fda9346f978930f6c2d95b1; output-bytes=18
