; FUN_140d1930 @ 0x140d1930 size=24
  cmp r2,#0x1
  push {r4}
  bne 0x140d1940
  ldrb r2,[r1,#0x0]
  pop.w r4
  strb r2,[r0,#0x0]
  bx lr
  pop.w r4
  b.w 0x140d1888
