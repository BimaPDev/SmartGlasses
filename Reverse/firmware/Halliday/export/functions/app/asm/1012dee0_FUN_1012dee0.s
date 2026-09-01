; FUN_1012dee0 @ 0x1012dee0 size=18
  cmp r0,#0x7
  beq 0x1012deee
  sub.w r3,r0,#0xc
  rsbs r0,r3
  adcs r0,r3
  bx lr
  movs r0,#0x1
  bx lr
