; FUN_1402a27c @ 0x1402a27c size=20
  ldr r3,[0x1402a290]
  ldrb r3,[r3,#0x0]
  subs r3,#0x1
  cmp r3,#0x1
  bls 0x1402a28c
  mov.w r0,#0xffffffff
  bx lr
  b.w 0x14029e30
