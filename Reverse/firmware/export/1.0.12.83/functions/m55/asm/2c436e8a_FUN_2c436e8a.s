; FUN_2c436e8a @ 0x2c436e8a size=18
  strb r6,[r2,#0x4]
  ldmia r6!,{r0,r3,r4,r5,r7}
  vsubl.u8 q8,d6,d30
  str r6,[r1,#0x30]
  b 0x2c436416
  push {r1,r3,r7,lr}
  movs r3,#0xa4
  b 0x2c436a52
