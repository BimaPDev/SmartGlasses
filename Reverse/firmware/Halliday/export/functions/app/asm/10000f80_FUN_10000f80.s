; FUN_10000f80 @ 0x10000f80 size=14
  push {r3,lr}
  bl 0x100007b0
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  pop {r3,pc}
