; FUN_2c621554 @ 0x2c621554 size=298
  push {r4,r5,r6,r7,r8,r9,lr}
  ldrd r4,r7,[sp,#0x20]
  ldr r6,[sp,#0x1c]
  ldrb r5,[r7,#0x0]
  cbnz r5,0x2c6215a6
  lsls r5,r4,#0x1
  ldrb.w lr,[r6,r4,lsl #0x1]
  adds r5,#0x1
  ldrb.w r12,[r6,r5]
  add.w r12,r12,lr, lsl #0x8
  uxth.w r12,r12
  strh.w r12,[r2,#0x0]
  strh.w r12,[r1,#0x0]
  strh.w r12,[r0,#0x0]
  ldr r2,[r7,#0x10]
  cbnz r2,0x2c621590
  movw r2,#0xffff
  strh r2,[r3,#0x0]
  pop.w {r4,r5,r6,r7,r8,r9,pc}
  ldrb.w r0,[r6,r4,lsl #0x1]
  ldrb r2,[r6,r5]
  ldr r1,[r7,#0x14]
  add.w r2,r2,r0, lsl #0x8
  cmp r2,r1
  bne 0x2c621586
  movs r2,#0x0
  strh r2,[r3,#0x0]
  b 0x2c62158c
  cmp r5,#0x2
  beq 0x2c6215e2
  cmp r5,#0x4
  beq 0x2c62165a
  cmp r5,#0x6
  bne 0x2c62158c
  add.w r5,r6,r4, lsl #0x3
  ldrb.w r6,[r6,r4,lsl #0x3]
  ldrb r4,[r5,#0x1]
  add.w r4,r4,r6, lsl #0x8
  strh r4,[r0,#0x0]
  ldrb r4,[r5,#0x2]
  ldrb r0,[r5,#0x3]
  add.w r0,r0,r4, lsl #0x8
  strh r0,[r1,#0x0]
  ldrb r0,[r5,#0x4]
  ldrb r1,[r5,#0x5]
  add.w r1,r1,r0, lsl #0x8
  strh r1,[r2,#0x0]
  ldrb r1,[r5,#0x6]
  ldrb r2,[r5,#0x7]
  add.w r2,r2,r1, lsl #0x8
  strh r2,[r3,#0x0]
  b 0x2c62158c
  add.w r4,r4,r4, lsl #0x1
  lsls r4,r4,#0x1
  adds r5,r4,#0x1
  ldrb.w r9,[r6,r4]
  add.w lr,r4,#0x2
  add.w r12,r4,#0x3
  ldrb.w r8,[r6,r5]
  add.w r8,r8,r9, lsl #0x8
  strh.w r8,[r0,#0x0]
  ldrb.w r8,[r6,lr]
  ldrb.w r0,[r6,r12]
  add.w r0,r0,r8, lsl #0x8
  add.w r8,r4,#0x4
  strh r0,[r1,#0x0]
  adds r0,r4,#0x5
  ldrb.w r9,[r6,r8]
  ldrb r1,[r6,r0]
  add.w r1,r1,r9, lsl #0x8
  strh r1,[r2,#0x0]
  ldr r2,[r7,#0x10]
  cmp r2,#0x0
  beq 0x2c621586
  ldrb r2,[r6,r4]
  ldrb r1,[r6,r5]
  add.w r1,r1,r2, lsl #0x8
  ldr r2,[r7,#0x14]
  cmp r1,r2
  bne 0x2c621586
  ldrb.w r1,[r6,lr]
  ldrb.w r2,[r6,r12]
  add.w r2,r2,r1, lsl #0x8
  ldr r1,[r7,#0x18]
  cmp r2,r1
  bne 0x2c621586
  ldrb.w r4,[r6,r8]
  ldrb r2,[r6,r0]
  ldr r1,[r7,#0x1c]
  add.w r2,r2,r4, lsl #0x8
  cmp r2,r1
  bne 0x2c621586
  b 0x2c6215a0
  add.w r5,r6,r4, lsl #0x2
  ldrb.w r6,[r6,r4,lsl #0x2]
  ldrb r4,[r5,#0x1]
  add.w r4,r4,r6, lsl #0x8
  uxth r4,r4
  strh r4,[r2,#0x0]
  strh r4,[r1,#0x0]
  strh r4,[r0,#0x0]
  ldrb r1,[r5,#0x2]
  ldrb r2,[r5,#0x3]
  add.w r2,r2,r1, lsl #0x8
  strh r2,[r3,#0x0]
  pop.w {r4,r5,r6,r7,r8,r9,pc}
