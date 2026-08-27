; FUN_14029f28 @ 0x14029f28 size=16
  ldr r3,[0x14029f38]
  ldrb r0,[r3,#0x0]
  cbz r0,0x14029f36
  movs r1,#0x1
  ldr r0,[0x14029f3c]
  b.w 0x14029cb0
  bx lr
