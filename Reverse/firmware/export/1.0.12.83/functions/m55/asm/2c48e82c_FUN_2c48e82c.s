; FUN_2c48e82c @ 0x2c48e82c size=16
  cbz r0,0x2c48e83a
  ldrb r0,[r0,#0xc]
  sub.w r0,r0,#0x4
  clz r0,r0
  lsrs r0,r0,#0x5
  bx lr
