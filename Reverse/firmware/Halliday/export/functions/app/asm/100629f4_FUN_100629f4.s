; FUN_100629f4 @ 0x100629f4 size=38
  ldr r3,[0x10062a1c]
  uxth r2,r0
  str.w r1,[r3,r2,lsl #0x2]
  ldr r3,[0x10062a20]
  ldr r2,[r3,#0x0]
  cbnz r2,0x10062a08
  ldr r2,[0x10062a24]
  ldr r2,[r2,#0x3c]
  str r2,[r3,#0x0]
  movs r2,#0x0
  ldr r3,[r3,#0x0]
  str.w r0,[r3,r1,lsl #0x2]
  add.w r3,r3,r1, lsl #0x2
  str r2,[r3,#0x4]
  adds r0,r1,#0x2
  bx lr
