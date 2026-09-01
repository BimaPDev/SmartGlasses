; FUN_1013ccd6 @ 0x1013ccd6 size=42
  push {r3,r4,r5,lr}
  mov.w r3,#0x20
  mrs r5,basepri
  msr basepri_max,r3
  isb #0xf
  bl 0x1013cc60
  mov r4,r0
  cbz r0,0x1013ccf4
  bl 0x10114b08
  msr basepri,r5
  isb #0xf
  mov r0,r4
  pop {r3,r4,r5,pc}
