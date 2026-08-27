; FUN_2c64f662 @ 0x2c64f662 size=26
  push {r0,r1,r4,lr}
  ldr r4,[sp,#0x10]
  strd r3,r4,[sp,#0x0]
  mov r3,r2
  mov r2,r1
  ldr r1,[r0,#0xc]
  mov.w r0,#0x0
  bl 0x2c654ee8
  add sp,#0x8
  pop {r4,pc}
