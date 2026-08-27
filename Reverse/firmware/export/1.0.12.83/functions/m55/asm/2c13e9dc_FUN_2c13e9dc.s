; FUN_2c13e9dc @ 0x2c13e9dc size=144
  cmp r2,#0x3
  add.w r12,r0,r2
  bls 0x2c13ea6e
  uxtb r1,r1
  orr.w r1,r1,r1, lsl #0x8
  orr.w r1,r1,r1, lsl #0x10
  str r1,[r0,#0x0]
  str.w r1,[r12,#-0x4]
  cmp r2,#0x8
  bls 0x2c13ea7c
  and r3,r0,#0x3
  rsb.w r3,r3,#0x4
  sub.w r2,r2,r3
  lsr.w r2,r2,#0x2
  add r3,r0
  add.w r12,r3,r2, lsl #0x2
  and r2,r2,#0xf
  tbb [pc,r2]
  str.w r1,[r3],#0x4
  str.w r1,[r3],#0x4
  str.w r1,[r3],#0x4
  str.w r1,[r3],#0x4
  str.w r1,[r3],#0x4
  str.w r1,[r3],#0x4
  str.w r1,[r3],#0x4
  str.w r1,[r3],#0x4
  str.w r1,[r3],#0x4
  str.w r1,[r3],#0x4
  str.w r1,[r3],#0x4
  str.w r1,[r3],#0x4
  str.w r1,[r3],#0x4
  str.w r1,[r3],#0x4
  str.w r1,[r3],#0x4
  str.w r1,[r3],#0x4
  cmp r12,r3
  bne 0x2c13ea28
  bx lr
  cbz r2,0x2c13ea7c
  mov r3,r0
  nop
  strb.w r1,[r3],#0x1
  cmp r12,r3
  bne 0x2c13ea74
  bx lr
