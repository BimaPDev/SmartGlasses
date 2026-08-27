; FUN_2c5ec712 @ 0x2c5ec712 size=112
  push {r4,lr}
  ldrb.w r3,[r2,#0x3a0]
  sub sp,#0x10
  ldrb.w r12,[r2,#0x3a1]
  adds r1,r3,#0x1
  and r1,r1,#0xf
  cmp r12,r1
  beq 0x2c5ec774
  ldr r4,[r0,#0x0]
  add.w r1,r2,#0x2e0
  add.w r3,r3,r3, lsl #0x1
  str.w r4,[r1,r3,lsl #0x2]
  add.w r12,r1,r3, lsl #0x2
  ldr r1,[r0,#0x4]
  ldr r3,[0x2c5ec794]
  str.w r1,[r12,#0x4]
  ldr r1,[r0,#0x8]
  str r3,[sp,#0x4]
  str.w r1,[r12,#0x8]
  ldrb.w r1,[r2,#0x3a0]
  ldr r4,[0x2c5ec798]
  adds r1,#0x1
  and r1,r1,#0xf
  strb.w r1,[r2,#0x3a0]
  movw r2,#0x6bb
  ldr.w r0,[r12,#0x8]
  ldr r1,[0x2c5ec79c]
  str r0,[sp,#0x8]
  movs r0,#0x4
  str r4,[sp,#0x0]
  bl 0x2c62c82c
  ldr r3,[0x2c5ec794]
  movw r2,#0x6b2
  ldr r4,[0x2c5ec7a0]
  movs r0,#0x4
  ldr r1,[0x2c5ec79c]
  str r3,[sp,#0x4]
  str r4,[sp,#0x0]
  bl 0x2c62c82c
