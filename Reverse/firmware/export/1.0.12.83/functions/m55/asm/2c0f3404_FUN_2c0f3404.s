; FUN_2c0f3404 @ 0x2c0f3404 size=38
  push {r1,r2,r7,lr}
  lsrs r6,r7,#0x20
  lsrs r2,r0,#0x8
  ldc2 p5,cr0,[r6,#-0x334]
  lsls r0,r4,#0xe
  lsrs r0,r0,#0x10
  and r0,r3,#0x20
  strd r8,lr,[r5,#0x54]!
  adds r1,#0xa1
  ldrsb r1,[r1,r0]
  ldr r0,[r3,#0x6c]
  ldrh r0,[r1,#0x12]
  strh r5,[r2,#0x32]
  ldrh r5,[r6,#0x4]
  adr r0,[0x2c0f344c]
  movs r0,r1
