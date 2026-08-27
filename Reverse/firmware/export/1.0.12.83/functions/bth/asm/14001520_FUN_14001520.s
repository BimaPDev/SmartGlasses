; FUN_14001520 @ 0x14001520 size=24
  ldr r3,[0x14001538]
  ldr r0,[r3,#0xc]
  ands r0,r0,#0x1
  bne 0x14001522
  ldr r2,[r3,#0x4]
  bic r12,r2,#0xff0
  orr.w r1,r12,r1, lsl #0x4
  str r1,[r3,#0x4]
  bx lr
