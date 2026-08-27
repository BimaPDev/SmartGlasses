; FUN_2c48e84c @ 0x2c48e84c size=16
  cbz r0,0x2c48e85a
  ldrb r0,[r0,#0xc]
  sub.w r0,r0,#0x10
  clz r0,r0
  lsrs r0,r0,#0x5
  bx lr
