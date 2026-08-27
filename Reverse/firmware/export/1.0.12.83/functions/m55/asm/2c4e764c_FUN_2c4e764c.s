; FUN_2c4e764c @ 0x2c4e764c size=20
  push {r3,lr}
  bl 0x2c4eaed0
  ldr r2,[0x2c4e7660]
  ldr r3,[0x2c4e7664]
  cmp r0,#0x0
  ite ne
  mov.ne r0,r2
  mov.eq r0,r3
  pop {r3,pc}
