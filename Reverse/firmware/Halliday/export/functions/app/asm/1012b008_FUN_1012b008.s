; FUN_1012b008 @ 0x1012b008 size=16
  movs r3,#0x0
  adds r1,#0x3
  bic r1,r1,#0x3
  strd r3,r3,[r0,#0x4]
  str r1,[r0,#0x0]
  bx lr
