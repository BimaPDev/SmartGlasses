; FUN_2c06d6d4 @ 0x2c06d6d4 size=16
  push {r0,r4,r6,r7,lr}
  strh r7,[r7,#0xe]
  blt 0x2c06d6da
  lsrs r0,r4,#0x3
  add r6,sp,#0x0
  ldr r7,[sp,#0x2c0]
  lsrs r3,r7,#0x1f
  stmia r1!,{r5,r6,r7}
