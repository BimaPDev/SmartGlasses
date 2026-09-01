; FUN_101019e8 @ 0x101019e8 size=258
  push {r4,r5,r6,r7,r8,r9,lr}
  ldr r5,[r0,#0x10]
  mov.w r12,#0x0
  ldr.w r6,[r5,#0x6]
  rev r6,r6
  b 0x10101a12
  ldrb r3,[r7,#0x1]
  ldrb.w lr,[r5,r4]
  lsls r3,r3,#0x8
  ldrb r4,[r7,#0x2]
  orr.w r3,r3,lr, lsl #0x10
  orrs r3,r4
  cmp r2,r3
  it cc
  mov.cc r6,r0
  bcs 0x10101a32
  add.w r0,r6,r12
  lsrs r0,r0,#0x1
  add.w r4,r0,r0, lsl #0x2
  add.w r4,r0,r4, lsl #0x1
  adds r4,#0xa
  cmp r6,r12
  add.w r7,r5,r4
  bhi 0x101019fa
  mov.w r0,#0xffffffff
  pop.w {r4,r5,r6,r7,r8,r9,pc}
  bls 0x10101a3a
  add.w r12,r0,#0x1
  b 0x10101a12
  adds r3,r7,#0x3
  beq 0x10101a2a
  ldr.w r3,[r7,#0x3]
  ldr.w r7,[r7,#0x7]
  rev r6,r3
  rev r7,r7
  cbnz r3,0x10101a86
  cmp r7,#0x0
  beq 0x10101a2a
  ldr r6,[r5,r7]
  add r5,r7
  rev r6,r6
  movs r7,#0x0
  b 0x10101a72
  ldrb r3,[r4,#0x1]
  ldrb.w r12,[r5,r0]
  lsls r3,r3,#0x8
  ldrb r0,[r4,#0x2]
  orr.w r3,r3,r12, lsl #0x10
  orrs r3,r0
  cmp r1,r3
  it cc
  mov.cc r6,r2
  bcs 0x10101ace
  adds r2,r6,r7
  lsrs r2,r2,#0x1
  add.w r0,r2,r2, lsl #0x2
  adds r0,#0x4
  cmp r6,r7
  add.w r4,r5,r0
  bhi 0x10101a5a
  b 0x10101a2a
  ldr r4,[r5,r6]
  mov.w lr,#0x0
  add r6,r5
  rev r4,r4
  b 0x10101ab0
  ldrb r3,[r0,#0x1]
  ldrb.w r9,[r6,r12,lsl #0x2]
  ldrb.w r8,[r0,#0x2]
  lsls r3,r3,#0x8
  orr.w r3,r3,r9, lsl #0x10
  orr.w r3,r3,r8
  cmp r1,r3
  it cc
  mov.cc r4,r2
  ldrb r0,[r0,#0x3]
  bcs 0x10101ac4
  add.w r2,r4,lr
  lsrs r2,r2,#0x1
  add.w r12,r2,#0x1
  cmp r4,lr
  add.w r0,r6,r12, lsl #0x2
  bhi 0x10101a92
  b 0x10101a4c
  add r3,r0
  cmp r1,r3
  bls 0x10101ae6
  mov lr,r12
  b 0x10101ab0
  bls 0x10101ad4
  adds r7,r2,#0x1
  b 0x10101a72
  ldrb r2,[r4,#0x3]
  ldrb r3,[r4,#0x4]
  orrs.w r3,r3,r2, lsl #0x8
  ite eq
  mov.eq.w r0,#0xffffffff
  mov.ne r0,#0x0
  b 0x10101a2e
  movs r0,#0x1
  b 0x10101a2e
