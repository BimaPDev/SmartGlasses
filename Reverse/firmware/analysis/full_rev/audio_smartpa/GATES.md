# Gates: leaf-1.1.2 audio_smartpa

OWNS: Reverse/firmware/analysis/full_rev/audio_smartpa/**

Scope: Map Awinic AW883xx SmartPA + xjxr audio volume/A2DP/HFP hooks in Star Air 1.0.12.83 and produce AUDIO_SMARTPA.md, audio_reconstructed.c, and manifest.json.

- [x] G1: Leaf verify script accepts artifact set for 1.1.2
  CHECK: node ../scripts/verify-leaf.mjs 1.1.2
  EXPECT: leaf 1.1.2 verification passed
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/full_rev/audio_smartpa; EXPECT=matched; output-sha256=ffa95ccb36e8cfcc31e27857234572a3d987dc071e98a1c342672c6e898437a4; output-bytes=31

- [x] G2: Overview names AW883, 0x2C, and is ≥80 lines
  CHECK: node -e "const fs=require('fs');const t=fs.readFileSync('AUDIO_SMARTPA.md','utf8');const n=t.split(/\r?\n/).length;if(n<80)throw new Error('lines '+n);for(const s of['AW883','0x2C']){if(!t.includes(s))throw new Error('missing '+s)};console.log('audio md tokens ok')"
  EXPECT: audio md tokens ok
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/full_rev/audio_smartpa; EXPECT=matched; output-sha256=b52de19a2f702d6fdf98b52a0284187377fec7b13f05d8f01fbc6d9a6247aebb; output-bytes=19

- [x] G3: Reconstructed C is non-trivial readable pseudocode ≥120 lines
  CHECK: node -e "const fs=require('fs');const t=fs.readFileSync('audio_reconstructed.c','utf8');const n=t.split(/\r?\n/).length;if(n<120)throw new Error('lines '+n);if(!/\\/\\*|void |uint/.test(t))throw new Error('not code');console.log('audio c ok')"
  EXPECT: audio c ok
  EVIDENCE: exit=0; shell=/bin/sh; cwd=/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/full_rev/audio_smartpa; EXPECT=matched; output-sha256=20660c5bec3a0ee27ba776b1d53bb356da6a72a4620b49a513ba2b5ce2382428; output-bytes=11
