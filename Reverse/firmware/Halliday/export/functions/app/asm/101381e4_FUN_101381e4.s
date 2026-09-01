; FUN_101381e4 @ 0x101381e4 size=36
  push {r3,r4,r5,lr}
  mov r5,r1
  add.w r4,r0,#0x8
  movs r1,#0x1
  mov r0,r4
  bl 0x101327ba
  movs r1,#0x2
  mov r0,r4
  bl 0x101327ba
  mov r1,r5
  mov r0,r4
  pop.w {r3,r4,r5,lr}
  b.w 0x101327c8
