; FUN_140d2548 @ 0x140d2548 size=48
  subs r1,#0x0
  ldr r2,[0x140d2578]
  it ne
  mov.ne r1,#0x1
  str r2,[r0,#0x0]
  movs r2,#0x0
  str r1,[r0,#0x4]
  strb r2,[r0,#0x10]
  str r2,[r0,#0x3c]
  strb.w r2,[r0,#0x6c]
  strd r2,r2,[r0,#0x8]
  strd r2,r2,[r0,#0x14]
  strd r2,r2,[r0,#0x1c]
  strd r2,r2,[r0,#0x24]
  strd r2,r2,[r0,#0x2c]
  strd r2,r2,[r0,#0x34]
  bx lr
