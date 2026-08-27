; FUN_140b3734 @ 0x140b3734 size=16
  ldr r3,[0x140b3744]
  ldrb r0,[r3,#0x0]
  sub.w r0,r0,#0x3
  clz r0,r0
  lsrs r0,r0,#0x5
  bx lr
