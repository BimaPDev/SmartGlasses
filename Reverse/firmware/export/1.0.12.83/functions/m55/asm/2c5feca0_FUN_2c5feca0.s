; FUN_2c5feca0 @ 0x2c5feca0 size=30
  push {r3,lr}
  ldr r3,[0x2c5fecc0]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c5fecb2
  pop.w {r3,lr}
  b.w 0x2c4756d4
  ldr r3,[0x2c5fecc4]
  movs r1,#0x13
  ldr r2,[0x2c5fecc8]
  ldr r0,[0x2c5feccc]
  bl 0x2c668484
