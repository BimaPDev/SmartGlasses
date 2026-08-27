; FUN_1402e1c8 @ 0x1402e1c8 size=30
  mov r3,r0
  ldr r2,[0x1402e1e8]
  ubfx r3,r3,#0x0,#0xb
  ldr.w r0,[r2,#0x168]
  orr.w r3,r3,r3, lsl #0xb
  bic.w r3,r0,r3
  orr r3,r3,#0xca000000
  str.w r3,[r2,#0x168]
  bx lr
