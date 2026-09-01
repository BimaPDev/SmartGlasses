; FUN_10112e70 @ 0x10112e70 size=12
  ldr r3,[0x10112e7c]
  str r3,[r0,#0x0]
  ldr r0,[0x10112e80]
  subs r0,r0,r3
  asrs r0,r0,#0x5
  bx lr
