; FUN_1011f8ea @ 0x1011f8ea size=26
  push {r4}
  ldr r4,[r0,#0x8]
  ldr r4,[r4,#0x4]
  cbz r4,0x1011f8fa
  mov r12,r4
  pop.w r4
  bx r12
  mvn r0,#0x57
  pop.w r4
  bx lr
