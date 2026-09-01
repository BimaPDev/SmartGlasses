; FUN_1011a97e @ 0x1011a97e size=16
  push {r3,lr}
  bl 0x1005608c
  ldr r3,[r0,#0x4c]
  ldr r0,[r3,#0x1c]
  bic r0,r0,#0xfc000000
  pop {r3,pc}
