; FUN_101310ae @ 0x101310ae size=34
  push {r4}
  cbz r0,0x101310c0
  ldr r4,[r0,#0x0]
  ldr r4,[r4,#0x20]
  cbz r4,0x101310ca
  mov r12,r4
  pop.w r4
  bx r12
  mvn r0,#0x15
  pop.w r4
  bx lr
  mvn r0,#0x57
  b 0x101310c4
