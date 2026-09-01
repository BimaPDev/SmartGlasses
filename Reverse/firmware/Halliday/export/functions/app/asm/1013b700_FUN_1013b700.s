; FUN_1013b700 @ 0x1013b700 size=34
  movs r3,#0x0
  mov.w r2,#0x3f800000
  str r3,[r0,#0x4]
  str r2,[r0,#0x0]
  str r3,[r0,#0x8]
  str r3,[r0,#0xc]
  str r2,[r0,#0x10]
  str r3,[r0,#0x14]
  str r3,[r0,#0x18]
  str r3,[r0,#0x1c]
  str r2,[r0,#0x20]
  str r2,[r0,#0x24]
  str r2,[r0,#0x28]
  str r3,[r0,#0x2c]
  movs r0,#0x0
  bx lr
