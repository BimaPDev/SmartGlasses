; FUN_2c64cf04 @ 0x2c64cf04 size=20
  ldr r3,[r0,#0x0]
  cbnz r3,0x2c64cf12
  ldr r2,[0x2c64cf18]
  ldr r3,[r2,#0x0]
  adds r3,#0x1
  str r3,[r2,#0x0]
  str r3,[r0,#0x0]
  ldr r0,[r0,#0x0]
  subs r0,#0x1
  bx lr
