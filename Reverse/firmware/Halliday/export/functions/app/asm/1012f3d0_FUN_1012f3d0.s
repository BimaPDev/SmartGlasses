; FUN_1012f3d0 @ 0x1012f3d0 size=28
  mov.w r3,#0x3e8
  muls r2,r1
  sdiv r2,r2,r3
  str r2,[r0,#0x8]
  cbz r1,0x1012f3ea
  mov.w r3,#0x8000000
  sdiv r2,r3,r2
  strd r2,r2,[r0,#0xc]
  bx lr
