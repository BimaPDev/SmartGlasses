; FUN_1012cf1a @ 0x1012cf1a size=94
  cmp r2,#0xfc
  it ls
  bfi.ls r1,r2,#0x18,#0x8
  movw r2,#0x41f
  cmp r3,r2
  beq 0x1012cf5e
  cmp.w r3,#0x420
  bcs 0x1012cf3c
  cmp.w r3,#0x400
  beq 0x1012cf42
  movw r2,#0x401
  cmp r3,r2
  beq 0x1012cf58
  movs r0,#0x0
  bx lr
  uxtb r2,r1
  and r3,r1,#0xff000000
  orr.w r3,r3,r2, lsl #0x10
  ubfx r2,r1,#0x10,#0x8
  orrs r3,r2
  and r1,r1,#0xff00
  orrs r1,r3
  str r1,[r0,#0x0]
  movs r0,#0x1
  bx lr
  ubfx r3,r1,#0x8,#0x8
  ubfx r2,r1,#0x10,#0x8
  lsls r3,r3,#0x10
  orr.w r3,r3,r2, lsl #0x18
  orr.w r3,r3,r1, lsr #0x18
  uxtb r1,r1
  orr.w r1,r3,r1, lsl #0x8
  b 0x1012cf58
