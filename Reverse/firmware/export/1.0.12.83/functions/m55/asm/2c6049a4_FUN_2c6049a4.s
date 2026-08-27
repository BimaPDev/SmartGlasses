; FUN_2c6049a4 @ 0x2c6049a4 size=30
  push {r3,r4,r5,lr}
  mov r5,r0
  mov r4,r1
  bl 0x2c606bc8
  ldr r2,[r5,#0x8]
  ldrb r3,[r2,#0x19]
  and r1,r3,#0xf
  cmp r1,r4
  beq 0x2c6049c0
  bfi r3,r4,#0x0,#0x4
  strb r3,[r2,#0x19]
  pop {r3,r4,r5,pc}
