; FUN_10134df4 @ 0x10134df4 size=20
  ldr r3,[r0,#0x0]
  cbz r3,0x10134e04
  ldr r1,[r0,#0x4]
  ldr r2,[r3,#0x0]
  cmp r3,r1
  str r2,[r0,#0x0]
  it eq
  str.eq r2,[r0,#0x4]
  mov r0,r3
  bx lr
