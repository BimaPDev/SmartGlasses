; FUN_2c44b426 @ 0x2c44b426 size=34
  lsls r7,r7,#0xf
  ldrb r0,[r1,#0x14]
  movs r1,r6
  ldrh r0,[r3,#0x8]
  asrs r7,r4,#0x6
  ldrh r7,[r6,#0x2c]
  lsrs r3,r4,#0x14
  ldrb r4,[r0,#0x13]
  b 0x2c44b102
  movs r6,#0x20
  cbnz r7,0x2c44b490
  push {r1,r3,r4,r5,r6,r7,lr}
  add r2,sp,#0xd8
  b 0x2c44b422
  ldrb r1,[r0,#0x1f]
  bcs 0x2c44b3cc
  stmia r4!,{r0,r1,r3,r5,r7}
