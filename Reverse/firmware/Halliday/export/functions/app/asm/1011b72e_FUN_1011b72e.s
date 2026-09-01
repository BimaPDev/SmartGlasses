; FUN_1011b72e @ 0x1011b72e size=36
  push {r4,lr}
  mov.w r3,#0x20
  mrs r4,basepri
  msr basepri_max,r3
  isb #0xf
  movs r2,#0x10
  movs r1,#0x0
  bl 0x1011ea48
  msr basepri,r4
  isb #0xf
  pop {r4,pc}
