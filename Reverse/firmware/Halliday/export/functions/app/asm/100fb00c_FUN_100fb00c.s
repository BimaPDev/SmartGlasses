; FUN_100fb00c @ 0x100fb00c size=24
  mov r3,r0
  ldrd r2,r0,[r0,#0x20]
  adds r1,r2,#0x3
  cmp r0,r1
  itet hi
  ldr.hi.w r0,[r2],#0x4
  mov.ls r0,#0x0
  rev.hi r0,r0
  str r2,[r3,#0x20]
  bx lr
