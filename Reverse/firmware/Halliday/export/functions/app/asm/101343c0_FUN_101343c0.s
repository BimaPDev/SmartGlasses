; FUN_101343c0 @ 0x101343c0 size=32
  ldr r3,[r2,#0x0]
  cbnz r1,0x101343d4
  ldr r1,[r0,#0x4]
  str r3,[r0,#0x0]
  cmp r2,r1
  bne 0x101343ce
  str r3,[r0,#0x4]
  movs r3,#0x0
  str r3,[r2,#0x0]
  bx lr
  str r3,[r1,#0x0]
  ldr r3,[r0,#0x4]
  cmp r2,r3
  it eq
  str.eq r1,[r0,#0x4]
  b 0x101343ce
