; FUN_2c101f66 @ 0x2c101f66 size=32
  push {r0,r4,lr}
  str r4,[r6,#0x3c]
  ldrh r0,[r3,#0x36]
  subs r7,#0xf5
  ldrsb r1,[r3,r0]
  subs r6,#0xe8
  asrs r2,r0,#0x20
  subs r1,r0,#0x6
  lsrs r7,r7,#0x11
  asrs r6,r0,#0x20
  ldrh r0,[r0,r4]
  ldrb r3,[r1,#0x0]
  lsls r6,r6,#0x1
  strh r3,[r1,#0x0]
  strb r6,[r0,#0x9]
  bx r8
