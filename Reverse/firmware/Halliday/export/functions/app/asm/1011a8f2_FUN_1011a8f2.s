; FUN_1011a8f2 @ 0x1011a8f2 size=16
  push {r3,lr}
  bl 0x1005608c
  ldr r3,[r0,#0x4c]
  ldr r0,[r3,#0x8]
  ubfx r0,r0,#0x11,#0x1
  pop {r3,pc}
