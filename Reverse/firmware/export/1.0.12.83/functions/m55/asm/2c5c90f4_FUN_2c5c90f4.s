; FUN_2c5c90f4 @ 0x2c5c90f4 size=28
  push {r4,lr}
  sub sp,#0x10
  movs r4,#0x0
  str r0,[sp,#0xc]
  bl 0x2c5d78f0
  ldr r2,[0x2c5c9110]
  ldr r3,[sp,#0xc]
  ldr r1,[0x2c5c9114]
  str r4,[sp,#0x0]
  bl 0x2c5d7eec
  add sp,#0x10
  pop {r4,pc}
