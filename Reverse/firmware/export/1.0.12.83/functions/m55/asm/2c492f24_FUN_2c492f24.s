; FUN_2c492f24 @ 0x2c492f24 size=16
  cmp r0,#0x8
  bhi 0x2c492f30
  ldr r3,[0x2c492f34]
  ldr.w r0,[r3,r0,lsl #0x2]
  bx lr
  ldr r0,[0x2c492f38]
  bx lr
