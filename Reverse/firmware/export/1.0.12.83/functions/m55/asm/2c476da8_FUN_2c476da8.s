; FUN_2c476da8 @ 0x2c476da8 size=30
  push {r3,lr}
  ldr r3,[0x2c476dc8]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c476dba
  pop.w {r3,lr}
  b.w 0x2c4756d4
  ldr r3,[0x2c476dcc]
  movs r1,#0x6d
  ldr r2,[0x2c476dd0]
  ldr r0,[0x2c476dd4]
  bl 0x2c668484
