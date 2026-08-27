; FUN_2c013870 @ 0x2c013870 size=14
  ldr r2,[0x2c013880]
  ldr r1,[r2,#0x50]
  ldr r3,[r2,#0x50]
  subs r3,r3,r1
  cmp r3,r0
  bcc 0x2c013874
  bx lr
