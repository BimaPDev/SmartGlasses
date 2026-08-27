; FUN_2c5fee6c @ 0x2c5fee6c size=18
  cbz r0,0x2c5fee72
  ldr r0,[r0,#0x1c]
  bx lr
  push {r3,lr}
  bl 0x2c62a470
  cbz r0,0x2c5fee7c
  ldr r0,[r0,#0x1c]
  pop {r3,pc}
