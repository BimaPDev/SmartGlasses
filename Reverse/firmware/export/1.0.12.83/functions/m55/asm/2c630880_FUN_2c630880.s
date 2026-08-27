; FUN_2c630880 @ 0x2c630880 size=140
  push {r3,r4,r5,r6,r7,lr}
  ldr r3,[0x2c63090c]
  mov r4,r0
  ldrh r2,[r0,#0x24]
  umull r1,r3,r3,r2
  subs r2,r2,r3
  add.w r3,r3,r2, lsr #0x1
  ldrh r2,[r0,#0x26]
  ubfx r3,r3,#0x2,#0x10
  udiv r5,r2,r3
  add.w r1,r3,r3, lsl #0x1
  mls r2,r3,r5,r2
  uxth r1,r1
  add r2,r1
  uxth r2,r2
  udiv r5,r2,r3
  mls r3,r3,r5,r2
  strh r2,[r0,#0x26]
  movs r2,#0x57
  add r3,r1
  movs r1,#0x0
  strh r3,[r0,#0x28]
  bl 0x2c6033b4
  movs r2,#0x59
  mov r5,r0
  movs r1,#0x0
  mov r0,r4
  bl 0x2c6033b4
  mov r7,r0
  mov r0,r4
  ldrsh.w r6,[r5,#0x8]
  bl 0x2c607440
  mov r5,r0
  movs r1,#0x0
  mov r0,r4
  bl 0x2c6041dc
  cmp r5,#0x0
  sxth r7,r7
  ldrh r1,[r4,#0x26]
  it lt
  add.lt r5,#0x1
  add r7,r6
  cmp r6,#0x0
  asr.w r5,r5, asr #0x1
  smulbb r1,r1,r7
  it lt
  add.lt r6,#0x1
  add.w r6,r1,r6, asr #0x1
  subs r5,r5,r6
  sxth r1,r5
  pop.w {r3,r4,r5,r6,r7,lr}
  b.w 0x2c606ff8
