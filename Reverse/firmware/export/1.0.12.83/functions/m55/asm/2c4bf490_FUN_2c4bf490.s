; FUN_2c4bf490 @ 0x2c4bf490 size=68
  ldr r3,[0x2c4bf4d4]
  umull r2,r3,r3,r0
  lsrs r3,r3,#0x8
  rsb r3,r3,r3, lsl #0x4
  subs.w r3,r0,r3, lsl #0x5
  push {r4}
  beq 0x2c4bf4aa
  add.w r0,r0,#0x1e0
  subs r0,r0,r3
  ldr r4,[0x2c4bf4d4]
  ldr r3,[0x2c4bf4d8]
  umull r4,r0,r4,r0
  ldr r2,[0x2c4bf4dc]
  ldr r1,[0x2c4bf4e0]
  and.w r0,r3,r0, lsl #0x8
  orr r0,r0,#0xa0
  str.w r0,[r2,#0x118]
  str.w r1,[r2,#0xfc]
  str.w r0,[r2,#0x104]
  str.w r0,[r2,#0x108]
  pop.w r4
  bx lr
