; FUN_2c134ec4 @ 0x2c134ec4 size=40
  push {r4,lr}
  ldr r2,[0x2c134eec]
  ldr r4,[0x2c134ef0]
  sub sp,#0x8
  str r2,[sp,#0x4]
  movw r1,#0x887
  ldr r3,[0x2c134ef4]
  ldr r2,[0x2c134ef8]
  str r4,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c135988
  movs r1,#0x2
  ldr r0,[0x2c134efc]
  add sp,#0x8
  pop.w {r4,lr}
  b.w 0x2c134e0c
