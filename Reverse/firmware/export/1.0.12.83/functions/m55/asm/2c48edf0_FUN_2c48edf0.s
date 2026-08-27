; FUN_2c48edf0 @ 0x2c48edf0 size=26
  push {r3,lr}
  bl 0x2c4f8730
  cbz r0,0x2c48edfc
  movs r0,#0x2
  pop {r3,pc}
  bl 0x2c4fa6d0
  cmp r0,#0x0
  ite eq
  mov.eq r0,#0xff
  mov.ne r0,#0x1
  pop {r3,pc}
