; FUN_1012fb4a @ 0x1012fb4a size=22
  cbz r0,0x1012fb5c
  ldr r2,[r0,#0x0]
  ldr r3,[r0,#0x8]
  add r3,r2
  ldr r2,[r0,#0x4]
  subs r3,r3,r2
  cmp r1,r3
  it ge
  mov.ge r1,r3
  mov r0,r1
  bx lr
