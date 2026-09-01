; FUN_101355fe @ 0x101355fe size=28
  push {r4,lr}
  subs r3,r0,#0x1
  add.w r2,r0,#0x10
  adds r0,#0x7
  ldrb.w r1,[r3,#0x1]!
  ldrb.w r4,[r2,#-0x1]!
  cmp r3,r0
  strb r4,[r3,#0x0]
  strb r1,[r2,#0x0]
  bne 0x10135608
  pop {r4,pc}
