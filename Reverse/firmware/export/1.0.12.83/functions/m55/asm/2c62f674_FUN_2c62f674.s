; FUN_2c62f674 @ 0x2c62f674 size=28
  push {r3,lr}
  movs r0,#0x1
  bl 0x2c6020dc
  bl 0x2c673c88
  bl 0x2c6741d8
  ldr r1,[0x2c62f690]
  ldr r3,[0x2c62f694]
  movs r2,#0x1
  str r0,[r1,#0x0]
  strb r2,[r3,#0x0]
  pop {r3,pc}
