; FUN_100d5108 @ 0x100d5108 size=34
  movw r2,#0x181
  movw r1,#0x101
  ldr r3,[0x100d512c]
  ldr r3,[r3,#0x0]
  ldr r0,[r3,#0x0]
  cbnz r0,0x100d511a
  bx lr
  ldrh r3,[r0,#0x38]
  ands r3,r2
  cmp r3,r1
  bne 0x100d5126
  ldr r0,[r0,#0xc]
  bx lr
  ldr r0,[r0,#0x0]
  b 0x100d5116
