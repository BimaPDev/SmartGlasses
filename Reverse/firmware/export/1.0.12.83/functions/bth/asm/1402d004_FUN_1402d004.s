; FUN_1402d004 @ 0x1402d004 size=18
  ldr r3,[0x1402d018]
  ldrb r3,[r3,#0x0]
  cmp r3,#0x26
  bhi 0x1402d012
  ldr r2,[0x1402d01c]
  ldrb r0,[r2,r3]
  bx lr
  b.w 0x140e5088
