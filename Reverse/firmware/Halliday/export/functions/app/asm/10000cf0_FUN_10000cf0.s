; FUN_10000cf0 @ 0x10000cf0 size=28
  ldr r1,[0x10000d0c]
  ldr r3,[0x10000d10]
  ldr r2,[r1,#0x0]
  mov.w r0,#0x1040
  str.w r2,[r3,#0x2dc]
  mov.w r2,#0x100
  ldr r3,[0x10000d14]
  str r2,[r3,#0x0]
  str r0,[r1,#0x0]
  str r2,[r3,#0x0]
  bx lr
