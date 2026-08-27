; FUN_1400166c @ 0x1400166c size=24
  ldr r0,[0x14001684]
  ldr r3,[0x14001688]
  ldr r2,[r0,#0x4]
  and.w r1,r3,r1, lsl #0xc
  bic r2,r2,#0x1fe0000
  bic r2,r2,#0x1f000
  orrs r1,r2
  str r1,[r0,#0x4]
  bx lr
