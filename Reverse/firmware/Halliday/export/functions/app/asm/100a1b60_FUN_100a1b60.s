; FUN_100a1b60 @ 0x100a1b60 size=42
  ldr r3,[0x100a1b8c]
  ldr r2,[r3,#0x0]
  cbnz r2,0x100a1b6e
  str r0,[r3,#0x0]
  ldr r3,[0x100a1b90]
  str r1,[r3,#0x0]
  bx lr
  ldr r0,[0x100a1b94]
  ldr r3,[0x100a1b98]
  ldr r2,[0x100a1b9c]
  subs r0,r0,r3
  lsls r0,r0,#0x5
  and r0,r0,#0xff00
  orr r0,r0,#0x6b0000
  ldr r1,[0x100a1ba0]
  orr r0,r0,#0x11
  b.w 0x100a5b78
