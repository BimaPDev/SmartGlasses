; FUN_1401c128 @ 0x1401c128 size=3389
  ldr r3,[sp,#0x48]
  ldr r2,[sp,#0x34]
  ldr r3,[r3,#0x4]
  adds r2,r3,r2
  ldrh.w r3,[r10,#0x7b8]
  cmp r3,#0x0
  beq.w 0x1401c6a6
  sub.w r1,r3,#0x8
  add.w r3,r3,#0x29c
  uxth r1,r1
  lsls r3,r3,#0x1
  strh.w r1,[r10,#0x7b8]
  ldrb.w r1,[r10,#0x6]
  add r3,r10
  cmp r1,#0x1
  add.w r1,r3,#0x10
  beq.w 0x1401c692
  add.w r4,r2,#0x20
  ldrh.w r0,[r2],#0x4
  cmp r2,r4
  strh r0,[r1,#-0x2]!
  bne 0x1401b5a4
  ldrsh.w r2,[r3,#0x80]
  ldrsh.w r1,[r3,#0x20]
  ldrsh.w r0,[r3,#0x40]
  subs r1,r1,r2
  ldrsh.w r2,[r3,#0x60]
  ldr r4,[sp,#0x4c]
  subs r2,r0,r2
  ldr r0,[sp,#0x50]
  mul r5,r4,r1
  mul r0,r0,r1
  ldr r1,[sp,#0x58]
  add.w r5,r5,r0, asr #0xf
  ldr r0,[sp,#0x54]
  mul r1,r1,r2
  mul r2,r0,r2
  add.w r2,r2,r1, asr #0xf
  add.w r8,r5,r2
  str.w r8,[r10,#0x7bc]
  ldrsh.w r0,[r3,#0x2]
  ldr r7,[sp,#0x5c]
  ldr r6,[sp,#0x60]
  ldrsh.w r4,[r3,#0x22]
  mul r6,r6,r0
  mul r0,r7,r0
  ldr r7,[sp,#0x64]
  add.w r0,r0,r6, asr #0xf
  ldr r6,[sp,#0x68]
  ldrsh.w r1,[r3,#0x42]
  mul r6,r6,r4
  mul r4,r7,r4
  add.w r4,r4,r6, asr #0xf
  ldr r7,[sp,#0x6c]
  add r0,r4
  ldr r4,[sp,#0x70]
  ldrsh.w r2,[r3,#0x62]
  mul r4,r4,r1
  mul r1,r7,r1
  add.w r1,r1,r4, asr #0xf
  add r0,r1
  ldr r4,[sp,#0x74]
  ldr r1,[sp,#0x78]
  ldrsh.w r6,[r3,#0x82]
  mul r1,r1,r2
  mul r2,r4,r2
  add.w r2,r2,r1, asr #0xf
  add r0,r2
  ldr r1,[sp,#0x7c]
  ldr r2,[sp,#0x80]
  ldr r5,[sp,#0x84]
  mul r2,r2,r6
  mul r6,r1,r6
  add.w r4,r6,r2, asr #0xf
  add r4,r0
  str.w r4,[r10,#0x7c0]
  ldrsh.w r0,[r3,#0x4]
  ldr r7,[sp,#0x88]
  ldrsh.w r6,[r3,#0x24]
  mul r7,r7,r0
  mul r0,r5,r0
  ldr r5,[sp,#0x90]
  ldrsh.w r1,[r3,#0x44]
  ldrsh.w r2,[r3,#0x64]
  add.w r0,r0,r7, asr #0xf
  mul r7,r5,r6
  ldr r5,[sp,#0x8c]
  ldr.w r11,[0x1401bca0]
  mul r6,r5,r6
  ldr r5,[sp,#0x98]
  add.w r6,r6,r7, asr #0xf
  mul r7,r5,r1
  ldr r5,[sp,#0x94]
  add r0,r6
  mul r1,r5,r1
  add.w r1,r1,r7, asr #0xf
  ldr r5,[sp,#0x9c]
  add r0,r1
  ldr r1,[sp,#0xa0]
  ldrsh.w r6,[r3,#0x84]
  mul r1,r1,r2
  mul r2,r5,r2
  add.w r2,r2,r1, asr #0xf
  add r0,r2
  ldr r1,[sp,#0xa4]
  ldr r2,[sp,#0xa8]
  ldr r5,[sp,#0xb0]
  mul r2,r2,r6
  mul r6,r1,r6
  add.w r6,r6,r2, asr #0xf
  adds r1,r0,r6
  str.w r1,[r10,#0x7c4]
  ldrsh.w r6,[r3,#0x6]
  ldrsh.w r7,[r3,#0x26]
  mul r12,r5,r6
  ldr r5,[sp,#0xac]
  ldrsh.w r0,[r3,#0x46]
  mul r6,r5,r6
  ldr r5,[sp,#0xb8]
  add.w r6,r6,r12, asr #0xf
  mul r12,r5,r7
  ldr r5,[sp,#0xb4]
  ldrsh.w r2,[r3,#0x66]
  mul r7,r5,r7
  ldr r5,[sp,#0xc0]
  add.w r7,r7,r12, asr #0xf
  mul r12,r5,r0
  ldr r5,[sp,#0xbc]
  add r6,r7
  mul r0,r5,r0
  add.w r0,r0,r12, asr #0xf
  ldr r5,[sp,#0xc4]
  add r6,r0
  ldr r0,[sp,#0xc8]
  ldrsh.w r7,[r3,#0x86]
  mul r0,r0,r2
  mul r2,r5,r2
  add.w r2,r2,r0, asr #0xf
  add r6,r2
  ldr r0,[sp,#0xcc]
  ldr r2,[sp,#0xd0]
  ldr r5,[sp,#0xd8]
  mul r2,r2,r7
  mul r7,r0,r7
  add.w r7,r7,r2, asr #0xf
  adds r0,r6,r7
  str.w r0,[r10,#0x7c8]
  ldrsh.w r7,[r3,#0x8]
  ldrsh.w r12,[r3,#0x28]
  mul lr,r5,r7
  ldr r5,[sp,#0xd4]
  ldrsh.w r6,[r3,#0x48]
  mul r7,r5,r7
  ldr r5,[sp,#0xe0]
  ldrsh.w r2,[r3,#0x68]
  add.w r7,r7,lr, asr #0xf
  mul lr,r5,r12
  ldr r5,[sp,#0xdc]
  mul r12,r5,r12
  ldr r5,[sp,#0xe8]
  add.w r12,r12,lr, asr #0xf
  mul lr,r5,r6
  ldr r5,[sp,#0xe4]
  add r7,r12
  mul r6,r5,r6
  ldr r5,[sp,#0xf0]
  add.w r6,r6,lr, asr #0xf
  add r7,r6
  mul r6,r5,r2
  ldr r5,[sp,#0xec]
  ldrsh.w r12,[r3,#0x88]
  mul r2,r5,r2
  add.w r2,r2,r6, asr #0xf
  ldr r5,[sp,#0xf4]
  add r7,r2
  ldr r2,[sp,#0xf8]
  mul r2,r2,r12
  mul r12,r5,r12
  add.w r12,r12,r2, asr #0xf
  add.w r2,r7,r12
  str.w r2,[r10,#0x7cc]
  ldr r5,[sp,#0x100]
  str r2,[sp,#0x14]
  ldrsh.w r2,[r3,#0xa]
  ldrsh.w r12,[r3,#0x2a]
  mul lr,r5,r2
  ldr r5,[sp,#0xfc]
  ldrsh.w r6,[r3,#0x4a]
  mul r7,r5,r2
  ldr r5,[sp,#0x108]
  add.w r7,r7,lr, asr #0xf
  mul lr,r5,r12
  ldr r5,[sp,#0x104]
  ldrsh.w r2,[r3,#0x6a]
  mul r12,r5,r12
  ldr r5,[sp,#0x110]
  add.w r12,r12,lr, asr #0xf
  mul lr,r5,r6
  ldr r5,[sp,#0x10c]
  add r7,r12
  mul r6,r5,r6
  ldr r5,[sp,#0x118]
  add.w r6,r6,lr, asr #0xf
  add r7,r6
  mul r6,r5,r2
  ldr r5,[sp,#0x114]
  ldrsh.w r12,[r3,#0x8a]
  mul r2,r5,r2
  add.w r2,r2,r6, asr #0xf
  ldr r5,[sp,#0x11c]
  add r7,r2
  ldr r2,[sp,#0x120]
  mul r2,r2,r12
  mul r12,r5,r12
  add.w r12,r12,r2, asr #0xf
  add r7,r12
  str.w r7,[r10,#0x7d0]
  ldrsh.w r6,[r3,#0xc]
  ldr r5,[sp,#0x128]
  adds r2,r0,r7
  mul r12,r5,r6
  ldrsh.w r7,[r3,#0x2c]
  ldrsh.w r0,[r3,#0x4c]
  str r2,[sp,#0x10]
  ldrsh.w r2,[r3,#0x6c]
  ldr r5,[sp,#0x124]
  mul r6,r5,r6
  ldr r5,[sp,#0x130]
  add.w r6,r6,r12, asr #0xf
  mul r12,r5,r7
  ldr r5,[sp,#0x12c]
  mul r7,r5,r7
  ldr r5,[sp,#0x138]
  add.w r7,r7,r12, asr #0xf
  mul r12,r5,r0
  ldr r5,[sp,#0x134]
  add r6,r7
  mul r0,r5,r0
  add.w r0,r0,r12, asr #0xf
  ldr r5,[sp,#0x13c]
  add r6,r0
  ldr r0,[sp,#0x140]
  ldrsh.w r7,[r3,#0x8c]
  mul r0,r0,r2
  mul r2,r5,r2
  add.w r2,r2,r0, asr #0xf
  ldr r0,[sp,#0x148]
  add r6,r2
  mul r2,r0,r7
  ldr r0,[sp,#0x144]
  ldr r5,[sp,#0x150]
  mul r7,r0,r7
  add.w r7,r7,r2, asr #0xf
  add r7,r6
  str.w r7,[r10,#0x7d4]
  ldrsh.w r0,[r3,#0xe]
  add.w r9,r1,r7
  mul r7,r5,r0
  ldr r5,[sp,#0x14c]
  ldrsh.w r6,[r3,#0x2e]
  mul r0,r5,r0
  ldr r5,[sp,#0x158]
  add.w r0,r0,r7, asr #0xf
  mul r7,r5,r6
  ldr r5,[sp,#0x154]
  ldrsh.w r1,[r3,#0x4e]
  mul r6,r5,r6
  ldr r5,[sp,#0x160]
  add.w r6,r6,r7, asr #0xf
  mul r7,r5,r1
  ldr r5,[sp,#0x15c]
  add r0,r6
  mul r1,r5,r1
  add.w r1,r1,r7, asr #0xf
  ldrsh.w r2,[r3,#0x6e]
  ldr r5,[sp,#0x164]
  add r0,r1
  ldr r1,[sp,#0x168]
  ldrsh.w r6,[r3,#0x8e]
  mul r1,r1,r2
  mul r2,r5,r2
  add.w r2,r2,r1, asr #0xf
  ldr r1,[sp,#0x170]
  add r0,r2
  mul r2,r1,r6
  ldr r1,[sp,#0x16c]
  mul r6,r1,r6
  add.w r6,r6,r2, asr #0xf
  add r6,r0
  str.w r6,[r10,#0x7d8]
  ldrsh.w r2,[r3,#0x90]
  ldrsh.w r1,[r3,#0x10]
  ldrsh.w r0,[r3,#0x30]
  add r1,r2
  ldrsh.w r2,[r3,#0x70]
  add r4,r6
  add r2,r0
  ldrsh.w r0,[r3,#0x50]
  ldr r5,[sp,#0x178]
  ldr r7,[sp,#0x190]
  mul r6,r5,r1
  ldr r5,[sp,#0x174]
  mul r1,r5,r1
  ldr r5,[sp,#0x180]
  add.w r1,r1,r6, asr #0xf
  mul r6,r5,r2
  ldr r5,[sp,#0x17c]
  mul r2,r5,r2
  ldr r5,[sp,#0x188]
  add.w r2,r2,r6, asr #0xf
  add r1,r2
  mul r2,r5,r0
  ldr r5,[sp,#0x184]
  mul r0,r5,r0
  add.w r0,r0,r2, asr #0xf
  add r0,r1
  str.w r0,[r10,#0x7dc]
  add.w r6,r8,r0
  ldr r5,[sp,#0x18c]
  ldrsh.w r0,[r3,#0x12]
  str r6,[sp,#0x4]
  mul r7,r7,r0
  mul r0,r5,r0
  ldrsh.w r6,[r3,#0x32]
  ldr r5,[sp,#0x198]
  add.w r0,r0,r7, asr #0xf
  mul r7,r5,r6
  ldr r5,[sp,#0x194]
  ldrsh.w r1,[r3,#0x52]
  mul r6,r5,r6
  ldr r5,[sp,#0x1a0]
  add.w r6,r6,r7, asr #0xf
  mul r7,r5,r1
  ldr r5,[sp,#0x19c]
  add r0,r6
  mul r1,r5,r1
  add.w r1,r1,r7, asr #0xf
  ldrsh.w r2,[r3,#0x72]
  ldr r5,[sp,#0x1a4]
  add r0,r1
  ldr r1,[sp,#0x1a8]
  ldrsh.w r6,[r3,#0x92]
  mul r1,r1,r2
  mul r2,r5,r2
  add.w r1,r2,r1, asr #0xf
  add r0,r1
  ldr r1,[sp,#0x1b0]
  ldr r5,[sp,#0x1b8]
  mul r2,r1,r6
  ldr r1,[sp,#0x1ac]
  mul r6,r1,r6
  add.w r1,r6,r2, asr #0xf
  add r1,r0
  str.w r1,[r10,#0x7e0]
  ldrsh.w r6,[r3,#0x14]
  ldrsh.w r7,[r3,#0x34]
  mul r12,r5,r6
  ldr r5,[sp,#0x1b4]
  ldrsh.w r0,[r3,#0x54]
  mul r6,r5,r6
  ldr r5,[sp,#0x1c0]
  add.w r6,r6,r12, asr #0xf
  mul r12,r5,r7
  ldr r5,[sp,#0x1bc]
  ldrsh.w r2,[r3,#0x74]
  mul r7,r5,r7
  add.w r7,r7,r12, asr #0xf
  add r6,r7
  ldrsh.w r7,[r3,#0x94]
  ldr r5,[sp,#0x1c8]
  mul r12,r5,r0
  ldr r5,[sp,#0x1c4]
  mul r0,r5,r0
  add.w r0,r0,r12, asr #0xf
  ldr r5,[sp,#0x1cc]
  add r6,r0
  ldr r0,[sp,#0x1d0]
  mul r0,r0,r2
  mul r2,r5,r2
  add.w r2,r2,r0, asr #0xf
  ldr r0,[sp,#0x1d8]
  add r6,r2
  mul r2,r0,r7
  ldr r0,[sp,#0x1d4]
  ldr r5,[sp,#0x1e0]
  mul r7,r0,r7
  add.w r2,r7,r2, asr #0xf
  add r2,r6
  str.w r2,[r10,#0x7e4]
  ldrsh.w r7,[r3,#0x16]
  ldrsh.w r12,[r3,#0x36]
  mul lr,r5,r7
  ldr r5,[sp,#0x1dc]
  ldrsh.w r6,[r3,#0x56]
  mul r7,r5,r7
  ldr r5,[sp,#0x1e8]
  add.w r7,r7,lr, asr #0xf
  mul lr,r5,r12
  ldr r5,[sp,#0x1e4]
  ldrsh.w r0,[r3,#0x76]
  mul r12,r5,r12
  ldr r5,[sp,#0x1f0]
  add.w r12,r12,lr, asr #0xf
  mul lr,r5,r6
  ldr r5,[sp,#0x1ec]
  add r7,r12
  mul r6,r5,r6
  ldr r5,[sp,#0x1f8]
  add.w r6,r6,lr, asr #0xf
  add r7,r6
  mul r6,r5,r0
  ldr r5,[sp,#0x1f4]
  ldrsh.w r12,[r3,#0x96]
  mul r0,r5,r0
  add.w r0,r0,r6, asr #0xf
  ldr r5,[sp,#0x1fc]
  add r7,r0
  ldr r0,[sp,#0x200]
  mul r0,r0,r12
  mul r12,r5,r12
  add.w r0,r12,r0, asr #0xf
  add r0,r7
  str.w r0,[r10,#0x7e8]
  ldrsh.w r12,[r3,#0x18]
  ldr r5,[sp,#0x208]
  ldrsh.w lr,[r3,#0x38]
  mul r8,r5,r12
  ldr r5,[sp,#0x204]
  ldrsh.w r7,[r3,#0x58]
  mul r12,r5,r12
  ldr r5,[sp,#0x210]
  add.w r12,r12,r8, asr #0xf
  mul r8,r5,lr
  ldr r5,[sp,#0x20c]
  ldrsh.w r6,[r3,#0x78]
  mul lr,r5,lr
  add.w lr,lr,r8, asr #0xf
  add r12,lr
  ldrsh.w lr,[r3,#0x98]
  ldr r5,[sp,#0x218]
  mul r8,r5,r7
  ldr r5,[sp,#0x214]
  mul r7,r5,r7
  ldr r5,[sp,#0x220]
  add.w r7,r7,r8, asr #0xf
  add r12,r7
  mul r7,r5,r6
  ldr r5,[sp,#0x21c]
  mul r6,r5,r6
  ldr r5,[sp,#0x228]
  add.w r6,r6,r7, asr #0xf
  add r12,r6
  mul r6,r5,lr
  ldr r5,[sp,#0x224]
  mul lr,r5,lr
  add.w lr,lr,r6, asr #0xf
  add.w r6,r12,lr
  str.w r6,[r10,#0x7ec]
  ldrsh.w r12,[r3,#0x1a]
  ldr r5,[sp,#0x230]
  ldrsh.w lr,[r3,#0x3a]
  mul r8,r5,r12
  ldr r5,[sp,#0x22c]
  ldrsh.w r7,[r3,#0x5a]
  mul r12,r5,r12
  ldr r5,[sp,#0x238]
  add.w r12,r12,r8, asr #0xf
  mul r8,r5,lr
  ldr r5,[sp,#0x234]
  ldrsh.w r6,[r3,#0x7a]
  mul lr,r5,lr
  ldr r5,[sp,#0x240]
  add.w lr,lr,r8, asr #0xf
  mul r8,r5,r7
  ldr r5,[sp,#0x23c]
  add r12,lr
  mul r7,r5,r7
  ldr r5,[sp,#0x248]
  add.w r7,r7,r8, asr #0xf
  add r12,r7
  mul r7,r5,r6
  ldr r5,[sp,#0x244]
  ldrsh.w lr,[r3,#0x9a]
  mul r6,r5,r6
  ldr r5,[sp,#0x250]
  add.w r6,r6,r7, asr #0xf
  add r12,r6
  mul r6,r5,lr
  ldr r5,[sp,#0x24c]
  mul lr,r5,lr
  add.w lr,lr,r6, asr #0xf
  add.w r6,r12,lr
  str.w r6,[r10,#0x7f0]
  ldrsh.w r12,[r3,#0x1c]
  ldr r5,[sp,#0x258]
  ldrsh.w lr,[r3,#0x3c]
  mul r8,r5,r12
  ldr r5,[sp,#0x254]
  ldrsh.w r7,[r3,#0x5c]
  mul r12,r5,r12
  ldr r5,[sp,#0x260]
  add.w r12,r12,r8, asr #0xf
  mul r8,r5,lr
  ldr r5,[sp,#0x25c]
  subs r0,r0,r6
  mul lr,r5,lr
  add.w lr,lr,r8, asr #0xf
  ldrsh.w r6,[r3,#0x7c]
  add r12,lr
  ldrsh.w lr,[r3,#0x9c]
  ldr r5,[sp,#0x268]
  mul r8,r5,r7
  ldr r5,[sp,#0x264]
  mul r7,r5,r7
  ldr r5,[sp,#0x270]
  add.w r7,r7,r8, asr #0xf
  add r12,r7
  mul r7,r5,r6
  ldr r5,[sp,#0x26c]
  mul r6,r5,r6
  ldr r5,[sp,#0x278]
  add.w r6,r6,r7, asr #0xf
  add r12,r6
  mul r6,r5,lr
  ldr r5,[sp,#0x274]
  mul lr,r5,lr
  add.w lr,lr,r6, asr #0xf
  add.w r6,r12,lr
  str.w r6,[r10,#0x7f4]
  ldrsh.w lr,[r3,#0x1e]
  ldr r5,[sp,#0x280]
  ldrsh.w r12,[r3,#0x3e]
  mul r8,r5,lr
  ldr r5,[sp,#0x27c]
  ldrsh.w r7,[r3,#0x5e]
  mul lr,r5,lr
  ldr r5,[sp,#0x288]
  add.w lr,lr,r8, asr #0xf
  mul r8,r5,r12
  ldr r5,[sp,#0x284]
  subs r2,r2,r6
  mul r12,r5,r12
  ldr r5,[sp,#0x290]
  add.w r12,r12,r8, asr #0xf
  add lr,r12
  mul r12,r5,r7
  ldr r5,[sp,#0x28c]
  ldrsh.w r6,[r3,#0x7e]
  mul r7,r5,r7
  ldr r5,[sp,#0x298]
  add.w r7,r7,r12, asr #0xf
  add lr,r7
  mul r7,r5,r6
  ldr r5,[sp,#0x294]
  ldrsh.w r3,[r3,#0x9e]
  mul r6,r5,r6
  ldr r5,[sp,#0x2a0]
  add.w r6,r6,r7, asr #0xf
  add lr,r6
  mul r6,r5,r3
  ldr r5,[sp,#0x29c]
  asr.w r8,r2, asr #0xf
  mul r3,r5,r3
  add.w r3,r3,r6, asr #0xf
  ldr r6,[sp,#0x4]
  add r3,lr
  asrs r5,r6,#0xf
  str r5,[sp,#0x4]
  ubfx r5,r6,#0x0,#0xf
  subs r1,r1,r3
  str.w r3,[r10,#0x7f8]
  str r5,[sp,#0x18]
  ldr r3,[sp,#0x38]
  asrs r5,r4,#0xf
  ubfx r6,r9,#0x0,#0xf
  str r5,[sp,#0x8]
  b 0x1401bca4
  ubfx r5,r4,#0x0,#0xf
  str r3,[sp,#0xc]
  str r5,[sp,#0x1c]
  str r6,[sp,#0x20]
  ldr r4,[sp,#0x10]
  asr.w r5,r9, asr #0xf
  asrs r6,r4,#0xf
  mov r3,r11
  str.w r11,[sp,#0x40]
  str.w r10,[sp,#0x44]
  mov r11,r6
  mov r10,r5
  ubfx r2,r2,#0x0,#0xf
  ubfx r4,r4,#0x0,#0xf
  asr.w r9,r1, asr #0xf
  str r2,[sp,#0x2c]
  ubfx r1,r1,#0x0,#0xf
  ubfx r2,r0,#0x0,#0xf
  str r4,[sp,#0x24]
  str r1,[sp,#0x28]
  asr.w lr,r0, asr #0xf
  str r2,[sp,#0x30]
  ldr.w r5,[r3,#0x4]!
  ldr r6,[sp,#0x4]
  ldr r4,[r3,#0x20]
  asrs r2,r5,#0xf
  ubfx r5,r5,#0x0,#0xf
  ldr r0,[r3,#0x40]
  mul r5,r6,r5
  ldr r6,[sp,#0x8]
  asrs r7,r4,#0xf
  ubfx r4,r4,#0x0,#0xf
  mul r4,r6,r4
  asrs r6,r0,#0xf
  str r6,[sp,#0x10]
  ldr r6,[sp,#0x4]
  ldr r1,[r3,#0x60]
  mul r12,r2,r6
  ldr r6,[sp,#0x18]
  add.w r5,r12,r5, asr #0xf
  mul r2,r6,r2
  ldr r6,[sp,#0x8]
  add.w r5,r5,r2, asr #0xf
  mul r2,r7,r6
  add.w r2,r2,r4, asr #0xf
  ldr r4,[sp,#0x1c]
  ldr r6,[sp,#0x10]
  mul r7,r4,r7
  add.w r2,r2,r7, asr #0xf
  add r5,r2
  ldr r2,[sp,#0x20]
  asr.w r12,r1, asr #0xf
  ubfx r1,r1,#0x0,#0xf
  mul r4,r6,r10
  mul r1,r11,r1
  mul r6,r2,r6
  mul r2,r12,r11
  ubfx r0,r0,#0x0,#0xf
  add.w r1,r2,r1, asr #0xf
  mul r0,r10,r0
  ldr r2,[sp,#0x24]
  add.w r0,r4,r0, asr #0xf
  mul r12,r2,r12
  ldr.w r7,[r3,#0x120]
  add.w r0,r0,r6, asr #0xf
  add r5,r0
  add.w r1,r1,r12, asr #0xf
  ldr r2,[sp,#0x14]
  add r1,r5
  asrs r4,r7,#0xf
  ubfx r7,r7,#0x0,#0xf
  adds r2,r1,r2
  mul r7,r9,r7
  mul r1,r4,r9
  add.w r7,r1,r7, asr #0xf
  ldr r1,[sp,#0x28]
  ldr.w r6,[r3,#0x140]
  mul r4,r1,r4
  ldr.w r0,[r3,#0x160]
  add.w r7,r7,r4, asr #0xf
  ldr r4,[sp,#0x2c]
  asrs r5,r6,#0xf
  asrs r1,r0,#0xf
  ubfx r0,r0,#0x0,#0xf
  mul r12,r5,r8
  mul r0,lr,r0
  mul r5,r4,r5
  mul r4,r1,lr
  ubfx r6,r6,#0x0,#0xf
  add.w r0,r4,r0, asr #0xf
  mul r6,r8,r6
  ldr r4,[sp,#0x30]
  add.w r6,r12,r6, asr #0xf
  mul r1,r4,r1
  add r2,r7
  add.w r6,r6,r5, asr #0xf
  add.w r0,r0,r1, asr #0xf
  add r2,r6
  ldr r1,[sp,#0xc]
  add r2,r0
  str.w r2,[r1,#0x4]!
  ldr r2,[0x1401be1c]
  str r1,[sp,#0xc]
  cmp r2,r3
  bne.w 0x1401bce4
  ldrd r11,r10,[sp,#0x40]
  ldrb.w r3,[r10,#0x6]
  cmp r3,#0x1
  bhi 0x1401be20
  ldr r3,[sp,#0x34]
  adds r3,#0x10
  uxth r3,r3
  str r3,[sp,#0x34]
  ldr r2,[sp,#0x38]
  ldr r3,[sp,#0x3c]
  adds r2,#0x40
  str r2,[sp,#0x38]
  ldr r2,[sp,#0x2a4]
  adds r3,#0x1
  cmp r3,r2
  str r3,[sp,#0x3c]
  bne.w 0x1401b56e
  add.w sp,sp,#0x2b4
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  ldr r3,[sp,#0x48]
  ldr r1,[sp,#0x34]
  ldr r3,[r3,#0x4]
  ldrh.w r2,[r10,#0x7ba]
  adds r1,#0x2
  add r3,r1
  cmp r2,#0x0
  beq.w 0x1401c6c2
  sub.w r1,r2,#0x8
  add.w r2,r2,#0x33c
  uxth r1,r1
  lsls r2,r2,#0x1
  add.w r0,r10,r2
  strh.w r1,[r10,#0x7ba]
  add.w r2,r0,#0x10
  add.w r4,r3,#0x20
  ldrh.w r1,[r3],#0x4
  cmp r3,r4
  strh r1,[r2,#-0x2]!
  bne 0x1401be50
  ldrsh.w r3,[r0,#0x80]
  ldrsh.w r2,[r0,#0x20]
  ldrsh.w r1,[r0,#0x40]
  subs r2,r2,r3
  ldrsh.w r3,[r0,#0x60]
  ldr r4,[sp,#0x4c]
  subs r3,r1,r3
  ldr r1,[sp,#0x50]
  mul lr,r2,r4
  mul r1,r2,r1
  ldr r2,[sp,#0x58]
  add.w lr,lr,r1, asr #0xf
  ldr r1,[sp,#0x54]
  mul r2,r3,r2
  mul r3,r1,r3
  add.w r3,r3,r2, asr #0xf
  add lr,r3
  str.w lr,[r10,#0x7bc]
  ldrsh.w r1,[r0,#0x2]
  ldr r6,[sp,#0x5c]
  ldr r5,[sp,#0x60]
  ldrsh.w r4,[r0,#0x22]
  mul r5,r1,r5
  mul r1,r6,r1
  ldr r6,[sp,#0x64]
  add.w r1,r1,r5, asr #0xf
  ldr r5,[sp,#0x68]
  ldrsh.w r2,[r0,#0x42]
  mul r5,r4,r5
  mul r4,r6,r4
  ldr r6,[sp,#0x6c]
  add.w r4,r4,r5, asr #0xf
  ldr r5,[sp,#0x70]
  add r1,r4
  mul r5,r2,r5
  mul r2,r6,r2
  add.w r2,r2,r5, asr #0xf
  ldrsh.w r3,[r0,#0x62]
  ldr r5,[sp,#0x74]
  add r1,r2
  ldr r2,[sp,#0x78]
  ldrsh.w r4,[r0,#0x82]
  mul r2,r3,r2
  mul r3,r5,r3
  add.w r3,r3,r2, asr #0xf
  add r1,r3
  ldr r2,[sp,#0x7c]
  ldr r3,[sp,#0x80]
  ldr r6,[sp,#0x88]
  mul r3,r4,r3
  mul r4,r2,r4
  add.w r3,r4,r3, asr #0xf
  add.w r8,r3,r1
  str.w r8,[r10,#0x7c0]
  ldrsh.w r4,[r0,#0x4]
  ldr r7,[sp,#0x84]
  mul r6,r4,r6
  mul r4,r7,r4
  ldrsh.w r5,[r0,#0x24]
  ldrsh.w r1,[r0,#0x44]
  ldrsh.w r2,[r0,#0x64]
  add.w r4,r4,r6, asr #0xf
  ldr r6,[sp,#0x90]
  ldr r7,[sp,#0x8c]
  mul r6,r5,r6
  mul r5,r7,r5
  ldr r7,[sp,#0x94]
  add.w r5,r5,r6, asr #0xf
  ldr r6,[sp,#0x98]
  add r4,r5
  mul r6,r1,r6
  mul r1,r7,r1
  add.w r1,r1,r6, asr #0xf
  add r4,r1
  ldr r6,[sp,#0x9c]
  ldr r1,[sp,#0xa0]
  ldrsh.w r5,[r0,#0x84]
  mul r1,r2,r1
  mul r2,r6,r2
  add.w r2,r2,r1, asr #0xf
  add r4,r2
  ldr r1,[sp,#0xa4]
  ldr r2,[sp,#0xa8]
  ldr r3,[sp,#0xac]
  mul r2,r5,r2
  mul r5,r1,r5
  add.w r2,r5,r2, asr #0xf
  add r2,r4
  str.w r2,[r10,#0x7c4]
  ldrsh.w r5,[r0,#0x6]
  ldr r7,[sp,#0xb0]
  ldrsh.w r6,[r0,#0x26]
  mul r7,r5,r7
  mul r5,r3,r5
  ldr r3,[sp,#0xb8]
  add.w r5,r5,r7, asr #0xf
  mul r7,r6,r3
  ldr r3,[sp,#0xb4]
  ldrsh.w r4,[r0,#0x46]
  mul r6,r3,r6
  ldr r3,[sp,#0xc0]
  add.w r6,r6,r7, asr #0xf
  mul r7,r4,r3
  ldr r3,[sp,#0xbc]
  ldrsh.w r1,[r0,#0x66]
  mul r4,r3,r4
  ldr r3,[sp,#0xc8]
  add.w r4,r4,r7, asr #0xf
  add r5,r6
  add r5,r4
  mul r4,r1,r3
  ldr r3,[sp,#0xc4]
  ldrsh.w r6,[r0,#0x86]
  mul r1,r3,r1
  ldr r3,[sp,#0xd0]
  add.w r1,r1,r4, asr #0xf
  add r5,r1
  mul r1,r6,r3
  ldr r3,[sp,#0xcc]
  mul r6,r3,r6
  add.w r6,r6,r1, asr #0xf
  adds r4,r5,r6
  str.w r4,[r10,#0x7c8]
  ldrsh.w r6,[r0,#0x8]
  ldr r3,[sp,#0xd8]
  ldrsh.w r7,[r0,#0x28]
  mul r12,r6,r3
  ldr r3,[sp,#0xd4]
  ldrsh.w r5,[r0,#0x48]
  mul r6,r3,r6
  ldr r3,[sp,#0xe0]
  ldrsh.w r1,[r0,#0x68]
  add.w r6,r6,r12, asr #0xf
  mul r12,r7,r3
  ldr r3,[sp,#0xdc]
  mul r7,r3,r7
  ldr r3,[sp,#0xe8]
  add.w r7,r7,r12, asr #0xf
  mul r12,r5,r3
  ldr r3,[sp,#0xe4]
  add r6,r7
  mul r5,r3,r5
  ldr r3,[sp,#0xf0]
  add.w r5,r5,r12, asr #0xf
  add r6,r5
  mul r5,r1,r3
  ldr r3,[sp,#0xec]
  ldrsh.w r7,[r0,#0x88]
  mul r1,r3,r1
  ldr r3,[sp,#0xf8]
  add.w r1,r1,r5, asr #0xf
  add r6,r1
  mul r1,r7,r3
  ldr r3,[sp,#0xf4]
  mul r7,r3,r7
  add.w r7,r7,r1, asr #0xf
  adds r1,r6,r7
  str.w r1,[r10,#0x7cc]
  ldr r3,[sp,#0x100]
  str r1,[sp,#0x10]
  ldrsh.w r1,[r0,#0xa]
  ldrsh.w r7,[r0,#0x2a]
  mul r12,r1,r3
  ldr r3,[sp,#0xfc]
  ldrsh.w r5,[r0,#0x4a]
  mul r6,r1,r3
  ldr r3,[sp,#0x108]
  add.w r6,r6,r12, asr #0xf
  mul r12,r7,r3
  ldr r3,[sp,#0x104]
  ldrsh.w r1,[r0,#0x6a]
  mul r7,r3,r7
  ldr r3,[sp,#0x110]
  add.w r7,r7,r12, asr #0xf
  mul r12,r5,r3
  ldr r3,[sp,#0x10c]
  add r6,r7
  mul r5,r3,r5
  ldr r3,[sp,#0x118]
  add.w r5,r5,r12, asr #0xf
  add r6,r5
  mul r5,r1,r3
  ldr r3,[sp,#0x114]
  ldrsh.w r7,[r0,#0x8a]
  mul r1,r3,r1
  ldr r3,[sp,#0x120]
  add.w r1,r1,r5, asr #0xf
  add r6,r1
  mul r1,r7,r3
  ldr r3,[sp,#0x11c]
  mul r7,r3,r7
  add.w r7,r7,r1, asr #0xf
  add r7,r6
  str.w r7,[r10,#0x7d0]
  ldrsh.w r5,[r0,#0xc]
  ldr r3,[sp,#0x128]
  adds r1,r4,r7
  ldrsh.w r6,[r0,#0x2c]
  mul r7,r5,r3
  ldrsh.w r4,[r0,#0x4c]
  str r1,[sp,#0xc]
  ldrsh.w r1,[r0,#0x6c]
  ldr r3,[sp,#0x124]
  mul r5,r3,r5
  ldr r3,[sp,#0x130]
  add.w r5,r5,r7, asr #0xf
  mul r7,r6,r3
  ldr r3,[sp,#0x12c]
  mul r6,r3,r6
  ldr r3,[sp,#0x138]
  add.w r6,r6,r7, asr #0xf
  mul r7,r4,r3
  ldr r3,[sp,#0x134]
  add r5,r6
  mul r4,r3,r4
  ldr r3,[sp,#0x140]
  add.w r4,r4,r7, asr #0xf
  add r5,r4
  mul r4,r1,r3
  ldr r3,[sp,#0x13c]
  ldrsh.w r6,[r0,#0x8c]
  mul r1,r3,r1
  ldr r3,[sp,#0x148]
  add.w r1,r1,r4, asr #0xf
  add r5,r1
  mul r1,r6,r3
  ldr r3,[sp,#0x144]
  mul r6,r3,r6
  add.w r6,r6,r1, asr #0xf
  add r6,r5
  str.w r6,[r10,#0x7d4]
  ldrsh.w r4,[r0,#0xe]
  ldr r3,[sp,#0x150]
  add.w r9,r2,r6
  mul r6,r4,r3
  ldr r3,[sp,#0x14c]
  ldrsh.w r5,[r0,#0x2e]
  mul r4,r3,r4
  ldr r3,[sp,#0x158]
  add.w r4,r4,r6, asr #0xf
  mul r6,r5,r3
  ldr r3,[sp,#0x154]
  ldrsh.w r1,[r0,#0x4e]
  mul r5,r3,r5
  ldr r3,[sp,#0x160]
  add.w r5,r5,r6, asr #0xf
  mul r6,r1,r3
  ldr r3,[sp,#0x15c]
  ldrsh.w r2,[r0,#0x6e]
  mul r1,r3,r1
  ldr r3,[sp,#0x168]
  add.w r1,r1,r6, asr #0xf
  add r4,r5
  add r4,r1
  mul r1,r2,r3
  ldr r3,[sp,#0x164]
  ldrsh.w r5,[r0,#0x8e]
  mul r2,r3,r2
  ldr r3,[sp,#0x170]
  add.w r2,r2,r1, asr #0xf
  add r4,r2
  mul r2,r5,r3
  ldr r3,[sp,#0x16c]
  mul r5,r3,r5
  add.w r5,r5,r2, asr #0xf
  add r5,r4
  str.w r5,[r10,#0x7d8]
  ldrsh.w r3,[r0,#0x90]
  ldrsh.w r2,[r0,#0x10]
  ldrsh.w r1,[r0,#0x30]
  add r2,r3
  ldrsh.w r3,[r0,#0x70]
  add r8,r5
  add r3,r1
  ldrsh.w r1,[r0,#0x50]
  ldr r4,[sp,#0x178]
  ldr r5,[sp,#0x174]
  mul r4,r2,r4
  mul r2,r5,r2
  ldr r5,[sp,#0x17c]
  add.w r2,r2,r4, asr #0xf
  ldr r4,[sp,#0x180]
  ldr r6,[sp,#0x18c]
  mul r4,r3,r4
  mul r3,r5,r3
  add.w r3,r3,r4, asr #0xf
  add r2,r3
  ldr r4,[sp,#0x184]
  ldr r3,[sp,#0x188]
  ldr r5,[sp,#0x190]
  mul r3,r1,r3
  mul r1,r4,r1
  add.w r1,r1,r3, asr #0xf
  add r1,r2
  str.w r1,[r10,#0x7dc]
  add lr,r1
  ldrsh.w r1,[r0,#0x12]
  ldrsh.w r4,[r0,#0x32]
  mul r5,r1,r5
  mul r1,r6,r1
  ldr r6,[sp,#0x194]
  add.w r1,r1,r5, asr #0xf
  ldr r5,[sp,#0x198]
  ldrsh.w r2,[r0,#0x52]
  mul r5,r4,r5
  mul r4,r6,r4
  ldr r6,[sp,#0x19c]
  add.w r4,r4,r5, asr #0xf
  ldr r5,[sp,#0x1a0]
  add r1,r4
  mul r5,r2,r5
  mul r2,r6,r2
  add.w r2,r2,r5, asr #0xf
  ldrsh.w r3,[r0,#0x72]
  ldr r5,[sp,#0x1a4]
  add r1,r2
  ldr r2,[sp,#0x1a8]
  ldrsh.w r4,[r0,#0x92]
  mul r2,r3,r2
  mul r3,r5,r3
  add.w r2,r3,r2, asr #0xf
  add r1,r2
  ldr r3,[sp,#0x1b0]
  ldr r2,[sp,#0x1ac]
  mul r3,r4,r3
  mul r4,r2,r4
  add.w r2,r4,r3, asr #0xf
  add r2,r1
  str.w r2,[r10,#0x7e0]
  ldrsh.w r4,[r0,#0x14]
  ldr r7,[sp,#0x1b4]
  ldr r6,[sp,#0x1b8]
  ldrsh.w r5,[r0,#0x34]
  mul r6,r4,r6
  mul r4,r7,r4
  ldr r7,[sp,#0x1bc]
  add.w r4,r4,r6, asr #0xf
  ldr r6,[sp,#0x1c0]
  ldrsh.w r1,[r0,#0x54]
  mul r6,r5,r6
  mul r5,r7,r5
  add.w r5,r5,r6, asr #0xf
  ldrsh.w r3,[r0,#0x74]
  str r2,[sp,#0x4]
  add r4,r5
  ldrsh.w r5,[r0,#0x94]
  ldr r7,[sp,#0x1c4]
  ldr r6,[sp,#0x1c8]
  ldr r2,[sp,#0x1dc]
  mul r6,r1,r6
