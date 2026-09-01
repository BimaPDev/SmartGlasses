; FUN_10124c94 @ 0x10124c94 size=18
  mov r3,r1
  ldrh r2,[r0,#0x28]
  bics r3,r2
  orr.w r1,r2,r1
  beq 0x10124ca4
  b.w 0x101249ee
  bx lr
