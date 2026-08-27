; FUN_2c4ed31a @ 0x2c4ed31a size=30
  push {r4,lr}
  ldrb r3,[r3,#0x0]
  mov r4,r0
  cbnz r3,0x2c4ed332
  bl 0x2c4ee01c
  mov r3,r0
  mov r0,r4
  ldr r3,[r3,#0x8]
  pop.w {r4,lr}
  bx r3
  bl 0x2c4910d8
  b 0x2c4ed322
