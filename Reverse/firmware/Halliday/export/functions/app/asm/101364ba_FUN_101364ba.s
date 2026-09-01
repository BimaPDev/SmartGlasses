; FUN_101364ba @ 0x101364ba size=16
  movs r1,#0x1
  push {r3,lr}
  bl 0x100d4588
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  pop {r3,pc}
