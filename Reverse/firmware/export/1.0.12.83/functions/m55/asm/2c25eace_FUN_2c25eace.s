; FUN_2c25eace @ 0x2c25eace size=28
  push {r0,r1,r3,lr}
  strb r5,[r2,r5]
  ldrh r5,[r2,r1]
  lsls r0,r4,#0x3
  adr r0,[0x2c25eb04]
  str r0,[sp,#0x6c]
  adds r1,#0x0
  lsls r0,r0,#0x1c
  lsls r0,r4,#0x3
  vhadd.s8 d3,d28,d3
  ssat r2,#0x0,r3
  adds r0,r2,r1
