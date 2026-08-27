; FUN_2c5e1150 @ 0x2c5e1150 size=18
  ldr r3,[0x2c5e1164]
  ldrb.w r0,[r3,#0x38]
  sub.w r0,r0,#0x1
  clz r0,r0
  lsrs r0,r0,#0x5
  bx lr
