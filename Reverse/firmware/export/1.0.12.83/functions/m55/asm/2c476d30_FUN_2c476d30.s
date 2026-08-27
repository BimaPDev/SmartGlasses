; FUN_2c476d30 @ 0x2c476d30 size=30
  push {r3,lr}
  ldr r3,[0x2c476d50]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c476d42
  pop.w {r3,lr}
  b.w 0x2c475708
  ldr r3,[0x2c476d54]
  movs r1,#0x1a
  ldr r2,[0x2c476d58]
  ldr r0,[0x2c476d5c]
  bl 0x2c668484
