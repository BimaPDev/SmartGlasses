; FUN_101385a6 @ 0x101385a6 size=14
  ldrb r3,[r0,#0x4]
  ldr r2,[r0,#0x0]
  ldrb r0,[r2,r3]
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  bx lr
