; FUN_2c476b28 @ 0x2c476b28 size=30
  push {r3,lr}
  ldr r3,[0x2c476b48]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c476b3a
  pop.w {r3,lr}
  b.w 0x2c4756d4
  ldr r3,[0x2c476b4c]
  movs r1,#0x13
  ldr r2,[0x2c476b50]
  ldr r0,[0x2c476b54]
  bl 0x2c668484
