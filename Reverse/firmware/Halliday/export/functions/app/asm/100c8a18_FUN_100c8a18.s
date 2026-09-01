; FUN_100c8a18 @ 0x100c8a18 size=20
  push {r3,lr}
  ldr r0,[0x100c8a2c]
  bl 0x10132e28
  tst r0,#0x8
  ldr r0,[0x100c8a30]
  it eq
  mov.eq r0,#0x0
  pop {r3,pc}
