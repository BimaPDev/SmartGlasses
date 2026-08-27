; FUN_2c4dc860 @ 0x2c4dc860 size=22
  push {r0,r1,r2,lr}
  str r0,[sp,#0x4]
  bl 0x2c4db8c8
  ldr r3,[r0,#0x0]
  add r1,sp,#0x4
  ldr r3,[r3,#0x10]
  blx r3
  add sp,#0xc
  pop.w pc
