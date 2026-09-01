; FUN_10000d18 @ 0x10000d18 size=26
  ldr r1,[0x10000d34]
  ldr r3,[0x10000d38]
  ldr r2,[r1,#0x0]
  mov.w r0,#0x1040
  str.w r2,[r3,#0x2e0]
  movs r2,#0x1
  ldr r3,[0x10000d3c]
  str r2,[r3,#0x0]
  str r0,[r1,#0x0]
  str r2,[r3,#0x0]
  bx lr
