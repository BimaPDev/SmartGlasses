; FUN_2c5ea678 @ 0x2c5ea678 size=38
  push {r4,lr}
  ldr r3,[0x2c5ea6a0]
  mov r4,r1
  strb r1,[r3,#0x10]
  bl 0x2c5e6f98
  cmp r4,#0x1
  beq 0x2c5ea694
  bl 0x2c5e7538
  bl 0x2c5e6900
  movs r0,#0x1
  pop {r4,pc}
  movs r0,#0x7
  bl 0x2c5e6abc
  movs r0,#0x1
  pop {r4,pc}
