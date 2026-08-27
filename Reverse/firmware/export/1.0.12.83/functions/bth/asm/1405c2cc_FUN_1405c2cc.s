; FUN_1405c2cc @ 0x1405c2cc size=26
  cmp r0,#0x1
  bhi 0x1405c2e2
  ldr r3,[0x1405c2e8]
  ldr.w r0,[r3,r0,lsl #0x2]
  cbz r0,0x1405c2e4
  ldrb.w r0,[r0,#0x43]
  ubfx r0,r0,#0x1,#0x1
  bx lr
  movs r0,#0x0
  bx lr
