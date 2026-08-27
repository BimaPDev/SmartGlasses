; FUN_2c4d3c50 @ 0x2c4d3c50 size=34
  ldrb r3,[r0,#0x2]
  cbz r3,0x2c4d12fe
  bx lr
  adds r0,#0x14
  b.w 0x2c4d835c
  ldrsb.w r3,[r0,#0x0]
  cmp r3,#0x2
  beq 0x2c4d3c5a
  bx lr
  mov r2,r1
  add.w r1,r0,#0x3c
  adds r0,#0x6c
  b.w 0x2c4d12f8
