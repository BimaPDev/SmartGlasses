; FUN_2c656116 @ 0x2c656116 size=20
  ldrd r2,r1,[r0,#0x8]
  cmp r2,r1
  bcs 0x2c656124
  adds r2,#0x4
  str r2,[r0,#0x8]
  bx lr
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0x28]
  bx r3
