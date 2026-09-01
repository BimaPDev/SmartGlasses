; FUN_10138a52 @ 0x10138a52 size=24
  push {r3,lr}
  bl 0x100e4bd8
  cbz r0,0x10138a64
  pop.w {r3,lr}
  movs r1,#0xd
  b.w 0x10138896
  mvn r0,#0x4
  pop {r3,pc}
