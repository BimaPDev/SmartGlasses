; FUN_2c4ba7fc @ 0x2c4ba7fc size=34
  push {r4,lr}
  ldr r4,[0x2c4ba838]
  and r3,r3,#0xf00000
  ldr r1,[r4,#0x7c]
  bic r1,r1,#0xf00000
  orrs r3,r1
  str r3,[r4,#0x7c]
  cbnz r2,0x2c4ba818
  ldr r3,[0x2c4ba830]
  mov.w r1,#0xffffffff
  str r1,[r3,#0x0]
  msr basepri,r2
  pop {r4,pc}
