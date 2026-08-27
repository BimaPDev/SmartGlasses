; FUN_2c47f118 @ 0x2c47f118 size=452
  adds r3,r0,#0x4
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  movs r5,#0x0
  sub sp,#0x24
  mov r10,r0
  mov r4,r3
  mov r6,r1
  str r1,[sp,#0x18]
  str r3,[sp,#0x10]
  add.w r3,r10,r5
  adds r1,r6,r5
  ldrb r2,[r3,#0x0]
  ldrb.w r0,[r1],#0x1
  eors r2,r0
  strb.w r2,[r3],#0x1
  cmp r4,r3
  bne 0x2c47f132
  adds r5,#0x4
  adds r4,#0x4
  cmp r5,#0x10
  bne 0x2c47f12c
  movs r3,#0x4
  ldr.w r11,[0x2c47f2dc]
  mov lr,r10
  str r3,[sp,#0x8]
  add.w r3,r10,#0x10
  str r3,[sp,#0xc]
  add.w r3,r10,#0x14
  str r3,[sp,#0x1c]
  mov r2,lr
  ldr r0,[sp,#0x10]
  movs r3,#0x0
  ldrb.w r1,[r2,r3,lsl #0x2]
  ldrb.w r1,[r11,r1]
  strb.w r1,[r2,r3,lsl #0x2]
  adds r3,#0x1
  cmp r3,#0x4
  bne 0x2c47f166
  adds r2,#0x1
  cmp r0,r2
  bne 0x2c47f164
  ldrb.w r3,[lr,#0xd]
  ldrb.w r2,[lr,#0x9]
  strb.w r3,[lr,#0x9]
  ldrb.w r3,[lr,#0x6]
  ldrb.w r4,[lr,#0x5]
  strb.w r2,[lr,#0x5]
  ldrb.w r2,[lr,#0xe]
  strb.w r3,[lr,#0xe]
  ldrb.w r3,[lr,#0x7]
  ldrb.w r1,[lr,#0x2]
  strb.w r2,[lr,#0x6]
  ldrb.w r2,[lr,#0xb]
  strb.w r3,[lr,#0xb]
  ldr r3,[sp,#0x8]
  ldrb.w r0,[lr,#0x1]
  ldrb.w r10,[lr,#0xa]
  cmp r3,#0x38
  ldrb.w r9,[lr,#0xf]
  strb.w r1,[lr,#0xa]
  ldrb.w r1,[lr,#0x3]
  strb.w r4,[lr,#0x1]
  strb.w r0,[lr,#0xd]
  strb.w r10,[lr,#0x2]
  strb.w r9,[lr,#0x3]
  strb.w r1,[lr,#0x7]
  strb.w r2,[lr,#0xf]
  beq 0x2c47f2b4
  mov r8,lr
  str.w lr,[sp,#0x14]
  ldrb.w r5,[r8,#0x0]
  eor.w r7,r10,r9
  eor.w lr,r4,r10
  add.w r8,r8,#0x4
  eor.w r3,r5,r9
  eor.w r12,r5,r4
  lsr.w r1,lr,#0x7
  str r3,[sp,#0x4]
  lsrs r3,r3,#0x7
  eor.w r6,r12,r7
  lsrs r2,r7,#0x7
  lsr.w r0,r12,#0x7
  add.w r3,r3,r3, lsl #0x1
  eors r4,r6
  eor.w r10,r6,r10
  eor.w r9,r6,r9
  eors r5,r6
  add.w r1,r1,r1, lsl #0x1
  add.w r2,r2,r2, lsl #0x1
  ldr r6,[sp,#0x4]
  add.w r0,r0,r0, lsl #0x1
  add.w r3,r3,r3, lsl #0x3
  add.w r1,r1,r1, lsl #0x3
  eor.w r3,r3,r6, lsl #0x1
  add.w r0,r0,r0, lsl #0x3
  add.w r2,r2,r2, lsl #0x3
  eor.w r9,r3,r9
  eor.w r0,r0,r12, lsl #0x1
  ldr r3,[sp,#0xc]
  eor.w r1,r1,lr, lsl #0x1
  strb.w r9,[r8,#-0x1]
  eor.w r2,r2,r7, lsl #0x1
  eors r0,r5
  eors r4,r1
  cmp r3,r8
  eor.w r10,r2,r10
  strb.w r0,[r8,#-0x4]
  strb.w r4,[r8,#-0x3]
  strb.w r10,[r8,#-0x2]
  beq 0x2c47f282
  ldrb.w r4,[r8,#0x1]
  ldrb.w r10,[r8,#0x2]
  ldrb.w r9,[r8,#0x3]
  b 0x2c47f1ea
  ldr r3,[sp,#0x8]
  ldr.w lr,[sp,#0x14]
  lsls r5,r3,#0x2
  ldr r0,[sp,#0x10]
  ldrd r6,r7,[sp,#0x18]
  subs r3,r0,#0x4
  adds r1,r6,r5
  ldrb r2,[r3,#0x0]
  ldrb.w r4,[r1],#0x1
  eors r2,r4
  strb.w r2,[r3],#0x1
  cmp r0,r3
  bne 0x2c47f294
  adds r0,#0x4
  adds r5,#0x4
  cmp r7,r0
  bne 0x2c47f290
  ldr r3,[sp,#0x8]
  adds r3,#0x4
  str r3,[sp,#0x8]
  b 0x2c47f160
  movs r4,#0xe0
  ldr r5,[sp,#0x10]
  ldr r6,[sp,#0x18]
  subs r3,r5,#0x4
  adds r1,r6,r4
  ldrb r2,[r3,#0x0]
  ldrb.w r0,[r1],#0x1
  eors r2,r0
  strb.w r2,[r3],#0x1
  cmp r5,r3
  bne 0x2c47f2be
  adds r4,#0x4
  adds r5,#0x4
  cmp r4,#0xf0
  bne 0x2c47f2ba
  add sp,#0x24
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
