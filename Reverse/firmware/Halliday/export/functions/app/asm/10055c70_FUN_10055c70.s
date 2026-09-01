; FUN_10055c70 @ 0x10055c70 size=14
  ldr r3,[0x10055c80]
  ldr r0,[0x10055c84]
  ldr r3,[r3,#0x0]
  and r3,r3,#0x3f
  muls r0,r3
  bx lr
