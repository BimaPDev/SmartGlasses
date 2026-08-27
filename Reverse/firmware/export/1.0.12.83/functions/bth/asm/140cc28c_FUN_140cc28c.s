; FUN_140cc28c @ 0x140cc28c size=36
  subs r1,#0x0
  ldr r2,[0x140cc2b0]
  it ne
  mov.ne r1,#0x1
  str r2,[r0,#0x0]
  movs r2,#0x0
  str r1,[r0,#0x4]
  strb r2,[r0,#0x10]
  strh r2,[r0,#0x24]
  strb.w r2,[r0,#0x64]
  strd r2,r2,[r0,#0x8]
  strd r2,r2,[r0,#0x14]
  strd r2,r2,[r0,#0x1c]
  bx lr
