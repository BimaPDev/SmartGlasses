; FUN_10134912 @ 0x10134912 size=34
  push {r0,r1,r2,r3,r4,lr}
  mov r1,r3
  movs r3,#0x0
  strh.w r3,[sp,#0xe]
  movs r3,#0x2
  mov r0,r2
  str r3,[sp,#0x0]
  ldrh.w r2,[sp,#0x18]
  add.w r3,sp,#0xe
  bl 0x10134816
  add sp,#0x14
  pop.w pc
