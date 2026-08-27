; FUN_140a0ecc @ 0x140a0ecc size=16
  movs r2,#0x1
  push {r3,lr}
  ldr r3,[0x140a0edc]
  strb r2,[r3,#0x0]
  bl 0x140e54c8
  movs r0,#0x0
  pop {r3,pc}
