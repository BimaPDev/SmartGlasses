; FUN_2c20308e @ 0x2c20308e size=36
  push {r0,r1,r2,r3,r6,lr}
  ldrh r7,[r5,r2]
  lsls r0,r2,#0x3
  add r5,sp,#0x32c
  lsrs r0,r0,#0xc
  str.w pc,[r5,#0x727]
  vqadd.u8 q0,q12,q13
  tst r1,r0
  movs r0,r0
  add.w r0,r3,#0x800000
  lsls r0,r0,#0xc
  lsls r5,r6,#0x3
  movs r0,r0
  add.w r0,r3,#0x800000
