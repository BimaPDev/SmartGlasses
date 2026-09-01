; FUN_1011b4be @ 0x1011b4be size=28
  push {r4,lr}
  bl 0x1005b8b8
  cbz r0,0x1011b4d4
  ldr r3,[r0,#0x18]
  cbz r3,0x1011b4d4
  ldr r3,[r3,#0x4]
  cbz r3,0x1011b4d4
  pop.w {r4,lr}
  bx r3
  mvn r0,#0x15
  pop {r4,pc}
