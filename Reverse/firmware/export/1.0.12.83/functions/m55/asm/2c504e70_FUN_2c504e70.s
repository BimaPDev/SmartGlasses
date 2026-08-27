; FUN_2c504e70 @ 0x2c504e70 size=40
  push {r3,r4,r5,lr}
  mov r4,r1
  mov r5,r0
  movs r2,#0x0
  ldr r0,[r0,#0x10]
  bl 0x2c606e74
  mov r1,r4
  movs r2,#0x0
  ldr r0,[r5,#0x14]
  bl 0x2c606e74
  bl 0x2c63e1f0
  mov r1,r4
  movs r2,#0x0
  pop.w {r3,r4,r5,lr}
  b.w 0x2c606e74
