; FUN_1011a86a @ 0x1011a86a size=16
  push {r3,lr}
  bl 0x1005608c
  ldr r3,[r0,#0x48]
  ldr r0,[r3,#0x10]
  and r0,r0,#0x1
  pop {r3,pc}
