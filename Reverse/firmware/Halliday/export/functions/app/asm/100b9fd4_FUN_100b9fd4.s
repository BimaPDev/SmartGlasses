; FUN_100b9fd4 @ 0x100b9fd4 size=38
  push {r4,lr}
  ldr r4,[0x100b9ffc]
  ldrb.w r2,[r4,#0x18e]
  ands r2,r2,#0x4
  bne 0x100b9fec
  ldr r0,[0x100ba000]
  add.w r1,r4,#0x198
  bl 0x1011dc20
  ldrb.w r3,[r4,#0x18e]
  bfc r3,#0x2,#0x1
  strb.w r3,[r4,#0x18e]
  pop {r4,pc}
