; FUN_2c281970 @ 0x2c281970 size=34
  push {r4,r5,r6,r7,lr}
  lsls r0,r0,#0x18
  bcc 0x2c281898
  ldr r4,[0x2c281d00]
  adds r1,#0xe
  adr r6,[0x2c281d3c]
  lsls r0,r0,#0x18
  blx 0x2c68035c
  adds r1,#0xe
  str r7,[sp,#0x3c0]
  movs r0,r0
  strh r3,[r1,#0x0]
  movs r7,r7
  movs r2,#0xf
  ldrh r0,[r6,#0x6]
  lsrs r0,r0,#0x10
