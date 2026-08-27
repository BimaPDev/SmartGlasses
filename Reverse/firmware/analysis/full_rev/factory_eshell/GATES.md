# Gates: leaf-1.2.2 factory_eshell

OWNS: Reverse/firmware/analysis/full_rev/factory_eshell/**

Scope: Map Star Air M55 factory fac_cmd table and eshell surface with evidence-backed string VAs; document unrecovered handler bind.

- [x] G1: leaf artifact verifier accepts 1.2.2
  CHECK: node ../scripts/verify-leaf.mjs 1.2.2
  EXPECT: leaf 1.2.2 verification passed
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/full_rev/factory_eshell; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=2135e8f7da1b991996f032623379912d0017def2dd3fe8604219c7c3b7e5b986; output-bytes=31

- [x] G2: FACTORY_ESHELL.md covers fac_cmd and eshell with measured length
  CHECK: node -e "const fs=require('fs');const t=fs.readFileSync('FACTORY_ESHELL.md','utf8');const n=t.split(/\r?\n/).length;if(n<80){console.error('lines',n);process.exit(1)}if(!t.includes('fac_cmd')||!t.includes('eshell')){console.error('missing tokens');process.exit(1)}console.log('factory eshell md ok lines='+n)"
  EXPECT: factory eshell md ok
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/full_rev/factory_eshell; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=d24986d084f020427ddbd92b0a43dca4b02c9da4d79bd13dd426a5498ee64686; output-bytes=31

- [x] G3: fac_cmd_map.md and manifest.json expose mapped VAs
  CHECK: node -e "const fs=require('fs');const m=fs.readFileSync('fac_cmd_map.md','utf8');if(!m.includes('set_sn')||!m.includes('en_usb')||!m.includes('0x2C')){console.error('map incomplete');process.exit(1)}const j=JSON.parse(fs.readFileSync('manifest.json','utf8'));if(!Array.isArray(j.functions)||j.functions.length<3){console.error('manifest short');process.exit(1)}for(const f of j.functions.slice(0,3)){if(!f.va||!f.name||!f.role){console.error('bad entry',f);process.exit(1)}}console.log('fac_cmd map+manifest ok count='+j.functions.length)"
  EXPECT: fac_cmd map+manifest ok
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/full_rev/factory_eshell; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=d2c2e97be6e2e0457627a2c7526718aad22193fb6e9a47410018a7c4ea2c7a4c; output-bytes=33
