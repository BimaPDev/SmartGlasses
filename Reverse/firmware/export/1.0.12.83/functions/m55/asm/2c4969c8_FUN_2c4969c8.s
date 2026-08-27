; FUN_2c4969c8 @ 0x2c4969c8 size=16
  ldr r3,[0x2c4969d8]
  ldrb r0,[r3,#0x0]
  sub.w r0,r0,#0x1
  clz r0,r0
  lsrs r0,r0,#0x5
  bx lr
