; FUN_140e45b0 @ 0x140e45b0 size=22
  ldr r2,[0x140e45c8]
  mov r3,r0
  ldr r0,[r2,#0x0]
  cbz r0,0x140e45be
  add r3,r0
  str r3,[r2,#0x0]
  bx lr
  ldr r0,[0x140e45cc]
  add r3,r0
  str r3,[r2,#0x0]
  bx lr
