; FUN_2c5187ec @ 0x2c5187ec size=18
  subs r0,#0x33
  cmp r0,#0x11
  bhi 0x2c5187fa
  ldr r3,[0x2c518800]
  ldr.w r0,[r3,r0,lsl #0x2]
  bx lr
  ldr r0,[0x2c518804]
  bx lr
