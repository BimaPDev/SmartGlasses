; FUN_100faff0 @ 0x100faff0 size=28
  mov r2,r0
  ldrd r3,r0,[r0,#0x20]
  adds r1,r3,#0x1
  cmp r0,r1
  ittet hi
  ldrb.hi r0,[r3,#0x1]
  ldrb.hi.w r1,[r3],#0x2
  mov.ls r0,#0x0
  orr.hi.w r0,r0,r1, lsl #0x8
  str r3,[r2,#0x20]
  bx lr
