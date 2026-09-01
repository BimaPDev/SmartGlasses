; FUN_10138a10 @ 0x10138a10 size=28
  movs r1,#0x5
  b.w 0x10138896
  push {r3,lr}
  bl 0x100e4bd8
  cbz r0,0x10138a20
  pop.w {r3,lr}
  b.w 0x1013891e
  mvn r0,#0x4
  pop {r3,pc}
