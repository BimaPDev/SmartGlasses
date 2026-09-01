; FUN_1013cf62 @ 0x1013cf62 size=28
  mov r3,r0
  ldr r0,[r0,#0x0]
  cmp r3,r0
  beq 0x1013cf7c
  ldrd r3,r2,[r0,#0x0]
  str r3,[r2,#0x0]
  str r2,[r3,#0x4]
  movs r3,#0x0
  strd r3,r3,[r0,#0x0]
  b.w 0x10115ecc
  bx lr
