; FUN_2c494b68 @ 0x2c494b68 size=40
  push {r4,lr}
  movs r1,#0x0
  sub sp,#0x8
  movs r0,#0x6
  bl 0x2c490020
  cbz r0,0x2c494b7a
  add sp,#0x8
  pop {r4,pc}
  ldr r4,[0x2c494b94]
  movw r1,#0x297
  ldr r0,[0x2c494b98]
  ldr r3,[0x2c494b9c]
  ldr r2,[0x2c494ba0]
  strd r0,r4,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c673d88
