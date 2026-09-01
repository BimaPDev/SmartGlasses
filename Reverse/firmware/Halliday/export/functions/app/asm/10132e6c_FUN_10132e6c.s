; FUN_10132e6c @ 0x10132e6c size=24
  movs r3,#0x1
  push {r4,lr}
  lsl.w r4,r3,r1
  mvns r1,r4
  bl 0x10132e56
  tst r4,r0
  ite ne
  mov.ne r0,#0x1
  mov.eq r0,#0x0
  pop {r4,pc}
