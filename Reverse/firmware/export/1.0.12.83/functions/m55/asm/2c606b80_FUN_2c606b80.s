; FUN_2c606b80 @ 0x2c606b80 size=18
  ldrh r3,[r0,#0x20]
  tst r1,r3
  bic.w r2,r3,r1
  bne 0x2c606b8c
  bx lr
  mov r1,r2
  b.w 0x2c6061ec
