; FUN_1011b89e @ 0x1011b89e size=40
  mov.w r3,#0x20
  mrs r2,basepri
  msr basepri_max,r3
  isb #0xf
  ldr r3,[r0,#0x0]
  add r3,r1
  str r3,[r0,#0x0]
  ldr r3,[r0,#0x8]
  subs r1,r3,r1
  str r1,[r0,#0x8]
  msr basepri,r2
  isb #0xf
  movs r0,#0x0
  bx lr
