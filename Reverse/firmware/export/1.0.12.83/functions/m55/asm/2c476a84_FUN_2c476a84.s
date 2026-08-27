; FUN_2c476a84 @ 0x2c476a84 size=30
  push {r3,lr}
  ldr r3,[0x2c476aa4]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c476a96
  pop.w {r3,lr}
  b.w 0x2c475708
  ldr r3,[0x2c476aa8]
  movs r1,#0x1a
  ldr r2,[0x2c476aac]
  ldr r0,[0x2c476ab0]
  bl 0x2c668484
