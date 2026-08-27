; FUN_2c488024 @ 0x2c488024 size=120
  push {r4,r5,r6,r7,r8,lr}
  sub sp,#0x20
  bl 0x2c48a2b8
  str r0,[sp,#0x1c]
  bl 0x2c48a2c4
  str r0,[sp,#0x18]
  bl 0x2c48a408
  mov r4,r0
  bl 0x2c48a40c
  mov r5,r0
  bl 0x2c48a410
  mov r6,r0
  bl 0x2c48a414
  mov r8,r0
  bl 0x2c49b8e8
  mov r7,r0
  bl 0x2c48a418
  eor.w lr,r4,r4, asr #0x1f
  ldr r3,[0x2c48809c]
  str r5,[sp,#0x4]
  sub.w lr,lr,r4, asr #0x1f
  str r0,[sp,#0x10]
  str.w r8,[sp,#0xc]
  umull r3,r12,r3,lr
  ldr r0,[0x2c4880a0]
  str r7,[sp,#0x14]
  lsr.w r12,r12,#0x3
  str r6,[sp,#0x8]
  add.w r12,r12,r12, lsl #0x2
  sub.w r3,lr,r12, lsl #0x1
  str r3,[sp,#0x0]
  ldr r3,[0x2c4880a4]
  smull r5,r3,r3,r4
  asrs r4,r4,#0x1f
  ldrd r2,r1,[sp,#0x18]
  rsb r3,r4,r3, asr #0x2
  bl 0x2c648680
  add sp,#0x20
  pop.w {r4,r5,r6,r7,r8,pc}
