; FUN_2c4d0c10 @ 0x2c4d0c10 size=212
  cmp r1,#0x0
  mov r12,r0
  push {r4,r5,r6,r7,r8,r9,lr}
  ldr r4,[r2,#0x0]
  ble 0x2c4d0cce
  add.w r7,r0,r1, lsl #0x2
  movs r3,#0x0
  ldr r6,[0x2c4d0ce4]
  ldr r5,[0x2c4d0ce8]
  mla r4,r6,r4,r5
  str.w r4,[r0],#0x4
  cmp r7,r0
  asr.w lr,r4, asr #0x7
  smmla r3,lr,lr,r3
  bne 0x2c4d0c26
  lsls r3,r3,#0x1
  beq 0x2c4d0cc4
  clz r0,r3
  subs r5,r0,#0x1
  ldr r6,[0x2c4d0cec]
  adds r0,#0x1
  lsls r3,r5
  ldr r5,[0x2c4d0cf0]
  and.w r5,r5,r3, lsl #0x8
  ubfx r3,r3,#0x17,#0x7
  adds r7,r3,#0x1
  ldr.w r9,[r6,r7,lsl #0x2]
  ldr.w r7,[r6,r3,lsl #0x2]
  sub.w r8,r9,r7
  smmul lr,r8,r5
  add.w lr,r7,lr, lsl #0x1
  cbnz r5,0x2c4d0ca0
  lsls r3,r0,#0x1f
  bmi 0x2c4d0c94
  asrs r0,r0,#0x1
  subs r1,#0x1
  subs r0,#0x7
  adds r1,#0x1
  add.w r1,r12,r1, lsl #0x2
  ldr.w r3,[r1,#-0x4]!
  smmul r3,r3,lr
  cmp r12,r1
  lsl.w r3,r3,#0x1
  str r3,[r1,#0x0]
  bne 0x2c4d0c7c
  str r4,[r2,#0x0]
  pop.w {r4,r5,r6,r7,r8,r9,pc}
  ldr r3,[0x2c4d0cf4]
  smmul lr,lr,r3
  lsl.w lr,lr,#0x2
  b 0x2c4d0c70
  adds r3,#0x2
  ldr.w r3,[r6,r3,lsl #0x2]
  sub.w r9,r3,r9
  rsb.w r3,r5,#0x80000000
  smmul r5,r5,r3
  lsls r3,r0,#0x1f
  sub.w r8,r8,r9
  lsl.w r5,r5,#0x1
  smmla lr,r5,r8,lr
  bpl 0x2c4d0c70
  b 0x2c4d0c94
  subs r1,#0x1
  mvn lr,#0x80000000
  movs r0,#0x9
  b 0x2c4d0c76
  add.w r1,r1,#0xffffffff
  bne 0x2c4d0cdc
  movs r0,#0x9
  str r4,[r2,#0x0]
  pop.w {r4,r5,r6,r7,r8,r9,pc}
  mvn lr,#0x80000000
  movs r0,#0x9
  b 0x2c4d0c76
