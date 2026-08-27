; FUN_2c60497c @ 0x2c60497c size=40
  push {r3,r4,r5,lr}
  mov r5,r0
  mov r4,r1
  bl 0x2c606bc8
  ldr r2,[r5,#0x8]
  ldrb r3,[r2,#0x18]
  and r1,r3,#0x3
  cmp r1,r4
  beq 0x2c6049a2
  bfi r3,r4,#0x0,#0x2
  mov r0,r5
  strb r3,[r2,#0x18]
  pop.w {r3,r4,r5,lr}
  b.w 0x2c607df0
  pop {r3,r4,r5,pc}
