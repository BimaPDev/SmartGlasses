; FUN_2c5fee94 @ 0x2c5fee94 size=18
  cbz r0,0x2c5fee9a
  ldr r0,[r0,#0x24]
  bx lr
  push {r3,lr}
  bl 0x2c62a470
  cbz r0,0x2c5feea4
  ldr r0,[r0,#0x24]
  pop {r3,pc}
