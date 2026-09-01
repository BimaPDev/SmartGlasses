; FUN_1008f810 @ 0x1008f810 size=248
  push {r0,r1,r4,r5,r6,r7,r8,lr}
  ldrb r3,[r0,#0x2]
  mov r5,r0
  muls r3,r1
  cmp.w r2,r3, asr #0x8
  mov r4,r2
  asr.w r8,r3, asr #0x8
  bgt 0x1008f832
  ldrh r0,[r0,#0x0]
  bl 0x1012848e
  add sp,#0x8
  pop.w {r4,r5,r6,r7,r8,pc}
  ldrb r0,[r0,#0x8]
  subs r2,r0,#0x1
  add.w r3,r5,r2, lsl #0x2
  ldrb r3,[r3,#0x2]
  muls r3,r1
  cmp.w r4,r3, asr #0x8
  bge 0x1008f902
  cmp r0,#0x1
  bhi 0x1008f882
  ldr r3,[0x1008f908]
  mov.w r2,#0x148
  str r3,[sp,#0x4]
  ldr r3,[0x1008f90c]
  movs r0,#0x3
  str r3,[sp,#0x0]
  ldr r1,[0x1008f910]
  ldr r3,[0x1008f914]
  bl 0x10094174
  push {r0,r1,r2,r3}
  mov.w r3,#0x148
  ldr r2,[0x1008f910]
  ldr r1,[0x1008f918]
  ldr r0,[0x1008f91c]
  bl 0x10119dc2
  ldr r0,[0x1008f920]
  bl 0x10119dc2
  pop {r0,r1,r2,r3}
  mov.w r1,#0x148
  ldr r0,[0x1008f910]
  bl 0x1011a1f0
  udf #0xff
  ldrb r3,[r5,#0x6]
  muls r1,r3
  cmp.w r4,r1, asr #0x8
  asr.w r7,r1, asr #0x8
  bgt 0x1008f848
  ldrh r0,[r5,#0x0]
  bl 0x1012848e
  mov r6,r0
  ldrh r0,[r5,#0x4]
  bl 0x1012848e
  subs.w r7,r7,r8
  mov r1,r0
  beq 0x1008f848
  sub.w r4,r4,r8
  rsb r4,r4,r4, lsl #0x8
  sdiv r4,r4,r7
  uxtb r5,r4
  mvns r4,r4
  uxtb r2,r6
  uxtb r3,r4
  muls r2,r3
  uxtb r4,r0
  mla r4,r5,r4,r2
  movw r2,#0x8081
  movs r0,#0x0
  muls r4,r2
  ubfx r7,r6,#0x8,#0x8
  muls r7,r3
  ubfx r6,r6,#0x10,#0x8
  muls r3,r6
  lsrs r4,r4,#0x17
  bfi r0,r4,#0x0,#0x8
  ubfx r4,r1,#0x8,#0x8
  mla r4,r5,r4,r7
  ubfx r1,r1,#0x10,#0x8
  mla r3,r5,r1,r3
  muls r4,r2
  muls r2,r3
  lsrs r4,r4,#0x17
  bfi r0,r4,#0x8,#0x8
  lsrs r2,r2,#0x17
  bfi r0,r2,#0x10,#0x8
  orr r0,r0,#0xff000000
  b 0x1008f82c
  ldrh.w r0,[r5,r2,lsl #0x2]
  b 0x1008f828
