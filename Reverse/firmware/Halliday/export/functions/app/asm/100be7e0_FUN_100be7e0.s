; FUN_100be7e0 @ 0x100be7e0 size=18
  cbz r1,0x100be7e6
  b.w 0x100be38c
  ldr r1,[0x100be7f4]
  ldrb r3,[r1,#0x14]
  bic.w r0,r3,r0
  strb r0,[r1,#0x14]
  bx lr
