; FUN_2c48fcc8 @ 0x2c48fcc8 size=166
  push {r4,r5,r6,r7,r8,r9,lr}
  add.w r3,r0,r0, lsl #0x1
  ldr r4,[0x2c48fd70]
  lsls r5,r0,#0x1
  add.w r3,r4,r3, lsl #0x3
  ldr r6,[r3,#0x14]
  ldr r7,[r3,#0x8]
  add.w r12,r6,r2, lsr #0x1
  cmp r12,r7
  bhi 0x2c48fd24
  lsr.w lr,r2,#0x1
  ldr r3,[r3,#0x4]
  lsrs r2,r2,#0x2
  beq 0x2c48fd16
  sub.w r12,r6,#0x2
  add.w r2,r1,r2, lsl #0x2
  add r12,r3
  adds r1,#0x4
  ldrsh.w r3,[r12,#0x2]!
  cmp r1,r2
  strh r3,[r1,#-0x4]
  strh r3,[r1,#-0x2]
  bne 0x2c48fcf8
  adds r3,r5,r0
  add.w r3,r4,r3, lsl #0x3
  ldr r3,[r3,#0x14]
  add.w r12,lr,r3
  add r0,r5
  add.w r4,r4,r0, lsl #0x3
  str.w r12,[r4,#0x14]
  pop.w {r4,r5,r6,r7,r8,r9,pc}
  sub.w r8,r7,r6
  ldr r3,[r3,#0x4]
  lsrs.w r9,r8,#0x1
  beq 0x2c48fd54
  sub.w lr,r6,#0x2
  adds r6,r1,#0x2
  add lr,r3
  movs r3,#0x0
  ldrsh.w r12,[lr,#0x2]!
  strh.w r12,[r1,r3,lsl #0x2]
  strh.w r12,[r6,r3,lsl #0x2]
  adds r3,#0x1
  cmp r9,r3
  bne 0x2c48fd3a
  adds r3,r5,r0
  add.w r3,r4,r3, lsl #0x3
  ldr r7,[r3,#0x8]
  add r0,r5
  sub.w r2,r2,r8, lsl #0x1
  add.w r4,r4,r0, lsl #0x3
  add.w r0,r1,r8, lsl #0x1
  movs r1,#0x0
  str r7,[r4,#0x14]
  pop.w {r4,r5,r6,r7,r8,r9,lr}
  b.w 0x2c674268
