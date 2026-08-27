; FUN_14075428 @ 0x14075428 size=24
  cbz r0,0x1407543e
  ldrb.w r12,[r0,#0x4]
  tst r12,#0x10
  bne 0x1407543e
  tst r12,#0x40
  bne 0x14075440
  b.w 0x14075b28
  bx lr
