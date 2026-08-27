; FUN_2c002f7c @ 0x2c002f7c size=16
  push {r4,lr}
  mov r4,r0
  bl 0x2c002454
  cbnz r0,0x2c002f8a
  ldr r3,[0x2c002f8c]
  strb r4,[r3,#0x0]
  pop {r4,pc}
