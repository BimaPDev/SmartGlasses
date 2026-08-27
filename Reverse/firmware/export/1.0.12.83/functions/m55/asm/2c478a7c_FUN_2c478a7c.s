; FUN_2c478a7c @ 0x2c478a7c size=26
  ldr r3,[0x2c4784e0]
  ldrb r0,[r3,#0x0]
  bx lr
  push {r3,lr}
  bl 0x2c482fc8
  cmp r0,#0x1
  beq 0x2c478a88
  pop {r3,pc}
  pop.w {r3,lr}
  b.w 0x2c4784d8
