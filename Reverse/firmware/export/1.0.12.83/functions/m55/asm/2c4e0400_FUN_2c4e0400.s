; FUN_2c4e0400 @ 0x2c4e0400 size=24
  cbz r0,0x2c4e0416
  mov r3,r0
  ldrsb.w r2,[r3],#0x1
  cbz r2,0x2c4e0416
  cmp r2,#0x2f
  beq 0x2c4e0412
  cmp r2,#0x5c
  bne 0x2c4e0404
  mov r0,r3
  b 0x2c4e0404
  bx lr
