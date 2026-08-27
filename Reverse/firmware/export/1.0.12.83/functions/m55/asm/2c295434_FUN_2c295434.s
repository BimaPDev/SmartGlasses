; FUN_2c295434 @ 0x2c295434 size=36
  ldr r0,[r0,#0x40]
  push {r1,r2,r3,r5,lr}
  ldrd r7,r0,[r3,#0x38]!
  ldr r7,[sp,#0x88]
  subs r7,#0x22
  ldrsh r0,[r2,r6]
  lsls r0,r3,#0x1
  lsls r7,r4,#0x3
  add sp,#0x30
  ands r0,r0
  and lr,r5,#0x0
  lsls r0,r6,#0x15
  lsls r4,r6,#0x3
  movs r0,r0
  lsls r7,r3,#0x1
  b 0x2c295258
