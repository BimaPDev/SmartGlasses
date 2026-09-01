; FUN_100f1548 @ 0x100f1548 size=36
  ldr r3,[0x100f156c]
  b 0x100f1554
  ldr r2,[r3,#0x4]
  ldrh r2,[r2,#0xc]
  cmp r2,r0
  beq 0x100f1560
  ldr r3,[r3,#0x0]
  cmp r3,#0x0
  bne 0x100f154c
  mvn r0,#0x2
  bx lr
  ldr r2,[r3,#0x8]
  ldr r3,[r3,#0xc]
  movs r0,#0x0
  str r2,[r1,#0x0]
  str r3,[r1,#0x4]
  bx lr
