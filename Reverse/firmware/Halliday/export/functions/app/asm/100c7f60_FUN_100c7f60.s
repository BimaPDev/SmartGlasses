; FUN_100c7f60 @ 0x100c7f60 size=36
  ldr r2,[0x100c7f84]
  ldr.w r3,[r2,#0x174]
  cbnz r3,0x100c7f78
  ldr r1,[r0,#0xc]
  cbz r1,0x100c7f7e
  ldr r1,[r0,#0x10]
  cbz r1,0x100c7f7e
  str.w r0,[r2,#0x174]
  mov r0,r3
  bx lr
  mvn r0,#0x77
  bx lr
  mvn r0,#0x15
  bx lr
