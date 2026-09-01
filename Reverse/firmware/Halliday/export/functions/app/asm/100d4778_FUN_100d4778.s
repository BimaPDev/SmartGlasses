; FUN_100d4778 @ 0x100d4778 size=34
  movs r0,#0x0
  ldr r3,[0x100d479c]
  ldr r2,[0x100d47a0]
  ldr r3,[r3,#0x0]
  ldr r3,[r3,#0x0]
  cbnz r3,0x100d4786
  bx lr
  ldrb.w r1,[r3,#0x38]
  lsls r1,r1,#0x1f
  bpl 0x100d4796
  ldr r1,[r3,#0x38]
  tst r2,r1
  it eq
  mov.eq r0,#0x1
  ldr r3,[r3,#0x0]
  b 0x100d4782
