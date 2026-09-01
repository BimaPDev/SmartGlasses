; FUN_101364fa @ 0x101364fa size=16
  movs r1,#0x6
  push {r3,lr}
  bl 0x100d4588
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  pop {r3,pc}
