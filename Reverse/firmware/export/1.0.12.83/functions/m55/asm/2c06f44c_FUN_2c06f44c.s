; FUN_2c06f44c @ 0x2c06f44c size=38
  push {r0,r1,r2,r3,r4,r5,r6,lr}
  ands r3,sp,#0x2d
  ldr r6,[0x2c06f514]
  lsrs r2,r0,#0x12
  subs r0,r1,#0x0
  lsls r4,r6,#0x10
  ldrb r0,[r6,#0x1f]
  strb r7,[r6,#0x1a]
  asrs r0,r0,#0x2
  str r5,[r1,#0x54]
  cmp r5,#0x28
  ldrh r3,[r3,#0x0]
  str r0,[r6,#0x20]
  cmp r3,#0x82
  ldr r5,[r2,#0x64]
  strh r0,[r7,#0x1e]
  vqshlu.u64 d16,d22,#0x12
