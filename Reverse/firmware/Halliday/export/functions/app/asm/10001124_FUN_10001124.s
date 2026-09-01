; FUN_10001124 @ 0x10001124 size=46
  mov.w r2,#0x40000000
  ldr r3,[r2,#0x0]
  orr r3,r3,#0x1000000
  str r3,[r2,#0x0]
  add.w r2,r2,#0x1000
  ldr r3,[r2,#0x4]
  adds r2,#0x4
  orr r3,r3,#0x1000000
  str r3,[r2,#0x0]
  ldr r3,[0x10001154]
  ldr r2,[0x10001158]
  ldr.w r1,[r3,#0x3fc]
  str r1,[r2,#0x0]
  ldr.w r2,[r3,#0x400]
  ldr r3,[0x1000115c]
  str r2,[r3,#0x0]
  bx lr
