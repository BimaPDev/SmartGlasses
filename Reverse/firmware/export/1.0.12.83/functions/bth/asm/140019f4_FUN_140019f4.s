; FUN_140019f4 @ 0x140019f4 size=22
  movs r2,#0x2
  ldr r0,[0x14001a0c]
  lsl.w r1,r2,r1
  ldr.w r3,[r0,#0xb0]
  bic.w r3,r3,r1
  str.w r3,[r0,#0xb0]
  bx lr
