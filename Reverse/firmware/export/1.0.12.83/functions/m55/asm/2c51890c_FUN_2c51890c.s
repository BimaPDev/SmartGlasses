; FUN_2c51890c @ 0x2c51890c size=20
  subs r0,#0x1
  uxtb r0,r0
  cmp r0,#0xe
  bhi 0x2c51891c
  ldr r3,[0x2c518920]
  ldr.w r0,[r3,r0,lsl #0x2]
  bx lr
  ldr r0,[0x2c518924]
  bx lr
