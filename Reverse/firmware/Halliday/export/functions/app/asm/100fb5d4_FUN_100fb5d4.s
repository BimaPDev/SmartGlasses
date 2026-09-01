; FUN_100fb5d4 @ 0x100fb5d4 size=20
  cbz r0,0x100fb5e6
  ldr r0,[r0,#0x0]
  cbnz r0,0x100fb5e0
  b 0x100fb5e6
  ldr r0,[r0,#0x4]
  cbz r0,0x100fb5e6
  ldr r3,[r0,#0x8]
  cmp r3,r1
  bne 0x100fb5dc
  bx lr
