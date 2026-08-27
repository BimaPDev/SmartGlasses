; FUN_2c105cd0 @ 0x2c105cd0 size=20
  push {r0,r1,r2,r4,r5,lr}
  stmia r0!,{r2}
  movs r0,r4
  bmi 0x2c105d4a
  bcc 0x2c105d38
  adr r1,[0x2c105cf0]
  str r2,[r0,#0x1c]
  movs r5,#0x0
  movs r0,#0xc0
  adds r1,#0x0
