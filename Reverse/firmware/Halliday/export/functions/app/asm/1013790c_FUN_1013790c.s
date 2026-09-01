; FUN_1013790c @ 0x1013790c size=20
  ldrb.w r2,[r0,#0x41]
  cmp r2,#0x8
  beq 0x1013791e
  movs r1,#0x8
  strb.w r1,[r0,#0x41]
  b.w 0x101376d2
  bx lr
