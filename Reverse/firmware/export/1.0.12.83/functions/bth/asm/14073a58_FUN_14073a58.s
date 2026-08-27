; FUN_14073a58 @ 0x14073a58 size=20
  ldr r3,[r0,#0x0]
  cbz r3,0x14073a62
  ldr r2,[r3,#0x0]
  str r2,[r0,#0x0]
  cbz r2,0x14073a66
  mov r0,r3
  bx lr
  str r2,[r0,#0x4]
  mov r0,r3
  bx lr
