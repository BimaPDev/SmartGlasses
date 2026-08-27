; FUN_2c434c2e @ 0x2c434c2e size=20
  push {r0,r4,r5,r6,r7,lr}
  cmp r2,#0x3
  blt 0x2c434c70
  str r2,[sp,#0x9c]
  revsh r5,r6
  strh r1,[r2,r6]
  ldrb r1,[r6,r1]
  ldrsb r5,[r4,r5]
  strb r1,[r6,#0xc]
  ldrh r3,[r4,#0x30]
