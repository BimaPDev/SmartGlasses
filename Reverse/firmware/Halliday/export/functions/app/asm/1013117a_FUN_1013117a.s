; FUN_1013117a @ 0x1013117a size=8
  cmp r1,#0x0
  it gt
  str.gt r1,[r0,#0xc]
  bx lr
