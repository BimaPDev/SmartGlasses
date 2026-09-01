; FUN_100c99f0 @ 0x100c99f0 size=16
  ldr r3,[0x100c9a00]
  ldrb r3,[r3,#0x3]
  lsls r3,r3,#0x1c
  bmi 0x100c99fe
  ldr r0,[0x100c9a04]
  b.w 0x100c4094
  bx lr
