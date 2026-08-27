; FUN_2c66b5ec @ 0x2c66b5ec size=30
  mov r2,r0
  push {r4,lr}
  ldrb r4,[r2,#0x0]
  mov r3,r2
  adds r2,#0x1
  cmp r4,#0x0
  bne 0x2c66b5f0
  subs r3,#0x1
  ldrb.w r2,[r1],#0x1
  strb.w r2,[r3,#0x1]!
  cmp r2,#0x0
  bne 0x2c66b5fc
  pop {r4,pc}
