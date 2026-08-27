; FUN_2c48f540 @ 0x2c48f540 size=40
  push {r3,lr}
  bl 0x2c4fab50
  bl 0x2c4f8748
  pop.w {r3,lr}
  b.w 0x2c490004
  ldr r3,[0x2c49001c]
  ldrb r3,[r3,#0x0]
  cmp r3,#0x1
  beq 0x2c49000e
  bx lr
  movs r3,#0x0
  movs r2,#0x6
  mov r1,r3
  mov r0,r3
  b.w 0x2c4c4030
