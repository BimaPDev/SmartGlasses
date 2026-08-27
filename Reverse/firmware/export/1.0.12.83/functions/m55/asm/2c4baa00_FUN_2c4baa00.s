; FUN_2c4baa00 @ 0x2c4baa00 size=36
  push {r4,lr}
  mov r12,r0
  ldr r4,[0x2c4baa24]
  ldr r0,[0x2c4baa28]
  sub sp,#0x8
  mov r3,r2
  mov r2,r1
  cmp.w r12,#0x1
  it ne
  mov.ne r0,r4
  movs r4,#0x0
  mov r1,r12
  str r4,[sp,#0x0]
  bl 0x2c4c2118
  add sp,#0x8
  pop {r4,pc}
