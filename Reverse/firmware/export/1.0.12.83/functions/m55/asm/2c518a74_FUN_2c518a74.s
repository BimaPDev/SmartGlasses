; FUN_2c518a74 @ 0x2c518a74 size=20
  subs r0,#0x1
  uxtb r0,r0
  cmp r0,#0x3
  bhi 0x2c518a84
  ldr r3,[0x2c518a88]
  ldr.w r0,[r3,r0,lsl #0x2]
  bx lr
  ldr r0,[0x2c518a8c]
  bx lr
