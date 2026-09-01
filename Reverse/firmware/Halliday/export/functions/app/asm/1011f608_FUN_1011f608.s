; FUN_1011f608 @ 0x1011f608 size=26
  push {r4,lr}
  adds r3,r0,r1
  add.w r1,r0,r1, lsr #0x1
  ldrb.w r4,[r3,#-0x1]!
  ldrb r2,[r0,#0x0]
  strb.w r4,[r0],#0x1
  cmp r0,r1
  strb r2,[r3,#0x0]
  bne 0x1011f610
  pop {r4,pc}
