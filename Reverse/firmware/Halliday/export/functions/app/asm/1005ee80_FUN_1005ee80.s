; FUN_1005ee80 @ 0x1005ee80 size=32
  movw r3,#0x5060
  mov.w r1,#0x180
  ldr r2,[0x1005eea0]
  str r3,[r2,#0x0]
  str r3,[r2,#0x10]
  str.w r3,[r2,#-0x40]
  str.w r1,[r2,#-0x3c]
  str.w r3,[r2,#-0x38]
  str.w r3,[r2,#-0x34]
  bx lr
