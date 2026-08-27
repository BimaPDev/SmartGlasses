; FUN_2c5e9734 @ 0x2c5e9734 size=32
  push {r4,lr}
  sub sp,#0x8
  bl 0x2c5ec194
  cmp r0,#0x1
  beq 0x2c5e975e
  ldr r4,[0x2c5e9764]
  movs r0,#0x4
  ldr r1,[0x2c5e9768]
  movs r2,#0x28
  ldr r3,[0x2c5e976c]
  str r4,[sp,#0x0]
  bl 0x2c62c82c
  add sp,#0x8
  pop {r4,pc}
