; FUN_2c0040e8 @ 0x2c0040e8 size=24
  cbnz r1,0x2c0040fe
  ldr r3,[0x2c004100]
  ldr.w r2,[r3,r0,lsl #0x2]
  ldr r3,[r2,#0xc]
  lsls r3,r3,#0x1f
  bmi 0x2c0040f0
  ldr r3,[r2,#0x34]
  bic r3,r3,#0x100
  str r3,[r2,#0x34]
  bx lr
