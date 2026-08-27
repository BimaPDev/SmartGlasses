; FUN_2c5f6ba8 @ 0x2c5f6ba8 size=30
  ldr r2,[r0,#0x8]
  mov r3,r0
  cbz r2,0x2c5f6bbc
  movs r2,#0x0
  ldr r1,[0x2c5f6bc8]
  ldr r0,[r0,#0x4]
  str r1,[r3,#0x4]
  strd r2,r2,[r3,#0x8]
  bx lr
  ldr r3,[r0,#0x0]
  movs r1,#0x1
  ldr r3,[r3,#0x0]
  mov r0,r1
  bx r3
