; FUN_2c289fc6 @ 0x2c289fc6 size=24
  push {r0,r4,lr}
  movs r0,r2
  ands r7,r7
  adr r0,[0x2c28a000]
  lsrs r0,r0,#0x14
  vqshlu.u64 q10,q11,#0x3f
  str r3,[r5,#0x64]
  str r6,[sp,#0x23c]
  lsls r0,r2,#0xd
  ldr r1,[0x2c28a0ec]
  ldrh r2,[r6,#0x36]
