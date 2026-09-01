; FUN_10003a14 @ 0x10003a14 size=30
  teq r0,#0x0
  itt eq
  mov.eq r1,#0x0
  bx.eq lr
  push {r4,r5,lr}
  mov.w r4,#0x400
  add.w r4,r4,#0x32
  mov.w r5,#0x0
  mov.w r1,#0x0
  b 0x100038d4
