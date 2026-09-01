; FUN_101222b6 @ 0x101222b6 size=16
  lsrs r3,r1,#0x8
  strb r1,[r0,#0x0]
  strb r3,[r0,#0x1]
  lsrs r3,r1,#0x10
  lsrs r1,r1,#0x18
  strb r3,[r0,#0x2]
  strb r1,[r0,#0x3]
  bx lr
