; FUN_1013cc6c @ 0x1013cc6c size=32
  push {r4,lr}
  mov.w r3,#0x20
  mrs r4,basepri
  msr basepri_max,r3
  isb #0xf
  bl 0x10114cf4
  msr basepri,r4
  isb #0xf
  pop {r4,pc}
