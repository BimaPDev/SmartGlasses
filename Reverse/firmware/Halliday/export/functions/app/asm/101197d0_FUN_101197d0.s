; FUN_101197d0 @ 0x101197d0 size=280
  push {r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
  mov r4,r1
  mov r6,r0
  mov r1,r2
  mov r10,r2
  mov r0,r4
  bl 0x1013d7a2
  subs r5,r0,#0x0
  bne 0x10119808
  mov r1,r5
  mov r0,r6
  bl 0x10119374
  cbnz r0,0x101197fe
  ldr r3,[0x101198e8]
  mov r2,r0
  movw r1,#0x232
  ldr r0,[0x101198ec]
  bl 0x10117c88
  movs r3,#0x1
  strd r3,r5,[r0,#0x10]
  pop.w {r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
  itt ge
  mov.ge r3,r10
  mov.ge r10,r4
  mov r0,r6
  it ge
  mov.ge r5,#0x0
  ldr.w r1,[r10,#0x4]
  ite ge
  mov.ge r4,r3
  mov.lt r5,#0x1
  bl 0x10119374
  cbnz r0,0x1011982e
  ldr r3,[0x101198e8]
  mov r2,r0
  mov.w r1,#0x240
  b 0x101197f8
  ldr.w r7,[r10,#0x10]
  add.w r9,r4,#0x14
  ldr r6,[r4,#0x10]
  add.w r8,r0,#0x14
  str r5,[r0,#0xc]
  add.w r5,r10,#0x14
  add.w r2,r10,#0x10
  add.w r6,r9,r6, lsl #0x2
  add.w lr,r5,r7, lsl #0x2
  mov r10,r8
  mov.w r12,#0x0
  ldr.w r11,[r2,#0x4]!
  ldr.w r3,[r9],#0x4
  uxth.w r1,r11
  cmp r6,r9
  add r1,r12
  uxth.w r12,r3
  lsr.w r3,r3,#0x10
  sub.w r1,r1,r12
  rsb r3,r3,r11, lsr #0x10
  add.w r3,r3,r1, asr #0x10
  uxth r1,r1
  asr.w r12,r3, asr #0x10
  orr.w r3,r1,r3, lsl #0x10
  str.w r3,[r10],#0x4
  bhi 0x10119854
  subs r3,r6,r4
  adds r4,#0x15
  subs r3,#0x15
  bic r3,r3,#0x3
  adds r3,#0x4
  cmp r6,r4
  it cc
  mov.cc r3,#0x4
  add r5,r3
  add r3,r8
  mov r4,r5
  mov r6,r3
  cmp r4,lr
  bcc 0x101198c4
  add.w r2,lr,#0x3
  subs r2,r2,r5
  subs r5,#0x3
  bic r2,r2,#0x3
  cmp lr,r5
  it cc
  mov.cc r2,#0x0
  add r2,r3
  ldr.w r3,[r2,#-0x4]!
  cbz r3,0x101198e4
  str r7,[r0,#0x10]
  b 0x10119804
  ldr.w r8,[r4],#0x4
  uxth.w r2,r8
  add r2,r12
  asrs r1,r2,#0x10
  uxth r2,r2
  add.w r1,r1,r8, lsr #0x10
  orr.w r2,r2,r1, lsl #0x10
  asr.w r12,r1, asr #0x10
  str.w r2,[r6],#0x4
  b 0x101198a2
  subs r7,#0x1
  b 0x101198ba
