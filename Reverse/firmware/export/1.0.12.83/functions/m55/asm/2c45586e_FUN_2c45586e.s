; FUN_2c45586e @ 0x2c45586e size=26
  push {r0,r2,r3,r7,lr}
  strh r4,[r5,#0x2]
  add r6,sp,#0x3f8
  asrs r1,r6,#0xb
  movs r6,#0xd6
  stmia r3,{r2,r3,r5,r6,r7}
  b 0x2c455ca2
  cmp r9,pc
  b 0x2c4561dc
  cbnz r7,0x2c456204
  adcs r8,r9,#0x31800
  lsrs r1,r7,#0x1f
