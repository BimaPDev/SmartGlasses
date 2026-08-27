; FUN_2c28d798 @ 0x2c28d798 size=24
  push {r0,r2,r3,lr}
  strb r1,[r7,r7]
  strh r7,[r3,#0x2a]
  strb r6,[r3,r7]
  lsrs r2,r2,#0x1
  lsrs r2,r6,#0xb
  subs r0,r0,#0x3
  lsls r0,r2,#0xf
  lsls r6,r6,#0x3
  strb.w r4,[r1,#0x0]!
  b 0x2c28dbfa
