; FUN_1012003a @ 0x1012003a size=16
  ldr r3,[r0,#0x0]
  ldr r2,[r3,#0x0]
  ldr r3,[r2,#0x0]
  bic r3,r3,#0x3
  orrs r1,r3
  str r1,[r2,#0x0]
  bx lr
