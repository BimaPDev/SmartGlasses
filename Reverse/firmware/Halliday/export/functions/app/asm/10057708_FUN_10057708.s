; FUN_10057708 @ 0x10057708 size=30
  mov.w r2,#0x20
  mrs r3,basepri
  msr basepri_max,r2
  isb #0xf
  ldr r2,[0x10057728]
  str r0,[r2,#0x0]
  msr basepri,r3
  isb #0xf
  bx lr
