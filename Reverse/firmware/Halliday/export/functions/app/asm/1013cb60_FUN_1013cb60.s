; FUN_1013cb60 @ 0x1013cb60 size=36
  mov.w r2,#0x20
  mrs r3,basepri
  msr basepri_max,r2
  isb #0xf
  adds r0,#0xc
  lda r0,[r0]
  msr basepri,r3
  isb #0xf
  and r0,r0,#0xf
  bx lr
