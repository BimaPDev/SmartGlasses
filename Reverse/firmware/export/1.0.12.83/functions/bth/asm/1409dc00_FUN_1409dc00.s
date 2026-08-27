; FUN_1409dc00 @ 0x1409dc00 size=12
  ldr r3,[0x1409dc0c]
  ldrb r0,[r3,#0x6]
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  bx lr
