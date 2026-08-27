# Gates: leaf-1.1.1 touch_input

OWNS: Reverse/firmware/analysis/full_rev/touch_input/**

Scope: Map STK5115 / STK501xx touchpad + wear detection in Star Air 1.0.12.83 and produce TOUCH_INPUT.md, touch_reconstructed.c, and manifest.json.

- [x] G1: Leaf verify script accepts artifact set for 1.1.1
  CHECK: node ../scripts/verify-leaf.mjs 1.1.1
  EXPECT: leaf 1.1.1 verification passed
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/full_rev/touch_input; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=9cf331bc12e4dc291805efcc7484826dcc56cd35eeb398cbf1a0c7c09590761c; output-bytes=31

- [x] G2: Overview doc names STK5115, wear, and an 0x2C VA
  CHECK: node -e "const fs=require('fs');const t=fs.readFileSync('TOUCH_INPUT.md','utf8');const n=t.split(/\r?\n/).length;if(n<80)throw new Error('lines '+n);for(const s of['STK5115','wear','0x2C']){if(!t.includes(s))throw new Error('missing '+s)};console.log('touch md tokens ok')"
  EXPECT: touch md tokens ok
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/full_rev/touch_input; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=b4347b6ab3abfaa1ab0aa9e2eb86ff83d72536bc9b6519c5f343f97449def7ec; output-bytes=19

- [x] G3: Reconstructed C is non-trivial readable pseudocode
  CHECK: node -e "const fs=require('fs');const t=fs.readFileSync('touch_reconstructed.c','utf8');const n=t.split(/\r?\n/).length;if(n<120)throw new Error('lines '+n);if(!/\\/\\*|void |uint/.test(t))throw new Error('not code');console.log('touch c ok')"
  EXPECT: touch c ok
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/full_rev/touch_input; path=52055a7755b2/32 entries; EXPECT=matched; output-sha256=c8169dbaf10df94106c817488c04d5ffe70f15f2c65713b2d94685a17b44a19f; output-bytes=11
