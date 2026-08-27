; FUN_2c4dfafa @ 0x2c4dfafa size=22
  push {r0,r1,r2,lr}
  str r0,[sp,#0x4]
  bl 0x2c4dfa8c
  ldr r3,[r0,#0x0]
  add r1,sp,#0x4
  ldr r3,[r3,#0x10]
  blx r3
  add sp,#0xc
  pop.w pc
