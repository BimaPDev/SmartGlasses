; FUN_1409e6bc @ 0x1409e6bc size=18
  push {r3,lr}
  ldr r3,[0x1409e6d0]
  ldr r3,[r3,#0x0]
  cbz r3,0x1409e6ca
  ldr r3,[r3,#0x4]
  cbz r3,0x1409e6ca
  blx r3
  movs r0,#0x0
  pop {r3,pc}
