; FUN_2c5fbcd4 @ 0x2c5fbcd4 size=30
  push {r3,lr}
  ldr r3,[0x2c5fbcf4]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c5fbce6
  pop.w {r3,lr}
  b.w 0x2c475708
  ldr r3,[0x2c5fbcf8]
  movs r1,#0x1a
  ldr r2,[0x2c5fbcfc]
  ldr r0,[0x2c5fbd00]
  bl 0x2c668484
