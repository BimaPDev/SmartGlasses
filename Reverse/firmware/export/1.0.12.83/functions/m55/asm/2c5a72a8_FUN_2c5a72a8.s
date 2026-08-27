; FUN_2c5a72a8 @ 0x2c5a72a8 size=36
  mov r12,r2
  mov r2,r1
  mov r1,r0
  movs r0,#0xb
  push {r4,r5,lr}
  mov r5,r3
  sub sp,#0xc
  ldr r4,[0x2c5a72cc]
  mov r3,r12
  strd r4,r5,[sp,#0x0]
  bl 0x2c5dc53c
  add sp,#0xc
  pop.w {r4,r5,lr}
  b.w 0x2c5dc5e0
