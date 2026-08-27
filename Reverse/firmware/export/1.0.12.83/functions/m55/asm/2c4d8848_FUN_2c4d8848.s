; FUN_2c4d8848 @ 0x2c4d8848 size=3204
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  ldr r3,[r0,#0x4]
  sub sp,#0xcc
  ldr.w r4,[r0,#0x84]
  ldr r2,[r0,#0x0]
  add.w r12,r4,r3
  ldr r3,[r0,#0x40]
  ldr.w r7,[r0,#0x80]
  ldr.w r5,[r0,#0xd0]
  rsb r4,r4,r12, asr #0x1
  add.w r9,r7,r2
  ldr r2,[r0,#0x44]
  ldr.w r8,[r0,#0x90]
  rsb r7,r7,r9, asr #0x1
  ldrd r1,r6,[r0,#0xc0]
  add r3,r1
  add r2,r6
  asr.w lr,r3, asr #0x1
  ldr r3,[r0,#0x50]
  asrs r2,r2,#0x1
  add r3,r5
  sub.w r10,lr,r1
  add.w r1,lr,r9, asr #0x1
  subs r6,r2,r6
  asrs r3,r3,#0x1
  rsb lr,lr,r9, asr #0x1
  str r1,[sp,#0x18]
  subs r5,r3,r5
  ldr r1,[sp,#0x18]
  str.w lr,[sp,#0x1c]
  str r5,[sp,#0x24]
  ldr r5,[r0,#0x10]
  str.w lr,[r0,#0x10]
  add.w lr,r2,r12, asr #0x1
  rsb r2,r2,r12, asr #0x1
  add r5,r8
  str r1,[r0,#0x0]
  str r2,[sp,#0x8]
  adds r2,r7,r6
  add.w r1,r3,r5, asr #0x1
  subs r7,r7,r6
  str r2,[sp,#0x0]
  sub.w r2,r4,r10
  rsb r8,r8,r5, asr #0x1
  add.w r6,r4,r10
  rsb r3,r3,r5, asr #0x1
  str r2,[sp,#0x4]
  ldr.w r5,[r0,#0x94]
  ldr r2,[r0,#0x14]
  ldr r4,[sp,#0x8]
  add.w r9,r5,r2
  str.w lr,[r0,#0x4]
  str r4,[r0,#0x14]
  rsb r12,r5,r9, asr #0x1
  ldr.w r4,[r0,#0x88]
  str.w lr,[sp,#0x50]
  str r7,[sp,#0xc]
  str r6,[sp,#0x10]
  str.w r12,[sp,#0x20]
  ldr r2,[r0,#0x8]
  ldr.w r7,[r0,#0x8c]
  add.w r10,r4,r2
  ldr r2,[r0,#0xc]
  ldr r6,[sp,#0x0]
  rsb r12,r4,r10, asr #0x1
  ldr r4,[sp,#0x4]
  add.w lr,r7,r2
  ldr.w r2,[r0,#0x98]
  str r4,[r0,#0xc]
  ldr r4,[r0,#0x18]
  str.w r12,[sp,#0x2c]
  rsb r12,r7,lr, asr #0x1
  add.w r11,r2,r4
  ldr r7,[sp,#0xc]
  ldr r4,[r0,#0x1c]
  str r7,[r0,#0x18]
  rsb r7,r2,r11, asr #0x1
  ldr.w r2,[r0,#0x9c]
  str r6,[r0,#0x8]
  str.w r12,[sp,#0x30]
  add.w r12,r2,r4
  ldr r6,[sp,#0x10]
  ldr r5,[r0,#0x54]
  str r6,[r0,#0x1c]
  rsb r6,r2,r12, asr #0x1
  ldr.w r2,[r0,#0xd4]
  str r3,[r0,#0x50]
  add r5,r2
  str r1,[r0,#0x40]
  str r7,[sp,#0x38]
  asrs r5,r5,#0x1
  ldr r1,[r0,#0x4c]
  str r6,[sp,#0x3c]
  subs r3,r5,r2
  ldr.w r6,[r0,#0xd8]
  ldr r2,[r0,#0x58]
  str r3,[sp,#0x28]
  add r2,r6
  ldr r4,[r0,#0x48]
  ldrd r7,r3,[r0,#0xc8]
  asrs r2,r2,#0x1
  add r1,r3
  add r4,r7
  subs r6,r2,r6
  str r2,[sp,#0x14]
  asrs r1,r1,#0x1
  asrs r4,r4,#0x1
  subs r3,r1,r3
  subs r7,r4,r7
  str r3,[sp,#0x34]
  ldr r3,[r0,#0x5c]
  ldr.w r2,[r0,#0xdc]
  add r3,r2
  asrs r3,r3,#0x1
  subs r2,r3,r2
  str r2,[sp,#0x40]
  add.w r2,r5,r9, asr #0x1
  rsb r5,r5,r9, asr #0x1
  str r2,[r0,#0x44]
  ldr r2,[sp,#0x28]
  str r5,[r0,#0x54]
  add.w r5,r8,r2
  sub.w r8,r8,r2
  str r5,[r0,#0x48]
  str.w r8,[r0,#0x58]
  ldrd r2,r5,[sp,#0x20]
  sub.w r8,r2,r5
  adds r5,r2,r5
  ldr r2,[sp,#0x2c]
  str r5,[r0,#0x5c]
  add.w r5,r4,r10, asr #0x1
  rsb r4,r4,r10, asr #0x1
  str.w r8,[r0,#0x4c]
  str.w r5,[r0,#0x80]
  str.w r4,[r0,#0x90]
  add.w r4,r1,lr, asr #0x1
  ldr r5,[sp,#0x34]
  rsb r1,r1,lr, asr #0x1
  str.w r4,[r0,#0x84]
  str.w r1,[r0,#0x94]
  subs r4,r2,r5
  adds r1,r2,r5
  ldr r2,[sp,#0x30]
  ldr r5,[sp,#0x40]
  str.w r1,[r0,#0x88]
  subs r1,r2,r7
  add r7,r2
  ldr r2,[sp,#0x14]
  str.w r1,[r0,#0x8c]
  add.w r1,r2,r11, asr #0x1
  str.w r4,[r0,#0x98]
  rsb r2,r2,r11, asr #0x1
  str.w r7,[r0,#0x9c]
  str.w r1,[r0,#0xc0]
  str.w r2,[r0,#0xd0]
  add.w r2,r3,r12, asr #0x1
  rsb r3,r3,r12, asr #0x1
  str.w r2,[r0,#0xc4]
  ldr r2,[sp,#0x38]
  str.w r3,[r0,#0xd4]
  adds r3,r2,r5
  subs r2,r2,r5
  str.w r3,[r0,#0xc8]
  str.w r2,[r0,#0xd8]
  ldr r2,[sp,#0x3c]
  ldr r1,[r0,#0x24]
  ldr.w r5,[r0,#0xa4]
  subs r3,r2,r6
  add r6,r2
  ldr.w r2,[r0,#0xa0]
  add.w r9,r5,r1
  str.w r3,[r0,#0xcc]
  str.w r6,[r0,#0xdc]
  rsb r5,r5,r9, asr #0x1
  ldr r6,[r0,#0x70]
  ldr r3,[r0,#0x20]
  str r5,[sp,#0x14]
  ldr.w r5,[r0,#0xf0]
  add.w r10,r2,r3
  ldr r1,[r0,#0x30]
  add r6,r5
  rsb r3,r2,r10, asr #0x1
  ldr r2,[r0,#0x64]
  asrs r6,r6,#0x1
  mov r11,r3
  ldr r3,[r0,#0x60]
  subs r5,r6,r5
  ldrd r4,r7,[r0,#0xe0]
  str r5,[sp,#0x30]
  ldr.w r5,[r0,#0xb0]
  add r3,r4
  add r2,r7
  add r1,r5
  asrs r3,r3,#0x1
  asrs r2,r2,#0x1
  rsb r12,r5,r1, asr #0x1
  subs r4,r3,r4
  rsb r8,r3,r10, asr #0x1
  subs r7,r2,r7
  str.w r12,[sp,#0x28]
  add.w r12,r3,r10, asr #0x1
  add.w r3,r2,r9, asr #0x1
  ldr.w r5,[r0,#0xb4]
  rsb lr,r2,r9, asr #0x1
  str.w r12,[r0,#0x20]
  str r3,[r0,#0x24]
  str r3,[sp,#0x54]
  mov r3,r11
  add r11,r7
  str.w r8,[r0,#0x30]
  sub.w r9,r3,r7
  ldr r3,[sp,#0x14]
  add.w r10,r3,r4
  subs r2,r3,r4
  add.w r4,r6,r1, asr #0x1
  rsb r6,r6,r1, asr #0x1
  ldr r1,[r0,#0x34]
  str r4,[r0,#0x60]
  adds r1,r5,r1
  str.w lr,[r0,#0x34]
  rsb r4,r5,r1, asr #0x1
  ldr.w r5,[r0,#0xa8]
  str r1,[sp,#0x14]
  str r4,[sp,#0x2c]
  ldr r4,[r0,#0x28]
  str.w r11,[r0,#0x28]
  adds r3,r5,r4
  str r3,[sp,#0x58]
  rsb r7,r5,r3, asr #0x1
  ldr.w r1,[r0,#0xac]
  ldr r5,[r0,#0x2c]
  str r7,[sp,#0x34]
  adds r5,r1,r5
  ldr.w r3,[r0,#0xec]
  str r6,[r0,#0x70]
  rsb r4,r1,r5, asr #0x1
  ldr.w r1,[r0,#0xb8]
  str r5,[sp,#0x5c]
  str r4,[sp,#0x38]
  ldr r4,[r0,#0x38]
  ldr r5,[r0,#0x74]
  adds r4,r1,r4
  ldr.w r6,[r0,#0xe8]
  str r2,[r0,#0x2c]
  rsb r7,r1,r4, asr #0x1
  str r4,[sp,#0x60]
  ldr.w r1,[r0,#0xbc]
  ldr r4,[r0,#0x3c]
  str r7,[sp,#0x40]
  adds r7,r1,r4
  str.w r9,[r0,#0x38]
  str.w r10,[r0,#0x3c]
  rsb r4,r1,r7, asr #0x1
  ldr r1,[r0,#0x6c]
  str r7,[sp,#0x64]
  add r1,r3
  ldr.w r7,[r0,#0xf4]
  str r4,[sp,#0x44]
  asrs r1,r1,#0x1
  add r5,r7
  ldr r4,[r0,#0x68]
  str r1,[sp,#0x20]
  subs r1,r1,r3
  ldr.w r3,[r0,#0xf8]
  asrs r5,r5,#0x1
  str r1,[sp,#0x3c]
  add r4,r6
  ldr r1,[r0,#0x78]
  subs r7,r5,r7
  asrs r4,r4,#0x1
  add r1,r3
  subs r6,r4,r6
  asrs r1,r1,#0x1
  subs r3,r1,r3
  str r1,[sp,#0x24]
  ldr r1,[r0,#0x7c]
  str r3,[sp,#0x48]
  ldr.w r3,[r0,#0xfc]
  add r1,r3
  asrs r1,r1,#0x1
  subs r3,r1,r3
  str r3,[sp,#0x4c]
  ldr r3,[sp,#0x14]
  add.w r3,r5,r3, asr #0x1
  str r3,[r0,#0x64]
  ldr r3,[sp,#0x14]
  rsb r5,r5,r3, asr #0x1
  ldr r3,[sp,#0x28]
  str r5,[r0,#0x74]
  adds r5,r3,r7
  subs r7,r3,r7
  ldr r3,[sp,#0x2c]
  str r5,[r0,#0x68]
  ldr r5,[sp,#0x30]
  str r7,[r0,#0x78]
  subs r7,r3,r5
  adds r5,r3,r5
  ldr r3,[sp,#0x58]
  str r5,[r0,#0x7c]
  add.w r5,r4,r3, asr #0x1
  str r7,[r0,#0x6c]
  rsb r4,r4,r3, asr #0x1
  ldr r3,[sp,#0x5c]
  str.w r5,[r0,#0xa0]
  ldr r5,[sp,#0x20]
  str.w r4,[r0,#0xb0]
  add.w r4,r5,r3, asr #0x1
  rsb r5,r5,r3, asr #0x1
  ldr r3,[sp,#0x3c]
  str.w r4,[r0,#0xa4]
  str.w r5,[r0,#0xb4]
  ldr r5,[sp,#0x34]
  adds r4,r5,r3
  subs r5,r5,r3
  ldr r3,[sp,#0x60]
  str.w r5,[r0,#0xb8]
  ldr r5,[sp,#0x38]
  str.w r4,[r0,#0xa8]
  subs r4,r5,r6
  add r6,r5
  str.w r6,[r0,#0xbc]
  ldr r6,[sp,#0x24]
  str.w r4,[r0,#0xac]
  add.w r5,r6,r3, asr #0x1
  rsb r4,r6,r3, asr #0x1
  ldr r3,[sp,#0x64]
  str.w r5,[r0,#0xe0]
  add.w r6,r0,#0x140
  add.w r5,r1,r3, asr #0x1
  str.w r4,[r0,#0xf0]
  rsb r1,r1,r3, asr #0x1
  str.w r5,[r0,#0xe4]
  str.w r1,[r0,#0xf4]
  ldr r3,[sp,#0x40]
  ldr r5,[sp,#0x4c]
  str r6,[sp,#0x14]
  adds r4,r3,r5
  subs r1,r3,r5
  ldr r6,[sp,#0x50]
  str.w r4,[r0,#0xe8]
  str.w r1,[r0,#0xf8]
  ldr r7,[sp,#0x1c]
  ldrd r3,r5,[sp,#0x44]
  subs r4,r3,r5
  adds r1,r3,r5
  ldr r3,[sp,#0x54]
  str.w r4,[r0,#0xec]
  str.w r1,[r0,#0xfc]
  add.w r1,r0,#0x40
  ldr r4,[sp,#0x18]
  str r0,[sp,#0x18]
  mov r0,r10
  asr.w r12,r12, asr #0x1
  movw r5,#0x5a82
  asr.w lr,lr, asr #0x1
  smulwb r11,r11,r5
  smulwb r10,r0,r5
  smulwb r2,r2,r5
  smulwb r9,r9,r5
  sub.w r0,r2,r11
  asrs r3,r3,#0x1
  add r2,r11
  ldr r5,[sp,#0x0]
  add.w r11,r12,r4, asr #0x1
  rsb r4,r12,r4, asr #0x1
  add.w r12,r3,r6, asr #0x1
  str.w r11,[r1,#-0x40]
  str.w r4,[r1,#-0x20]
  add.w r4,lr,r7, asr #0x1
  rsb r7,lr,r7, asr #0x1
  str.w r12,[r1,#-0x3c]
  add.w lr,r2,r5, asr #0x1
  ldr r5,[sp,#0x4]
  str.w r4,[r1,#-0x30]
  asr.w r8,r8, asr #0x1
  add.w r12,r0,r5, asr #0x1
  ldr r4,[sp,#0x8]
  ldr r5,[sp,#0x0]
  rsb r3,r3,r6, asr #0x1
  rsb r6,r8,r4, asr #0x1
  str.w lr,[r1,#-0x38]
  rsb r2,r2,r5, asr #0x1
  ldr r5,[sp,#0x4]
  add.w r4,r8,r4, asr #0x1
  str.w r3,[r1,#-0x1c]
  rsb r0,r0,r5, asr #0x1
  sub.w r3,r10,r9
  ldr r5,[sp,#0x10]
  add r9,r10
  str.w r6,[r1,#-0x2c]
  rsb r6,r9,r5, asr #0x1
  str.w r12,[r1,#-0x34]
  strd r7,r4,[r1,#-0x10]
  ldr r4,[sp,#0xc]
  add.w r7,r3,r4, asr #0x1
  rsb r3,r3,r4, asr #0x1
  add.w r4,r9,r5, asr #0x1
  strd r2,r0,[r1,#-0x18]
  strd r7,r6,[r1,#-0x28]
  ldr r2,[sp,#0x14]
  strd r3,r4,[r1,#-0x8]
  adds r1,#0x40
  cmp r2,r1
  beq 0x2c4d8d18
  ldr.w r5,[r1,#-0x38]
  str r5,[sp,#0x0]
  ldr.w r5,[r1,#-0x34]
  str r5,[sp,#0x4]
  ldr.w r5,[r1,#-0x28]
  ldrd r7,r3,[r1,#-0x30]
  str r5,[sp,#0xc]
  ldr.w r5,[r1,#-0x24]
  str r3,[sp,#0x8]
  str r5,[sp,#0x10]
  ldrd r4,r6,[r1,#-0x40]
  ldrd r11,r2,[r1,#-0x18]
  ldrd r9,r0,[r1,#-0x8]
  ldrd r12,r3,[r1,#-0x20]
  ldrd r8,lr,[r1,#-0x10]
  b 0x2c4d8c30
  ldr r0,[sp,#0x18]
  ldr r2,[r0,#0x64]
  ldr.w r6,[r0,#0xc0]
  asr.w r10,r2, asr #0x1
  ldr r2,[r0,#0x60]
  asr.w r12,r6, asr #0x1
  ldr.w r7,[r0,#0xc4]
  asrs r6,r2,#0x1
  ldr.w r2,[r0,#0xe4]
  asrs r7,r7,#0x1
  asrs r2,r2,#0x1
  str r2,[sp,#0xc]
  ldr.w r2,[r0,#0xe0]
  ldrd r5,lr,[r0,#0x80]
  asrs r2,r2,#0x1
  str r2,[sp,#0x10]
  add.w r2,r12,r5, asr #0x1
  rsb r12,r12,r5, asr #0x1
  asrs r5,r2,#0x1
  ldr r2,[r0,#0x50]
  asr.w r3,r12, asr #0x1
  str r5,[sp,#0x2c]
  add.w r5,r7,lr, asr #0x1
  rsb r7,r7,lr, asr #0x1
  str r3,[sp,#0x38]
  movw r3,#0x5a82
  asrs r7,r7,#0x1
  smulwb r12,r2,r3
  ldrd r4,r1,[r0,#0x40]
  asrs r2,r5,#0x1
  str r7,[sp,#0x34]
  ldr r5,[r0,#0x54]
  asrs r4,r4,#0x1
  smulwb r5,r5,r3
  add.w r7,r12,r5
  sub.w r8,r5,r12
  str r2,[sp,#0x30]
  asrs r1,r1,#0x1
  ldr r5,[0x2c4d9040]
  ldr r2,[r0,#0x70]
  str r7,[sp,#0x14]
  smulwb r11,r2,r3
  ldr r2,[r0,#0x74]
  smulwb r2,r2,r3
  ldrd r7,r3,[r0,#0x48]
  smulwt lr,r7,r5
  rsb.w r9,lr,#0x0
  smlawb lr,r3,r5,r9
  smulwt r9,r3,r5
  smlawb r9,r7,r5,r9
  ldrd r7,r3,[r0,#0x68]
  str.w lr,[sp,#0x3c]
  smulwt r12,r7,r5
  rsb.w lr,r12,#0x0
  smlawb r12,r3,r5,lr
  smulwt lr,r3,r5
  smlawb lr,r7,r5,lr
  ldrd r7,r3,[r0,#0xc8]
  str.w lr,[sp,#0x44]
  str.w r12,[sp,#0x40]
  smulwt r12,r7,r5
  rsb.w lr,r12,#0x0
  smlawb r12,r3,r5,lr
  smulwt lr,r3,r5
  smlawb lr,r7,r5,lr
  str.w lr,[sp,#0x4c]
  str.w r12,[sp,#0x48]
  ldrd r7,r3,[r0,#0xe8]
  smulwt r12,r7,r5
  rsb.w lr,r12,#0x0
  smlawb r12,r3,r5,lr
  smulwt lr,r3,r5
  smlawb lr,r7,r5,lr
  ldr r3,[r0,#0x0]
  sub.w r5,r2,r11
  add r2,r11
  str.w r12,[sp,#0x50]
  add.w r11,r4,r3, asr #0x1
  movw r12,#0x5a82
  rsb r3,r4,r3, asr #0x1
  str r5,[sp,#0x18]
  ldr.w r4,[r0,#0xd4]
  str r3,[sp,#0x4]
  ldr r3,[r0,#0x4]
  smulwb r4,r4,r12
  add.w r3,r1,r3, asr #0x1
  ldr.w r5,[r0,#0xd0]
  str r2,[sp,#0x1c]
  str r3,[sp,#0x0]
  smulwb r5,r5,r12
  ldr r3,[r0,#0x4]
  subs r2,r4,r5
  add r5,r4
  ldr.w r4,[r0,#0xf4]
  rsb r3,r1,r3, asr #0x1
  str r2,[sp,#0x20]
  smulwb r4,r4,r12
  ldr.w r1,[r0,#0xf0]
  smulwb r1,r1,r12
  subs r2,r4,r1
  adds r1,r4,r1
  str r3,[sp,#0x8]
  str r2,[sp,#0x24]
  str r1,[sp,#0x28]
  ldr r2,[0x2c4d9044]
  str.w lr,[sp,#0x54]
  ldrd r7,r3,[r0,#0x58]
  smulwt r1,r7,r2
  rsb.w r4,r1,#0x0
  smlawb r1,r3,r2,r4
  smulwt r4,r3,r2
  smlawb r4,r7,r2,r4
  ldr r3,[r0,#0x8]
  ldr r2,[sp,#0x3c]
  add.w r3,r9,r3, asr #0x1
  ldr r7,[sp,#0x14]
  str r3,[sp,#0x58]
  ldr r3,[r0,#0x8]
  rsb r3,r9,r3, asr #0x1
  str r3,[sp,#0x5c]
  ldr r3,[r0,#0xc]
  add.w r3,r2,r3, asr #0x1
  str r3,[sp,#0x3c]
  ldr r3,[r0,#0xc]
  rsb r3,r2,r3, asr #0x1
  str r3,[sp,#0x60]
  ldr r3,[r0,#0x10]
  add.w r12,r7,r3, asr #0x1
  str.w r12,[sp,#0x64]
  ldr r3,[r0,#0x10]
  rsb r12,r7,r3, asr #0x1
  ldr r3,[r0,#0x14]
  str.w r12,[sp,#0x6c]
  add.w r12,r8,r3, asr #0x1
  ldr r3,[r0,#0x14]
  str.w r12,[sp,#0x68]
  rsb r12,r8,r3, asr #0x1
  ldr r3,[r0,#0x18]
  str.w r12,[sp,#0x70]
  add.w r12,r4,r3, asr #0x1
  ldr r3,[r0,#0x18]
  str.w r12,[sp,#0x74]
  rsb r12,r4,r3, asr #0x1
  ldr r4,[r0,#0x1c]
  ldr r3,[r0,#0x28]
  str.w r12,[sp,#0x7c]
  add.w r12,r1,r4, asr #0x1
  ldr r4,[r0,#0x1c]
  str.w r12,[sp,#0x78]
  rsb r12,r1,r4, asr #0x1
  ldr r1,[r0,#0x20]
  ldr r4,[sp,#0x40]
  add.w r9,r10,r1, asr #0x1
  str.w r12,[sp,#0x80]
  rsb r12,r10,r1, asr #0x1
  ldr r1,[r0,#0x24]
  rsb r8,r6,r1, asr #0x1
  add.w lr,r6,r1, asr #0x1
  ldr r1,[r0,#0x28]
  str.w lr,[sp,#0x84]
  add.w lr,r4,r1, asr #0x1
  ldr r1,[sp,#0x44]
  str.w lr,[sp,#0x88]
  rsb lr,r4,r3, asr #0x1
  ldr r4,[r0,#0x2c]
  ldr r3,[r0,#0x2c]
  str.w lr,[sp,#0x90]
  rsb lr,r1,r4, asr #0x1
  ldr r4,[sp,#0x18]
  str.w lr,[sp,#0x8c]
  add.w lr,r1,r3, asr #0x1
  ldr r3,[r0,#0x30]
  ldr r1,[r0,#0x30]
  str.w lr,[sp,#0x94]
  add.w lr,r4,r3, asr #0x1
  str.w lr,[sp,#0x98]
  rsb lr,r4,r1, asr #0x1
  str.w lr,[sp,#0xa0]
  ldr r3,[r0,#0x34]
  ldr r1,[sp,#0xc]
  ldr r2,[sp,#0x1c]
  ldr.w r6,[r0,#0xa0]
  rsb lr,r2,r3, asr #0x1
  ldr r3,[r0,#0x34]
  add.w r7,r1,r6, asr #0x1
  rsb r4,r1,r6, asr #0x1
  ldr r6,[sp,#0x10]
  ldr.w r1,[r0,#0xa4]
  str.w lr,[sp,#0x9c]
  add.w lr,r2,r3, asr #0x1
  add.w r3,r6,r1, asr #0x1
  ldr r2,[0x2c4d9044]
  str.w lr,[sp,#0xa4]
  rsb lr,r6,r1, asr #0x1
  str r3,[sp,#0xc]
  ldrd r1,r3,[r0,#0x78]
  smulwt r10,r1,r2
  rsb.w r6,r10,#0x0
  smlawb r10,r3,r2,r6
  smulwt r6,r3,r2
  smlawb r6,r1,r2,r6
  ldr r3,[sp,#0xc]
  movw r2,#0x5a82
  smulwb r7,r7,r2
  smulwb r4,r4,r2
  smulwb r1,lr,r2
  smulwb r2,r3,r2
  sub.w lr,r1,r7
  add r1,r7
  subs r7,r2,r4
  add r2,r4
  ldr r4,[r0,#0x38]
  str r2,[sp,#0x10]
  ldr r2,[r0,#0x38]
  str r1,[sp,#0xc]
  add.w r1,r10,r2, asr #0x1
  ldr r2,[r0,#0x3c]
  rsb r10,r10,r4, asr #0x1
  ldr r4,[r0,#0x3c]
  str r1,[sp,#0xb0]
  str.w r10,[sp,#0xc0]
  rsb r10,r6,r2, asr #0x1
  str.w r10,[sp,#0xb4]
  add.w r10,r6,r4, asr #0x1
  ldr r6,[0x2c4d9044]
  str.w r10,[sp,#0xc4]
  ldrd r3,r2,[r0,#0xd8]
  smulwt r10,r3,r6
  rsb.w r4,r10,#0x0
  smlawb r10,r2,r6,r4
  smulwt r4,r2,r6
  smlawb r4,r3,r6,r4
  ldrd r6,r1,[r0,#0xf8]
  str.w r10,[sp,#0x14]
  ldr r2,[0x2c4d9044]
  smulwt r10,r6,r2
  rsb.w r3,r10,#0x0
  smlawb r10,r1,r2,r3
  smulwt r3,r1,r2
  smlawb r3,r6,r2,r3
  ldr r6,[sp,#0x2c]
  str.w r10,[sp,#0x18]
  add.w r10,r6,r11, asr #0x1
  rsb r6,r6,r11, asr #0x1
  str.w r10,[r0,#0x0]
  str.w r6,[r0,#0x80]
  ldr r2,[sp,#0x30]
  ldr r6,[sp,#0x0]
  b 0x2c4d9048
  ldr r1,[sp,#0xc]
  add.w r10,r2,r6, asr #0x1
  rsb r6,r2,r6, asr #0x1
  ldr r2,[sp,#0x34]
  str.w r10,[r0,#0x4]
  str.w r6,[r0,#0x84]
  ldr r6,[sp,#0x4]
  add.w r10,r2,r6, asr #0x1
  rsb r6,r2,r6, asr #0x1
  ldr r2,[sp,#0x8]
  str.w r10,[r0,#0x40]
  str.w r6,[r0,#0xc0]
  ldr r6,[sp,#0x38]
  rsb r10,r6,r2, asr #0x1
  add.w r6,r6,r2, asr #0x1
  ldr r2,[sp,#0x10]
  str.w r10,[r0,#0x44]
  str.w r6,[r0,#0xc4]
  add.w r6,r1,r9, asr #0x1
  rsb r9,r1,r9, asr #0x1
  ldr r1,[sp,#0x4c]
  str r6,[r0,#0x20]
  str.w r9,[sp,#0x30]
  add.w r9,lr,r8, asr #0x1
  rsb lr,lr,r8, asr #0x1
  ldr r6,[sp,#0x84]
  str.w r9,[sp,#0x2c]
  str.w lr,[sp,#0x34]
  add.w lr,r7,r12, asr #0x1
  rsb r12,r7,r12, asr #0x1
  ldr.w r7,[r0,#0x8c]
  str.w lr,[sp,#0x38]
  str.w r12,[sp,#0x44]
  rsb r12,r2,r6, asr #0x1
  str.w r12,[sp,#0x40]
  add.w r12,r2,r6, asr #0x1
  ldr r6,[sp,#0x48]
  ldr.w r2,[r0,#0x8c]
  str.w r12,[sp,#0x84]
  add.w r12,r6,r7, asr #0x1
  ldr.w r7,[r0,#0x88]
  str.w r12,[sp,#0x0]
  rsb r12,r6,r2, asr #0x1
  add.w r11,r1,r7, asr #0x1
  ldr r2,[sp,#0x20]
  rsb r6,r1,r7, asr #0x1
  ldr.w r1,[r0,#0x94]
  str.w r12,[sp,#0x8]
  add.w r12,r2,r1, asr #0x1
  str.w r12,[sp,#0xc]
  ldr.w r7,[r0,#0x94]
  ldr r1,[sp,#0x54]
  rsb r12,r2,r7, asr #0x1
  ldr.w r7,[r0,#0x90]
  rsb r2,r5,r7, asr #0x1
  str.w r12,[sp,#0x10]
  add.w r10,r5,r7, asr #0x1
  ldr.w r7,[r0,#0x9c]
  str r2,[sp,#0x1c]
  ldr r2,[sp,#0x14]
  ldr.w r5,[r0,#0x9c]
  add.w r12,r2,r7, asr #0x1
  ldr r7,[sp,#0x28]
  str.w r12,[sp,#0x14]
  rsb r12,r2,r5, asr #0x1
  ldr.w r2,[r0,#0x98]
  ldr.w r5,[r0,#0xac]
  add.w r9,r4,r2, asr #0x1
  str.w r12,[sp,#0x20]
  rsb r4,r4,r2, asr #0x1
  ldr.w r2,[r0,#0xac]
  rsb r12,r1,r5, asr #0x1
  ldr.w r5,[r0,#0xa8]
  str.w r12,[sp,#0x48]
  add.w r12,r1,r2, asr #0x1
  ldr r1,[sp,#0x50]
  str.w r12,[sp,#0x4c]
  add.w r8,r1,r5, asr #0x1
  rsb r2,r1,r5, asr #0x1
  ldr.w r5,[r0,#0xb4]
  rsb r12,r7,r5, asr #0x1
  ldr.w r5,[r0,#0xb4]
  str r2,[sp,#0x50]
  str.w r12,[sp,#0x28]
  add.w r12,r7,r5, asr #0x1
  ldr r2,[sp,#0x24]
  ldr.w r5,[r0,#0xb0]
  ldr.w r7,[r0,#0xbc]
  add.w lr,r2,r5, asr #0x1
  str.w r12,[sp,#0x54]
  rsb r2,r2,r5, asr #0x1
  ldr.w r5,[r0,#0xbc]
  rsb r12,r3,r5, asr #0x1
  ldr.w r5,[r0,#0xb8]
  add.w r3,r3,r7, asr #0x1
  ldr r7,[sp,#0x18]
  str.w r12,[sp,#0xa8]
  add.w r1,r7,r5, asr #0x1
  str r3,[sp,#0xb8]
  rsb r7,r7,r5, asr #0x1
  str r1,[sp,#0xac]
  str r7,[sp,#0xbc]
  ldr r5,[sp,#0x0]
  ldr r3,[sp,#0x1c]
  ldr r7,[0x2c4d940c]
  smulwt r1,r11,r7
  rsb.w r12,r1,#0x0
  smlawb r1,r5,r7,r12
  smulwt r12,r5,r7
  smlawb r12,r11,r7,r12
  ldr r5,[sp,#0x8]
  str.w r12,[sp,#0x4]
  str r1,[sp,#0x0]
  smulwt r1,r6,r7
  rsb.w r11,r1,#0x0
  smlawb r1,r5,r7,r11
  smulwt r11,r5,r7
  smlawb r11,r6,r7,r11
  ldr r5,[sp,#0xc]
  ldr r7,[0x2c4d9410]
  str r1,[sp,#0x8]
  smulwt r1,r10,r7
  rsb.w r6,r1,#0x0
  smlawb r1,r5,r7,r6
  smulwt r6,r5,r7
  smlawb r6,r10,r7,r6
  ldr r5,[sp,#0x10]
  str r1,[sp,#0xc]
  smulwt r1,r3,r7
  rsb.w r10,r1,#0x0
  smlawb r1,r5,r7,r10
  smulwt r10,r5,r7
  smlawb r10,r3,r7,r10
  ldr r7,[0x2c4d9414]
  str r1,[sp,#0x10]
  ldr r1,[sp,#0x14]
  smulwt r12,r9,r7
  rsb.w r5,r12,#0x0
  smlawb r12,r1,r7,r5
  smulwt r5,r1,r7
  smlawb r5,r9,r7,r5
  ldr r1,[sp,#0x20]
  str.w r12,[sp,#0x14]
  smulwt r12,r4,r7
  rsb.w r9,r12,#0x0
  smlawb r12,r1,r7,r9
  smulwt r9,r1,r7
  smlawb r9,r4,r7,r9
  ldr r7,[0x2c4d9418]
  ldr r1,[sp,#0x48]
  ldr r3,[sp,#0x50]
  str.w r12,[sp,#0x18]
  smulwt r12,r8,r7
  rsb.w r4,r12,#0x0
  smlawb r12,r1,r7,r4
  smulwt r4,r1,r7
  smlawb r4,r8,r7,r4
  ldr r1,[sp,#0x4c]
  str.w r12,[sp,#0x1c]
  smulwt r12,r3,r7
  rsb.w r8,r12,#0x0
  smlawb r12,r1,r7,r8
  smulwt r8,r1,r7
  smlawb r8,r3,r7,r8
  add.w r7,r7,#0xbd00000
  ldr r1,[sp,#0x28]
  str.w r12,[sp,#0x20]
  add.w r7,r7,#0x3e800
  addw r7,r7,#0x1df
  smulwt r12,lr,r7
  rsb.w r3,r12,#0x0
  smlawb r12,r1,r7,r3
  smulwt r3,r1,r7
  smlawb r3,lr,r7,r3
  ldr r1,[sp,#0x54]
  str r3,[sp,#0x28]
  str.w r12,[sp,#0x24]
  smulwt r12,r2,r7
  rsb.w lr,r12,#0x0
  smlawb r12,r1,r7,lr
  smulwt lr,r1,r7
  smlawb lr,r2,r7,lr
  ldr r2,[sp,#0xa8]
  ldr r7,[sp,#0xac]
  ldr r1,[0x2c4d941c]
  str.w lr,[sp,#0x4c]
  str.w r12,[sp,#0x48]
  smulwt r12,r7,r1
  rsb.w lr,r12,#0x0
  smlawb r12,r2,r1,lr
  smulwt lr,r2,r1
  smlawb lr,r7,r1,lr
  ldrd r7,r2,[sp,#0xb8]
  str.w r12,[sp,#0x50]
  smulwt r12,r2,r1
  rsb.w r3,r12,#0x0
  smlawb r12,r7,r1,r3
  smulwt r3,r7,r1
  smlawb r3,r2,r1,r3
  ldr r7,[sp,#0x58]
  str r3,[sp,#0x54]
  ldr r2,[sp,#0x4]
  add.w r3,r2,r7, asr #0x1
  rsb r7,r2,r7, asr #0x1
  ldr r2,[sp,#0x0]
  str r3,[r0,#0x8]
  str.w r7,[r0,#0x88]
  ldr r7,[sp,#0x3c]
  add.w r3,r2,r7, asr #0x1
  rsb r7,r2,r7, asr #0x1
  ldr r2,[sp,#0x8]
  str r3,[r0,#0xc]
  str.w r7,[r0,#0x8c]
  ldr r7,[sp,#0x5c]
  add.w r3,r2,r7, asr #0x1
  rsb r7,r2,r7, asr #0x1
  ldr r2,[sp,#0xc]
  str r3,[r0,#0x48]
  str.w r7,[r0,#0xc8]
  ldr r7,[sp,#0x60]
  rsb r3,r11,r7, asr #0x1
  add.w r7,r11,r7, asr #0x1
  str r3,[r0,#0x4c]
  str.w r7,[r0,#0xcc]
  ldr r7,[sp,#0x64]
  add.w r3,r6,r7, asr #0x1
  rsb r6,r6,r7, asr #0x1
  ldr r7,[sp,#0x68]
  str r3,[r0,#0x10]
  str.w r6,[r0,#0x90]
  rsb r6,r2,r7, asr #0x1
  add.w r3,r2,r7, asr #0x1
  ldr r7,[sp,#0x10]
  str.w r6,[r0,#0x94]
  ldr r6,[sp,#0x6c]
  str r3,[r0,#0x14]
  add.w r3,r7,r6, asr #0x1
  rsb r6,r7,r6, asr #0x1
  ldr r7,[sp,#0x14]
  str r3,[r0,#0x50]
  str.w r6,[r0,#0xd0]
  ldr r6,[sp,#0x70]
  rsb r3,r10,r6, asr #0x1
  add.w r6,r10,r6, asr #0x1
  str r3,[r0,#0x54]
  str.w r6,[r0,#0xd4]
  ldr r6,[sp,#0x74]
  add.w r3,r5,r6, asr #0x1
  rsb r5,r5,r6, asr #0x1
  str r3,[r0,#0x18]
  str.w r5,[r0,#0x98]
  ldr r5,[sp,#0x78]
  ldr r6,[sp,#0x2c]
  add.w r3,r7,r5, asr #0x1
  rsb r5,r7,r5, asr #0x1
  ldr r7,[sp,#0x18]
  str r3,[r0,#0x1c]
  ldr r3,[sp,#0x7c]
  str.w r5,[r0,#0x9c]
  str r6,[r0,#0x24]
  add.w r5,r7,r3, asr #0x1
  ldr r6,[sp,#0x30]
  rsb r3,r7,r3, asr #0x1
  str r5,[r0,#0x58]
  str.w r6,[r0,#0xa0]
  ldr r5,[sp,#0x80]
  ldr r6,[sp,#0x34]
  str.w r3,[r0,#0xd8]
  rsb r3,r9,r5, asr #0x1
  str.w r6,[r0,#0xa4]
  add.w r5,r9,r5, asr #0x1
  ldr r6,[sp,#0x38]
  str.w r5,[r0,#0xdc]
  str r6,[r0,#0x60]
  ldr r5,[sp,#0x88]
  ldr r6,[sp,#0x40]
  ldr r7,[sp,#0x1c]
  str r3,[r0,#0x5c]
  add.w r3,r4,r5, asr #0x1
  str r6,[r0,#0x64]
  rsb r4,r4,r5, asr #0x1
  ldr r6,[sp,#0x44]
  ldr r5,[sp,#0x8c]
  str.w r6,[r0,#0xe0]
  str r3,[r0,#0x28]
  add.w r3,r7,r5, asr #0x1
  b 0x2c4d9420
  ldr r6,[sp,#0x84]
  str.w r4,[r0,#0xa8]
  rsb r4,r7,r5, asr #0x1
  str r3,[r0,#0x2c]
  ldr r7,[sp,#0x20]
  str.w r6,[r0,#0xe4]
  str.w r4,[r0,#0xac]
  ldr r4,[sp,#0x90]
  ldr r1,[sp,#0x28]
  add.w r3,r7,r4, asr #0x1
  ldr r5,[sp,#0x48]
  rsb r4,r7,r4, asr #0x1
  ldr r7,[sp,#0x24]
  str r3,[r0,#0x68]
  str.w r4,[r0,#0xe8]
  ldr r4,[sp,#0x94]
  rsb r3,r8,r4, asr #0x1
  add.w r4,r8,r4, asr #0x1
  str r3,[r0,#0x6c]
  str.w r4,[r0,#0xec]
  ldr r4,[sp,#0x98]
  add.w r3,r1,r4, asr #0x1
  rsb r1,r1,r4, asr #0x1
  ldr r4,[sp,#0x9c]
  str r3,[r0,#0x30]
  str.w r1,[r0,#0xb0]
  rsb r1,r7,r4, asr #0x1
  add.w r3,r7,r4, asr #0x1
  ldr r4,[sp,#0xc4]
  str.w r1,[r0,#0xb4]
  ldr r1,[sp,#0xa0]
  str r3,[r0,#0x34]
  rsb r7,r5,r1, asr #0x1
  add.w r3,r5,r1, asr #0x1
  ldr r5,[sp,#0xb4]
  str.w r7,[r0,#0xf0]
  str r3,[r0,#0x70]
  ldr r7,[sp,#0x4c]
  ldr r3,[sp,#0xa4]
  rsb r1,r7,r3, asr #0x1
  add.w r3,r7,r3, asr #0x1
  ldr r7,[sp,#0x50]
  str r1,[r0,#0x74]
  str.w r3,[r0,#0xf4]
  ldr r3,[sp,#0xb0]
  add.w r1,lr,r3, asr #0x1
  rsb r3,lr,r3, asr #0x1
  str r1,[r0,#0x38]
  add.w r1,r7,r5, asr #0x1
  str.w r3,[r0,#0xb8]
  rsb r3,r7,r5, asr #0x1
  str r1,[r0,#0x3c]
  str.w r3,[r0,#0xbc]
  ldr r3,[sp,#0xc0]
  add.w r1,r12,r3, asr #0x1
  rsb r3,r12,r3, asr #0x1
  str r1,[r0,#0x78]
  ldr r2,[sp,#0x54]
  str.w r3,[r0,#0xf8]
  rsb r1,r2,r4, asr #0x1
  add.w r2,r2,r4, asr #0x1
  str r1,[r0,#0x7c]
  str.w r2,[r0,#0xfc]
  add sp,#0xcc
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
