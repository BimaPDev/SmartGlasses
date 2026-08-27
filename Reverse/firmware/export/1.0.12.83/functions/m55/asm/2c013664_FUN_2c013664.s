; FUN_2c013664 @ 0x2c013664 size=38
  push {r4,lr}
  subs r4,r0,#0x0
  blt 0x2c01367a
  cbnz r4,0x2c013674
  ldr r3,[0x2c01368c]
  mov.w r2,#0xffffffff
  str r2,[r3,#0x0]
  msr basepri,r4
  pop {r4,pc}
  movs r0,#0x0
  ldr r3,[0x2c013690]
  bic r4,r4,#0x80000000
  strb r0,[r3,#0x0]
  bl 0x2c013a9c
  b 0x2c01366a
