; FUN_1011de62 @ 0x1011de62 size=16
  adds r0,#0x8
  lda r3,[r0]
  cmp r3,#0x0
  ite gt
  mov.gt r0,#0x2
  mov.le r0,#0x1
  bx lr
