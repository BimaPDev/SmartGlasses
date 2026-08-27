; FUN_2c62c928 @ 0x2c62c928 size=16
  adds r1,#0x3
  movs r3,#0x0
  bic r1,r1,#0x3
  strd r3,r3,[r0,#0x4]
  str r1,[r0,#0x0]
  bx lr
