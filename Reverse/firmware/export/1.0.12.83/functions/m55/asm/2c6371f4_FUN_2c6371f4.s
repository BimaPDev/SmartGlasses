; FUN_2c6371f4 @ 0x2c6371f4 size=40
  ldrsh.w r12,[r0,#0x2e]
  cmp r12,r1
  beq 0x2c63721a
  ldrsh.w r2,[r0,#0x32]
  cmp r2,r1
  it ge
  mov.ge r2,r1
  ldrsh.w r1,[r0,#0x30]
  cmp r1,r2
  it lt
  mov.lt r1,r2
  cmp r12,r1
  beq 0x2c63721a
  strh r1,[r0,#0x2e]
  b.w 0x2c636890
  bx lr
