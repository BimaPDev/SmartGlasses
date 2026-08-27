; FUN_2c10fa52 @ 0x2c10fa52 size=24
  push {r4,r5,r6,lr}
  adds r0,#0xfd
  tst r2,r5
  ldrh r1,[r4,r7]
  sbcs r3,r10,#0x20202020
  b 0x2c10fab6
  asrs r0,r2,#0xd
  asrs r2,r7,#0x3
  subs r2,r4,r0
  movs r0,#0x0
  str r2,[r3,r0]
