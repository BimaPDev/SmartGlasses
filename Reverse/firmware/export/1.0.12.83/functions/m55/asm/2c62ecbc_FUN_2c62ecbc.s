; FUN_2c62ecbc @ 0x2c62ecbc size=100
  cmp r2,#0x10
  bls 0x2c62ed1a
  add.w r3,r0,#0x40
  mov r12,r2
  sub.w r12,r12,#0x10
  cmp.w r12,#0x10
  strd r1,r1,[r3,#-0x40]
  strd r1,r1,[r3,#-0x38]
  strd r1,r1,[r3,#-0x30]
  strd r1,r1,[r3,#-0x28]
  strd r1,r1,[r3,#-0x20]
  strd r1,r1,[r3,#-0x18]
  strd r1,r1,[r3,#-0x10]
  strd r1,r1,[r3,#-0x8]
  add.w r3,r3,#0x40
  bhi 0x2c62ecc6
  sub.w r3,r2,#0x11
  subs r2,#0x10
  lsrs r3,r3,#0x4
  add.w r12,r3,#0x1
  rsb r3,r3,r3, lsl #0x1c
  add.w r0,r0,r12, lsl #0x6
  add.w r2,r2,r3, lsl #0x4
  add.w r2,r0,r2, lsl #0x2
  str.w r1,[r0],#0x4
  cmp r0,r2
  bne 0x2c62ed10
  bx lr
  cmp r2,#0x0
  bne 0x2c62ed0c
  bx lr
