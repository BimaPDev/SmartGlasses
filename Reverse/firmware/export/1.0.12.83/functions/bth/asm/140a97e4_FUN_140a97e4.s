; FUN_140a97e4 @ 0x140a97e4 size=46
  ldr r1,[0x140a9814]
  ldr r2,[0x140a9818]
  ldrb r0,[r1,#0x0]
  ldr r3,[0x140a981c]
  ldrb r1,[r2,#0x0]
  ldr r2,[0x140a9820]
  add.w r3,r3,r0, lsl #0x1
  ldrb r1,[r3,r1]
  ldrb r3,[r2,#0x0]
  cmp r1,r3
  it cc
  mov.cc r1,r3
  cbnz r1,0x140a9802
  bx lr
  ldr r3,[0x140a9824]
  movs r0,#0x11
  ldrb r3,[r3,#0x0]
  cmp r3,#0x0
  it ne
  mov.ne r1,#0xe
  b.w 0x140b4344
