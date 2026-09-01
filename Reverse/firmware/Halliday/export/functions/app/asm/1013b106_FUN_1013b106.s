; FUN_1013b106 @ 0x1013b106 size=16
  cbz r0,0x1013b112
  cmp r0,#0x1
  ite ne
  mov.ne r0,#0x0
  mov.eq r0,#0x50
  bx lr
  movs r0,#0x40
  bx lr
