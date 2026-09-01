; FUN_1005c270 @ 0x1005c270 size=46
  cmp r0,#0x4
  bhi 0x1005c298
  mov.w r3,#0x20
  mrs r2,basepri
  msr basepri_max,r3
  isb #0xf
  movs r3,#0x18
  muls r3,r0
  movs r0,#0x0
  ldr r1,[0x1005c2a0]
  str r0,[r1,r3]
  msr basepri,r2
  isb #0xf
  bx lr
  mvn r0,#0x15
  bx lr
