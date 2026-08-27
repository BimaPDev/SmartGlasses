; FUN_2c642ee0 @ 0x2c642ee0 size=52
  push {r4,r5,r6,lr}
  ldr r6,[0x2c642f88]
  sub sp,#0x38
  ldr r3,[0x2c642f8c]
  mov r5,r1
  ldrb r2,[r6,#0x0]
  ldr r4,[0x2c642f90]
  add.w r3,r3,r2, lsl #0x3
  ldr r1,[0x2c642f94]
  ldr r4,[r4,#0x0]
  str r4,[sp,#0x34]
  mov.w r4,#0x0
  mov r4,r0
  ldr r2,[r3,#0x4]
  str r0,[sp,#0x4]
  movs r0,#0x4
  ldr r3,[0x2c642f98]
  str r1,[sp,#0x0]
  str r2,[sp,#0x8]
  movw r2,#0x2b5
  ldr r1,[0x2c642f9c]
  bl 0x2c62c82c
