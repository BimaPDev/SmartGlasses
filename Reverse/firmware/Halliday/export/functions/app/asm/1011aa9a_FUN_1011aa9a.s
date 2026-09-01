; FUN_1011aa9a @ 0x1011aa9a size=22
  sub sp,#0x10
  add r3,sp,#0x10
  stmdb r3,{r0,r1,r2}
  movs r3,#0x0
  msr basepri,r3
  isb #0xf
  add sp,#0x10
  bx lr
