; FUN_2c5cb99c @ 0x2c5cb99c size=40
  push {r4,r5,lr}
  sub sp,#0xc
  ldr r5,[0x2c5cb9f8]
  bl 0x2c5d68f4
  ldr r2,[0x2c5cb9fc]
  subs r4,r0,#0x0
  ldr r1,[0x2c5cba00]
  ldr r3,[0x2c5cba04]
  mov.w r0,#0x4
  it ne
  mov.ne r5,r2
  str r1,[sp,#0x0]
  movw r2,#0x32e
  ldr r1,[0x2c5cba08]
  str r5,[sp,#0x4]
  bl 0x2c62c82c
