; FUN_140018b8 @ 0x140018b8 size=28
  ldr r2,[0x140018d4]
  uxtb r0,r1
  ldr r3,[r2,#0x20]
  bic r3,r3,#0xff
  orrs r3,r0
  str r3,[r2,#0x20]
  ldr r3,[r2,#0x38]
  bic r3,r3,#0xff000000
  orr.w r1,r3,r1, lsl #0x18
  str r1,[r2,#0x38]
  bx lr
