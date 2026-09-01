; FUN_101364ca @ 0x101364ca size=16
  movs r1,#0x2
  push {r3,lr}
  bl 0x100d4588
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  pop {r3,pc}
