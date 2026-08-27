; FUN_2c66ad16 @ 0x2c66ad16 size=36
  push {r0,r1,r4,lr}
  ldr r4,[r3,#0x0]
  mov r1,r0
  cbz r4,0x2c66ad2c
  ldr r3,[r4,#0x18]
  cbnz r3,0x2c66ad2c
  str r0,[sp,#0x4]
  mov r0,r4
  bl 0x2c668868
  ldr r1,[sp,#0x4]
  ldr r2,[r4,#0x8]
  mov r0,r4
  add sp,#0x8
  pop.w {r4,lr}
  b.w 0x2c66ac74
