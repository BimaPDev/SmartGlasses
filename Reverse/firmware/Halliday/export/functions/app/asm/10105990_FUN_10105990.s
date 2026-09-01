; FUN_10105990 @ 0x10105990 size=156
  push {r4,r5,r6,r7}
  ldr.w r4,[r0,#0x2e0]
  cmp r4,r1
  bls 0x101059e0
  ldrsh.w r3,[r0,#0xd2]
  mov r6,r0
  cbnz r3,0x101059ea
  ldr.w r3,[r0,#0x2e4]
  add.w r7,r3,r1, lsl #0x1
  ldrb.w r12,[r3,r1,lsl #0x1]
  ldrb r0,[r7,#0x1]
  add.w r3,r3,r4, lsl #0x1
  adds r5,r7,#0x4
  cmp r5,r3
  orr.w r0,r0,r12, lsl #0x8
  itee hi
  mov.hi r3,r0
  ldrb.ls r5,[r7,#0x2]
  ldrb.ls r3,[r7,#0x3]
  lsl.w r0,r0,#0x1
  it ls
  orr.ls.w r3,r3,r5, lsl #0x8
  lsls r5,r3,#0x1
  ldr.w r3,[r6,#0x2cc]
  cmp r3,r0
  bcs 0x10105a0e
  pop {r4,r5,r6,r7}
  movs r0,#0x0
  str r0,[r2,#0x0]
  bx lr
  movs r3,#0x0
  mov r0,r3
  pop {r4,r5,r6,r7}
  str r3,[r2,#0x0]
  bx lr
  ldr.w r3,[r0,#0x2e4]
  add.w r7,r3,r1, lsl #0x2
  mov r5,r7
  ldr.w r0,[r5],#0x8
  add.w r3,r3,r4, lsl #0x2
  cmp r5,r3
  rev r0,r0
  bhi 0x10105a28
  ldr r3,[r7,#0x4]
  rev r5,r3
  ldr.w r3,[r6,#0x2cc]
  cmp r3,r0
  bcc 0x101059d8
  cmp r3,r5
  bcs 0x10105a1c
  subs r4,#0x2
  cmp r4,r1
  bne 0x101059d8
  subs r3,r3,r0
  b 0x101059e4
  cmp r0,r5
  it ls
  sub.ls r3,r5,r0
  bls 0x101059e4
  subs r3,r3,r0
  b 0x101059e4
  mov r5,r0
  b 0x101059d0
