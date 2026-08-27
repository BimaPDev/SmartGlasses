; FUN_2c5e5fb6 @ 0x2c5e5fb6 size=36
  push {r4,r5,lr}
  clz r4,r0
  sub sp,#0xc
  lsrs r4,r4,#0x5
  cbz r0,0x2c5e5fe8
  ldr r5,[0x2c5e5ff0]
  movs r0,#0x4
  ldr r1,[0x2c5e5ff4]
  ldr r3,[0x2c5e5ff8]
  strd r5,r2,[sp,#0x0]
  movw r2,#0x123
  bl 0x2c62c82c
  add sp,#0xc
  pop {r4,r5,pc}
