; FUN_100fdd08 @ 0x100fdd08 size=220
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  ldr.w lr,[r0,#0x20]
  ldr r3,[r0,#0x10]
  cmp lr,r1
  sub sp,#0xc
  bls 0x100fddcc
  add.w r7,lr,#0x1
  lsls r7,r7,#0x1
  subs r5,r7,#0x2
  lsls r4,r5,#0x1
  add.w r4,r4,r1, lsl #0x1
  add.w r5,r5,r1, lsl #0x1
  add r4,r7
  add r5,r7
  add.w r2,r3,#0xe
  add r7,r3
  add r4,r3
  add r5,r3
  adds r3,#0xf
  add.w r10,r7,#0xe
  movw r12,#0xffff
  adds r7,#0xf
  add.w r9,lr,#0xffffffff
  str r2,[sp,#0x0]
  str r3,[sp,#0x4]
  b 0x100fdd58
  cmp r2,r12
  bne 0x100fddd6
  adds r1,#0x1
  cmp lr,r1
  beq 0x100fddcc
  ldr r2,[sp,#0x4]
  ldr r3,[sp,#0x0]
  ldrb.w r6,[r2,r1,lsl #0x1]
  ldrb.w r3,[r3,r1,lsl #0x1]
  cmp r1,r9
  orr.w r6,r6,r3, lsl #0x8
  str r6,[r0,#0x2c]
  ldrb.w r2,[r10,r1,lsl #0x1]
  ldrb.w r3,[r7,r1,lsl #0x1]
  add.w r8,r4,#0xe
  orr.w r3,r3,r2, lsl #0x8
  str r3,[r0,#0x28]
  ldrb.w r11,[r5,#0xe]
  ldrb r2,[r5,#0xf]
  and.w r3,r3,r6
  orr.w r2,r2,r11, lsl #0x8
  sxth r2,r2
  str r2,[r0,#0x30]
  ldrb r6,[r4,#0xe]
  ldrb r2,[r4,#0xf]
  add.w r5,r5,#0x2
  orr.w r2,r2,r6, lsl #0x8
  add.w r4,r4,#0x2
  bcc 0x100fdd4e
  cmp r3,r12
  bne 0x100fdd4e
  add.w r11,r2,#0x2
  add r11,r8
  cbz r2,0x100fddc0
  ldr r3,[r0,#0x0]
  ldrd r6,r3,[r3,#0x1fc]
  add r3,r6
  cmp r11,r3
  bls 0x100fdd4e
  movs r3,#0x1
  movs r2,#0x0
  str r3,[r0,#0x30]
  str r2,[r0,#0x34]
  str r1,[r0,#0x24]
  movs r0,#0x0
  add sp,#0xc
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  mov.w r0,#0xffffffff
  add sp,#0xc
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  cmp r2,#0x0
  beq 0x100fddc0
  add r2,r8
  str r2,[r0,#0x34]
  str r1,[r0,#0x24]
  movs r0,#0x0
  b 0x100fddc6
