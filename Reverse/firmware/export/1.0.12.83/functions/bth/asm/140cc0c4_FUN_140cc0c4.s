; FUN_140cc0c4 @ 0x140cc0c4 size=46
  subs r1,#0x0
  ldr r2,[0x140cc0f4]
  it ne
  mov.ne r1,#0x1
  str r2,[r0,#0x0]
  movs r2,#0x0
  str r1,[r0,#0x4]
  strh r2,[r0,#0x10]
  strb r2,[r0,#0x12]
  str r2,[r0,#0x34]
  strb.w r2,[r0,#0x43]
  strd r2,r2,[r0,#0x8]
  strd r2,r2,[r0,#0x14]
  strd r2,r2,[r0,#0x1c]
  strd r2,r2,[r0,#0x24]
  strd r2,r2,[r0,#0x2c]
  bx lr
