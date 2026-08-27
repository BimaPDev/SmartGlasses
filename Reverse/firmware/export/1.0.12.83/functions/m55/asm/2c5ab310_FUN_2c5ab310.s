; FUN_2c5ab310 @ 0x2c5ab310 size=38
  push {r4,lr}
  sub sp,#0x8
  mov r4,r1
  bl 0x2c5abf68
  bl 0x2c5ac3d0
  cbnz r0,0x2c5ab324
  add sp,#0x8
  pop {r4,pc}
  ldr r0,[0x2c5ab34c]
  movs r2,#0x51
  ldr r3,[0x2c5ab350]
  ldr r1,[0x2c5ab354]
  strd r0,r4,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c62c82c
