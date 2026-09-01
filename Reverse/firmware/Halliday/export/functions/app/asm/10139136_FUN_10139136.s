; FUN_10139136 @ 0x10139136 size=36
  push {r4,r5,lr}
  mov.w r5,#0x20
  mrs r4,basepri
  msr basepri_max,r5
  isb #0xf
  add.w r1,r0,r1, lsl #0x2
  str r2,[r1,#0x58]
  str r3,[r1,#0x60]
  msr basepri,r4
  isb #0xf
  pop {r4,r5,pc}
