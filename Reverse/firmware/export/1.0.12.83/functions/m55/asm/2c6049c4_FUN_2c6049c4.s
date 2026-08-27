; FUN_2c6049c4 @ 0x2c6049c4 size=22
  push {r3,r4,r5,lr}
  mov r5,r0
  mov r4,r1
  bl 0x2c606bc8
  ldr r3,[r5,#0x8]
  ldrb r2,[r3,#0x18]
  bfi r2,r4,#0x2,#0x2
  strb r2,[r3,#0x18]
  pop {r3,r4,r5,pc}
