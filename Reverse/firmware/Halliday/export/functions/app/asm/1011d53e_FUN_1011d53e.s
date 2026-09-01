; FUN_1011d53e @ 0x1011d53e size=42
  mov r2,r1
  push {r4,lr}
  ldrsb.w r3,[r2],#0x10
  adds r0,#0xf
  cmp r3,#0x0
  ite lt
  mov.lt r3,#0x87
  mov.ge r3,#0x0
  ldrb.w r4,[r2,#-0x1]!
  eor.w r3,r3,r4, lsl #0x1
  cmp r1,r2
  strb.w r3,[r0],#-0x1
  beq 0x1011d566
  ldrb r3,[r2,#0x0]
  lsrs r3,r3,#0x7
  b 0x1011d550
  pop {r4,pc}
