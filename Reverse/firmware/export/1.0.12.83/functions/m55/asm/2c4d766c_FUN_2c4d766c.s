; FUN_2c4d766c @ 0x2c4d766c size=32
  push {r4}
  ldr r4,[r0,#0x0]
  cbnz r2,0x2c4d7688
  add r4,r1
  ldr r3,[r0,#0xc]
  ldr r2,[r0,#0x18]
  subs r3,r3,r1
  str r4,[r0,#0x0]
  subs r2,#0x1
  pop.w r4
  ands r3,r2
  str r3,[r0,#0xc]
  bx lr
  subs r4,r4,r1
  b 0x2c4d7674
