; FUN_140b9ca8 @ 0x140b9ca8 size=3070
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  ldr.w r3,[r0,#0x80]
  ldr r2,[r0,#0x0]
  ldr.w r7,[r0,#0x84]
  add.w r9,r3,r2
  ldr r2,[r0,#0x44]
  rsb lr,r3,r9, asr #0x1
  ldrd r6,r3,[r0,#0xc0]
  add r2,r3
  asrs r2,r2,#0x1
  sub.w r12,r2,r3
  ldr r3,[r0,#0x4]
  ldr.w r5,[r0,#0xd0]
  add.w r10,r7,r3
  ldr r3,[r0,#0x50]
  sub sp,#0xbc
  add r3,r5
  asrs r3,r3,#0x1
  subs r5,r3,r5
  ldr r4,[r0,#0x10]
  ldr r1,[r0,#0x40]
  str r5,[sp,#0x24]
  ldr.w r5,[r0,#0x90]
  add r1,r6
  add r4,r5
  rsb r8,r5,r4, asr #0x1
  asrs r1,r1,#0x1
  subs r6,r1,r6
  str.w r8,[sp,#0x14]
  add.w r8,r1,r9, asr #0x1
  rsb r1,r1,r9, asr #0x1
  str r1,[sp,#0x20]
  ldr r1,[sp,#0x20]
  ldr.w r5,[r0,#0x94]
  str r1,[r0,#0x10]
  add.w r1,r2,r10, asr #0x1
  rsb r2,r2,r10, asr #0x1
  str r2,[sp,#0x10]
  add.w r2,lr,r12
  str r2,[sp,#0x4]
  add.w r2,r3,r4, asr #0x1
  rsb r4,r3,r4, asr #0x1
  ldr r3,[r0,#0x14]
  rsb r7,r7,r10, asr #0x1
  add.w r9,r5,r3
  str r1,[r0,#0x4]
  str r1,[sp,#0x5c]
  subs r1,r7,r6
  add r7,r6
  ldr r6,[sp,#0x10]
  rsb r3,r5,r9, asr #0x1
  str.w r8,[r0,#0x0]
  str.w r8,[sp,#0x58]
  sub.w r8,lr,r12
  str r6,[r0,#0x14]
  str.w r8,[sp,#0x18]
  str r1,[sp,#0x8]
  str r7,[sp,#0xc]
  str r3,[sp,#0x1c]
  ldr.w r3,[r0,#0x88]
  ldr r1,[r0,#0x8]
  ldr.w r7,[r0,#0x8c]
  add.w r10,r3,r1
  rsb r3,r3,r10, asr #0x1
  str r3,[sp,#0x28]
  ldr r3,[r0,#0xc]
  ldr r1,[r0,#0x18]
  add.w lr,r7,r3
  ldr.w r3,[r0,#0x98]
  rsb r8,r7,lr, asr #0x1
  adds r1,r3,r1
  str.w r8,[sp,#0x2c]
  str r1,[sp,#0x44]
  rsb r8,r3,r1, asr #0x1
  ldr.w r3,[r0,#0x9c]
  ldr r1,[r0,#0x1c]
  ldr r5,[r0,#0x54]
  add.w r12,r3,r1
  ldr.w r1,[r0,#0xd4]
  ldr r6,[sp,#0x4]
  add r5,r1
  str r6,[r0,#0x8]
  asrs r5,r5,#0x1
  ldr r6,[sp,#0x8]
  str.w r8,[sp,#0x34]
  rsb r8,r3,r12, asr #0x1
  str.w r8,[sp,#0x38]
  sub.w r8,r5,r1
  ldr r1,[r0,#0x4c]
  str r6,[r0,#0xc]
  ldr r6,[sp,#0x18]
  ldrd r7,r3,[r0,#0xc8]
  add r1,r3
  str r6,[r0,#0x18]
  asrs r1,r1,#0x1
  ldr r6,[sp,#0xc]
  str r2,[r0,#0x40]
  subs r2,r1,r3
  str r6,[r0,#0x1c]
  str r2,[sp,#0x30]
  ldr.w r6,[r0,#0xd8]
  ldr r2,[r0,#0x58]
  str r4,[r0,#0x50]
  add r2,r6
  asrs r2,r2,#0x1
  subs r3,r2,r6
  ldr r4,[r0,#0x48]
  str r3,[sp,#0x3c]
  ldr r3,[r0,#0x5c]
  ldr.w r6,[r0,#0xdc]
  add r4,r7
  add r3,r6
  asrs r3,r3,#0x1
  subs r6,r3,r6
  str r6,[sp,#0x40]
  add.w r6,r5,r9, asr #0x1
  str r6,[r0,#0x44]
  ldr r6,[sp,#0x14]
  rsb r5,r5,r9, asr #0x1
  str r5,[r0,#0x54]
  mov r5,r6
  add r5,r8
  str r5,[r0,#0x48]
  sub.w r8,r6,r8
  ldr r5,[sp,#0x24]
  ldr r6,[sp,#0x1c]
  asrs r4,r4,#0x1
  str.w r8,[r0,#0x58]
  sub.w r8,r6,r5
  adds r5,r6,r5
  subs r7,r4,r7
  str r5,[r0,#0x5c]
  add.w r5,r4,r10, asr #0x1
  rsb r4,r4,r10, asr #0x1
  str.w r4,[r0,#0x90]
  add.w r4,r1,lr, asr #0x1
  ldr r6,[sp,#0x28]
  str.w r4,[r0,#0x84]
  ldr r4,[sp,#0x30]
  rsb r1,r1,lr, asr #0x1
  str.w r1,[r0,#0x94]
  adds r1,r6,r4
  subs r4,r6,r4
  ldr r6,[sp,#0x2c]
  str.w r4,[r0,#0x98]
  ldr r4,[sp,#0x44]
  str.w r1,[r0,#0x88]
  subs r1,r6,r7
  str.w r1,[r0,#0x8c]
  add.w r1,r2,r4, asr #0x1
  rsb r2,r2,r4, asr #0x1
  str.w r2,[r0,#0xd0]
  add.w r2,r3,r12, asr #0x1
  rsb r3,r3,r12, asr #0x1
  ldr r4,[sp,#0x40]
  str.w r3,[r0,#0xd4]
  ldr r3,[sp,#0x34]
  add r7,r6
  str.w r2,[r0,#0xc4]
  adds r2,r3,r4
  subs r3,r3,r4
  str.w r8,[r0,#0x4c]
  str.w r5,[r0,#0x80]
  str.w r7,[r0,#0x9c]
  str.w r2,[r0,#0xc8]
  str.w r1,[r0,#0xc0]
  str.w r3,[r0,#0xd8]
  ldrd r3,r1,[sp,#0x38]
  subs r2,r3,r1
  str.w r2,[r0,#0xcc]
  add r1,r3
  ldr.w r2,[r0,#0xa0]
  ldr r3,[r0,#0x20]
  ldrd r7,r4,[r0,#0xe0]
  add.w r10,r2,r3
  ldr r3,[r0,#0x60]
  str.w r1,[r0,#0xdc]
  add r3,r7
  ldr.w r1,[r0,#0xa4]
  asr.w r9,r3, asr #0x1
  ldr r3,[r0,#0x24]
  ldr.w r5,[r0,#0xf0]
  add r3,r1
  rsb lr,r1,r3, asr #0x1
  ldr r1,[r0,#0x70]
  rsb r8,r2,r10, asr #0x1
  add.w r12,r5,r1
  asr.w r12,r12, asr #0x1
  sub.w r6,r12,r5
  ldr r2,[r0,#0x64]
  ldr r5,[r0,#0x30]
  str r6,[sp,#0x34]
  ldr.w r6,[r0,#0xb0]
  add r2,r4
  add r5,r6
  asrs r2,r2,#0x1
  subs r4,r2,r4
  rsb r6,r6,r5, asr #0x1
  sub.w r7,r9,r7
  add.w r1,r2,r3, asr #0x1
  str r6,[sp,#0x2c]
  rsb r2,r2,r3, asr #0x1
  add.w r6,r9,r10, asr #0x1
  add.w r3,r8,r4
  sub.w r4,r8,r4
  str r6,[r0,#0x20]
  rsb r10,r9,r10, asr #0x1
  str r6,[sp,#0x60]
  add.w r9,lr,r7
  add.w r6,r12,r5, asr #0x1
  str r4,[sp,#0x24]
  rsb r12,r12,r5, asr #0x1
  sub.w r4,lr,r7
  ldr.w r5,[r0,#0xb4]
  ldr r7,[r0,#0x34]
  str r6,[r0,#0x60]
  add r7,r5
  ldr r6,[r0,#0x28]
  rsb r8,r5,r7, asr #0x1
  ldr.w r5,[r0,#0xa8]
  str.w r10,[r0,#0x30]
  adds r6,r5,r6
  rsb r5,r5,r6, asr #0x1
  str r1,[r0,#0x24]
  str r4,[sp,#0x14]
  str r2,[r0,#0x34]
  str.w r8,[sp,#0x30]
  str r3,[r0,#0x28]
  str r6,[sp,#0x64]
  ldr r6,[r0,#0x2c]
  str r5,[sp,#0x38]
  ldr.w r5,[r0,#0xac]
  ldr r4,[sp,#0x14]
  adds r6,r5,r6
  rsb r8,r5,r6, asr #0x1
  str r6,[sp,#0x68]
  ldr.w r5,[r0,#0xb8]
  ldr r6,[r0,#0x38]
  str.w r8,[sp,#0x3c]
  adds r6,r5,r6
  rsb r8,r5,r6, asr #0x1
  str r6,[sp,#0x6c]
  ldr.w r5,[r0,#0xbc]
  ldr r6,[r0,#0x3c]
  str r4,[r0,#0x2c]
  adds r6,r5,r6
  ldr r4,[sp,#0x24]
  str.w r8,[sp,#0x48]
  str r6,[sp,#0x70]
  rsb r8,r5,r6, asr #0x1
  ldr.w r6,[r0,#0xf4]
  ldr r5,[r0,#0x74]
  str r4,[r0,#0x38]
  str.w r12,[r0,#0x70]
  ldr r4,[r0,#0x68]
  ldr.w r12,[r0,#0xe8]
  add r5,r6
  asrs r5,r5,#0x1
  subs r6,r5,r6
  str.w r8,[sp,#0x4c]
  str r5,[sp,#0x1c]
  add.w r8,r12,r4
  ldr r5,[r0,#0x6c]
  ldr.w r4,[r0,#0xec]
  asr.w r8,r8, asr #0x1
  add.w lr,r4,r5
  asr.w lr,lr, asr #0x1
  sub.w r12,r8,r12
  ldr.w r5,[r0,#0xf8]
  str.w r12,[sp,#0x40]
  sub.w r12,lr,r4
  ldr r4,[r0,#0x78]
  str.w r12,[sp,#0x44]
  add.w r12,r5,r4
  asr.w r12,r12, asr #0x1
  mov r5,r12
  ldr.w r4,[r0,#0xf8]
  str.w r9,[r0,#0x3c]
  subs r4,r5,r4
  str.w r12,[sp,#0x28]
  str r4,[sp,#0x50]
  ldr r5,[r0,#0x7c]
  ldr.w r4,[r0,#0xfc]
  movw r11,#0x5a82
  add.w r12,r4,r5
  asr.w r12,r12, asr #0x1
  ldr r5,[sp,#0x1c]
  sub.w r4,r12,r4
  str r4,[sp,#0x54]
  add.w r4,r5,r7, asr #0x1
  rsb r5,r5,r7, asr #0x1
  ldr r7,[sp,#0x2c]
  str r5,[r0,#0x74]
  adds r5,r7,r6
  subs r6,r7,r6
  str r4,[r0,#0x64]
  str r6,[r0,#0x78]
  ldrd r4,r7,[sp,#0x30]
  subs r6,r4,r7
  str r6,[r0,#0x6c]
  ldr r6,[sp,#0x64]
  str r5,[r0,#0x68]
  adds r5,r4,r7
  str r5,[r0,#0x7c]
  add.w r5,r8,r6, asr #0x1
  rsb r6,r8,r6, asr #0x1
  str.w r6,[r0,#0xb0]
  ldr r6,[sp,#0x68]
  ldr r4,[sp,#0x38]
  ldr r7,[sp,#0x44]
  str.w r5,[r0,#0xa0]
  add.w r5,lr,r6, asr #0x1
  rsb r6,lr,r6, asr #0x1
  str.w r5,[r0,#0xa4]
  str.w r6,[r0,#0xb4]
  adds r5,r4,r7
  subs r6,r4,r7
  str.w r5,[r0,#0xa8]
  ldrd r4,r7,[sp,#0x3c]
  str.w r6,[r0,#0xb8]
  subs r5,r4,r7
  adds r6,r4,r7
  mov r8,r3
  mov r4,r9
  ldr r7,[sp,#0x28]
  str.w r6,[r0,#0xbc]
  ldr r6,[sp,#0x6c]
  str.w r5,[r0,#0xac]
  add.w r5,r7,r6, asr #0x1
  rsb r6,r7,r6, asr #0x1
  str.w r6,[r0,#0xf0]
  ldr r6,[sp,#0x70]
  str.w r5,[r0,#0xe0]
  add.w r5,r12,r6, asr #0x1
  str.w r5,[r0,#0xe4]
  ldr r7,[sp,#0x54]
  ldr r5,[sp,#0x48]
  rsb r6,r12,r6, asr #0x1
  str.w r6,[r0,#0xf4]
  adds r6,r5,r7
  subs r5,r5,r7
  str.w r6,[r0,#0xe8]
  str.w r5,[r0,#0xf8]
  ldrd r5,r7,[sp,#0x4c]
  subs r6,r5,r7
  str.w r6,[r0,#0xec]
  add r5,r7
  add.w r6,r0,#0x140
  str.w r5,[r0,#0xfc]
  ldr.w lr,[sp,#0x20]
  add.w r5,r0,#0x40
  str r6,[sp,#0x1c]
  str r0,[sp,#0x20]
  ldr r6,[sp,#0x24]
  ldr r0,[sp,#0x60]
  ldrd r7,r12,[sp,#0x58]
  asrs r0,r0,#0x1
  asrs r1,r1,#0x1
  asrs r2,r2,#0x1
  smulwb r8,r8,r11
  smulwb r9,r4,r11
  ldr r3,[sp,#0x14]
  smulwb r3,r3,r11
  sub.w r4,r3,r8
  add r3,r8
  add.w r8,r0,r7, asr #0x1
  rsb r0,r0,r7, asr #0x1
  add.w r7,r1,r12, asr #0x1
  str.w r8,[r5,#-0x40]
  str.w r7,[r5,#-0x3c]
  rsb r8,r2,lr, asr #0x1
  add.w r7,r2,lr, asr #0x1
  ldr r2,[sp,#0x4]
  rsb r1,r1,r12, asr #0x1
  add.w lr,r3,r2, asr #0x1
  ldr r2,[sp,#0x8]
  strd r0,r1,[r5,#-0x20]
  smulwb r6,r6,r11
  add.w r12,r4,r2, asr #0x1
  ldr r0,[sp,#0x10]
  ldr r2,[sp,#0x4]
  asr.w r10,r10, asr #0x1
  str.w r7,[r5,#-0x30]
  rsb r3,r3,r2, asr #0x1
  rsb r7,r10,r0, asr #0x1
  ldr r2,[sp,#0x8]
  str.w r7,[r5,#-0x2c]
  ldr r7,[sp,#0x18]
  sub.w r1,r9,r6
  add.w r0,r10,r0, asr #0x1
  rsb r4,r4,r2, asr #0x1
  ldr r2,[sp,#0xc]
  strd r8,r0,[r5,#-0x10]
  add r6,r9
  add.w r0,r1,r7, asr #0x1
  rsb r1,r1,r7, asr #0x1
  ldr r7,[sp,#0xc]
  rsb r2,r6,r2, asr #0x1
  strd r0,r2,[r5,#-0x28]
  add.w r6,r6,r7, asr #0x1
  ldr r2,[sp,#0x1c]
  str.w lr,[r5,#-0x38]
  str.w r12,[r5,#-0x34]
  strd r3,r4,[r5,#-0x18]
  strd r1,r6,[r5,#-0x8]
  adds r5,#0x40
  cmp r2,r5
  beq 0x140ba1aa
  ldrd lr,r3,[r5,#-0x30]
  ldrd r7,r12,[r5,#-0x40]
  ldrd r6,r4,[r5,#-0x8]
  ldrd r0,r1,[r5,#-0x20]
  ldrd r10,r2,[r5,#-0x10]
  str r3,[sp,#0x10]
  ldrd r8,r3,[r5,#-0x18]
  str r3,[sp,#0x14]
  ldr.w r3,[r5,#-0x38]
  str r3,[sp,#0x4]
  ldr.w r3,[r5,#-0x34]
  str r3,[sp,#0x8]
  ldr.w r3,[r5,#-0x28]
  str r3,[sp,#0x18]
  ldr.w r3,[r5,#-0x24]
  str r3,[sp,#0xc]
  b 0x140ba0c8
  ldr r0,[sp,#0x20]
  ldr.w r11,[0x140ba810]
  ldrd r1,r2,[r0,#0x40]
  asrs r1,r1,#0x1
  str r1,[sp,#0x4]
  ldr r1,[r0,#0x64]
  asrs r2,r2,#0x1
  str r2,[sp,#0xc]
  asrs r5,r1,#0x1
  ldr r2,[r0,#0x60]
  str r5,[sp,#0x14]
  ldr.w r5,[r0,#0xe4]
  ldr.w r7,[r0,#0xc0]
  asrs r1,r2,#0x1
  ldr.w r2,[r0,#0xe0]
  asrs r5,r5,#0x1
  asr.w r12,r7, asr #0x1
  str r1,[sp,#0x18]
  movw r7,#0x5a82
  ldrd r3,lr,[r0,#0x80]
  ldr r1,[r0,#0x70]
  str r5,[sp,#0x1c]
  asr.w r8,r2, asr #0x1
  ldr r5,[r0,#0x74]
  ldr r2,[r0,#0x50]
  smulwb r5,r5,r7
  smulwb r6,r2,r7
  smulwb r1,r1,r7
  ldr r2,[r0,#0x54]
  smulwb r2,r2,r7
  subs r7,r2,r6
  ldr.w r4,[r0,#0xc4]
  str r7,[sp,#0x20]
  subs r7,r5,r1
  str r7,[sp,#0x24]
  rsb r7,r12,r3, asr #0x1
  asrs r4,r4,#0x1
  asrs r7,r7,#0x1
  add r2,r6
  adds r1,r5,r1
  add.w r6,r12,r3, asr #0x1
  str r7,[sp,#0x48]
  add.w r7,r4,lr, asr #0x1
  rsb r4,r4,lr, asr #0x1
  str r1,[sp,#0x28]
  asrs r5,r6,#0x1
  asrs r1,r7,#0x1
  asrs r4,r4,#0x1
  ldr.w r10,[0x140ba814]
  str r5,[sp,#0x3c]
  str r4,[sp,#0x44]
  str r1,[sp,#0x40]
  ldrd r4,r3,[r0,#0x48]
  smulwt r12,r4,r11
  rsb.w lr,r12,#0x0
  smlawb r12,r3,r11,lr
  smulwt lr,r3,r11
  smlawb lr,r4,r11,lr
  str.w lr,[sp,#0x50]
  str.w r12,[sp,#0x4c]
  ldrd r1,r3,[r0,#0x68]
  ldr.w r5,[r0,#0xd0]
  smulwt r12,r1,r11
  rsb.w lr,r12,#0x0
  smlawb r12,r3,r11,lr
  smulwt lr,r3,r11
  smlawb lr,r1,r11,lr
  ldr.w r4,[r0,#0xf4]
  ldrd r1,r3,[r0,#0xc8]
  str.w r12,[sp,#0x54]
  smulwt r12,r1,r11
  rsb.w r9,r12,#0x0
  smlawb r12,r3,r11,r9
  smulwt r9,r3,r11
  smlawb r9,r1,r11,r9
  ldrd r1,r3,[r0,#0xe8]
  str.w r9,[sp,#0x5c]
  str.w r12,[sp,#0x58]
  smulwt r12,r1,r11
  rsb.w r9,r12,#0x0
  smlawb r12,r3,r11,r9
  smulwt r9,r3,r11
  smlawb r9,r1,r11,r9
  movw r3,#0x5a82
  smulwb r5,r5,r3
  smulwb r4,r4,r3
  ldr.w r1,[r0,#0xd4]
  str.w r9,[sp,#0x64]
  smulwb r6,r1,r3
  str.w r12,[sp,#0x60]
  ldr.w r1,[r0,#0xf0]
  str r6,[sp,#0x2c]
  smulwb r1,r1,r3
  ldrd r7,r3,[r0,#0x58]
  smulwt r6,r7,r10
  rsb.w r9,r6,#0x0
  smlawb r6,r3,r10,r9
  smulwt r9,r3,r10
  smlawb r9,r7,r10,r9
  str r6,[sp,#0x68]
  ldrd r6,r3,[r0,#0x78]
  smulwt r12,r6,r10
  rsb.w r7,r12,#0x0
  smlawb r12,r3,r10,r7
  smulwt r7,r3,r10
  smlawb r7,r6,r10,r7
  ldr r6,[sp,#0x4]
  ldr r3,[r0,#0x0]
  str.w r12,[sp,#0x6c]
  add.w r3,r6,r3, asr #0x1
  str r3,[sp,#0x8]
  ldr r6,[sp,#0x4]
  ldr r3,[r0,#0x0]
  rsb r3,r6,r3, asr #0x1
  str r3,[sp,#0x10]
  ldr r6,[sp,#0xc]
  ldr r3,[r0,#0x4]
  add.w r3,r6,r3, asr #0x1
  str r3,[sp,#0x4]
  ldr r3,[r0,#0x4]
  rsb r3,r6,r3, asr #0x1
  str r3,[sp,#0xc]
  ldr r6,[sp,#0x2c]
  subs r3,r4,r1
  adds r1,r4,r1
  str r1,[sp,#0x38]
  ldr r4,[sp,#0x50]
  ldr r1,[r0,#0x8]
  sub.w r12,r6,r5
  str r3,[sp,#0x34]
  ldr r3,[r0,#0x8]
  str.w r12,[sp,#0x2c]
  add.w r12,r4,r1, asr #0x1
  str.w r12,[sp,#0x50]
  rsb r12,r4,r3, asr #0x1
  ldr r4,[sp,#0x4c]
  ldr r3,[r0,#0xc]
  ldr r1,[r0,#0xc]
  str.w r12,[sp,#0x70]
  add.w r12,r4,r3, asr #0x1
  str.w r12,[sp,#0x4c]
  rsb r12,r4,r1, asr #0x1
  ldr r1,[r0,#0x10]
  ldr r4,[r0,#0x10]
  str.w r12,[sp,#0x74]
  add.w r12,r2,r1, asr #0x1
  str.w r12,[sp,#0x78]
  rsb r12,r2,r4, asr #0x1
  ldr r4,[sp,#0x20]
  ldr r2,[r0,#0x14]
  ldr r3,[r0,#0x14]
  str.w r12,[sp,#0x80]
  add.w r12,r4,r2, asr #0x1
  str.w r12,[sp,#0x7c]
  rsb r12,r4,r3, asr #0x1
  ldr r4,[r0,#0x18]
  ldr r3,[r0,#0x18]
  ldr r2,[r0,#0x1c]
  str.w r12,[sp,#0x84]
  add.w r12,r9,r4, asr #0x1
  ldr r4,[sp,#0x68]
  str.w r12,[sp,#0x88]
  rsb r12,r9,r3, asr #0x1
  str.w r12,[sp,#0x8c]
  add.w r12,r4,r2, asr #0x1
  add r6,r5
  str.w r12,[sp,#0x68]
  rsb r12,r4,r2, asr #0x1
  str r6,[sp,#0x30]
  str.w r12,[sp,#0x90]
  ldr r2,[sp,#0x14]
  ldr r1,[r0,#0x20]
  ldr r3,[r0,#0x24]
  add.w r1,r2,r1, asr #0x1
  str r1,[sp,#0x94]
  ldr r1,[r0,#0x20]
  ldr r4,[r0,#0x24]
  rsb r1,r2,r1, asr #0x1
  ldr r2,[sp,#0x18]
  ldr r5,[sp,#0x54]
  rsb r4,r2,r4, asr #0x1
  add.w r2,r2,r3, asr #0x1
  ldr r3,[r0,#0x28]
  ldr r6,[r0,#0x2c]
  add.w r9,r5,r3, asr #0x1
  ldr r3,[r0,#0x28]
  str.w r9,[sp,#0x54]
  rsb r9,r5,r3, asr #0x1
  ldr r3,[r0,#0x2c]
  str.w r9,[sp,#0x9c]
  rsb r9,lr,r6, asr #0x1
  ldr r6,[sp,#0x24]
  add.w lr,lr,r3, asr #0x1
  ldr r3,[r0,#0x30]
  str.w lr,[sp,#0xa0]
  add.w lr,r6,r3, asr #0x1
  ldr r3,[r0,#0x30]
  str.w lr,[sp,#0x24]
  rsb lr,r6,r3, asr #0x1
  ldr r6,[sp,#0x28]
  ldr r3,[r0,#0x34]
  str.w lr,[sp,#0xa4]
  rsb lr,r6,r3, asr #0x1
  ldr r3,[r0,#0x34]
  ldr r5,[sp,#0x6c]
  str.w lr,[sp,#0x28]
  add.w lr,r6,r3, asr #0x1
  ldr r6,[r0,#0x38]
  str.w lr,[sp,#0xa8]
  add.w lr,r5,r6, asr #0x1
  ldr r6,[r0,#0x38]
  str.w lr,[sp,#0x6c]
  rsb lr,r5,r6, asr #0x1
  ldr r6,[r0,#0x3c]
  str.w lr,[sp,#0xb0]
  rsb lr,r7,r6, asr #0x1
  str.w r9,[sp,#0x98]
  str.w lr,[sp,#0xac]
  ldr r3,[r0,#0x3c]
  ldr r5,[sp,#0x1c]
  ldr.w r6,[r0,#0xa4]
  add.w lr,r7,r3, asr #0x1
  ldr.w r7,[r0,#0xa0]
  movw r3,#0x5a82
  str.w lr,[sp,#0xb4]
  add.w lr,r5,r7, asr #0x1
  rsb r5,r5,r7, asr #0x1
  smulwb r7,lr,r3
  smulwb r5,r5,r3
  rsb lr,r8,r6, asr #0x1
  add.w r8,r8,r6, asr #0x1
  smulwb lr,lr,r3
  smulwb r3,r8,r3
  sub.w r9,lr,r7
  sub.w r8,r3,r5
  add lr,r7
  add r3,r5
  ldrd r7,r5,[r0,#0xd8]
  smulwt r6,r7,r10
  rsb.w r12,r6,#0x0
  smlawb r6,r5,r10,r12
  smulwt r12,r5,r10
  smlawb r12,r7,r10,r12
  ldrd r7,r5,[r0,#0xf8]
  str.w r12,[sp,#0x18]
  str r6,[sp,#0x14]
  smulwt r12,r7,r10
  rsb.w r6,r12,#0x0
  smlawb r12,r5,r10,r6
  smulwt r6,r5,r10
  smlawb r6,r7,r10,r6
  ldr r5,[sp,#0x3c]
  str r6,[sp,#0x20]
  ldr r6,[sp,#0x8]
  str.w r12,[sp,#0x1c]
  add.w r7,r5,r6, asr #0x1
  str r7,[r0,#0x0]
  rsb r6,r5,r6, asr #0x1
  ldr r7,[sp,#0x40]
  ldr r5,[sp,#0x4]
  str.w r6,[r0,#0x80]
  add.w r6,r7,r5, asr #0x1
  rsb r7,r7,r5, asr #0x1
  str.w r7,[r0,#0x84]
  ldr r5,[sp,#0x10]
  ldr r7,[sp,#0x44]
  str r6,[r0,#0x4]
  add.w r6,r7,r5, asr #0x1
  rsb r7,r7,r5, asr #0x1
  str.w r7,[r0,#0xc0]
  ldr r5,[sp,#0xc]
  ldr r7,[sp,#0x48]
  str r6,[r0,#0x40]
  rsb r6,r7,r5, asr #0x1
  add.w r7,r7,r5, asr #0x1
  ldr r5,[sp,#0x94]
  str r6,[r0,#0x44]
  rsb r12,lr,r5, asr #0x1
  add.w r6,lr,r5, asr #0x1
  add.w lr,r9,r4, asr #0x1
  str.w lr,[sp,#0x4]
  add.w lr,r8,r1, asr #0x1
  rsb r8,r8,r1, asr #0x1
  str.w r7,[r0,#0xc4]
  str r6,[r0,#0x20]
  rsb r9,r9,r4, asr #0x1
  str.w r8,[sp,#0xc]
  ldr.w r1,[r0,#0x8c]
  ldr r4,[sp,#0x58]
  rsb r8,r3,r2, asr #0x1
  str.w r8,[sp,#0x8]
  add.w r8,r3,r2, asr #0x1
  ldr r2,[sp,#0x5c]
  add.w r3,r4,r1, asr #0x1
  rsb r4,r4,r1, asr #0x1
  ldr.w r1,[r0,#0x88]
  ldr r5,[0x140ba804]
  str.w r8,[sp,#0x10]
  rsb r6,r2,r1, asr #0x1
  add.w r7,r2,r1, asr #0x1
  smulwt r2,r7,r5
  rsb.w r1,r2,#0x0
  smlawb r2,r3,r5,r1
  smulwt r1,r3,r5
  smlawb r1,r7,r5,r1
  smulwt r8,r6,r5
  rsb.w r3,r8,#0x0
  smlawb r8,r4,r5,r3
  smulwt r3,r4,r5
  smlawb r3,r6,r5,r3
  ldr r5,[sp,#0x50]
  ldr r7,[sp,#0x4c]
  add.w r4,r1,r5, asr #0x1
  rsb r1,r1,r5, asr #0x1
  ldr r5,[sp,#0x70]
  str.w r1,[r0,#0x88]
  add.w r1,r2,r7, asr #0x1
  rsb r2,r2,r7, asr #0x1
  str r1,[r0,#0xc]
  str.w r2,[r0,#0x8c]
  rsb r1,r8,r5, asr #0x1
  add.w r2,r8,r5, asr #0x1
  ldr r5,[sp,#0x74]
  str r2,[r0,#0x48]
  rsb r2,r3,r5, asr #0x1
  add.w r3,r3,r5, asr #0x1
  str.w r1,[r0,#0xc8]
  str.w r3,[r0,#0xcc]
  ldr.w r1,[r0,#0x94]
  ldr r3,[sp,#0x2c]
  str r4,[r0,#0x8]
  str r2,[r0,#0x4c]
  rsb r4,r3,r1, asr #0x1
  add.w r2,r3,r1, asr #0x1
  ldr.w r1,[r0,#0x90]
  ldr r3,[sp,#0x30]
  ldr r7,[sp,#0x7c]
  rsb r5,r3,r1, asr #0x1
  add.w r6,r3,r1, asr #0x1
  smulwt r3,r6,r11
  rsb.w r1,r3,#0x0
  smlawb r3,r2,r11,r1
  smulwt r1,r2,r11
  smlawb r1,r6,r11,r1
  smulwt r2,r5,r11
  rsb.w r6,r2,#0x0
  smlawb r2,r4,r11,r6
  smulwt r6,r4,r11
  smlawb r6,r5,r11,r6
  ldr r5,[sp,#0x78]
  add.w r4,r1,r5, asr #0x1
  rsb r1,r1,r5, asr #0x1
  ldr r5,[sp,#0x80]
  str.w r1,[r0,#0x90]
  add.w r1,r3,r7, asr #0x1
  rsb r3,r3,r7, asr #0x1
  str.w r3,[r0,#0x94]
  add.w r3,r2,r5, asr #0x1
  rsb r2,r2,r5, asr #0x1
  ldr r5,[sp,#0x84]
  str r3,[r0,#0x50]
  rsb r3,r6,r5, asr #0x1
  str r4,[r0,#0x10]
  str r1,[r0,#0x14]
  str.w r2,[r0,#0xd0]
  add.w r6,r6,r5, asr #0x1
  str r3,[r0,#0x54]
  ldr.w r5,[r0,#0x9c]
  ldr r2,[sp,#0x14]
  ldr.w r7,[r0,#0x98]
  add.w r4,r2,r5, asr #0x1
  rsb r1,r2,r5, asr #0x1
  ldr r2,[sp,#0x18]
  ldr.w r5,[r0,#0x98]
  rsb r11,r2,r7, asr #0x1
  add.w r5,r2,r5, asr #0x1
  ldr r7,[0x140ba808]
  smulwt r3,r5,r7
  rsb.w r2,r3,#0x0
  smlawb r3,r4,r7,r2
  smulwt r2,r4,r7
  smlawb r2,r5,r7,r2
  smulwt r5,r11,r7
  rsb.w r4,r5,#0x0
  smlawb r5,r1,r7,r4
  smulwt r4,r1,r7
  smlawb r4,r11,r7,r4
  ldr r7,[sp,#0x88]
  str.w r6,[r0,#0xd4]
  ldr r6,[sp,#0x68]
  add.w r1,r2,r7, asr #0x1
  rsb r2,r2,r7, asr #0x1
  str.w r2,[r0,#0x98]
  add.w r2,r3,r6, asr #0x1
  str r2,[r0,#0x1c]
  ldr r2,[sp,#0x4]
  ldr r7,[sp,#0x8c]
  str r2,[r0,#0x24]
  ldr r2,[sp,#0x8]
  rsb r3,r3,r6, asr #0x1
  str r2,[r0,#0x64]
  ldr r2,[sp,#0xc]
  str.w r3,[r0,#0x9c]
  str.w r2,[r0,#0xe0]
  add.w r3,r5,r7, asr #0x1
  ldr r2,[sp,#0x10]
  rsb r5,r5,r7, asr #0x1
  str.w r5,[r0,#0xd8]
  ldr r5,[sp,#0x90]
  str r1,[r0,#0x18]
  str.w r2,[r0,#0xe4]
  ldr.w r1,[r0,#0xac]
  ldr r2,[sp,#0x64]
  str r3,[r0,#0x58]
  rsb r3,r4,r5, asr #0x1
  add.w r4,r4,r5, asr #0x1
  str r3,[r0,#0x5c]
  str.w r4,[r0,#0xdc]
  rsb r3,r2,r1, asr #0x1
  add.w r4,r2,r1, asr #0x1
  str.w lr,[r0,#0x60]
  ldr r2,[sp,#0x60]
  strd r12,r9,[r0,#0xa0]
  ldr.w r1,[r0,#0xa8]
  ldr r7,[0x140ba80c]
  rsb r5,r2,r1, asr #0x1
  add.w r6,r2,r1, asr #0x1
  smulwt r2,r6,r7
  rsb.w r1,r2,#0x0
  smlawb r2,r3,r7,r1
  smulwt r1,r3,r7
  smlawb r1,r6,r7,r1
  smulwt r3,r5,r7
  rsb.w lr,r3,#0x0
  smlawb r3,r4,r7,lr
  smulwt lr,r4,r7
  smlawb lr,r5,r7,lr
  ldr r5,[sp,#0x54]
  ldr r6,[sp,#0x98]
  add.w r4,r1,r5, asr #0x1
  rsb r1,r1,r5, asr #0x1
  ldr r5,[sp,#0x9c]
  str.w r1,[r0,#0xa8]
  add.w r1,r2,r6, asr #0x1
  rsb r2,r2,r6, asr #0x1
  str.w r2,[r0,#0xac]
  add.w r2,r3,r5, asr #0x1
  rsb r3,r3,r5, asr #0x1
  ldr r5,[sp,#0xa0]
  str r2,[r0,#0x68]
  add.w r2,lr,r5, asr #0x1
  str r1,[r0,#0x2c]
  str.w r2,[r0,#0xec]
  ldr.w r1,[r0,#0xb4]
  ldr r2,[sp,#0x38]
  str.w r3,[r0,#0xe8]
  rsb r3,lr,r5, asr #0x1
  str r4,[r0,#0x28]
  ldr.w r5,[r0,#0xb0]
  ldr r4,[sp,#0x34]
  str r3,[r0,#0x6c]
  rsb r3,r2,r1, asr #0x1
  add.w r1,r2,r1, asr #0x1
  ldr.w r2,[r0,#0xb0]
  ldr r7,[sp,#0x28]
  add.w r2,r4,r2, asr #0x1
  rsb r4,r4,r5, asr #0x1
  smulwt r5,r2,r10
  rsb.w r6,r5,#0x0
  smlawb r5,r3,r10,r6
  smulwt r6,r3,r10
  smlawb r6,r2,r10,r6
  smulwt r2,r4,r10
  rsb.w r3,r2,#0x0
  smlawb r2,r1,r10,r3
  smulwt r3,r1,r10
  smlawb r3,r4,r10,r3
  ldr r4,[sp,#0x24]
  add.w r1,r6,r4, asr #0x1
  rsb r6,r6,r4, asr #0x1
  ldr r4,[sp,#0xa4]
  str r1,[r0,#0x30]
  add.w r1,r5,r7, asr #0x1
  str r1,[r0,#0x34]
  add.w r1,r2,r4, asr #0x1
  str r1,[r0,#0x70]
  ldr r1,[sp,#0xa8]
  rsb r2,r2,r4, asr #0x1
  rsb r5,r5,r7, asr #0x1
  str.w r2,[r0,#0xf0]
  b 0x140ba818
  rsb r2,r3,r1, asr #0x1
  add.w r3,r3,r1, asr #0x1
  str.w r6,[r0,#0xb0]
  str.w r5,[r0,#0xb4]
  str r2,[r0,#0x74]
  ldr r5,[sp,#0x20]
  ldr.w r2,[r0,#0xbc]
  str.w r3,[r0,#0xf4]
  ldr.w r3,[r0,#0xbc]
  rsb r2,r5,r2, asr #0x1
  add.w r4,r5,r3, asr #0x1
  ldr r5,[sp,#0x1c]
  ldr.w r3,[r0,#0xb8]
  ldr r7,[0x140ba8bc]
  add.w r6,r5,r3, asr #0x1
  rsb r3,r5,r3, asr #0x1
  smulwt r1,r6,r7
  rsb.w r5,r1,#0x0
  smlawb r1,r2,r7,r5
  smulwt r5,r2,r7
  smlawb r5,r6,r7,r5
  smulwt r2,r3,r7
  rsb.w r11,r2,#0x0
  smlawb r2,r4,r7,r11
  smulwt r11,r4,r7
  smlawb r11,r3,r7,r11
  ldr r4,[sp,#0x6c]
  add.w r3,r5,r4, asr #0x1
  rsb r5,r5,r4, asr #0x1
  ldr r4,[sp,#0xac]
  str r3,[r0,#0x38]
  add.w r3,r1,r4, asr #0x1
  rsb r1,r1,r4, asr #0x1
  str.w r1,[r0,#0xbc]
  ldr r1,[sp,#0xb0]
  str r3,[r0,#0x3c]
  add.w r3,r2,r1, asr #0x1
  str r3,[r0,#0x78]
  ldr r3,[sp,#0xb4]
  rsb r2,r2,r1, asr #0x1
  rsb r1,r11,r3, asr #0x1
  add.w r3,r11,r3, asr #0x1
  strd r2,r3,[r0,#0xf8]
  str.w r5,[r0,#0xb8]
  str r1,[r0,#0x7c]
  add sp,#0xbc
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
