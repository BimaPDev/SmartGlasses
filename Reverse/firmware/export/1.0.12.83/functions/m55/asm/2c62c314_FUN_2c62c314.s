; FUN_2c62c314 @ 0x2c62c314 size=148
  ands r3,r0,#0x3
  beq 0x2c62c332
  rsb.w r3,r3,#0x4
  cbz r2,0x2c62c39c
  add r3,r0
  strb.w r1,[r0],#0x1
  cmp r0,r3
  add.w r2,r2,#0xffffffff
  beq 0x2c62c332
  cmp r2,#0x0
  bne 0x2c62c322
  push {r4,r5,lr}
  lsls r4,r1,#0x10
  cmp r2,#0x20
  add.w r4,r4,r1, lsl #0x8
  add r4,r1
  add.w r4,r4,r1, lsl #0x18
  bls 0x2c62c39e
  sub.w lr,r2,#0x21
  add.w r12,r0,#0x40
  add.w r3,r0,#0x20
  bic r5,lr,#0x1f
  lsr.w lr,lr,#0x5
  add r12,r5
  strd r4,r4,[r3,#-0x20]
  strd r4,r4,[r3,#-0x18]
  strd r4,r4,[r3,#-0x10]
  strd r4,r4,[r3,#-0x8]
  adds r3,#0x20
  cmp r3,r12
  bne 0x2c62c35a
  rsb r3,lr,lr, lsl #0x1b
  subs r2,#0x20
  add.w lr,lr,#0x1
  add.w r2,r2,r3, lsl #0x5
  add.w r0,r0,lr, lsl #0x5
  cmp r2,#0x4
  bls 0x2c62c390
  subs r2,#0x4
  str.w r4,[r0],#0x4
  cmp r2,#0x4
  bhi 0x2c62c386
  add r2,r0
  strb.w r1,[r0],#0x1
  cmp r0,r2
  bne 0x2c62c392
  pop {r4,r5,pc}
  bx lr
  cmp r2,#0x4
  bhi 0x2c62c386
  cmp r2,#0x0
  bne 0x2c62c390
  pop {r4,r5,pc}
