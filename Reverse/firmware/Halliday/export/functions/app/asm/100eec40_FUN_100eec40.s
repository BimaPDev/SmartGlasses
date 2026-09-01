; FUN_100eec40 @ 0x100eec40 size=34
  ldr r3,[0x100eec64]
  ldr r3,[r3,#0x0]
  ldrh r1,[r3,#0x12]
  cmp r1,r0
  bne 0x100eec50
  ldrsb.w r0,[r3,#0x2]
  bx lr
  ldrh r1,[r3,#0x14]
  cmp r1,r0
  bne 0x100eec5e
  ldrb r0,[r3,#0x2]
  adds r0,#0x1
  sxtb r0,r0
  bx lr
  b.w 0x100eec10
