; FUN_10138c34 @ 0x10138c34 size=30
  push {r4,lr}
  bl 0x100e7e2c
  mov r3,r0
  cbnz r0,0x10138c4a
  pop.w {r4,lr}
  mov r2,r0
  movs r1,#0x20
  b.w 0x100e7d34
  bl 0x100f4f4c
  movs r0,#0x0
  pop {r4,pc}
