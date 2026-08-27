; FUN_2c4e8776 @ 0x2c4e8776 size=20
  push {r3,lr}
  bl 0x2c4efeec
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  bl 0x2c48876c
  ldr r0,[0x2c4e878c]
  pop {r3,pc}
