; FUN_2c282bda @ 0x2c282bda size=32
  push {r0,r1,r2,r3,r5,r7,lr}
  b 0x2c282be8
  bl 0x2bec3a48
  vsri.64 q8,q10,#0x1
  push {r5,r6,r7}
  movs r0,#0xf
  str r2,[r5,#0x6c]
  ldrh r6,[r4,#0x3a]
  ldr r7,[0x2c282c7c]
  strb r4,[r1,#0x11]
  lsrs r2,r6,#0x1b
  lsls r0,r4,#0x1
  bl 0x2c486a0c
