; FUN_2c4d768c @ 0x2c4d768c size=28
  cbnz r2,0x2c4d76a2
  ldr r2,[r0,#0x0]
  subs r2,r2,r1
  ldr r3,[r0,#0x18]
  str r2,[r0,#0x0]
  ldr r2,[r0,#0xc]
  subs r3,#0x1
  add r1,r2
  ands r1,r3
  str r1,[r0,#0xc]
  bx lr
  ldr r2,[r0,#0x0]
  add r2,r1
  b 0x2c4d7692
