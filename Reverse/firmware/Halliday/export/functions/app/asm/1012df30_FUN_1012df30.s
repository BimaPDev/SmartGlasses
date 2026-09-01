; FUN_1012df30 @ 0x1012df30 size=18
  cmp r0,#0xe
  beq 0x1012df3e
  cmp r0,#0xf
  ite ne
  mov.ne r0,#0x8
  mov.eq r0,#0x20
  bx lr
  movs r0,#0x10
  bx lr
