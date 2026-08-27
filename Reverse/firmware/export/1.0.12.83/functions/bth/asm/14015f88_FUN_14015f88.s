; FUN_14015f88 @ 0x14015f88 size=1316
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  ldr r4,[0x14015fc8]
  sub sp,#0x2c
  ldr r4,[r4,#0x0]
  str r4,[sp,#0x24]
  mov.w r4,#0x0
  movs r4,#0x0
  cmp r3,#0x0
  strd r4,r4,[sp,#0x14]
  strd r4,r4,[sp,#0x1c]
  str r3,[sp,#0x8]
  ble.w 0x14016478
  cmp r1,#0x0
  beq.w 0x14016482
  cmp r2,#0x0
  beq.w 0x14016482
  mov r11,r4
  subs r3,r1,#0x2
  str r3,[sp,#0xc]
  ldr.w r9,[0x14015fcc]
  subs r3,r2,#0x2
  str r3,[sp,#0x4]
  b 0x14015fd0
  mov.w r10,#0x4d00
  ldrd r1,r12,[r0,#0x14]
  mov.w r5,#0x5400
  mov.w r4,#0x1800
  sub.w r1,r12,r1
  smull r7,lr,r1,r10
  ldr r3,[sp,#0xc]
  ldr r2,[r0,#0x10]
  ldrsh.w r6,[r3,#0x2]!
  lsrs r7,r7,#0xe
  str r3,[sp,#0xc]
  orr.w r7,r7,lr, lsl #0x12
  subs r3,r2,r6
  sub.w r7,r7,r12
  smull r12,r8,r3,r5
  subs r1,r7,r1
  lsr.w r12,r12,#0xe
  sub.w lr,r1,r6
  orr.w r12,r12,r8, lsl #0x12
  sub.w r12,r12,r2
  smull r2,r8,lr,r4
  lsrs r2,r2,#0xe
  orr.w r2,r2,r8, lsl #0x12
  subs r2,r2,r1
  sub.w r3,r12,r3
  sub.w lr,r2,lr
  add r3,lr
  add.w r3,r3,r3, lsr #0x1f
  asrs r1,r3,#0x1
  ssat r1,#0xf,r1
  sub.w lr,r12,r6
  smull r3,r5,lr,r5
  lsrs r3,r3,#0xe
  subs r2,r7,r2
  orr.w r3,r3,r5, lsl #0x12
  sub.w r5,r3,r12
  smull r3,r12,r2,r10
  lsrs r3,r3,#0xe
  orr.w r3,r3,r12, lsl #0x12
  subs r7,r3,r7
  subs r2,r7,r2
  subs r6,r2,r6
  smull r3,r4,r6,r4
  lsrs r3,r3,#0xe
  orr.w r3,r3,r4, lsl #0x12
  subs r2,r3,r2
  sub.w lr,r5,lr
  subs r6,r2,r6
  add lr,r6
  add.w lr,lr,lr, lsr #0x1f
  asr.w r3,lr, asr #0x1
  ssat r3,#0xf,r3
  strd r5,r2,[r0,#0x10]
  ldrd r4,r6,[r0,#0x20]
  mov.w r2,#0x6000
  subs r4,r6,r4
  str r7,[r0,#0x18]
  smull r7,r12,r4,r2
  lsrs r7,r7,#0xe
  orr.w r7,r7,r12, lsl #0x12
  subs r7,r7,r6
  sxth r1,r1
  subs r4,r7,r4
  sub.w r12,r4,r1
  asr.w r6,r12, asr #0x1f
  ldr.w lr,[r0,#0x1c]
  lsls r6,r6,#0xd
  orr.w r6,r6,r12, lsr #0x13
  ubfx r8,r12,#0x1,#0x12
  sub.w r5,lr,r1
  orr.w r8,r8,r6, lsl #0x12
  sub.w r4,r8,r4
  smull r6,r8,r5,r2
  lsrs r6,r6,#0xe
  orr.w r6,r6,r8, lsl #0x12
  sub.w r6,r6,lr
  sub.w r12,r4,r12
  subs r5,r6,r5
  add r12,r5
  add.w r12,r12,r12, lsr #0x1f
  asr.w r8,r12, asr #0x1
  ssat r8,#0xf,r8
  subs r4,r7,r4
  smull r5,lr,r4,r2
  lsrs r5,r5,#0xe
  orr.w r5,r5,lr, lsl #0x12
  subs r5,r5,r7
  subs r4,r5,r4
  sub.w r12,r6,r1
  subs r1,r4,r1
  asrs r7,r1,#0x1f
  lsls r7,r7,#0xd
  orr.w r7,r7,r1, lsr #0x13
  ubfx lr,r1,#0x1,#0x12
  orr.w lr,lr,r7, lsl #0x12
  sub.w r4,lr,r4
  smull r7,lr,r12,r2
  lsrs r7,r7,#0xe
  orr.w r7,r7,lr, lsl #0x12
  subs r7,r7,r6
  subs r1,r4,r1
  sub.w r12,r7,r12
  add r1,r12
  add.w r1,r1,r1, lsr #0x1f
  asr.w r10,r1, asr #0x1
  ssat r10,#0xf,r10
  subs r1,r5,r4
  smull r6,r12,r1,r2
  lsrs r6,r6,#0xe
  orr.w r6,r6,r12, lsl #0x12
  subs r6,r6,r5
  sxth r3,r3
  subs r1,r6,r1
  sub.w r12,r1,r3
  asr.w r5,r12, asr #0x1f
  lsls r5,r5,#0xd
  orr.w r5,r5,r12, lsr #0x13
  ubfx lr,r12,#0x1,#0x12
  subs r4,r7,r3
  orr.w lr,lr,r5, lsl #0x12
  sub.w r1,lr,r1
  smull r5,lr,r4,r2
  lsrs r5,r5,#0xe
  orr.w r5,r5,lr, lsl #0x12
  subs r5,r5,r7
  sub.w r12,r1,r12
  subs r4,r5,r4
  add r4,r12
  add.w r4,r4,r4, lsr #0x1f
  asr.w lr,r4, asr #0x1
  ssat lr,#0xf,lr
  subs r1,r6,r1
  smull r7,r12,r1,r2
  lsrs r7,r7,#0xe
  subs r4,r5,r3
  orr.w r7,r7,r12, lsl #0x12
  subs r6,r7,r6
  smull r2,r7,r4,r2
  subs r1,r6,r1
  subs r3,r1,r3
  lsrs r2,r2,#0xe
  orr.w r2,r2,r7, lsl #0x12
  asrs r7,r3,#0x1f
  lsls r7,r7,#0xd
  subs r5,r2,r5
  orr.w r7,r7,r3, lsr #0x13
  ubfx r2,r3,#0x1,#0x12
  orr.w r2,r2,r7, lsl #0x12
  subs r1,r2,r1
  subs r4,r5,r4
  subs r3,r1,r3
  add r4,r3
  add.w r4,r4,r4, lsr #0x1f
  asrs r7,r4,#0x1
  ssat r7,#0xf,r7
  ldr r3,[r0,#0x30]
  sxth.w r8,r8
  rsbs r3,r3
  sub.w r2,r3,r8
  asrs r4,r2,#0x1f
  lsls r4,r4,#0xd
  strd r5,r1,[r0,#0x1c]
  orr.w r4,r4,r2, lsr #0x13
  ubfx r1,r2,#0x1,#0x12
  orr.w r1,r1,r4, lsl #0x12
  subs r1,r1,r3
  ldr r3,[r0,#0x28]
  subs r2,r1,r2
  subs r3,r2,r3
  add.w r3,r3,r3, lsr #0x1f
  asrs r2,r3,#0x1
  ldr r3,[r0,#0x2c]
  str r6,[r0,#0x24]
  rsbs r3,r3
  rsb.w r5,r8,#0x0
  ssat r2,#0xf,r2
  rsbs r4,r3
  sub.w r3,r4,r8
  asrs r6,r3,#0x1f
  lsls r6,r6,#0xd
  orr.w r6,r6,r3, lsr #0x13
  strh.w r2,[sp,#0x14]
  ubfx r2,r3,#0x1,#0x12
  orr.w r2,r2,r6, lsl #0x12
  subs r2,r2,r4
  subs r3,r2,r3
  mov r8,r5
  subs r5,r3,r5
  add.w r5,r5,r5, lsr #0x1f
  rsbs r1,r1
  asrs r3,r5,#0x1
  ssat r3,#0xf,r3
  rsbs r1,r1
  sxth.w r10,r10
  strh.w r3,[sp,#0x16]
  sub.w r3,r1,r10
  asrs r5,r3,#0x1f
  lsls r5,r5,#0xd
  orr.w r5,r5,r3, lsr #0x13
  rsbs r4,r2
  ubfx r2,r3,#0x1,#0x12
  orr.w r2,r2,r5, lsl #0x12
  subs r2,r2,r1
  subs r3,r2,r3
  sub.w r8,r3,r8
  add.w r8,r8,r8, lsr #0x1f
  asr.w r3,r8, asr #0x1
  rsb.w r5,r10,#0x0
  ssat r3,#0xf,r3
  rsbs r4,r4
  strh.w r3,[sp,#0x18]
  sub.w r3,r4,r10
  asr.w r12,r3, asr #0x1f
  lsl.w r12,r12,#0xd
  orr.w r12,r12,r3, lsr #0x13
  rsbs r6,r2
  ubfx r2,r3,#0x1,#0x12
  orr.w r2,r2,r12, lsl #0x12
  subs r4,r2,r4
  subs r3,r4,r3
  mov r1,r5
  subs r5,r3,r5
  add.w r5,r5,r5, lsr #0x1f
  asrs r3,r5,#0x1
  ssat r3,#0xf,r3
  rsbs r2,r6
  sxth.w r5,lr
  strh.w r3,[sp,#0x1a]
  rsbs r3,r4
  subs r4,r2,r5
  asrs r6,r4,#0x1f
  lsls r6,r6,#0xd
  orr.w r6,r6,r4, lsr #0x13
  ubfx r12,r4,#0x1,#0x12
  orr.w r12,r12,r6, lsl #0x12
  sub.w r2,r12,r2
  subs r4,r2,r4
  subs r1,r4,r1
  add.w r1,r1,r1, lsr #0x1f
  asrs r1,r1,#0x1
  rsbs r4,r5
  ssat r1,#0xf,r1
  strh.w r1,[sp,#0x1c]
  rsbs r1,r3
  subs r3,r1,r5
  asrs r6,r3,#0x1f
  lsls r6,r6,#0xd
  orr.w r6,r6,r3, lsr #0x13
  ubfx r12,r3,#0x1,#0x12
  orr.w r12,r12,r6, lsl #0x12
  sub.w r1,r12,r1
  subs r3,r1,r3
  subs r3,r3,r4
  add.w r3,r3,r3, lsr #0x1f
  rsbs r2,r2
  mov r5,r4
  asrs r3,r3,#0x1
  ssat r3,#0xf,r3
  sxth r4,r7
  rsbs r2,r2
  strh.w r3,[sp,#0x1e]
  subs r3,r2,r4
  asrs r6,r3,#0x1f
  lsls r6,r6,#0xd
  orr.w r6,r6,r3, lsr #0x13
  ubfx r7,r3,#0x1,#0x12
  orr.w r7,r7,r6, lsl #0x12
  subs r2,r7,r2
  subs r3,r2,r3
  subs r3,r3,r5
  add.w r3,r3,r3, lsr #0x1f
  rsbs r1,r1
  asrs r3,r3,#0x1
  rsbs r5,r4
  ssat r3,#0xf,r3
  rsbs r1,r1
  strh.w r3,[sp,#0x20]
  subs r3,r1,r4
  asrs r6,r3,#0x1f
  lsls r6,r6,#0xd
  orr.w r6,r6,r3, lsr #0x13
  ubfx r7,r3,#0x1,#0x12
  orr.w r7,r7,r6, lsl #0x12
  subs r1,r7,r1
  subs r3,r1,r3
  subs r3,r3,r5
  add.w r3,r3,r3, lsr #0x1f
  rsbs r2,r2
  asrs r3,r3,#0x1
  ssat r3,#0xf,r3
  movs r4,#0x0
  mov.w r10,#0x140000
  mov.w r8,#0x1
  mov r7,r4
  strh.w r3,[sp,#0x22]
  ldr r6,[r0,#0xc]
  ldrh r3,[r0,#0x0]
  add.w r12,sp,#0x12
  strd r5,r1,[r0,#0x28]
  str r2,[r0,#0x30]
  ldrd r2,r1,[r0,#0x4]
  ldrsh.w r5,[r12,#0x2]!
  lsls r3,r3,#0x1
  cmp.w r2,r5, lsl #0xa
  lsr.w r4,r4,#0x1
  uxth r3,r3
  lsl.w lr,r5,#0xa
  ble 0x14016384
  orr.w r4,r4,r9
  uxth r4,r4
  orr r3,r3,#0x1
  ands r5,r3,#0xf
  beq 0x140163de
  cmp r5,#0xf
  beq 0x140163de
  sub.w r1,r1,r1, asr #0xa
  cmp.w r1,#0x2800
  it lt
  mov.lt.w r1,#0x2800
  str r1,[r0,#0x8]
  cbnz r6,0x140163f4
  adds r7,#0x1
  cmp r7,#0x8
  mov r2,r6
  str r6,[r0,#0x4]
  str.w r8,[r0,#0xc]
  mov.w r6,#0x1
  bne 0x14016364
  strh r3,[r0,#0x0]
  ldr r3,[sp,#0x4]
  add.w r11,r11,#0x1
  strh r4,[r3,#0x2]!
  str r3,[sp,#0x4]
  ldr r3,[sp,#0x8]
  cmp r11,r3
  bne.w 0x14015fd0
  ldr r3,[0x140164b8]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x24]
  eors r2,r3
  mov.w r3,#0x0
  bne 0x1401647e
  movs r0,#0x1
  add sp,#0x2c
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  add.w r1,r1,#0x2800
  cmp.w r1,#0x140000
  ble 0x1401639c
  mov.w r1,#0x140000
  str.w r10,[r0,#0x8]
  cmp r6,#0x0
  beq 0x140163a0
  cmp lr,r2
  blt 0x14016466
  ldr r5,[0x140164bc]
  add r2,r1
  cmp r2,r5
  ble 0x14016472
  ldr r2,[0x140164c0]
  cmp r7,#0x7
  str r2,[r0,#0x4]
  beq 0x140163b2
  mov.w r6,#0x140000
  mov.w lr,#0x2800
  add r5,sp,#0x14
  add.w r7,r5,r7, lsl #0x1
  add.w r8,sp,#0x22
  ldrsh.w r5,[r7,#0x2]!
  lsls r3,r3,#0x1
  cmp.w r2,r5, lsl #0xa
  lsr.w r4,r4,#0x1
  uxth r3,r3
  lsl.w r12,r5,#0xa
  ble 0x1401643a
  orr.w r4,r4,r9
  uxth r4,r4
  orr r3,r3,#0x1
  ands r5,r3,#0xf
  bne 0x14016488
  add.w r1,r1,#0x2800
  cmp.w r1,#0x140000
  ble 0x140164a0
  mov.w r1,#0x140000
  str r6,[r0,#0x8]
  cmp r12,r2
  blt 0x140164a4
  ldr r5,[0x140164bc]
  add r2,r1
  cmp r2,r5
  ble 0x140164b0
  ldr r2,[0x140164c0]
  cmp r7,r8
  str r2,[r0,#0x4]
  bne 0x1401641a
  b 0x140163b2
  subs r2,r2,r1
  cmp.w r2,#0xfe000000
  bge 0x14016472
  ldr r2,[0x140164c4]
  b 0x14016402
  sub.w r2,r2,r2, asr #0x5
  b 0x14016402
  ldr r0,[0x140164c8]
  bl 0x1401d010
  bl 0x1401cfd0
  ldr r0,[0x140164cc]
  bl 0x1401d010
  cmp r5,#0xf
  beq 0x14016440
  sub.w r1,r1,r1, asr #0xa
  cmp.w r1,#0x2800
  bge 0x140164a0
  mov.w r1,#0x2800
  str.w lr,[r0,#0x8]
  b 0x14016450
  str r1,[r0,#0x8]
  b 0x14016450
  subs r2,r2,r1
  cmp.w r2,#0xfe000000
  bge 0x140164b0
  ldr r2,[0x140164c4]
  b 0x1401645e
  sub.w r2,r2,r2, asr #0x5
  b 0x1401645e
