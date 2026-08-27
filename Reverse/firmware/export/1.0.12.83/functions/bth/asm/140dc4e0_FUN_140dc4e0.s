; FUN_140dc4e0 @ 0x140dc4e0 size=30
  mov r2,r0
  push {r4,lr}
  ldrb r4,[r2,#0x0]
  mov r3,r2
  adds r2,#0x1
  cmp r4,#0x0
  bne 0x140dc4e4
  subs r3,#0x1
  ldrb.w r2,[r1],#0x1
  strb.w r2,[r3,#0x1]!
  cmp r2,#0x0
  bne 0x140dc4f0
  pop {r4,pc}
