; FUN_1405b134 @ 0x1405b134 size=18
  ldrb.w r12,[r0,#0x43]
  tst r12,#0x4
  beq 0x1405b142
  movs r0,#0x43
  bx lr
  b.w 0x1406d628
