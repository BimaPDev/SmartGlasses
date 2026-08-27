; FUN_2c29fa50 @ 0x2c29fa50 size=26
  push {r2,r3,lr}
  ldrb r5,[r2,#0x1]
  strb r5,[r3,#0x15]
  ldr r5,[r2,#0x74]
  lsrs r0,r2,#0x5
  lsls r1,r4,#0x3
  beq 0x2c29fa70
  adds r0,#0x6e
  bl 0x2bfa2276
  lsls r0,r2,#0x3
  lsls r0,r0,#0xc
  lsls r4,r6,#0x3
