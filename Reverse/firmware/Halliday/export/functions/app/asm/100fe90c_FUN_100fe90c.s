; FUN_100fe90c @ 0x100fe90c size=20
  push {lr}
  sub sp,#0xc
  str r1,[sp,#0x4]
  movs r2,#0x0
  add r1,sp,#0x4
  bl 0x100fe840
  add sp,#0xc
  pop.w pc
