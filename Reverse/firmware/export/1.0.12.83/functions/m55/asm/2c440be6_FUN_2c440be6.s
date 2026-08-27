; FUN_2c440be6 @ 0x2c440be6 size=16
  push {r0,r1,lr}
  subs r7,r6,r0
  strb r7,[r2,#0x17]
  ldrh r3,[r7,r3]
  adds r3,r4,#0x2
  strb r5,[r7,#0x13]
  str r1,[sp,#0x230]
  stmia r4,{r2,r4,r5,r7}
