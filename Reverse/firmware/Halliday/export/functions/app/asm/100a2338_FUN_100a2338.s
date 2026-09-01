; FUN_100a2338 @ 0x100a2338 size=16
  ldr r3,[0x100a2348]
  ldr r0,[r3,#0x0]
  cbz r0,0x100a2346
  ldrb r0,[r0,#0x8]
  clz r0,r0
  lsrs r0,r0,#0x5
  bx lr
