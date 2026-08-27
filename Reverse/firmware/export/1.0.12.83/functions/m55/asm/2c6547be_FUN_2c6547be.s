; FUN_2c6547be @ 0x2c6547be size=24
  push {r0,r1,r2,lr}
  str r2,[sp,#0x0]
  ldrd r2,r3,[r1,#0x0]
  ldr r1,[r0,#0x10]
  mov.w r0,#0x0
  bl 0x2c64ffc8
  add sp,#0xc
  pop.w pc
