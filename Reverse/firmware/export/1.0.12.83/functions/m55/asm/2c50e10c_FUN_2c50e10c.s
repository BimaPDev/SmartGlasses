; FUN_2c50e10c @ 0x2c50e10c size=38
  push {r3,r4,r5,lr}
  mov r4,r0
  mov r5,r1
  movs r2,#0x0
  ldr r0,[r0,#0x10]
  bl 0x2c606e74
  mov r1,r5
  ldr r0,[r4,#0x14]
  movs r2,#0x0
  bl 0x2c606e74
  mov r1,r5
  ldr r0,[r4,#0x20]
  movs r2,#0x0
  pop.w {r3,r4,r5,lr}
  b.w 0x2c606e74
