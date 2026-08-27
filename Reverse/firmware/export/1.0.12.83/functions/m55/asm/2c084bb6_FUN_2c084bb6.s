; FUN_2c084bb6 @ 0x2c084bb6 size=20
  push {r4,r6,lr}
  strh r0,[r4,#0x8]
  subs r1,#0xb1
  lsrs r0,r4,#0x3
  cmp r6,#0x0
  adr r6,[0x2c084e14]
  asrs r3,r0,#0x18
  bkpt 0xe9
  lsls r1,r0,#0x18
  strh r3,[r0,r1]
