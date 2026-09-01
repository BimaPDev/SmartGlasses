; FUN_1013cdcc @ 0x1013cdcc size=44
  push {r4,lr}
  mov.w r2,#0x20
  mrs r4,basepri
  msr basepri_max,r2
  isb #0xf
  ldr r3,[r0,#0x0]
  cbz r3,0x1013cdf2
  bl 0x101156b4
  movs r0,#0x0
  msr basepri,r4
  isb #0xf
  pop {r4,pc}
  mvn r0,#0x15
  b 0x1013cde8
