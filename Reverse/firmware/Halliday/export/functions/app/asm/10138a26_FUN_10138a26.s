; FUN_10138a26 @ 0x10138a26 size=34
  cbz r0,0x10138792
  b.w 0x101342d2
  mvn r0,#0x15
  bx lr
  push {r3,lr}
  bl 0x100e4bd8
  cbz r0,0x10138a36
  pop.w {r3,lr}
  b.w 0x1013878c
  mvn r0,#0x4
  pop {r3,pc}
