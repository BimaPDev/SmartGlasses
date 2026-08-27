; FUN_2c4572e6 @ 0x2c4572e6 size=24
  push {r2,r3,r7,lr}
  str r7,[sp,#0x2c8]
  push {r1,r3,r6,r7,lr}
  asrs r1,r1,#0xc
  str r4,[sp,#0x30]
  adds r2,#0x8b
  lsls r5,r6,#0x1a
  ldrb r0,[r7,r0]
  ldrb r1,[r5,#0x15]
  ldc2 p6,cr11,[pc],#-0x1f8
  stmia r6!,{r0,r2,r4,r7}
