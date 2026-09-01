; FUN_10132104 @ 0x10132104 size=26
  push {r0,r1,r2,lr}
  bl 0x10131956
  str r0,[sp,#0x4]
  bl 0x100e725c
  ldr r0,[sp,#0x4]
  bl 0x1013197e
  movs r0,#0x0
  add sp,#0xc
  pop.w pc
