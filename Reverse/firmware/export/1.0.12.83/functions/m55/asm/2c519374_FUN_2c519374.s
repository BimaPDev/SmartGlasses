; FUN_2c519374 @ 0x2c519374 size=30
  push {r4,lr}
  mov r4,r1
  ldr r0,[r1,#0x28]
  bl 0x2c62bea8
  movs r1,#0x3
  ldrb.w r3,[r4,#0x2c]
  movs r2,#0x0
  bfi r3,r1,#0x0,#0x3
  str r2,[r4,#0x28]
  strb.w r3,[r4,#0x2c]
  pop {r4,pc}
