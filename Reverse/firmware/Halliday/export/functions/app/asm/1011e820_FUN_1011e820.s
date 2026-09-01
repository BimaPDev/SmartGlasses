; FUN_1011e820 @ 0x1011e820 size=40
  push {r0,r1,r2,r4,r5,lr}
  mov r4,r0
  mov r5,r1
  mov.w r0,#0xffffffff
  mov.w r1,#0xffffffff
  str r2,[sp,#0x4]
  bl 0x10067e74
  mov r1,r5
  mov r0,r4
  ldr r2,[sp,#0x4]
  bl 0x10056824
  add sp,#0xc
  pop.w {r4,r5,lr}
  b.w 0x10067e68
