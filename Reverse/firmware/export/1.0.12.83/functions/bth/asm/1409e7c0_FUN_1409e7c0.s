; FUN_1409e7c0 @ 0x1409e7c0 size=30
  cbz r0,0x1409e7da
  push {r4,lr}
  mov r4,r0
  bl 0x140b4d50
  cbnz r0,0x1409e7d6
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x140b4d88
  movs r0,#0x0
  pop {r4,pc}
  movs r0,#0x0
  bx lr
