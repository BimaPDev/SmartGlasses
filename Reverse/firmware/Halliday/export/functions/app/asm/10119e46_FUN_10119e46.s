; FUN_10119e46 @ 0x10119e46 size=48
  ldr r3,[r0,#0x8]
  add.w r1,r0,r1, lsl #0x3
  cmp.w r3,#0x8000
  bcc 0x10119e64
  ldr r3,[r1,#0x4]
  cbz r2,0x10119e5e
  orr r3,r3,#0x1
  str r3,[r1,#0x4]
  bx lr
  bic r3,r3,#0x1
  b 0x10119e5a
  ldrh r3,[r1,#0x2]
  cbz r2,0x10119e70
  orr r3,r3,#0x1
  strh r3,[r1,#0x2]
  bx lr
  bic r3,r3,#0x1
  b 0x10119e6c
