; FUN_2c4b4b38 @ 0x2c4b4b38 size=36
  push {r4,lr}
  ldr r4,[0x2c4b4b5c]
  ldrb r3,[r4,#0x0]
  cbnz r3,0x2c4b4b42
  pop {r4,pc}
  bl 0x2c4b4ab0
  movs r0,#0x28
  bl 0x2c4bb9c8
  movs r0,#0xa0
  bl 0x2c673e08
  bl 0x2c4b4acc
  movs r3,#0x0
  strb r3,[r4,#0x0]
  pop {r4,pc}
