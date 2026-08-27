; FUN_2c4f5fc0 @ 0x2c4f5fc0 size=42
  push {r3,lr}
  movs r0,#0x0
  bl 0x2c4b73e8
  cbnz r0,0x2c4f5fda
  bl 0x2c4b73d0
  cbnz r0,0x2c4f5fe2
  ldr r2,[0x2c4f5fec]
  ldr r3,[0x2c4f5ff0]
  strb r0,[r2,#0x0]
  str r0,[r3,#0x0]
  pop {r3,pc}
  mov r1,r0
  ldr r0,[0x2c4f5ff4]
  bl 0x2c673ca8
  mov r1,r0
  ldr r0,[0x2c4f5ff8]
  bl 0x2c673ca8
