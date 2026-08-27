; FUN_2c651c3c @ 0x2c651c3c size=32
  push {r4,r5,r6,lr}
  mov r6,r0
  mov r4,r1
  mov r5,r2
  cmp r4,r5
  bcs 0x2c651c58
  ldr r3,[r6,#0x0]
  mov r0,r6
  ldrb r1,[r4,#0x0]
  ldr r3,[r3,#0x10]
  blx r3
  strb.w r0,[r4],#0x1
  b 0x2c651c44
  mov r0,r5
  pop {r4,r5,r6,pc}
