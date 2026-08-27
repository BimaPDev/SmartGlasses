; FUN_2c45c06c @ 0x2c45c06c size=16
  push {r1,r2,r4,r5,lr}
  subs r4,#0x35
  str r2,[r4,#0x60]
  stmia r0!,{r1,r4}
  stmia r6!,{r0,r1,r2,r3,r7}
  adr r3,[0x2c45c414]
  b.w 0x2bb02dda
