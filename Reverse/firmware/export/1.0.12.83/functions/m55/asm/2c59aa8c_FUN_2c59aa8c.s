; FUN_2c59aa8c @ 0x2c59aa8c size=36
  push {r4,r5,lr}
  adds r0,#0x7c
  sub sp,#0x14
  mov r5,r2
  mov r4,r3
  movs r1,#0x20
  str r0,[sp,#0xc]
  bl 0x2c62c3b0
  ldr r2,[0x2c59aab0]
  movs r1,#0x1f
  ldr r0,[sp,#0xc]
  strd r5,r4,[sp,#0x0]
  bl 0x2c62dbd4
  add sp,#0x14
  pop {r4,r5,pc}
