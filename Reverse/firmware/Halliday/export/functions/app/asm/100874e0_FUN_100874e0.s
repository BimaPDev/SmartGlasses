; FUN_100874e0 @ 0x100874e0 size=20
  ldrb r0,[r0,#0x1]
  lsls r3,r0,#0x1e
  itt mi
  mov.mi r2,#0x0
  ldr.mi r3,[0x100874f4]
  ubfx r0,r0,#0x1,#0x1
  it mi
  str.mi r2,[r3,#0x0]
  bx lr
