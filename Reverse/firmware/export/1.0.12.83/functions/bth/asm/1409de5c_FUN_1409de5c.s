; FUN_1409de5c @ 0x1409de5c size=18
  push {r4,lr}
  ldr r4,[0x1409de70]
  ldr r3,[r4,#0x0]
  cbz r3,0x1409de66
  pop {r4,pc}
  bl 0x1409e794
  str r0,[r4,#0x0]
  pop {r4,pc}
