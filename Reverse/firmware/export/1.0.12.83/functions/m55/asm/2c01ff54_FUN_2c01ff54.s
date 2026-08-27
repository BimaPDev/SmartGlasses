; FUN_2c01ff54 @ 0x2c01ff54 size=2978
  ldr r2,[sp,#0x104]
  str r1,[sp,#0x100]
  asrs r1,r2,#0xf
  str r1,[sp,#0x104]
  ubfx r1,r2,#0x0,#0xf
  ldr r2,[sp,#0x10c]
  str r1,[sp,#0x108]
  asrs r1,r2,#0xf
  str r1,[sp,#0x10c]
  ubfx r1,r2,#0x0,#0xf
  ldr r2,[sp,#0x114]
  str r1,[sp,#0x110]
  asrs r1,r2,#0xf
  str r1,[sp,#0x114]
  ubfx r1,r2,#0x0,#0xf
  ldr r2,[sp,#0x11c]
  str r1,[sp,#0x118]
  asrs r1,r2,#0xf
  str r1,[sp,#0x11c]
  ubfx r1,r2,#0x0,#0xf
  ldr r2,[sp,#0x124]
  str r1,[sp,#0x120]
  asrs r1,r2,#0xf
  str r1,[sp,#0x124]
  ubfx r1,r2,#0x0,#0xf
  ldr r2,[sp,#0x12c]
  str r1,[sp,#0x128]
  asrs r1,r2,#0xf
  str r1,[sp,#0x12c]
  ubfx r1,r2,#0x0,#0xf
  str r1,[sp,#0x130]
  ldr r2,[sp,#0x134]
  ldr r3,[sp,#0x14c]
  asrs r1,r2,#0xf
  str r1,[sp,#0x134]
  ubfx r1,r2,#0x0,#0xf
  ldr r2,[sp,#0x13c]
  str r1,[sp,#0x138]
  asrs r1,r2,#0xf
  str r1,[sp,#0x13c]
  ubfx r1,r2,#0x0,#0xf
  ldr r2,[sp,#0x144]
  str r1,[sp,#0x140]
  asrs r1,r2,#0xf
  str r1,[sp,#0x144]
  ubfx r1,r2,#0x0,#0xf
  ldr r2,[sp,#0x154]
  str r1,[sp,#0x148]
  asrs r1,r3,#0xf
  str r1,[sp,#0x14c]
  ubfx r1,r3,#0x0,#0xf
  movs r3,#0x0
  str r1,[sp,#0x150]
  asrs r1,r2,#0xf
  str r1,[sp,#0x154]
  ubfx r1,r2,#0x0,#0xf
  ldr r2,[sp,#0x15c]
  str r1,[sp,#0x158]
  asrs r1,r2,#0xf
  str r1,[sp,#0x10]
  ubfx r1,r2,#0x0,#0xf
  ldr r2,[sp,#0x160]
  str r1,[sp,#0x15c]
  asrs r1,r2,#0xf
  str r1,[sp,#0x160]
  ubfx r1,r2,#0x0,#0xf
  ldr r2,[sp,#0x168]
  str r1,[sp,#0x164]
  asrs r1,r2,#0xf
  str r1,[sp,#0x14]
  ubfx r1,r2,#0x0,#0xf
  ldr r2,[sp,#0x16c]
  str r1,[sp,#0x168]
  asrs r1,r2,#0xf
  str r1,[sp,#0x18]
  ubfx r1,r2,#0x0,#0xf
  ldr r2,[sp,#0x170]
  b 0x2c020018
  str r1,[sp,#0x16c]
  asrs r1,r2,#0xf
  str r1,[sp,#0x1c]
  ubfx r1,r2,#0x0,#0xf
  ldr r2,[sp,#0x174]
  str r1,[sp,#0x170]
  asrs r1,r2,#0xf
  str r1,[sp,#0x20]
  ubfx r1,r2,#0x0,#0xf
  str r1,[sp,#0x174]
  ldr r2,[sp,#0x178]
  str r3,[sp,#0x8]
  addw r3,r11,#0x584
  asrs r1,r2,#0xf
  str r3,[sp,#0x194]
  addw r3,r11,#0x6c4
  str r1,[sp,#0x24]
  ubfx r1,r2,#0x0,#0xf
  ldr r2,[sp,#0x17c]
  str r1,[sp,#0x178]
  asrs r1,r2,#0xf
  str r3,[sp,#0x198]
  str r1,[sp,#0x28]
  ubfx r1,r2,#0x0,#0xf
  ldr r2,[sp,#0x180]
  str r1,[sp,#0x17c]
  asrs r1,r2,#0xf
  str r1,[sp,#0x2c]
  ubfx r1,r2,#0x0,#0xf
  ldr r2,[sp,#0x184]
  str r1,[sp,#0x180]
  asrs r1,r2,#0xf
  ubfx r2,r2,#0x0,#0xf
  str r2,[sp,#0x184]
  asrs r2,r4,#0xf
  str r1,[sp,#0x30]
  str r2,[sp,#0x188]
  ubfx r2,r4,#0x0,#0xf
  str r2,[sp,#0x18c]
  b 0x2c020094
  adds r3,#0x8
  uxth r3,r3
  str r3,[sp,#0x8]
  ldr r3,[sp,#0x34]
  add.w r8,r8,#0x40
  ldrb.w lr,[r11,#0x4]
  adds r3,#0x1
  cmp r3,lr
  str r3,[sp,#0x34]
  bcs.w 0x2c01f0bc
  ldr r2,[sp,#0x3c]
  ldr r1,[sp,#0x8]
  ldrh.w r3,[r11,#0x7b8]
  add r2,r1
  cmp r3,#0x0
  beq.w 0x2c020a90
  subs r1,r3,#0x4
  add.w r0,r3,#0x29c
  uxth r1,r1
  lsls r0,r0,#0x1
  strh.w r1,[r11,#0x7b8]
  add r0,r11
  ldrb.w r1,[r11,#0x6]
  add.w r3,r3,#0x29c
  cmp r1,#0x1
  ldrh r1,[r2,#0x0]
  strh r1,[r0,#0x6]
  beq.w 0x2c020a7e
  ldrh r1,[r2,#0x4]
  strh r1,[r0,#0x4]
  ldrh r1,[r2,#0x8]
  strh r1,[r0,#0x2]
  ldrh r2,[r2,#0xc]
  strh.w r2,[r11,r3,lsl #0x1]
  ldrsh.w r2,[r0,#0x10]
  ldrsh.w r3,[r0,#0x40]
  ldrsh.w r1,[r0,#0x20]
  subs r3,r2,r3
  ldrsh.w r2,[r0,#0x30]
  ldr r4,[sp,#0x44]
  subs r2,r1,r2
  ldr r1,[sp,#0x48]
  ldr r6,[sp,#0x54]
  mul r1,r1,r3
  ldr r5,[sp,#0x58]
  mul r3,r4,r3
  ldr r4,[sp,#0x4c]
  ldr r7,[sp,#0x7c]
  add.w r3,r3,r1, asr #0xf
  ldr r1,[sp,#0x50]
  mul r1,r1,r2
  mul r2,r4,r2
  add.w r2,r2,r1, asr #0xf
  add r3,r2
  str.w r3,[r11,#0x7bc]
  ldrsh.w r2,[r0,#0x2]
  ldrsh.w r4,[r0,#0x12]
  mul r5,r5,r2
  ldrsh.w r1,[r0,#0x22]
  mul r2,r6,r2
  ldr r6,[sp,#0x5c]
  add.w r2,r2,r5, asr #0xf
  ldr r5,[sp,#0x60]
  mul r5,r5,r4
  mul r4,r6,r4
  ldr r6,[sp,#0x64]
  add.w r4,r4,r5, asr #0xf
  ldr r5,[sp,#0x68]
  mul r5,r5,r1
  add r2,r4
  mul r1,r6,r1
  ldrsh.w r4,[r0,#0x32]
  ldr r6,[sp,#0x6c]
  add.w r1,r1,r5, asr #0xf
  ldrsh.w r5,[r0,#0x42]
  add r2,r1
  ldr r1,[sp,#0x70]
  mul r1,r1,r4
  mul r4,r6,r4
  ldr r6,[sp,#0x80]
  add.w r1,r4,r1, asr #0xf
  ldr r4,[sp,#0x74]
  add r1,r2
  ldr r2,[sp,#0x78]
  mul r2,r2,r5
  mul r5,r4,r5
  add.w r5,r5,r2, asr #0xf
  add r1,r5
  str.w r1,[r11,#0x7c0]
  ldrsh.w r2,[r0,#0x4]
  ldrsh.w r4,[r0,#0x14]
  mul r6,r6,r2
  ldrsh.w r5,[r0,#0x24]
  mul r2,r7,r2
  ldr r7,[sp,#0x84]
  add.w r2,r2,r6, asr #0xf
  ldr r6,[sp,#0x88]
  mul r6,r6,r4
  mul r4,r7,r4
  add.w r4,r4,r6, asr #0xf
  add r2,r4
  ldrsh.w r4,[r0,#0x34]
  ldr r7,[sp,#0x8c]
  ldr r6,[sp,#0x90]
  mul r6,r6,r5
  mul r5,r7,r5
  ldr r7,[sp,#0x94]
  add.w r5,r5,r6, asr #0xf
  ldr r6,[sp,#0x98]
  mul r6,r6,r4
  add r2,r5
  mul r4,r7,r4
  ldrsh.w r5,[r0,#0x44]
  ldr r7,[sp,#0xa4]
  add.w r4,r4,r6, asr #0xf
  ldr r6,[sp,#0x9c]
  add r2,r4
  ldr r4,[sp,#0xa0]
  mul r4,r4,r5
  mul r5,r6,r5
  ldr r6,[sp,#0xa8]
  add.w r5,r5,r4, asr #0xf
  add r2,r5
  str.w r2,[r11,#0x7c4]
  ldrsh.w r4,[r0,#0x6]
  str r2,[sp,#0x4]
  mul r6,r6,r4
  ldrsh.w r2,[r0,#0x16]
  mul r4,r7,r4
  ldr r7,[sp,#0xac]
  ldrsh.w r5,[r0,#0x26]
  add.w r4,r4,r6, asr #0xf
  ldr r6,[sp,#0xb0]
  mul r6,r6,r2
  mul r2,r7,r2
  ldr r7,[sp,#0xb4]
  add.w r2,r2,r6, asr #0xf
  ldr r6,[sp,#0xb8]
  mul r6,r6,r5
  add r4,r2
  mul r5,r7,r5
  ldrsh.w r2,[r0,#0x36]
  ldr r7,[sp,#0xbc]
  add.w r5,r5,r6, asr #0xf
  ldr r6,[sp,#0xc0]
  mul r6,r6,r2
  add r4,r5
  mul r2,r7,r2
  ldrsh.w r5,[r0,#0x46]
  add.w r2,r2,r6, asr #0xf
  ldr r6,[sp,#0xc8]
  add r4,r2
  mul r2,r6,r5
  ldr r6,[sp,#0xc4]
  mul r5,r6,r5
  ldr r6,[sp,#0xd0]
  add.w r5,r5,r2, asr #0xf
  add r5,r4
  str.w r5,[r11,#0x7c8]
  add r1,r5
  ldrsh.w r2,[r0,#0x48]
  ldrsh.w r4,[r0,#0x8]
  ldrsh.w r5,[r0,#0x18]
  add r4,r2
  ldrsh.w r2,[r0,#0x38]
  add r2,r5
  ldrsh.w r5,[r0,#0x28]
  ldr r7,[sp,#0xcc]
  mul r6,r6,r4
  mul r4,r7,r4
  ldr r7,[sp,#0xd4]
  add.w r4,r4,r6, asr #0xf
  ldr r6,[sp,#0xd8]
  mul r6,r6,r2
  mul r2,r7,r2
  ldr r7,[sp,#0xe8]
  add.w r2,r2,r6, asr #0xf
  ldr r6,[sp,#0xe0]
  add r4,r2
  mul r2,r6,r5
  ldr r6,[sp,#0xdc]
  mul r5,r6,r5
  add.w r5,r5,r2, asr #0xf
  add r5,r4
  str.w r5,[r11,#0x7cc]
  add.w lr,r3,r5
  ldrsh.w r6,[r0,#0xa]
  ldr r3,[sp,#0xe4]
  ldrsh.w r2,[r0,#0x1a]
  mul r7,r7,r6
  mul r6,r3,r6
  ldr r3,[sp,#0xf0]
  ldrsh.w r5,[r0,#0x2a]
  add.w r6,r6,r7, asr #0xf
  mul r7,r3,r2
  ldr r3,[sp,#0xec]
  ldrsh.w r4,[r0,#0x3a]
  mul r2,r3,r2
  ldr r3,[sp,#0xf8]
  add.w r2,r2,r7, asr #0xf
  add r6,r2
  mul r2,r3,r5
  ldr r3,[sp,#0xf4]
  mul r5,r3,r5
  ldr r3,[sp,#0x100]
  add.w r5,r5,r2, asr #0xf
  mul r2,r3,r4
  ldr r3,[sp,#0xfc]
  add r6,r5
  ldrsh.w r5,[r0,#0x4a]
  mul r4,r3,r4
  ldr r3,[sp,#0x108]
  add.w r2,r4,r2, asr #0xf
  mul r4,r3,r5
  ldr r3,[sp,#0x104]
  add r2,r6
  mul r5,r3,r5
  ldr r3,[sp,#0x110]
  add.w r5,r5,r4, asr #0xf
  add r2,r5
  str.w r2,[r11,#0x7d0]
  ldrsh.w r7,[r0,#0xc]
  ldrsh.w r4,[r0,#0x3c]
  mul r12,r3,r7
  ldrsh.w r5,[r0,#0x1c]
  ldr r3,[sp,#0x10c]
  subs r5,r5,r4
  ldrsh.w r4,[r0,#0x2c]
  mul r7,r3,r7
  ldr r3,[sp,#0x118]
  ldrsh.w r6,[r0,#0x4c]
  add.w r7,r7,r12, asr #0xf
  mul r12,r3,r5
  ldr r3,[sp,#0x114]
  mul r5,r3,r5
  ldr r3,[sp,#0x120]
  add.w r5,r5,r12, asr #0xf
  add r7,r5
  mul r5,r3,r4
  ldr r3,[sp,#0x11c]
  mul r4,r3,r4
  ldr r3,[sp,#0x128]
  add.w r4,r4,r5, asr #0xf
  add r7,r4
  mul r4,r3,r6
  ldr r3,[sp,#0x124]
  mul r6,r3,r6
  ldr r3,[sp,#0x130]
  add.w r6,r6,r4, asr #0xf
  add r6,r7
  str.w r6,[r11,#0x7d4]
  ldrsh.w r6,[r0,#0xe]
  ldrsh.w r4,[r0,#0x1e]
  mul r7,r3,r6
  ldr r3,[sp,#0x12c]
  ldrsh.w r5,[r0,#0x2e]
  mul r6,r3,r6
  ldr r3,[sp,#0x138]
  add.w r6,r6,r7, asr #0xf
  mul r7,r3,r4
  ldr r3,[sp,#0x134]
  mul r4,r3,r4
  ldr r3,[sp,#0x140]
  add.w r4,r4,r7, asr #0xf
  mul r7,r3,r5
  ldr r3,[sp,#0x13c]
  add r6,r4
  ldrsh.w r4,[r0,#0x3e]
  mul r5,r3,r5
  ldr r3,[sp,#0x148]
  ldrsh.w r0,[r0,#0x4e]
  add.w r5,r5,r7, asr #0xf
  ubfx r7,r1,#0x0,#0xf
  add r6,r5
  mul r5,r3,r4
  ldr r3,[sp,#0x144]
  str r7,[sp,#0xc]
  mul r4,r3,r4
  ldr r3,[sp,#0x150]
  add.w r4,r4,r5, asr #0xf
  ldr r5,[sp,#0x158]
  add r6,r4
  mul r4,r3,r0
  ldr r3,[sp,#0x14c]
  mul r0,r3,r0
  ubfx r3,lr,#0x0,#0xf
  add.w r0,r0,r4, asr #0xf
  asr.w r4,lr, asr #0xf
  add r6,r0
  asrs r0,r1,#0xf
  mul r10,r5,r4
  ldr r1,[sp,#0x154]
  subs r2,r2,r6
  ldr r5,[sp,#0x15c]
  str.w r6,[r11,#0x7d8]
  ldr r6,[sp,#0x10]
  mul r7,r1,r4
  mul r5,r5,r0
  mul lr,r6,r0
  add.w r10,r7,r10, asr #0xf
  ldr r7,[sp,#0x14]
  add.w lr,lr,r5, asr #0xf
  ldr r5,[sp,#0x168]
  mul r9,r7,r4
  ldr r6,[sp,#0x18]
  mul r5,r5,r4
  ldr r7,[sp,#0x20]
  mul r12,r6,r0
  add.w r9,r9,r5, asr #0xf
  ldr r5,[sp,#0x16c]
  mul r6,r7,r4
  mul r5,r5,r0
  add.w r12,r12,r5, asr #0xf
  ldr r5,[sp,#0x174]
  mul r5,r5,r4
  add.w r5,r6,r5, asr #0xf
  str r5,[sp,#0x40]
  ldr r5,[sp,#0x178]
  ldr r6,[sp,#0x24]
  mul r5,r5,r0
  mul r6,r6,r0
  add.w r6,r6,r5, asr #0xf
  ldr r5,[sp,#0x180]
  mul r7,r5,r4
  ldr r5,[sp,#0x2c]
  mul r5,r5,r4
  ldr r4,[sp,#0x184]
  add.w r5,r5,r7, asr #0xf
  ldr r7,[sp,#0x30]
  mul r4,r4,r0
  mul r0,r7,r0
  mul r7,r3,r1
  add.w r0,r0,r4, asr #0xf
  asrs r4,r2,#0xf
  ubfx r2,r2,#0x0,#0xf
  add.w r7,r10,r7, asr #0xf
  str r2,[sp,#0x38]
  ldrd r2,r1,[sp,#0xc]
  mul r10,r2,r1
  ldr r2,[sp,#0x4]
  ldr r1,[sp,#0x14]
  add.w lr,lr,r10, asr #0xf
  add r7,lr
  mul lr,r1,r3
  ldr r1,[sp,#0x18]
  add.w r10,r7,r2
  ldr r7,[sp,#0xc]
  add.w r9,r9,lr, asr #0xf
  mul lr,r1,r7
  ldr r1,[sp,#0x20]
  add.w r12,r12,lr, asr #0xf
  add r9,r12
  mul r12,r1,r3
  ldr r1,[sp,#0x2c]
  add r9,r2
  ldr r2,[sp,#0x40]
  mul r3,r1,r3
  add.w r12,r2,r12, asr #0xf
  ldr r2,[sp,#0x18c]
  add.w r5,r5,r3, asr #0xf
  ldr r3,[sp,#0x24]
  mul r3,r7,r3
  add.w r3,r6,r3, asr #0xf
  ldr r6,[sp,#0x30]
  mul r7,r6,r7
  add r12,r3
  ldr r3,[sp,#0x4]
  add.w r1,r0,r7, asr #0xf
  ldr r7,[sp,#0x160]
  add r12,r3
  add r5,r1
  mul r0,r7,r4
  ldr r1,[sp,#0x1c]
  add r5,r3
  ldr r3,[sp,#0x164]
  mul r1,r1,r4
  mul r3,r3,r4
  add.w r0,r0,r3, asr #0xf
  ldr r3,[sp,#0x170]
  mul r3,r3,r4
  add.w r1,r1,r3, asr #0xf
  ldr r3,[sp,#0x17c]
  mul r6,r3,r4
  ldr r3,[sp,#0x28]
  mul r3,r3,r4
  add.w r3,r3,r6, asr #0xf
  mul r6,r2,r4
  ldr r2,[sp,#0x188]
  mul r4,r2,r4
  add.w r4,r4,r6, asr #0xf
  mov r6,r7
  ldr r7,[sp,#0x38]
  mul r6,r7,r6
  add.w r0,r0,r6, asr #0xf
  add r0,r10
  str.w r0,[r8,#0xa4]
  ldr r0,[sp,#0x1c]
  mul r0,r7,r0
  add.w r1,r1,r0, asr #0xf
  mov r0,r7
  add r1,r9
  mul r0,r2,r0
  str.w r1,[r8,#0xa8]
  add.w r2,r4,r0, asr #0xf
  ldr r1,[sp,#0x28]
  add r2,r5
  mul r1,r7,r1
  add.w r3,r3,r1, asr #0xf
  add r3,r12
  str.w r3,[r8,#0xac]
  str.w r2,[r8,#0xb0]
  ldrb.w r3,[r11,#0x6]
  cmp r3,#0x1
  ldr r3,[sp,#0x8]
  bls.w 0x2c02007a
  adds r2,r3,#0x2
  ldr r3,[sp,#0x3c]
  add r2,r3
  ldrh.w r3,[r11,#0x7ba]
  cmp r3,#0x0
  beq.w 0x2c020aae
  add.w r0,r3,#0x33c
  subs r1,r3,#0x4
  lsls r0,r0,#0x1
  uxth r1,r1
  strh.w r1,[r11,#0x7ba]
  add r0,r11
  ldr r1,[sp,#0x8]
  add.w r3,r3,#0x33c
  ldr r4,[sp,#0x44]
  adds r1,#0x10
  ldr r6,[sp,#0x54]
  ldr r5,[sp,#0x58]
  uxth r1,r1
  str r1,[sp,#0x8]
  ldrh r1,[r2,#0x0]
  strh r1,[r0,#0x6]
  ldrh r1,[r2,#0x4]
  strh r1,[r0,#0x4]
  ldrh r1,[r2,#0x8]
  strh r1,[r0,#0x2]
  ldrh r2,[r2,#0xc]
  strh.w r2,[r11,r3,lsl #0x1]
  ldrsh.w r2,[r0,#0x10]
  ldrsh.w r3,[r0,#0x40]
  ldrsh.w r1,[r0,#0x20]
  subs r3,r2,r3
  ldrsh.w r2,[r0,#0x30]
  subs r2,r1,r2
  ldr r1,[sp,#0x48]
  mul r1,r3,r1
  mul r3,r4,r3
  ldr r4,[sp,#0x4c]
  add.w r3,r3,r1, asr #0xf
  ldr r1,[sp,#0x50]
  mul r1,r2,r1
  mul r2,r4,r2
  add.w r2,r2,r1, asr #0xf
  add r3,r2
  str.w r3,[r11,#0x7bc]
  ldrsh.w r2,[r0,#0x2]
  ldrsh.w r1,[r0,#0x12]
  mul r5,r2,r5
  ldrsh.w r4,[r0,#0x22]
  mul r2,r6,r2
  ldr r6,[sp,#0x5c]
  add.w r2,r2,r5, asr #0xf
  ldr r5,[sp,#0x60]
  mul r5,r1,r5
  mul r1,r6,r1
  ldr r6,[sp,#0x64]
  add.w r1,r1,r5, asr #0xf
  ldr r5,[sp,#0x68]
  mul r5,r4,r5
  add r2,r1
  mul r4,r6,r4
  ldrsh.w r1,[r0,#0x32]
  add.w r4,r4,r5, asr #0xf
  ldr r5,[sp,#0x70]
  add r2,r4
  ldrsh.w r4,[r0,#0x42]
  ldr r6,[sp,#0x6c]
  mul r5,r1,r5
  ldr r7,[sp,#0x7c]
  mul r1,r6,r1
  ldr r6,[sp,#0x80]
  add.w r1,r1,r5, asr #0xf
  ldr r5,[sp,#0x74]
  add r1,r2
  ldr r2,[sp,#0x78]
  mul r2,r4,r2
  mul r4,r5,r4
  add.w r4,r4,r2, asr #0xf
  add r1,r4
  str.w r1,[r11,#0x7c0]
  ldrsh.w r2,[r0,#0x4]
  ldrsh.w r4,[r0,#0x14]
  mul r6,r2,r6
  ldrsh.w r5,[r0,#0x24]
  mul r2,r7,r2
  ldr r7,[sp,#0x84]
  add.w r2,r2,r6, asr #0xf
  ldr r6,[sp,#0x88]
  mul r6,r4,r6
  mul r4,r7,r4
  ldr r7,[sp,#0x8c]
  add.w r4,r4,r6, asr #0xf
  ldr r6,[sp,#0x90]
  mul r6,r5,r6
  add r2,r4
  mul r5,r7,r5
  ldrsh.w r4,[r0,#0x34]
  ldr r7,[sp,#0x94]
  add.w r5,r5,r6, asr #0xf
  ldr r6,[sp,#0x98]
  mul r6,r4,r6
  add r2,r5
  mul r4,r7,r4
  ldrsh.w r5,[r0,#0x44]
  ldr r7,[sp,#0xa4]
  add.w r4,r4,r6, asr #0xf
  ldr r6,[sp,#0x9c]
  add r2,r4
  ldr r4,[sp,#0xa0]
  mul r4,r5,r4
  mul r5,r6,r5
  ldr r6,[sp,#0xa8]
  add.w r5,r5,r4, asr #0xf
  add r2,r5
  str.w r2,[r11,#0x7c4]
  ldrsh.w r4,[r0,#0x6]
  str r2,[sp,#0xc]
  mul r6,r4,r6
  ldrsh.w r2,[r0,#0x16]
  mul r4,r7,r4
  ldr r7,[sp,#0xac]
  ldrsh.w r5,[r0,#0x26]
  add.w r4,r4,r6, asr #0xf
  ldr r6,[sp,#0xb0]
  mul r6,r2,r6
  mul r2,r7,r2
  ldr r7,[sp,#0xb4]
  add.w r2,r2,r6, asr #0xf
  ldr r6,[sp,#0xb8]
  mul r6,r5,r6
  add r4,r2
  mul r5,r7,r5
  ldrsh.w r2,[r0,#0x36]
  add.w r5,r5,r6, asr #0xf
  add r4,r5
  ldrsh.w r5,[r0,#0x46]
  ldr r6,[sp,#0xc0]
  ldr r7,[sp,#0xbc]
  mul r6,r2,r6
  mul r2,r7,r2
  ldr r7,[sp,#0xcc]
  add.w r2,r2,r6, asr #0xf
  ldr r6,[sp,#0xc8]
  add r4,r2
  mul r2,r5,r6
  ldr r6,[sp,#0xc4]
  mul r5,r6,r5
  ldr r6,[sp,#0xd0]
  add.w r5,r5,r2, asr #0xf
  add r4,r5
  str.w r4,[r11,#0x7c8]
  add.w lr,r1,r4
  ldrsh.w r2,[r0,#0x48]
  ldrsh.w r4,[r0,#0x8]
  ldrsh.w r5,[r0,#0x18]
  add r4,r2
  ldrsh.w r2,[r0,#0x38]
  ldr r1,[sp,#0xe4]
  mul r6,r4,r6
  add r2,r5
  mul r4,r7,r4
  ldr r7,[sp,#0xd4]
  ldrsh.w r5,[r0,#0x28]
  add.w r4,r4,r6, asr #0xf
  ldr r6,[sp,#0xd8]
  mul r6,r2,r6
  mul r2,r7,r2
  ldr r7,[sp,#0xe8]
  add.w r2,r2,r6, asr #0xf
  ldr r6,[sp,#0xe0]
  add r4,r2
  mul r2,r5,r6
  ldr r6,[sp,#0xdc]
  mul r5,r6,r5
  add.w r5,r5,r2, asr #0xf
  add r4,r5
  str.w r4,[r11,#0x7cc]
  add r3,r4
  ldrsh.w r6,[r0,#0xa]
  ldrsh.w r2,[r0,#0x1a]
  mul r7,r6,r7
  ldrsh.w r5,[r0,#0x2a]
  mul r6,r1,r6
  ldr r1,[sp,#0xf0]
  ldrsh.w r4,[r0,#0x3a]
  add.w r6,r6,r7, asr #0xf
  mul r7,r2,r1
  ldr r1,[sp,#0xec]
  mul r2,r1,r2
  ldr r1,[sp,#0xf8]
  add.w r2,r2,r7, asr #0xf
  add r2,r6
  mul r6,r5,r1
  ldr r1,[sp,#0xf4]
  mul r5,r1,r5
  ldr r1,[sp,#0x100]
  add.w r5,r5,r6, asr #0xf
  mul r6,r4,r1
  ldr r1,[sp,#0xfc]
  add r2,r5
  ldrsh.w r5,[r0,#0x4a]
  mul r4,r1,r4
  ldr r1,[sp,#0x108]
  add.w r4,r4,r6, asr #0xf
  add r2,r4
  mul r4,r5,r1
  ldr r1,[sp,#0x104]
  mul r5,r1,r5
  add.w r5,r5,r4, asr #0xf
  add r2,r5
  str.w r2,[r11,#0x7d0]
  ldrsh.w r7,[r0,#0xc]
  ldr r1,[sp,#0x110]
  ldrsh.w r4,[r0,#0x3c]
  ldrsh.w r5,[r0,#0x1c]
  mul r12,r7,r1
  ldr r1,[sp,#0x10c]
  subs r5,r5,r4
  ldrsh.w r4,[r0,#0x2c]
  mul r7,r1,r7
  ldr r1,[sp,#0x118]
  ldrsh.w r6,[r0,#0x4c]
  add.w r7,r7,r12, asr #0xf
  mul r12,r5,r1
  ldr r1,[sp,#0x114]
  mul r5,r1,r5
  ldr r1,[sp,#0x120]
  add.w r5,r5,r12, asr #0xf
  add r7,r5
  mul r5,r4,r1
  ldr r1,[sp,#0x11c]
  mul r4,r1,r4
  ldr r1,[sp,#0x128]
  add.w r4,r4,r5, asr #0xf
  add r7,r4
  mul r4,r6,r1
  ldr r1,[sp,#0x124]
  mul r6,r1,r6
  ldr r1,[sp,#0x130]
  add.w r6,r6,r4, asr #0xf
  add r6,r7
  str.w r6,[r11,#0x7d4]
  ldrsh.w r6,[r0,#0xe]
  ldrsh.w r4,[r0,#0x1e]
  mul r7,r6,r1
  ldr r1,[sp,#0x12c]
  ldrsh.w r5,[r0,#0x2e]
  mul r6,r1,r6
  ldr r1,[sp,#0x138]
  add.w r6,r6,r7, asr #0xf
  mul r7,r4,r1
  ldr r1,[sp,#0x134]
  mul r4,r1,r4
  ldr r1,[sp,#0x140]
  add.w r4,r4,r7, asr #0xf
  mul r7,r5,r1
  ldr r1,[sp,#0x13c]
  add r6,r4
  ldrsh.w r4,[r0,#0x3e]
  mul r5,r1,r5
  ldr r1,[sp,#0x148]
  ldrsh.w r0,[r0,#0x4e]
  add.w r5,r5,r7, asr #0xf
  add r6,r5
  mul r5,r4,r1
  ldr r1,[sp,#0x144]
  mul r4,r1,r4
  ldr r1,[sp,#0x150]
  add.w r4,r4,r5, asr #0xf
  ldr r5,[sp,#0x158]
  add r6,r4
  mul r4,r0,r1
  ldr r1,[sp,#0x14c]
  mul r0,r1,r0
  ubfx r1,lr,#0x0,#0xf
  add.w r0,r0,r4, asr #0xf
  asrs r4,r3,#0xf
  ubfx r3,r3,#0x0,#0xf
  add r6,r0
  asr.w r0,lr, asr #0xf
  mul r10,r5,r4
  subs r2,r2,r6
  str.w r6,[r11,#0x7d8]
  str r3,[sp,#0x4]
  ldr r3,[sp,#0x154]
  ldr r6,[sp,#0x10]
  ldr r5,[sp,#0x15c]
  mul r7,r3,r4
  mul lr,r6,r0
  ldr r6,[sp,#0x18]
  mul r5,r5,r0
  add.w r10,r7,r10, asr #0xf
  ldr r7,[sp,#0x14]
  mul r12,r6,r0
  add.w lr,lr,r5, asr #0xf
  ldr r5,[sp,#0x168]
  mul r9,r7,r4
  ldr r7,[sp,#0x20]
  mul r5,r5,r4
  mul r6,r7,r4
  ldr r7,[sp,#0x2c]
  add.w r9,r9,r5, asr #0xf
  ldr r5,[sp,#0x16c]
  mul r5,r5,r0
  add.w r12,r12,r5, asr #0xf
  ldr r5,[sp,#0x174]
  mul r5,r5,r4
  add.w r5,r6,r5, asr #0xf
  ldr r6,[sp,#0x24]
  str r5,[sp,#0x40]
  ldr r5,[sp,#0x178]
  mul r6,r6,r0
  mul r5,r5,r0
  add.w r6,r6,r5, asr #0xf
  ldr r5,[sp,#0x180]
  mul r5,r5,r4
  mul r4,r7,r4
  ldr r7,[sp,#0x30]
  add.w r5,r4,r5, asr #0xf
  ldr r4,[sp,#0x184]
  mul r4,r4,r0
  mul r0,r7,r0
  ubfx r7,r2,#0x0,#0xf
  add.w r0,r0,r4, asr #0xf
  str r7,[sp,#0x38]
  asrs r4,r2,#0xf
  ldr r2,[sp,#0xc]
  str r0,[sp,#0x190]
  ldr r0,[sp,#0x4]
  mul r7,r3,r0
  ldr r3,[sp,#0x10]
  add.w r7,r10,r7, asr #0xf
  mul r10,r3,r1
  ldr r3,[sp,#0x14]
  add.w lr,lr,r10, asr #0xf
  add r7,lr
  mul lr,r3,r0
  ldr r3,[sp,#0x18]
  mov r0,r2
  add.w r9,r9,lr, asr #0xf
  add r7,r2
  mul lr,r3,r1
  ldr r3,[sp,#0x20]
  add.w r12,r12,lr, asr #0xf
  add r12,r9
  add r12,r2
  ldr r2,[sp,#0x4]
  mul lr,r3,r2
  ldr r2,[sp,#0x40]
  ldr r3,[sp,#0x2c]
  add.w lr,r2,lr, asr #0xf
  ldr r2,[sp,#0x4]
  mul r2,r3,r2
  ldr r3,[sp,#0x24]
  mul r3,r3,r1
  add.w r5,r5,r2, asr #0xf
  ldr r2,[sp,#0x190]
  add.w r3,r6,r3, asr #0xf
  ldr r6,[sp,#0x30]
  mul r1,r6,r1
  add r3,lr
  add.w r1,r2,r1, asr #0xf
  add r5,r1
  mov r1,r0
  adds r0,r3,r0
  ldr r3,[sp,#0x164]
  add.w r9,r5,r1
  ldr r1,[sp,#0x160]
  mul r3,r3,r4
  ldr r6,[sp,#0x1c]
  mul lr,r1,r4
  ldr r5,[sp,#0x28]
  mul r6,r6,r4
  ldr r2,[sp,#0x188]
  add.w lr,lr,r3, asr #0xf
  ldr r3,[sp,#0x170]
  mul r5,r5,r4
  mul r3,r3,r4
  add.w r6,r6,r3, asr #0xf
  ldr r3,[sp,#0x17c]
  mul r3,r3,r4
  add.w r5,r5,r3, asr #0xf
  ldr r3,[sp,#0x18c]
  mul r3,r3,r4
  mul r4,r2,r4
  add.w r3,r4,r3, asr #0xf
  mov r4,r1
  ldr r1,[sp,#0x38]
  mul r4,r1,r4
  add.w r4,lr,r4, asr #0xf
  add r4,r7
  str.w r4,[r8,#0xc4]
  ldr r4,[sp,#0x1c]
  mul r4,r1,r4
  add.w r4,r6,r4, asr #0xf
  mov r6,r1
  add r4,r12
  mul r6,r2,r6
  str.w r4,[r8,#0xc8]
  add.w r2,r3,r6, asr #0xf
  ldr r4,[sp,#0x28]
  add r2,r9
  mul r4,r1,r4
  str.w r2,[r8,#0xd0]
  add.w r4,r5,r4, asr #0xf
  add r4,r0
  str.w r4,[r8,#0xcc]
  b.w 0x2c020080
  ldrh r1,[r2,#0x2]
  strh r1,[r0,#0x4]
  ldrh r1,[r2,#0x4]
  strh r1,[r0,#0x2]
  ldrh r2,[r2,#0x6]
  strh.w r2,[r11,r3,lsl #0x1]
  b.w 0x2c0200d4
  addw r3,r11,#0x53c
  ldr r0,[sp,#0x194]
  ldr.w r1,[r3,#0x4]!
  cmp r3,r0
  str.w r1,[r3,#0xf0]
  bne 0x2c020a96
  mov.w r0,#0x628
  movs r1,#0x74
  movs r3,#0x78
  b.w 0x2c0200ae
  addw r3,r11,#0x67c
  ldr r0,[sp,#0x198]
  ldr.w r1,[r3,#0x4]!
  cmp r0,r3
  str.w r1,[r3,#0xf0]
  bne 0x2c020ab4
  movs r1,#0x74
  movs r3,#0x78
  mov.w r0,#0x768
  b 0x2c0205a4
  ldrb.w r3,[r11,#0x2]
  str r3,[sp,#0xc]
  b.w 0x2c01f186
  mov lr,r3
  ldr r3,[sp,#0x4]
  b.w 0x2c01f0c2
  mov lr,r3
  b.w 0x2c01f0c8
  movs r0,#0xc
  add.w sp,sp,#0x2c4
  vpop {d8}
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  movs r6,#0x0
  mov r12,r6
  b.w 0x2c01f2fa
  movs r2,#0x2
  movs r4,#0x0
  b.w 0x2c01f294
