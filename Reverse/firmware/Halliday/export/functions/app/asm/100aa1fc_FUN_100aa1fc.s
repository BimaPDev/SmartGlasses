; FUN_100aa1fc @ 0x100aa1fc size=222
  tst r0,#0x180000
  push {r4,r5,r6,r7,r8,r9,r10,lr}
  ubfx r4,r0,#0x13,#0x2
  it eq
  mov.eq r4,#0x2
  ldr r5,[0x100aa2dc]
  ubfx lr,r0,#0xa,#0x2
  ldrh.w r6,[r5,lr,lsl #0x1]
  it ne
  rsb.ne.w r4,r4,#0x3
  lsrs r6,r4
  beq 0x100aa2d6
  clz r7,r4
  ubfx r5,r0,#0x11,#0x2
  rsb.w r8,r5,#0x4
  lsrs r7,r7,#0x5
  cmp r5,#0x0
  beq 0x100aa2d6
  mov.w r10,#0x2d
  add.w r5,r8,#0xffffffff
  ubfx r9,r0,#0xc,#0x4
  rsb r12,r5,r5, lsl #0x4
  mla r12,r10,r7,r12
  mov r7,r9
  add r7,r12
  ldr.w r12,[0x100aa2e4]
  cmp.w r8,#0x1
  ldrh.w r7,[r12,r7,lsl #0x1]
  beq 0x100aa2aa
  cmp.w r8,#0x3
  bne 0x100aa2b0
  cmp r4,#0x0
  ite ne
  mov.ne.w r12,#0x240
  mov.eq.w r12,#0x480
  add.w r9,r4,r4, lsl #0x1
  add lr,r9
  add.w r5,r5,r5, lsl #0x3
  add r5,lr
  ldr.w lr,[0x100aa2e8]
  cmp.w r8,#0x3
  ldr.w lr,[lr,r5,lsl #0x2]
  ubfx r5,r0,#0x9,#0x1
  bne 0x100aa2b6
  ldr r0,[0x100aa2e0]
  muls r0,r7
  udiv r0,r0,r6
  cbz r4,0x100aa294
  lsrs r0,r0,#0x1
  adds r4,r5,r0
  str r7,[r1,#0x0]
  str r6,[r2,#0x0]
  str.w r12,[r3,#0x0]
  ldr r3,[sp,#0x20]
  uxth r0,r4
  str.w lr,[r3,#0x0]
  pop.w {r4,r5,r6,r7,r8,r9,r10,pc}
  mov.w r12,#0x180
  b 0x100aa26a
  mov.w r12,#0x480
  b 0x100aa26a
  cmp.w r8,#0x2
  bne 0x100aa2c6
  ldr r0,[0x100aa2e0]
  muls r0,r7
  udiv r0,r0,r6
  b 0x100aa294
  movw r4,#0x2ee0
  muls r4,r7
  udiv r4,r4,r6
  add r4,r5
  lsls r4,r4,#0x2
  b 0x100aa296
  movs r0,#0x0
  b 0x100aa2a6
