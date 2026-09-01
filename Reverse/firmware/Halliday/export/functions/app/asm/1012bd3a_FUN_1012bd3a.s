; FUN_1012bd3a @ 0x1012bd3a size=28
  push {r0,r1,r2,lr}
  mov r0,r1
  movs r1,#0x10
  str r0,[sp,#0x4]
  bl 0x10124c20
  mov.w r1,#0x400
  ldr r0,[sp,#0x4]
  add sp,#0xc
  pop.w lr
  b.w 0x10124cea
