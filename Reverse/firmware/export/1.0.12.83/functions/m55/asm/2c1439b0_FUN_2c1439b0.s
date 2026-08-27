; FUN_2c1439b0 @ 0x2c1439b0 size=16
  ldr.w r3,[r1,#-0x4]
  subs r0,r3,#0x4
  cmp r3,#0x0
  itt lt
  ldr.lt r3,[r1,r0]
  add.lt r0,r0,r3
  bx lr
