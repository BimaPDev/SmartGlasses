; FUN_2c650c06 @ 0x2c650c06 size=16
  mov r3,r2
  mov r2,r1
  cbz r1,0x2c650c12
  ldrb r1,[r3,#0x0]
  b.w 0x2c643680
  mov r0,r1
  bx lr
