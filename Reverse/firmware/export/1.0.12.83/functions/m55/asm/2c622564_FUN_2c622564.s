; FUN_2c622564 @ 0x2c622564 size=572
  push {r4,r5,r6,r7,r8,r9,lr}
  ldrd r12,r6,[sp,#0x20]
  ldr r7,[sp,#0x1c]
  ldrb r4,[r6,#0x0]
  cbnz r4,0x2c6225a4
  ldr r5,[r6,#0x4]
  cmp r5,#0x8
  beq 0x2c6225d6
  cmp r5,#0x10
  bne 0x2c6225f2
  ldrb.w r4,[r7,r12,lsl #0x1]
  strb r4,[r2,#0x0]
  strb r4,[r1,#0x0]
  add.w r1,r7,r12, lsl #0x1
  strb r4,[r0,#0x0]
  ldr r2,[r6,#0x10]
  cbz r2,0x2c6225ea
  ldrb r2,[r1,#0x1]
  ldrb.w r0,[r7,r12,lsl #0x1]
  ldr r1,[r6,#0x14]
  add.w r2,r2,r0, lsl #0x8
  cmp r2,r1
  bne 0x2c6225ea
  movs r2,#0x0
  strb r2,[r3,#0x0]
  b 0x2c6225ee
  cmp r4,#0x2
  beq 0x2c622668
  cmp r4,#0x3
  beq.w 0x2c6226c2
  cmp r4,#0x4
  beq 0x2c62264c
  cmp r4,#0x6
  bne 0x2c6225ee
  ldr r4,[r6,#0x4]
  cmp r4,#0x8
  beq.w 0x2c622788
  ldrb.w r4,[r7,r12,lsl #0x3]
  add.w r7,r7,r12, lsl #0x3
  strb r4,[r0,#0x0]
  ldrb r0,[r7,#0x2]
  strb r0,[r1,#0x0]
  ldrb r1,[r7,#0x4]
  strb r1,[r2,#0x0]
  ldrb r2,[r7,#0x6]
  strb r2,[r3,#0x0]
  b 0x2c6225ee
  ldrb.w r4,[r7,r12]
  strb r4,[r2,#0x0]
  strb r4,[r1,#0x0]
  strb r4,[r0,#0x0]
  ldr r2,[r6,#0x10]
  cbz r2,0x2c6225ea
  ldr r2,[r6,#0x14]
  cmp r4,r2
  beq 0x2c62259e
  movs r2,#0xff
  strb r2,[r3,#0x0]
  pop.w {r4,r5,r6,r7,r8,r9,pc}
  mov.w r9,#0x1
  mul r12,r12,r5
  lsl.w r9,r9,r5
  add.w r9,r9,#0xffffffff
  cbz r5,0x2c622638
  add.w r8,r5,r12
  mov r5,r4
  lsr.w r4,r12,#0x3
  ldrb.w lr,[r7,r4]
  mvn.w r4,r12
  add.w r12,r12,#0x1
  and r4,r4,#0x7
  cmp r12,r8
  asr.w lr,lr,r4
  and lr,lr,#0x1
  orr.w r5,lr,r5, lsl #0x1
  bne 0x2c62260a
  rsb r4,r5,r5, lsl #0x8
  udiv r4,r4,r9
  uxtb r4,r4
  strb r4,[r2,#0x0]
  strb r4,[r1,#0x0]
  strb r4,[r0,#0x0]
  ldr r2,[r6,#0x10]
  cmp r2,#0x0
  beq 0x2c6225ea
  ldr r2,[r6,#0x14]
  cmp r2,r5
  bne 0x2c6225ea
  b 0x2c62259e
  ldr r4,[r6,#0x4]
  cmp r4,#0x8
  beq.w 0x2c62276a
  ldrb.w r4,[r7,r12,lsl #0x2]
  add.w r7,r7,r12, lsl #0x2
  strb r4,[r2,#0x0]
  strb r4,[r1,#0x0]
  strb r4,[r0,#0x0]
  ldrb r2,[r7,#0x2]
  strb r2,[r3,#0x0]
  b 0x2c6225ee
  ldr r4,[r6,#0x4]
  add.w r12,r12,r12, lsl #0x1
  cmp r4,#0x8
  beq 0x2c6226f8
  ldrb.w r5,[r7,r12,lsl #0x1]
  lsl.w r4,r12,#0x1
  add.w r12,r7,r12, lsl #0x1
  strb r5,[r0,#0x0]
  adds r0,r4,#0x2
  ldrb r5,[r7,r0]
  strb r5,[r1,#0x0]
  ldrb.w r1,[r12,#0x4]
  strb r1,[r2,#0x0]
  ldr r2,[r6,#0x10]
  cmp r2,#0x0
  beq 0x2c6225ea
  ldrb r4,[r7,r4]
  ldrb.w r2,[r12,#0x1]
  add.w r2,r2,r4, lsl #0x8
  ldr r4,[r6,#0x14]
  cmp r2,r4
  bne 0x2c6225ea
  ldrb r0,[r7,r0]
  ldrb.w r2,[r12,#0x3]
  add.w r2,r2,r0, lsl #0x8
  ldr r0,[r6,#0x18]
  cmp r2,r0
  bne 0x2c6225ea
  ldrb.w r2,[r12,#0x5]
  ldr r0,[r6,#0x1c]
  add.w r1,r2,r1, lsl #0x8
  cmp r1,r0
  bne 0x2c6225ea
  b 0x2c62259e
  ldr r5,[r6,#0x4]
  cmp r5,#0x8
  bne 0x2c62272e
  ldrb.w r5,[r7,r12]
  lsls r5,r5,#0x2
  add.w lr,r5,#0x1
  add.w r12,r5,#0x2
  adds r4,r5,#0x3
  ldr r7,[r6,#0x8]
  ldrb r5,[r7,r5]
  strb r5,[r0,#0x0]
  ldr r0,[r6,#0x8]
  ldrb.w r0,[r0,lr]
  strb r0,[r1,#0x0]
  ldr r1,[r6,#0x8]
  ldrb.w r1,[r1,r12]
  strb r1,[r2,#0x0]
  ldr r2,[r6,#0x8]
  ldrb r2,[r2,r4]
  strb r2,[r3,#0x0]
  pop.w {r4,r5,r6,r7,r8,r9,pc}
  ldrb.w r4,[r7,r12]
  add r7,r12
  strb r4,[r0,#0x0]
  ldrb r4,[r7,#0x1]
  strb r4,[r1,#0x0]
  ldrb r4,[r7,#0x2]
  strb r4,[r2,#0x0]
  ldr r2,[r6,#0x10]
  cmp r2,#0x0
  beq.w 0x2c6225ea
  ldrb r0,[r0,#0x0]
  ldr r2,[r6,#0x14]
  cmp r0,r2
  bne.w 0x2c6225ea
  ldrb r1,[r1,#0x0]
  ldr r2,[r6,#0x18]
  cmp r1,r2
  bne.w 0x2c6225ea
  ldr r2,[r6,#0x1c]
  cmp r4,r2
  bne.w 0x2c6225ea
  b 0x2c62259e
  mul r12,r12,r5
  cbz r5,0x2c62277e
  add.w r8,r5,r12
  movs r5,#0x0
  lsr.w r4,r12,#0x3
  mvn.w lr,r12
  add.w r12,r12,#0x1
  ldrb r4,[r7,r4]
  and lr,lr,#0x7
  cmp r12,r8
  asr.w r4,r4,lr
  and r4,r4,#0x1
  orr.w r5,r4,r5, lsl #0x1
  bne 0x2c62273a
  lsls r5,r5,#0x2
  add.w lr,r5,#0x1
  add.w r12,r5,#0x2
  adds r4,r5,#0x3
  b 0x2c6226d8
  ldrb.w r4,[r7,r12,lsl #0x1]
  add.w r7,r7,r12, lsl #0x1
  strb r4,[r2,#0x0]
  strb r4,[r1,#0x0]
  strb r4,[r0,#0x0]
  ldrb r2,[r7,#0x1]
  strb r2,[r3,#0x0]
  b 0x2c6225ee
  mov.w r12,#0x2
  mov.w lr,#0x1
  b 0x2c6226d8
  ldrb.w r4,[r7,r12,lsl #0x2]
  add.w r7,r7,r12, lsl #0x2
  strb r4,[r0,#0x0]
  ldrb r0,[r7,#0x1]
  strb r0,[r1,#0x0]
  ldrb r1,[r7,#0x2]
  strb r1,[r2,#0x0]
  ldrb r2,[r7,#0x3]
  strb r2,[r3,#0x0]
  b 0x2c6225ee
