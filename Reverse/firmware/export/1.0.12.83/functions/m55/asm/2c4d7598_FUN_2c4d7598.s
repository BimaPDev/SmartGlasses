; FUN_2c4d7598 @ 0x2c4d7598 size=206
  cmp r2,#0x0
  beq 0x2c4d7664
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  ldr r4,[r0,#0xc]
  ldr r6,[r0,#0x0]
  lsr.w r12,r4,#0x3
  ldr r3,[r0,#0x18]
  ldr r5,[r0,#0x14]
  add r6,r2
  subs r3,#0x1
  add.w r7,r12,#0x3
  str r6,[r0,#0x0]
  subs r5,#0x1
  adds r6,r4,r2
  add.w r10,r12,#0x1
  ands r7,r5
  and lr,r4,#0x7
  ands r3,r6
  ldr r6,[r0,#0x10]
  and.w r10,r10,r5
  ldr.w r9,[0x2c4d7668]
  str r3,[r0,#0xc]
  add.w r8,r12,#0x2
  ldrb.w r4,[r6,r12]
  ldrb r3,[r6,r7]
  and.w r8,r8,r5
  ldr.w r11,[r9,r2,lsl #0x2]
  orr.w r3,r3,r4, lsl #0x18
  ldrb.w r4,[r6,r10]
  orr.w r3,r3,r4, lsl #0x10
  rsb.w r4,r2,#0x20
  add r2,lr
  lsl.w r11,r11,r4
  lsl.w r4,r1,r4
  cmp r2,#0x20
  lsr.w r11,r11,lr
  lsr.w r4,r4,lr
  ldrb.w lr,[r6,r8]
  orr.w lr,r3,lr, lsl #0x8
  bic.w lr,lr,r11
  orr.w lr,r4,lr
  lsr.w r3,lr,#0x18
  strb.w r3,[r6,r12]
  lsr.w r3,lr,#0x10
  ldr r6,[r0,#0x10]
  strb.w r3,[r6,r10]
  lsr.w r3,lr,#0x8
  ldr r6,[r0,#0x10]
  strb.w r3,[r6,r8]
  ldr r6,[r0,#0x10]
  strb.w lr,[r6,r7]
  bls 0x2c4d7660
  and r2,r2,#0x7
  add.w r12,r12,#0x4
  ldr r4,[r0,#0x10]
  and.w r5,r12,r5
  ldr.w r0,[r9,r2,lsl #0x2]
  rsb.w r2,r2,#0x8
  ldrb r3,[r4,r5]
  lsls r0,r2
  lsls r1,r2
  bic.w r3,r3,r0
  orrs r1,r3
  strb r1,[r4,r5]
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  bx lr
