; FUN_2c45a850 @ 0x2c45a850 size=20
  push {r0,r4,r5,r7,lr}
  strh r3,[r6,#0x32]
  asrs r1,r1,#0xb
  strh r3,[r4,#0x34]
  stmia r7!,{r0,r1,r3,r6}
  str r4,[sp,#0x1cc]
  ldr r6,[sp,#0x3b0]
  ldr r6,[r1,#0x60]
  ldrh r3,[r5,#0x34]
  stmia r7,{r0,r1,r2,r4,r6,r7}
