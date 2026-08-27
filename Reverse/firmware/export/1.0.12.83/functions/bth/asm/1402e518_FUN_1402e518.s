; FUN_1402e518 @ 0x1402e518 size=16
  mov.w r1,#0x10000
  movs r2,#0x48
  ldr r3,[0x1402e528]
  str r1,[r3,#0x10]
  str.w r2,[r3,#0xc8]
  bx lr
