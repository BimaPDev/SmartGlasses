; FUN_2c4ed6ec @ 0x2c4ed6ec size=40
  push {r4,lr}
  movs r1,#0x0
  mov r4,r0
  bl 0x2c4ee058
  ldr r3,[0x2c4ed714]
  mov r2,r0
  movs r1,#0x0
  mov r0,r4
  str r2,[r3,#0x0]
  bl 0x2c4ee058
  ldr r3,[0x2c4ed718]
  mov r2,r0
  movs r0,#0x0
  str r2,[r3,#0x0]
  pop.w {r4,lr}
  b.w 0x2c4ed5c8
