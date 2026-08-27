; FUN_2c4ba980 @ 0x2c4ba980 size=36
  push {lr}
  sub sp,#0xc
  mov r12,r0
  ldr r0,[0x2c4ba9a4]
  str r3,[sp,#0x0]
  ldr r3,[0x2c4ba9a8]
  cmp.w r12,#0x1
  it eq
  mov.eq r0,r3
  mov r3,r2
  mov r2,r1
  mov r1,r12
  bl 0x2c4c1ca4
  add sp,#0xc
  pop.w pc
