; FUN_1012a862 @ 0x1012a862 size=26
  ldr r3,[r0,#0x0]
  subs r3,r3,r1
  str r3,[r0,#0x0]
  ldr r3,[r0,#0x8]
  add r1,r3
  ldr r3,[r0,#0x4]
  str r1,[r0,#0x8]
  subs r3,r3,r2
  str r3,[r0,#0x4]
  ldr r3,[r0,#0xc]
  add r2,r3
  str r2,[r0,#0xc]
  bx lr
