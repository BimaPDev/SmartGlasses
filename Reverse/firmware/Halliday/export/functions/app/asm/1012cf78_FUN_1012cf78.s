; FUN_1012cf78 @ 0x1012cf78 size=18
  cbz r0,0x1012cf86
  cmp r0,#0x3
  movw r0,#0x2005
  it ne
  mov.ne r0,#0x0
  bx lr
  movs r0,#0xb
  bx lr
