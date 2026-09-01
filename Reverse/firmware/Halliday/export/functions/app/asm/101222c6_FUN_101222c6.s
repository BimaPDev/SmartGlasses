; FUN_101222c6 @ 0x101222c6 size=30
  lsrs r1,r2,#0x8
  strb r2,[r0,#0x0]
  strb r1,[r0,#0x1]
  lsrs r1,r2,#0x10
  lsrs r2,r2,#0x18
  strb r2,[r0,#0x3]
  lsrs r2,r3,#0x8
  strb r3,[r0,#0x4]
  strb r2,[r0,#0x5]
  lsrs r2,r3,#0x10
  lsrs r3,r3,#0x18
  strb r1,[r0,#0x2]
  strb r2,[r0,#0x6]
  strb r3,[r0,#0x7]
  bx lr
