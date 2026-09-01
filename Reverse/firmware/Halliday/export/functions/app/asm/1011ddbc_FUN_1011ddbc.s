; FUN_1011ddbc @ 0x1011ddbc size=24
  movs r3,#0x0
  push {r0,r1,r2,lr}
  movs r1,#0x1
  add r2,sp,#0x4
  ldr r0,[r0,#0xc]
  str r3,[sp,#0x4]
  bl 0x1011dd7a
  ldr r0,[sp,#0x4]
  add sp,#0xc
  pop.w pc
