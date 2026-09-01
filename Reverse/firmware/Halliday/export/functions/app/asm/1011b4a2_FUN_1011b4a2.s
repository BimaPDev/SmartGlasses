; FUN_1011b4a2 @ 0x1011b4a2 size=28
  push {r4,lr}
  bl 0x1005b8b8
  cbz r0,0x1011b4b8
  ldr r3,[r0,#0x18]
  cbz r3,0x1011b4b8
  ldr r3,[r3,#0x0]
  cbz r3,0x1011b4b8
  pop.w {r4,lr}
  bx r3
  mvn r0,#0x15
  pop {r4,pc}
