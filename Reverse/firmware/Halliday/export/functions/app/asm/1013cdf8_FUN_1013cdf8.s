; FUN_1013cdf8 @ 0x1013cdf8 size=32
  push {r4,lr}
  mov.w r3,#0x20
  mrs r4,basepri
  msr basepri_max,r3
  isb #0xf
  bl 0x101156e8
  msr basepri,r4
  isb #0xf
  pop {r4,pc}
