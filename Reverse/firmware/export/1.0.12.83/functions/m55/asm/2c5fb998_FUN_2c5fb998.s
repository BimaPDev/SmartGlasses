; FUN_2c5fb998 @ 0x2c5fb998 size=18
  ldr r3,[0x2c5fb9ac]
  uxtb r0,r0
  ldrb r0,[r3,r0]
  sub.w r0,r0,#0x1
  clz r0,r0
  lsrs r0,r0,#0x5
  bx lr
