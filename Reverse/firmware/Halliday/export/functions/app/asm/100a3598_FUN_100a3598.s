; FUN_100a3598 @ 0x100a3598 size=36
  mov.w r2,#0x20
  mrs r3,basepri
  msr basepri_max,r2
  isb #0xf
  movs r0,#0x1
  ldr r2,[0x100a35bc]
  ldr r2,[r2,#0x0]
  strb.w r0,[r2,#0x160]
  msr basepri,r3
  isb #0xf
  bx lr
