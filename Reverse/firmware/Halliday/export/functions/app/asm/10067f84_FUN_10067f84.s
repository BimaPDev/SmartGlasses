; FUN_10067f84 @ 0x10067f84 size=26
  cpsid i
  eors r0,r0
  msr basepri,r0
  isb #0xf
  dsb #0xf
  wfi
  cpsie i
  isb #0xf
  bx lr
