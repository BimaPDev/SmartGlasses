; FUN_1409e650 @ 0x1409e650 size=18
  push {r3,lr}
  ldr r3,[0x1409e664]
  ldr r3,[r3,#0x0]
  cbz r3,0x1409e65e
  ldr r3,[r3,#0x0]
  cbz r3,0x1409e65e
  blx r3
  movs r0,#0x0
  pop {r3,pc}
