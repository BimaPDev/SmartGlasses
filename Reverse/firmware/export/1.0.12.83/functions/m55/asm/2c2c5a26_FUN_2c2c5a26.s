; FUN_2c2c5a26 @ 0x2c2c5a26 size=32
  lsls r2,r6,#0x3
  blx 0x2c9ce7d8
  movs r0,r0
  add.w r0,r12,#0xbf00bf
  push {r1,r2,r3,r4,r5,r6,r7,lr}
  movs r0,r0
  str r0,[sp,#0x3c]
  bkpt 0x5
  str r4,[r7,r3]
  lsrs r0,r0,#0x1c
  ldr r7,[sp,#0x280]
  ldrh r6,[r6,r2]
  lsls r2,r7,#0x3
  b 0x2c2c5656
