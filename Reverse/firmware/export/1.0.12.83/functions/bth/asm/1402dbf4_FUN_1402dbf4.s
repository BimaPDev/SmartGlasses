; FUN_1402dbf4 @ 0x1402dbf4 size=128
  cmp r0,#0x46
  bhi 0x1402dc2e
  cmp r0,#0x13
  bhi 0x1402dc10
  movs r3,#0x1
  mov.w r2,#0x40000000
  lsl.w r0,r3,r0
  str r0,[r2,#0x38]
  nop
  nop
  movs r0,#0x0
  bx lr
  cmp r0,#0x1d
  bls 0x1402dc32
  cmp r0,#0x28
  mov.w r2,#0x1
  bhi 0x1402dc4c
  mov.w r1,#0x40000000
  sub.w r3,r0,#0x1e
  lsl.w r3,r2,r3
  movs r0,#0x0
  str r3,[r1,#0x48]
  bx lr
  movs r0,#0x1
  bx lr
  movs r3,#0x1
  mov.w r2,#0x40000000
  subs r0,#0x14
  lsl.w r0,r3,r0
  str r0,[r2,#0x40]
  nop
  nop
  nop
  nop
  movs r0,#0x0
  bx lr
  cmp r0,#0x3b
  ldr r1,[0x1402dc74]
  bhi 0x1402dc62
  sub.w r3,r0,#0x29
  lsl.w r3,r2,r3
  str r3,[r1,#0x14]
  movs r0,#0x0
  ldr r3,[r1,#0x0]
  bx lr
  sub.w r3,r0,#0x3c
  lsl.w r3,r2,r3
  str.w r3,[r1,#0xcc]
  movs r0,#0x0
  ldr r3,[r1,#0x0]
  bx lr
