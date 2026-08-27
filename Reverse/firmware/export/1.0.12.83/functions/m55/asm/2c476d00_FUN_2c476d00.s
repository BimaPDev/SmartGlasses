; FUN_2c476d00 @ 0x2c476d00 size=30
  push {r3,lr}
  ldr r3,[0x2c476d20]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c476d12
  pop.w {r3,lr}
  b.w 0x2c4756d4
  ldr r3,[0x2c476d24]
  movs r1,#0x13
  ldr r2,[0x2c476d28]
  ldr r0,[0x2c476d2c]
  bl 0x2c668484
