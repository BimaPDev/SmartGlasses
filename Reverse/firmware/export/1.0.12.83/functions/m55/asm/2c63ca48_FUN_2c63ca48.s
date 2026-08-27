; FUN_2c63ca48 @ 0x2c63ca48 size=32
  push {r3,lr}
  ldr r3,[0x2c63ca68]
  ldrb r2,[r3,#0x0]
  cbnz r2,0x2c63ca52
  pop {r3,pc}
  movs r2,#0x0
  strb r2,[r3,#0x0]
  bl 0x2c63c6d4
  cmp r0,#0x0
  beq 0x2c63ca50
  bl 0x2c48a85c
  ldr r3,[0x2c63ca6c]
  strb r0,[r3,#0x0]
  pop {r3,pc}
