; FUN_2c4e0418 @ 0x2c4e0418 size=20
  cbz r0,0x2c4e042a
  mov r3,r0
  ldrsb.w r2,[r3],#0x1
  cbz r2,0x2c4e042a
  cmp r2,#0x3a
  it eq
  mov.eq r0,r3
  b 0x2c4e041c
  bx lr
