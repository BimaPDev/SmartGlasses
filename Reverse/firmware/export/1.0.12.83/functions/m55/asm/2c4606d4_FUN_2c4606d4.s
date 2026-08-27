; FUN_2c4606d4 @ 0x2c4606d4 size=18
  push {r0,r1,r7,lr}
  adr r5,[0x2c46084c]
  strh r5,[r7,#0x2a]
  strh r2,[r1,#0x16]
  adds r1,#0x72
  stmia r1,{r0,r1,r5,r7}
  lsls r2,r3,#0x18
  strb r2,[r2,#0x8]
  adr r7,[0x2c46070c]
