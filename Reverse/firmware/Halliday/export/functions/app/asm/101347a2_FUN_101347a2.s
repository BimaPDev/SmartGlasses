; FUN_101347a2 @ 0x101347a2 size=24
  movs r3,#0x0
  push {r0,r1,r2,lr}
  adds r0,#0x1
  mov r1,sp
  str r3,[sp,#0x0]
  str.w r3,[sp,#0x3]
  bl 0x10134778
  add sp,#0xc
  pop.w pc
