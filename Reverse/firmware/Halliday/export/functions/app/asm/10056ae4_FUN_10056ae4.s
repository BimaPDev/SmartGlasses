; FUN_10056ae4 @ 0x10056ae4 size=154
  cmp r0,#0x8
  bhi 0x10056b82
  tbb [pc,r0]
  ldr r3,[0x10056b88]
  str r1,[r3,#0x0]
  movs r0,#0x0
  bx lr
  subs r1,#0x0
  it ne
  mov.ne r1,#0x1
  ldr r2,[0x10056b8c]
  ldr r3,[r2,#0x0]
  bic r3,r3,#0x2
  orr.w r1,r3,r1, lsl #0x1
  str r1,[r2,#0x0]
  b 0x10056afa
  subs r1,#0x0
  it ne
  mov.ne r1,#0x1
  ldr r2,[0x10056b8c]
  ldr r3,[r2,#0x0]
  bic r3,r3,#0x4
  orr.w r1,r3,r1, lsl #0x2
  b 0x10056b10
  ldr r2,[0x10056b8c]
  ldr r3,[r2,#0x0]
  bic r3,r3,#0x1
  cmp r1,#0x0
  ite eq
  mov.eq r1,r3
  orr.ne r1,r3,#0x1
  b 0x10056b10
  ldr r2,[0x10056b8c]
  ldr r3,[r2,#0x0]
  bic r3,r3,#0x78
  orr.w r1,r3,r1, lsl #0x3
  b 0x10056b10
  ldr r2,[0x10056b8c]
  ldr r3,[r2,#0x0]
  bic r3,r3,#0xff00
  orr.w r1,r3,r1, lsl #0x8
  b 0x10056b10
  ldr r2,[0x10056b8c]
  ldr r3,[r2,#0x0]
  bic r3,r3,#0x8000000
  orr.w r1,r3,r1, lsl #0x1b
  b 0x10056b10
  ldr r2,[0x10056b8c]
  ldr r3,[r2,#0x0]
  bic r3,r3,#0x10000000
  orr.w r1,r3,r1, lsl #0x1c
  b 0x10056b10
  ldr r2,[0x10056b8c]
  ldr r3,[r2,#0x0]
  bic r3,r3,#0x4000000
  orr.w r1,r3,r1, lsl #0x1a
  b 0x10056b10
  mov.w r0,#0xffffffff
  bx lr
