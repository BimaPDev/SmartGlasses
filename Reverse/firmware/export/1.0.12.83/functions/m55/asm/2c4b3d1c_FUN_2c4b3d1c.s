; FUN_2c4b3d1c @ 0x2c4b3d1c size=30
  mov r3,r0
  movs r2,#0x0
  mov.w r1,#0x3f800000
  movs r0,#0x0
  str r2,[r3,#0x4]
  str r1,[r3,#0x0]
  str r2,[r3,#0x8]
  str r2,[r3,#0xc]
  str r1,[r3,#0x10]
  str r2,[r3,#0x14]
  str r2,[r3,#0x18]
  str r2,[r3,#0x1c]
  str r1,[r3,#0x20]
  bx lr
