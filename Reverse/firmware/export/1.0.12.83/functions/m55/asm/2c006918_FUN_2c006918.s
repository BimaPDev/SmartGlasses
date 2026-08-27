; FUN_2c006918 @ 0x2c006918 size=24
  bic r2,r2,#0x1c
  str r2,[r1,#0x70]
  cbnz r3,0x2c006928
  ldr r2,[0x2c00694c]
  mov.w r1,#0xffffffff
  str r1,[r2,#0x0]
  msr basepri,r3
  pop.w pc
