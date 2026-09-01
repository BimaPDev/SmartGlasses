; FUN_101018d8 @ 0x101018d8 size=270
  push {r4,r5,r6,r7,r8,r9,r10,lr}
  ldr r7,[r0,#0x10]
  mov r6,r1
  ldr.w r0,[r7,#0x6]
  mov.w r12,#0x0
  rev r0,r0
  b 0x10101908
  ldrb.w r4,[lr,#0x1]
  ldrb.w r8,[r7,r5]
  lsls r4,r4,#0x8
  ldrb.w r5,[lr,#0x2]
  orr.w r4,r4,r8, lsl #0x10
  orrs r4,r5
  cmp r3,r4
  it cc
  mov.cc r0,r1
  bcs 0x10101926
  add.w r1,r0,r12
  lsrs r1,r1,#0x1
  add.w r5,r1,r1, lsl #0x2
  add.w r5,r1,r5, lsl #0x1
  adds r5,#0xa
  cmp r0,r12
  add.w lr,r7,r5
  bhi 0x101018ec
  movs r0,#0x0
  pop.w {r4,r5,r6,r7,r8,r9,r10,pc}
  bls 0x1010192e
  add.w r12,r1,#0x1
  b 0x10101908
  adds.w r0,lr,#0x3
  beq 0x10101922
  ldr.w r3,[lr,#0x3]
  ldr.w r0,[lr,#0x7]
  rev r5,r3
  rev r0,r0
  cbnz r3,0x1010197c
  cmp r0,#0x0
  beq 0x10101922
  ldr r5,[r7,r0]
  add r0,r7
  rev r5,r5
  movs r7,#0x0
  b 0x10101968
  ldrb r3,[r6,#0x1]
  ldrb.w r12,[r0,r4]
  lsls r3,r3,#0x8
  ldrb r4,[r6,#0x2]
  orr.w r3,r3,r12, lsl #0x10
  orrs r3,r4
  cmp r2,r3
  it cc
  mov.cc r5,r1
  bcs 0x101019c8
  adds r1,r5,r7
  lsrs r1,r1,#0x1
  add.w r4,r1,r1, lsl #0x2
  adds r4,#0x4
  cmp r5,r7
  add.w r6,r0,r4
  bhi 0x10101950
  b 0x10101920
  ldr r4,[r7,r5]
  mov.w lr,#0x0
  add r5,r7
  rev r4,r4
  b 0x101019a6
  ldrb.w r3,[r12,#0x1]
  ldrb.w r10,[r5,r8,lsl #0x2]
  ldrb.w r9,[r12,#0x2]
  lsls r3,r3,#0x8
  orr.w r3,r3,r10, lsl #0x10
  orr.w r3,r3,r9
  cmp r2,r3
  it cc
  mov.cc r4,r1
  bcs 0x101019ba
  add.w r1,r4,lr
  lsrs r1,r1,#0x1
  add.w r8,r1,#0x1
  cmp r4,lr
  add.w r12,r5,r8, lsl #0x2
  bhi 0x10101988
  b 0x10101942
  ldrb.w r1,[r12,#0x3]
  add r3,r1
  cmp r2,r3
  bls 0x101019ce
  mov lr,r8
  b 0x101019a6
  bls 0x101019dc
  adds r7,r1,#0x1
  b 0x10101968
  ldr r3,[r6,#0xc]
  mov r0,r6
  pop.w {r4,r5,r6,r7,r8,r9,r10,lr}
  mov r1,r2
  ldr r3,[r3,#0xc]
  bx r3
  ldrb r3,[r6,#0x3]
  ldrb r0,[r6,#0x4]
  orr.w r0,r0,r3, lsl #0x8
  b 0x10101922
