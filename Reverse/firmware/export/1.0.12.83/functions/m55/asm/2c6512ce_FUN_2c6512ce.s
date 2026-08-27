; FUN_2c6512ce @ 0x2c6512ce size=22
  push {r3,lr}
  ldr r3,[r0,#0x8]
  cmp r3,#0x0
  blt 0x2c6512dc
  bl 0x2c6510a8
  pop {r3,pc}
  movs r2,#0x0
  bl 0x2c6510c4
  b 0x2c6512da
