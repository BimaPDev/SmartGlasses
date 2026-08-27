; FUN_2c2be082 @ 0x2c2be082 size=26
  push {r0,r1,r2,r3,r4,r7,lr}
  bhi 0x2c2be12c
  adds r3,#0x1
  adds r3,#0xda
  lsrs r0,r2,#0x14
  strb r7,[r7,#0x3]
  strh r5,[r1,#0x0]
  ldrb r5,[r2,r5]
  strb r5,[r6,r6]
  ldmia r6!,{r0,r1,r2}
  strb r6,[r7,#0x1]
  subs r7,r4,#0x7
  lsrs r0,r2,#0x2
