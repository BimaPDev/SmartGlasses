; FUN_2c602608 @ 0x2c602608 size=14
  ldrb r3,[r0,#0x8]
  subs r3,#0x14
  cmp r3,#0x5
  ite ls
  ldr.ls r0,[r0,#0x10]
  mov.hi r0,#0x0
  bx lr
