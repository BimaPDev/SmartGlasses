; FUN_100a22fc @ 0x100a22fc size=16
  ldr r3,[0x100a230c]
  ldr r2,[r3,#0x0]
  cbz r2,0x100a230a
  mov.w r3,#0x3e8
  muls r0,r3
  str r0,[r2,#0x0]
  bx lr
