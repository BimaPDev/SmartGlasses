; FUN_2c06ba48 @ 0x2c06ba48 size=20
  push {r1,r2,r3,r5,lr}
  ldmia r6!,{r0,r1,r5,r7}
  strex r2,r1,[pc,#0x140]
  ldrb r2,[r7,#0x1b]
  movs r0,r0
  subs r5,r1,r4
  stmia r6,{r5,r6,r7}
  movs r7,r0
  asrs r7,r3,#0x20
