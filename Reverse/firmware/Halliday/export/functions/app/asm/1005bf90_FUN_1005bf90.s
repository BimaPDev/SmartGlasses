; FUN_1005bf90 @ 0x1005bf90 size=46
  mov.w r3,#0x20
  mrs r1,basepri
  msr basepri_max,r3
  isb #0xf
  movs r3,#0x0
  str r3,[r0,#0x0]
  ldr r3,[0x1005bfc0]
  ldr r2,[r3,#0x4]
  cbnz r2,0x1005bfb8
  strd r0,r0,[r3,#0x0]
  msr basepri,r1
  isb #0xf
  bx lr
  str r0,[r2,#0x0]
  str r0,[r3,#0x4]
  b 0x1005bfae
