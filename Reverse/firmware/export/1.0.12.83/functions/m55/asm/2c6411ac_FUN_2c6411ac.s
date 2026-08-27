; FUN_2c6411ac @ 0x2c6411ac size=32
  push {r4,lr}
  sub sp,#0x8
  bl 0x2c5e1150
  cbnz r0,0x2c6411bc
  movs r0,#0x1
  add sp,#0x8
  pop {r4,pc}
  ldr r4,[0x2c6411d4]
  movs r2,#0x22
  ldr r3,[0x2c6411d8]
  movs r0,#0x4
  ldr r1,[0x2c6411dc]
  str r4,[sp,#0x0]
  bl 0x2c62c82c
