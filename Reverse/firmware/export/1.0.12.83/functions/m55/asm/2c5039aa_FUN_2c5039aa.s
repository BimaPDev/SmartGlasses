; FUN_2c5039aa @ 0x2c5039aa size=36
  push {r3,lr}
  bl 0x2c503ed8
  pop.w {r3,lr}
  b.w 0x2c504094
  push {r4,lr}
  ldr r3,[0x2c5040d0]
  sub sp,#0x8
  ldr r4,[0x2c5040d4]
  movs r2,#0x7b
  str r3,[sp,#0x4]
  movs r0,#0x4
  ldr r1,[0x2c5040d8]
  str r4,[sp,#0x0]
  bl 0x2c62c82c
