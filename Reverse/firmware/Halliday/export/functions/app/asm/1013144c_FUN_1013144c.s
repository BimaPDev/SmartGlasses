; FUN_1013144c @ 0x1013144c size=20
  push {r0,r1,r2,lr}
  movs r1,#0x7
  str r0,[sp,#0x4]
  add r2,sp,#0x4
  movs r0,#0x0
  bl 0x100bc270
  add sp,#0xc
  pop.w pc
