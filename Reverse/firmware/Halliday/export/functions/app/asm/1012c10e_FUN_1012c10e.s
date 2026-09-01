; FUN_1012c10e @ 0x1012c10e size=32
  mov r3,r0
  ldrb.w r2,[r3,#0x32]
  ldrh r0,[r0,#0x2e]
  lsls r2,r2,#0x1f
  bpl 0x1012c12c
  movs r2,#0x7
  ldrh r3,[r3,#0x2c]
  udiv r3,r3,r2
  udiv r2,r0,r3
  mls r0,r3,r2,r0
  uxth r0,r0
  bx lr
