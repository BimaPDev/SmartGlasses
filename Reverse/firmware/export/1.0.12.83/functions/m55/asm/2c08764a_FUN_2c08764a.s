; FUN_2c08764a @ 0x2c08764a size=10
  push {r1,r2,r3,r4,r6,r7,lr}
  cmp r5,#0xf0
  stmia r2,{r2,r3,r4}
  stc2 p5,cr5,[lr,#0x2bc]!
