; FUN_140c3df2 @ 0x140c3df2 size=24
  cmp r2,#0x1
  push {r4,r5}
  bne 0x140c3e00
  ldrb r3,[r1,#0x0]
  strb r3,[r0,#0x0]
  pop {r4,r5}
  bx lr
  cmp r2,#0x0
  beq 0x140c3dfc
  pop {r4,r5}
  b.w 0x140e5278
