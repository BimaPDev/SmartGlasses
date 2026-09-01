; FUN_1011bb52 @ 0x1011bb52 size=26
  push {r4}
  ldr r4,[r0,#0x8]
  ldr r4,[r4,#0x0]
  cbz r4,0x1011bb62
  mov r12,r4
  pop.w r4
  bx r12
  mvn r0,#0x85
  pop.w r4
  bx lr
