; FUN_1012001a @ 0x1012001a size=18
  ldr r3,[r0,#0x0]
  ldr r2,[r3,#0x0]
  ldr r3,[r2,#0x0]
  bic r3,r3,#0xc00
  orr.w r1,r3,r1, lsl #0xa
  str r1,[r2,#0x0]
  bx lr
