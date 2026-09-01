; FUN_1013c680 @ 0x1013c680 size=58
  push {r3,r4,r5,lr}
  mov r4,r0
  mov.w r3,#0x20
  mrs r5,basepri
  msr basepri_max,r3
  isb #0xf
  bl 0x10053ea0
  add.w r0,r4,#0xc
  bl 0x1013cd32
  cbz r0,0x1013c6b0
  mov r1,r5
  add.w r0,r4,#0x14
  pop.w {r3,r4,r5,lr}
  b.w 0x10114a14
  msr basepri,r5
  isb #0xf
  pop {r3,r4,r5,pc}
