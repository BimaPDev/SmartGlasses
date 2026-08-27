; FUN_2c5ab29c @ 0x2c5ab29c size=44
  push {r3,lr}
  bl 0x2c5abf68
  bl 0x2c5ac3f0
  cbnz r0,0x2c5ab2ac
  movs r0,#0x0
  pop {r3,pc}
  bl 0x2c5abf68
  bl 0x2c5ac4a4
  cmp r0,#0x0
  bne 0x2c5ab2a8
  bl 0x2c5abf68
  bl 0x2c5ac3d0
  eor r0,r0,#0x1
  uxtb r0,r0
  pop {r3,pc}
