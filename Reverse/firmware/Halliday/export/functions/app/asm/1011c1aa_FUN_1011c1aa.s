; FUN_1011c1aa @ 0x1011c1aa size=16
  cbz r1,0x1011c1b6
  ldr r3,[r0,#0x4]
  cmp r1,r3
  ite eq
  mov.eq r1,#0x0
  ldr.ne r1,[r1,#0x0]
  mov r0,r1
  bx lr
