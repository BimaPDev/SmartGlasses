; FUN_100cd1e0 @ 0x100cd1e0 size=26
  push {r0,r1,r2,lr}
  movs r3,#0x12
  mov r2,r1
  movs r1,#0x4
  strd r3,r1,[sp,#0x0]
  ldr r3,[0x100cd1fc]
  ldr r1,[0x100cd200]
  bl 0x10134ab0
  add sp,#0xc
  pop.w pc
