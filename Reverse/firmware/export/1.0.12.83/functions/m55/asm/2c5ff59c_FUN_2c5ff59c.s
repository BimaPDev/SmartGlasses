; FUN_2c5ff59c @ 0x2c5ff59c size=26
  push {r4,lr}
  ldrb r3,[r0,#0x5]
  mov r4,r0
  bfc r3,#0x0,#0x1
  strb r3,[r0,#0x5]
  bl 0x2c629df4
  str r0,[r4,#0x48]
  bl 0x2c629df4
  str r0,[r4,#0x44]
  pop {r4,pc}
