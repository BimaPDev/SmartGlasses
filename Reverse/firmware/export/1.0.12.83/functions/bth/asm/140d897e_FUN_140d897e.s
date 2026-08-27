; FUN_140d897e @ 0x140d897e size=22
  push {r3,lr}
  mov r0,r1
  mov r1,r2
  bl 0x140dc52c
  subs r3,r0,#0x0
  it ne
  mov.ne r3,#0x1
  orr.w r0,r3,r0, asr #0x1e
  pop {r3,pc}
