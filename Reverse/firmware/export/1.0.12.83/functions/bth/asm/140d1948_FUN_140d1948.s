; FUN_140d1948 @ 0x140d1948 size=24
  cmp r2,#0x1
  push {r4,r5}
  bne 0x140d1956
  ldrb r3,[r1,#0x0]
  strb r3,[r0,#0x0]
  pop {r4,r5}
  bx lr
  cmp r2,#0x0
  beq 0x140d1952
  pop {r4,r5}
  b.w 0x140e5838
