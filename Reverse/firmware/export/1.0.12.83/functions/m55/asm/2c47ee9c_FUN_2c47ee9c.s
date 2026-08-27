; FUN_2c47ee9c @ 0x2c47ee9c size=632
  adds r3,r0,#0x4
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  movs r5,#0xe0
  sub sp,#0x1c
  mov r10,r0
  mov r4,r3
  mov r6,r1
  str r1,[sp,#0x10]
  str r3,[sp,#0xc]
  subs r3,r4,#0x4
  adds r1,r6,r5
  ldrb r2,[r3,#0x0]
  ldrb.w r0,[r1],#0x1
  eors r2,r0
  strb.w r2,[r3],#0x1
  cmp r4,r3
  bne 0x2c47eeb4
  adds r5,#0x4
  adds r4,#0x4
  cmp r5,#0xf0
  bne 0x2c47eeb0
  movs r3,#0x34
  str r3,[sp,#0x4]
  add.w r3,r10,#0x14
  str r3,[sp,#0x14]
  add.w r3,r10,#0x10
  str r3,[sp,#0x8]
  ldrb.w r2,[r10,#0x5]
  ldrb.w r0,[r10,#0xa]
  ldrb.w r3,[r10,#0xd]
  ldrb.w r5,[r10,#0x9]
  ldrb.w r4,[r10,#0x1]
  ldrb.w r1,[r10,#0x2]
  strb.w r2,[r10,#0x9]
  strb.w r0,[r10,#0x2]
  ldrb.w r2,[r10,#0x6]
  ldrb.w r0,[r10,#0xb]
  strb.w r5,[r10,#0xd]
  strb.w r4,[r10,#0x5]
  ldrb.w r5,[r10,#0xe]
  ldrb.w r4,[r10,#0x7]
  strb.w r3,[r10,#0x1]
  strb.w r1,[r10,#0xa]
  ldrb.w r3,[r10,#0x3]
  ldrb.w r1,[r10,#0xf]
  strb.w r2,[r10,#0xe]
  mov r2,r10
  strb.w r0,[r10,#0x7]
  ldr r0,[sp,#0xc]
  strb.w r5,[r10,#0x6]
  strb.w r4,[r10,#0x3]
  strb.w r1,[r10,#0xb]
  strb.w r3,[r10,#0xf]
  movs r3,#0x0
  ldrb.w r1,[r2,r3,lsl #0x2]
  ldr r4,[0x2c47f114]
  ldrb r1,[r4,r1]
  strb.w r1,[r2,r3,lsl #0x2]
  adds r3,#0x1
  cmp r3,#0x4
  bne 0x2c47ef42
  adds r2,#0x1
  cmp r0,r2
  bne 0x2c47ef40
  ldr r3,[sp,#0x4]
  ldr r7,[sp,#0x14]
  lsls r5,r3,#0x2
  ldrd r0,r6,[sp,#0xc]
  subs r3,r0,#0x4
  adds r1,r6,r5
  ldrb r2,[r3,#0x0]
  ldrb.w r4,[r1],#0x1
  eors r2,r4
  strb.w r2,[r3],#0x1
  cmp r0,r3
  bne 0x2c47ef68
  adds r0,#0x4
  adds r5,#0x4
  cmp r7,r0
  bne 0x2c47ef64
  ldr r3,[sp,#0x4]
  cmp r3,#0x0
  beq.w 0x2c47f10e
  mov r9,r10
  ldrb.w r2,[r9,#0x0]
  add.w r9,r9,#0x4
  ldrb.w r0,[r9,#-0x2]
  lsrs r3,r2,#0x7
  ldrb.w r8,[r9,#-0x3]
  lsr.w r12,r0,#0x7
  ldrb.w r11,[r9,#-0x1]
  add.w r3,r3,r3, lsl #0x1
  eor.w r1,r2,r8
  lsr.w lr,r8,#0x7
  add.w r3,r3,r3, lsl #0x3
  add.w r12,r12,r12, lsl #0x1
  eor.w r3,r3,r2, lsl #0x1
  eors r2,r0
  add.w lr,lr,lr, lsl #0x1
  add.w r12,r12,r12, lsl #0x3
  ubfx r6,r3,#0x7,#0x1
  lsr.w r7,r11,#0x7
  eor.w r2,r11,r2
  eor.w r12,r12,r0, lsl #0x1
  add.w lr,lr,lr, lsl #0x3
  add.w r7,r7,r7, lsl #0x1
  ubfx r4,r12,#0x7,#0x1
  eor.w lr,lr,r8, lsl #0x1
  eor.w r8,r8,r0
  add.w r7,r7,r7, lsl #0x3
  eors r0,r1
  add.w r6,r6,r6, lsl #0x1
  ubfx r5,lr,#0x7,#0x1
  uxtb r3,r3
  eor.w r8,r11,r8
  uxtb.w lr,lr
  eor.w r1,r11,r1
  eor.w r7,r7,r11, lsl #0x1
  eors r0,r3
  add.w r6,r6,r6, lsl #0x3
  eor.w r2,lr,r2
  add.w r4,r4,r4, lsl #0x1
  eor.w r8,r3,r8
  eor.w r6,r6,r3, lsl #0x1
  ubfx r3,r7,#0x7,#0x1
  uxtb.w r12,r12
  add.w r4,r4,r4, lsl #0x3
  eor.w r1,r12,r1
  add.w r5,r5,r5, lsl #0x1
  eor.w r4,r4,r12, lsl #0x1
  eor.w r12,r12,r2
  add.w r3,r3,r3, lsl #0x1
  ubfx r2,r6,#0x7,#0x1
  uxtb r7,r7
  add.w r5,r5,r5, lsl #0x3
  add.w r3,r3,r3, lsl #0x3
  eors r1,r7
  add.w r2,r2,r2, lsl #0x1
  eors r0,r7
  eor.w r5,r5,lr, lsl #0x1
  eor.w lr,lr,r8
  eor.w r3,r3,r7, lsl #0x1
  ubfx r7,r4,#0x7,#0x1
  uxtb r6,r6
  add.w r2,r2,r2, lsl #0x3
  eor.w lr,r6,lr
  eors r1,r6
  add.w r7,r7,r7, lsl #0x1
  eor.w r6,r2,r6, lsl #0x1
  ubfx r2,r5,#0x7,#0x1
  uxtb r4,r4
  add.w r7,r7,r7, lsl #0x3
  add.w r2,r2,r2, lsl #0x1
  eor.w lr,r4,lr
  uxtb r5,r5
  eors r1,r4
  add.w r2,r2,r2, lsl #0x3
  eor.w r4,r7,r4, lsl #0x1
  eors r0,r5
  uxtb r7,r3
  ubfx r3,r3,#0x7,#0x1
  uxtb r6,r6
  eor.w r12,r5,r12
  add.w r3,r3,r3, lsl #0x1
  eor.w r5,r2,r5, lsl #0x1
  eor.w lr,r6,lr
  eor.w r12,r7,r12
  add.w r3,r3,r3, lsl #0x3
  uxtb r5,r5
  eors r1,r6
  uxtb r4,r4
  eor.w r2,r5,lr
  eor.w r3,r3,r7, lsl #0x1
  eor.w lr,r7,r0
  eor.w r0,r6,r12
  uxtb r3,r3
  eors r2,r4
  eors r0,r5
  eor.w r6,r6,lr
  eors r2,r3
  eors r1,r5
  eors r0,r4
  eors r5,r6
  strb.w r2,[r9,#-0x4]
  eors r1,r4
  eor.w r2,r3,r0
  eors r4,r5
  eors r1,r3
  eors r3,r4
  strb.w r2,[r9,#-0x3]
  strb.w r1,[r9,#-0x2]
  strb.w r3,[r9,#-0x1]
  ldr r3,[sp,#0x8]
  cmp r3,r9
  bne.w 0x2c47ef8a
  ldr r3,[sp,#0x4]
  subs r3,#0x4
  str r3,[sp,#0x4]
  b 0x2c47eedc
  add sp,#0x1c
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
