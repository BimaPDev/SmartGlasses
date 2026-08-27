; FUN_2c5fee58 @ 0x2c5fee58 size=18
  cbz r0,0x2c5fee5e
  ldr r0,[r0,#0x14]
  bx lr
  push {r3,lr}
  bl 0x2c62a470
  cbz r0,0x2c5fee68
  ldr r0,[r0,#0x14]
  pop {r3,pc}
