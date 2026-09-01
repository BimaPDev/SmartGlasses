; FUN_1013cc34 @ 0x1013cc34 size=44
  push {r3,r4,r5,lr}
  mov r4,r0
  mov.w r3,#0x20
  mrs r5,basepri
  msr basepri_max,r3
  isb #0xf
  bl 0x10114b08
  msr basepri,r5
  isb #0xf
  add.w r0,r4,#0x18
  pop.w {r3,r4,r5,lr}
  b.w 0x1013cdcc
