; FUN_140dfd78 @ 0x140dfd78 size=162
  ldr r3,[r0,#0x10]
  asrs r2,r1,#0x5
  cmp.w r3,r1, asr #0x5
  push {r4,r5,r6,r7,r8,r9,lr}
  add.w r4,r0,#0x14
  ble 0x140dfe16
  ands r1,r1,#0x1f
  add.w r6,r4,r3, lsl #0x2
  add.w r5,r4,r2, lsl #0x2
  bne 0x140dfdb2
  add.w r7,r0,#0x10
  mov r1,r5
  cmp r1,r6
  bcc 0x140dfe0c
  subs r3,r3,r2
  subs r2,r5,#0x3
  lsls r3,r3,#0x2
  cmp r6,r2
  it cc
  mov.cc r3,#0x0
  add r3,r4
  b 0x140dfdde
  ldr.w r7,[r4,r2,lsl #0x2]
  rsb.w r8,r1,#0x20
  add.w lr,r5,#0x4
  mov r9,r4
  lsrs r7,r1
  cmp r6,lr
  mov r12,lr
  bhi 0x140dfdf4
  subs r2,r3,r2
  adds r5,#0x1
  lsls r2,r2,#0x2
  subs r2,#0x4
  cmp r6,r5
  it cc
  mov.cc r2,#0x0
  adds r3,r4,r2
  str r7,[r4,r2]
  cbz r7,0x140dfdde
  adds r3,#0x4
  subs r2,r3,r4
  cmp r3,r4
  asr.w r2,r2, asr #0x2
  it eq
  mov.eq r3,#0x0
  str r2,[r0,#0x10]
  it eq
  str.eq r3,[r0,#0x14]
  pop.w {r4,r5,r6,r7,r8,r9,pc}
  ldr.w r12,[r12,#0x0]
  lsl.w r12,r12,r8
  orr.w r7,r12,r7
  str.w r7,[r9],#0x4
  ldr.w r7,[lr],#0x4
  lsrs r7,r1
  b 0x140dfdc2
  ldr.w r12,[r1],#0x4
  str.w r12,[r7,#0x4]!
  b 0x140dfd9e
  mov r3,r4
  b 0x140dfdde
