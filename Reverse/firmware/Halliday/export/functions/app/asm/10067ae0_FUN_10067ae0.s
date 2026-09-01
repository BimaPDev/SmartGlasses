; FUN_10067ae0 @ 0x10067ae0 size=20
  ldr r3,[0x10067af4]
  mov r1,r0
  ldr r0,[r3,#0x0]
  cbz r0,0x10067aee
  ldr r2,[r0,#0x8]
  ldr r2,[r2,#0x14]
  bx r2
  mvn r0,#0x12
  bx lr
