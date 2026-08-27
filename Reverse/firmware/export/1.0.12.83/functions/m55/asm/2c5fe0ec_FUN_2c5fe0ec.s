; FUN_2c5fe0ec @ 0x2c5fe0ec size=30
  push {r3,lr}
  ldr r3,[0x2c5fe10c]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c5fe0fe
  pop.w {r3,lr}
  b.w 0x2c4756d4
  ldr r3,[0x2c5fe110]
  movs r1,#0x13
  ldr r2,[0x2c5fe114]
  ldr r0,[0x2c5fe118]
  bl 0x2c668484
