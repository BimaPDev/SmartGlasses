; FUN_1007cff4 @ 0x1007cff4 size=16
  movs r2,#0x0
  ldr r3,[0x1007d004]
  str r2,[r3,#0x0]
  str.w r2,[r3,#0x3]
  movs r2,#0xff
  strb r2,[r3,#0x7]
  bx lr
