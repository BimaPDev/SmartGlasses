; FUN_1011c09e @ 0x1011c09e size=26
  push {r0,r1,r2,r3,r4,lr}
  strd r1,r2,[sp,#0x4]
  movs r2,#0x2
  strb.w r2,[sp,#0xc]
  movs r2,#0x1
  add r1,sp,#0x4
  bl 0x1011c062
  add sp,#0x14
  pop.w pc
