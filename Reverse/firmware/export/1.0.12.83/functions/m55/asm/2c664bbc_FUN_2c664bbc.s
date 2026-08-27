; FUN_2c664bbc @ 0x2c664bbc size=264
  push {r0,r1,r2,r4,r5,r6,r7,r8,r9,r10,r11,lr}
  ldr r5,[sp,#0x30]
  mov r4,r2
  mov r8,r0
  mov r9,r1
  mov r2,r5
  mov r7,r3
  mov r1,r4
  ldr r3,[0x2c664cc4]
  bl 0x2c6648d0
  mov r2,r8
  ldr.w r3,[r8,#0x4]
  sub.w r11,r5,r4
  ldr.w r6,[r2],#0x8
  add.w r10,r3,r11
  cmp r6,r2
  ite ne
  ldr.ne.w r2,[r8,#0x8]
  mov.eq r2,#0x3
  cmp r2,r10
  bcc 0x2c664cac
  add.w r6,r6,r9, lsl #0x2
  add r9,r4
  mov r1,r7
  mov r0,r8
  sub.w r9,r3,r9
  bl 0x2c6648e8
  cbz r0,0x2c664c2e
  cmp.w r9,#0x0
  beq 0x2c664c20
  cmp r4,r5
  beq 0x2c664c20
  mov r2,r9
  add.w r1,r6,r4, lsl #0x2
  add.w r0,r6,r5, lsl #0x2
  bl 0x2c66491a
  cbz r5,0x2c664c74
  mov r2,r5
  mov r1,r7
  mov r0,r6
  bl 0x2c664902
  b 0x2c664c74
  cbz r5,0x2c664c3e
  cmp r4,r5
  bcc 0x2c664cbc
  mov r2,r5
  mov r1,r7
  mov r0,r6
  bl 0x2c66491a
  cmp.w r9,#0x0
  beq 0x2c664c74
  cmp r4,r5
  beq 0x2c664c74
  mov r2,r9
  add.w r1,r6,r4, lsl #0x2
  add.w r0,r6,r5, lsl #0x2
  bl 0x2c66491a
  cmp r4,r5
  bcs 0x2c664c74
  add.w r4,r6,r4, lsl #0x2
  add.w r3,r7,r5, lsl #0x2
  lsl.w r9,r5,#0x2
  cmp r4,r3
  bcc 0x2c664c84
  mov r2,r5
  mov r1,r7
  mov r0,r6
  bl 0x2c66491a
  mov r0,r8
  mov r1,r10
  bl 0x2c664850
  mov r0,r8
  add sp,#0xc
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  cmp r4,r7
  bhi 0x2c664c90
  mov r2,r5
  add.w r1,r7,r11, lsl #0x2
  b 0x2c664c26
  subs r4,r4,r7
  mov r1,r7
  mov r0,r6
  asr.w r11,r4, asr #0x2
  mov r2,r11
  bl 0x2c66491a
  sub.w r2,r5,r11
  add.w r1,r6,r9
  adds r0,r6,r4
  b 0x2c664c28
  mov r3,r7
  mov r2,r4
  mov r1,r9
  mov r0,r8
  str r5,[sp,#0x0]
  bl 0x2c66499e
  b 0x2c664c74
  cmp.w r9,#0x0
  beq 0x2c664c5a
  b 0x2c664c48
