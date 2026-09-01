; FUN_1008cadc @ 0x1008cadc size=30
  movs r2,#0x0
  adds r3,r0,#0x1
  iteee eq
  mov.eq r1,r2
  ldr.ne r3,[0x1008cafc]
  ldr.ne.w r1,[r3,r0,lsl #0x3]
  str.ne.w r2,[r3,r0,lsl #0x3]
  itt ne
  add.ne.w r3,r3,r0, lsl #0x3
  str.ne r2,[r3,#0x4]
  mov r0,r1
  bx lr
