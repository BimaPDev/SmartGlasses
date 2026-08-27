; FUN_2c003cdc @ 0x2c003cdc size=56
  push {r4,r6}
  ldr r4,[0x2c003d14]
  ldr.w r4,[r4,r0,lsl #0x2]
  ldr r0,[r4,#0xc]
  lsls r0,r0,#0x1f
  bmi 0x2c003ce4
  ldr r0,[0x2c003d18]
  ldr r6,[r4,#0x4]
  and.w r0,r0,r2, lsl #0xc
  ldr r2,[0x2c003d1c]
  ands r2,r6
  orr.w r12,r0,r2
  ldr r2,[0x2c003d20]
  and.w r2,r2,r3, lsl #0xd
  orr r0,r12,#0x1
  orr.w r3,r2,r1
  str r0,[r4,#0x4]
  orr r3,r3,#0x100
  str r3,[r4,#0x0]
  pop {r4,r6}
  bx lr
