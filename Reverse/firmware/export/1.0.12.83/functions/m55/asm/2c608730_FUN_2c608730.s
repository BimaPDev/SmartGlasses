; FUN_2c608730 @ 0x2c608730 size=20
  ldrb.w r3,[r0,#0x23]
  and r3,r3,#0x6
  cmp r3,#0x6
  beq 0x2c608740
  b.w 0x2c60802c
  movs r0,#0x0
  bx lr
