; FUN_1005d334 @ 0x1005d334 size=48
  movs r1,#0x0
  push {r4,lr}
  mov r0,r1
  movs r3,#0x2
  mov.w r2,#0x10000
  bl 0x1005d270
  movs r3,#0x2
  mov.w r2,#0x1000000
  mov.w r1,#0x10000000
  movs r0,#0x1
  bl 0x1005d270
  pop.w {r4,lr}
  movs r3,#0x2
  ldr r2,[0x1005d364]
  mov r0,r3
  ldr r1,[0x1005d368]
  b.w 0x1005d270
