; FUN_2c472eb0 @ 0x2c472eb0 size=34
  push {r4,lr}
  mov r3,r1
  ldr r4,[0x2c472ed4]
  ldr r1,[0x2c472ed8]
  sub sp,#0x8
  cmp r2,#0x0
  ite ne
  mov.ne r2,r4
  mov.eq r2,r1
  mov r1,r0
  subs r0,#0x8
  str r0,[sp,#0x0]
  ldr r0,[0x2c472edc]
  bl 0x2c66ac44
  add sp,#0x8
  pop {r4,pc}
