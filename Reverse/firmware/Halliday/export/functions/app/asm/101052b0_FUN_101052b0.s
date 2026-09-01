; FUN_101052b0 @ 0x101052b0 size=26
  add.w r2,r0,r2, lsl #0x2
  ldr.w r0,[r2,#0x10c]
  cmp r1,#0x0
  ittee ge
  add.ge r0,r0,r1
  bic.ge.w r0,r0,r0, asr #0x1f
  sub.lt r0,r1,r0
  and.lt.w r0,r0,r0, asr #0x1f
  bx lr
