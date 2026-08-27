; FUN_2c5fee80 @ 0x2c5fee80 size=18
  cbz r0,0x2c5fee86
  ldr r0,[r0,#0x20]
  bx lr
  push {r3,lr}
  bl 0x2c62a470
  cbz r0,0x2c5fee90
  ldr r0,[r0,#0x20]
  pop {r3,pc}
