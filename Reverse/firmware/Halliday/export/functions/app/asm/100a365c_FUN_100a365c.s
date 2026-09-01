; FUN_100a365c @ 0x100a365c size=34
  mov.w r2,#0x20
  mrs r3,basepri
  msr basepri_max,r2
  isb #0xf
  ldr r2,[0x100a3680]
  ldr r2,[r2,#0x0]
  ldrb.w r0,[r2,#0x160]
  msr basepri,r3
  isb #0xf
  bx lr
