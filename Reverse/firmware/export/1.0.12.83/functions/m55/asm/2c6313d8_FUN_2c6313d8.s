; FUN_2c6313d8 @ 0x2c6313d8 size=28
  push {r4,lr}
  mov r4,r1
  ldr r0,[r1,#0x24]
  bl 0x2c62bea8
  movs r2,#0x0
  ldrb.w r3,[r4,#0x5a]
  str r2,[r4,#0x24]
  orr r3,r3,#0x3
  strb.w r3,[r4,#0x5a]
  pop {r4,pc}
