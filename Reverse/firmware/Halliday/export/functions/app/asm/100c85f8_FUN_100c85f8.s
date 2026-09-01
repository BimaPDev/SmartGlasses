; FUN_100c85f8 @ 0x100c85f8 size=32
  movs r0,#0x0
  ldr r3,[0x100c8618]
  add.w r2,r3,#0x30
  ldaex r1,[r2]
  stlex r12,r0,[r2]
  cmp.w r12,#0x0
  bne 0x100c8600
  str.w r0,[r3,#0x35]
  strh.w r0,[r3,#0x39]
  bx lr
