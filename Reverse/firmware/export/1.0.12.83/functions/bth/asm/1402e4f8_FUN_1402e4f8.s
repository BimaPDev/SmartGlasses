; FUN_1402e4f8 @ 0x1402e4f8 size=28
  mov.w r0,#0x10000
  mov.w r1,#0x100
  ldr r3,[0x1402e514]
  ldr r2,[r3,#0x4c]
  bic r2,r2,#0x2
  str r2,[r3,#0x4c]
  str r0,[r3,#0x40]
  ldr r2,[r3,#0x0]
  str r1,[r3,#0x4]
  ldr r3,[r3,#0x0]
  bx lr
