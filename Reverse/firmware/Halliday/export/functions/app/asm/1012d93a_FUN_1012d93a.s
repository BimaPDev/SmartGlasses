; FUN_1012d93a @ 0x1012d93a size=22
  push {r3,lr}
  bl 0x1012d0ce
  cmp r0,#0x0
  blt 0x1012d94c
  pop.w {r3,lr}
  b.w 0x1005c270
  movs r0,#0x0
  pop {r3,pc}
