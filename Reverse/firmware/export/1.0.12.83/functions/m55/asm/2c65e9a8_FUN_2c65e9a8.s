; FUN_2c65e9a8 @ 0x2c65e9a8 size=32
  cbz r2,0x2c65e906
  b.w 0x2c674668
  bx lr
  cmp r2,#0x1
  push {r4}
  bne 0x2c65e9b8
  ldrb r2,[r1,#0x0]
  pop.w r4
  strb r2,[r0,#0x0]
  bx lr
  pop.w r4
  b.w 0x2c65e900
