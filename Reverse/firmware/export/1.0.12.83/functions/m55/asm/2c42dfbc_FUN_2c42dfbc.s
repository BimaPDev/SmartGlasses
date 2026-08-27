; FUN_2c42dfbc @ 0x2c42dfbc size=16
  push {r1,r4,r6,r7,lr}
  strh r4,[r1,#0x1e]
  ldrh r0,[r3,#0x10]
  pop {r7}
  stmia r3,{r1,r3,r4,r5,r6,r7}
  strb r5,[r3,r5]
  subs r7,#0xb
  subs r7,#0xef
