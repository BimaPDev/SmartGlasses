; FUN_10000bb4 @ 0x10000bb4 size=34
  ldr r3,[0x10000bd8]
  ldr r2,[0x10000bdc]
  ldr.w r1,[r3,#0xbc]
  sub.w r2,r2,#0x900
  str.w r1,[r2,#0x908]
  ldr r1,[0x10000be0]
  adds r3,#0xc0
  ldr.w r0,[r3],#0x4
  str.w r0,[r2],#0x4
  cmp r2,r1
  bne 0x10000bc8
  bx lr
