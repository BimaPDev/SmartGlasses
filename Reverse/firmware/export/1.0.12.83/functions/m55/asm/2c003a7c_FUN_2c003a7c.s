; FUN_2c003a7c @ 0x2c003a7c size=144
  cmp r2,#0x3
  add.w r12,r0,r2
  bls 0x2c003b0e
  uxtb r1,r1
  orr.w r1,r1,r1, lsl #0x8
  orr.w r1,r1,r1, lsl #0x10
  str r1,[r0,#0x0]
  str.w r1,[r12,#-0x4]
  cmp r2,#0x8
  bls 0x2c003b1c
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
  bne 0x2c003ac8
  bx lr
  cbz r2,0x2c003b1c
  mov r3,r0
  nop
  strb.w r1,[r3],#0x1
  cmp r12,r3
  bne 0x2c003b14
  bx lr
