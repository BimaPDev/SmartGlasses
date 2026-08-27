; FUN_2c527024 @ 0x2c527024 size=34
  push {r4,lr}
  mov r2,r1
  sub sp,#0x8
  movs r3,#0x0
  ldr r4,[0x2c527048]
  mov r1,r0
  str r2,[sp,#0x4]
  mov r2,r3
  str r4,[sp,#0x0]
  movs r0,#0x2
  bl 0x2c5dc53c
  add sp,#0x8
  pop.w {r4,lr}
  b.w 0x2c5dc5e0
