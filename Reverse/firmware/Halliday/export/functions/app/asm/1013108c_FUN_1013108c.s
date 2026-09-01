; FUN_1013108c @ 0x1013108c size=34
  push {r4}
  cbz r0,0x1013109e
  ldr r4,[r0,#0x0]
  ldr r4,[r4,#0x1c]
  cbz r4,0x101310a8
  mov r12,r4
  pop.w r4
  bx r12
  mvn r0,#0x15
  pop.w r4
  bx lr
  mvn r0,#0x57
  b 0x101310a2
