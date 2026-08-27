; FUN_2c5da2f8 @ 0x2c5da2f8 size=254
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  mov r8,r3
  subs r3,r2,#0x1
  mov r4,r0
  vpush {d8}
  sub sp,#0x14
  str r3,[sp,#0xc]
  it mi
  mov.mi r3,r2
  asrs r0,r3,#0x1
  cmp.w r1,r3, asr #0x1
  str r0,[sp,#0x0]
  strd r1,r2,[sp,#0x4]
  bge 0x2c5da3e8
  vmov s16,r8
  mov r8,r1
  add.w r10,r8,#0x1
  lsl.w r5,r10,#0x1
  ldr.w r0,[r4,r10,lsl #0x3]
  add.w r10,r4,r10, lsl #0x3
  subs r7,r5,#0x1
  ldr.w r9,[r4,r7,lsl #0x2]
  bl 0x2c5d8bd8
  mov r6,r0
  add.w r11,r4,r7, lsl #0x2
  mov r0,r9
  bl 0x2c5d8bd8
  cmp r6,r0
  bcs 0x2c5da350
  mov r5,r7
  mov r10,r11
  ldr.w r3,[r10,#0x0]
  str.w r3,[r4,r8,lsl #0x2]
  mov r8,r5
  ldr r3,[sp,#0x0]
  cmp r5,r3
  blt 0x2c5da322
  ldr r3,[sp,#0x8]
  vmov r8,s16
  lsls r2,r3,#0x1f
  bpl 0x2c5da3c6
  subs r6,r5,#0x1
  ldr r3,[sp,#0x4]
  it mi
  mov.mi r6,r5
  cmp r5,r3
  asr.w r6,r6, asr #0x1
  ble 0x2c5da3b2
  mov r9,r3
  b 0x2c5da396
  ldr.w r2,[r4,r6,lsl #0x2]
  subs r3,r6,#0x1
  str.w r2,[r4,r5,lsl #0x2]
  mov r5,r6
  it mi
  mov.mi r3,r6
  cmp r9,r5
  asr.w r6,r3, asr #0x1
  bge 0x2c5da3b2
  ldr.w r0,[r4,r6,lsl #0x2]
  add.w r10,r4,r6, lsl #0x2
  bl 0x2c5d8bd8
  mov r7,r0
  mov r0,r8
  bl 0x2c5d8bd8
  cmp r7,r0
  bcc 0x2c5da37e
  add.w r10,r4,r5, lsl #0x2
  str.w r8,[r10,#0x0]
  add sp,#0x14
  vpop {d8}
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  ldr r5,[sp,#0x4]
  add.w r10,r4,r5, lsl #0x2
  ldr r3,[sp,#0x8]
  ldr r2,[sp,#0xc]
  subs r3,#0x2
  it mi
  mov.mi r3,r2
  cmp.w r5,r3, asr #0x1
  bne 0x2c5da36a
  lsls r5,r5,#0x1
  adds r5,#0x1
  ldr.w r2,[r4,r5,lsl #0x2]
  str.w r2,[r10,#0x0]
  add.w r10,r4,r5, lsl #0x2
  b 0x2c5da36a
  ldr r3,[sp,#0x8]
  lsls r3,r3,#0x1f
  bpl 0x2c5da3c0
  ldr r3,[sp,#0x4]
  add.w r10,r4,r3, lsl #0x2
  b 0x2c5da3b2
