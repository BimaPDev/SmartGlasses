; FUN_2c66960c @ 0x2c66960c size=32
  subs r1,#0x1
  add r2,r0
  push {r4,lr}
  cmp r0,r2
  bne 0x2c66961a
  movs r0,#0x0
  b 0x2c669626
  ldrb r3,[r0,#0x0]
  ldrb.w r4,[r1,#0x1]!
  cmp r3,r4
  beq 0x2c669628
  subs r0,r3,r4
  pop {r4,pc}
  adds r0,#0x1
  b 0x2c669612
