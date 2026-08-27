; FUN_2c021144 @ 0x2c021144 size=1180
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  cmp r3,#0x0
  sub sp,#0x44
  ldr r4,[0x2c0211fc]
  mov r11,r0
  mov.w r0,#0x0
  ldr r4,[r4,#0x0]
  str r4,[sp,#0x3c]
  mov.w r4,#0x0
  str r3,[sp,#0x20]
  strd r0,r0,[sp,#0x2c]
  strd r0,r0,[sp,#0x34]
  ble.w 0x2c0215e2
  cmp r1,#0x0
  beq.w 0x2c0215e2
  clz r3,r2
  lsrs r3,r3,#0x5
  cmp r2,#0x0
  beq.w 0x2c0215e2
  subs r2,#0x2
  subs r1,#0x2
  strd r3,r2,[sp,#0x4]
  ldr.w r3,[r11,#0xc]
  str r1,[sp,#0x24]
  str r3,[sp,#0xc]
  ldr.w r3,[r11,#0x10]
  str r3,[sp,#0x10]
  ldr.w r3,[r11,#0x14]
  mov r10,r3
  ldr r3,[sp,#0x24]
  add r4,sp,#0x2c
  ldrh.w r6,[r11,#0x0]
  mov.w r7,#0x2800
  ldrsh.w r0,[r3,#0x2]!
  str r3,[sp,#0x24]
  ubfx r0,r0,#0x8,#0x10
  ldrd r3,r1,[r11,#0x4]
  and r5,r0,#0x1
  orr.w r2,r5,r6, lsl #0x1
  uxth r6,r2
  ands r2,r2,#0xf
  beq.w 0x2c0215cc
  cmp r2,#0xf
  beq.w 0x2c0215cc
  sub.w r1,r1,r1, asr #0xa
  cmp.w r1,#0x2800
  bge.w 0x2c0215c6
  mov.w r1,#0x2800
  str.w r7,[r11,#0x8]
  cmp r5,#0x0
  bne.w 0x2c0215b0
  add r3,r1
  ldr r2,[0x2c021200]
  cmp r3,r2
  ble.w 0x2c02159a
  ldr r3,[0x2c021204]
  str.w r3,[r11,#0x4]
  lsrs r0,r0,#0x1
  addw r2,r3,#0x266
  b 0x2c021208
  asrs r2,r2,#0xa
  strh r2,[r4],#0x2
  add r2,sp,#0x3c
  cmp r4,r2
  bne 0x2c0211b2
  strh.w r6,[r11,#0x0]
  ldrsh.w r5,[sp,#0x2c]
  ldr.w r0,[r11,#0x24]
  ldrd r4,r6,[r11,#0x28]
  subs r1,r0,r5
  subs r4,r6,r4
  sub.w r12,r1,r0
  subs r6,r4,r6
  sub.w r1,r12,r1
  subs r4,r6,r4
  subs r5,r4,r5
  mov r2,r5
  asrs r3,r5,#0x1f
  orrs.w r3,r2,pc, lsl #0xd
  orrs.w r3,r2,pc, asr #0xe
  subs r2,r2,r4
  subs r5,r2,r5
  adds r5,r1,r5
  it mi
  add.mi r5,#0x1
  asrs r5,r5,#0x1
  ssat r1,#0xf,r5
  subs r4,r6,r2
  ldrsh.w r5,[sp,#0x2e]
  ldrsh.w r7,[sp,#0x30]
  subs r6,r4,r6
  sub.w r0,r12,r5
  subs r4,r6,r4
  sub.w r0,r0,r12
  subs r5,r4,r5
  mov r2,r5
  asrs r3,r5,#0x1f
  subs r5,r0,r7
  orrs.w r3,r2,pc, lsl #0xd
  orrs.w r3,r2,pc, asr #0xe
  subs r4,r2,r4
  sub.w r12,r5,r0
  subs r4,r6,r4
  sub.w r5,r12,r5
  subs r6,r4,r6
  subs r4,r6,r4
  subs r7,r4,r7
  mov r2,r7
  asrs r3,r7,#0x1f
  orrs.w r3,r2,pc, lsl #0xd
  orrs.w r3,r2,pc, asr #0xe
  subs r2,r2,r4
  subs r7,r2,r7
  adds r5,r5,r7
  it mi
  add.mi r5,#0x1
  asrs r5,r5,#0x1
  ssat r3,#0xf,r5
  subs r4,r6,r2
  ldrsh.w r5,[sp,#0x32]
  str r3,[sp,#0x14]
  subs r6,r4,r6
  sub.w r0,r12,r5
  ldrsh.w r7,[sp,#0x34]
  subs r4,r6,r4
  sub.w r0,r0,r12
  subs r5,r4,r5
  mov r2,r5
  asrs r3,r5,#0x1f
  subs r5,r0,r7
  orrs.w r3,r2,pc, lsl #0xd
  orrs.w r3,r2,pc, asr #0xe
  subs r4,r2,r4
  sub.w r12,r5,r0
  subs r4,r6,r4
  sub.w r5,r12,r5
  subs r6,r4,r6
  subs r4,r6,r4
  subs r7,r4,r7
  mov r2,r7
  asrs r3,r7,#0x1f
  orrs.w r3,r2,pc, lsl #0xd
  orrs.w r3,r2,pc, asr #0xe
  subs r2,r2,r4
  subs r7,r2,r7
  adds r5,r5,r7
  it mi
  add.mi r5,#0x1
  asrs r5,r5,#0x1
  ssat r3,#0xf,r5
  subs r4,r6,r2
  ldrsh.w r5,[sp,#0x36]
  str r3,[sp,#0x18]
  subs r6,r4,r6
  sub.w r0,r12,r5
  ldrsh.w r7,[sp,#0x38]
  subs r4,r6,r4
  sub.w r0,r0,r12
  subs r5,r4,r5
  mov r2,r5
  asrs r3,r5,#0x1f
  subs r5,r0,r7
  orrs.w r3,r2,pc, lsl #0xd
  orrs.w r3,r2,pc, asr #0xe
  subs r4,r2,r4
  subs r0,r5,r0
  subs r4,r6,r4
  subs r5,r0,r5
  subs r6,r4,r6
  subs r4,r6,r4
  subs r7,r4,r7
  mov r2,r7
  asrs r3,r7,#0x1f
  orrs.w r3,r2,pc, lsl #0xd
  orrs.w r3,r2,pc, asr #0xe
  subs r2,r2,r4
  subs r7,r2,r7
  adds r5,r5,r7
  it mi
  add.mi r5,#0x1
  asrs r5,r5,#0x1
  ssat r3,#0xf,r5
  str r3,[sp,#0x1c]
  sxth r3,r1
  mov.w r12,#0x6000
  subs r2,r6,r2
  ldrsh.w r9,[sp,#0x3a]
  subs r6,r2,r6
  ldrd r1,r7,[r11,#0x1c]
  subs r2,r6,r2
  str.w r6,[r11,#0x2c]
  subs r1,r7,r1
  sub.w lr,r2,r9
  sub.w r9,r0,r9
  smull r4,r12,r1,r12
  sub.w r0,r9,r0
  mov r5,r12
  str.w r0,[r11,#0x24]
  orrs.w r5,r4,pc, asr #0xe
  sub.w r12,r4,r7
  sub.w r1,r12,r1
  sub.w r8,r1,r3
  mov r4,r8
  asr.w r5,r8, asr #0x1f
  orrs.w r5,r4,pc, lsl #0xd
  orrs.w r5,r4,pc, asr #0xe
  subs r1,r4,r1
  ldr.w r4,[r11,#0x18]
  asr.w r5,lr, asr #0x1f
  subs r3,r4,r3
  mov r4,lr
  sub.w r8,r1,r8
  orrs.w r5,r4,pc, lsl #0xd
  orrs.w r5,r4,pc, asr #0xe
  subs r4,r4,r2
  mov.w r2,#0x6000
  smull r6,r2,r3,r2
  str.w r4,[r11,#0x28]
  mov r7,r2
  ldr.w r2,[r11,#0x18]
  orrs.w r7,r6,pc, asr #0xe
  sub.w lr,r6,r2
  sub.w r3,lr,r3
  adds.w r3,r3,r8
  it mi
  add.mi r3,#0x1
  asrs r3,r3,#0x1
  ssat r8,#0xf,r3
  mov.w r9,#0x6000
  sub.w r1,r12,r1
  ldrsh.w r5,[sp,#0x14]
  smull r2,r0,r1,r9
  ldrsh.w r4,[sp,#0x18]
  mov r3,r0
  orrs.w r3,r2,pc, asr #0xe
  sub.w r2,r2,r12
  subs r3,r2,r1
  sub.w r1,lr,r5
  subs r5,r3,r5
  smull r6,r1,r1,r9
  mov r0,r5
  mov r7,r1
  asrs r1,r5,#0x1f
  orrs.w r7,r6,pc, asr #0xe
  sub.w r6,r6,lr
  orrs.w r1,r0,pc, lsl #0xd
  orrs.w r1,r0,pc, asr #0xe
  subs r0,r0,r3
  subs r3,r2,r0
  smull r0,r5,r3,r9
  mov r1,r5
  orrs.w r1,r0,pc, asr #0xe
  sub.w r12,r0,r2
  subs r1,r6,r4
  sub.w r0,r12,r3
  sub.w lr,r0,r4
  mov r4,lr
  asr.w r5,lr, asr #0x1f
  orrs.w r5,r4,pc, lsl #0xd
  orrs.w r5,r4,pc, asr #0xe
  subs r7,r4,r0
  smull r2,r0,r1,r9
  mov r3,r0
  sub.w r4,r7,lr
  orrs.w r3,r2,pc, asr #0xe
  subs r6,r2,r6
  subs r1,r6,r1
  adds r1,r1,r4
  it mi
  add.mi r1,#0x1
  asrs r1,r1,#0x1
  ssat r3,#0xf,r1
  mov.w r9,#0x6000
  sub.w r7,r12,r7
  ldr r2,[sp,#0x10]
  sxth.w r8,r8
  ldrsh.w r5,[sp,#0x1c]
  sub.w lr,r10,r2
  smull r0,r2,r7,r9
  mov r1,r2
  mov.w r2,#0x4d00
  orrs.w r1,r0,pc, asr #0xe
  sub.w r0,r0,r12
  subs r7,r0,r7
  str.w r0,[r11,#0x20]
  smull r0,r2,lr,r2
  mov r1,r2
  subs r2,r7,r5
  orrs.w r1,r0,pc, asr #0xe
  asrs r1,r2,#0x1f
  sub.w r12,r0,r10
  mov r0,r2
  subs r2,r6,r5
  orrs.w r1,r0,pc, lsl #0xd
  orrs.w r1,r0,pc, asr #0xe
  smull r4,r2,r2,r9
  subs r0,r0,r7
  sub.w lr,r12,lr
  mov r5,r2
  str.w r0,[r11,#0x1c]
  orrs.w r5,r4,pc, asr #0xe
  ldr r5,[sp,#0xc]
  subs r6,r4,r6
  mov.w r4,#0x5400
  sub.w r2,r5,r8
  sub.w r8,lr,r8
  str.w r6,[r11,#0x18]
  smull r0,r4,r2,r4
  mov r1,r4
  orrs.w r1,r0,pc, asr #0xe
  mov.w r1,#0x1800
  subs r0,r0,r5
  smull r4,r1,r8,r1
  subs r2,r0,r2
  mov r5,r1
  orrs.w r5,r4,pc, asr #0xe
  sub.w lr,r4,lr
  sub.w r8,lr,r8
  adds.w r8,r8,r2
  it mi
  add.mi.w r8,r8,#0x1
  asr.w r8,r8, asr #0x1
  ssat r8,#0xf,r8
  mov.w r5,#0x4d00
  ldr r2,[sp,#0x8]
  sub.w lr,r12,lr
  sxth r1,r3
  strh r8,[r2,#0x2]!
  str r2,[sp,#0x8]
  subs r4,r0,r1
  smull r2,r5,lr,r5
  ldr r6,[sp,#0x4]
  mov r3,r5
  mov.w r5,#0x5400
  adds r6,#0x1
  orrs.w r3,r2,pc, asr #0xe
  sub.w r10,r2,r12
  smull r2,r4,r4,r5
  sub.w lr,r10,lr
  str r6,[sp,#0x4]
  mov r3,r4
  str.w r10,[r11,#0x14]
  sub.w r1,lr,r1
  orrs.w r3,r2,pc, asr #0xe
  subs r3,r2,r0
  mov.w r0,#0x1800
  str r3,[sp,#0xc]
  smull r2,r1,r1,r0
  str.w r3,[r11,#0xc]
  mov r3,r1
  orrs.w r3,r2,pc, asr #0xe
  sub.w r3,r2,lr
  str r3,[sp,#0x10]
  str.w r3,[r11,#0x10]
  ldr r3,[sp,#0x20]
  cmp r3,r6
  bne.w 0x2c021198
  ldr r3,[0x2c0215ec]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x3c]
  eors r2,r3
  mov.w r3,#0x0
  bne 0x2c0215e8
  movs r0,#0x1
  add sp,#0x44
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  sub.w r3,r3,r3, asr #0x5
  cmp r3,#0x0
  str.w r3,[r11,#0x4]
  bgt.w 0x2c0211f4
  lsrs r0,r0,#0x1
  subw r2,r3,#0x266
  b 0x2c021208
  subs r3,r3,r1
  cmp.w r3,#0xfe000000
  bge 0x2c02159a
  ldr r3,[0x2c0215f0]
  lsrs r0,r0,#0x1
  subw r2,r3,#0x266
  str.w r3,[r11,#0x4]
  b 0x2c021208
  str.w r1,[r11,#0x8]
  b 0x2c0211de
  add.w r1,r1,#0x2800
  cmp.w r1,#0x140000
  ble 0x2c0215c6
  mov.w r2,#0x140000
  mov r1,r2
  str.w r2,[r11,#0x8]
  b 0x2c0211de
  ldr r0,[0x2c0215f4]
  bl 0x2c00f09c
  bl 0x2c00b2e8
