; FUN_101284ca @ 0x101284ca size=20
  ldr r3,[r0,#0xc]
  ldr r0,[r0,#0x10]
  lsls r3,r3,#0x1
  adds r3,#0x3
  bic r3,r3,#0x3
  add.w r0,r3,r0, lsl #0x2
  adds r0,#0x18
  bx lr
