; FUN_1011febc @ 0x1011febc size=14
  cbz r0,0x1011fec8
  mov.w r3,#0x12c
  lsls r0,r0,#0xa
  udiv r0,r0,r3
  bx lr
