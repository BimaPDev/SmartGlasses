; FUN_2c65f7f8 @ 0x2c65f7f8 size=38
  subs r1,#0x0
  ldr r2,[0x2c65f820]
  it ne
  mov.ne r1,#0x1
  str r2,[r0,#0x0]
  movs r2,#0x0
  str r1,[r0,#0x4]
  strb r2,[r0,#0x10]
  strb.w r2,[r0,#0x124]
  strd r2,r2,[r0,#0x8]
  strd r2,r2,[r0,#0x14]
  strd r2,r2,[r0,#0x1c]
  strd r2,r2,[r0,#0x24]
  bx lr
