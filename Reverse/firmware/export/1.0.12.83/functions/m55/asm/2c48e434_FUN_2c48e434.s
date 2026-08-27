; FUN_2c48e434 @ 0x2c48e434 size=16
  movs r2,#0x0
  push {r3,lr}
  bl 0x2c48d620
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  pop {r3,pc}
