; FUN_2c4e8e58 @ 0x2c4e8e58 size=24
  push {r3,lr}
  bl 0x2c4e9354
  ldr r3,[r0,#0x74]
  blx r3
  ldr r2,[0x2c4e8e70]
  ldr r3,[0x2c4e8e74]
  cmp r0,#0x0
  ite ne
  mov.ne r0,r2
  mov.eq r0,r3
  pop {r3,pc}
