; FUN_1012bf96 @ 0x1012bf96 size=118
  push {r3,r4,r5,r6,r7,lr}
  ldrb.w r3,[r0,#0x32]
  mov r4,r0
  lsls r3,r3,#0x1f
  bpl 0x1012c00a
  movs r3,#0x7
  ldrh r2,[r0,#0x2c]
  ldrh r5,[r0,#0x2e]
  udiv r2,r2,r3
  udiv r3,r5,r2
  mls r3,r2,r3,r5
  add.w r1,r2,r2, lsl #0x1
  sxth r1,r1
  add r3,r1
  uxth r3,r3
  udiv r5,r3,r2
  strh r3,[r0,#0x2e]
  mls r3,r2,r5,r3
  add r1,r3
  strh r1,[r0,#0x30]
  movs r1,#0x0
  bl 0x1012bee0
  mov r5,r0
  mov r0,r4
  bl 0x1012bf2a
  mov r6,r0
  mov r0,r4
  ldr r7,[r5,#0x8]
  bl 0x101257c8
  mov r5,r0
  mov r0,r4
  bl 0x1012beea
  add.w r1,r7,r7, lsr #0x1f
  asrs r1,r1,#0x1
  add.w r5,r5,r5, lsr #0x1f
  rsb r5,r1,r5, asr #0x1
  ldrh r1,[r4,#0x2e]
  add r6,r7
  mls r1,r6,r1,r5
  pop.w {r3,r4,r5,r6,r7,lr}
  b.w 0x101255fc
  pop {r3,r4,r5,r6,r7,pc}
