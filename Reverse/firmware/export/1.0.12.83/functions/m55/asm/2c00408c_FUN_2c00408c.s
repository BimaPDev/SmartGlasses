; FUN_2c00408c @ 0x2c00408c size=32
  ldr r3,[0x2c0040ac]
  ldr.w r2,[r3,r0,lsl #0x2]
  ldr r3,[r2,#0xc]
  lsls r3,r3,#0x1f
  bmi 0x2c004092
  ldr r3,[r2,#0x40]
  cbz r1,0x2c0040a4
  orr r3,r3,#0xc
  str r3,[r2,#0x40]
  bx lr
  bic r3,r3,#0xc
  str r3,[r2,#0x40]
  bx lr
