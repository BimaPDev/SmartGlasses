; FUN_2c051eea @ 0x2c051eea size=22
  push {r1,r2,r3,r5,lr}
  lsls r3,r2,#0x14
  b 0x2c051f1e
  cmp r1,#0xfe
  adds r1,#0xb3
  ldc2 p3,cr2,[r5,#0x148]!
  ldrb r5,[r7,#0x18]
  str r0,[sp,#0x2d4]
  lsls r0,r4,#0x8
  str r5,[r6,r2]
