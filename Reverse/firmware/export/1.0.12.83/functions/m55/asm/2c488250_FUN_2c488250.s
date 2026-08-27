; FUN_2c488250 @ 0x2c488250 size=24
  push {r3,lr}
  bl 0x2c489968
  bl 0x2c489a64
  cbnz r0,0x2c48825e
  pop {r3,pc}
  ldr r0,[0x2c488268]
  pop.w {r3,lr}
  b.w 0x2c648600
