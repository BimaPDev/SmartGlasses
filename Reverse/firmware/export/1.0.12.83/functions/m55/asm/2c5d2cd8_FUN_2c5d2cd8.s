; FUN_2c5d2cd8 @ 0x2c5d2cd8 size=30
  ldr r3,[r0,#0x54]
  cbz r3,0x2c526006
  movs r1,#0x5f
  ldr r3,[0x2c526008]
  ldr r2,[0x2c52600c]
  bx lr
  push {r3,lr}
  bl 0x2c525874
  bl 0x2c5259c0
  pop.w {r3,lr}
  b.w 0x2c525fd8
