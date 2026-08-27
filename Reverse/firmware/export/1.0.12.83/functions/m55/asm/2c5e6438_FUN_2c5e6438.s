; FUN_2c5e6438 @ 0x2c5e6438 size=32
  push {r3,lr}
  cmp r1,#0x1
  ldr r3,[0x2c5e6458]
  strb r1,[r3,#0x10]
  beq 0x2c5e644e
  bl 0x2c5e7538
  bl 0x2c5e6900
  movs r0,#0x1
  pop {r3,pc}
  movs r0,#0x8
  bl 0x2c5e6abc
  movs r0,#0x1
  pop {r3,pc}
