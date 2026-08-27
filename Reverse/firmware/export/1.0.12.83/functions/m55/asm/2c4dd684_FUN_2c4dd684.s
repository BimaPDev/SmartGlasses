; FUN_2c4dd684 @ 0x2c4dd684 size=16
  ldrb.w r3,[r3,#0x22]
  cbz r3,0x2c4dd692
  ldr r3,[r1,#0x0]
  cmp r3,r2
  it hi
  str.hi r2,[r1,#0x0]
  bx lr
