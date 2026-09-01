; FUN_1012f3ec @ 0x1012f3ec size=32
  mov.w r3,#0x3e8
  muls r2,r1
  sdiv r3,r2,r3
  str r3,[r0,#0x14]
  cbz r1,0x1012f40a
  mov.w r2,#0x8000000
  sdiv r2,r2,r3
  str r2,[r0,#0x18]
  rsb.w r2,r2,#0x8000000
  str r2,[r0,#0x1c]
  bx lr
