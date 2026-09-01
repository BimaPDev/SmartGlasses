; FUN_100fb5e8 @ 0x100fb5e8 size=24
  cbz r0,0x100fb5fa
  cbz r1,0x100fb5fa
  movs r2,#0x0
  ldr r3,[r0,#0x4]
  strd r3,r2,[r1,#0x0]
  cbz r3,0x100fb5fc
  str r1,[r3,#0x4]
  str r1,[r0,#0x4]
  bx lr
  str r1,[r0,#0x0]
  b 0x100fb5f8
