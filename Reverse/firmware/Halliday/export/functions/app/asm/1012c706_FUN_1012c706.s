; FUN_1012c706 @ 0x1012c706 size=30
  push {r3,lr}
  mov.w r0,#0x8000
  bl 0x1010c4a0
  mov.w r1,#0x1e0
  mov r0,r1
  bl 0x1010c8e8
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  rsbs r0,r0
  pop {r3,pc}
