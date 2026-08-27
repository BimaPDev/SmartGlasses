; FUN_2c46bc5c @ 0x2c46bc5c size=18
  mov r2,r1
  ldr r1,[0x2c46bc70]
  push {r3,lr}
  bl 0x2c66b4f8
  subs r0,#0x1
  it ne
  mov.ne r0,#0x1
  pop {r3,pc}
