; FUN_10133dc0 @ 0x10133dc0 size=32
  ldr r3,[r2,#0x0]
  cbnz r1,0x10133dd4
  ldr r1,[r0,#0x4]
  str r3,[r0,#0x0]
  cmp r2,r1
  bne 0x10133dce
  str r3,[r0,#0x4]
  movs r3,#0x0
  str r3,[r2,#0x0]
  bx lr
  str r3,[r1,#0x0]
  ldr r3,[r0,#0x4]
  cmp r2,r3
  it eq
  str.eq r1,[r0,#0x4]
  b 0x10133dce
