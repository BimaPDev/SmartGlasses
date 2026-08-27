; FUN_2c5fee44 @ 0x2c5fee44 size=18
  cbz r0,0x2c5fee4a
  ldr r0,[r0,#0x10]
  bx lr
  push {r3,lr}
  bl 0x2c62a470
  cbz r0,0x2c5fee54
  ldr r0,[r0,#0x10]
  pop {r3,pc}
