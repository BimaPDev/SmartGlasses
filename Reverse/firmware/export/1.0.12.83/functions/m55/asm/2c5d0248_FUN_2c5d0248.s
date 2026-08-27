; FUN_2c5d0248 @ 0x2c5d0248 size=208
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  subs.w r10,r2,#0x1
  sub sp,#0xc
  ite pl
  mov.pl r4,r10
  mov.mi r4,r2
  cmp.w r1,r4, asr #0x1
  bge 0x2c5d02ec
  asr.w r9,r4, asr #0x1
  mov r6,r1
  mov r5,r1
  mov r11,r3
  str r2,[sp,#0x4]
  add.w lr,r6,#0x1
  lsl.w r12,lr,#0x1
  ldr.w r1,[r0,lr,lsl #0x3]
  add.w lr,r0,lr, lsl #0x3
  add.w r4,r12,#0xffffffff
  ldr r7,[r1,#0x0]
  ldr.w r3,[r0,r4,lsl #0x2]
  add.w r8,r0,r4, lsl #0x2
  ldr r2,[r3,#0x0]
  cmp r7,r2
  bcs 0x2c5d0294
  mov r12,r4
  mov r1,r3
  mov lr,r8
  cmp r12,r9
  str.w r1,[r0,r6,lsl #0x2]
  mov r6,r12
  blt 0x2c5d026a
  ldr r2,[sp,#0x4]
  mov r1,r5
  mov r3,r11
  lsls r5,r2,#0x1f
  bpl 0x2c5d02f6
  subs.w r2,r12,#0x1
  it mi
  mov.mi r2,r12
  cmp r12,r1
  asr.w r2,r2, asr #0x1
  bgt 0x2c5d02ce
  b 0x2c5d02e2
  subs r4,r2,#0x1
  str.w r5,[r0,r12,lsl #0x2]
  mov r12,r2
  it mi
  mov.mi r4,r2
  cmp r1,r12
  asr.w r2,r4, asr #0x1
  bge 0x2c5d02e2
  ldr.w r5,[r0,r2,lsl #0x2]
  add.w lr,r0,r2, lsl #0x2
  ldr r4,[r3,#0x0]
  ldr r6,[r5,#0x0]
  cmp r6,r4
  bcc 0x2c5d02ba
  add.w lr,r0,r12, lsl #0x2
  str.w r3,[lr,#0x0]
  add sp,#0xc
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  lsls r4,r2,#0x1f
  add.w lr,r0,r1, lsl #0x2
  bmi 0x2c5d02e2
  mov r12,r1
  subs r2,#0x2
  it mi
  mov.mi r2,r10
  cmp.w r12,r2, asr #0x1
  bne 0x2c5d02a8
  lsl.w r12,r12,#0x1
  add.w r12,r12,#0x1
  ldr.w r2,[r0,r12,lsl #0x2]
  str.w r2,[lr,#0x0]
  add.w lr,r0,r12, lsl #0x2
  b 0x2c5d02a8
