; FUN_2c2d8f92 @ 0x2c2d8f92 size=26
  push {lr}
  str r5,[r3,#0x0]
  movs r0,r0
  movs r5,r7
  ldr r5,[0x2c2d8f9c]
  lsls r0,r2,#0xd
  lsls r0,r0,#0x3
  movs r0,r0
  ldmia r7!,{r0,r2}
  str r7,[r7,#0x48]
  lsls r0,r0,#0x14
  stmia r7,{r1,r2,r4,r5,r6,r7}
  movs r0,r0
