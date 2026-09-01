; FUN_100a4228 @ 0x100a4228 size=40
  ldr r3,[0x100a4250]
  push {r4}
  ldr r3,[r3,#0x0]
  adds r2,r3,#0x4
  adds r3,#0x18
  ldr.w r1,[r2],#0x4
  ldrb r4,[r1,#0x0]
  cmp r4,r0
  bne 0x100a4244
  ldr r3,[r1,#0x8]
  pop.w r4
  bx r3
  cmp r2,r3
  bne 0x100a4232
  movs r0,#0x0
  pop.w r4
  bx lr
