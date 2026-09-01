; FUN_100c6e58 @ 0x100c6e58 size=12
  cmp r0,#0x29
  itte ls
  ldr.ls r3,[0x100c6e64]
  ldrb.ls r0,[r3,r0]
  mov.hi r0,#0x8
  bx lr
