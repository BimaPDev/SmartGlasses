; FUN_2c606c04 @ 0x2c606c04 size=14
  cbz r0,0x2c606c10
  ldr r0,[r0,#0x0]
  subs r0,r0,r1
  clz r0,r0
  lsrs r0,r0,#0x5
  bx lr
