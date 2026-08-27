; FUN_2c4ae20c @ 0x2c4ae20c size=26
  push {r3,lr}
  movs r2,#0x1
  movw r1,#0xa1b
  ldr r0,[0x2c4ae228]
  bl 0x2c4ae148
  cbz r0,0x2c4ae21e
  pop {r3,pc}
  pop.w {r3,lr}
  b.w 0x2c4adef8
