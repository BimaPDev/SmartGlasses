; FUN_1011b560 @ 0x1011b560 size=12
  push {r3,lr}
  ldr r3,[r0,#0x8]
  ldr r3,[r3,#0x10]
  blx r3
  ldr r0,[r0,#0x0]
  pop {r3,pc}
