; FUN_2c449776 @ 0x2c449776 size=36
  push {r0,r1,r2,r4,r6,r7,lr}
  strb r5,[r4,#0x1b]
  subs r3,r7,r0
  movs r4,#0xf1
  subs r1,r6,r4
  bne 0x2c449810
  str r4,[r6,#0x58]
  lsrs r6,r2,#0x14
  vld4.16 {d15[0x3],d17[0x3],d19[0x3],d21[0x3]},[r9:64],r12
  ldr r7,[sp,#0x200]
  ldmia r5!,{r0,r1,r2,r3,r4,r7}
  ldrh r1,[r7,#0x1e]
  stmia r4!,{r0,r1,r3,r6,r7}
  add r3,sp,#0x3f0
  strh r4,[r4,r3]
  adds r1,#0x7e
  stmia r1!,{r4,r5,r6,r7}
